#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82118420"))) PPC_WEAK_FUNC(sub_82118420);
PPC_FUNC_IMPL(__imp__sub_82118420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82118428;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249928
	ctx.lr = 0x82118430;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118690
	if (ctx.cr6.eq) goto loc_82118690;
	// lwz r11,8836(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118690
	if (ctx.cr6.eq) goto loc_82118690;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x821142a0
	ctx.lr = 0x82118458;
	sub_821142A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211846c
	if (ctx.cr6.eq) goto loc_8211846C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82117400
	ctx.lr = 0x8211846C;
	sub_82117400(ctx, base);
loc_8211846C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r25,8
	ctx.r25.s64 = 8;
	// lfs f30,10376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f30.f64 = double(temp.f32);
	// li r26,3
	ctx.r26.s64 = 3;
	// lfs f31,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,10340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10340);
	ctx.f29.f64 = double(temp.f32);
loc_82118490:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82117638
	ctx.lr = 0x8211849C;
	sub_82117638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118684
	if (ctx.cr6.eq) goto loc_82118684;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118684
	if (ctx.cr6.eq) goto loc_82118684;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82118500
	if (!ctx.cr6.eq) goto loc_82118500;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82118684
	if (ctx.cr6.eq) goto loc_82118684;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821184E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821184FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82118684
	goto loc_82118684;
loc_82118500:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8211854c
	if (!ctx.cr6.eq) goto loc_8211854C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211854c
	if (!ctx.cr6.eq) goto loc_8211854C;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bge cr6,0x8211854c
	if (!ctx.cr6.lt) goto loc_8211854C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211854c
	if (ctx.cr6.eq) goto loc_8211854C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211854C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211854C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82118588
	if (!ctx.cr6.eq) goto loc_82118588;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82118588
	if (ctx.cr6.eq) goto loc_82118588;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82118588
	if (!ctx.cr6.gt) goto loc_82118588;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82118588:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821185c4
	if (!ctx.cr6.eq) goto loc_821185C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821185c4
	if (ctx.cr6.eq) goto loc_821185C4;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x821185c4
	if (!ctx.cr6.lt) goto loc_821185C4;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_821185C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821143a0
	ctx.lr = 0x821185D0;
	sub_821143A0(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82114410
	ctx.lr = 0x821185F4;
	sub_82114410(ctx, base);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lfs f11,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82118684
	if (ctx.cr6.eq) goto loc_82118684;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r4,7
	ctx.r4.s64 = 7;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82118680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82118684:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,100
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 100, ctx.xer);
	// blt cr6,0x82118490
	if (ctx.cr6.lt) goto loc_82118490;
loc_82118690:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249974
	ctx.lr = 0x8211869C;
	sub_82249974(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821186A0"))) PPC_WEAK_FUNC(sub_821186A0);
PPC_FUNC_IMPL(__imp__sub_821186A0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118728
	if (ctx.cr6.eq) goto loc_82118728;
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x82118728
	if (ctx.cr6.eq) goto loc_82118728;
	// cmplwi cr6,r5,100
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 100, ctx.xer);
	// bge cr6,0x82118728
	if (!ctx.cr6.lt) goto loc_82118728;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82117638
	ctx.lr = 0x821186D0;
	sub_82117638(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118728
	if (ctx.cr6.eq) goto loc_82118728;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118728
	if (ctx.cr6.eq) goto loc_82118728;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82118728
	if (ctx.cr6.gt) goto loc_82118728;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82118728
	// bdzf 4*cr6+eq,0x82118714
	// bdzf 4*cr6+eq,0x82118728
	// bdzf 4*cr6+eq,0x82118714
	// bdzf 4*cr6+eq,0x82118714
	// bne cr6,0x82118714
	if (!ctx.cr6.eq) goto loc_82118714;
loc_82118714:
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
loc_82118728:
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

__attribute__((alias("__imp__sub_8211873C"))) PPC_WEAK_FUNC(sub_8211873C);
PPC_FUNC_IMPL(__imp__sub_8211873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82118740"))) PPC_WEAK_FUNC(sub_82118740);
PPC_FUNC_IMPL(__imp__sub_82118740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82118748;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211881c
	if (ctx.cr6.eq) goto loc_8211881C;
	// lwz r11,8836(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211881c
	if (ctx.cr6.eq) goto loc_8211881C;
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x821187c0
	if (ctx.cr6.eq) goto loc_821187C0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82117638
	ctx.lr = 0x82118778;
	sub_82117638(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211881c
	if (ctx.cr6.eq) goto loc_8211881C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211881c
	if (ctx.cr6.eq) goto loc_8211881C;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211881c
	if (ctx.cr6.eq) goto loc_8211881C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821187B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821187C0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821187C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82117638
	ctx.lr = 0x821187D4;
	sub_82117638(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118810
	if (ctx.cr6.eq) goto loc_82118810;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82118810
	if (ctx.cr6.eq) goto loc_82118810;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118810
	if (ctx.cr6.eq) goto loc_82118810;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82118810:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// blt cr6,0x821187c8
	if (ctx.cr6.lt) goto loc_821187C8;
loc_8211881C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82118824"))) PPC_WEAK_FUNC(sub_82118824);
PPC_FUNC_IMPL(__imp__sub_82118824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82118828"))) PPC_WEAK_FUNC(sub_82118828);
PPC_FUNC_IMPL(__imp__sub_82118828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82118830;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118904
	if (ctx.cr6.eq) goto loc_82118904;
	// lwz r11,8836(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118904
	if (ctx.cr6.eq) goto loc_82118904;
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x821188a8
	if (ctx.cr6.eq) goto loc_821188A8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117638
	ctx.lr = 0x82118860;
	sub_82117638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118904
	if (ctx.cr6.eq) goto loc_82118904;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118904
	if (ctx.cr6.eq) goto loc_82118904;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118904
	if (ctx.cr6.eq) goto loc_82118904;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821188A8:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821188B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117638
	ctx.lr = 0x821188BC;
	sub_82117638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821188f8
	if (ctx.cr6.eq) goto loc_821188F8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821188f8
	if (ctx.cr6.eq) goto loc_821188F8;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821188f8
	if (ctx.cr6.eq) goto loc_821188F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821188F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_821188F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// blt cr6,0x821188b0
	if (ctx.cr6.lt) goto loc_821188B0;
loc_82118904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211890C"))) PPC_WEAK_FUNC(sub_8211890C);
PPC_FUNC_IMPL(__imp__sub_8211890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82118910"))) PPC_WEAK_FUNC(sub_82118910);
PPC_FUNC_IMPL(__imp__sub_82118910) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211896c
	if (ctx.cr6.eq) goto loc_8211896C;
	// lwz r11,8836(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211896c
	if (ctx.cr6.eq) goto loc_8211896C;
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x8211896c
	if (ctx.cr6.eq) goto loc_8211896C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82117638
	ctx.lr = 0x82118944;
	sub_82117638(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211896c
	if (ctx.cr6.eq) goto loc_8211896C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211896c
	if (ctx.cr6.eq) goto loc_8211896C;
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
loc_8211896C:
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

__attribute__((alias("__imp__sub_82118980"))) PPC_WEAK_FUNC(sub_82118980);
PPC_FUNC_IMPL(__imp__sub_82118980) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821189cc
	if (ctx.cr6.eq) goto loc_821189CC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82117638
	ctx.lr = 0x821189A8;
	sub_82117638(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821189cc
	if (ctx.cr6.eq) goto loc_821189CC;
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
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
loc_821189CC:
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

__attribute__((alias("__imp__sub_821189E4"))) PPC_WEAK_FUNC(sub_821189E4);
PPC_FUNC_IMPL(__imp__sub_821189E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821189E8"))) PPC_WEAK_FUNC(sub_821189E8);
PPC_FUNC_IMPL(__imp__sub_821189E8) {
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
	// addi r10,r11,28200
	ctx.r10.s64 = ctx.r11.s64 + 28200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82117f70
	ctx.lr = 0x82118A14;
	sub_82117F70(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82118a30
	if (ctx.cr6.eq) goto loc_82118A30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82118A2C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82118A30:
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

__attribute__((alias("__imp__sub_82118A48"))) PPC_WEAK_FUNC(sub_82118A48);
PPC_FUNC_IMPL(__imp__sub_82118A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82118A50;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118c58
	if (ctx.cr6.eq) goto loc_82118C58;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117658
	ctx.lr = 0x82118A78;
	sub_82117658(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82118c58
	if (ctx.cr6.eq) goto loc_82118C58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821176e8
	ctx.lr = 0x82118A8C;
	sub_821176E8(ctx, base);
	// lwz r11,8836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82118c58
	if (ctx.cr6.eq) goto loc_82118C58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82118AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82118c58
	if (ctx.cr6.lt) goto loc_82118C58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821142a0
	ctx.lr = 0x82118AE4;
	sub_821142A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118c58
	if (ctx.cr6.eq) goto loc_82118C58;
	// clrlwi r26,r28,16
	ctx.r26.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82117638
	ctx.lr = 0x82118B00;
	sub_82117638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118c58
	if (ctx.cr6.eq) goto loc_82118C58;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82114490
	ctx.lr = 0x82118B30;
	sub_82114490(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114568
	ctx.lr = 0x82118B40;
	sub_82114568(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x82114338
	ctx.lr = 0x82118B58;
	sub_82114338(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,8616(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82114410
	ctx.lr = 0x82118B84;
	sub_82114410(ctx, base);
	// clrldi r6,r3,32
	ctx.r6.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r4,7
	ctx.r4.s64 = 7;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,10376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f4,88(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// bctrl 
	ctx.lr = 0x82118BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r28,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r7,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,70(r31)
	PPC_STORE_U32(ctx.r31.u32 + 70, ctx.r11.u32);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// sth r6,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r6.u16);
	// stw r31,82(r31)
	PPC_STORE_U32(ctx.r31.u32 + 82, ctx.r31.u32);
	// bl 0x82117400
	ctx.lr = 0x82118C24;
	sub_82117400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82118c44
	if (ctx.cr6.eq) goto loc_82118C44;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82118C44:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82118C58:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82118C70"))) PPC_WEAK_FUNC(sub_82118C70);
PPC_FUNC_IMPL(__imp__sub_82118C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82118C78;
	sub_82248778(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118dc0
	if (ctx.cr6.eq) goto loc_82118DC0;
	// lwz r11,8836(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118dc0
	if (ctx.cr6.eq) goto loc_82118DC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,10412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
	ctx.f29.f64 = double(temp.f32);
	// li r26,5
	ctx.r26.s64 = 5;
	// lfs f30,8056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8056);
	ctx.f30.f64 = double(temp.f32);
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
	// lfs f31,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,-7560
	ctx.r27.s64 = ctx.r11.s64 + -7560;
loc_82118CD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117638
	ctx.lr = 0x82118CE0;
	sub_82117638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118db4
	if (ctx.cr6.eq) goto loc_82118DB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118db4
	if (ctx.cr6.eq) goto loc_82118DB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82118d94
	if (!ctx.cr6.eq) goto loc_82118D94;
	// lwz r11,-4980(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82118d94
	if (!ctx.cr6.eq) goto loc_82118D94;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82118d54
	if (ctx.cr6.eq) goto loc_82118D54;
	// bctrl 
	ctx.lr = 0x82118D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82118db4
	if (ctx.cr6.eq) goto loc_82118DB4;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82118db4
	goto loc_82118DB4;
loc_82118D54:
	// bctrl 
	ctx.lr = 0x82118D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82118db4
	if (ctx.cr6.eq) goto loc_82118DB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82118db4
	goto loc_82118DB4;
loc_82118D94:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118db4
	if (ctx.cr6.eq) goto loc_82118DB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82118DB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// blt cr6,0x82118cd4
	if (ctx.cr6.lt) goto loc_82118CD4;
loc_82118DC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82118DD4"))) PPC_WEAK_FUNC(sub_82118DD4);
PPC_FUNC_IMPL(__imp__sub_82118DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82118DD8"))) PPC_WEAK_FUNC(sub_82118DD8);
PPC_FUNC_IMPL(__imp__sub_82118DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82118DE0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// lwz r11,8836(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117638
	ctx.lr = 0x82118E14;
	sub_82117638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118e68
	if (ctx.cr6.eq) goto loc_82118E68;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82118E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82118E68:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82118ecc
	if (ctx.cr6.eq) goto loc_82118ECC;
	// bctrl 
	ctx.lr = 0x82118E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lfs f0,10376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,8056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82118ECC:
	// bctrl 
	ctx.lr = 0x82118ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82118f20
	if (ctx.cr6.eq) goto loc_82118F20;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lfs f13,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,10376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,10412(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// stfs f8,24(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
loc_82118F20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82118F28"))) PPC_WEAK_FUNC(sub_82118F28);
PPC_FUNC_IMPL(__imp__sub_82118F28) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82118f60
	if (!ctx.cr6.eq) goto loc_82118F60;
loc_82118F48:
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
loc_82118F60:
	// lwz r11,8836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82118f48
	if (ctx.cr6.eq) goto loc_82118F48;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82117638
	ctx.lr = 0x82118F74;
	sub_82117638(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82118fe8
	if (!ctx.cr6.eq) goto loc_82118FE8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82119170
	if (!ctx.cr6.eq) goto loc_82119170;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,8056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x8211916c
	goto loc_8211916C;
loc_82118FE8:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82119060
	if (!ctx.cr6.eq) goto loc_82119060;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82119170
	if (!ctx.cr6.eq) goto loc_82119170;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r9,7
	ctx.r9.s64 = 7;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,-7560
	ctx.r8.s64 = ctx.r10.s64 + -7560;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f12,8056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfd f11,28248(r6)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 28248);
	// lfs f13,8620(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8620);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmul f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 * ctx.f11.f64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x82119170
	goto loc_82119170;
loc_82119060:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821190e8
	if (!ctx.cr6.eq) goto loc_821190E8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82119170
	if (!ctx.cr6.eq) goto loc_82119170;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,-7560
	ctx.r6.s64 = ctx.r8.s64 + -7560;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,10376(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,8056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,28248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28248);
	// fmul f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfs f0,8620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x82119168
	goto loc_82119168;
loc_821190E8:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x82119170
	if (!ctx.cr6.eq) goto loc_82119170;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82119170
	if (!ctx.cr6.eq) goto loc_82119170;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,-7560
	ctx.r6.s64 = ctx.r8.s64 + -7560;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,10376(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// beq cr6,0x82119170
	if (ctx.cr6.eq) goto loc_82119170;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lfd f0,28248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28248);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
loc_82119168:
	// frsp f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64));
loc_8211916C:
	// stfs f11,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_82119170:
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

__attribute__((alias("__imp__sub_82119188"))) PPC_WEAK_FUNC(sub_82119188);
PPC_FUNC_IMPL(__imp__sub_82119188) {
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
	// bl 0x82118030
	ctx.lr = 0x821191A0;
	sub_82118030(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,28256
	ctx.r10.s64 = ctx.r11.s64 + 28256;
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

__attribute__((alias("__imp__sub_821191C4"))) PPC_WEAK_FUNC(sub_821191C4);
PPC_FUNC_IMPL(__imp__sub_821191C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821191C8"))) PPC_WEAK_FUNC(sub_821191C8);
PPC_FUNC_IMPL(__imp__sub_821191C8) {
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
	// addi r10,r11,28256
	ctx.r10.s64 = ctx.r11.s64 + 28256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82118078
	ctx.lr = 0x821191F4;
	sub_82118078(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119210
	if (ctx.cr6.eq) goto loc_82119210;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8211920C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82119210:
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

__attribute__((alias("__imp__sub_82119228"))) PPC_WEAK_FUNC(sub_82119228);
PPC_FUNC_IMPL(__imp__sub_82119228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82119230;
	sub_8224877C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82119248;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82119254;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8218aa18
	ctx.lr = 0x8211926C;
	sub_8218AA18(ctx, base);
	// bl 0x821142a0
	ctx.lr = 0x82119270;
	sub_821142A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822aa648
	ctx.lr = 0x82119280;
	sub_822AA648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218a810
	ctx.lr = 0x8211928C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82119330
	if (ctx.cr6.eq) goto loc_82119330;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218ab00
	ctx.lr = 0x821192A4;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119330
	if (ctx.cr6.eq) goto loc_82119330;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218a810
	ctx.lr = 0x821192B8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821192d4
	if (ctx.cr6.eq) goto loc_821192D4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218abc0
	ctx.lr = 0x821192CC;
	sub_8218ABC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821192d8
	goto loc_821192D8;
loc_821192D4:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821192D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x821178f8
	ctx.lr = 0x821192E8;
	sub_821178F8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8218a810
	ctx.lr = 0x821192FC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82119318
	if (ctx.cr6.eq) goto loc_82119318;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218ab00
	ctx.lr = 0x82119310;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8211931c
	goto loc_8211931C;
loc_82119318:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8211931C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x82119328;
	sub_821847A8(ctx, base);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
loc_82119330:
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// li r10,250
	ctx.r10.s64 = 250;
	// addi r9,r11,29816
	ctx.r9.s64 = ctx.r11.s64 + 29816;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// beq cr6,0x821195f0
	if (ctx.cr6.eq) goto loc_821195F0;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82117428
	ctx.lr = 0x8211935C;
	sub_82117428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211936c
	if (ctx.cr6.eq) goto loc_8211936C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_8211936C:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82117450
	ctx.lr = 0x8211937C;
	sub_82117450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211938c
	if (ctx.cr6.eq) goto loc_8211938C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_8211938C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82117360
	ctx.lr = 0x82119398;
	sub_82117360(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82117400
	ctx.lr = 0x821193A8;
	sub_82117400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821195f0
	if (ctx.cr6.eq) goto loc_821195F0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8208fba0
	ctx.lr = 0x821193BC;
	sub_8208FBA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119440
	if (ctx.cr6.eq) goto loc_82119440;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820c0878
	ctx.lr = 0x821193D0;
	sub_820C0878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82117948
	ctx.lr = 0x821193E4;
	sub_82117948(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8208fba0
	ctx.lr = 0x821193F8;
	sub_8208FBA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x82119408;
	sub_821847A8(ctx, base);
	// lwz r10,8824(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8824);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8824(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8824, ctx.r10.u32);
loc_82119440:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x822569f0
	ctx.lr = 0x82119464;
	sub_822569F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821195f0
	if (ctx.cr6.eq) goto loc_821195F0;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r9,8828(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8828);
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// sth r8,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r8.u16);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821194B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,8828(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8828, ctx.r5.u32);
loc_821194B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821194CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821194E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821194b8
	if (ctx.cr6.eq) goto loc_821194B8;
	// li r4,5000
	ctx.r4.s64 = 5000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8208fba0
	ctx.lr = 0x82119500;
	sub_8208FBA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119584
	if (ctx.cr6.eq) goto loc_82119584;
	// li r4,5000
	ctx.r4.s64 = 5000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820c0878
	ctx.lr = 0x82119514;
	sub_820C0878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82117998
	ctx.lr = 0x82119528;
	sub_82117998(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,5000
	ctx.r4.s64 = 5000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8208fba0
	ctx.lr = 0x8211953C;
	sub_8208FBA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8211954C;
	sub_821847A8(ctx, base);
	// lwz r10,8836(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8836);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211957C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8836(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8836, ctx.r10.u32);
loc_82119584:
	// li r4,6000
	ctx.r4.s64 = 6000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8208fba0
	ctx.lr = 0x82119590;
	sub_8208FBA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821195f0
	if (ctx.cr6.eq) goto loc_821195F0;
	// li r4,6000
	ctx.r4.s64 = 6000;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820822c0
	ctx.lr = 0x821195A4;
	sub_820822C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821179e8
	ctx.lr = 0x821195E4;
	sub_821179E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821195F0;
	sub_82183E40(ctx, base);
loc_821195F0:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8218a7f0
	ctx.lr = 0x821195F8;
	sub_8218A7F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82119600;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8211960C"))) PPC_WEAK_FUNC(sub_8211960C);
PPC_FUNC_IMPL(__imp__sub_8211960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119610"))) PPC_WEAK_FUNC(sub_82119610);
PPC_FUNC_IMPL(__imp__sub_82119610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82119618;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211969c
	if (ctx.cr6.eq) goto loc_8211969C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8211969c
	if (!ctx.cr6.gt) goto loc_8211969C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8211964C:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119680
	if (ctx.cr6.eq) goto loc_82119680;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82119674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8211abf0
	ctx.lr = 0x82119680;
	sub_8211ABF0(ctx, base);
loc_82119680:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8211964c
	if (ctx.cr6.lt) goto loc_8211964C;
loc_8211969C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821196A4"))) PPC_WEAK_FUNC(sub_821196A4);
PPC_FUNC_IMPL(__imp__sub_821196A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821196A8"))) PPC_WEAK_FUNC(sub_821196A8);
PPC_FUNC_IMPL(__imp__sub_821196A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821196BC"))) PPC_WEAK_FUNC(sub_821196BC);
PPC_FUNC_IMPL(__imp__sub_821196BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821196C0"))) PPC_WEAK_FUNC(sub_821196C0);
PPC_FUNC_IMPL(__imp__sub_821196C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119758
	if (ctx.cr6.eq) goto loc_82119758;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82119758
	if (!ctx.cr6.gt) goto loc_82119758;
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_821196E4:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119748
	if (ctx.cr6.eq) goto loc_82119748;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119748
	if (ctx.cr6.eq) goto loc_82119748;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r8,218(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82119748
	if (!ctx.cr6.gt) goto loc_82119748;
	// lwz r7,292(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211971C:
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82119738
	if (!ctx.cr6.eq) goto loc_82119738;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bge cr6,0x82119760
	if (!ctx.cr6.lt) goto loc_82119760;
loc_82119738:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8211971c
	if (ctx.cr6.lt) goto loc_8211971C;
loc_82119748:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821196e4
	if (ctx.cr6.lt) goto loc_821196E4;
loc_82119758:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82119760:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82119768"))) PPC_WEAK_FUNC(sub_82119768);
PPC_FUNC_IMPL(__imp__sub_82119768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82119770;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821198a0
	if (ctx.cr6.eq) goto loc_821198A0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r27,r11,80
	ctx.r27.s64 = ctx.r11.s64 + 80;
	// lwz r8,208(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8211988c
	if (ctx.cr6.eq) goto loc_8211988C;
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821197c4
	if (!ctx.cr6.eq) goto loc_821197C4;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211988c
	if (!ctx.cr6.eq) goto loc_8211988C;
loc_821197C4:
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r3,-7488(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7488);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821add48
	ctx.lr = 0x821197D4;
	sub_821ADD48(ctx, base);
	// lwz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821197f0
	if (!ctx.cr6.eq) goto loc_821197F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ad4e0
	ctx.lr = 0x821197F0;
	sub_821AD4E0(ctx, base);
loc_821197F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82119874
	if (ctx.cr6.eq) goto loc_82119874;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821197FC:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119868
	if (ctx.cr6.eq) goto loc_82119868;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-7488(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7488);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,196(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119830
	if (!ctx.cr6.eq) goto loc_82119830;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8211984c
	goto loc_8211984C;
loc_82119830:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82119840
	if (!ctx.cr6.eq) goto loc_82119840;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8211984c
	goto loc_8211984C;
loc_82119840:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82119850
	if (!ctx.cr6.eq) goto loc_82119850;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8211984C:
	// bl 0x821ad288
	ctx.lr = 0x82119850;
	sub_821AD288(ctx, base);
loc_82119850:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82119868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82119868:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821197fc
	if (!ctx.cr0.eq) goto loc_821197FC;
loc_82119874:
	// lwz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211988c
	if (!ctx.cr6.eq) goto loc_8211988C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ad4e0
	ctx.lr = 0x8211988C;
	sub_821AD4E0(ctx, base);
loc_8211988C:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r10,6
	ctx.r10.s64 = 6;
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 232, ctx.r10.u32);
loc_821198A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821198A8"))) PPC_WEAK_FUNC(sub_821198A8);
PPC_FUNC_IMPL(__imp__sub_821198A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821198B0;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821199a4
	if (ctx.cr6.eq) goto loc_821199A4;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821199a4
	if (ctx.cr6.eq) goto loc_821199A4;
	// bl 0x8211d540
	ctx.lr = 0x821198D8;
	sub_8211D540(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821199a4
	if (ctx.cr6.eq) goto loc_821199A4;
loc_821198E8:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r26,12(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r25,12(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82119998
	if (ctx.cr6.eq) goto loc_82119998;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82119910:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82119998
	if (!ctx.cr6.lt) goto loc_82119998;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119988
	if (ctx.cr6.eq) goto loc_82119988;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119988
	if (ctx.cr6.eq) goto loc_82119988;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82119950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8211ac20
	ctx.lr = 0x82119960;
	sub_8211AC20(ctx, base);
	// lwz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// ld r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8211997C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8211abf0
	ctx.lr = 0x82119988;
	sub_8211ABF0(ctx, base);
loc_82119988:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82119910
	if (ctx.cr6.lt) goto loc_82119910;
loc_82119998:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821198e8
	if (ctx.cr6.lt) goto loc_821198E8;
loc_821199A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821199AC"))) PPC_WEAK_FUNC(sub_821199AC);
PPC_FUNC_IMPL(__imp__sub_821199AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821199B0"))) PPC_WEAK_FUNC(sub_821199B0);
PPC_FUNC_IMPL(__imp__sub_821199B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821199B8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8211d540
	ctx.lr = 0x821199D4;
	sub_8211D540(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821199DC;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821199E8;
	sub_821837D0(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82119a00
	if (!ctx.cr6.gt) goto loc_82119A00;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82119A00:
	// bl 0x82183850
	ctx.lr = 0x82119A04;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82119a1c
	if (ctx.cr6.eq) goto loc_82119A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82119A18;
	sub_82183448(ctx, base);
	// b 0x82119a28
	goto loc_82119A28;
loc_82119A1C:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82119A28;
	sub_821845A0(ctx, base);
loc_82119A28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r3,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// beq cr6,0x82119b74
	if (ctx.cr6.eq) goto loc_82119B74;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r25,r11,28308
	ctx.r25.s64 = ctx.r11.s64 + 28308;
loc_82119A44:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,16(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82119b0c
	if (ctx.cr6.lt) goto loc_82119B0C;
	// beq cr6,0x82119ad0
	if (ctx.cr6.eq) goto loc_82119AD0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82119a94
	if (ctx.cr6.lt) goto loc_82119A94;
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r26,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209eda0
	ctx.lr = 0x82119A90;
	sub_8209EDA0(ctx, base);
	// b 0x82119b54
	goto loc_82119B54;
loc_82119A94:
	// bl 0x82183850
	ctx.lr = 0x82119A98;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82119ab0
	if (ctx.cr6.eq) goto loc_82119AB0;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82183448
	ctx.lr = 0x82119AAC;
	sub_82183448(ctx, base);
	// b 0x82119ab8
	goto loc_82119AB8;
loc_82119AB0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x82119AB8;
	sub_821845A0(ctx, base);
loc_82119AB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119b48
	if (ctx.cr6.eq) goto loc_82119B48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211b510
	ctx.lr = 0x82119ACC;
	sub_8211B510(ctx, base);
	// b 0x82119b4c
	goto loc_82119B4C;
loc_82119AD0:
	// bl 0x82183850
	ctx.lr = 0x82119AD4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82119aec
	if (ctx.cr6.eq) goto loc_82119AEC;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82183448
	ctx.lr = 0x82119AE8;
	sub_82183448(ctx, base);
	// b 0x82119af4
	goto loc_82119AF4;
loc_82119AEC:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x82119AF4;
	sub_821845A0(ctx, base);
loc_82119AF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119b48
	if (ctx.cr6.eq) goto loc_82119B48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211b3e0
	ctx.lr = 0x82119B08;
	sub_8211B3E0(ctx, base);
	// b 0x82119b4c
	goto loc_82119B4C;
loc_82119B0C:
	// bl 0x82183850
	ctx.lr = 0x82119B10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82119b28
	if (ctx.cr6.eq) goto loc_82119B28;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82183448
	ctx.lr = 0x82119B24;
	sub_82183448(ctx, base);
	// b 0x82119b30
	goto loc_82119B30;
loc_82119B28:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x82119B30;
	sub_821845A0(ctx, base);
loc_82119B30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119b48
	if (ctx.cr6.eq) goto loc_82119B48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211b4c0
	ctx.lr = 0x82119B44;
	sub_8211B4C0(ctx, base);
	// b 0x82119b4c
	goto loc_82119B4C;
loc_82119B48:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82119B4C:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82119B54:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8211dd38
	ctx.lr = 0x82119B68;
	sub_8211DD38(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82119a44
	if (!ctx.cr0.eq) goto loc_82119A44;
loc_82119B74:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82119B7C;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82119B84"))) PPC_WEAK_FUNC(sub_82119B84);
PPC_FUNC_IMPL(__imp__sub_82119B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119B88"))) PPC_WEAK_FUNC(sub_82119B88);
PPC_FUNC_IMPL(__imp__sub_82119B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82119B90;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r11,80
	ctx.r29.s64 = ctx.r11.s64 + 80;
	// stw r30,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r30.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119c1c
	if (ctx.cr6.eq) goto loc_82119C1C;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r4,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r4.u32);
	// stw r5,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r5.u32);
	// stw r27,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r27.u32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119c1c
	if (ctx.cr6.eq) goto loc_82119C1C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82119BE4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119c0c
	if (ctx.cr6.eq) goto loc_82119C0C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82119c0c
	if (ctx.cr6.eq) goto loc_82119C0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8211e640
	ctx.lr = 0x82119C0C;
	sub_8211E640(ctx, base);
loc_82119C0C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82119be4
	if (!ctx.cr0.eq) goto loc_82119BE4;
	// stw r27,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r27.u32);
loc_82119C1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82119C24"))) PPC_WEAK_FUNC(sub_82119C24);
PPC_FUNC_IMPL(__imp__sub_82119C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119C28"))) PPC_WEAK_FUNC(sub_82119C28);
PPC_FUNC_IMPL(__imp__sub_82119C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82119C30;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r25,r10,80
	ctx.r25.s64 = ctx.r10.s64 + 80;
	// beq cr6,0x82119d84
	if (ctx.cr6.eq) goto loc_82119D84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82119d84
	if (ctx.cr6.eq) goto loc_82119D84;
	// li r27,0
	ctx.r27.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82119C74:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82119c98
	if (ctx.cr6.eq) goto loc_82119C98;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82119c98
	if (ctx.cr6.eq) goto loc_82119C98;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
loc_82119C98:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82119c74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82119C74;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lwz r9,160(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82119d84
	if (!ctx.cr6.gt) goto loc_82119D84;
loc_82119CBC:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x8211d560
	ctx.lr = 0x82119CC4;
	sub_8211D560(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82119d18
	if (ctx.cr6.eq) goto loc_82119D18;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82119CD4:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119d0c
	if (ctx.cr6.eq) goto loc_82119D0C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82119d0c
	if (ctx.cr6.eq) goto loc_82119D0C;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82119D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82119D0C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82119cd4
	if (!ctx.cr0.eq) goto loc_82119CD4;
loc_82119D18:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x8211d830
	ctx.lr = 0x82119D20;
	sub_8211D830(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82119d74
	if (ctx.cr6.eq) goto loc_82119D74;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82119D30:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119d6c
	if (ctx.cr6.eq) goto loc_82119D6C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82119d6c
	if (ctx.cr6.eq) goto loc_82119D6C;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r6,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
loc_82119D6C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82119d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82119D30;
loc_82119D74:
	// lwz r11,160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82119cbc
	if (ctx.cr6.lt) goto loc_82119CBC;
loc_82119D84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82119D8C"))) PPC_WEAK_FUNC(sub_82119D8C);
PPC_FUNC_IMPL(__imp__sub_82119D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119D90"))) PPC_WEAK_FUNC(sub_82119D90);
PPC_FUNC_IMPL(__imp__sub_82119D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r8,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r8.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82119DE8:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119e24
	if (ctx.cr6.eq) goto loc_82119E24;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82119e24
	if (ctx.cr6.eq) goto loc_82119E24;
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// oris r4,r5,8192
	ctx.r4.u64 = ctx.r5.u64 | 536870912;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
loc_82119E24:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82119de8
	if (ctx.cr6.lt) goto loc_82119DE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82119E44"))) PPC_WEAK_FUNC(sub_82119E44);
PPC_FUNC_IMPL(__imp__sub_82119E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82119E48"))) PPC_WEAK_FUNC(sub_82119E48);
PPC_FUNC_IMPL(__imp__sub_82119E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r7,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r7.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119efc
	if (ctx.cr6.eq) goto loc_82119EFC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119efc
	if (ctx.cr6.eq) goto loc_82119EFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82119efc
	if (!ctx.cr6.gt) goto loc_82119EFC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82119EA4:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119ee0
	if (ctx.cr6.eq) goto loc_82119EE0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82119ee0
	if (ctx.cr6.eq) goto loc_82119EE0;
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,104(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 104);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// oris r10,r4,8192
	ctx.r10.u64 = ctx.r4.u64 | 536870912;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82119EE0:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82119ea4
	if (ctx.cr6.lt) goto loc_82119EA4;
loc_82119EFC:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 208, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82119F10"))) PPC_WEAK_FUNC(sub_82119F10);
PPC_FUNC_IMPL(__imp__sub_82119F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82119F44:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82119f68
	if (ctx.cr6.eq) goto loc_82119F68;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82119f68
	if (ctx.cr6.eq) goto loc_82119F68;
	// stw r8,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r8.u32);
loc_82119F68:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82119f44
	if (ctx.cr6.lt) goto loc_82119F44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82119F88"))) PPC_WEAK_FUNC(sub_82119F88);
PPC_FUNC_IMPL(__imp__sub_82119F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82119F90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r29,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r29.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a034
	if (ctx.cr6.eq) goto loc_8211A034;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211a034
	if (ctx.cr6.eq) goto loc_8211A034;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a034
	if (ctx.cr6.eq) goto loc_8211A034;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8211a034
	if (!ctx.cr6.gt) goto loc_8211A034;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82119FF0:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a018
	if (ctx.cr6.eq) goto loc_8211A018;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211a018
	if (ctx.cr6.eq) goto loc_8211A018;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8211e640
	ctx.lr = 0x8211A018;
	sub_8211E640(ctx, base);
loc_8211A018:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82119ff0
	if (ctx.cr6.lt) goto loc_82119FF0;
loc_8211A034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211A03C"))) PPC_WEAK_FUNC(sub_8211A03C);
PPC_FUNC_IMPL(__imp__sub_8211A03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A040"))) PPC_WEAK_FUNC(sub_8211A040);
PPC_FUNC_IMPL(__imp__sub_8211A040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211A048;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a0e0
	if (ctx.cr6.eq) goto loc_8211A0E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8211a0e0
	if (!ctx.cr6.gt) goto loc_8211A0E0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8211A074:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a0c4
	if (ctx.cr6.eq) goto loc_8211A0C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a0c4
	if (ctx.cr6.eq) goto loc_8211A0C4;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a0ec
	if (ctx.cr6.eq) goto loc_8211A0EC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8211a0f8
	if (!ctx.cr6.gt) goto loc_8211A0F8;
	// bl 0x8211e7c8
	ctx.lr = 0x8211A0BC;
	sub_8211E7C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211a0f8
	if (ctx.cr6.eq) goto loc_8211A0F8;
loc_8211A0C4:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8211a074
	if (ctx.cr6.lt) goto loc_8211A074;
loc_8211A0E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8211A0EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8211A0F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211A104"))) PPC_WEAK_FUNC(sub_8211A104);
PPC_FUNC_IMPL(__imp__sub_8211A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A108"))) PPC_WEAK_FUNC(sub_8211A108);
PPC_FUNC_IMPL(__imp__sub_8211A108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211A12C:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,156(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// mulli r8,r7,28
	ctx.r8.s64 = ctx.r7.s64 * 28;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r5,108(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8211a12c
	if (ctx.cr6.lt) goto loc_8211A12C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211A16C"))) PPC_WEAK_FUNC(sub_8211A16C);
PPC_FUNC_IMPL(__imp__sub_8211A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A170"))) PPC_WEAK_FUNC(sub_8211A170);
PPC_FUNC_IMPL(__imp__sub_8211A170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211A178;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a298
	if (ctx.cr6.eq) goto loc_8211A298;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r9.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
	// ld r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r6,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r6.u64);
	// ld r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r5,104(r11)
	PPC_STORE_U64(ctx.r11.u32 + 104, ctx.r5.u64);
	// ld r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r4,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r4.u64);
	// ld r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r3,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r3.u64);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r10,128(r11)
	PPC_STORE_U64(ctx.r11.u32 + 128, ctx.r10.u64);
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r29,12(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211a21c
	if (ctx.cr6.eq) goto loc_8211A21C;
	// li r28,16
	ctx.r28.s64 = 16;
loc_8211A1FC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x8211ec30
	ctx.lr = 0x8211A210;
	sub_8211EC30(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8211a1fc
	if (!ctx.cr0.eq) goto loc_8211A1FC;
loc_8211A21C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x8211A228;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a298
	if (ctx.cr6.eq) goto loc_8211A298;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r4,r3,240
	ctx.r4.s64 = ctx.r3.s64 + 240;
	// ld r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 240);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 144, ctx.r9.u64);
	// ld r7,248(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 248);
	// std r7,152(r11)
	PPC_STORE_U64(ctx.r11.u32 + 152, ctx.r7.u64);
	// ld r6,256(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// std r6,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r6.u64);
	// ld r5,264(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 264);
	// std r5,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r5.u64);
	// ld r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// std r10,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r10.u64);
	// ld r9,280(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 288);
	// std r8,192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 192, ctx.r8.u64);
	// ld r7,296(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// std r7,200(r11)
	PPC_STORE_U64(ctx.r11.u32 + 200, ctx.r7.u64);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a298
	if (ctx.cr6.eq) goto loc_8211A298;
	// bl 0x8211d6b0
	ctx.lr = 0x8211A298;
	sub_8211D6B0(ctx, base);
loc_8211A298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211A2A0"))) PPC_WEAK_FUNC(sub_8211A2A0);
PPC_FUNC_IMPL(__imp__sub_8211A2A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// std r9,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r9.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
	// ld r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r6,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r6.u64);
	// ld r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r5,104(r11)
	PPC_STORE_U64(ctx.r11.u32 + 104, ctx.r5.u64);
	// ld r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r3,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r3.u64);
	// ld r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r10,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r10.u64);
	// ld r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r9,128(r11)
	PPC_STORE_U64(ctx.r11.u32 + 128, ctx.r9.u64);
	// ld r8,56(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r8,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211A2FC"))) PPC_WEAK_FUNC(sub_8211A2FC);
PPC_FUNC_IMPL(__imp__sub_8211A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A300"))) PPC_WEAK_FUNC(sub_8211A300);
PPC_FUNC_IMPL(__imp__sub_8211A300) {
	PPC_FUNC_PROLOGUE();
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// ld r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r5,64(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r5,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r5.u64);
	// ld r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// ld r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r10,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r10.u64);
	// ld r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r9,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r9.u64);
	// ld r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r8,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r7,104(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r7,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r7.u64);
	// ld r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r6,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r6.u64);
	// ld r5,120(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r5,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r5.u64);
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r10,132(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r9,136(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// lwz r8,140(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r8,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r8.u32);
	// lwz r7,144(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r7,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r7.u32);
	// lwz r6,148(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r6,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r6.u32);
	// lwz r5,152(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r10,160(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211A3E0"))) PPC_WEAK_FUNC(sub_8211A3E0);
PPC_FUNC_IMPL(__imp__sub_8211A3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211A3E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8211A3F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a468
	if (ctx.cr6.eq) goto loc_8211A468;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8211a468
	if (!ctx.cr6.gt) goto loc_8211A468;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8211A424:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a454
	if (ctx.cr6.eq) goto loc_8211A454;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a454
	if (ctx.cr6.eq) goto loc_8211A454;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211A454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211A454:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8211a424
	if (!ctx.cr0.eq) goto loc_8211A424;
loc_8211A468:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a47c
	if (ctx.cr6.eq) goto loc_8211A47C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8211A47C;
	sub_82183E40(ctx, base);
loc_8211A47C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a494
	if (ctx.cr6.eq) goto loc_8211A494;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8211A494;
	sub_82183E40(ctx, base);
loc_8211A494:
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x8211d760
	ctx.lr = 0x8211A4A0;
	sub_8211D760(ctx, base);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8211A4B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211A4BC"))) PPC_WEAK_FUNC(sub_8211A4BC);
PPC_FUNC_IMPL(__imp__sub_8211A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A4C0"))) PPC_WEAK_FUNC(sub_8211A4C0);
PPC_FUNC_IMPL(__imp__sub_8211A4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8211A4C8;
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
	// bl 0x8241dd2c
	ctx.lr = 0x8211A4E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8211a53c
	if (ctx.cr6.eq) goto loc_8211A53C;
	// bl 0x8211a3e0
	ctx.lr = 0x8211A4F8;
	sub_8211A3E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211d9e0
	ctx.lr = 0x8211A504;
	sub_8211D9E0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8211a53c
	if (ctx.cr6.eq) goto loc_8211A53C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821199b0
	ctx.lr = 0x8211A51C;
	sub_821199B0(ctx, base);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8211A528;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8211A53C:
	// bl 0x8241dd3c
	ctx.lr = 0x8211A540;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8211A554"))) PPC_WEAK_FUNC(sub_8211A554);
PPC_FUNC_IMPL(__imp__sub_8211A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211A558"))) PPC_WEAK_FUNC(sub_8211A558);
PPC_FUNC_IMPL(__imp__sub_8211A558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211A560;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r11,r10,176
	ctx.r11.s64 = ctx.r10.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211a594
	if (ctx.cr6.eq) goto loc_8211A594;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a598
	if (ctx.cr6.eq) goto loc_8211A598;
loc_8211A594:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8211A598:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r11,27144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a5d4
	if (ctx.cr6.eq) goto loc_8211A5D4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211a5d0
	if (!ctx.cr6.gt) goto loc_8211A5D0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f0,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x8211a5d8
	goto loc_8211A5D8;
loc_8211A5D0:
	// stfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8211A5D4:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_8211A5D8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// mulli r11,r10,176
	ctx.r11.s64 = ctx.r10.s64 * 176;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// mulli r10,r7,176
	ctx.r10.s64 = ctx.r7.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// addi r3,r10,80
	ctx.r3.s64 = ctx.r10.s64 + 80;
	// bl 0x8211a300
	ctx.lr = 0x8211A614;
	sub_8211A300(ctx, base);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mulli r11,r6,176
	ctx.r11.s64 = ctx.r6.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// stw r30,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r30.u32);
	// stw r30,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r30.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8211d830
	ctx.lr = 0x8211A634;
	sub_8211D830(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8211a690
	if (!ctx.cr6.eq) goto loc_8211A690;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a690
	if (ctx.cr6.eq) goto loc_8211A690;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8211A658:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211a688
	if (ctx.cr6.eq) goto loc_8211A688;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,68(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r6,68(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r5.u32);
loc_8211A688:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8211a658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211A658;
loc_8211A690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211A698"))) PPC_WEAK_FUNC(sub_8211A698);
PPC_FUNC_IMPL(__imp__sub_8211A698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8211A6A0;
	sub_82248780(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8211A6AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211a6d8
	if (!ctx.cr6.eq) goto loc_8211A6D8;
loc_8211A6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8211A6C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8211A6D8:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r3,27144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a6f4
	if (ctx.cr6.eq) goto loc_8211A6F4;
	// bl 0x82081340
	ctx.lr = 0x8211A6EC;
	sub_82081340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211a6c0
	if (ctx.cr6.eq) goto loc_8211A6C0;
loc_8211A6F4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// lwz r8,236(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r26,r9,80
	ctx.r26.s64 = ctx.r9.s64 + 80;
	// addi r27,r11,80
	ctx.r27.s64 = ctx.r11.s64 + 80;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8211a74c
	if (ctx.cr6.gt) goto loc_8211A74C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211a74c
	// bdzf 4*cr6+eq,0x8211a74c
	// bne cr6,0x8211a744
	if (!ctx.cr6.eq) goto loc_8211A744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119c28
	ctx.lr = 0x8211A740;
	sub_82119C28(ctx, base);
	// b 0x8211a74c
	goto loc_8211A74C;
loc_8211A744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119f10
	ctx.lr = 0x8211A74C;
	sub_82119F10(ctx, base);
loc_8211A74C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a6c0
	if (ctx.cr6.eq) goto loc_8211A6C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8211a6c0
	if (ctx.cr6.eq) goto loc_8211A6C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r11.u32);
	// lwz r10,136(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211a788
	if (ctx.cr6.eq) goto loc_8211A788;
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a8b0
	if (ctx.cr6.eq) goto loc_8211A8B0;
loc_8211A788:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x8211a7bc
	if (!ctx.cr6.eq) goto loc_8211A7BC;
	// bl 0x8211d560
	ctx.lr = 0x8211A7A4;
	sub_8211D560(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211a8b0
	if (!ctx.cr6.eq) goto loc_8211A8B0;
	// b 0x8211a7c0
	goto loc_8211A7C0;
loc_8211A7BC:
	// bl 0x8211d560
	ctx.lr = 0x8211A7C0;
	sub_8211D560(ctx, base);
loc_8211A7C0:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8211a814
	if (ctx.cr6.eq) goto loc_8211A814;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8211A7D4:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211a808
	if (ctx.cr6.eq) goto loc_8211A808;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211A7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// or r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 | ctx.r29.u64;
loc_8211A808:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8211a7d4
	if (!ctx.cr0.eq) goto loc_8211A7D4;
loc_8211A814:
	// stw r29,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8211a8b0
	if (ctx.cr6.eq) goto loc_8211A8B0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a8b0
	if (ctx.cr6.eq) goto loc_8211A8B0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211A83C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211a83c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211A83C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// lfs f0,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82186ca0
	ctx.lr = 0x8211A880;
	sub_82186CA0(ctx, base);
	// lfs f7,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// blt cr6,0x8211a898
	if (ctx.cr6.lt) goto loc_8211A898;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8211A898:
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8211a8b0
	if (!ctx.cr6.eq) goto loc_8211A8B0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r10.u32);
loc_8211A8B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8211A8C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8211A8D0"))) PPC_WEAK_FUNC(sub_8211A8D0);
PPC_FUNC_IMPL(__imp__sub_8211A8D0) {
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
	// bl 0x8211a3e0
	ctx.lr = 0x8211A8EC;
	sub_8211A3E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a908
	if (ctx.cr6.eq) goto loc_8211A908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8211A904;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8211A908:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a918
	if (ctx.cr6.eq) goto loc_8211A918;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8211A918:
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

__attribute__((alias("__imp__sub_8211A930"))) PPC_WEAK_FUNC(sub_8211A930);
PPC_FUNC_IMPL(__imp__sub_8211A930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8211A938;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// bl 0x82081590
	ctx.lr = 0x8211A950;
	sub_82081590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r31.u32);
	// addi r26,r29,80
	ctx.r26.s64 = ctx.r29.s64 + 80;
	// stw r31,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r31.u32);
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
	// li r27,7
	ctx.r27.s64 = 7;
	// stw r31,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r31.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
	// stw r31,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r31.u32);
	// stw r28,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r28.u32);
loc_8211A990:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820804f8
	ctx.lr = 0x8211A998;
	sub_820804F8(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x820804f8
	ctx.lr = 0x8211A9A0;
	sub_820804F8(ctx, base);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stw r31,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r31.u32);
	// stw r27,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r27.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// stw r31,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r31.u32);
	// stw r31,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r31.u32);
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// bge 0x8211a990
	if (!ctx.cr0.lt) goto loc_8211A990;
	// li r4,352
	ctx.r4.s64 = 352;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822aa648
	ctx.lr = 0x8211A9DC;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8211A9E8"))) PPC_WEAK_FUNC(sub_8211A9E8);
PPC_FUNC_IMPL(__imp__sub_8211A9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8211A9F0;
	sub_8224876C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211ab98
	if (ctx.cr6.eq) goto loc_8211AB98;
	// bl 0x8211d540
	ctx.lr = 0x8211AA0C;
	sub_8211D540(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211aa24
	if (ctx.cr6.eq) goto loc_8211AA24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8211AA24;
	sub_82183E40(ctx, base);
loc_8211AA24:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r30,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r30.u32);
	// rlwinm r3,r22,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8211aa44
	if (!ctx.cr6.gt) goto loc_8211AA44;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8211AA44:
	// bl 0x82080d68
	ctx.lr = 0x8211AA48;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211aa8c
	if (ctx.cr6.eq) goto loc_8211AA8C;
	// addic. r11,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r11.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8211aa84
	if (ctx.cr0.lt) goto loc_8211AA84;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211AA64:
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
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8211aa64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211AA64;
loc_8211AA84:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8211aa90
	goto loc_8211AA90;
loc_8211AA8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8211AA90:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// std r30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// beq cr6,0x8211ab98
	if (ctx.cr6.eq) goto loc_8211AB98;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// addi r25,r10,-2
	ctx.r25.s64 = ctx.r10.s64 + -2;
	// addi r24,r9,-3
	ctx.r24.s64 = ctx.r9.s64 + -3;
	// addi r23,r8,-4
	ctx.r23.s64 = ctx.r8.s64 + -4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8211AAD0:
	// lwz r9,40(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,272(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// lwz r11,280(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 280);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8211AAF0:
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
	// bne cr6,0x8211aaf0
	if (!ctx.cr6.eq) goto loc_8211AAF0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211AB0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211ab0c
	if (!ctx.cr6.eq) goto loc_8211AB0C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stbx r30,r26,r10
	PPC_STORE_U8(ctx.r26.u32 + ctx.r10.u32, ctx.r30.u8);
	// stbx r30,r25,r10
	PPC_STORE_U8(ctx.r25.u32 + ctx.r10.u32, ctx.r30.u8);
	// stbx r30,r24,r10
	PPC_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r30.u8);
	// stbx r30,r23,r10
	PPC_STORE_U8(ctx.r23.u32 + ctx.r10.u32, ctx.r30.u8);
	// bl 0x8218a540
	ctx.lr = 0x8211AB44;
	sub_8218A540(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1790
	ctx.lr = 0x8211AB54;
	sub_821A1790(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r7,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r5,48(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// ldx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r5.u32);
	// bl 0x82119610
	ctx.lr = 0x8211AB84;
	sub_82119610(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8211aad0
	if (ctx.cr6.lt) goto loc_8211AAD0;
loc_8211AB98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8211ABA0"))) PPC_WEAK_FUNC(sub_8211ABA0);
PPC_FUNC_IMPL(__imp__sub_8211ABA0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,28328
	ctx.r4.s64 = ctx.r10.s64 + 28328;
	// lwz r31,-19020(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a8180
	ctx.lr = 0x8211ABC8;
	sub_821A8180(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,28376
	ctx.r4.s64 = ctx.r9.s64 + 28376;
	// bl 0x821a8180
	ctx.lr = 0x8211ABD8;
	sub_821A8180(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211ABEC"))) PPC_WEAK_FUNC(sub_8211ABEC);
PPC_FUNC_IMPL(__imp__sub_8211ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211ABF0"))) PPC_WEAK_FUNC(sub_8211ABF0);
PPC_FUNC_IMPL(__imp__sub_8211ABF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ac08
	if (ctx.cr6.eq) goto loc_8211AC08;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r5,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u64);
loc_8211AC08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r5,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211AC1C"))) PPC_WEAK_FUNC(sub_8211AC1C);
PPC_FUNC_IMPL(__imp__sub_8211AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211AC20"))) PPC_WEAK_FUNC(sub_8211AC20);
PPC_FUNC_IMPL(__imp__sub_8211AC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8211AC40"))) PPC_WEAK_FUNC(sub_8211AC40);
PPC_FUNC_IMPL(__imp__sub_8211AC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// addi r7,r5,3
	ctx.r7.s64 = ctx.r5.s64 + 3;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r10,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r10.u8);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stb r11,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r10,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r10,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r10.u8);
	// lfs f12,7948(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7948);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// lwzx r5,r4,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// lfs f11,28412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28412);
	ctx.f11.f64 = double(temp.f32);
	// stb r10,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r10.u8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f10,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f7,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f6,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f5,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f4,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f3,84(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bgt cr6,0x8211addc
	if (ctx.cr6.gt) goto loc_8211ADDC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211ad94
	// bdzf 4*cr6+eq,0x8211ada0
	// bdzf 4*cr6+eq,0x8211adac
	// bdzf 4*cr6+eq,0x8211adb4
	// bdzf 4*cr6+eq,0x8211add8
	// bdzf 4*cr6+eq,0x8211adbc
	// bdzf 4*cr6+eq,0x8211adc8
	// bne cr6,0x8211add4
	if (!ctx.cr6.eq) goto loc_8211ADD4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211AD94:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211ADA0:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211ADAC:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211ADB4:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211ADBC:
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211ADC8:
	// fmr f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8211addc
	goto loc_8211ADDC;
loc_8211ADD4:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8211ADD8:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
loc_8211ADDC:
	// fsubs f12,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x821847a8
	ctx.lr = 0x8211AE1C;
	sub_821847A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211AE2C"))) PPC_WEAK_FUNC(sub_8211AE2C);
PPC_FUNC_IMPL(__imp__sub_8211AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211AE30"))) PPC_WEAK_FUNC(sub_8211AE30);
PPC_FUNC_IMPL(__imp__sub_8211AE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lfs f13,21040(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21040);
	ctx.f13.f64 = double(temp.f32);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lhz r8,224(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 224);
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f12,220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r11)
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f9,16(r11)
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfsu f7,16(r11)
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfsu f5,16(r11)
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lhz r7,224(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 224);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f3,220(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 220);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,24(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfsu f2,16(r11)
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,16(r11)
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r11)
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f9,16(r11)
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211AF70"))) PPC_WEAK_FUNC(sub_8211AF70);
PPC_FUNC_IMPL(__imp__sub_8211AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8211AF78;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r30,r4,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r5,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r3,136
	ctx.r31.s64 = ctx.r3.s64 + 136;
	// rlwinm r28,r10,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8211AFA4:
	// bl 0x82183850
	ctx.lr = 0x8211AFA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8211afc0
	if (ctx.cr6.eq) goto loc_8211AFC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x8211AFBC;
	sub_82183448(ctx, base);
	// b 0x8211afcc
	goto loc_8211AFCC;
loc_8211AFC0:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8211AFCC;
	sub_821845A0(ctx, base);
loc_8211AFCC:
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// stw r3,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r3.u32);
	// stw r3,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r11.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r11.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r11.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// bl 0x822aa648
	ctx.lr = 0x8211B004;
	sub_822AA648(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8211afa4
	if (!ctx.cr0.eq) goto loc_8211AFA4;
	// rlwinm r11,r28,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r26,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r26.u32);
	// stw r11,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8211B020"))) PPC_WEAK_FUNC(sub_8211B020);
PPC_FUNC_IMPL(__imp__sub_8211B020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8211B028;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// rlwinm r27,r4,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r4,6,0,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r25,r5,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// rlwinm r24,r10,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r23,2
	ctx.r23.s64 = 2;
loc_8211B060:
	// bl 0x82183850
	ctx.lr = 0x8211B064;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8211b07c
	if (ctx.cr6.eq) goto loc_8211B07C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82183448
	ctx.lr = 0x8211B078;
	sub_82183448(ctx, base);
	// b 0x8211b088
	goto loc_8211B088;
loc_8211B07C:
	// addi r11,r24,15
	ctx.r11.s64 = ctx.r24.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8211B088;
	sub_821845A0(ctx, base);
loc_8211B088:
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8211b0e8
	if (ctx.cr6.eq) goto loc_8211B0E8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8211B0D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x820804f8
	ctx.lr = 0x8211B0DC;
	sub_820804F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bne 0x8211b0d0
	if (!ctx.cr0.eq) goto loc_8211B0D0;
loc_8211B0E8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x822aa648
	ctx.lr = 0x8211B0F4;
	sub_822AA648(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x8211b060
	if (!ctx.cr0.eq) goto loc_8211B060;
	// rlwinm r11,r24,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r22,52(r21)
	PPC_STORE_U32(ctx.r21.u32 + 52, ctx.r22.u32);
	// stw r11,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8211B110"))) PPC_WEAK_FUNC(sub_8211B110);
PPC_FUNC_IMPL(__imp__sub_8211B110) {
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
	// addi r9,r10,28416
	ctx.r9.s64 = ctx.r10.s64 + 28416;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211b154
	if (ctx.cr6.eq) goto loc_8211B154;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8211B150;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8211B154:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211B168"))) PPC_WEAK_FUNC(sub_8211B168);
PPC_FUNC_IMPL(__imp__sub_8211B168) {
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
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8208ea90
	ctx.lr = 0x8211B188;
	sub_8208EA90(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-23620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23620);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8211b230
	if (ctx.cr6.gt) goto loc_8211B230;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8211b230
	if (ctx.cr6.lt) goto loc_8211B230;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-23616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23616);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8211b230
	if (ctx.cr6.gt) goto loc_8211B230;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8211b230
	if (ctx.cr6.lt) goto loc_8211B230;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8211b234
	if (!ctx.cr6.lt) goto loc_8211B234;
loc_8211B230:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8211B234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211B244"))) PPC_WEAK_FUNC(sub_8211B244);
PPC_FUNC_IMPL(__imp__sub_8211B244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211B248"))) PPC_WEAK_FUNC(sub_8211B248);
PPC_FUNC_IMPL(__imp__sub_8211B248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-19008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19008);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8211b2ac
	if (!ctx.cr6.lt) goto loc_8211B2AC;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8211b2ac
	if (!ctx.cr6.eq) goto loc_8211B2AC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_8211B2AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211B2B8"))) PPC_WEAK_FUNC(sub_8211B2B8);
PPC_FUNC_IMPL(__imp__sub_8211B2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211B2C0;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,28416
	ctx.r9.s64 = ctx.r10.s64 + 28416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r4,r7,3536
	ctx.r4.s64 = ctx.r7.s64 + 3536;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r7,r9,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r29,-19020(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19020);
	// bl 0x8218a540
	ctx.lr = 0x8211B33C;
	sub_8218A540(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x8211B34C;
	sub_821A7758(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r11,28328
	ctx.r28.s64 = ctx.r11.s64 + 28328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x821a78b0
	ctx.lr = 0x8211B378;
	sub_821A78B0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x82082c80
	ctx.lr = 0x8211B394;
	sub_82082C80(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8211b3d0
	if (!ctx.cr6.eq) goto loc_8211B3D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a8180
	ctx.lr = 0x8211B3AC;
	sub_821A8180(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a78b0
	ctx.lr = 0x8211B3BC;
	sub_821A78B0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_8211B3D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211B3DC"))) PPC_WEAK_FUNC(sub_8211B3DC);
PPC_FUNC_IMPL(__imp__sub_8211B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211B3E0"))) PPC_WEAK_FUNC(sub_8211B3E0);
PPC_FUNC_IMPL(__imp__sub_8211B3E0) {
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
	// bl 0x8211e450
	ctx.lr = 0x8211B3F8;
	sub_8211E450(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8211b2b8
	ctx.lr = 0x8211B400;
	sub_8211B2B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,28420
	ctx.r9.s64 = ctx.r11.s64 + 28420;
	// addi r8,r10,28452
	ctx.r8.s64 = ctx.r10.s64 + 28452;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211B430"))) PPC_WEAK_FUNC(sub_8211B430);
PPC_FUNC_IMPL(__imp__sub_8211B430) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211B444"))) PPC_WEAK_FUNC(sub_8211B444);
PPC_FUNC_IMPL(__imp__sub_8211B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211B448"))) PPC_WEAK_FUNC(sub_8211B448);
PPC_FUNC_IMPL(__imp__sub_8211B448) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-128
	ctx.r3.s64 = ctx.r3.s64 + -128;
	// b 0x8211b450
	sub_8211B450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211B450"))) PPC_WEAK_FUNC(sub_8211B450);
PPC_FUNC_IMPL(__imp__sub_8211B450) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28416
	ctx.r9.s64 = ctx.r10.s64 + 28416;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// bl 0x8211e330
	ctx.lr = 0x8211B488;
	sub_8211E330(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211b4a4
	if (ctx.cr6.eq) goto loc_8211B4A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8211B4A0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8211B4A4:
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

__attribute__((alias("__imp__sub_8211B4BC"))) PPC_WEAK_FUNC(sub_8211B4BC);
PPC_FUNC_IMPL(__imp__sub_8211B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211B4C0"))) PPC_WEAK_FUNC(sub_8211B4C0);
PPC_FUNC_IMPL(__imp__sub_8211B4C0) {
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
	// bl 0x8211e4f0
	ctx.lr = 0x8211B4D8;
	sub_8211E4F0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8211b2b8
	ctx.lr = 0x8211B4E0;
	sub_8211B2B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,28456
	ctx.r9.s64 = ctx.r11.s64 + 28456;
	// addi r8,r10,28452
	ctx.r8.s64 = ctx.r10.s64 + 28452;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211B510"))) PPC_WEAK_FUNC(sub_8211B510);
PPC_FUNC_IMPL(__imp__sub_8211B510) {
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
	// bl 0x8211e538
	ctx.lr = 0x8211B528;
	sub_8211E538(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8211b2b8
	ctx.lr = 0x8211B530;
	sub_8211B2B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,28488
	ctx.r9.s64 = ctx.r11.s64 + 28488;
	// addi r8,r10,28452
	ctx.r8.s64 = ctx.r10.s64 + 28452;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211B560"))) PPC_WEAK_FUNC(sub_8211B560);
PPC_FUNC_IMPL(__imp__sub_8211B560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8211B568;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249918
	ctx.lr = 0x8211B570;
	sub_82249918(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211c05c
	if (ctx.cr6.eq) goto loc_8211C05C;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// lwz r29,-19048(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// bl 0x821ade68
	ctx.lr = 0x8211B5AC;
	sub_821ADE68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r27.u32);
	// bl 0x821adc58
	ctx.lr = 0x8211B5BC;
	sub_821ADC58(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821addc0
	ctx.lr = 0x8211B5C8;
	sub_821ADDC0(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,27148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27148);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821a2a18
	ctx.lr = 0x8211B5E0;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211c05c
	if (!ctx.cr6.eq) goto loc_8211C05C;
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211b614
	if (ctx.cr6.eq) goto loc_8211B614;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x8211B604;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad240
	ctx.lr = 0x8211B610;
	sub_821AD240(ctx, base);
	// b 0x8211b634
	goto loc_8211B634;
loc_8211B614:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x8211B61C;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad240
	ctx.lr = 0x8211B628;
	sub_821AD240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8211B634;
	sub_821AD600(ctx, base);
loc_8211B634:
	// lwz r10,48(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mulli r8,r9,28
	ctx.r8.s64 = ctx.r9.s64 * 28;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8211b690
	if (ctx.cr6.gt) goto loc_8211B690;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211b670
	// bdzf 4*cr6+eq,0x8211b678
	// bne cr6,0x8211b680
	if (!ctx.cr6.eq) goto loc_8211B680;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8211b684
	goto loc_8211B684;
loc_8211B670:
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8211b684
	goto loc_8211B684;
loc_8211B678:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x8211b684
	goto loc_8211B684;
loc_8211B680:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8211B684:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad648
	ctx.lr = 0x8211B690;
	sub_821AD648(ctx, base);
loc_8211B690:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x8211B6A0;
	sub_821AD6A0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8211b6b4
	if (ctx.cr6.eq) goto loc_8211B6B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x8211B6B4;
	sub_821AD6F8(ctx, base);
loc_8211B6B4:
	// addi r3,r22,156
	ctx.r3.s64 = ctx.r22.s64 + 156;
	// bl 0x8211b248
	ctx.lr = 0x8211B6BC;
	sub_8211B248(ctx, base);
	// lwz r11,160(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211c05c
	if (ctx.cr6.eq) goto loc_8211C05C;
	// addi r3,r22,148
	ctx.r3.s64 = ctx.r22.s64 + 148;
	// bl 0x82082c80
	ctx.lr = 0x8211B6D0;
	sub_82082C80(ctx, base);
	// lwz r11,152(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211c05c
	if (ctx.cr6.eq) goto loc_8211C05C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2a60
	ctx.lr = 0x8211B6E4;
	sub_821A2A60(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211B6F4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211b6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211B6F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a29d0
	ctx.lr = 0x8211B708;
	sub_821A29D0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,840
	ctx.r10.s64 = ctx.r1.s64 + 840;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211B718:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211b718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211B718;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,776
	ctx.r10.s64 = ctx.r1.s64 + 776;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211B734:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211b734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211B734;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211B758:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211b758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211B758;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82096f18
	ctx.lr = 0x8211B770;
	sub_82096F18(ctx, base);
	// lwz r20,68(r22)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	// addi r11,r20,15
	ctx.r11.s64 = ctx.r20.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211c05c
	if (ctx.cr6.eq) goto loc_8211C05C;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lfs f0,11484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,108(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x8211B7D8;
	sub_821B16B8(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82082318
	ctx.lr = 0x8211B7E0;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// li r4,54
	ctx.r4.s64 = 54;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b16b8
	ctx.lr = 0x8211B7F4;
	sub_821B16B8(ctx, base);
	// lwz r9,40(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// li r15,0
	ctx.r15.s64 = 0;
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8211c028
	if (!ctx.cr6.gt) goto loc_8211C028;
	// addi r11,r20,25
	ctx.r11.s64 = ctx.r20.s64 + 25;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// lfs f25,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f24.f64 = double(temp.f32);
loc_8211B830:
	// lwzx r11,r16,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r22.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211c014
	if (ctx.cr6.eq) goto loc_8211C014;
	// addi r11,r20,27
	ctx.r11.s64 = ctx.r20.s64 + 27;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r22.u32);
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8211b8ac
	if (ctx.cr6.eq) goto loc_8211B8AC;
	// lwz r9,352(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r8,r20,33
	ctx.r8.s64 = ctx.r20.s64 + 33;
	// stw r15,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r15.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwzx r9,r6,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x821a8e50
	ctx.lr = 0x8211B8A8;
	sub_821A8E50(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8211B8AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211ba88
	if (!ctx.cr6.eq) goto loc_8211BA88;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211ba88
	if (ctx.cr6.eq) goto loc_8211BA88;
	// lwz r24,40(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmplw cr6,r14,r24
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8211c014
	if (!ctx.cr6.lt) goto loc_8211C014;
	// lwzx r11,r16,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r22.u32);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
loc_8211B8EC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ba54
	if (ctx.cr6.eq) goto loc_8211BA54;
	// addi r11,r20,21
	ctx.r11.s64 = ctx.r20.s64 + 21;
	// addi r10,r20,35
	ctx.r10.s64 = ctx.r20.s64 + 35;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// beq cr6,0x8211b9c0
	if (ctx.cr6.eq) goto loc_8211B9C0;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x8211b9c0
	if (ctx.cr6.eq) goto loc_8211B9C0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r5,r20,23
	ctx.r5.s64 = ctx.r20.s64 + 23;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwzx r11,r4,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fdivs f5,f24,f11
	ctx.f5.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// fsubs f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmuls f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x8211b9cc
	goto loc_8211B9CC;
loc_8211B9C0:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
loc_8211B9CC:
	// stfs f26,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addic. r28,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r28.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq 0x8211ba40
	if (ctx.cr0.eq) goto loc_8211BA40;
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r22,128
	ctx.r29.s64 = ctx.r22.s64 + 128;
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
loc_8211B9F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211ba14
	if (ctx.cr6.eq) goto loc_8211BA14;
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8211BA14:
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x8211b168
	ctx.lr = 0x8211BA28;
	sub_8211B168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211ba34
	if (!ctx.cr6.eq) goto loc_8211BA34;
	// addi r23,r23,6
	ctx.r23.s64 = ctx.r23.s64 + 6;
loc_8211BA34:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8211b9f4
	if (ctx.cr6.lt) goto loc_8211B9F4;
loc_8211BA40:
	// lwzx r11,r27,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r22.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8211ba68
	if (!ctx.cr6.eq) goto loc_8211BA68;
loc_8211BA54:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8211b8ec
	if (ctx.cr6.lt) goto loc_8211B8EC;
loc_8211BA68:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8211c014
	if (ctx.cr6.eq) goto loc_8211C014;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821dc948
	ctx.lr = 0x8211BA84;
	sub_821DC948(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_8211BA88:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// addi r26,r22,128
	ctx.r26.s64 = ctx.r22.s64 + 128;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,226(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 226);
	// bl 0x8211ac40
	ctx.lr = 0x8211BAA8;
	sub_8211AC40(ctx, base);
	// addi r9,r20,21
	ctx.r9.s64 = ctx.r20.s64 + 21;
	// lwzx r11,r27,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r22.u32);
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r31,r1,400
	ctx.r31.s64 = ctx.r1.s64 + 400;
	// lwzx r10,r7,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r30,r1,432
	ctx.r30.s64 = ctx.r1.s64 + 432;
	// ld r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r28,r1,448
	ctx.r28.s64 = ctx.r1.s64 + 448;
	// ld r25,0(r5)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// add r24,r10,r19
	ctx.r24.u64 = ctx.r10.u64 + ctx.r19.u64;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f8,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lfs f7,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// lfs f6,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// std r3,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r3.u64);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// ld r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// std r29,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r29.u64);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// std r5,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r5.u64);
	// std r9,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r9.u64);
	// std r4,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r4.u64);
	// std r25,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r25.u64);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// fmuls f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// ldx r7,r10,r19
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r19.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f1,192(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f7,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// std r7,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r7.u64);
	// std r8,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r8.u64);
	// bl 0x820804f8
	ctx.lr = 0x8211BBAC;
	sub_820804F8(ctx, base);
	// lwzx r11,r27,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r22.u32);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// add r6,r11,r19
	ctx.r6.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lfs f1,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x8211BBC0;
	sub_821876F8(ctx, base);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-20
	ctx.r31.s64 = ctx.r11.s64 + -20;
loc_8211BBCC:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f24,268(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8211BBF4;
	sub_8208EA90(ctx, base);
	// lfs f11,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f9,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfsu f9,24(r31)
	// bne 0x8211bbcc
	if (!ctx.cr0.eq) goto loc_8211BBCC;
	// lwzx r11,r16,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r22.u32);
	// addi r10,r20,35
	ctx.r10.s64 = ctx.r20.s64 + 35;
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r7,r9,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// rlwinm r6,r8,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r6,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r6.u8);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r4.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r9,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// stb r8,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r8.u8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r6,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// stb r5,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r5.u8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r4,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFE;
	// stb r3,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r3.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,1,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// stb r9,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r9.u8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r8,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r6,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r6.u8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r4.u8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r10.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// stb r8,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r8.u8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r6,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// stb r5,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r5.u8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r3,r4,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFE;
	// stb r3,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r3.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,1,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// stb r9,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r9.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r8,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r6,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r6.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r4.u8);
	// lfs f0,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211bd80
	if (ctx.cr6.eq) goto loc_8211BD80;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x8211bd80
	if (ctx.cr6.eq) goto loc_8211BD80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r7,r20,23
	ctx.r7.s64 = ctx.r20.s64 + 23;
	// std r8,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r8.u64);
	// lfd f13,328(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lwzx r10,r4,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// fdivs f9,f24,f11
	ctx.f9.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f31,f3
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// lfs f10,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f5,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fsubs f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fmuls f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f27,f4,f0
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8211bd8c
	goto loc_8211BD8C;
loc_8211BD80:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
loc_8211BD8C:
	// stfs f27,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// addic. r28,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r28.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfs f28,296(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// beq 0x8211c014
	if (ctx.cr0.eq) goto loc_8211C014;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
loc_8211BDAC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211bdfc
	if (ctx.cr6.eq) goto loc_8211BDFC;
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// lbz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// lbz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 228);
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r8,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r8.u8);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r6,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r6.u8);
	// stb r5,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r5.u8);
	// stb r4,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r4.u8);
loc_8211BDFC:
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8211b168
	ctx.lr = 0x8211BE10;
	sub_8211B168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211c008
	if (!ctx.cr6.eq) goto loc_8211C008;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,32(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211be8c
	if (ctx.cr6.eq) goto loc_8211BE8C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211BE54:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211be54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BE54;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82289c50
	ctx.lr = 0x8211BE70;
	sub_82289C50(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82082318
	ctx.lr = 0x8211BE78;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// li r4,203
	ctx.r4.s64 = 203;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821b16b8
	ctx.lr = 0x8211BE8C;
	sub_821B16B8(ctx, base);
loc_8211BE8C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8211bfb0
	if (ctx.cr6.eq) goto loc_8211BFB0;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-20
	ctx.r31.s64 = ctx.r11.s64 + -20;
loc_8211BEA0:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f24,252(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8211BEC8;
	sub_8208EA90(ctx, base);
	// lfs f11,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f9,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfsu f9,24(r31)
	// bne 0x8211bea0
	if (!ctx.cr0.eq) goto loc_8211BEA0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// addi r10,r21,-4
	ctx.r10.s64 = ctx.r21.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211BEF8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211bef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BEF8;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r21,24
	ctx.r9.s64 = ctx.r21.s64 + 24;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211BF18:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211bf18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BF18;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211BF38:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211bf38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BF38;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211BF58:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211bf58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BF58;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211BF78:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211bf78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BF78;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211BF98:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8211bf98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BF98;
	// addi r21,r11,24
	ctx.r21.s64 = ctx.r11.s64 + 24;
	// addi r18,r18,6
	ctx.r18.s64 = ctx.r18.s64 + 6;
	// b 0x8211c008
	goto loc_8211C008;
loc_8211BFB0:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,720
	ctx.r11.s64 = ctx.r1.s64 + 720;
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211BFC8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211bfc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BFC8;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82082318
	ctx.lr = 0x8211BFDC;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821b16b8
	ctx.lr = 0x8211BFF0;
	sub_821B16B8(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x821dc888
	ctx.lr = 0x8211C008;
	sub_821DC888(ctx, base);
loc_8211C008:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8211bdac
	if (ctx.cr6.lt) goto loc_8211BDAC;
loc_8211C014:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211b830
	if (ctx.cr6.lt) goto loc_8211B830;
loc_8211C028:
	// lwz r31,284(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x8211C038;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x821ad600
	ctx.lr = 0x8211C044;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x821ad6f8
	ctx.lr = 0x8211C050;
	sub_821AD6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x8211C05C;
	sub_821AD288(ctx, base);
loc_8211C05C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249964
	ctx.lr = 0x8211C068;
	sub_82249964(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211C06C"))) PPC_WEAK_FUNC(sub_8211C06C);
PPC_FUNC_IMPL(__imp__sub_8211C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211C070"))) PPC_WEAK_FUNC(sub_8211C070);
PPC_FUNC_IMPL(__imp__sub_8211C070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8211C078;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249918
	ctx.lr = 0x8211C080;
	sub_82249918(ctx, base);
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211ca5c
	if (ctx.cr6.eq) goto loc_8211CA5C;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// lwz r29,-19048(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x821ade68
	ctx.lr = 0x8211C0BC;
	sub_821ADE68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// bl 0x821adc58
	ctx.lr = 0x8211C0CC;
	sub_821ADC58(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821addc0
	ctx.lr = 0x8211C0D8;
	sub_821ADDC0(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,27148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27148);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821a2a18
	ctx.lr = 0x8211C0F0;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211ca5c
	if (!ctx.cr6.eq) goto loc_8211CA5C;
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211c124
	if (ctx.cr6.eq) goto loc_8211C124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x8211C114;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad240
	ctx.lr = 0x8211C120;
	sub_821AD240(ctx, base);
	// b 0x8211c144
	goto loc_8211C144;
loc_8211C124:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x8211C12C;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad240
	ctx.lr = 0x8211C138;
	sub_821AD240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8211C144;
	sub_821AD600(ctx, base);
loc_8211C144:
	// lwz r10,48(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mulli r8,r9,28
	ctx.r8.s64 = ctx.r9.s64 * 28;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8211c1a0
	if (ctx.cr6.gt) goto loc_8211C1A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211c180
	// bdzf 4*cr6+eq,0x8211c188
	// bne cr6,0x8211c190
	if (!ctx.cr6.eq) goto loc_8211C190;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8211c194
	goto loc_8211C194;
loc_8211C180:
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8211c194
	goto loc_8211C194;
loc_8211C188:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x8211c194
	goto loc_8211C194;
loc_8211C190:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8211C194:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad648
	ctx.lr = 0x8211C1A0;
	sub_821AD648(ctx, base);
loc_8211C1A0:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x8211C1B0;
	sub_821AD6A0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8211c1c4
	if (ctx.cr6.eq) goto loc_8211C1C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x8211C1C4;
	sub_821AD6F8(ctx, base);
loc_8211C1C4:
	// addi r3,r21,156
	ctx.r3.s64 = ctx.r21.s64 + 156;
	// bl 0x8211b248
	ctx.lr = 0x8211C1CC;
	sub_8211B248(ctx, base);
	// lwz r11,160(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211ca5c
	if (ctx.cr6.eq) goto loc_8211CA5C;
	// addi r3,r21,148
	ctx.r3.s64 = ctx.r21.s64 + 148;
	// bl 0x82082c80
	ctx.lr = 0x8211C1E0;
	sub_82082C80(ctx, base);
	// lwz r11,152(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211ca5c
	if (ctx.cr6.eq) goto loc_8211CA5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2a60
	ctx.lr = 0x8211C1F4;
	sub_821A2A60(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C204:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a29d0
	ctx.lr = 0x8211C218;
	sub_821A29D0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,584
	ctx.r10.s64 = ctx.r1.s64 + 584;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C228:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C228;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,520
	ctx.r10.s64 = ctx.r1.s64 + 520;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C244:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c244
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C244;
	// lwz r19,68(r21)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// addi r11,r19,15
	ctx.r11.s64 = ctx.r19.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r21.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211ca5c
	if (ctx.cr6.eq) goto loc_8211CA5C;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lfs f0,11484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,108(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x8211C2B8;
	sub_821B16B8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82082318
	ctx.lr = 0x8211C2C0;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// li r4,54
	ctx.r4.s64 = 54;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x821b16b8
	ctx.lr = 0x8211C2D4;
	sub_821B16B8(ctx, base);
	// lwz r9,40(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r15,0
	ctx.r15.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r14,-1
	ctx.r14.s64 = -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8211ca2c
	if (!ctx.cr6.gt) goto loc_8211CA2C;
	// addi r11,r19,25
	ctx.r11.s64 = ctx.r19.s64 + 25;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// lfs f25,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f24.f64 = double(temp.f32);
loc_8211C314:
	// lwzx r11,r16,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r21.u32);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211ca10
	if (ctx.cr6.eq) goto loc_8211CA10;
	// addi r11,r19,23
	ctx.r11.s64 = ctx.r19.s64 + 23;
	// li r22,0
	ctx.r22.s64 = 0;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwzx r11,r24,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// add r9,r11,r18
	ctx.r9.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8211c394
	if (ctx.cr6.eq) goto loc_8211C394;
	// lwz r9,352(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r8,r19,33
	ctx.r8.s64 = ctx.r19.s64 + 33;
	// stw r22,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r22.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwzx r9,r6,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x821a8e50
	ctx.lr = 0x8211C390;
	sub_821A8E50(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8211C394:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211c574
	if (!ctx.cr6.eq) goto loc_8211C574;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211c574
	if (ctx.cr6.eq) goto loc_8211C574;
	// lwz r23,40(r21)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8211ca10
	if (!ctx.cr6.lt) goto loc_8211CA10;
	// lwzx r11,r16,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r21.u32);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
loc_8211C3D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211c534
	if (ctx.cr6.eq) goto loc_8211C534;
	// addi r11,r19,29
	ctx.r11.s64 = ctx.r19.s64 + 29;
	// addi r10,r19,35
	ctx.r10.s64 = ctx.r19.s64 + 35;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r9,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r21.u32);
	// lwzx r6,r8,r21
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// beq cr6,0x8211c4a0
	if (ctx.cr6.eq) goto loc_8211C4A0;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x8211c4a0
	if (ctx.cr6.eq) goto loc_8211C4A0;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r24,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// std r6,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r6.u64);
	// lfd f13,328(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fdivs f3,f24,f11
	ctx.f3.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f1,f9,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmuls f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x8211c4ac
	goto loc_8211C4AC;
loc_8211C4A0:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
loc_8211C4AC:
	// stfs f26,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addic. r29,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r29.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq 0x8211c520
	if (ctx.cr0.eq) goto loc_8211C520;
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r21,128
	ctx.r30.s64 = ctx.r21.s64 + 128;
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
loc_8211C4D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8211c4f4
	if (ctx.cr6.eq) goto loc_8211C4F4;
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8211C4F4:
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x8211b168
	ctx.lr = 0x8211C508;
	sub_8211B168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211c514
	if (!ctx.cr6.eq) goto loc_8211C514;
	// addi r22,r22,6
	ctx.r22.s64 = ctx.r22.s64 + 6;
loc_8211C514:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8211c4d4
	if (ctx.cr6.lt) goto loc_8211C4D4;
loc_8211C520:
	// lwzx r11,r24,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8211c54c
	if (!ctx.cr6.eq) goto loc_8211C54C;
loc_8211C534:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8211c3d0
	if (ctx.cr6.lt) goto loc_8211C3D0;
loc_8211C54C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8211ca08
	if (ctx.cr6.eq) goto loc_8211CA08;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x821dc948
	ctx.lr = 0x8211C568;
	sub_821DC948(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_8211C574:
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r29,r21,128
	ctx.r29.s64 = ctx.r21.s64 + 128;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,226(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 226);
	// bl 0x8211ac40
	ctx.lr = 0x8211C594;
	sub_8211AC40(ctx, base);
	// addi r8,r19,29
	ctx.r8.s64 = ctx.r19.s64 + 29;
	// lwzx r9,r16,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r21.u32);
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r6,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r21.u32);
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r11,r9,r18
	ctx.r11.u64 = ctx.r9.u64 + ctx.r18.u64;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// ld r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r6,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r6.u64);
	// ld r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r3,r4,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFE;
	// ld r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// stb r3,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r3.u8);
	// lwzx r5,r9,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r4.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r10.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r4.u8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r10.u8);
	// lwzx r5,r9,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r4.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r10.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r4.u8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r10.u8);
	// lwzx r5,r9,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r4.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r10.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r4.u8);
	// addi r4,r19,35
	ctx.r4.s64 = ctx.r19.s64 + 35;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r10.u8);
	// lwzx r9,r9,r18
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// rlwinm r5,r9,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// stb r5,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r5.u8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// rlwinm r8,r9,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// stb r8,278(r1)
	PPC_STORE_U8(ctx.r1.u32 + 278, ctx.r8.u8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r7,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFE;
	// stb r6,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r6.u8);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lwzx r10,r3,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r21.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8211c770
	if (ctx.cr6.eq) goto loc_8211C770;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x8211c770
	if (ctx.cr6.eq) goto loc_8211C770;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r24,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r21.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + ctx.r18.u64;
	// std r7,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r7.u64);
	// lfd f13,320(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfs f4,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f3,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f6,f24,f11
	ctx.f6.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// fsubs f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f13,f6,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f26,f5,f0
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8211c77c
	goto loc_8211C77C;
loc_8211C770:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
loc_8211C77C:
	// stfs f27,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f28,296(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x8211ca10
	if (ctx.cr0.eq) goto loc_8211CA10;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
loc_8211C79C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8211c7ec
	if (ctx.cr6.eq) goto loc_8211C7EC;
	// lbz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// lbz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 228);
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// lbz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 252);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 276);
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r8,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r8.u8);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r6,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r6.u8);
	// stb r5,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r5.u8);
	// stb r4,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r4.u8);
loc_8211C7EC:
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8211b168
	ctx.lr = 0x8211C800;
	sub_8211B168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211c9f8
	if (!ctx.cr6.eq) goto loc_8211C9F8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// lwz r7,32(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211c87c
	if (ctx.cr6.eq) goto loc_8211C87C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C844:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C844;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82289c50
	ctx.lr = 0x8211C860;
	sub_82289C50(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82082318
	ctx.lr = 0x8211C868;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// li r4,203
	ctx.r4.s64 = 203;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x821b16b8
	ctx.lr = 0x8211C87C;
	sub_821B16B8(ctx, base);
loc_8211C87C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8211c9a0
	if (ctx.cr6.eq) goto loc_8211C9A0;
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-20
	ctx.r31.s64 = ctx.r11.s64 + -20;
loc_8211C890:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f24,172(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8211C8B8;
	sub_8208EA90(ctx, base);
	// lfs f11,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfsu f9,24(r31)
	// bne 0x8211c890
	if (!ctx.cr0.eq) goto loc_8211C890;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r20,-4
	ctx.r10.s64 = ctx.r20.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C8E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C8E8;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r20,24
	ctx.r9.s64 = ctx.r20.s64 + 24;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211C908:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C908;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211C928:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C928;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211C948:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C948;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211C968:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c968
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C968;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// addi r10,r1,260
	ctx.r10.s64 = ctx.r1.s64 + 260;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211C988:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8211c988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C988;
	// addi r20,r11,24
	ctx.r20.s64 = ctx.r11.s64 + 24;
	// addi r15,r15,6
	ctx.r15.s64 = ctx.r15.s64 + 6;
	// b 0x8211c9f8
	goto loc_8211C9F8;
loc_8211C9A0:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211C9B8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211c9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211C9B8;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82082318
	ctx.lr = 0x8211C9CC;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x821b16b8
	ctx.lr = 0x8211C9E0;
	sub_821B16B8(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x821dc888
	ctx.lr = 0x8211C9F8;
	sub_821DC888(ctx, base);
loc_8211C9F8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8211c79c
	if (ctx.cr6.lt) goto loc_8211C79C;
	// b 0x8211ca10
	goto loc_8211CA10;
loc_8211CA08:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8211CA10:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r17,r17,64
	ctx.r17.s64 = ctx.r17.s64 + 64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211c314
	if (ctx.cr6.lt) goto loc_8211C314;
loc_8211CA2C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x821ad240
	ctx.lr = 0x8211CA38;
	sub_821AD240(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x821ad600
	ctx.lr = 0x8211CA44;
	sub_821AD600(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x821ad6f8
	ctx.lr = 0x8211CA50;
	sub_821AD6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821ad288
	ctx.lr = 0x8211CA5C;
	sub_821AD288(ctx, base);
loc_8211CA5C:
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249964
	ctx.lr = 0x8211CA68;
	sub_82249964(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211CA6C"))) PPC_WEAK_FUNC(sub_8211CA6C);
PPC_FUNC_IMPL(__imp__sub_8211CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211CA70"))) PPC_WEAK_FUNC(sub_8211CA70);
PPC_FUNC_IMPL(__imp__sub_8211CA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8211CA78;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249918
	ctx.lr = 0x8211CA80;
	sub_82249918(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211d52c
	if (ctx.cr6.eq) goto loc_8211D52C;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// lwz r29,-19048(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// bl 0x821ade68
	ctx.lr = 0x8211CABC;
	sub_821ADE68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// bl 0x821adc58
	ctx.lr = 0x8211CACC;
	sub_821ADC58(ctx, base);
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821addc0
	ctx.lr = 0x8211CAD8;
	sub_821ADDC0(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,27148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27148);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821a2a18
	ctx.lr = 0x8211CAF0;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211d52c
	if (!ctx.cr6.eq) goto loc_8211D52C;
	// lwz r11,-19048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211cb24
	if (ctx.cr6.eq) goto loc_8211CB24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x8211CB14;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad240
	ctx.lr = 0x8211CB20;
	sub_821AD240(ctx, base);
	// b 0x8211cb44
	goto loc_8211CB44;
loc_8211CB24:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x8211CB2C;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad240
	ctx.lr = 0x8211CB38;
	sub_821AD240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8211CB44;
	sub_821AD600(ctx, base);
loc_8211CB44:
	// lwz r10,48(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mulli r8,r9,28
	ctx.r8.s64 = ctx.r9.s64 * 28;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8211cba0
	if (ctx.cr6.gt) goto loc_8211CBA0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211cb80
	// bdzf 4*cr6+eq,0x8211cb88
	// bne cr6,0x8211cb90
	if (!ctx.cr6.eq) goto loc_8211CB90;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8211cb94
	goto loc_8211CB94;
loc_8211CB80:
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x8211cb94
	goto loc_8211CB94;
loc_8211CB88:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x8211cb94
	goto loc_8211CB94;
loc_8211CB90:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8211CB94:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad648
	ctx.lr = 0x8211CBA0;
	sub_821AD648(ctx, base);
loc_8211CBA0:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x8211CBB0;
	sub_821AD6A0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8211cbc4
	if (ctx.cr6.eq) goto loc_8211CBC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x8211CBC4;
	sub_821AD6F8(ctx, base);
loc_8211CBC4:
	// addi r3,r22,156
	ctx.r3.s64 = ctx.r22.s64 + 156;
	// bl 0x8211b248
	ctx.lr = 0x8211CBCC;
	sub_8211B248(ctx, base);
	// lwz r11,160(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211d52c
	if (ctx.cr6.eq) goto loc_8211D52C;
	// addi r3,r22,148
	ctx.r3.s64 = ctx.r22.s64 + 148;
	// bl 0x82082c80
	ctx.lr = 0x8211CBE0;
	sub_82082C80(ctx, base);
	// lwz r11,152(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211d52c
	if (ctx.cr6.eq) goto loc_8211D52C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2a60
	ctx.lr = 0x8211CBF4;
	sub_821A2A60(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,696
	ctx.r10.s64 = ctx.r1.s64 + 696;
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211CC04:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211cc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211CC04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a29d0
	ctx.lr = 0x8211CC18;
	sub_821A29D0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,568
	ctx.r10.s64 = ctx.r1.s64 + 568;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211CC28:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211cc28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211CC28;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,760
	ctx.r10.s64 = ctx.r1.s64 + 760;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211CC44:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211cc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211CC44;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,704
	ctx.r8.s64 = ctx.r1.s64 + 704;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211CC68:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211cc68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211CC68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f25,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f24.f64 = double(temp.f32);
	// stfs f25,376(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f25,372(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f25,368(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f24,380(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x8211CCA0;
	sub_82096F18(ctx, base);
	// lwz r11,68(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	// stfs f25,376(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// stfs f25,372(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f25,368(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f24,380(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// lwzx r7,r8,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211d52c
	if (ctx.cr6.eq) goto loc_8211D52C;
	// rotlwi r21,r11,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r21,15
	ctx.r11.s64 = ctx.r21.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211d52c
	if (ctx.cr6.eq) goto loc_8211D52C;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lfs f0,11484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,108(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x8211CD30;
	sub_821B16B8(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82082318
	ctx.lr = 0x8211CD38;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// li r4,54
	ctx.r4.s64 = 54;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821b16b8
	ctx.lr = 0x8211CD4C;
	sub_821B16B8(ctx, base);
	// lwz r9,40(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// li r15,0
	ctx.r15.s64 = 0;
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8211d4f8
	if (!ctx.cr6.gt) goto loc_8211D4F8;
	// addi r11,r21,25
	ctx.r11.s64 = ctx.r21.s64 + 25;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// rlwinm r16,r11,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8211CD78:
	// lwzx r11,r16,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r22.u32);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211d4e4
	if (ctx.cr6.eq) goto loc_8211D4E4;
	// addi r11,r21,27
	ctx.r11.s64 = ctx.r21.s64 + 27;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r22.u32);
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8211cdf4
	if (ctx.cr6.eq) goto loc_8211CDF4;
	// lwz r9,400(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r8,r21,33
	ctx.r8.s64 = ctx.r21.s64 + 33;
	// stw r15,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r15.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwzx r9,r6,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x821a8e50
	ctx.lr = 0x8211CDF0;
	sub_821A8E50(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8211CDF4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211cfd0
	if (!ctx.cr6.eq) goto loc_8211CFD0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211cfd0
	if (ctx.cr6.eq) goto loc_8211CFD0;
	// lwz r24,40(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmplw cr6,r14,r24
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8211d4e4
	if (!ctx.cr6.lt) goto loc_8211D4E4;
	// lwzx r11,r16,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r22.u32);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
loc_8211CE34:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211cf9c
	if (ctx.cr6.eq) goto loc_8211CF9C;
	// addi r11,r21,21
	ctx.r11.s64 = ctx.r21.s64 + 21;
	// addi r10,r21,35
	ctx.r10.s64 = ctx.r21.s64 + 35;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// lwzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// beq cr6,0x8211cf08
	if (ctx.cr6.eq) goto loc_8211CF08;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x8211cf08
	if (ctx.cr6.eq) goto loc_8211CF08;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r5,r21,23
	ctx.r5.s64 = ctx.r21.s64 + 23;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwzx r11,r4,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fdivs f5,f24,f11
	ctx.f5.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// fsubs f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmuls f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x8211cf14
	goto loc_8211CF14;
loc_8211CF08:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
loc_8211CF14:
	// stfs f26,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addic. r28,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r28.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfs f27,116(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq 0x8211cf88
	if (ctx.cr0.eq) goto loc_8211CF88;
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r22,128
	ctx.r29.s64 = ctx.r22.s64 + 128;
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
loc_8211CF3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211cf5c
	if (ctx.cr6.eq) goto loc_8211CF5C;
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8211CF5C:
	// addi r6,r1,768
	ctx.r6.s64 = ctx.r1.s64 + 768;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x8211b168
	ctx.lr = 0x8211CF70;
	sub_8211B168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211cf7c
	if (!ctx.cr6.eq) goto loc_8211CF7C;
	// addi r23,r23,6
	ctx.r23.s64 = ctx.r23.s64 + 6;
loc_8211CF7C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8211cf3c
	if (ctx.cr6.lt) goto loc_8211CF3C;
loc_8211CF88:
	// lwzx r11,r25,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r22.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8211cfb0
	if (!ctx.cr6.eq) goto loc_8211CFB0;
loc_8211CF9C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8211ce34
	if (ctx.cr6.lt) goto loc_8211CE34;
loc_8211CFB0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8211d4e4
	if (ctx.cr6.eq) goto loc_8211D4E4;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821dc948
	ctx.lr = 0x8211CFCC;
	sub_821DC948(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_8211CFD0:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// addi r29,r22,128
	ctx.r29.s64 = ctx.r22.s64 + 128;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,226(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 226);
	// bl 0x8211ac40
	ctx.lr = 0x8211CFF0;
	sub_8211AC40(ctx, base);
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// lwzx r11,r25,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r22.u32);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lwzx r9,r16,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r22.u32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lfs f11,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// ld r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r31,r1,432
	ctx.r31.s64 = ctx.r1.s64 + 432;
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r30,r1,448
	ctx.r30.s64 = ctx.r1.s64 + 448;
	// ld r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r27,r1,464
	ctx.r27.s64 = ctx.r1.s64 + 464;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r26,r21,21
	ctx.r26.s64 = ctx.r21.s64 + 21;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// lfs f8,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// lfs f7,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// std r8,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// lfs f6,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// std r5,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r5.u64);
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// std r24,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r24.u64);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwzx r11,r26,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r22.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// add r11,r9,r19
	ctx.r11.u64 = ctx.r9.u64 + ctx.r19.u64;
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fmuls f12,f7,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// fmuls f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f1,192(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r8,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r7,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// lwzx r6,r9,r19
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r5,r6,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// stb r5,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r5.u8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r3,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r3.u64);
	// rlwinm r3,r4,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFE;
	// std r10,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r10.u64);
	// addi r10,r21,35
	ctx.r10.s64 = ctx.r21.s64 + 35;
	// stb r3,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r3.u8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r7,r8,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r7,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r7.u8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r4.u8);
	// lwzx r6,r6,r22
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r22.u32);
	// lwzx r3,r9,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r10.u8);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r8,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r7,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r7.u8);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r4.u8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r10.u8);
	// lwzx r8,r9,r19
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r7,r8,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r7,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r7.u8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r4.u8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r10.u8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r8,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r7,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r7.u8);
	// lwzx r5,r9,r19
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r4,r5,1,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stb r4,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r4.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r3,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stb r10,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r9,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// stb r8,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r8.u8);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8211d250
	if (ctx.cr6.eq) goto loc_8211D250;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x8211d250
	if (ctx.cr6.eq) goto loc_8211D250;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r7,r21,23
	ctx.r7.s64 = ctx.r21.s64 + 23;
	// std r8,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r8.u64);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f3,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f3.f64 = double(temp.f32);
	// lwzx r10,r4,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// lfs f5,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfd f13,304(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fsubs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f7.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsubs f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f24,f11
	ctx.f10.f64 = double(float(ctx.f24.f64 / ctx.f11.f64));
	// fmuls f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f13,f10,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f28,f2,f0
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8211d25c
	goto loc_8211D25C;
loc_8211D250:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f27,f25
	ctx.f27.f64 = ctx.f25.f64;
	// fmr f26,f25
	ctx.f26.f64 = ctx.f25.f64;
loc_8211D25C:
	// stfs f27,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addic. r27,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stfs f28,280(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// beq 0x8211d4e4
	if (ctx.cr0.eq) goto loc_8211D4E4;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
loc_8211D27C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8211d2cc
	if (ctx.cr6.eq) goto loc_8211D2CC;
	// lbz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// fsubs f31,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// lbz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// lbz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 228);
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// rlwinm r4,r7,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r8,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r8.u8);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r6,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r6.u8);
	// stb r5,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r5.u8);
	// stb r4,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r4.u8);
loc_8211D2CC:
	// addi r6,r1,768
	ctx.r6.s64 = ctx.r1.s64 + 768;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8211b168
	ctx.lr = 0x8211D2E0;
	sub_8211B168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211d4d8
	if (!ctx.cr6.eq) goto loc_8211D4D8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r7,32(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211d35c
	if (ctx.cr6.eq) goto loc_8211D35C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// addi r8,r1,704
	ctx.r8.s64 = ctx.r1.s64 + 704;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211D324:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D324;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82289c50
	ctx.lr = 0x8211D340;
	sub_82289C50(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82082318
	ctx.lr = 0x8211D348;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// li r4,203
	ctx.r4.s64 = 203;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821b16b8
	ctx.lr = 0x8211D35C;
	sub_821B16B8(ctx, base);
loc_8211D35C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8211d480
	if (ctx.cr6.eq) goto loc_8211D480;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-20
	ctx.r31.s64 = ctx.r11.s64 + -20;
loc_8211D370:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f24,252(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8211D398;
	sub_8208EA90(ctx, base);
	// lfs f11,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f9,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfsu f9,24(r31)
	// bne 0x8211d370
	if (!ctx.cr0.eq) goto loc_8211D370;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// addi r10,r20,-4
	ctx.r10.s64 = ctx.r20.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211D3C8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D3C8;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r20,24
	ctx.r9.s64 = ctx.r20.s64 + 24;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211D3E8:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d3e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D3E8;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211D408:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D408;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211D428:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D428;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211D448:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D448;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8211D468:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8211d468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D468;
	// addi r20,r11,24
	ctx.r20.s64 = ctx.r11.s64 + 24;
	// addi r18,r18,6
	ctx.r18.s64 = ctx.r18.s64 + 6;
	// b 0x8211d4d8
	goto loc_8211D4D8;
loc_8211D480:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8211D498:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8211d498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D498;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82082318
	ctx.lr = 0x8211D4AC;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// li r4,228
	ctx.r4.s64 = 228;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821b16b8
	ctx.lr = 0x8211D4C0;
	sub_821B16B8(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x821dc888
	ctx.lr = 0x8211D4D8;
	sub_821DC888(ctx, base);
loc_8211D4D8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8211d27c
	if (ctx.cr6.lt) goto loc_8211D27C;
loc_8211D4E4:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r19,r19,16
	ctx.r19.s64 = ctx.r19.s64 + 16;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211cd78
	if (ctx.cr6.lt) goto loc_8211CD78;
loc_8211D4F8:
	// lwz r31,268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x8211D508;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x821ad600
	ctx.lr = 0x8211D514;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x821ad6f8
	ctx.lr = 0x8211D520;
	sub_821AD6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x8211D52C;
	sub_821AD288(ctx, base);
loc_8211D52C:
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249964
	ctx.lr = 0x8211D538;
	sub_82249964(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211D53C"))) PPC_WEAK_FUNC(sub_8211D53C);
PPC_FUNC_IMPL(__imp__sub_8211D53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211D540"))) PPC_WEAK_FUNC(sub_8211D540);
PPC_FUNC_IMPL(__imp__sub_8211D540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d558
	if (ctx.cr6.eq) goto loc_8211D558;
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// blr 
	return;
loc_8211D558:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211D560"))) PPC_WEAK_FUNC(sub_8211D560);
PPC_FUNC_IMPL(__imp__sub_8211D560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211D568;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8211d5a8
	if (!ctx.cr6.gt) goto loc_8211D5A8;
	// li r30,16
	ctx.r30.s64 = 16;
loc_8211D588:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8211e9d0
	ctx.lr = 0x8211D590;
	sub_8211E9D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8211d588
	if (ctx.cr6.lt) goto loc_8211D588;
loc_8211D5A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211D5B0"))) PPC_WEAK_FUNC(sub_8211D5B0);
PPC_FUNC_IMPL(__imp__sub_8211D5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211D5B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
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
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82184800
	ctx.lr = 0x8211D618;
	sub_82184800(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184800
	ctx.lr = 0x8211D628;
	sub_82184800(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211D63C"))) PPC_WEAK_FUNC(sub_8211D63C);
PPC_FUNC_IMPL(__imp__sub_8211D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211D640"))) PPC_WEAK_FUNC(sub_8211D640);
PPC_FUNC_IMPL(__imp__sub_8211D640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_8211D658:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8211D65C:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211D66C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8211d684
	if (!ctx.cr6.eq) goto loc_8211D684;
	// stfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// b 0x8211d688
	goto loc_8211D688;
loc_8211D684:
	// stfsx f13,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
loc_8211D688:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8211d66c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211D66C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8211d65c
	if (ctx.cr6.lt) goto loc_8211D65C;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x8211d658
	if (!ctx.cr0.eq) goto loc_8211D658;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211D6AC"))) PPC_WEAK_FUNC(sub_8211D6AC);
PPC_FUNC_IMPL(__imp__sub_8211D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211D6B0"))) PPC_WEAK_FUNC(sub_8211D6B0);
PPC_FUNC_IMPL(__imp__sub_8211D6B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// ld r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r3,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r3.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// ld r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r9,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// ld r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
	// ld r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r7,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r7.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r6,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211D70C"))) PPC_WEAK_FUNC(sub_8211D70C);
PPC_FUNC_IMPL(__imp__sub_8211D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211D710"))) PPC_WEAK_FUNC(sub_8211D710);
PPC_FUNC_IMPL(__imp__sub_8211D710) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8211d640
	ctx.lr = 0x8211D72C;
	sub_8211D640(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211D75C"))) PPC_WEAK_FUNC(sub_8211D75C);
PPC_FUNC_IMPL(__imp__sub_8211D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211D760"))) PPC_WEAK_FUNC(sub_8211D760);
PPC_FUNC_IMPL(__imp__sub_8211D760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211D768;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d828
	if (ctx.cr6.eq) goto loc_8211D828;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8211d7e0
	if (!ctx.cr6.gt) goto loc_8211D7E0;
	// li r31,16
	ctx.r31.s64 = 16;
loc_8211D790:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r4,r7,12,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x1;
	// bl 0x8211ecb8
	ctx.lr = 0x8211D7B4;
	sub_8211ECB8(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d7cc
	if (ctx.cr6.eq) goto loc_8211D7CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8211D7CC;
	sub_82183E40(ctx, base);
loc_8211D7CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8211d790
	if (!ctx.cr0.eq) goto loc_8211D790;
loc_8211D7E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211d810
	if (ctx.cr6.eq) goto loc_8211D810;
	// lwz r3,272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// bl 0x8211f428
	ctx.lr = 0x8211D7F8;
	sub_8211F428(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// bl 0x82183e40
	ctx.lr = 0x8211D808;
	sub_82183E40(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r28.u32);
loc_8211D810:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82183e40
	ctx.lr = 0x8211D81C;
	sub_82183E40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8211D828;
	sub_82183E40(ctx, base);
loc_8211D828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211D830"))) PPC_WEAK_FUNC(sub_8211D830);
PPC_FUNC_IMPL(__imp__sub_8211D830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211D838;
	sub_8224878C(ctx, base);
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
	// bl 0x821a2a60
	ctx.lr = 0x8211D84C;
	sub_821A2A60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211d8b8
	if (ctx.cr6.eq) goto loc_8211D8B8;
	// lwz r3,-19048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x8211D85C;
	sub_821A2A60(ctx, base);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r4,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r4.u64);
	// ld r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r3,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r3.u64);
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r9,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r9.u64);
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r8,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r8.u64);
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r7.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r6.u64);
loc_8211D8B8:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// ld r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r4,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r4.u64);
	// ld r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r3,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r3.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8211d95c
	if (!ctx.cr6.gt) goto loc_8211D95C;
	// li r29,16
	ctx.r29.s64 = 16;
loc_8211D944:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8211ef28
	ctx.lr = 0x8211D950;
	sub_8211EF28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8211d944
	if (!ctx.cr0.eq) goto loc_8211D944;
loc_8211D95C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211D964"))) PPC_WEAK_FUNC(sub_8211D964);
PPC_FUNC_IMPL(__imp__sub_8211D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211D968"))) PPC_WEAK_FUNC(sub_8211D968);
PPC_FUNC_IMPL(__imp__sub_8211D968) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184800
	ctx.lr = 0x8211D994;
	sub_82184800(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x8211D9A4;
	sub_82184800(ctx, base);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// bl 0x8211d830
	ctx.lr = 0x8211D9C8;
	sub_8211D830(ctx, base);
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

__attribute__((alias("__imp__sub_8211D9E0"))) PPC_WEAK_FUNC(sub_8211D9E0);
PPC_FUNC_IMPL(__imp__sub_8211D9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8211D9E8;
	sub_8224877C(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821788f0
	ctx.lr = 0x8211D9FC;
	sub_821788F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f740
	ctx.lr = 0x8211DA0C;
	sub_8211F740(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f7f0
	ctx.lr = 0x8211DA1C;
	sub_8211F7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8211fba0
	ctx.lr = 0x8211DA28;
	sub_8211FBA0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r6,1536
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1536, ctx.xer);
	// blt cr6,0x8211dd0c
	if (ctx.cr6.lt) goto loc_8211DD0C;
	// cmplwi cr6,r6,1792
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1792, ctx.xer);
	// bgt cr6,0x8211dd0c
	if (ctx.cr6.gt) goto loc_8211DD0C;
	// lis r11,17236
	ctx.r11.s64 = 1129578496;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r9,r11,21072
	ctx.r9.u64 = ctx.r11.u64 | 21072;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8211dd0c
	if (!ctx.cr6.eq) goto loc_8211DD0C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f7f0
	ctx.lr = 0x8211DA60;
	sub_8211F7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8211fa30
	ctx.lr = 0x8211DA6C;
	sub_8211FA30(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8211fa78
	ctx.lr = 0x8211DA74;
	sub_8211FA78(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8211f928
	ctx.lr = 0x8211DA80;
	sub_8211F928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8211da98
	if (!ctx.cr6.lt) goto loc_8211DA98;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x8211dab4
	goto loc_8211DAB4;
loc_8211DA98:
	// beq cr6,0x8211dab4
	if (ctx.cr6.eq) goto loc_8211DAB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,28736
	ctx.r5.s64 = ctx.r11.s64 + 28736;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8218a5f0
	ctx.lr = 0x8211DAB4;
	sub_8218A5F0(ctx, base);
loc_8211DAB4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x8211f780
	ctx.lr = 0x8211DAC8;
	sub_8211F780(ctx, base);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82080000
	ctx.lr = 0x8211DAD0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211dae4
	if (ctx.cr6.eq) goto loc_8211DAE4;
	// bl 0x8211d710
	ctx.lr = 0x8211DADC;
	sub_8211D710(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8211dae8
	goto loc_8211DAE8;
loc_8211DAE4:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8211DAE8:
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f880
	ctx.lr = 0x8211DAF4;
	sub_8211F880(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211d968
	ctx.lr = 0x8211DB00;
	sub_8211D968(ctx, base);
	// lhz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,28704
	ctx.r5.s64 = ctx.r11.s64 + 28704;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8218a5f0
	ctx.lr = 0x8211DB30;
	sub_8218A5F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r6,28664
	ctx.r5.s64 = ctx.r6.s64 + 28664;
	// subf r6,r3,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r3.s64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8218a5f0
	ctx.lr = 0x8211DB50;
	sub_8218A5F0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8211dc48
	if (!ctx.cr6.gt) goto loc_8211DC48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r27,r11,28620
	ctx.r27.s64 = ctx.r11.s64 + 28620;
	// addi r25,r10,28612
	ctx.r25.s64 = ctx.r10.s64 + 28612;
loc_8211DB74:
	// cmplwi cr6,r31,272
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 272, ctx.xer);
	// bge cr6,0x8211dc48
	if (!ctx.cr6.lt) goto loc_8211DC48;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211DB90:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8211db90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211DB90;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f7f0
	ctx.lr = 0x8211DBA8;
	sub_8211F7F0(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8211DBB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211dbd4
	if (ctx.cr6.eq) goto loc_8211DBD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211dbb0
	if (ctx.cr6.eq) goto loc_8211DBB0;
loc_8211DBD4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211dcf0
	if (!ctx.cr6.eq) goto loc_8211DCF0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82080000
	ctx.lr = 0x8211DBE4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211dbf4
	if (ctx.cr6.eq) goto loc_8211DBF4;
	// bl 0x8211d5b0
	ctx.lr = 0x8211DBF0;
	sub_8211D5B0(ctx, base);
	// b 0x8211dbf8
	goto loc_8211DBF8;
loc_8211DBF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8211DBF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8211efb0
	ctx.lr = 0x8211DC14;
	sub_8211EFB0(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x8218a5f0
	ctx.lr = 0x8211DC34;
	sub_8218A5F0(ctx, base);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8211db74
	if (ctx.cr6.lt) goto loc_8211DB74;
loc_8211DC48:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r26,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r26.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211DC60:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8211dc60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211DC60;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f7f0
	ctx.lr = 0x8211DC78;
	sub_8211F7F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,28604
	ctx.r10.s64 = ctx.r10.s64 + 28604;
loc_8211DC84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211dca8
	if (ctx.cr6.eq) goto loc_8211DCA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211dc84
	if (ctx.cr6.eq) goto loc_8211DC84;
loc_8211DCA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211dcf0
	if (!ctx.cr6.eq) goto loc_8211DCF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f390
	ctx.lr = 0x8211DCB8;
	sub_8211F390(ctx, base);
	// stw r3,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x8218a5f0
	ctx.lr = 0x8211DCDC;
	sub_8218A5F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221bae8
	ctx.lr = 0x8211DCE4;
	sub_8221BAE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8211DCF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211d760
	ctx.lr = 0x8211DCF8;
	sub_8211D760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221bae8
	ctx.lr = 0x8211DD00;
	sub_8221BAE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8211DD0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,28520
	ctx.r5.s64 = ctx.r11.s64 + 28520;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8218a5f0
	ctx.lr = 0x8211DD20;
	sub_8218A5F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221bae8
	ctx.lr = 0x8211DD28;
	sub_8221BAE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8211DD34"))) PPC_WEAK_FUNC(sub_8211DD34);
PPC_FUNC_IMPL(__imp__sub_8211DD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211DD38"))) PPC_WEAK_FUNC(sub_8211DD38);
PPC_FUNC_IMPL(__imp__sub_8211DD38) {
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
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211DD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8211DDA8;
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
}

__attribute__((alias("__imp__sub_8211DDBC"))) PPC_WEAK_FUNC(sub_8211DDBC);
PPC_FUNC_IMPL(__imp__sub_8211DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211DDC0"))) PPC_WEAK_FUNC(sub_8211DDC0);
PPC_FUNC_IMPL(__imp__sub_8211DDC0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,325(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 325);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211de3c
	if (ctx.cr6.eq) goto loc_8211DE3C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f13,304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f11,312(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bctrl 
	ctx.lr = 0x8211DE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,325(r11)
	PPC_STORE_U8(ctx.r11.u32 + 325, ctx.r4.u8);
loc_8211DE3C:
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

__attribute__((alias("__imp__sub_8211DE50"))) PPC_WEAK_FUNC(sub_8211DE50);
PPC_FUNC_IMPL(__imp__sub_8211DE50) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// beq cr6,0x8211deb8
	if (ctx.cr6.eq) goto loc_8211DEB8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8211DEB8;
	sub_82183E40(ctx, base);
loc_8211DEB8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211ded0
	if (ctx.cr6.eq) goto loc_8211DED0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8211DED0;
	sub_82183E40(ctx, base);
loc_8211DED0:
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8211DEEC"))) PPC_WEAK_FUNC(sub_8211DEEC);
PPC_FUNC_IMPL(__imp__sub_8211DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211DEF0"))) PPC_WEAK_FUNC(sub_8211DEF0);
PPC_FUNC_IMPL(__imp__sub_8211DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x8211DEF8;
	sub_8224875C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r23,0
	ctx.r23.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// addi r8,r11,25
	ctx.r8.s64 = ctx.r11.s64 + 25;
	// addi r7,r11,27
	ctx.r7.s64 = ctx.r11.s64 + 27;
	// addi r9,r11,23
	ctx.r9.s64 = ctx.r11.s64 + 23;
	// rlwinm r20,r10,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r20,r3
	PPC_STORE_U32(ctx.r20.u32 + ctx.r3.u32, ctx.r23.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r21,48(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r8,r6,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r7,r5,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r30,r4,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// bne cr6,0x8211df60
	if (!ctx.cr6.eq) goto loc_8211DF60;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwzx r25,r10,r3
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x8211df70
	goto loc_8211DF70;
loc_8211DF60:
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_8211DF70:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8211e16c
	if (!ctx.cr6.gt) goto loc_8211E16C;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// subf r27,r7,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r7.s64;
	// addi r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 + 12;
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r24,r8,r29
	ctx.r24.s64 = ctx.r29.s64 - ctx.r8.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// lis r17,-32256
	ctx.r17.s64 = -2113929216;
	// lfs f9,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f9.f64 = double(temp.f32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lfs f10,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lfs f11,2132(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 2132);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,2136(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r25,32
	ctx.r6.s64 = ctx.r25.s64 + 32;
	// lfs f12,2140(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// subf r26,r29,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r29.s64;
	// li r22,127
	ctx.r22.s64 = 127;
loc_8211DFD4:
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r19,122(r11)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8211e13c
	if (ctx.cr6.gt) goto loc_8211E13C;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r19,120(r11)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8211e13c
	if (ctx.cr6.eq) goto loc_8211E13C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211e020
	if (ctx.cr6.eq) goto loc_8211E020;
	// ld r19,64(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// addi r18,r11,64
	ctx.r18.s64 = ctx.r11.s64 + 64;
	// std r19,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r19.u64);
	// ld r19,72(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r19,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r19.u64);
loc_8211E020:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8211e06c
	if (ctx.cr6.eq) goto loc_8211E06C;
	// ld r19,0(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r18,r6,-32
	ctx.r18.s64 = ctx.r6.s64 + -32;
	// std r19,-32(r6)
	PPC_STORE_U64(ctx.r6.u32 + -32, ctx.r19.u64);
	// ld r19,8(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r19,-24(r6)
	PPC_STORE_U64(ctx.r6.u32 + -24, ctx.r19.u64);
	// ld r19,16(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r19,-16(r6)
	PPC_STORE_U64(ctx.r6.u32 + -16, ctx.r19.u64);
	// ld r19,24(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r19,-8(r6)
	PPC_STORE_U64(ctx.r6.u32 + -8, ctx.r19.u64);
	// ld r19,32(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r19,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r19.u64);
	// ld r19,40(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r19,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r19.u64);
	// ld r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r19,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r19.u64);
	// ld r19,56(r11)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r19,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r19.u64);
loc_8211E06C:
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211e0a4
	if (ctx.cr6.eq) goto loc_8211E0A4;
	// lbzx r19,r31,r8
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rlwinm r19,r19,31,1,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r19,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r19.u32);
	// lbz r19,1(r8)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rlwinm r19,r19,31,1,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// b 0x8211e0b0
	goto loc_8211E0B0;
loc_8211E0A4:
	// stw r22,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r22.u32);
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// stw r22,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r22.u32);
loc_8211E0B0:
	// lbz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// addi r19,r9,-12
	ctx.r19.s64 = ctx.r9.s64 + -12;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// ld r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// std r8,-12(r9)
	PPC_STORE_U64(ctx.r9.u32 + -12, ctx.r8.u64);
	// ld r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// std r8,-4(r9)
	PPC_STORE_U64(ctx.r9.u32 + -4, ctx.r8.u64);
	// beq cr6,0x8211e120
	if (ctx.cr6.eq) goto loc_8211E120;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r26
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r26.u32, temp.u32);
	// lbz r8,125(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 125);
	// stwx r8,r27,r10
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r8.u32);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8211e0fc
	if (!ctx.cr6.gt) goto loc_8211E0FC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x8211e108
	goto loc_8211E108;
loc_8211E0FC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8211e108
	if (!ctx.cr6.lt) goto loc_8211E108;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8211E108:
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x8211e12c
	goto loc_8211E12C;
loc_8211E120:
	// lbz r11,125(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 125);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stfs f9,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
loc_8211E12C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211e144
	if (ctx.cr6.eq) goto loc_8211E144;
	// stfsx f9,r9,r24
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r24.u32, temp.u32);
	// b 0x8211e144
	goto loc_8211E144;
loc_8211E13C:
	// std r23,-4(r10)
	PPC_STORE_U64(ctx.r10.u32 + -4, ctx.r23.u64);
	// std r23,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r23.u64);
loc_8211E144:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r5,r5,144
	ctx.r5.s64 = ctx.r5.s64 + 144;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211dfd4
	if (ctx.cr6.lt) goto loc_8211DFD4;
loc_8211E16C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r20,r3
	PPC_STORE_U32(ctx.r20.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8211E184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_8211E18C"))) PPC_WEAK_FUNC(sub_8211E18C);
PPC_FUNC_IMPL(__imp__sub_8211E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E190"))) PPC_WEAK_FUNC(sub_8211E190);
PPC_FUNC_IMPL(__imp__sub_8211E190) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8211E198;
	sub_82248770(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// addi r4,r10,27
	ctx.r4.s64 = ctx.r10.s64 + 27;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,29
	ctx.r31.s64 = ctx.r10.s64 + 29;
	// addi r30,r11,25
	ctx.r30.s64 = ctx.r11.s64 + 25;
	// addi r6,r10,23
	ctx.r6.s64 = ctx.r10.s64 + 23;
	// addi r5,r10,25
	ctx.r5.s64 = ctx.r10.s64 + 25;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,23
	ctx.r10.s64 = ctx.r11.s64 + 23;
	// addi r29,r11,27
	ctx.r29.s64 = ctx.r11.s64 + 27;
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r7,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r28,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r7,r3
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwzx r28,r6,r3
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r6,r27,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// lwzx r31,r4,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r27,r8,r3
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// ble cr6,0x8211e328
	if (!ctx.cr6.gt) goto loc_8211E328;
	// subf r22,r10,r30
	ctx.r22.s64 = ctx.r30.s64 - ctx.r10.s64;
	// subf r30,r10,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r24,r6,r5
	ctx.r24.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// subf r23,r31,r4
	ctx.r23.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r29,r10,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r10.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// subf r4,r10,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r10.s64;
	// subf r6,r10,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r10.s64;
	// subf r5,r10,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r10.s64;
loc_8211E258:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e274
	if (ctx.cr6.eq) goto loc_8211E274;
	// ldx r28,r22,r11
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r22.u32 + ctx.r11.u32);
	// add r27,r22,r11
	ctx.r27.u64 = ctx.r22.u64 + ctx.r11.u64;
	// std r28,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r28.u64);
	// ld r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
loc_8211E274:
	// ldx r28,r4,r11
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r11.u32);
	// add r27,r4,r11
	ctx.r27.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r26,r30,r11
	ctx.r26.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stdx r28,r30,r11
	PPC_STORE_U64(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u64);
	// ld r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r28,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r28.u64);
	// ldx r28,r29,r11
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r11.u32);
	// std r28,-8(r8)
	PPC_STORE_U64(ctx.r8.u32 + -8, ctx.r28.u64);
	// ldx r28,r24,r8
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r24.u32 + ctx.r8.u32);
	// std r28,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r28.u64);
	// beq cr6,0x8211e2f0
	if (ctx.cr6.eq) goto loc_8211E2F0;
	// ld r28,-48(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + -48);
	// add r27,r23,r9
	ctx.r27.u64 = ctx.r23.u64 + ctx.r9.u64;
	// addi r26,r7,-48
	ctx.r26.s64 = ctx.r7.s64 + -48;
	// addi r26,r9,-16
	ctx.r26.s64 = ctx.r9.s64 + -16;
	// std r28,-16(r9)
	PPC_STORE_U64(ctx.r9.u32 + -16, ctx.r28.u64);
	// ld r28,-40(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + -40);
	// std r28,-8(r9)
	PPC_STORE_U64(ctx.r9.u32 + -8, ctx.r28.u64);
	// ldx r28,r23,r9
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r23.u32 + ctx.r9.u32);
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
	// ld r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// ld r28,-16(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + -16);
	// std r28,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r28.u64);
	// ld r28,-8(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + -8);
	// std r28,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r28.u64);
	// ld r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r28,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r28.u64);
	// ld r28,8(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r28,40(r9)
	PPC_STORE_U64(ctx.r9.u32 + 40, ctx.r28.u64);
loc_8211E2F0:
	// ldx r28,r6,r11
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r11.u32);
	// add r27,r6,r11
	ctx.r27.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r26,r5,r11
	ctx.r26.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stdx r28,r5,r11
	PPC_STORE_U64(ctx.r5.u32 + ctx.r11.u32, ctx.r28.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// std r28,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r28.u64);
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8211e258
	if (ctx.cr6.lt) goto loc_8211E258;
loc_8211E328:
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8211E32C"))) PPC_WEAK_FUNC(sub_8211E32C);
PPC_FUNC_IMPL(__imp__sub_8211E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E330"))) PPC_WEAK_FUNC(sub_8211E330);
PPC_FUNC_IMPL(__imp__sub_8211E330) {
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
	// addi r10,r11,28768
	ctx.r10.s64 = ctx.r11.s64 + 28768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8211de50
	ctx.lr = 0x8211E358;
	sub_8211DE50(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211e378
	if (ctx.cr6.eq) goto loc_8211E378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8211E374;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8211E378:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211e388
	if (ctx.cr6.eq) goto loc_8211E388;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8211E388:
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

__attribute__((alias("__imp__sub_8211E3A0"))) PPC_WEAK_FUNC(sub_8211E3A0);
PPC_FUNC_IMPL(__imp__sub_8211E3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211E3A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x8211E3CC;
	sub_82081590(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,28768
	ctx.r9.s64 = ctx.r11.s64 + 28768;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r6,216(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 216);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211E44C"))) PPC_WEAK_FUNC(sub_8211E44C);
PPC_FUNC_IMPL(__imp__sub_8211E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E450"))) PPC_WEAK_FUNC(sub_8211E450);
PPC_FUNC_IMPL(__imp__sub_8211E450) {
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
	// bl 0x8211e3a0
	ctx.lr = 0x8211E468;
	sub_8211E3A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,28768
	ctx.r9.s64 = ctx.r11.s64 + 28768;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8211E494"))) PPC_WEAK_FUNC(sub_8211E494);
PPC_FUNC_IMPL(__imp__sub_8211E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E498"))) PPC_WEAK_FUNC(sub_8211E498);
PPC_FUNC_IMPL(__imp__sub_8211E498) {
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
	// bl 0x8211e330
	ctx.lr = 0x8211E4B8;
	sub_8211E330(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e4d4
	if (ctx.cr6.eq) goto loc_8211E4D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8211E4D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8211E4D4:
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

__attribute__((alias("__imp__sub_8211E4EC"))) PPC_WEAK_FUNC(sub_8211E4EC);
PPC_FUNC_IMPL(__imp__sub_8211E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E4F0"))) PPC_WEAK_FUNC(sub_8211E4F0);
PPC_FUNC_IMPL(__imp__sub_8211E4F0) {
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
	// bl 0x8211e3a0
	ctx.lr = 0x8211E508;
	sub_8211E3A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,28768
	ctx.r9.s64 = ctx.r11.s64 + 28768;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8211E534"))) PPC_WEAK_FUNC(sub_8211E534);
PPC_FUNC_IMPL(__imp__sub_8211E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E538"))) PPC_WEAK_FUNC(sub_8211E538);
PPC_FUNC_IMPL(__imp__sub_8211E538) {
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
	// bl 0x8211e3a0
	ctx.lr = 0x8211E550;
	sub_8211E3A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,28768
	ctx.r9.s64 = ctx.r11.s64 + 28768;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8211E57C"))) PPC_WEAK_FUNC(sub_8211E57C);
PPC_FUNC_IMPL(__imp__sub_8211E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E580"))) PPC_WEAK_FUNC(sub_8211E580);
PPC_FUNC_IMPL(__imp__sub_8211E580) {
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
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x8211E5A4;
	sub_82184800(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,296
	ctx.r9.s64 = ctx.r11.s64 + 296;
	// addi r8,r11,316
	ctx.r8.s64 = ctx.r11.s64 + 316;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r6,r11,324
	ctx.r6.s64 = ctx.r11.s64 + 324;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r5,r11,326
	ctx.r5.s64 = ctx.r11.s64 + 326;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// addi r4,r11,327
	ctx.r4.s64 = ctx.r11.s64 + 327;
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r5,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r5.u32);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 + 92;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// addi r8,r31,93
	ctx.r8.s64 = ctx.r31.s64 + 93;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// addi r7,r31,94
	ctx.r7.s64 = ctx.r31.s64 + 94;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r7.u32);
	// stw r6,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r6.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// bl 0x8209eda0
	ctx.lr = 0x8211E62C;
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

__attribute__((alias("__imp__sub_8211E640"))) PPC_WEAK_FUNC(sub_8211E640);
PPC_FUNC_IMPL(__imp__sub_8211E640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// bne cr6,0x8211e660
	if (!ctx.cr6.eq) goto loc_8211E660;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8211E660:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211E668"))) PPC_WEAK_FUNC(sub_8211E668);
PPC_FUNC_IMPL(__imp__sub_8211E668) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lhz r7,218(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211e6e0
	if (ctx.cr6.eq) goto loc_8211E6E0;
	// lwz r6,292(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8211E69C:
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8211e6d0
	if (!ctx.cr6.eq) goto loc_8211E6D0;
	// lwz r5,100(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8211e6d0
	if (ctx.cr6.lt) goto loc_8211E6D0;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8211e6e0
	if (ctx.cr6.lt) goto loc_8211E6E0;
loc_8211E6D0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8211e69c
	if (ctx.cr6.lt) goto loc_8211E69C;
loc_8211E6E0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211E6E8"))) PPC_WEAK_FUNC(sub_8211E6E8);
PPC_FUNC_IMPL(__imp__sub_8211E6E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e704
	if (ctx.cr6.eq) goto loc_8211E704;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8211E704:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211E70C"))) PPC_WEAK_FUNC(sub_8211E70C);
PPC_FUNC_IMPL(__imp__sub_8211E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E710"))) PPC_WEAK_FUNC(sub_8211E710);
PPC_FUNC_IMPL(__imp__sub_8211E710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e72c
	if (ctx.cr6.eq) goto loc_8211E72C;
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8211E72C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211E734"))) PPC_WEAK_FUNC(sub_8211E734);
PPC_FUNC_IMPL(__imp__sub_8211E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E738"))) PPC_WEAK_FUNC(sub_8211E738);
PPC_FUNC_IMPL(__imp__sub_8211E738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211E740;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82184800
	ctx.lr = 0x8211E75C;
	sub_82184800(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8211e77c
	if (!ctx.cr6.eq) goto loc_8211E77C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211ff88
	ctx.lr = 0x8211E77C;
	sub_8211FF88(ctx, base);
loc_8211E77C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e7c0
	if (ctx.cr6.eq) goto loc_8211E7C0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8211E794:
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8211f478
	ctx.lr = 0x8211E7A8;
	sub_8211F478(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8211e794
	if (ctx.cr6.lt) goto loc_8211E794;
loc_8211E7C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211E7C8"))) PPC_WEAK_FUNC(sub_8211E7C8);
PPC_FUNC_IMPL(__imp__sub_8211E7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211e7fc
	if (!ctx.cr6.eq) goto loc_8211E7FC;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8211E7FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211E804"))) PPC_WEAK_FUNC(sub_8211E804);
PPC_FUNC_IMPL(__imp__sub_8211E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E808"))) PPC_WEAK_FUNC(sub_8211E808);
PPC_FUNC_IMPL(__imp__sub_8211E808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8211E810;
	sub_82248780(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,156(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r6,152(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,136(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f31,132(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f31,128(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f30,140(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r9,r6,28
	ctx.r9.s64 = ctx.r6.s64 * 28;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r3,r8,64
	ctx.r3.s64 = ctx.r8.s64 + 64;
	// addi r28,r11,96
	ctx.r28.s64 = ctx.r11.s64 + 96;
	// addi r30,r10,96
	ctx.r30.s64 = ctx.r10.s64 + 96;
	// bl 0x820804f8
	ctx.lr = 0x8211E870;
	sub_820804F8(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stfs f31,300(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 300, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,304(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,308(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 308, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,312(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 312, temp.u32);
	// stw r26,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r26.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r26,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r26.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r26,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r26.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,0,9,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r3,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e908
	if (ctx.cr6.eq) goto loc_8211E908;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8211E8E4:
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8211f6b0
	ctx.lr = 0x8211E8F0;
	sub_8211F6B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8211e8e4
	if (ctx.cr6.lt) goto loc_8211E8E4;
loc_8211E908:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x821203f8
	ctx.lr = 0x8211E910;
	sub_821203F8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,325(r10)
	PPC_STORE_U8(ctx.r10.u32 + 325, ctx.r11.u8);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x8211e97c
	if (!ctx.cr6.eq) goto loc_8211E97C;
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// oris r6,r7,8192
	ctx.r6.u64 = ctx.r7.u64 | 536870912;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// oris r3,r4,16384
	ctx.r3.u64 = ctx.r4.u64 | 1073741824;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// b 0x8211e9b0
	goto loc_8211E9B0;
loc_8211E97C:
	// rlwinm r9,r10,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r7,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,0,2,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,2,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_8211E9B0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8211E9CC"))) PPC_WEAK_FUNC(sub_8211E9CC);
PPC_FUNC_IMPL(__imp__sub_8211E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211E9D0"))) PPC_WEAK_FUNC(sub_8211E9D0);
PPC_FUNC_IMPL(__imp__sub_8211E9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8211E9D8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211ea00
	if (ctx.cr6.eq) goto loc_8211EA00;
	// bl 0x8211e808
	ctx.lr = 0x8211EA00;
	sub_8211E808(ctx, base);
loc_8211EA00:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ec28
	if (ctx.cr6.eq) goto loc_8211EC28;
	// rlwinm r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211ec28
	if (!ctx.cr6.eq) goto loc_8211EC28;
	// lwz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// lhz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r10,96
	ctx.r28.s64 = ctx.r10.s64 + 96;
	// beq cr6,0x8211eaac
	if (ctx.cr6.eq) goto loc_8211EAAC;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_8211EA50:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ea94
	if (ctx.cr6.eq) goto loc_8211EA94;
	// ld r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// ld r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// li r24,1
	ctx.r24.s64 = 1;
	// lhz r4,122(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// std r7,96(r11)
	PPC_STORE_U64(ctx.r11.u32 + 96, ctx.r7.u64);
	// std r5,104(r11)
	PPC_STORE_U64(ctx.r11.u32 + 104, ctx.r5.u64);
	// blt cr6,0x8211ea94
	if (ctx.cr6.lt) goto loc_8211EA94;
	// sth r25,120(r11)
	PPC_STORE_U16(ctx.r11.u32 + 120, ctx.r25.u16);
	// stb r25,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r25.u8);
loc_8211EA94:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,144
	ctx.r9.s64 = ctx.r9.s64 + 144;
	// lhz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8211ea50
	if (ctx.cr6.lt) goto loc_8211EA50;
loc_8211EAAC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r26,r10,28800
	ctx.r26.s64 = ctx.r10.s64 + 28800;
loc_8211EAB8:
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211eb64
	if (ctx.cr6.eq) goto loc_8211EB64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8211EACC:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211eaf4
	if (ctx.cr6.eq) goto loc_8211EAF4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211eb4c
	if (ctx.cr6.eq) goto loc_8211EB4C;
loc_8211EAF4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211eb0c
	if (!ctx.cr6.eq) goto loc_8211EB0C;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x8211eb14
	if (ctx.cr6.eq) goto loc_8211EB14;
loc_8211EB0C:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8211eb4c
	if (!ctx.cr6.eq) goto loc_8211EB4C;
loc_8211EB14:
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8211eb4c
	if (ctx.cr6.lt) goto loc_8211EB4C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8211eb4c
	if (!ctx.cr6.lt) goto loc_8211EB4C;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211eb4c
	if (ctx.cr6.eq) goto loc_8211EB4C;
	// bl 0x8211f540
	ctx.lr = 0x8211EB4C;
	sub_8211F540(ctx, base);
loc_8211EB4C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8211eacc
	if (ctx.cr6.lt) goto loc_8211EACC;
loc_8211EB64:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// blt cr6,0x8211eab8
	if (ctx.cr6.lt) goto loc_8211EAB8;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82120728
	ctx.lr = 0x8211EB78;
	sub_82120728(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ebc8
	if (ctx.cr6.eq) goto loc_8211EBC8;
	// lwz r8,292(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211EB98:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211ebc0
	if (!ctx.cr6.eq) goto loc_8211EBC0;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8211ebc0
	if (!ctx.cr6.lt) goto loc_8211EBC0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8211EBC0:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// bdnz 0x8211eb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211EB98;
loc_8211EBC8:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ebf0
	if (ctx.cr6.eq) goto loc_8211EBF0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8211ebe8
	if (!ctx.cr6.eq) goto loc_8211EBE8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211ec18
	if (ctx.cr6.eq) goto loc_8211EC18;
loc_8211EBE8:
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// b 0x8211ec18
	goto loc_8211EC18;
loc_8211EBF0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8211ec18
	if (!ctx.cr6.eq) goto loc_8211EC18;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8211ec18
	if (!ctx.cr6.eq) goto loc_8211EC18;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 1073741824;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_8211EC18:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8211EC28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8211EC30"))) PPC_WEAK_FUNC(sub_8211EC30);
PPC_FUNC_IMPL(__imp__sub_8211EC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// lwz r8,236(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bne cr6,0x8211ec98
	if (!ctx.cr6.eq) goto loc_8211EC98;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// ld r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r3,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r3.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r9,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r9.u64);
	// blr 
	return;
loc_8211EC98:
	// ld r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// ld r7,56(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r7,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211ECB4"))) PPC_WEAK_FUNC(sub_8211ECB4);
PPC_FUNC_IMPL(__imp__sub_8211ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211ECB8"))) PPC_WEAK_FUNC(sub_8211ECB8);
PPC_FUNC_IMPL(__imp__sub_8211ECB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8211ECC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lhz r9,218(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r11,96
	ctx.r28.s64 = ctx.r11.s64 + 96;
	// beq cr6,0x8211ed20
	if (ctx.cr6.eq) goto loc_8211ED20;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8211ECF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82120c98
	ctx.lr = 0x8211ED08;
	sub_82120C98(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// lhz r9,218(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8211ecf8
	if (ctx.cr6.lt) goto loc_8211ECF8;
loc_8211ED20:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,14,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// bl 0x82120558
	ctx.lr = 0x8211ED34;
	sub_82120558(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,14,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,0,12,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211ed80
	if (ctx.cr6.eq) goto loc_8211ED80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x82183e40
	ctx.lr = 0x8211ED68;
	sub_82183E40(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r27.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,13,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_8211ED80:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8211ed98
	if (ctx.cr6.eq) goto loc_8211ED98;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82183e40
	ctx.lr = 0x8211ED94;
	sub_82183E40(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8211ED98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8211EDA0"))) PPC_WEAK_FUNC(sub_8211EDA0);
PPC_FUNC_IMPL(__imp__sub_8211EDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r9,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r9.u64);
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r8,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r8.u64);
	// ld r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r7,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r7.u64);
	// ld r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r6,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r6.u64);
	// ld r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r5.u64);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211EE54"))) PPC_WEAK_FUNC(sub_8211EE54);
PPC_FUNC_IMPL(__imp__sub_8211EE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211EE58"))) PPC_WEAK_FUNC(sub_8211EE58);
PPC_FUNC_IMPL(__imp__sub_8211EE58) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820804f8
	ctx.lr = 0x8211EE80;
	sub_820804F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8211eeac
	if (ctx.cr6.eq) goto loc_8211EEAC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821874f8
	ctx.lr = 0x8211EE9C;
	sub_821874F8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x8211EEAC;
	sub_82289C50(ctx, base);
loc_8211EEAC:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8211eed0
	if (ctx.cr6.eq) goto loc_8211EED0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821875f8
	ctx.lr = 0x8211EEC0;
	sub_821875F8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x8211EED0;
	sub_82289C50(ctx, base);
loc_8211EED0:
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8211eef4
	if (ctx.cr6.eq) goto loc_8211EEF4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821876f8
	ctx.lr = 0x8211EEE4;
	sub_821876F8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x8211EEF4;
	sub_82289C50(ctx, base);
loc_8211EEF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82289c50
	ctx.lr = 0x8211EF08;
	sub_82289C50(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211EF24"))) PPC_WEAK_FUNC(sub_8211EF24);
PPC_FUNC_IMPL(__imp__sub_8211EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211EF28"))) PPC_WEAK_FUNC(sub_8211EF28);
PPC_FUNC_IMPL(__imp__sub_8211EF28) {
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
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// stw r8,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r8.u32);
	// mulli r9,r8,28
	ctx.r9.s64 = ctx.r8.s64 * 28;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r4,r10,96
	ctx.r4.s64 = ctx.r10.s64 + 96;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8211eda0
	ctx.lr = 0x8211EF70;
	sub_8211EDA0(ctx, base);
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r6,28
	ctx.r11.s64 = ctx.r6.s64 * 28;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,120(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x8209eda0
	ctx.lr = 0x8211EF98;
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

__attribute__((alias("__imp__sub_8211EFAC"))) PPC_WEAK_FUNC(sub_8211EFAC);
PPC_FUNC_IMPL(__imp__sub_8211EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211EFB0"))) PPC_WEAK_FUNC(sub_8211EFB0);
PPC_FUNC_IMPL(__imp__sub_8211EFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8211EFB8;
	sub_82248778(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,336
	ctx.r4.s64 = 336;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8211f880
	ctx.lr = 0x8211EFD4;
	sub_8211F880(ctx, base);
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// bl 0x8211e580
	ctx.lr = 0x8211EFEC;
	sub_8211E580(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r30,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// bl 0x8211f7f0
	ctx.lr = 0x8211F008;
	sub_8211F7F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// bl 0x8211fd08
	ctx.lr = 0x8211F01C;
	sub_8211FD08(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r9,28952
	ctx.r5.s64 = ctx.r9.s64 + 28952;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lhz r7,216(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 216);
	// lhz r6,218(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 218);
	// bl 0x8218a5f0
	ctx.lr = 0x8211F03C;
	sub_8218A5F0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,216(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 216);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8211f880
	ctx.lr = 0x8211F058;
	sub_8211F880(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r3.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r31.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,218(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f180
	if (ctx.cr6.eq) goto loc_8211F180;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8211f880
	ctx.lr = 0x8211F08C;
	sub_8211F880(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r3,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r8,218(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 218);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f188
	if (ctx.cr6.eq) goto loc_8211F188;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r26,r11,28944
	ctx.r26.s64 = ctx.r11.s64 + 28944;
loc_8211F0B8:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211F0CC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8211f0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211F0CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211f7f0
	ctx.lr = 0x8211F0E4;
	sub_8211F7F0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8211F0F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211f114
	if (ctx.cr6.eq) goto loc_8211F114;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211f0f0
	if (ctx.cr6.eq) goto loc_8211F0F0;
loc_8211F114:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211f174
	if (!ctx.cr6.eq) goto loc_8211F174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82120a68
	ctx.lr = 0x8211F134;
	sub_82120A68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bne cr6,0x8211f158
	if (!ctx.cr6.eq) goto loc_8211F158;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// stw r9,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r9.u32);
loc_8211F158:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8211f0b8
	if (ctx.cr6.lt) goto loc_8211F0B8;
	// b 0x8211f188
	goto loc_8211F188;
loc_8211F174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8211F180:
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r27.u32);
loc_8211F188:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bl 0x8211e738
	ctx.lr = 0x8211F1B4;
	sub_8211E738(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8211F1B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8211feb0
	ctx.lr = 0x8211F1C4;
	sub_8211FEB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// mullw. r4,r10,r3
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8211f200
	if (ctx.cr0.eq) goto loc_8211F200;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f1e8
	if (ctx.cr6.eq) goto loc_8211F1E8;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_8211F1E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211f880
	ctx.lr = 0x8211F1F0;
	sub_8211F880(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8211ff88
	ctx.lr = 0x8211F200;
	sub_8211FF88(ctx, base);
loc_8211F200:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x8211f1b8
	if (ctx.cr6.lt) goto loc_8211F1B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lhz r10,218(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 218);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211f24c
	if (ctx.cr6.eq) goto loc_8211F24C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8211F224:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8211f6b0
	ctx.lr = 0x8211F234;
	sub_8211F6B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lhz r9,218(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 218);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8211f224
	if (ctx.cr6.lt) goto loc_8211F224;
loc_8211F24C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x820804f8
	ctx.lr = 0x8211F258;
	sub_820804F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820804f8
	ctx.lr = 0x8211F260;
	sub_820804F8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r9,96
	ctx.r11.s64 = ctx.r9.s64 + 96;
	// addi r11,r8,96
	ctx.r11.s64 = ctx.r8.s64 + 96;
	// lwz r10,96(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// ld r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// ld r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r4,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r4.u64);
	// ld r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r7,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r7.u64);
	// ld r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r6,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r6.u64);
	// lwz r5,100(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,100(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,104(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,104(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,108(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,108(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// lwz r5,116(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// lwz r4,116(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r10,120(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// lwz r9,120(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lwz r7,156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,120(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// stb r27,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r27.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,216(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 216);
	// bl 0x8209eda0
	ctx.lr = 0x8211F380;
	sub_8209EDA0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8211F38C"))) PPC_WEAK_FUNC(sub_8211F38C);
PPC_FUNC_IMPL(__imp__sub_8211F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F390"))) PPC_WEAK_FUNC(sub_8211F390);
PPC_FUNC_IMPL(__imp__sub_8211F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8211F398;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,288
	ctx.r4.s64 = 288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8211f880
	ctx.lr = 0x8211F3A8;
	sub_8211F880(ctx, base);
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8211f7f0
	ctx.lr = 0x8211F3C0;
	sub_8211F7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211fca8
	ctx.lr = 0x8211F3CC;
	sub_8211FCA8(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f404
	if (ctx.cr6.eq) goto loc_8211F404;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8211f880
	ctx.lr = 0x8211F3EC;
	sub_8211F880(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f7f0
	ctx.lr = 0x8211F400;
	sub_8211F7F0(ctx, base);
	// b 0x8211f408
	goto loc_8211F408;
loc_8211F404:
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
loc_8211F408:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184800
	ctx.lr = 0x8211F418;
	sub_82184800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211F428"))) PPC_WEAK_FUNC(sub_8211F428);
PPC_FUNC_IMPL(__imp__sub_8211F428) {
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
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211f460
	if (ctx.cr6.eq) goto loc_8211F460;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// bl 0x82183e40
	ctx.lr = 0x8211F454;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_8211F460:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8211F474"))) PPC_WEAK_FUNC(sub_8211F474);
PPC_FUNC_IMPL(__imp__sub_8211F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F478"))) PPC_WEAK_FUNC(sub_8211F478);
PPC_FUNC_IMPL(__imp__sub_8211F478) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2908
	ctx.r12.s64 = ctx.r12.s64 + -2908;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8211F4A4"))) PPC_WEAK_FUNC(sub_8211F4A4);
PPC_FUNC_IMPL(__imp__sub_8211F4A4) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-2828(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2828);
	// lwz r16,-2816(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2816);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2780(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2780);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2780(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2780);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2804(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2804);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2756(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2756);
	// lwz r16,-2792(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2792);
	// lwz r16,-2768(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2768);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8211ff88
	sub_8211FF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F500"))) PPC_WEAK_FUNC(sub_8211F500);
PPC_FUNC_IMPL(__imp__sub_8211F500) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8211ff88
	sub_8211FF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F50C"))) PPC_WEAK_FUNC(sub_8211F50C);
PPC_FUNC_IMPL(__imp__sub_8211F50C) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8211ff88
	sub_8211FF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F518"))) PPC_WEAK_FUNC(sub_8211F518);
PPC_FUNC_IMPL(__imp__sub_8211F518) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8211ff88
	sub_8211FF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F524"))) PPC_WEAK_FUNC(sub_8211F524);
PPC_FUNC_IMPL(__imp__sub_8211F524) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8211ff88
	sub_8211FF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F530"))) PPC_WEAK_FUNC(sub_8211F530);
PPC_FUNC_IMPL(__imp__sub_8211F530) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8211ff88
	sub_8211FF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8211F53C"))) PPC_WEAK_FUNC(sub_8211F53C);
PPC_FUNC_IMPL(__imp__sub_8211F53C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211F540"))) PPC_WEAK_FUNC(sub_8211F540);
PPC_FUNC_IMPL(__imp__sub_8211F540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,30176
	ctx.r9.s64 = ctx.r10.s64 + 30176;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8211F55C"))) PPC_WEAK_FUNC(sub_8211F55C);
PPC_FUNC_IMPL(__imp__sub_8211F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F560"))) PPC_WEAK_FUNC(sub_8211F560);
PPC_FUNC_IMPL(__imp__sub_8211F560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,28984
	ctx.r10.s64 = ctx.r10.s64 + 28984;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8211F578:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211f578
	if (!ctx.cr6.eq) goto loc_8211F578;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// srawi r10,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211F5B4"))) PPC_WEAK_FUNC(sub_8211F5B4);
PPC_FUNC_IMPL(__imp__sub_8211F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F5B8"))) PPC_WEAK_FUNC(sub_8211F5B8);
PPC_FUNC_IMPL(__imp__sub_8211F5B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x8211f694
	if (ctx.cr6.gt) {
		// ERROR 8211F694
		return;
	}
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2592
	ctx.r12.s64 = ctx.r12.s64 + -2592;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8211F5E0"))) PPC_WEAK_FUNC(sub_8211F5E0);
PPC_FUNC_IMPL(__imp__sub_8211F5E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,-2472(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2472);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2464(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2464);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2456(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2456);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2448(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2448);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2440(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2440);
	// lwz r16,-2432(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2432);
	// lwz r16,-2432(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2432);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2464(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2464);
	// lwz r16,-2416(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2416);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2424(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2424);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2412(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2412);
	// lwz r16,-2416(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -2416);
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F660"))) PPC_WEAK_FUNC(sub_8211F660);
PPC_FUNC_IMPL(__imp__sub_8211F660) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F668"))) PPC_WEAK_FUNC(sub_8211F668);
PPC_FUNC_IMPL(__imp__sub_8211F668) {
	PPC_FUNC_PROLOGUE();
	// li r3,84
	ctx.r3.s64 = 84;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F670"))) PPC_WEAK_FUNC(sub_8211F670);
PPC_FUNC_IMPL(__imp__sub_8211F670) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F678"))) PPC_WEAK_FUNC(sub_8211F678);
PPC_FUNC_IMPL(__imp__sub_8211F678) {
	PPC_FUNC_PROLOGUE();
	// li r3,160
	ctx.r3.s64 = 160;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F680"))) PPC_WEAK_FUNC(sub_8211F680);
PPC_FUNC_IMPL(__imp__sub_8211F680) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F688"))) PPC_WEAK_FUNC(sub_8211F688);
PPC_FUNC_IMPL(__imp__sub_8211F688) {
	PPC_FUNC_PROLOGUE();
	// li r3,96
	ctx.r3.s64 = 96;
	// b 0x8211f694
	// ERROR 8211F694
	return;
}

__attribute__((alias("__imp__sub_8211F690"))) PPC_WEAK_FUNC(sub_8211F690);
PPC_FUNC_IMPL(__imp__sub_8211F690) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211F6AC"))) PPC_WEAK_FUNC(sub_8211F6AC);
PPC_FUNC_IMPL(__imp__sub_8211F6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F6B0"))) PPC_WEAK_FUNC(sub_8211F6B0);
PPC_FUNC_IMPL(__imp__sub_8211F6B0) {
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
	// bl 0x8218f720
	ctx.lr = 0x8211F6C8;
	sub_8218F720(ctx, base);
	// mullw r11,r3,r31
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r11,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// stb r9,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r9.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r8.u8);
	// beq cr6,0x8211f70c
	if (ctx.cr6.eq) goto loc_8211F70C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8211f5b8
	ctx.lr = 0x8211F6F4;
	sub_8211F5B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211f70c
	if (ctx.cr6.eq) goto loc_8211F70C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82184800
	ctx.lr = 0x8211F70C;
	sub_82184800(ctx, base);
loc_8211F70C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,30320
	ctx.r9.s64 = ctx.r10.s64 + 30320;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8211F72C;
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

__attribute__((alias("__imp__sub_8211F740"))) PPC_WEAK_FUNC(sub_8211F740);
PPC_FUNC_IMPL(__imp__sub_8211F740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,30464
	ctx.r5.s64 = ctx.r11.s64 + 30464;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8211F76C;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211F77C"))) PPC_WEAK_FUNC(sub_8211F77C);
PPC_FUNC_IMPL(__imp__sub_8211F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F780"))) PPC_WEAK_FUNC(sub_8211F780);
PPC_FUNC_IMPL(__imp__sub_8211F780) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82184710
	ctx.lr = 0x8211F7AC;
	sub_82184710(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x8211F7BC;
	sub_82184800(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,30492
	ctx.r5.s64 = ctx.r11.s64 + 30492;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8211F7D8;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_8211F7F0"))) PPC_WEAK_FUNC(sub_8211F7F0);
PPC_FUNC_IMPL(__imp__sub_8211F7F0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8211f840
	if (!ctx.cr6.gt) goto loc_8211F840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r5,r11,30512
	ctx.r5.s64 = ctx.r11.s64 + 30512;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8211F838;
	sub_8218A5F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8211f868
	goto loc_8211F868;
loc_8211F840:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821847a8
	ctx.lr = 0x8211F84C;
	sub_821847A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8211F868:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_8211F880"))) PPC_WEAK_FUNC(sub_8211F880);
PPC_FUNC_IMPL(__imp__sub_8211F880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211f8cc
	if (ctx.cr6.eq) goto loc_8211F8CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,30636
	ctx.r5.s64 = ctx.r11.s64 + 30636;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8211F8B8;
	sub_8218A5F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8211F8CC:
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8211f900
	if (!ctx.cr6.gt) goto loc_8211F900;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,30576
	ctx.r5.s64 = ctx.r11.s64 + 30576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x8211F8EC;
	sub_8218A5F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8211F900:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211F924"))) PPC_WEAK_FUNC(sub_8211F924);
PPC_FUNC_IMPL(__imp__sub_8211F924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211F928"))) PPC_WEAK_FUNC(sub_8211F928);
PPC_FUNC_IMPL(__imp__sub_8211F928) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211f94c
	if (ctx.cr6.eq) goto loc_8211F94C;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r3,r7,r8
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
loc_8211F94C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211f96c
	if (ctx.cr6.eq) goto loc_8211F96C;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8211F96C:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211f98c
	if (ctx.cr6.eq) goto loc_8211F98C;
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8211F98C:
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211f9ac
	if (ctx.cr6.eq) goto loc_8211F9AC;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8211F9AC:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211f9cc
	if (ctx.cr6.eq) goto loc_8211F9CC;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8211F9CC:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211f9ec
	if (ctx.cr6.eq) goto loc_8211F9EC;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8211F9EC:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211fa0c
	if (ctx.cr6.eq) goto loc_8211FA0C;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8211FA0C:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FA30"))) PPC_WEAK_FUNC(sub_8211FA30);
PPC_FUNC_IMPL(__imp__sub_8211FA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211FA38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,8
	ctx.r30.s64 = 8;
loc_8211FA48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211fb70
	ctx.lr = 0x8211FA50;
	sub_8211FB70(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8211fb70
	ctx.lr = 0x8211FA58;
	sub_8211FB70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8211fa48
	if (!ctx.cr0.eq) goto loc_8211FA48;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x8211fb70
	ctx.lr = 0x8211FA6C;
	sub_8211FB70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211FA74"))) PPC_WEAK_FUNC(sub_8211FA74);
PPC_FUNC_IMPL(__imp__sub_8211FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FA78"))) PPC_WEAK_FUNC(sub_8211FA78);
PPC_FUNC_IMPL(__imp__sub_8211FA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8211FA80;
	sub_8224878C(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,288
	ctx.r10.s64 = 288;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r9,336
	ctx.r9.s64 = 336;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,144
	ctx.r8.s64 = 144;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
loc_8211FAE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211ff88
	ctx.lr = 0x8211FAF4;
	sub_8211FF88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211feb0
	ctx.lr = 0x8211FB00;
	sub_8211FEB0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// blt cr6,0x8211fae4
	if (ctx.cr6.lt) goto loc_8211FAE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,30688
	ctx.r29.s64 = ctx.r11.s64 + 30688;
loc_8211FB20:
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// beq cr6,0x8211fb58
	if (ctx.cr6.eq) goto loc_8211FB58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211fb58
	if (ctx.cr6.eq) goto loc_8211FB58;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r11.s64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218a5f0
	ctx.lr = 0x8211FB58;
	sub_8218A5F0(ctx, base);
loc_8211FB58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x8211fb20
	if (ctx.cr6.lt) goto loc_8211FB20;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211FB70"))) PPC_WEAK_FUNC(sub_8211FB70);
PPC_FUNC_IMPL(__imp__sub_8211FB70) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FB9C"))) PPC_WEAK_FUNC(sub_8211FB9C);
PPC_FUNC_IMPL(__imp__sub_8211FB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FBA0"))) PPC_WEAK_FUNC(sub_8211FBA0);
PPC_FUNC_IMPL(__imp__sub_8211FBA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r4,7(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r6,5(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r7,11(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lbz r6,10(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r4,13(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// lbz r8,14(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r9,15(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r7.u16);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// lbz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r9,17(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// lbz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r6,21(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// lbz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r4,23(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FCA4"))) PPC_WEAK_FUNC(sub_8211FCA4);
PPC_FUNC_IMPL(__imp__sub_8211FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FCA8"))) PPC_WEAK_FUNC(sub_8211FCA8);
PPC_FUNC_IMPL(__imp__sub_8211FCA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,23(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r9,21(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FD04"))) PPC_WEAK_FUNC(sub_8211FD04);
PPC_FUNC_IMPL(__imp__sub_8211FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FD08"))) PPC_WEAK_FUNC(sub_8211FD08);
PPC_FUNC_IMPL(__imp__sub_8211FD08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r4,7(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r6,5(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r9,25(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r7.u16);
	// lbz r5,26(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r6,27(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r4.u16);
	// lbz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lbz r9,31(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// lbz r8,30(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lbz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lbz r6,33(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r4,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r4.u16);
	// lbz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// lbz r11,35(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r9.u16);
	// lbz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// lbz r6,39(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 39);
	// lbz r5,38(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// lbz r8,37(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r6,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lbz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// lbz r9,43(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// lbz r8,42(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lbz r5,47(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 47);
	// lbz r4,46(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r6,45(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 45);
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FE5C"))) PPC_WEAK_FUNC(sub_8211FE5C);
PPC_FUNC_IMPL(__imp__sub_8211FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FE60"))) PPC_WEAK_FUNC(sub_8211FE60);
PPC_FUNC_IMPL(__imp__sub_8211FE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FE84"))) PPC_WEAK_FUNC(sub_8211FE84);
PPC_FUNC_IMPL(__imp__sub_8211FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FE88"))) PPC_WEAK_FUNC(sub_8211FE88);
PPC_FUNC_IMPL(__imp__sub_8211FE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r8.u64);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FEAC"))) PPC_WEAK_FUNC(sub_8211FEAC);
PPC_FUNC_IMPL(__imp__sub_8211FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8211FEB0"))) PPC_WEAK_FUNC(sub_8211FEB0);
PPC_FUNC_IMPL(__imp__sub_8211FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x8211ff80
	if (ctx.cr6.gt) goto loc_8211FF80;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211fef0
	// bdzf 4*cr6+eq,0x8211ff08
	// bdzf 4*cr6+eq,0x8211ff20
	// bdzf 4*cr6+eq,0x8211ff38
	// bdzf 4*cr6+eq,0x8211ff50
	// bne cr6,0x8211ff68
	if (!ctx.cr6.eq) goto loc_8211FF68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,64
	ctx.r10.s64 = 64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FEF0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FF08:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FF20:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FF38:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,8
	ctx.r10.s64 = 8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FF50:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FF68:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,4
	ctx.r10.s64 = 4;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_8211FF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FF88"))) PPC_WEAK_FUNC(sub_8211FF88);
PPC_FUNC_IMPL(__imp__sub_8211FF88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8211ffb8
	// bdzf 4*cr6+eq,0x8211ffc0
	// bdzf 4*cr6+eq,0x8211ffc8
	// bdzf 4*cr6+eq,0x8211ffd0
	// bdzf 4*cr6+eq,0x8211ffd8
	// bne cr6,0x8211ffe0
	if (!ctx.cr6.eq) goto loc_8211FFE0;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8211FFB8:
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_8211FFC0:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
loc_8211FFC8:
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
loc_8211FFD0:
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// blr 
	return;
loc_8211FFD8:
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
loc_8211FFE0:
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211FFE8"))) PPC_WEAK_FUNC(sub_8211FFE8);
PPC_FUNC_IMPL(__imp__sub_8211FFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8211FFF0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,64
	ctx.r25.s64 = 64;
	// li r26,16
	ctx.r26.s64 = 16;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r27,8
	ctx.r27.s64 = 8;
loc_82120010:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bgt cr6,0x821200c4
	if (ctx.cr6.gt) goto loc_821200C4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8212004c
	// bdzf 4*cr6+eq,0x82120060
	// bdzf 4*cr6+eq,0x82120074
	// bdzf 4*cr6+eq,0x82120088
	// bdzf 4*cr6+eq,0x8212009c
	// bne cr6,0x821200b0
	if (!ctx.cr6.eq) goto loc_821200B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 & ctx.r25.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_8212004C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r26
	ctx.r11.u64 = ctx.r8.u64 & ctx.r26.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_82120060:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_82120074:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_82120088:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r27
	ctx.r11.u64 = ctx.r8.u64 & ctx.r27.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_8212009C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_821200B0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// b 0x821200c8
	goto loc_821200C8;
loc_821200C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821200C8:
	// mullw. r5,r11,r28
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8212014c
	if (ctx.cr0.eq) goto loc_8212014C;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bgt cr6,0x8212014c
	if (ctx.cr6.gt) goto loc_8212014C;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82120104
	// bdzf 4*cr6+eq,0x82120110
	// bdzf 4*cr6+eq,0x8212011c
	// bdzf 4*cr6+eq,0x82120128
	// bdzf 4*cr6+eq,0x82120134
	// bne cr6,0x82120140
	if (!ctx.cr6.eq) goto loc_82120140;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120148
	goto loc_82120148;
loc_82120104:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120148
	goto loc_82120148;
loc_82120110:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120148
	goto loc_82120148;
loc_8212011C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120148
	goto loc_82120148;
loc_82120128:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120148
	goto loc_82120148;
loc_82120134:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82120148
	goto loc_82120148;
loc_82120140:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82120148:
	// bl 0x82184800
	ctx.lr = 0x8212014C;
	sub_82184800(ctx, base);
loc_8212014C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// blt cr6,0x82120010
	if (ctx.cr6.lt) goto loc_82120010;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82120160"))) PPC_WEAK_FUNC(sub_82120160);
PPC_FUNC_IMPL(__imp__sub_82120160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82120168;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,64
	ctx.r25.s64 = 64;
	// li r26,16
	ctx.r26.s64 = 16;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r27,8
	ctx.r27.s64 = 8;
loc_82120188:
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// bgt cr6,0x821202bc
	if (ctx.cr6.gt) goto loc_821202BC;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821201c4
	// bdzf 4*cr6+eq,0x821201d8
	// bdzf 4*cr6+eq,0x821201e0
	// bdzf 4*cr6+eq,0x821201e8
	// bdzf 4*cr6+eq,0x821201fc
	// bne cr6,0x82120204
	if (!ctx.cr6.eq) goto loc_82120204;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 & ctx.r25.u64;
	// b 0x82120214
	goto loc_82120214;
loc_821201C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r26
	ctx.r5.u64 = ctx.r8.u64 & ctx.r26.u64;
	// b 0x82120214
	goto loc_82120214;
loc_821201D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82120208
	goto loc_82120208;
loc_821201E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x82120208
	goto loc_82120208;
loc_821201E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r27
	ctx.r5.u64 = ctx.r8.u64 & ctx.r27.u64;
	// b 0x82120214
	goto loc_82120214;
loc_821201FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x82120208
	goto loc_82120208;
loc_82120204:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82120208:
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r8,r29
	ctx.r5.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_82120214:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821202bc
	if (ctx.cr6.eq) goto loc_821202BC;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82120250
	// bdzf 4*cr6+eq,0x82120264
	// bdzf 4*cr6+eq,0x82120278
	// bdzf 4*cr6+eq,0x82120288
	// bdzf 4*cr6+eq,0x82120298
	// bne cr6,0x821202a8
	if (!ctx.cr6.eq) goto loc_821202A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821202b8
	goto loc_821202B8;
loc_82120250:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821202b8
	goto loc_821202B8;
loc_82120264:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821202b8
	goto loc_821202B8;
loc_82120278:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821202b4
	goto loc_821202B4;
loc_82120288:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821202b4
	goto loc_821202B4;
loc_82120298:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821202b4
	goto loc_821202B4;
loc_821202A8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_821202B4:
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821202B8:
	// bl 0x82184800
	ctx.lr = 0x821202BC;
	sub_82184800(ctx, base);
loc_821202BC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 7, ctx.xer);
	// blt cr6,0x82120188
	if (ctx.cr6.lt) goto loc_82120188;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821202D0"))) PPC_WEAK_FUNC(sub_821202D0);
PPC_FUNC_IMPL(__imp__sub_821202D0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212030c
	if (ctx.cr6.eq) goto loc_8212030C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8212030c
	if (ctx.cr6.eq) goto loc_8212030C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82120308;
	sub_82183E40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8212030C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212032c
	if (ctx.cr6.eq) goto loc_8212032C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8212032c
	if (ctx.cr6.eq) goto loc_8212032C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82120328;
	sub_82183E40(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8212032C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212034c
	if (ctx.cr6.eq) goto loc_8212034C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8212034c
	if (ctx.cr6.eq) goto loc_8212034C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82120348;
	sub_82183E40(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8212034C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212036c
	if (ctx.cr6.eq) goto loc_8212036C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8212036c
	if (ctx.cr6.eq) goto loc_8212036C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82120368;
	sub_82183E40(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8212036C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212038c
	if (ctx.cr6.eq) goto loc_8212038C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8212038c
	if (ctx.cr6.eq) goto loc_8212038C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82120388;
	sub_82183E40(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8212038C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821203ac
	if (ctx.cr6.eq) goto loc_821203AC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821203ac
	if (ctx.cr6.eq) goto loc_821203AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821203A8;
	sub_82183E40(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_821203AC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821203cc
	if (ctx.cr6.eq) goto loc_821203CC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821203cc
	if (ctx.cr6.eq) goto loc_821203CC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821203C8;
	sub_82183E40(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_821203CC:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184800
	ctx.lr = 0x821203DC;
	sub_82184800(ctx, base);
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

__attribute__((alias("__imp__sub_821203F4"))) PPC_WEAK_FUNC(sub_821203F4);
PPC_FUNC_IMPL(__imp__sub_821203F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821203F8"))) PPC_WEAK_FUNC(sub_821203F8);
PPC_FUNC_IMPL(__imp__sub_821203F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82120400;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r25,216(r9)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r9.u32 + 216);
	// beq cr6,0x821204a4
	if (ctx.cr6.eq) goto loc_821204A4;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82184800
	ctx.lr = 0x8212043C;
	sub_82184800(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x821204a4
	if (!ctx.cr6.gt) goto loc_821204A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r28,255
	ctx.r28.s64 = 255;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
loc_82120464:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f31,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stb r28,125(r3)
	PPC_STORE_U8(ctx.r3.u32 + 125, ctx.r28.u8);
	// stfs f31,132(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r28,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r28.u8);
	// stfs f31,108(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// sth r29,122(r3)
	PPC_STORE_U16(ctx.r3.u32 + 122, ctx.r29.u16);
	// stfs f31,92(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// sth r26,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r26.u16);
	// stfs f31,76(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82120498;
	sub_820804F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bne 0x82120464
	if (!ctx.cr0.eq) goto loc_82120464;
loc_821204A4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8211ffe8
	ctx.lr = 0x821204B0;
	sub_8211FFE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821204BC"))) PPC_WEAK_FUNC(sub_821204BC);
PPC_FUNC_IMPL(__imp__sub_821204BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821204C0"))) PPC_WEAK_FUNC(sub_821204C0);
PPC_FUNC_IMPL(__imp__sub_821204C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821204C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r30,r9,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82184800
	ctx.lr = 0x821204F8;
	sub_82184800(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lfs f0,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stb r10,125(r3)
	PPC_STORE_U8(ctx.r3.u32 + 125, ctx.r10.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stb r10,124(r3)
	PPC_STORE_U8(ctx.r3.u32 + 124, ctx.r10.u8);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// sth r7,122(r3)
	PPC_STORE_U16(ctx.r3.u32 + 122, ctx.r7.u16);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// sth r6,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r6.u16);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82120540;
	sub_820804F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82120160
	ctx.lr = 0x8212054C;
	sub_82120160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82120554"))) PPC_WEAK_FUNC(sub_82120554);
PPC_FUNC_IMPL(__imp__sub_82120554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120558"))) PPC_WEAK_FUNC(sub_82120558);
PPC_FUNC_IMPL(__imp__sub_82120558) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82120590
	if (ctx.cr6.eq) goto loc_82120590;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821202d0
	ctx.lr = 0x8212057C;
	sub_821202D0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82183e40
	ctx.lr = 0x82120588;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82120590:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821205A4"))) PPC_WEAK_FUNC(sub_821205A4);
PPC_FUNC_IMPL(__imp__sub_821205A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821205A8"))) PPC_WEAK_FUNC(sub_821205A8);
PPC_FUNC_IMPL(__imp__sub_821205A8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f30,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// ld r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82187270
	ctx.lr = 0x8212065C;
	sub_82187270(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fmadds f3,f0,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82187270
	ctx.lr = 0x821206BC;
	sub_82187270(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,7948(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821875f8
	ctx.lr = 0x821206E4;
	sub_821875F8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821876f8
	ctx.lr = 0x821206F0;
	sub_821876F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x82120700;
	sub_82289C50(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82120724"))) PPC_WEAK_FUNC(sub_82120724);
PPC_FUNC_IMPL(__imp__sub_82120724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120728"))) PPC_WEAK_FUNC(sub_82120728);
PPC_FUNC_IMPL(__imp__sub_82120728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82120730;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249928
	ctx.lr = 0x82120738;
	sub_82249928(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r25,216(r9)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r9.u32 + 216);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821209ac
	if (ctx.cr6.eq) goto loc_821209AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f28,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f29.f64 = double(temp.f32);
loc_82120784:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120998
	if (ctx.cr6.eq) goto loc_82120998;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f5,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x821207ec
	if (!ctx.cr6.gt) goto loc_821207EC;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// b 0x821207f8
	goto loc_821207F8;
loc_821207EC:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x821207f8
	if (!ctx.cr6.lt) goto loc_821207F8;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_821207F8:
	// lhz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// stfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r11.u16);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,0,8,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212084c
	if (ctx.cr6.eq) goto loc_8212084C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8212084c
	if (!ctx.cr6.eq) goto loc_8212084C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821205a8
	ctx.lr = 0x8212084C;
	sub_821205A8(ctx, base);
loc_8212084C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x821208b8
	if (ctx.cr6.eq) goto loc_821208B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x82120870;
	sub_821876F8(ctx, base);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82187bd0
	ctx.lr = 0x82120894;
	sub_82187BD0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x821208A4;
	sub_82289C50(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// b 0x82120998
	goto loc_82120998;
loc_821208B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120918
	if (ctx.cr6.eq) goto loc_82120918;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r6,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r5,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r5.u64);
	// ld r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r4,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r4.u64);
	// ld r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r3,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r3.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r9.u64);
	// b 0x82120920
	goto loc_82120920;
loc_82120918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820804f8
	ctx.lr = 0x82120920;
	sub_820804F8(ctx, base);
loc_82120920:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x8212092C;
	sub_821876F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x8212093C;
	sub_82289C50(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820804f8
	ctx.lr = 0x82120944;
	sub_820804F8(ctx, base);
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187bd0
	ctx.lr = 0x82120968;
	sub_82187BD0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289c50
	ctx.lr = 0x82120978;
	sub_82289C50(ctx, base);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// lfs f12,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x82120998
	if (ctx.cr6.eq) goto loc_82120998;
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82120998:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,144
	ctx.r27.s64 = ctx.r27.s64 + 144;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82120784
	if (ctx.cr6.lt) goto loc_82120784;
loc_821209AC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249974
	ctx.lr = 0x821209B8;
	sub_82249974(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821209BC"))) PPC_WEAK_FUNC(sub_821209BC);
PPC_FUNC_IMPL(__imp__sub_821209BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821209C0"))) PPC_WEAK_FUNC(sub_821209C0);
PPC_FUNC_IMPL(__imp__sub_821209C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821209dc
	if (!ctx.cr6.lt) goto loc_821209DC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821209DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821209E8"))) PPC_WEAK_FUNC(sub_821209E8);
PPC_FUNC_IMPL(__imp__sub_821209E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82120a10
	if (!ctx.cr6.lt) goto loc_82120A10;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_82120A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120A18"))) PPC_WEAK_FUNC(sub_82120A18);
PPC_FUNC_IMPL(__imp__sub_82120A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82120a40
	if (!ctx.cr6.lt) goto loc_82120A40;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_82120A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82120A48"))) PPC_WEAK_FUNC(sub_82120A48);
PPC_FUNC_IMPL(__imp__sub_82120A48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,15(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r5,r10,750
	ctx.r5.s64 = ctx.r10.s64 + 750;
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// addi r4,r11,300
	ctx.r4.s64 = ctx.r11.s64 + 300;
	// b 0x821273c8
	sub_821273C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82120A64"))) PPC_WEAK_FUNC(sub_82120A64);
PPC_FUNC_IMPL(__imp__sub_82120A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120A68"))) PPC_WEAK_FUNC(sub_82120A68);
PPC_FUNC_IMPL(__imp__sub_82120A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82120A70;
	sub_82248778(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8211f7f0
	ctx.lr = 0x82120A94;
	sub_8211F7F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211fb70
	ctx.lr = 0x82120AA0;
	sub_8211FB70(ctx, base);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8211f7f0
	ctx.lr = 0x82120AB4;
	sub_8211F7F0(ctx, base);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8211f7f0
	ctx.lr = 0x82120AC8;
	sub_8211F7F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211fb70
	ctx.lr = 0x82120AD0;
	sub_8211FB70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211fb70
	ctx.lr = 0x82120AD8;
	sub_8211FB70(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8211f560
	ctx.lr = 0x82120AE0;
	sub_8211F560(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stb r3,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r3.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f7f0
	ctx.lr = 0x82120B00;
	sub_8211F7F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211fb70
	ctx.lr = 0x82120B08;
	sub_8211FB70(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82120b60
	if (ctx.cr6.eq) goto loc_82120B60;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stb r25,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r25.u8);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82120b34
	if (!ctx.cr6.gt) goto loc_82120B34;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82120B34:
	// bl 0x82080d68
	ctx.lr = 0x82120B38;
	sub_82080D68(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82184800
	ctx.lr = 0x82120B4C;
	sub_82184800(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8211f880
	ctx.lr = 0x82120B5C;
	sub_8211F880(ctx, base);
	// b 0x82120b78
	goto loc_82120B78;
loc_82120B60:
	// stb r26,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r26.u8);
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8211f880
	ctx.lr = 0x82120B74;
	sub_8211F880(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82120B78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82248f70
	ctx.lr = 0x82120B94;
	sub_82248F70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x82120ba8
	if (!ctx.cr6.gt) goto loc_82120BA8;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82120BA8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f7f0
	ctx.lr = 0x82120BB8;
	sub_8211F7F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821847a8
	ctx.lr = 0x82120BC8;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82120bec
	if (ctx.cr6.eq) goto loc_82120BEC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82120BD4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x8211fb70
	ctx.lr = 0x82120BE0;
	sub_8211FB70(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82120bd4
	if (!ctx.cr0.eq) goto loc_82120BD4;
loc_82120BEC:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f7f0
	ctx.lr = 0x82120C00;
	sub_8211F7F0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8211fb70
	ctx.lr = 0x82120C08;
	sub_8211FB70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8211f5b8
	ctx.lr = 0x82120C10;
	sub_8211F5B8(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82120c74
	if (ctx.cr6.eq) goto loc_82120C74;
	// bl 0x8211f880
	ctx.lr = 0x82120C28;
	sub_8211F880(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82120C2C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82120c44
	if (ctx.cr6.eq) goto loc_82120C44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82120C40;
	sub_82183448(ctx, base);
	// b 0x82120c50
	goto loc_82120C50;
loc_82120C44:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82120C50;
	sub_821845A0(ctx, base);
loc_82120C50:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x82120C60;
	sub_82184800(ctx, base);
	// stb r25,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r25.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r25,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r25.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82120C74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211f880
	ctx.lr = 0x82120C7C;
	sub_8211F880(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r25,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r25.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82120C94"))) PPC_WEAK_FUNC(sub_82120C94);
PPC_FUNC_IMPL(__imp__sub_82120C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82120C98"))) PPC_WEAK_FUNC(sub_82120C98);
PPC_FUNC_IMPL(__imp__sub_82120C98) {
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
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r30.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120cd8
	if (ctx.cr6.eq) goto loc_82120CD8;
	// stb r30,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r30.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82183e40
	ctx.lr = 0x82120CD4;
	sub_82183E40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82120CD8:
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120cf8
	if (ctx.cr6.eq) goto loc_82120CF8;
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82183e40
	ctx.lr = 0x82120CF4;
	sub_82183E40(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82120CF8:
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

__attribute__((alias("__imp__sub_82120D10"))) PPC_WEAK_FUNC(sub_82120D10);
PPC_FUNC_IMPL(__imp__sub_82120D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82120D18;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249924
	ctx.lr = 0x82120D20;
	sub_82249924(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,96(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x821209c0
	ctx.lr = 0x82120D54;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82120D64;
	sub_821209C0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f31,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82120d84
	if (ctx.cr6.eq) goto loc_82120D84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a48
	ctx.lr = 0x82120D80;
	sub_82120A48(ctx, base);
	// fmadds f30,f1,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f30.f64));
loc_82120D84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f29,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82120DA4;
	sub_820804F8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82120DB0;
	sub_821209C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f1,f0
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// beq cr6,0x82120ea8
	if (ctx.cr6.eq) goto loc_82120EA8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x82120a18
	ctx.lr = 0x82120DE8;
	sub_82120A18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82120df8
	if (!ctx.cr6.eq) goto loc_82120DF8;
	// li r31,15
	ctx.r31.s64 = 15;
loc_82120DF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f27,8608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x82120e30
	if (ctx.cr6.eq) goto loc_82120E30;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82127330
	ctx.lr = 0x82120E14;
	sub_82127330(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x821876f8
	ctx.lr = 0x82120E24;
	sub_821876F8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82127430
	ctx.lr = 0x82120E30;
	sub_82127430(ctx, base);
loc_82120E30:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120e5c
	if (ctx.cr6.eq) goto loc_82120E5C;
	// bl 0x82127378
	ctx.lr = 0x82120E40;
	sub_82127378(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x821875f8
	ctx.lr = 0x82120E50;
	sub_821875F8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82127430
	ctx.lr = 0x82120E5C;
	sub_82127430(ctx, base);
loc_82120E5C:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120e94
	if (ctx.cr6.eq) goto loc_82120E94;
	// bl 0x822488d0
	ctx.lr = 0x82120E6C;
	sub_822488D0(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x82120E78;
	sub_82127330(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x821874f8
	ctx.lr = 0x82120E88;
	sub_821874F8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82127430
	ctx.lr = 0x82120E94;
	sub_82127430(ctx, base);
loc_82120E94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82127430
	ctx.lr = 0x82120EA4;
	sub_82127430(ctx, base);
	// b 0x82120f04
	goto loc_82120F04;
loc_82120EA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// ld r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
loc_82120F04:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,296
	ctx.r10.s64 = ctx.r1.s64 + 296;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82120F14:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82120f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82120F14;
	// stfs f31,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f29,364(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// bl 0x82127430
	ctx.lr = 0x82120F3C;
	sub_82127430(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82120F48;
	sub_8208EA90(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8211fe88
	ctx.lr = 0x82120F8C;
	sub_8211FE88(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82121048
	if (!ctx.cr6.eq) goto loc_82121048;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121048
	if (ctx.cr6.eq) goto loc_82121048;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82120FB8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82120fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82120FB8;
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f29,236(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82289c50
	ctx.lr = 0x82120FE8;
	sub_82289C50(ctx, base);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
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
loc_82121048:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249970
	ctx.lr = 0x82121054;
	sub_82249970(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82121058"))) PPC_WEAK_FUNC(sub_82121058);
PPC_FUNC_IMPL(__imp__sub_82121058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82121060;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249928
	ctx.lr = 0x82121068;
	sub_82249928(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f30,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lfs f28,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,152(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r8,r10,r26
	ctx.r8.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lfs f31,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r11,240
	ctx.r31.s64 = ctx.r11.s64 + 240;
	// lwz r24,96(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// bl 0x821272f8
	ctx.lr = 0x821210C0;
	sub_821272F8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fadds f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// bne cr6,0x8212113c
	if (!ctx.cr6.eq) goto loc_8212113C;
	// bl 0x822488d0
	ctx.lr = 0x821210E0;
	sub_822488D0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82127378
	ctx.lr = 0x821210F0;
	sub_82127378(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a48
	ctx.lr = 0x821210FC;
	sub_82120A48(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x82121108;
	sub_82127330(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a42e0
	ctx.lr = 0x82121114;
	sub_820A42E0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82121808
	goto loc_82121808;
loc_8212113C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82121770
	if (ctx.cr6.eq) goto loc_82121770;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82121770
	if (ctx.cr6.eq) goto loc_82121770;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82121770
	if (ctx.cr6.eq) goto loc_82121770;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82121230
	if (!ctx.cr6.eq) goto loc_82121230;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lhz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82121184
	if (!ctx.cr6.eq) goto loc_82121184;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82121184:
	// clrldi r10,r25,32
	ctx.r10.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f0,2136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x821211d4
	if (!ctx.cr6.gt) goto loc_821211D4;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x821211e8
	goto loc_821211E8;
loc_821211D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x821211e8
	if (!ctx.cr6.lt) goto loc_821211E8;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_821211E8:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82121200
	if (!ctx.cr6.eq) goto loc_82121200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187320
	ctx.lr = 0x821211FC;
	sub_82187320(ctx, base);
	// b 0x82121808
	goto loc_82121808;
loc_82121200:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bne cr6,0x82121214
	if (!ctx.cr6.eq) goto loc_82121214;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187390
	ctx.lr = 0x82121210;
	sub_82187390(ctx, base);
	// b 0x82121808
	goto loc_82121808;
loc_82121214:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82121808
	if (!ctx.cr6.eq) goto loc_82121808;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x821217f4
	goto loc_821217F4;
loc_82121230:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821216f8
	if (ctx.cr6.eq) goto loc_821216F8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821216f8
	if (ctx.cr6.eq) goto loc_821216F8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821216f8
	if (ctx.cr6.eq) goto loc_821216F8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82121520
	if (!ctx.cr6.eq) goto loc_82121520;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820804f8
	ctx.lr = 0x82121258;
	sub_820804F8(ctx, base);
	// bl 0x822488d0
	ctx.lr = 0x8212125C;
	sub_822488D0(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mullw r27,r3,r3
	ctx.r27.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8212127c
	if (!ctx.cr6.eq) goto loc_8212127C;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82121280
	if (ctx.cr6.eq) goto loc_82121280;
loc_8212127C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82121280:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8212129c
	if (!ctx.cr6.eq) goto loc_8212129C;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x821212a0
	if (ctx.cr6.eq) goto loc_821212A0;
loc_8212129C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_821212A0:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821212bc
	if (!ctx.cr6.eq) goto loc_821212BC;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x821212c0
	if (ctx.cr6.eq) goto loc_821212C0;
loc_821212BC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_821212C0:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// rlwinm r7,r27,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFFFF;
	// ori r6,r11,43691
	ctx.r6.u64 = ctx.r11.u64 | 43691;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulhwu r5,r7,r6
	ctx.r5.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r5,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r30,r3,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r3.s64;
	// bne cr6,0x82121314
	if (!ctx.cr6.eq) goto loc_82121314;
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bne cr6,0x82121308
	if (!ctx.cr6.eq) goto loc_82121308;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82121308:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82121314
	if (!ctx.cr6.eq) goto loc_82121314;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82121314:
	// rlwinm r11,r27,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0x3;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82121354
	if (!ctx.cr6.gt) goto loc_82121354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82121370
	goto loc_82121370;
loc_82121354:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82121370
	if (!ctx.cr6.lt) goto loc_82121370;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82121370:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f30,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822488d0
	ctx.lr = 0x82121390;
	sub_822488D0(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bne cr6,0x82121414
	if (!ctx.cr6.eq) goto loc_82121414;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x821213AC;
	sub_82127330(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f31,f1,f12
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// bl 0x82127378
	ctx.lr = 0x821213C0;
	sub_82127378(ctx, base);
	// lfs f11,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f29,f1,f9
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// bl 0x82127330
	ctx.lr = 0x821213D8;
	sub_82127330(ctx, base);
	// lfs f8,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f1,f8,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f7.f64));
	// beq cr6,0x82121404
	if (ctx.cr6.eq) goto loc_82121404;
	// rlwinm r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121404
	if (ctx.cr6.eq) goto loc_82121404;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82121404:
	// stfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f31,276(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f29,280(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// b 0x82121500
	goto loc_82121500;
loc_82121414:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x8212148c
	if (!ctx.cr6.eq) goto loc_8212148C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x82121424;
	sub_82127330(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f31,f1,f12
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// bl 0x82127378
	ctx.lr = 0x82121438;
	sub_82127378(ctx, base);
	// lfs f11,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f29,f1,f9
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// bl 0x82127330
	ctx.lr = 0x82121450;
	sub_82127330(ctx, base);
	// lfs f8,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f1,f8,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f7.f64));
	// beq cr6,0x8212147c
	if (ctx.cr6.eq) goto loc_8212147C;
	// rlwinm r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212147c
	if (ctx.cr6.eq) goto loc_8212147C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8212147C:
	// stfs f29,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f31,280(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// b 0x82121500
	goto loc_82121500;
loc_8212148C:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82121504
	if (!ctx.cr6.eq) goto loc_82121504;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x8212149C;
	sub_82127330(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f31,f1,f12
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// bl 0x82127378
	ctx.lr = 0x821214B0;
	sub_82127378(ctx, base);
	// lfs f11,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmuls f29,f1,f9
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// bl 0x82127330
	ctx.lr = 0x821214C8;
	sub_82127330(ctx, base);
	// lfs f8,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f1,f8,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f7.f64));
	// beq cr6,0x821214f4
	if (ctx.cr6.eq) goto loc_821214F4;
	// rlwinm r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821214f4
	if (ctx.cr6.eq) goto loc_821214F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_821214F4:
	// stfs f31,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f29,276(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
loc_82121500:
	// stfs f28,284(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
loc_82121504:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// b 0x82121808
	goto loc_82121808;
loc_82121520:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82121808
	if (!ctx.cr6.eq) goto loc_82121808;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8212153c
	if (ctx.cr6.gt) goto loc_8212153C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8212153C:
	// bl 0x822488d0
	ctx.lr = 0x82121540;
	sub_822488D0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82121568
	if (!ctx.cr6.lt) goto loc_82121568;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82121568:
	// lfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82121610
	if (ctx.cr6.eq) goto loc_82121610;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127330
	ctx.lr = 0x8212157C;
	sub_82127330(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x821272d0
	ctx.lr = 0x82121588;
	sub_821272D0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// divw r8,r10,r30
	ctx.r8.s32 = ctx.r10.s32 / ctx.r30.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r6,r8,r30
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// lfs f0,8060(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// andc r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r3.u64;
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// twllei r30,0
	// twlgei r11,-1
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmsubs f31,f10,f31,f6
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 - ctx.f6.f64));
	// bl 0x82127330
	ctx.lr = 0x821215F4;
	sub_82127330(ctx, base);
	// lfs f5,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82121808
	goto loc_82121808;
loc_82121610:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// twllei r30,0
	// lhz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// divw r11,r10,r30
	ctx.r11.s32 = ctx.r10.s32 / ctx.r30.s32;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divwu r9,r25,r11
	ctx.r9.u32 = ctx.r25.u32 / ctx.r11.u32;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divwu r10,r25,r11
	ctx.r10.u32 = ctx.r25.u32 / ctx.r11.u32;
	// andc r7,r30,r8
	ctx.r7.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	// twllei r11,0
	// twlgei r7,-1
	// subf r9,r6,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r6.s64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82121658
	if (ctx.cr6.lt) goto loc_82121658;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82121658:
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// fnmsubs f9,f9,f0,f12
	ctx.f9.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fnmsubs f8,f11,f0,f1
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// fdivs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82121808
	goto loc_82121808;
loc_821216F8:
	// bl 0x821272d0
	ctx.lr = 0x821216FC;
	sub_821272D0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82121718
	if (!ctx.cr6.lt) goto loc_82121718;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_82121718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82121738
	if (!ctx.cr6.eq) goto loc_82121738;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82121808
	goto loc_82121808;
loc_82121738:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82121754
	if (!ctx.cr6.eq) goto loc_82121754;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82121808
	goto loc_82121808;
loc_82121754:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82121808
	if (!ctx.cr6.eq) goto loc_82121808;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82121808
	goto loc_82121808;
loc_82121770:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82127378
	ctx.lr = 0x82121784;
	sub_82127378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x821217a8
	if (!ctx.cr6.gt) goto loc_821217A8;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// b 0x821217bc
	goto loc_821217BC;
loc_821217A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x821217bc
	if (!ctx.cr6.lt) goto loc_821217BC;
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_821217BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821217d4
	if (!ctx.cr6.eq) goto loc_821217D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187320
	ctx.lr = 0x821217D0;
	sub_82187320(ctx, base);
	// b 0x82121808
	goto loc_82121808;
loc_821217D4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821217e8
	if (!ctx.cr6.eq) goto loc_821217E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187390
	ctx.lr = 0x821217E4;
	sub_82187390(ctx, base);
	// b 0x82121808
	goto loc_82121808;
loc_821217E8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82121808
	if (!ctx.cr6.eq) goto loc_82121808;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821217F4:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821872b0
	ctx.lr = 0x82121808;
	sub_821872B0(ctx, base);
loc_82121808:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820804f8
	ctx.lr = 0x82121810;
	sub_820804F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212182c
	if (!ctx.cr6.eq) goto loc_8212182C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8208ea90
	ctx.lr = 0x8212182C;
	sub_8208EA90(ctx, base);
loc_8212182C:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// addi r10,r24,-8
	ctx.r10.s64 = ctx.r24.s64 + -8;
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f9,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,212(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
loc_82121888:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82121888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82121888;
	// stfs f30,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfs f30,340(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f30,344(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f28,348(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// bl 0x82127430
	ctx.lr = 0x821218B0;
	sub_82127430(ctx, base);
	// lfs f0,48(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,52(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,212(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f7,56(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8211fe60
	ctx.lr = 0x82121900;
	sub_8211FE60(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249974
	ctx.lr = 0x8212190C;
	sub_82249974(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82121910"))) PPC_WEAK_FUNC(sub_82121910);
PPC_FUNC_IMPL(__imp__sub_82121910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82121918;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249928
	ctx.lr = 0x82121920;
	sub_82249928(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821209e8
	ctx.lr = 0x82121930;
	sub_821209E8(ctx, base);
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
	// lwz r9,156(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212196c
	if (!ctx.cr6.eq) goto loc_8212196C;
	// bl 0x821272d0
	ctx.lr = 0x82121960;
	sub_821272D0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_8212196C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821209e8
	ctx.lr = 0x82121978;
	sub_821209E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f28,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x821219c4
	if (ctx.cr6.eq) goto loc_821219C4;
	// bl 0x82127378
	ctx.lr = 0x8212198C;
	sub_82127378(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209e8
	ctx.lr = 0x8212199C;
	sub_821209E8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f31,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f28.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_821219C4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82121a04
	if (!ctx.cr6.gt) goto loc_82121A04;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subf r7,r9,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r9.s64;
	// twllei r8,0
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r8
	ctx.r6.s32 = ctx.r7.s32 / ctx.r8.s32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// andc r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// subf. r3,r5,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r11,-1
	// bne 0x82121b20
	if (!ctx.cr0.eq) goto loc_82121B20;
loc_82121A04:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82121b20
	if (!ctx.cr6.gt) goto loc_82121B20;
	// lhz r24,216(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82121b20
	if (!ctx.cr6.gt) goto loc_82121B20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lfs f29,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
loc_82121A2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,122(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// lhz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82121b10
	if (ctx.cr6.lt) goto loc_82121B10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211e6e8
	ctx.lr = 0x82121A54;
	sub_8211E6E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82121a74
	if (!ctx.cr6.gt) goto loc_82121A74;
	// lhz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121b10
	if (!ctx.cr6.eq) goto loc_82121B10;
	// lhz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82121b10
	if (ctx.cr6.lt) goto loc_82121B10;
loc_82121A74:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121A80;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82121A90;
	sub_821209C0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// beq cr6,0x82121aac
	if (ctx.cr6.eq) goto loc_82121AAC;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82127330
	ctx.lr = 0x82121AA4;
	sub_82127330(ctx, base);
	// fmadds f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fadds f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
loc_82121AAC:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82121b08
	if (!ctx.cr6.gt) goto loc_82121B08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821204c0
	ctx.lr = 0x82121AC0;
	sub_821204C0(ctx, base);
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// sth r25,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r25.u16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120d10
	ctx.lr = 0x82121AE4;
	sub_82120D10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82121058
	ctx.lr = 0x82121AF4;
	sub_82121058(ctx, base);
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// std r8,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r8.u64);
loc_82121B08:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble 0x82121b20
	if (!ctx.cr0.gt) goto loc_82121B20;
loc_82121B10:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,144
	ctx.r27.s64 = ctx.r27.s64 + 144;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82121a2c
	if (ctx.cr6.lt) goto loc_82121A2C;
loc_82121B20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249974
	ctx.lr = 0x82121B2C;
	sub_82249974(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82121B30"))) PPC_WEAK_FUNC(sub_82121B30);
PPC_FUNC_IMPL(__imp__sub_82121B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82121B38;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249928
	ctx.lr = 0x82121B40;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// lhz r28,216(r8)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r8.u32 + 216);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,96(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82121B74:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82121b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82121B74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82120a18
	ctx.lr = 0x82121BAC;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82121BBC;
	sub_82120A18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121BCC;
	sub_821209C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82121BDC;
	sub_821209C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fneg f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x821209c0
	ctx.lr = 0x82121BEC;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82120a18
	ctx.lr = 0x82121C0C;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82121c2c
	if (!ctx.cr6.eq) goto loc_82121C2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82121C20;
	sub_8208EA90(ctx, base);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
loc_82121C2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82121e50
	if (ctx.cr6.lt) goto loc_82121E50;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r6,r28,-3
	ctx.r6.s64 = ctx.r28.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82121C44:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,122(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// lhz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82121cc0
	if (ctx.cr6.gt) goto loc_82121CC0;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82121cc0
	if (ctx.cr6.eq) goto loc_82121CC0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,122(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 122);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82121cc0
	if (ctx.cr6.lt) goto loc_82121CC0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82121c98
	if (ctx.cr6.eq) goto loc_82121C98;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82121cc0
	if (!ctx.cr6.lt) goto loc_82121CC0;
loc_82121C98:
	// lfs f0,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,80
	ctx.r10.s64 = ctx.r9.s64 + 80;
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,80(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// lfs f12,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f11,84(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lfs f10,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,88(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
loc_82121CC0:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,266(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// lhz r5,264(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82121d40
	if (ctx.cr6.gt) goto loc_82121D40;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82121d40
	if (ctx.cr6.eq) goto loc_82121D40;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// lhz r10,266(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82121d40
	if (ctx.cr6.lt) goto loc_82121D40;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82121d18
	if (ctx.cr6.eq) goto loc_82121D18;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82121d40
	if (!ctx.cr6.lt) goto loc_82121D40;
loc_82121D18:
	// lfs f0,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,80
	ctx.r10.s64 = ctx.r9.s64 + 80;
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,80(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// lfs f12,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f11,84(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lfs f10,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,88(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
loc_82121D40:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,410(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 410);
	// lhz r5,408(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 408);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82121dc0
	if (ctx.cr6.gt) goto loc_82121DC0;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,408(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 408);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82121dc0
	if (ctx.cr6.eq) goto loc_82121DC0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,288
	ctx.r9.s64 = ctx.r10.s64 + 288;
	// lhz r10,410(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 410);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82121dc0
	if (ctx.cr6.lt) goto loc_82121DC0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82121d98
	if (ctx.cr6.eq) goto loc_82121D98;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82121dc0
	if (!ctx.cr6.lt) goto loc_82121DC0;
loc_82121D98:
	// lfs f0,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,80
	ctx.r10.s64 = ctx.r9.s64 + 80;
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,80(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// lfs f12,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f11,84(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lfs f10,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,88(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
loc_82121DC0:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,554(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 554);
	// lhz r5,552(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82121e40
	if (ctx.cr6.gt) goto loc_82121E40;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,552(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82121e40
	if (ctx.cr6.eq) goto loc_82121E40;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// lhz r10,554(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 554);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82121e40
	if (ctx.cr6.lt) goto loc_82121E40;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82121e18
	if (ctx.cr6.eq) goto loc_82121E18;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82121e40
	if (!ctx.cr6.lt) goto loc_82121E40;
loc_82121E18:
	// lfs f0,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,80
	ctx.r10.s64 = ctx.r9.s64 + 80;
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,80(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// lfs f12,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f11,84(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lfs f10,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,88(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
loc_82121E40:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82121c44
	if (ctx.cr6.lt) goto loc_82121C44;
loc_82121E50:
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82121ef4
	if (!ctx.cr6.lt) goto loc_82121EF4;
	// subf r9,r7,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r7.s64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82121E70:
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82121eec
	if (ctx.cr6.gt) goto loc_82121EEC;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82121eec
	if (ctx.cr6.eq) goto loc_82121EEC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,122(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 122);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82121eec
	if (ctx.cr6.lt) goto loc_82121EEC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82121ec4
	if (ctx.cr6.eq) goto loc_82121EC4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82121eec
	if (!ctx.cr6.lt) goto loc_82121EEC;
loc_82121EC4:
	// lfs f0,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 + 80;
	// lfs f13,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f11,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// fadds f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f11.f64));
	// stfs f12,80(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// stfs f10,84(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// stfs f9,88(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
loc_82121EEC:
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// bdnz 0x82121e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82121E70;
loc_82121EF4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x82121F00;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82121F04"))) PPC_WEAK_FUNC(sub_82121F04);
PPC_FUNC_IMPL(__imp__sub_82121F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82121F08"))) PPC_WEAK_FUNC(sub_82121F08);
PPC_FUNC_IMPL(__imp__sub_82121F08) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249924
	ctx.lr = 0x82121F20;
	sub_82249924(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121F30;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bne cr6,0x82121f54
	if (!ctx.cr6.eq) goto loc_82121F54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,14876
	ctx.r11.s64 = ctx.r11.s64 + 14876;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// b 0x82121f70
	goto loc_82121F70;
loc_82121F54:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121F60;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,14876
	ctx.r11.s64 = ctx.r11.s64 + 14876;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f27,f31,f1
	ctx.f27.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
loc_82121F70:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121F7C;
	sub_821209C0(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// beq cr6,0x82121f94
	if (ctx.cr6.eq) goto loc_82121F94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121F90;
	sub_821209C0(ctx, base);
	// fdivs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
loc_82121F94:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82121FA0;
	sub_821209C0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,3
	ctx.r4.s64 = 3;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821209c0
	ctx.lr = 0x82121FB8;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82121FC8;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82121FD8;
	sub_821209C0(ctx, base);
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82122014
	if (ctx.cr6.eq) goto loc_82122014;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fsubs f0,f30,f29
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82122014
	if (!ctx.cr6.lt) goto loc_82122014;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82122014:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f27,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249970
	ctx.lr = 0x82122030;
	sub_82249970(ctx, base);
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_82122044"))) PPC_WEAK_FUNC(sub_82122044);
PPC_FUNC_IMPL(__imp__sub_82122044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122048"))) PPC_WEAK_FUNC(sub_82122048);
PPC_FUNC_IMPL(__imp__sub_82122048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82122050;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8224991c
	ctx.lr = 0x82122058;
	sub_8224991C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lhz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821222ac
	if (ctx.cr6.eq) goto loc_821222AC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f25,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f27.f64 = double(temp.f32);
loc_82122098:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821222a0
	if (ctx.cr6.gt) goto loc_821222A0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821222a0
	if (ctx.cr6.eq) goto loc_821222A0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r9,122(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// lhz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// subf r28,r9,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x82120a18
	ctx.lr = 0x821220F0;
	sub_82120A18(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821221dc
	if (!ctx.cr6.lt) goto loc_821221DC;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x82122124
	if (!ctx.cr6.lt) goto loc_82122124;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x82122130
	goto loc_82122130;
loc_82122124:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// ble cr6,0x82122130
	if (!ctx.cr6.gt) goto loc_82122130;
loc_8212212C:
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
loc_82122130:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x8212213C;
	sub_821209E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82122290
	if (ctx.cr6.eq) goto loc_82122290;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82122150;
	sub_821209C0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,3
	ctx.r4.s64 = 3;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x821209c0
	ctx.lr = 0x82122168;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82122178;
	sub_821209C0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82122188;
	sub_821209C0(ctx, base);
	// lhz r9,122(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// andc r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// twllei r10,0
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// twlgei r5,-1
	// bge cr6,0x82122248
	if (!ctx.cr6.lt) goto loc_82122248;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f30,f11,f0,f29
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f29.f64));
	// b 0x82122264
	goto loc_82122264;
loc_821221DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821221E8;
	sub_821209E8(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8212212c
	if (!ctx.cr6.lt) goto loc_8212212C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209e8
	ctx.lr = 0x821221FC;
	sub_821209E8(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f31,f0,f11,f26
	ctx.f31.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f26.f64)));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x8212222c
	if (!ctx.cr6.lt) goto loc_8212222C;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x82122238
	goto loc_82122238;
loc_8212222C:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// ble cr6,0x82122238
	if (!ctx.cr6.gt) goto loc_82122238;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
loc_82122238:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82122130
	if (ctx.cr6.gt) goto loc_82122130;
	// fmr f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x82122130
	goto loc_82122130;
loc_82122248:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f30,f11,f0,f30
	ctx.f30.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f30.f64)));
loc_82122264:
	// bl 0x82127378
	ctx.lr = 0x82122268;
	sub_82127378(ctx, base);
	// fmadds f0,f1,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f30.f64));
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x82122284
	if (!ctx.cr6.lt) goto loc_82122284;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// b 0x82122290
	goto loc_82122290;
loc_82122284:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// ble cr6,0x82122290
	if (!ctx.cr6.gt) goto loc_82122290;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
loc_82122290:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
loc_821222A0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,144
	ctx.r27.s64 = ctx.r27.s64 + 144;
	// bne 0x82122098
	if (!ctx.cr0.eq) goto loc_82122098;
loc_821222AC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249968
	ctx.lr = 0x821222B8;
	sub_82249968(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821222BC"))) PPC_WEAK_FUNC(sub_821222BC);
PPC_FUNC_IMPL(__imp__sub_821222BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821222C0"))) PPC_WEAK_FUNC(sub_821222C0);
PPC_FUNC_IMPL(__imp__sub_821222C0) {
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
	// bne cr6,0x82122370
	if (!ctx.cr6.eq) goto loc_82122370;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x82248a40
	ctx.lr = 0x82122310;
	sub_82248A40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x8212231C;
	sub_82120A18(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x8212232C;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x8212233C;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82120a18
	ctx.lr = 0x8212234C;
	sub_82120A18(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subfe r8,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,240
	ctx.r9.s64 = ctx.r11.s64 + 240;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82248a40
	ctx.lr = 0x82122370;
	sub_82248A40(ctx, base);
loc_82122370:
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

__attribute__((alias("__imp__sub_82122388"))) PPC_WEAK_FUNC(sub_82122388);
PPC_FUNC_IMPL(__imp__sub_82122388) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82120a18
	ctx.lr = 0x821223A4;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x821223d8
	if (!ctx.cr6.eq) goto loc_821223D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821223d8
	if (!ctx.cr6.eq) goto loc_821223D8;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 8388608;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_821223D8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821223EC"))) PPC_WEAK_FUNC(sub_821223EC);
PPC_FUNC_IMPL(__imp__sub_821223EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821223F0"))) PPC_WEAK_FUNC(sub_821223F0);
PPC_FUNC_IMPL(__imp__sub_821223F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821223F8;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249918
	ctx.lr = 0x82122400;
	sub_82249918(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lhz r30,216(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82122590
	if (ctx.cr6.eq) goto loc_82122590;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821209c0
	ctx.lr = 0x82122428;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,8608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f25,f1,f31
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821209c0
	ctx.lr = 0x82122440;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmuls f24,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82122450;
	sub_821209C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821209c0
	ctx.lr = 0x82122460;
	sub_821209C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f28,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x82120a18
	ctx.lr = 0x82122470;
	sub_82120A18(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x8212247C;
	sub_82120A18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x8212248C;
	sub_82120A18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82122590
	if (!ctx.cr6.gt) goto loc_82122590;
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
	// lfs f26,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f26.f64 = double(temp.f32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lfs f27,2132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2140(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2140);
	ctx.f30.f64 = double(temp.f32);
loc_821224C0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
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
	// bgt cr6,0x82122584
	if (ctx.cr6.gt) goto loc_82122584;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82122584
	if (ctx.cr6.eq) goto loc_82122584;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82122584
	if (ctx.cr6.lt) goto loc_82122584;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82122518
	if (ctx.cr6.eq) goto loc_82122518;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82122584
	if (!ctx.cr6.lt) goto loc_82122584;
loc_82122518:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82122548
	if (!ctx.cr6.eq) goto loc_82122548;
	// bl 0x82127378
	ctx.lr = 0x82122524;
	sub_82127378(ctx, base);
	// fmadds f0,f1,f24,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f24.f64 + ctx.f25.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82122538
	if (!ctx.cr6.gt) goto loc_82122538;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x82122544
	goto loc_82122544;
loc_82122538:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82122544
	if (!ctx.cr6.lt) goto loc_82122544;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82122544:
	// stfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
loc_82122548:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// beq cr6,0x8212255c
	if (ctx.cr6.eq) goto loc_8212255C;
	// bl 0x82127378
	ctx.lr = 0x82122558;
	sub_82127378(ctx, base);
	// fmadds f0,f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f29.f64));
loc_8212255C:
	// lfs f13,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82122574
	if (!ctx.cr6.gt) goto loc_82122574;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x82122580
	goto loc_82122580;
loc_82122574:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82122580
	if (!ctx.cr6.lt) goto loc_82122580;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82122580:
	// stfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
loc_82122584:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x821224c0
	if (!ctx.cr0.eq) goto loc_821224C0;
loc_82122590:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249964
	ctx.lr = 0x8212259C;
	sub_82249964(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821225A0"))) PPC_WEAK_FUNC(sub_821225A0);
PPC_FUNC_IMPL(__imp__sub_821225A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821225A8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82120a18
	ctx.lr = 0x821225BC;
	sub_82120A18(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r30,216(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x82120a18
	ctx.lr = 0x821225D0;
	sub_82120A18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82122648
	if (!ctx.cr6.gt) goto loc_82122648;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_821225E4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
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
	// bgt cr6,0x8212263c
	if (ctx.cr6.gt) goto loc_8212263C;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212263c
	if (ctx.cr6.eq) goto loc_8212263C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,122(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8212263c
	if (!ctx.cr6.eq) goto loc_8212263C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122638;
	sub_82120A18(ctx, base);
	// stb r3,125(r30)
	PPC_STORE_U8(ctx.r30.u32 + 125, ctx.r3.u8);
loc_8212263C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x821225e4
	if (!ctx.cr0.eq) goto loc_821225E4;
loc_82122648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82122650"))) PPC_WEAK_FUNC(sub_82122650);
PPC_FUNC_IMPL(__imp__sub_82122650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82122658;
	sub_8224878C(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// bl 0x82120a18
	ctx.lr = 0x8212267C;
	sub_82120A18(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// bl 0x821209c0
	ctx.lr = 0x821226A0;
	sub_821209C0(ctx, base);
	// fdivs f12,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f29.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821209c0
	ctx.lr = 0x821226B4;
	sub_821209C0(ctx, base);
	// fdivs f11,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f29.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x821226CC;
	sub_821209C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fdivs f9,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 / ctx.f29.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f30,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,12(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x821226EC;
	sub_821209C0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f31,8608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8608);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f8,f1,f31
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fdivs f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f29.f64));
	// stfs f7,16(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x8212270C;
	sub_821209C0(ctx, base);
	// fmuls f6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fdivs f5,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f29.f64));
	// stfs f5,20(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x821209c0
	ctx.lr = 0x82122724;
	sub_821209C0(ctx, base);
	// fmuls f4,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f30,28(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,2140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,2132(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2132);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lfs f10,2136(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2136);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f12,f4,f29
	ctx.f12.f64 = double(float(ctx.f4.f64 / ctx.f29.f64));
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// ble cr6,0x82122760
	if (!ctx.cr6.gt) goto loc_82122760;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// b 0x8212276c
	goto loc_8212276C;
loc_82122760:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8212276c
	if (!ctx.cr6.lt) goto loc_8212276C;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_8212276C:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82122784
	if (!ctx.cr6.gt) goto loc_82122784;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// b 0x82122790
	goto loc_82122790;
loc_82122784:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x82122790
	if (!ctx.cr6.lt) goto loc_82122790;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
loc_82122790:
	// stfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x821227b8
	if (!ctx.cr6.gt) goto loc_821227B8;
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821227B8:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x821227dc
	if (!ctx.cr6.lt) goto loc_821227DC;
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821227DC:
	// stfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821227F4"))) PPC_WEAK_FUNC(sub_821227F4);
PPC_FUNC_IMPL(__imp__sub_821227F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821227F8"))) PPC_WEAK_FUNC(sub_821227F8);
PPC_FUNC_IMPL(__imp__sub_821227F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82122800;
	sub_82248780(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r26,r28,16
	ctx.r26.s64 = ctx.r28.s64 + 16;
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82122938
	if (ctx.cr6.lt) goto loc_82122938;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120a18
	ctx.lr = 0x82122840;
	sub_82120A18(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82122854
	if (ctx.cr6.gt) goto loc_82122854;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82122854:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122860;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82122870
	if (!ctx.cr6.eq) goto loc_82122870;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82122938
	if (ctx.cr6.eq) goto loc_82122938;
loc_82122870:
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82122884:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82122884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82122884;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x821228B8;
	sub_820804F8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82127430
	ctx.lr = 0x821228F4;
	sub_82127430(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f5,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x8211ee58
	ctx.lr = 0x82122938;
	sub_8211EE58(ctx, base);
loc_82122938:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82122940"))) PPC_WEAK_FUNC(sub_82122940);
PPC_FUNC_IMPL(__imp__sub_82122940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82122948;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249920
	ctx.lr = 0x82122950;
	sub_82249920(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122964;
	sub_82120A18(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82120a18
	ctx.lr = 0x82122990;
	sub_82120A18(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f29,f9,f31
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x82120a18
	ctx.lr = 0x821229B4;
	sub_82120A18(ctx, base);
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lhz r11,216(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f31,f6,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// ble cr6,0x82122ad4
	if (!ctx.cr6.gt) goto loc_82122AD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_821229E4:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82122ac8
	if (ctx.cr6.gt) goto loc_82122AC8;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82122ac8
	if (ctx.cr6.eq) goto loc_82122AC8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r29,122(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// bl 0x82120a18
	ctx.lr = 0x82122A30;
	sub_82120A18(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82122ac8
	if (ctx.cr6.lt) goto loc_82122AC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122A44;
	sub_82120A18(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82122ac8
	if (!ctx.cr6.lt) goto loc_82122AC8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// bl 0x821209c0
	ctx.lr = 0x82122A5C;
	sub_821209C0(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x82122A64;
	sub_82127378(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f28,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// bl 0x821209c0
	ctx.lr = 0x82122A74;
	sub_821209C0(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x82122A7C;
	sub_82127378(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f27,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f1.f64));
	// bl 0x821209c0
	ctx.lr = 0x82122A8C;
	sub_821209C0(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x82122A94;
	sub_82127378(ctx, base);
	// fmuls f0,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f1.f64));
	// fadds f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f29,f27
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f7,80(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f6,84(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_82122AC8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bne 0x821229e4
	if (!ctx.cr0.eq) goto loc_821229E4;
loc_82122AD4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8224996c
	ctx.lr = 0x82122AE0;
	sub_8224996C(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82122AE4"))) PPC_WEAK_FUNC(sub_82122AE4);
PPC_FUNC_IMPL(__imp__sub_82122AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122AE8"))) PPC_WEAK_FUNC(sub_82122AE8);
PPC_FUNC_IMPL(__imp__sub_82122AE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x82122B28;
	sub_820804F8(ctx, base);
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
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

__attribute__((alias("__imp__sub_82122B44"))) PPC_WEAK_FUNC(sub_82122B44);
PPC_FUNC_IMPL(__imp__sub_82122B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82122B48"))) PPC_WEAK_FUNC(sub_82122B48);
PPC_FUNC_IMPL(__imp__sub_82122B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82122B50;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122B64;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122B74;
	sub_82120A18(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82122be8
	if (!ctx.cr6.lt) goto loc_82122BE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// ld r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// std r7,128(r10)
	PPC_STORE_U64(ctx.r10.u32 + 128, ctx.r7.u64);
	// ld r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r6,136(r10)
	PPC_STORE_U64(ctx.r10.u32 + 136, ctx.r6.u64);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r9.u64);
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r8.u64);
	// ld r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r7,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r7.u64);
	// ld r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r6,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r6.u64);
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r5,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r5.u64);
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r4,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r4.u64);
loc_82122BE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122BF4;
	sub_82120A18(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82122C10"))) PPC_WEAK_FUNC(sub_82122C10);
PPC_FUNC_IMPL(__imp__sub_82122C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82122C18;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82120a18
	ctx.lr = 0x82122C40;
	sub_82120A18(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82122cb4
	if (!ctx.cr6.eq) goto loc_82122CB4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// ld r7,128(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 128);
	// std r7,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r7.u64);
	// ld r6,136(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 136);
	// std r6,72(r11)
	PPC_STORE_U64(ctx.r11.u32 + 72, ctx.r6.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// ld r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r7,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// ld r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r6,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r6.u64);
	// ld r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r5,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r5.u64);
	// ld r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
loc_82122CB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122CC0;
	sub_82120A18(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82122d18
	if (!ctx.cr6.eq) goto loc_82122D18;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82122CD4;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82122d10
	if (ctx.cr6.eq) goto loc_82122D10;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82122d18
	if (!ctx.cr6.lt) goto loc_82122D18;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
loc_82122D10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82122b48
	ctx.lr = 0x82122D18;
	sub_82122B48(ctx, base);
loc_82122D18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82122D20"))) PPC_WEAK_FUNC(sub_82122D20);
PPC_FUNC_IMPL(__imp__sub_82122D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82122D28;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249914
	ctx.lr = 0x82122D30;
	sub_82249914(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821209c0
	ctx.lr = 0x82122D44;
	sub_821209C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821209c0
	ctx.lr = 0x82122D54;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,8608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f30,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,2132(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2132);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,2136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2136);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x82122d8c
	if (!ctx.cr6.gt) goto loc_82122D8C;
	// fsubs f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// b 0x82122d98
	goto loc_82122D98;
loc_82122D8C:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// bge cr6,0x82122d98
	if (!ctx.cr6.lt) goto loc_82122D98;
	// fadds f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
loc_82122D98:
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// lwz r11,96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82122DBC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82122dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82122DBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// lfs f27,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f26.f64 = double(temp.f32);
	// stfs f27,168(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f27,164(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,172(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ble cr6,0x82122ee8
	if (!ctx.cr6.gt) goto loc_82122EE8;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82122E00:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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
	// bgt cr6,0x82122edc
	if (ctx.cr6.gt) goto loc_82122EDC;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82122edc
	if (ctx.cr6.eq) goto loc_82122EDC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,122(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 122);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f24,f13
	ctx.f24.f64 = double(float(ctx.f13.f64));
	// bl 0x821209c0
	ctx.lr = 0x82122E5C;
	sub_821209C0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmadds f23,f1,f24,f25
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f24.f64 + ctx.f25.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821209c0
	ctx.lr = 0x82122E6C;
	sub_821209C0(ctx, base);
	// fmuls f0,f24,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f29.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f23,100(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f26,108(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82122e94
	if (!ctx.cr6.gt) goto loc_82122E94;
loc_82122E88:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82122e88
	if (ctx.cr6.gt) goto loc_82122E88;
loc_82122E94:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82122ea8
	if (!ctx.cr6.lt) goto loc_82122EA8;
loc_82122E9C:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82122e9c
	if (ctx.cr6.lt) goto loc_82122E9C;
loc_82122EA8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x821872b0
	ctx.lr = 0x82122EB4;
	sub_821872B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8208ea90
	ctx.lr = 0x82122EC4;
	sub_8208EA90(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82122ED0;
	sub_8208EA90(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211fe88
	ctx.lr = 0x82122EDC;
	sub_8211FE88(ctx, base);
loc_82122EDC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x82122e00
	if (!ctx.cr0.eq) goto loc_82122E00;
loc_82122EE8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249960
	ctx.lr = 0x82122EF4;
	sub_82249960(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82122EF8"))) PPC_WEAK_FUNC(sub_82122EF8);
PPC_FUNC_IMPL(__imp__sub_82122EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82122F00;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249928
	ctx.lr = 0x82122F08;
	sub_82249928(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r31,216(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x82120a18
	ctx.lr = 0x82122F24;
	sub_82120A18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82120a18
	ctx.lr = 0x82122F34;
	sub_82120A18(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821209c0
	ctx.lr = 0x82122F44;
	sub_821209C0(ctx, base);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r28,96(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// ble cr6,0x82123158
	if (!ctx.cr6.gt) goto loc_82123158;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lfs f28,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
loc_82122F70:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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
	// bgt cr6,0x8212314c
	if (ctx.cr6.gt) goto loc_8212314C;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212314c
	if (ctx.cr6.eq) goto loc_8212314C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,122(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8212314c
	if (!ctx.cr6.eq) goto loc_8212314C;
	// ld r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r23,r31,80
	ctx.r23.s64 = ctx.r31.s64 + 80;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
	// lfs f12,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r6,136(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 136);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r6,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x82123074;
	sub_82187200(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// fcmpu cr6,f29,f28
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// bgt cr6,0x82123090
	if (ctx.cr6.gt) goto loc_82123090;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82187200
	ctx.lr = 0x8212308C;
	sub_82187200(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82123090:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82120a18
	ctx.lr = 0x8212309C;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821230e4
	if (ctx.cr6.eq) goto loc_821230E4;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x821230e4
	if (!ctx.cr6.gt) goto loc_821230E4;
	// fdivs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// lhz r10,122(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// sth r8,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r8.u16);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f30,f10
	ctx.f31.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
loc_821230E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a42e0
	ctx.lr = 0x821230EC;
	sub_820A42E0(ctx, base);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82123120
	if (!ctx.cr6.eq) goto loc_82123120;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82123140
	goto loc_82123140;
loc_82123120:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82123140:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211fe88
	ctx.lr = 0x8212314C;
	sub_8211FE88(ctx, base);
loc_8212314C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// bne 0x82122f70
	if (!ctx.cr0.eq) goto loc_82122F70;
loc_82123158:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249974
	ctx.lr = 0x82123164;
	sub_82249974(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82123168"))) PPC_WEAK_FUNC(sub_82123168);
PPC_FUNC_IMPL(__imp__sub_82123168) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82187200
	ctx.lr = 0x8212319C;
	sub_82187200(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821231b4
	if (!ctx.cr6.lt) goto loc_821231B4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821231B4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x821231e4
	if (ctx.cr6.eq) goto loc_821231E4;
	// fdivs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821231E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_821231FC"))) PPC_WEAK_FUNC(sub_821231FC);
PPC_FUNC_IMPL(__imp__sub_821231FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123200"))) PPC_WEAK_FUNC(sub_82123200);
PPC_FUNC_IMPL(__imp__sub_82123200) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820804f8
	ctx.lr = 0x82123228;
	sub_820804F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821209c0
	ctx.lr = 0x82123234;
	sub_821209C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,8608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821874f8
	ctx.lr = 0x82123248;
	sub_821874F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821209c0
	ctx.lr = 0x82123254;
	sub_821209C0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821875f8
	ctx.lr = 0x82123260;
	sub_821875F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x8212326C;
	sub_821209C0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x821876f8
	ctx.lr = 0x82123278;
	sub_821876F8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82289c50
	ctx.lr = 0x82123288;
	sub_82289C50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x82123298;
	sub_82289C50(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r5.u64);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r4,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r4.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r3.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r10.u64);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r9,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r9.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r8.u64);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82123304"))) PPC_WEAK_FUNC(sub_82123304);
PPC_FUNC_IMPL(__imp__sub_82123304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123308"))) PPC_WEAK_FUNC(sub_82123308);
PPC_FUNC_IMPL(__imp__sub_82123308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82123310;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8224991c
	ctx.lr = 0x82123318;
	sub_8224991C(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// lhz r23,216(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r24,96(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// addi r10,r24,-8
	ctx.r10.s64 = ctx.r24.s64 + -8;
loc_82123350:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82123350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82123350;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8212336C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8212336c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212336C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82096f18
	ctx.lr = 0x82123384;
	sub_82096F18(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82096f18
	ctx.lr = 0x82123390;
	sub_82096F18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r25,0(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x821235e0
	if (ctx.cr6.eq) goto loc_821235E0;
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
	// lfs f26,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f27.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f28,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,8608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8608);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,30760(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30760);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
loc_821233DC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821235cc
	if (ctx.cr6.gt) goto loc_821235CC;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821235cc
	if (ctx.cr6.eq) goto loc_821235CC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,122(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82123488
	if (!ctx.cr6.eq) goto loc_82123488;
	// ld r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 72);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// bl 0x8208ea90
	ctx.lr = 0x82123444;
	sub_8208EA90(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208ea90
	ctx.lr = 0x82123450;
	sub_8208EA90(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82123488:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x8208ea90
	ctx.lr = 0x821234A8;
	sub_8208EA90(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8208ea90
	ctx.lr = 0x82123500;
	sub_8208EA90(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x8212350C;
	sub_8208EA90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211fe60
	ctx.lr = 0x82123518;
	sub_8211FE60(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821209c0
	ctx.lr = 0x82123524;
	sub_821209C0(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x821235a4
	if (ctx.cr6.eq) goto loc_821235A4;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821209c0
	ctx.lr = 0x82123538;
	sub_821209C0(ctx, base);
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82123568
	if (ctx.cr6.lt) goto loc_82123568;
loc_8212355C:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8212355c
	if (!ctx.cr6.lt) goto loc_8212355C;
loc_82123568:
	// fmuls f1,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x8212357c
	if (!ctx.cr6.gt) goto loc_8212357C;
	// fsubs f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// b 0x82123588
	goto loc_82123588;
loc_8212357C:
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bge cr6,0x82123588
	if (!ctx.cr6.lt) goto loc_82123588;
	// fadds f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
loc_82123588:
	// bl 0x82249e70
	ctx.lr = 0x8212358C;
	sub_82249E70(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f1.f64));
	// bl 0x821209c0
	ctx.lr = 0x8212359C;
	sub_821209C0(ctx, base);
	// fmuls f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f25.f64));
	// b 0x821235c0
	goto loc_821235C0;
loc_821235A4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821209c0
	ctx.lr = 0x821235AC;
	sub_821209C0(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x821235cc
	if (ctx.cr6.eq) goto loc_821235CC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821209c0
	ctx.lr = 0x821235C0;
	sub_821209C0(ctx, base);
loc_821235C0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82123168
	ctx.lr = 0x821235CC;
	sub_82123168(ctx, base);
loc_821235CC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,144
	ctx.r27.s64 = ctx.r27.s64 + 144;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821233dc
	if (ctx.cr6.lt) goto loc_821233DC;
loc_821235E0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249968
	ctx.lr = 0x821235EC;
	sub_82249968(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821235F0"))) PPC_WEAK_FUNC(sub_821235F0);
PPC_FUNC_IMPL(__imp__sub_821235F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821235F8;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249928
	ctx.lr = 0x82123600;
	sub_82249928(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r29,216(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// bl 0x821209c0
	ctx.lr = 0x82123620;
	sub_821209C0(ctx, base);
	// lwz r10,156(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r30,r9,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r9.s64;
	// bl 0x82120a18
	ctx.lr = 0x8212364C;
	sub_82120A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82123660
	if (!ctx.cr6.eq) goto loc_82123660;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8212368c
	if (!ctx.cr6.eq) goto loc_8212368C;
	// b 0x82123684
	goto loc_82123684;
loc_82123660:
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// divw r10,r30,r3
	ctx.r10.s32 = ctx.r30.s32 / ctx.r3.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// andc r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// twllei r3,0
	// subf. r7,r9,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// twlgei r6,-1
	// bne 0x8212368c
	if (!ctx.cr0.eq) goto loc_8212368C;
loc_82123684:
	// bl 0x821272d0
	ctx.lr = 0x82123688;
	sub_821272D0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8212368C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123698;
	sub_82120A18(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x821236A8;
	sub_821209C0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82123808
	if (!ctx.cr6.gt) goto loc_82123808;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
loc_821236CC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
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
	// bgt cr6,0x821237f8
	if (ctx.cr6.gt) goto loc_821237F8;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821237f8
	if (ctx.cr6.eq) goto loc_821237F8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123714;
	sub_82120A18(ctx, base);
	// lhz r10,122(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// subf. r29,r3,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x821237f8
	if (ctx.cr0.lt) goto loc_821237F8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82123744
	if (!ctx.cr6.eq) goto loc_82123744;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x82123734;
	sub_821209C0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82127378
	ctx.lr = 0x8212373C;
	sub_82127378(ctx, base);
	// fmadds f0,f31,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f28.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82123744:
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x821237f8
	if (ctx.cr6.gt) goto loc_821237F8;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123760;
	sub_82120A18(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123770;
	sub_82120A18(ctx, base);
	// subf r11,r3,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821237b0
	if (!ctx.cr6.gt) goto loc_821237B0;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f31,f8,f7,f29
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f29.f64));
loc_821237B0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x821237bc
	if (!ctx.cr6.lt) goto loc_821237BC;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_821237BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821237f0
	if (!ctx.cr6.eq) goto loc_821237F0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821209c0
	ctx.lr = 0x821237D8;
	sub_821209C0(ctx, base);
	// stfs f31,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x821237f4
	if (!ctx.cr6.gt) goto loc_821237F4;
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// b 0x821237f8
	goto loc_821237F8;
loc_821237F0:
	// stfs f31,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
loc_821237F4:
	// stfs f31,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
loc_821237F8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,144
	ctx.r28.s64 = ctx.r28.s64 + 144;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x821236cc
	if (!ctx.cr0.eq) goto loc_821236CC;
loc_82123808:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249974
	ctx.lr = 0x82123814;
	sub_82249974(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82123818"))) PPC_WEAK_FUNC(sub_82123818);
PPC_FUNC_IMPL(__imp__sub_82123818) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820804f8
	ctx.lr = 0x82123834;
	sub_820804F8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x820804f8
	ctx.lr = 0x8212383C;
	sub_820804F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
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
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82123880"))) PPC_WEAK_FUNC(sub_82123880);
PPC_FUNC_IMPL(__imp__sub_82123880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82123888;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,156(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lwz r8,152(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// lwz r26,96(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// bne cr6,0x821239d0
	if (!ctx.cr6.eq) goto loc_821239D0;
	// ld r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r26,48
	ctx.r9.s64 = ctx.r26.s64 + 48;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// ld r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// ld r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// lfs f13,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// ld r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 32);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// ld r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 40);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// ld r7,48(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 48);
	// std r7,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r7.u64);
	// ld r6,56(r26)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r26.u32 + 56);
	// std r6,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r6.u64);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// std r5,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r5.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r3.u64);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// std r11,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// ld r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// ld r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32);
	// std r8,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r8.u64);
	// ld r7,40(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 40);
	// std r7,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r7.u64);
	// ld r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 48);
	// std r6,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r6.u64);
	// ld r5,56(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 56);
	// std r5,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r5.u64);
	// ld r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r4,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r4.u64);
	// std r3,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r3.u64);
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
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// std r10,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r10.u64);
	// ld r8,136(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 136);
	// std r8,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r8.u64);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_821239D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,30764(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30764);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82123a1c
	if (!ctx.cr6.eq) goto loc_82123A1C;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82123a18
	if (!ctx.cr6.eq) goto loc_82123A18;
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82123a18
	if (!ctx.cr6.eq) goto loc_82123A18;
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x82123a1c
	if (ctx.cr6.eq) goto loc_82123A1C;
loc_82123A18:
	// stfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_82123A1C:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x82123a50
	if (!ctx.cr6.eq) goto loc_82123A50;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82123a4c
	if (!ctx.cr6.eq) goto loc_82123A4C;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x82123a4c
	if (!ctx.cr6.eq) goto loc_82123A4C;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x82123a50
	if (ctx.cr6.eq) goto loc_82123A50;
loc_82123A4C:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82123A50:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82123A60:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82123a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82123A60;
	// addi r24,r31,64
	ctx.r24.s64 = ctx.r31.s64 + 64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82096f18
	ctx.lr = 0x82123A7C;
	sub_82096F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82096f18
	ctx.lr = 0x82123A88;
	sub_82096F18(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r26,-8
	ctx.r11.s64 = ctx.r26.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82123A98:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82123a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82123A98;
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82123d34
	if (!ctx.cr6.gt) goto loc_82123D34;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_82123AD0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82123d24
	if (ctx.cr6.gt) goto loc_82123D24;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82123d24
	if (ctx.cr6.eq) goto loc_82123D24;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r9,r27,64
	ctx.r9.s64 = ctx.r27.s64 + 64;
	// ld r8,64(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r7,72(r27)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r27.u32 + 72);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82123B64;
	sub_8208EA90(ctx, base);
	// lfs f5,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82120a18
	ctx.lr = 0x82123BA4;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82123bc8
	if (ctx.cr6.eq) goto loc_82123BC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82123BB8;
	sub_8208EA90(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x8208ea90
	ctx.lr = 0x82123BC8;
	sub_8208EA90(ctx, base);
loc_82123BC8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123BD4;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82123c10
	if (ctx.cr6.eq) goto loc_82123C10;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// b 0x82123c3c
	goto loc_82123C3C;
loc_82123C10:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
loc_82123C3C:
	// stfs f6,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123C4C;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82123cac
	if (ctx.cr6.eq) goto loc_82123CAC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8208ea90
	ctx.lr = 0x82123C60;
	sub_8208EA90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123C6C;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82123cb4
	if (!ctx.cr6.eq) goto loc_82123CB4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123cb4
	if (ctx.cr6.eq) goto loc_82123CB4;
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x82123C98;
	sub_82289C50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x82123CA8;
	sub_82289C50(ctx, base);
	// b 0x82123cb4
	goto loc_82123CB4;
loc_82123CAC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x8208ea90
	ctx.lr = 0x82123CB4;
	sub_8208EA90(ctx, base);
loc_82123CB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123CC0;
	sub_82120A18(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// beq cr6,0x82123cf4
	if (ctx.cr6.eq) goto loc_82123CF4;
	// lfs f0,48(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,52(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,56(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// b 0x82123d10
	goto loc_82123D10;
loc_82123CF4:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
loc_82123D10:
	// fadds f6,f7,f8
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211fe60
	ctx.lr = 0x82123D24;
	sub_8211FE60(ctx, base);
loc_82123D24:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r25,r25,144
	ctx.r25.s64 = ctx.r25.s64 + 144;
	// addi r23,r23,64
	ctx.r23.s64 = ctx.r23.s64 + 64;
	// bne 0x82123ad0
	if (!ctx.cr0.eq) goto loc_82123AD0;
loc_82123D34:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123D40;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82123d5c
	if (!ctx.cr6.eq) goto loc_82123D5C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123D54;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82123dc0
	if (ctx.cr6.eq) goto loc_82123DC0;
loc_82123D5C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// addi r9,r10,128
	ctx.r9.s64 = ctx.r10.s64 + 128;
	// ld r8,128(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 128);
	// std r8,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r8.u64);
	// ld r7,136(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 136);
	// std r7,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r7.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// std r6,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r6.u64);
	// ld r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r5,8(r24)
	PPC_STORE_U64(ctx.r24.u32 + 8, ctx.r5.u64);
	// ld r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r4,16(r24)
	PPC_STORE_U64(ctx.r24.u32 + 16, ctx.r4.u64);
	// ld r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// std r3,24(r24)
	PPC_STORE_U64(ctx.r24.u32 + 24, ctx.r3.u64);
	// ld r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// std r10,32(r24)
	PPC_STORE_U64(ctx.r24.u32 + 32, ctx.r10.u64);
	// ld r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// std r9,40(r24)
	PPC_STORE_U64(ctx.r24.u32 + 40, ctx.r9.u64);
	// ld r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// std r8,48(r24)
	PPC_STORE_U64(ctx.r24.u32 + 48, ctx.r8.u64);
	// ld r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// std r7,56(r24)
	PPC_STORE_U64(ctx.r24.u32 + 56, ctx.r7.u64);
loc_82123DC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123DCC;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82123de8
	if (!ctx.cr6.eq) goto loc_82123DE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123DE0;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82123e58
	if (ctx.cr6.eq) goto loc_82123E58;
loc_82123DE8:
	// ld r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r10,r26,48
	ctx.r10.s64 = ctx.r26.s64 + 48;
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// ld r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// ld r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// ld r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// std r4,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r4.u64);
	// ld r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r26.u32 + 32);
	// std r3,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r3.u64);
	// ld r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 40);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// ld r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 48);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// ld r9,56(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 56);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r9,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r9.u64);
	// std r10,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r10.u64);
	// std r9,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r9.u64);
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f30,60(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82123E58:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82123E68"))) PPC_WEAK_FUNC(sub_82123E68);
PPC_FUNC_IMPL(__imp__sub_82123E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82123E70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82123E88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123E94;
	sub_82120A18(ctx, base);
	// cmplwi cr6,r3,100
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 100, ctx.xer);
	// bge cr6,0x82123eb0
	if (!ctx.cr6.lt) goto loc_82123EB0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ble cr6,0x82123e88
	if (!ctx.cr6.gt) goto loc_82123E88;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82123EB0:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82123EBC"))) PPC_WEAK_FUNC(sub_82123EBC);
PPC_FUNC_IMPL(__imp__sub_82123EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82123EC0"))) PPC_WEAK_FUNC(sub_82123EC0);
PPC_FUNC_IMPL(__imp__sub_82123EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82123EC8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r31,216(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 216);
	// bl 0x82120a18
	ctx.lr = 0x82123EEC;
	sub_82120A18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82123fbc
	if (!ctx.cr6.gt) goto loc_82123FBC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82123F00:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r9,122(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 122);
	// lhz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82123fb0
	if (ctx.cr6.gt) goto loc_82123FB0;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82123fb0
	if (ctx.cr6.eq) goto loc_82123FB0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x82123fa0
	if (ctx.cr6.eq) goto loc_82123FA0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82123fa0
	if (ctx.cr6.eq) goto loc_82123FA0;
	// lhz r11,122(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// twllei r29,0
	// divw r9,r11,r29
	ctx.r9.s32 = ctx.r11.s32 / ctx.r29.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r8,r9,r28
	ctx.r8.s32 = ctx.r9.s32 / ctx.r28.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r28
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r10,r29,r5
	ctx.r10.u64 = ctx.r29.u64 & ~ctx.r5.u64;
	// andc r9,r28,r6
	ctx.r9.u64 = ctx.r28.u64 & ~ctx.r6.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// twllei r28,0
	// twlgei r10,-1
	// twlgei r9,-1
	// bl 0x82120a18
	ctx.lr = 0x82123F94;
	sub_82120A18(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// stb r8,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r8.u8);
	// b 0x82123fb0
	goto loc_82123FB0;
loc_82123FA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82120a18
	ctx.lr = 0x82123FAC;
	sub_82120A18(ctx, base);
	// stb r3,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r3.u8);
loc_82123FB0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bne 0x82123f00
	if (!ctx.cr0.eq) goto loc_82123F00;
loc_82123FBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

