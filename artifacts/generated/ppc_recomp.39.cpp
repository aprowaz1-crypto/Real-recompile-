#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821D9508"))) PPC_WEAK_FUNC(sub_821D9508);
PPC_FUNC_IMPL(__imp__sub_821D9508) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D9540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D9560"))) PPC_WEAK_FUNC(sub_821D9560);
PPC_FUNC_IMPL(__imp__sub_821D9560) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D9598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D95B8"))) PPC_WEAK_FUNC(sub_821D95B8);
PPC_FUNC_IMPL(__imp__sub_821D95B8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D95F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
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

__attribute__((alias("__imp__sub_821D9644"))) PPC_WEAK_FUNC(sub_821D9644);
PPC_FUNC_IMPL(__imp__sub_821D9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9648"))) PPC_WEAK_FUNC(sub_821D9648);
PPC_FUNC_IMPL(__imp__sub_821D9648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821D9650;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d9698
	if (!ctx.cr6.eq) goto loc_821D9698;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d9698
	if (!ctx.cr6.eq) goto loc_821D9698;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d9698
	if (!ctx.cr6.eq) goto loc_821D9698;
loc_821D968C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821D9698:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d968c
	if (ctx.cr6.eq) goto loc_821D968C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82193af8
	ctx.lr = 0x821D96AC;
	sub_82193AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d968c
	if (ctx.cr6.eq) goto loc_821D968C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82193d98
	ctx.lr = 0x821D96C8;
	sub_82193D98(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821D96DC"))) PPC_WEAK_FUNC(sub_821D96DC);
PPC_FUNC_IMPL(__imp__sub_821D96DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D96E0"))) PPC_WEAK_FUNC(sub_821D96E0);
PPC_FUNC_IMPL(__imp__sub_821D96E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821D96E8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x821d97ec
	if (ctx.cr6.eq) goto loc_821D97EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d9774
	if (ctx.cr6.eq) goto loc_821D9774;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821d97e4
	if (!ctx.cr6.gt) goto loc_821D97E4;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821D9744:
	// lwz r3,344(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x821d9744
	if (!ctx.cr0.eq) goto loc_821D9744;
	// stw r29,340(r27)
	PPC_STORE_U32(ctx.r27.u32 + 340, ctx.r29.u32);
	// stw r28,336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 336, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821D9774:
	// bl 0x82183850
	ctx.lr = 0x821D9778;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x821d9790
	if (ctx.cr6.eq) goto loc_821D9790;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82183448
	ctx.lr = 0x821D978C;
	sub_82183448(ctx, base);
	// b 0x821d97a0
	goto loc_821D97A0;
loc_821D9790:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821D97A0;
	sub_821845A0(ctx, base);
loc_821D97A0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821d97e4
	if (!ctx.cr6.gt) goto loc_821D97E4;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821D97B4:
	// bl 0x82183850
	ctx.lr = 0x821D97B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x821d97d0
	if (ctx.cr6.eq) goto loc_821D97D0;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x821D97CC;
	sub_82183448(ctx, base);
	// b 0x821d97d8
	goto loc_821D97D8;
loc_821D97D0:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x821D97D8;
	sub_821845A0(ctx, base);
loc_821D97D8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x821d97b4
	if (!ctx.cr0.eq) goto loc_821D97B4;
loc_821D97E4:
	// stw r29,340(r27)
	PPC_STORE_U32(ctx.r27.u32 + 340, ctx.r29.u32);
	// stw r28,336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 336, ctx.r28.u32);
loc_821D97EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821D97F4"))) PPC_WEAK_FUNC(sub_821D97F4);
PPC_FUNC_IMPL(__imp__sub_821D97F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D97F8"))) PPC_WEAK_FUNC(sub_821D97F8);
PPC_FUNC_IMPL(__imp__sub_821D97F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821D9800;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// beq cr6,0x821d989c
	if (ctx.cr6.eq) goto loc_821D989C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d98f4
	if (ctx.cr6.eq) goto loc_821D98F4;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d9874
	if (!ctx.cr6.gt) goto loc_821D9874;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821D9838:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d9860
	if (ctx.cr6.eq) goto loc_821D9860;
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D9860:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d9838
	if (ctx.cr6.lt) goto loc_821D9838;
loc_821D9874:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D988C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821D989C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d98f4
	if (ctx.cr6.eq) goto loc_821D98F4;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d98e8
	if (!ctx.cr6.gt) goto loc_821D98E8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821D98B8:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d98d4
	if (ctx.cr6.eq) goto loc_821D98D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82183e40
	ctx.lr = 0x821D98D4;
	sub_82183E40(ctx, base);
loc_821D98D4:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d98b8
	if (ctx.cr6.lt) goto loc_821D98B8;
loc_821D98E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x82183e40
	ctx.lr = 0x821D98F4;
	sub_82183E40(ctx, base);
loc_821D98F4:
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821D9904"))) PPC_WEAK_FUNC(sub_821D9904);
PPC_FUNC_IMPL(__imp__sub_821D9904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9908"))) PPC_WEAK_FUNC(sub_821D9908);
PPC_FUNC_IMPL(__imp__sub_821D9908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r4,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r4.u32);
	// lwz r11,-1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D992C"))) PPC_WEAK_FUNC(sub_821D992C);
PPC_FUNC_IMPL(__imp__sub_821D992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9930"))) PPC_WEAK_FUNC(sub_821D9930);
PPC_FUNC_IMPL(__imp__sub_821D9930) {
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
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9a18
	if (ctx.cr6.eq) goto loc_821D9A18;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d9968
	if (ctx.cr6.eq) goto loc_821D9968;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x821d9a0c
	goto loc_821D9A0C;
loc_821D9968:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9988
	if (ctx.cr6.eq) goto loc_821D9988;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D9988:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d99ac
	if (ctx.cr6.eq) goto loc_821D99AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D99AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D99AC:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d99d0
	if (ctx.cr6.eq) goto loc_821D99D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D99D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D99D0:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d99f4
	if (ctx.cr6.eq) goto loc_821D99F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D99F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D99F4:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d9a18
	if (ctx.cr6.eq) goto loc_821D9A18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
loc_821D9A0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D9A18:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821D9A2C"))) PPC_WEAK_FUNC(sub_821D9A2C);
PPC_FUNC_IMPL(__imp__sub_821D9A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9A30"))) PPC_WEAK_FUNC(sub_821D9A30);
PPC_FUNC_IMPL(__imp__sub_821D9A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821D9A38;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r8,164
	ctx.r8.s64 = 164;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lfs f0,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f11,f0,f10
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f9,224(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,228(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,240(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,244(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,248(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f3,232(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f3,24(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f1.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821D9AD0;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x821D9ADC;
	sub_821D16C8(ctx, base);
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stw r7,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r7.u32);
	// stw r5,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821D9AF8"))) PPC_WEAK_FUNC(sub_821D9AF8);
PPC_FUNC_IMPL(__imp__sub_821D9AF8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D9B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D9B40"))) PPC_WEAK_FUNC(sub_821D9B40);
PPC_FUNC_IMPL(__imp__sub_821D9B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821D9B50"))) PPC_WEAK_FUNC(sub_821D9B50);
PPC_FUNC_IMPL(__imp__sub_821D9B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d9bb8
	if (!ctx.cr6.gt) goto loc_821D9BB8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,57344
	ctx.r8.u64 = ctx.r11.u64 | 57344;
loc_821D9B6C:
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821d9b9c
	if (!ctx.cr6.lt) goto loc_821D9B9C;
	// ld r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// std r7,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r7.u64);
	// ld r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// std r4,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r4.u64);
	// b 0x821d9ba4
	goto loc_821D9BA4;
loc_821D9B9C:
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
loc_821D9BA4:
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d9b6c
	if (ctx.cr6.lt) goto loc_821D9B6C;
loc_821D9BB8:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r10,r11,0,29,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D9BC8"))) PPC_WEAK_FUNC(sub_821D9BC8);
PPC_FUNC_IMPL(__imp__sub_821D9BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d9c00
	if (!ctx.cr6.gt) goto loc_821D9C00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D9BDC:
	// lwz r9,336(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,92(r7)
	PPC_STORE_U32(ctx.r7.u32 + 92, ctx.r8.u32);
	// lwz r6,340(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821d9bdc
	if (ctx.cr6.lt) goto loc_821D9BDC;
loc_821D9C00:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D9C10"))) PPC_WEAK_FUNC(sub_821D9C10);
PPC_FUNC_IMPL(__imp__sub_821D9C10) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D9C1C"))) PPC_WEAK_FUNC(sub_821D9C1C);
PPC_FUNC_IMPL(__imp__sub_821D9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9C20"))) PPC_WEAK_FUNC(sub_821D9C20);
PPC_FUNC_IMPL(__imp__sub_821D9C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x821d9c3c
	if (!ctx.cr6.lt) goto loc_821D9C3C;
loc_821D9C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D9C3C:
	// lbz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d9c34
	if (ctx.cr6.eq) goto loc_821D9C34;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821D9C50:
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821d9c50
	if (!ctx.cr6.eq) goto loc_821D9C50;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821d9c34
	if (!ctx.cr6.eq) goto loc_821D9C34;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d9ca4
	if (ctx.cr6.eq) goto loc_821D9CA4;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821D9C84:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821d9ca4
	if (!ctx.cr0.eq) goto loc_821D9CA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821d9c84
	if (!ctx.cr6.eq) goto loc_821D9C84;
loc_821D9CA4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821d9c34
	if (!ctx.cr6.eq) goto loc_821D9C34;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821D9CD4"))) PPC_WEAK_FUNC(sub_821D9CD4);
PPC_FUNC_IMPL(__imp__sub_821D9CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9CD8"))) PPC_WEAK_FUNC(sub_821D9CD8);
PPC_FUNC_IMPL(__imp__sub_821D9CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821D9CE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821D9CF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d9cf0
	if (!ctx.cr6.eq) goto loc_821D9CF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 64, ctx.xer);
	// bgt cr6,0x821d9d5c
	if (ctx.cr6.gt) goto loc_821D9D5C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82248a40
	ctx.lr = 0x821D9D20;
	sub_82248A40(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821D9D2C;
	sub_822AA648(ctx, base);
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821D9D5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821D9D68"))) PPC_WEAK_FUNC(sub_821D9D68);
PPC_FUNC_IMPL(__imp__sub_821D9D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821D9D70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821d9d98
	if (!ctx.cr6.lt) goto loc_821D9D98;
loc_821D9D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821D9D98:
	// lhz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 80);
	// addi r30,r29,80
	ctx.r30.s64 = ctx.r29.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9d8c
	if (ctx.cr6.eq) goto loc_821D9D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218c430
	ctx.lr = 0x821D9DB0;
	sub_8218C430(ctx, base);
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d9d8c
	if (!ctx.cr6.eq) goto loc_821D9D8C;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d9df8
	if (ctx.cr6.eq) goto loc_821D9DF8;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
loc_821D9DD8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821d9df8
	if (!ctx.cr0.eq) goto loc_821D9DF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821d9dd8
	if (!ctx.cr6.eq) goto loc_821D9DD8;
loc_821D9DF8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821d9d8c
	if (!ctx.cr6.eq) goto loc_821D9D8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821D9E2C"))) PPC_WEAK_FUNC(sub_821D9E2C);
PPC_FUNC_IMPL(__imp__sub_821D9E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9E30"))) PPC_WEAK_FUNC(sub_821D9E30);
PPC_FUNC_IMPL(__imp__sub_821D9E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821D9E38;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8218c430
	ctx.lr = 0x821D9E50;
	sub_8218C430(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bgt cr6,0x821d9ea8
	if (ctx.cr6.gt) goto loc_821D9EA8;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822aa648
	ctx.lr = 0x821D9E68;
	sub_822AA648(ctx, base);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82248a40
	ctx.lr = 0x821D9E78;
	sub_82248A40(ctx, base);
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821D9EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821D9EB4"))) PPC_WEAK_FUNC(sub_821D9EB4);
PPC_FUNC_IMPL(__imp__sub_821D9EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821D9EB8"))) PPC_WEAK_FUNC(sub_821D9EB8);
PPC_FUNC_IMPL(__imp__sub_821D9EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,32(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lwz r10,-1736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821d9f18
	if (!ctx.cr6.eq) goto loc_821D9F18;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r9,392(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// b 0x821d9f30
	goto loc_821D9F30;
loc_821D9F18:
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r10,392(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
loc_821D9F30:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// beq cr6,0x821d9f60
	if (ctx.cr6.eq) goto loc_821D9F60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,2148
	ctx.r10.s64 = ctx.r11.s64 + 2148;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// b 0x821d9fd8
	goto loc_821D9FD8;
loc_821D9F60:
	// lwz r9,-1736(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 + 2148;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x821d9f9c
	if (!ctx.cr6.eq) goto loc_821D9F9C;
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r10,-1736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// b 0x821d9fa4
	goto loc_821D9FA4;
loc_821D9F9C:
	// stfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
loc_821D9FA4:
	// lwz r10,-1736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821d9fd0
	if (!ctx.cr6.eq) goto loc_821D9FD0;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r11,-1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// b 0x821d9fe0
	goto loc_821D9FE0;
loc_821D9FD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
loc_821D9FD8:
	// stfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
loc_821D9FE0:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// stfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,40(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DA000"))) PPC_WEAK_FUNC(sub_821DA000);
PPC_FUNC_IMPL(__imp__sub_821DA000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// lfs f13,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821da104
	if (!ctx.cr6.eq) goto loc_821DA104;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f5,224(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lhz r9,18(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 18);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fnmsubs f9,f10,f8,f11
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f8.f64 - ctx.f11.f64)));
	// stfs f9,228(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lhz r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// fmadds f3,f4,f12,f2
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f3,240(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lhz r10,18(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 18);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f12,f0,f8,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f12,244(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f6,36(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lhz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmadds f2,f3,f9,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f2,40(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// b 0x821da1cc
	goto loc_821DA1CC;
loc_821DA104:
	// lhz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821da118
	if (!ctx.cr6.gt) goto loc_821DA118;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821DA118:
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// lfs f0,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmadds f2,f3,f12,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f2,224(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lhz r10,18(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 18);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f6,f12,f2
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f7,240(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fcfid f6,f5
	ctx.f6.f64 = double(ctx.f5.s64);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fnmsubs f3,f5,f11,f9
	ctx.f3.f64 = double(float(-(ctx.f5.f64 * ctx.f11.f64 - ctx.f9.f64)));
	// stfs f3,228(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lhz r8,18(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 18);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fmadds f11,f12,f11,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f11,244(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f4,f10,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f9,40(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
loc_821DA1CC:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f9,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f7,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f2,224(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// fmuls f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// stfs f1,228(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// fmuls f0,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// fmuls f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// stfs f13,244(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DA22C"))) PPC_WEAK_FUNC(sub_821DA22C);
PPC_FUNC_IMPL(__imp__sub_821DA22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA230"))) PPC_WEAK_FUNC(sub_821DA230);
PPC_FUNC_IMPL(__imp__sub_821DA230) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-16112
	ctx.r10.s64 = ctx.r11.s64 + -16112;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821d97f8
	ctx.lr = 0x821DA254;
	sub_821D97F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x821DA25C;
	sub_821B1DC0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DA270"))) PPC_WEAK_FUNC(sub_821DA270);
PPC_FUNC_IMPL(__imp__sub_821DA270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821DA28C"))) PPC_WEAK_FUNC(sub_821DA28C);
PPC_FUNC_IMPL(__imp__sub_821DA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA290"))) PPC_WEAK_FUNC(sub_821DA290);
PPC_FUNC_IMPL(__imp__sub_821DA290) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821da2c4
	if (ctx.cr6.eq) goto loc_821DA2C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821DA2C4;
	sub_82183E40(ctx, base);
loc_821DA2C4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821DA2E4"))) PPC_WEAK_FUNC(sub_821DA2E4);
PPC_FUNC_IMPL(__imp__sub_821DA2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA2E8"))) PPC_WEAK_FUNC(sub_821DA2E8);
PPC_FUNC_IMPL(__imp__sub_821DA2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821DA2F0;
	sub_82248778(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,376(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bne cr6,0x821da348
	if (!ctx.cr6.eq) goto loc_821DA348;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
loc_821DA348:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da560
	if (ctx.cr6.eq) goto loc_821DA560;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,-1736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821da384
	if (!ctx.cr6.eq) goto loc_821DA384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
loc_821DA384:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821da42c
	if (ctx.cr6.eq) goto loc_821DA42C;
	// addi r30,r31,420
	ctx.r30.s64 = ctx.r31.s64 + 420;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9c20
	ctx.lr = 0x821DA39C;
	sub_821D9C20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821da3c8
	if (!ctx.cr6.eq) goto loc_821DA3C8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r5,384(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// bl 0x82194b00
	ctx.lr = 0x821DA3B8;
	sub_82194B00(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9cd8
	ctx.lr = 0x821DA3C8;
	sub_821D9CD8(ctx, base);
loc_821DA3C8:
	// lwz r30,396(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821da3ec
	if (!ctx.cr6.gt) goto loc_821DA3EC;
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x8218c460
	ctx.lr = 0x821DA3DC;
	sub_8218C460(ctx, base);
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_821DA3EC:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821da4e0
	if (ctx.cr6.eq) goto loc_821DA4E0;
	// lwz r11,-1736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821da424
	if (!ctx.cr6.eq) goto loc_821DA424;
	// bl 0x8218c460
	ctx.lr = 0x821DA410;
	sub_8218C460(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r29,r10,r9
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// b 0x821da4e0
	goto loc_821DA4E0;
loc_821DA424:
	// bl 0x8218c460
	ctx.lr = 0x821DA428;
	sub_8218C460(ctx, base);
	// b 0x821da4d4
	goto loc_821DA4D4;
loc_821DA42C:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821da4e0
	if (ctx.cr6.eq) goto loc_821DA4E0;
	// addi r30,r31,420
	ctx.r30.s64 = ctx.r31.s64 + 420;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9d68
	ctx.lr = 0x821DA448;
	sub_821D9D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821da474
	if (!ctx.cr6.eq) goto loc_821DA474;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,388(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// bl 0x82193be0
	ctx.lr = 0x821DA464;
	sub_82193BE0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9e30
	ctx.lr = 0x821DA474;
	sub_821D9E30(ctx, base);
loc_821DA474:
	// lwz r30,396(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821da498
	if (!ctx.cr6.gt) goto loc_821DA498;
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x8218c430
	ctx.lr = 0x821DA488;
	sub_8218C430(ctx, base);
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_821DA498:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821da4e0
	if (ctx.cr6.eq) goto loc_821DA4E0;
	// lwz r11,-1736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1736);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821da4d0
	if (!ctx.cr6.eq) goto loc_821DA4D0;
	// bl 0x8218c430
	ctx.lr = 0x821DA4BC;
	sub_8218C430(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r29,r10,r9
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// b 0x821da4e0
	goto loc_821DA4E0;
loc_821DA4D0:
	// bl 0x8218c430
	ctx.lr = 0x821DA4D4;
	sub_8218C430(ctx, base);
loc_821DA4D4:
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_821DA4E0:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f8,f30
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmadds f1,f5,f31,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f4.f64));
	// fmuls f13,f2,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fmadds f0,f3,f31,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f1.f64));
	// beq cr6,0x821da560
	if (ctx.cr6.eq) goto loc_821DA560;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_821DA560:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821da56c
	if (ctx.cr6.eq) goto loc_821DA56C;
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_821DA56C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821da578
	if (ctx.cr6.eq) goto loc_821DA578;
	// stfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_821DA578:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821da5a4
	if (ctx.cr6.eq) goto loc_821DA5A4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// stw r8,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r8.u32);
	// stw r7,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r7.u32);
loc_821DA5A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_821DA5B8"))) PPC_WEAK_FUNC(sub_821DA5B8);
PPC_FUNC_IMPL(__imp__sub_821DA5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821DA5C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da618
	if (ctx.cr6.eq) goto loc_821DA618;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r29,r11,-5920
	ctx.r29.s64 = ctx.r11.s64 + -5920;
loc_821DA5E0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r30,r10,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x8218c400
	ctx.lr = 0x821DA5F4;
	sub_8218C400(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x821da60c
	if (ctx.cr6.lt) goto loc_821DA60C;
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// beq cr6,0x821da60c
	if (ctx.cr6.eq) goto loc_821DA60C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_821DA60C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821da5e0
	if (!ctx.cr6.eq) goto loc_821DA5E0;
loc_821DA618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821DA624"))) PPC_WEAK_FUNC(sub_821DA624);
PPC_FUNC_IMPL(__imp__sub_821DA624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA628"))) PPC_WEAK_FUNC(sub_821DA628);
PPC_FUNC_IMPL(__imp__sub_821DA628) {
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
	// addi r10,r11,-16112
	ctx.r10.s64 = ctx.r11.s64 + -16112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821d97f8
	ctx.lr = 0x821DA654;
	sub_821D97F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x821DA65C;
	sub_821B1DC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821da678
	if (ctx.cr6.eq) goto loc_821DA678;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821DA674;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DA678:
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

__attribute__((alias("__imp__sub_821DA690"))) PPC_WEAK_FUNC(sub_821DA690);
PPC_FUNC_IMPL(__imp__sub_821DA690) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
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
	ctx.lr = 0x821DA6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r4,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r4.u64);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r8,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r8.u64);
	// std r9,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r9.u64);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
	// std r10,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r10.u64);
	// bl 0x8209eda0
	ctx.lr = 0x821DA780;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x821DA78C;
	sub_821D16C8(ctx, base);
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_821DA7B8"))) PPC_WEAK_FUNC(sub_821DA7B8);
PPC_FUNC_IMPL(__imp__sub_821DA7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DA7C0;
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
	ctx.lr = 0x821DA7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// li r6,164
	ctx.r6.s64 = 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// lfs f0,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// ld r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r4,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r4.u64);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// std r11,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r11.u64);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r10.u64);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fadds f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r11.u64);
	// std r4,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r4.u64);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f0.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821DA88C;
	sub_8209EDA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d16c8
	ctx.lr = 0x821DA898;
	sub_821D16C8(ctx, base);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DA8B4"))) PPC_WEAK_FUNC(sub_821DA8B4);
PPC_FUNC_IMPL(__imp__sub_821DA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DA8B8"))) PPC_WEAK_FUNC(sub_821DA8B8);
PPC_FUNC_IMPL(__imp__sub_821DA8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821DA8C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x821b29d0
	ctx.lr = 0x821DA8D0;
	sub_821B29D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-16112
	ctx.r10.s64 = ctx.r11.s64 + -16112;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// addi r29,r31,420
	ctx.r29.s64 = ctx.r31.s64 + 420;
	// stw r27,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r7,r8,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r7,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r7.u32);
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r5,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r7.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r28,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r28.u32);
	// stw r28,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r28.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x821DA988;
	sub_822AA648(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x821DA994;
	sub_822AA648(ctx, base);
	// stw r28,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r28.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821DA9A8"))) PPC_WEAK_FUNC(sub_821DA9A8);
PPC_FUNC_IMPL(__imp__sub_821DA9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x821DA9B0;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-2384(r1)
	ea = -2384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821da9dc
	if (!ctx.cr6.eq) goto loc_821DA9DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_821DA9DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r26,r30,224
	ctx.r26.s64 = ctx.r30.s64 + 224;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DAA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 224);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f10,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r25,r30,240
	ctx.r25.s64 = ctx.r30.s64 + 240;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r28,232(r30)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r30.u32 + 232);
	// ld r27,240(r30)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r30.u32 + 240);
	// ld r24,248(r30)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r30.u32 + 248);
	// std r28,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r28.u64);
	// std r27,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r27.u64);
	// std r24,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r24.u64);
	// bctrl 
	ctx.lr = 0x821DAA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// sth r31,2256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2256, ctx.r31.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821daac0
	if (ctx.cr6.eq) goto loc_821DAAC0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r4,384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x8218c590
	ctx.lr = 0x821DAAB0;
	sub_8218C590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821daad0
	if (!ctx.cr6.eq) goto loc_821DAAD0;
	// addi r22,r1,208
	ctx.r22.s64 = ctx.r1.s64 + 208;
	// b 0x821daad0
	goto loc_821DAAD0;
loc_821DAAC0:
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821daad0
	if (ctx.cr6.eq) goto loc_821DAAD0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_821DAAD0:
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dab90
	if (ctx.cr6.eq) goto loc_821DAB90;
	// addi r24,r22,-2
	ctx.r24.s64 = ctx.r22.s64 + -2;
loc_821DAAE0:
	// lhzu r28,2(r24)
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x821dab80
	if (ctx.cr6.lt) goto loc_821DAB80;
	// cmpwi cr6,r28,127
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 127, ctx.xer);
	// beq cr6,0x821dab80
	if (ctx.cr6.eq) goto loc_821DAB80;
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dab18
	if (!ctx.cr6.eq) goto loc_821DAB18;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dab18
	if (!ctx.cr6.eq) goto loc_821DAB18;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dab54
	if (ctx.cr6.eq) goto loc_821DAB54;
loc_821DAB18:
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dab54
	if (ctx.cr6.eq) goto loc_821DAB54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82193af8
	ctx.lr = 0x821DAB2C;
	sub_82193AF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dab54
	if (ctx.cr6.eq) goto loc_821DAB54;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82193d98
	ctx.lr = 0x821DAB48;
	sub_82193D98(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// b 0x821dab78
	goto loc_821DAB78;
loc_821DAB54:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,42
	ctx.r28.s64 = 42;
	// bl 0x821d9648
	ctx.lr = 0x821DAB70;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dab80
	if (ctx.cr6.eq) goto loc_821DAB80;
loc_821DAB78:
	// mr r20,r28
	ctx.r20.u64 = ctx.r28.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_821DAB80:
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821daae0
	if (!ctx.cr6.eq) goto loc_821DAAE0;
loc_821DAB90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821dac24
	if (!ctx.cr6.eq) goto loc_821DAC24;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dac24
	if (!ctx.cr6.eq) goto loc_821DAC24;
	// lis r11,682
	ctx.r11.s64 = 44695552;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// addi r28,r23,1
	ctx.r28.s64 = ctx.r23.s64 + 1;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821dabd0
	if (ctx.cr6.gt) goto loc_821DABD0;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x821dabd4
	goto loc_821DABD4;
loc_821DABD0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821DABD4:
	// bl 0x82080d68
	ctx.lr = 0x821DABD8;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dac1c
	if (ctx.cr6.eq) goto loc_821DAC1C;
	// addic. r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821dac14
	if (ctx.cr0.lt) goto loc_821DAC14;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DABF4:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r7.u32);
	// stwu r31,96(r11)
	ea = 96 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821dabf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DABF4;
loc_821DAC14:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821dac20
	goto loc_821DAC20;
loc_821DAC1C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821DAC20:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_821DAC24:
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dae20
	if (ctx.cr6.eq) goto loc_821DAE20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r22,-2
	ctx.r24.s64 = ctx.r22.s64 + -2;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_821DAC3C:
	// lhzu r27,2(r24)
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x821dae10
	if (ctx.cr6.lt) goto loc_821DAE10;
	// cmpwi cr6,r27,127
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 127, ctx.xer);
	// beq cr6,0x821dae10
	if (ctx.cr6.eq) goto loc_821DAE10;
	// lwz r11,376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dac74
	if (!ctx.cr6.eq) goto loc_821DAC74;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dac74
	if (!ctx.cr6.eq) goto loc_821DAC74;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dacb0
	if (ctx.cr6.eq) goto loc_821DACB0;
loc_821DAC74:
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dacb0
	if (ctx.cr6.eq) goto loc_821DACB0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82193af8
	ctx.lr = 0x821DAC88;
	sub_82193AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dacb0
	if (ctx.cr6.eq) goto loc_821DACB0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82193d98
	ctx.lr = 0x821DACA4;
	sub_82193D98(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// b 0x821dacd8
	goto loc_821DACD8;
loc_821DACB0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r27,42
	ctx.r27.s64 = 42;
	// bl 0x821d9648
	ctx.lr = 0x821DACCC;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dae10
	if (ctx.cr6.eq) goto loc_821DAE10;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_821DACD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DACF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r9,r21,32
	ctx.r9.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f12,64(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f10,68(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 68, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f9,72(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 72, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f8,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f8,76(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f7,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f6,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f5,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f4,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f3,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f2,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stfs f3,32(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f2,36(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f1,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f0,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f11,56(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r28,360(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// bl 0x821938f8
	ctx.lr = 0x821DADE8;
	sub_821938F8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_821DAE10:
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dac3c
	if (!ctx.cr6.eq) goto loc_821DAC3C;
loc_821DAE20:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r9.u64);
	// std r8,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r8.u64);
	// std r7,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r7.u64);
	// std r6,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r6.u64);
	// addi r1,r1,2384
	ctx.r1.s64 = ctx.r1.s64 + 2384;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_821DAE58"))) PPC_WEAK_FUNC(sub_821DAE58);
PPC_FUNC_IMPL(__imp__sub_821DAE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x821DAE60;
	sub_82248750(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249928
	ctx.lr = 0x821DAE68;
	sub_82249928(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,376(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dae90
	if (ctx.cr6.eq) goto loc_821DAE90;
	// bl 0x821da5b8
	ctx.lr = 0x821DAE88;
	sub_821DA5B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821daed0
	goto loc_821DAED0;
loc_821DAE90:
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821daed0
	if (ctx.cr6.eq) goto loc_821DAED0;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821daed0
	if (ctx.cr6.eq) goto loc_821DAED0;
loc_821DAEAC:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x821daec4
	if (ctx.cr6.lt) goto loc_821DAEC4;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// beq cr6,0x821daec4
	if (ctx.cr6.eq) goto loc_821DAEC4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821DAEC4:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821daeac
	if (!ctx.cr6.eq) goto loc_821DAEAC;
loc_821DAED0:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821db4a0
	if (ctx.cr6.eq) goto loc_821DB4A0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821db4a0
	if (ctx.cr6.eq) goto loc_821DB4A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r23,108(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r28,r31,224
	ctx.r28.s64 = ctx.r31.s64 + 224;
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DAF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// ld r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// ld r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// addi r27,r31,240
	ctx.r27.s64 = ctx.r31.s64 + 240;
	// lwz r7,180(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lfs f30,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f30.f64 = double(temp.f32);
	// lwz r19,376(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r17,380(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bctrl 
	ctx.lr = 0x821DAF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821db460
	if (!ctx.cr6.gt) goto loc_821DB460;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r14,r11,-5920
	ctx.r14.s64 = ctx.r11.s64 + -5920;
	// lfs f28,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,8308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8308);
	ctx.f29.f64 = double(temp.f32);
	// ori r20,r7,57344
	ctx.r20.u64 = ctx.r7.u64 | 57344;
	// lfs f31,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
	// li r15,255
	ctx.r15.s64 = 255;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r14.u32);
loc_821DAFC0:
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// lwzx r30,r11,r16
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// beq cr6,0x821dafdc
	if (ctx.cr6.eq) goto loc_821DAFDC;
	// lhz r24,0(r17)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r17.u32 + 0);
	// addi r17,r17,2
	ctx.r17.s64 = ctx.r17.s64 + 2;
	// b 0x821db000
	goto loc_821DB000;
loc_821DAFDC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821db000
	if (ctx.cr6.eq) goto loc_821DB000;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r29,r10,r14
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// bl 0x8218c400
	ctx.lr = 0x821DAFF8;
	sub_8218C400(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r19,r19,r29
	ctx.r19.u64 = ctx.r19.u64 + ctx.r29.u64;
loc_821DB000:
	// cmpwi cr6,r24,32
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 32, ctx.xer);
	// blt cr6,0x821db44c
	if (ctx.cr6.lt) goto loc_821DB44C;
	// cmpwi cr6,r24,127
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 127, ctx.xer);
	// beq cr6,0x821db44c
	if (ctx.cr6.eq) goto loc_821DB44C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9648
	ctx.lr = 0x821DB028;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821db058
	if (!ctx.cr6.eq) goto loc_821DB058;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x821d9648
	ctx.lr = 0x821DB050;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821db44c
	if (ctx.cr6.eq) goto loc_821DB44C;
loc_821DB058:
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// bne cr6,0x821db140
	if (!ctx.cr6.eq) goto loc_821DB140;
	// add r8,r22,r10
	ctx.r8.u64 = ctx.r22.u64 + ctx.r10.u64;
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// extsw r9,r21
	ctx.r9.s64 = ctx.r21.s32;
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lfd f11,176(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lfd f9,184(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fnmsubs f2,f5,f10,f7
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f10.f64 - ctx.f7.f64)));
	// stfs f2,0(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lhz r6,18(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f1,136(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// fmuls f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmsubs f7,f8,f29,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 - ctx.f30.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f6,228(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lhz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r3.u64);
	// lfd f5,216(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// fmadds f1,f2,f10,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f3,f9,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f8,244(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// b 0x821db1f4
	goto loc_821DB1F4;
loc_821DB140:
	// add r9,r22,r10
	ctx.r9.u64 = ctx.r22.u64 + ctx.r10.u64;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f8,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// extsw r8,r21
	ctx.r8.s64 = ctx.r21.s32;
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f6,224(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fnmsubs f12,f2,f0,f3
	ctx.f12.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f3.f64)));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lhz r6,18(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f1,120(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmsubs f8,f9,f31,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f7,228(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lhz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// fmadds f3,f4,f0,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,0(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lhz r11,18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f2,144(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fmadds f9,f10,f11,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f9,244(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
loc_821DB1F4:
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821db24c
	if (!ctx.cr6.eq) goto loc_821DB24C;
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f9,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f6,228(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f2,244(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
loc_821DB24C:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821db2a8
	if (!ctx.cr6.eq) goto loc_821DB2A8;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f10,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f6,228(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f2,244(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
loc_821DB2A8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// bne cr6,0x821db2e8
	if (!ctx.cr6.eq) goto loc_821DB2E8;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x821db308
	goto loc_821DB308;
loc_821DB2E8:
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_821DB308:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r24.u32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82112618
	ctx.lr = 0x821DB328;
	sub_82112618(ctx, base);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821db364
	if (ctx.cr6.eq) goto loc_821DB364;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rotlwi r14,r11,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821938f8
	ctx.lr = 0x821DB344;
	sub_821938F8(ctx, base);
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r14,104(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r7.u32);
loc_821DB364:
	// clrldi r11,r26,32
	ctx.r11.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r24,r20
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r20.s32, ctx.xer);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f10,208(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// stfs f13,72(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f28,12(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f5,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,16(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f5,20(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f6,24(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f28,28(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f3,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,32(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f3,36(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f28,44(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f1,52(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f6,56(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f28,60(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// bge cr6,0x821db41c
	if (!ctx.cr6.lt) goto loc_821DB41C;
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// std r10,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r10.u64);
	// ld r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r8,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r8.u64);
	// b 0x821db430
	goto loc_821DB430;
loc_821DB41C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r15,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r15.u32);
	// stw r15,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r15.u32);
	// stw r15,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r15.u32);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
loc_821DB430:
	// lwz r11,-1736(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -1736);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bne cr6,0x821db448
	if (!ctx.cr6.eq) goto loc_821DB448;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_821DB448:
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_821DB44C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x821dafc0
	if (!ctx.cr0.eq) goto loc_821DAFC0;
loc_821DB460:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r8.u64);
	// std r7,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r7.u64);
	// std r6,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r6.u64);
	// std r5,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r5.u64);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249974
	ctx.lr = 0x821DB49C;
	sub_82249974(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_821DB4A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DB4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82249974
	ctx.lr = 0x821DB4C0;
	sub_82249974(ctx, base);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DB4C4"))) PPC_WEAK_FUNC(sub_821DB4C4);
PPC_FUNC_IMPL(__imp__sub_821DB4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB4C8"))) PPC_WEAK_FUNC(sub_821DB4C8);
PPC_FUNC_IMPL(__imp__sub_821DB4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821DB4D0;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,356
	ctx.r3.s64 = ctx.r3.s64 + 356;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82112618
	ctx.lr = 0x821DB4F8;
	sub_82112618(ctx, base);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821db524
	if (ctx.cr6.eq) goto loc_821DB524;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821938f8
	ctx.lr = 0x821DB514;
	sub_821938F8(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// std r9,364(r31)
	PPC_STORE_U64(ctx.r31.u32 + 364, ctx.r9.u64);
loc_821DB524:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,364(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 364);
	// bl 0x821d25f8
	ctx.lr = 0x821DB530;
	sub_821D25F8(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f9,192(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f10,196(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f11,200(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// beq cr6,0x821db8ec
	if (ctx.cr6.eq) goto loc_821DB8EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821db674
	if (ctx.cr6.eq) goto loc_821DB674;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821db5a0
	if (!ctx.cr6.eq) goto loc_821DB5A0;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x821db5bc
	goto loc_821DB5BC;
loc_821DB5A0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821db5bc
	if (!ctx.cr6.eq) goto loc_821DB5BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_821DB5BC:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f11,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f7,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f3,148(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stfs f2,164(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bctrl 
	ctx.lr = 0x821DB650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// b 0x821db6d4
	goto loc_821DB6D4;
loc_821DB674:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfs f12,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_821DB6D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// addi r11,r11,8060
	ctx.r11.s64 = ctx.r11.s64 + 8060;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x821db6f0
	if (!ctx.cr6.gt) goto loc_821DB6F0;
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// b 0x821db6f4
	goto loc_821DB6F4;
loc_821DB6F0:
	// fsubs f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_821DB6F4:
	// fctiwz f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// ble cr6,0x821db728
	if (!ctx.cr6.gt) goto loc_821DB728;
	// fadds f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// b 0x821db72c
	goto loc_821DB72C;
loc_821DB728:
	// fsubs f10,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
loc_821DB72C:
	// fctiwz f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// ble cr6,0x821db760
	if (!ctx.cr6.gt) goto loc_821DB760;
	// fadds f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// b 0x821db764
	goto loc_821DB764;
loc_821DB760:
	// fsubs f10,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
loc_821DB764:
	// fctiwz f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ble cr6,0x821db798
	if (!ctx.cr6.gt) goto loc_821DB798;
	// fadds f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// b 0x821db79c
	goto loc_821DB79C;
loc_821DB798:
	// fsubs f10,f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
loc_821DB79C:
	// fctiwz f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ble cr6,0x821db7d0
	if (!ctx.cr6.gt) goto loc_821DB7D0;
	// fadds f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// b 0x821db7d4
	goto loc_821DB7D4;
loc_821DB7D0:
	// fsubs f10,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
loc_821DB7D4:
	// fctiwz f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ble cr6,0x821db808
	if (!ctx.cr6.gt) goto loc_821DB808;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x821db80c
	goto loc_821DB80C;
loc_821DB808:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_821DB80C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ble cr6,0x821db840
	if (!ctx.cr6.gt) goto loc_821DB840;
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// b 0x821db844
	goto loc_821DB844;
loc_821DB840:
	// fsubs f13,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
loc_821DB844:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ble cr6,0x821db878
	if (!ctx.cr6.gt) goto loc_821DB878;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x821db87c
	goto loc_821DB87C;
loc_821DB878:
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
loc_821DB87C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,57344
	ctx.r10.u64 = ctx.r11.u64 | 57344;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// blt cr6,0x821db8dc
	if (ctx.cr6.lt) goto loc_821DB8DC;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821db8dc
	if (!ctx.cr6.eq) goto loc_821DB8DC;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x821db8e0
	goto loc_821DB8E0;
loc_821DB8DC:
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
loc_821DB8E0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b24f0
	ctx.lr = 0x821DB8EC;
	sub_821B24F0(ctx, base);
loc_821DB8EC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821DB8F8"))) PPC_WEAK_FUNC(sub_821DB8F8);
PPC_FUNC_IMPL(__imp__sub_821DB8F8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15908
	ctx.r9.s64 = ctx.r10.s64 + -15908;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x820804f8
	ctx.lr = 0x821DB930;
	sub_820804F8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820804f8
	ctx.lr = 0x821DB938;
	sub_820804F8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DB958"))) PPC_WEAK_FUNC(sub_821DB958);
PPC_FUNC_IMPL(__imp__sub_821DB958) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r10,-15908
	ctx.r9.s64 = ctx.r10.s64 + -15908;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821db9dc
	if (ctx.cr6.eq) goto loc_821DB9DC;
loc_821DB974:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821db9cc
	if (ctx.cr6.eq) goto loc_821DB9CC;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821db99c
	if (!ctx.cr6.eq) goto loc_821DB99C;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// b 0x821db9c8
	goto loc_821DB9C8;
loc_821DB99C:
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821db9c0
	if (ctx.cr6.eq) goto loc_821DB9C0;
loc_821DB9AC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821db9ac
	if (!ctx.cr6.eq) goto loc_821DB9AC;
loc_821DB9C0:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_821DB9C8:
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
loc_821DB9CC:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821db974
	if (!ctx.cr6.eq) goto loc_821DB974;
loc_821DB9DC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dba38
	if (ctx.cr6.eq) goto loc_821DBA38;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821dba08
	if (!ctx.cr6.eq) goto loc_821DBA08;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
loc_821DBA08:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821dba2c
	if (ctx.cr6.eq) goto loc_821DBA2C;
loc_821DBA18:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821dba18
	if (!ctx.cr6.eq) goto loc_821DBA18;
loc_821DBA2C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
loc_821DBA38:
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBA40"))) PPC_WEAK_FUNC(sub_821DBA40);
PPC_FUNC_IMPL(__imp__sub_821DBA40) {
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
	// beq cr6,0x821dba94
	if (ctx.cr6.eq) goto loc_821DBA94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lwz r5,164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x821DBA90;
	sub_82289C50(ctx, base);
	// b 0x821dbae4
	goto loc_821DBAE4;
loc_821DBA94:
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// ld r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r6,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r6.u64);
	// ld r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r5,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r5.u64);
	// ld r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r4,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r4.u64);
	// ld r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// std r3,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r3.u64);
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// std r10,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r10.u64);
	// ld r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// std r9,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r9.u64);
loc_821DBAE4:
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

__attribute__((alias("__imp__sub_821DBAFC"))) PPC_WEAK_FUNC(sub_821DBAFC);
PPC_FUNC_IMPL(__imp__sub_821DBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBB00"))) PPC_WEAK_FUNC(sub_821DBB00);
PPC_FUNC_IMPL(__imp__sub_821DBB00) {
	PPC_FUNC_PROLOGUE();
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// ld r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ld r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// ld r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// std r5,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r5.u64);
	// ld r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// std r11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// ld r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// std r10,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r10.u64);
	// ld r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// std r9,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r9.u64);
	// ld r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// std r8,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBB50"))) PPC_WEAK_FUNC(sub_821DBB50);
PPC_FUNC_IMPL(__imp__sub_821DBB50) {
	PPC_FUNC_PROLOGUE();
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r5,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r5.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r10.u64);
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r9,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBB9C"))) PPC_WEAK_FUNC(sub_821DBB9C);
PPC_FUNC_IMPL(__imp__sub_821DBB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBBA0"))) PPC_WEAK_FUNC(sub_821DBBA0);
PPC_FUNC_IMPL(__imp__sub_821DBBA0) {
	PPC_FUNC_PROLOGUE();
	// ld r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// ld r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ld r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 112);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// ld r5,120(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 120);
	// std r5,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r5.u64);
	// ld r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 128);
	// std r11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// ld r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 136);
	// std r10,40(r4)
	PPC_STORE_U64(ctx.r4.u32 + 40, ctx.r10.u64);
	// ld r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 144);
	// std r9,48(r4)
	PPC_STORE_U64(ctx.r4.u32 + 48, ctx.r9.u64);
	// ld r8,152(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// std r8,56(r4)
	PPC_STORE_U64(ctx.r4.u32 + 56, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBBF0"))) PPC_WEAK_FUNC(sub_821DBBF0);
PPC_FUNC_IMPL(__imp__sub_821DBBF0) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dbc2c
	if (ctx.cr6.eq) goto loc_821DBC2C;
loc_821DBC0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821dbc0c
	if (!ctx.cr6.eq) goto loc_821DBC0C;
loc_821DBC2C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DBC40"))) PPC_WEAK_FUNC(sub_821DBC40);
PPC_FUNC_IMPL(__imp__sub_821DBC40) {
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
	// bl 0x821db958
	ctx.lr = 0x821DBC58;
	sub_821DB958(ctx, base);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbc70
	if (ctx.cr6.eq) goto loc_821DBC70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821DBC6C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DBC70:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DBC84"))) PPC_WEAK_FUNC(sub_821DBC84);
PPC_FUNC_IMPL(__imp__sub_821DBC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBC88"))) PPC_WEAK_FUNC(sub_821DBC88);
PPC_FUNC_IMPL(__imp__sub_821DBC88) {
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
	// bl 0x821da8b8
	ctx.lr = 0x821DBCA0;
	sub_821DA8B8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-15848
	ctx.r10.s64 = ctx.r11.s64 + -15848;
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

__attribute__((alias("__imp__sub_821DBCC4"))) PPC_WEAK_FUNC(sub_821DBCC4);
PPC_FUNC_IMPL(__imp__sub_821DBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBCC8"))) PPC_WEAK_FUNC(sub_821DBCC8);
PPC_FUNC_IMPL(__imp__sub_821DBCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-15848
	ctx.r10.s64 = ctx.r11.s64 + -15848;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821da230
	sub_821DA230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DBCD8"))) PPC_WEAK_FUNC(sub_821DBCD8);
PPC_FUNC_IMPL(__imp__sub_821DBCD8) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dbd9c
	if (ctx.cr6.eq) goto loc_821DBD9C;
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbd2c
	if (ctx.cr6.eq) goto loc_821DBD2C;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821dbd44
	if (!ctx.cr6.eq) goto loc_821DBD44;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,384(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// b 0x821dbd84
	goto loc_821DBD84;
loc_821DBD2C:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbd9c
	if (ctx.cr6.eq) goto loc_821DBD9C;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dbd78
	if (ctx.cr6.eq) goto loc_821DBD78;
loc_821DBD44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBD58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821DBD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821dbd9c
	goto loc_821DBD9C;
loc_821DBD78:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,388(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
loc_821DBD84:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821DBD9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DBD9C:
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

__attribute__((alias("__imp__sub_821DBDB4"))) PPC_WEAK_FUNC(sub_821DBDB4);
PPC_FUNC_IMPL(__imp__sub_821DBDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBDB8"))) PPC_WEAK_FUNC(sub_821DBDB8);
PPC_FUNC_IMPL(__imp__sub_821DBDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x821DBDC0;
	sub_82248770(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dbfa4
	if (ctx.cr6.eq) goto loc_821DBFA4;
	// lfs f0,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f13,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r26,r4,224
	ctx.r26.s64 = ctx.r4.s64 + 224;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// addi r25,r31,240
	ctx.r25.s64 = ctx.r31.s64 + 240;
	// lwz r10,80(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dbf7c
	if (ctx.cr6.eq) goto loc_821DBF7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBE98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dbf68
	if (ctx.cr6.eq) goto loc_821DBF68;
	// addi r29,r27,-2
	ctx.r29.s64 = ctx.r27.s64 + -2;
loc_821DBEA8:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x821dbf68
	if (ctx.cr6.gt) goto loc_821DBF68;
	// lhzu r30,2(r29)
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x821dbf58
	if (ctx.cr6.lt) goto loc_821DBF58;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 127, ctx.xer);
	// beq cr6,0x821dbf58
	if (ctx.cr6.eq) goto loc_821DBF58;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9648
	ctx.lr = 0x821DBEE0;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dbf0c
	if (!ctx.cr6.eq) goto loc_821DBF0C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,42
	ctx.r30.s64 = 42;
	// bl 0x821d9648
	ctx.lr = 0x821DBF04;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dbf58
	if (ctx.cr6.eq) goto loc_821DBF58;
loc_821DBF0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DBF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DBF58:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dbea8
	if (!ctx.cr6.eq) goto loc_821DBEA8;
loc_821DBF68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DBF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DBF7C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r9.u64);
	// std r8,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r8.u64);
	// std r7,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r7.u64);
	// std r6,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r6.u64);
loc_821DBFA4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_821DBFAC"))) PPC_WEAK_FUNC(sub_821DBFAC);
PPC_FUNC_IMPL(__imp__sub_821DBFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBFB0"))) PPC_WEAK_FUNC(sub_821DBFB0);
PPC_FUNC_IMPL(__imp__sub_821DBFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,376(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dbfec
	if (ctx.cr6.eq) goto loc_821DBFEC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,384(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821DBFEC:
	// lwz r4,380(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,388(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821DC010"))) PPC_WEAK_FUNC(sub_821DC010);
PPC_FUNC_IMPL(__imp__sub_821DC010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC014"))) PPC_WEAK_FUNC(sub_821DC014);
PPC_FUNC_IMPL(__imp__sub_821DC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC018"))) PPC_WEAK_FUNC(sub_821DC018);
PPC_FUNC_IMPL(__imp__sub_821DC018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821DC020;
	sub_8224877C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc1ac
	if (ctx.cr6.eq) goto loc_821DC1AC;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x821DC094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc1ac
	if (ctx.cr6.eq) goto loc_821DC1AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC0C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dc198
	if (ctx.cr6.eq) goto loc_821DC198;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
loc_821DC0D8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x821dc198
	if (ctx.cr6.gt) goto loc_821DC198;
	// lhzu r30,2(r28)
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x821dc188
	if (ctx.cr6.lt) goto loc_821DC188;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 127, ctx.xer);
	// beq cr6,0x821dc188
	if (ctx.cr6.eq) goto loc_821DC188;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9648
	ctx.lr = 0x821DC110;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dc13c
	if (!ctx.cr6.eq) goto loc_821DC13C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,42
	ctx.r30.s64 = 42;
	// bl 0x821d9648
	ctx.lr = 0x821DC134;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc188
	if (ctx.cr6.eq) goto loc_821DC188;
loc_821DC13C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DC188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC188:
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dc0d8
	if (!ctx.cr6.eq) goto loc_821DC0D8;
loc_821DC198:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC1AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC1AC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_821DC1B4"))) PPC_WEAK_FUNC(sub_821DC1B4);
PPC_FUNC_IMPL(__imp__sub_821DC1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC1B8"))) PPC_WEAK_FUNC(sub_821DC1B8);
PPC_FUNC_IMPL(__imp__sub_821DC1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821DC1C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc2cc
	if (ctx.cr6.eq) goto loc_821DC2CC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dc2cc
	if (ctx.cr6.eq) goto loc_821DC2CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC1F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc2cc
	if (ctx.cr6.eq) goto loc_821DC2CC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821dc274
	if (!ctx.cr6.lt) goto loc_821DC274;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dc2b8
	if (!ctx.cr6.gt) goto loc_821DC2B8;
	// addi r28,r30,192
	ctx.r28.s64 = ctx.r30.s64 + 192;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821DC21C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// bl 0x821d25f8
	ctx.lr = 0x821DC230;
	sub_821D25F8(ctx, base);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r8,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r8.u64);
	// lwz r7,84(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821DC25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821dc21c
	if (ctx.cr6.lt) goto loc_821DC21C;
	// b 0x821dc2b8
	goto loc_821DC2B8;
loc_821DC274:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// bl 0x821d25f8
	ctx.lr = 0x821DC28C;
	sub_821D25F8(ctx, base);
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,192(r30)
	PPC_STORE_U64(ctx.r30.u32 + 192, ctx.r9.u64);
	// ld r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// std r7,200(r30)
	PPC_STORE_U64(ctx.r30.u32 + 200, ctx.r7.u64);
	// lwz r6,84(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821DC2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC2B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC2CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821DC2D4"))) PPC_WEAK_FUNC(sub_821DC2D4);
PPC_FUNC_IMPL(__imp__sub_821DC2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC2D8"))) PPC_WEAK_FUNC(sub_821DC2D8);
PPC_FUNC_IMPL(__imp__sub_821DC2D8) {
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
	// addi r10,r11,-15848
	ctx.r10.s64 = ctx.r11.s64 + -15848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821da230
	ctx.lr = 0x821DC304;
	sub_821DA230(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dc320
	if (ctx.cr6.eq) goto loc_821DC320;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821DC31C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DC320:
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

__attribute__((alias("__imp__sub_821DC338"))) PPC_WEAK_FUNC(sub_821DC338);
PPC_FUNC_IMPL(__imp__sub_821DC338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x821DC340;
	sub_82248768(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249914
	ctx.lr = 0x821DC348;
	sub_82249914(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc664
	if (ctx.cr6.eq) goto loc_821DC664;
	// lfs f0,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f13,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r23,r4,224
	ctx.r23.s64 = ctx.r4.s64 + 224;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// li r25,0
	ctx.r25.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DC3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// addi r22,r31,240
	ctx.r22.s64 = ctx.r31.s64 + 240;
	// lwz r9,80(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DC3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc63c
	if (ctx.cr6.eq) goto loc_821DC63C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,-1736(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1736);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lfs f24,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f23.f64 = double(temp.f32);
	// bne cr6,0x821dc454
	if (!ctx.cr6.eq) goto loc_821DC454;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f24,f0
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f23,f23,f0
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
loc_821DC454:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmr f27,f12
	ctx.f27.f64 = ctx.f12.f64;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// fmr f30,f12
	ctx.f30.f64 = ctx.f12.f64;
	// beq cr6,0x821dc628
	if (ctx.cr6.eq) goto loc_821DC628;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r24,r11,-5920
	ctx.r24.s64 = ctx.r11.s64 + -5920;
	// lfs f25,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f25.f64 = double(temp.f32);
loc_821DC494:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r29,r10,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x821dc628
	if (ctx.cr6.gt) goto loc_821DC628;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821dc628
	if (ctx.cr6.eq) goto loc_821DC628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218c400
	ctx.lr = 0x821DC4BC;
	sub_8218C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x821dc61c
	if (ctx.cr6.lt) goto loc_821DC61C;
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// beq cr6,0x821dc61c
	if (ctx.cr6.eq) goto loc_821DC61C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9648
	ctx.lr = 0x821DC4EC;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dc518
	if (!ctx.cr6.eq) goto loc_821DC518;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,42
	ctx.r30.s64 = 42;
	// bl 0x821d9648
	ctx.lr = 0x821DC510;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc61c
	if (ctx.cr6.eq) goto loc_821DC61C;
loc_821DC518:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d93d8
	ctx.lr = 0x821DC524;
	sub_821D93D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc53c
	if (ctx.cr6.eq) goto loc_821DC53C;
	// stfs f24,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f23,164(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// b 0x821dc590
	goto loc_821DC590;
loc_821DC53C:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// beq cr6,0x821dc588
	if (ctx.cr6.eq) goto loc_821DC588;
	// cmpwi cr6,r30,45
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 45, ctx.xer);
	// beq cr6,0x821dc588
	if (ctx.cr6.eq) goto loc_821DC588;
	// cmpwi cr6,r30,47
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 47, ctx.xer);
	// beq cr6,0x821dc588
	if (ctx.cr6.eq) goto loc_821DC588;
	// cmpwi cr6,r30,46
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 46, ctx.xer);
	// beq cr6,0x821dc588
	if (ctx.cr6.eq) goto loc_821DC588;
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// beq cr6,0x821dc588
	if (ctx.cr6.eq) goto loc_821DC588;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// beq cr6,0x821dc588
	if (ctx.cr6.eq) goto loc_821DC588;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x821dc594
	if (!ctx.cr6.eq) goto loc_821DC594;
	// stfs f28,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stfs f27,164(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f26,192(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// b 0x821dc594
	goto loc_821DC594;
loc_821DC588:
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_821DC590:
	// li r26,1
	ctx.r26.s64 = 1;
loc_821DC594:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DC5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bne cr6,0x821dc61c
	if (!ctx.cr6.eq) goto loc_821DC61C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f25,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f25.f64 + ctx.f0.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
loc_821DC61C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dc494
	if (!ctx.cr6.eq) goto loc_821DC494;
loc_821DC628:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC63C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r9.u64);
	// std r8,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r8.u64);
	// std r7,0(r22)
	PPC_STORE_U64(ctx.r22.u32 + 0, ctx.r7.u64);
	// std r6,8(r22)
	PPC_STORE_U64(ctx.r22.u32 + 8, ctx.r6.u64);
loc_821DC664:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249960
	ctx.lr = 0x821DC670;
	sub_82249960(ctx, base);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_821DC674"))) PPC_WEAK_FUNC(sub_821DC674);
PPC_FUNC_IMPL(__imp__sub_821DC674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC678"))) PPC_WEAK_FUNC(sub_821DC678);
PPC_FUNC_IMPL(__imp__sub_821DC678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821DC680;
	sub_82248774(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821dc828
	if (ctx.cr6.eq) goto loc_821DC828;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x821DC6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc828
	if (ctx.cr6.eq) goto loc_821DC828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821dc814
	if (ctx.cr6.eq) goto loc_821DC814;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r25,r11,-5920
	ctx.r25.s64 = ctx.r11.s64 + -5920;
loc_821DC740:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r29,r10,r25
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x821dc814
	if (ctx.cr6.gt) goto loc_821DC814;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218c400
	ctx.lr = 0x821DC760;
	sub_8218C400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x821dc808
	if (ctx.cr6.lt) goto loc_821DC808;
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// beq cr6,0x821dc808
	if (ctx.cr6.eq) goto loc_821DC808;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9648
	ctx.lr = 0x821DC790;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dc7bc
	if (!ctx.cr6.eq) goto loc_821DC7BC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,42
	ctx.r5.s64 = 42;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,42
	ctx.r30.s64 = 42;
	// bl 0x821d9648
	ctx.lr = 0x821DC7B4;
	sub_821D9648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821dc808
	if (ctx.cr6.eq) goto loc_821DC808;
loc_821DC7BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DC808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC808:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821dc740
	if (!ctx.cr6.eq) goto loc_821DC740;
loc_821DC814:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DC828:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821DC830"))) PPC_WEAK_FUNC(sub_821DC830);
PPC_FUNC_IMPL(__imp__sub_821DC830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DC838;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DC850;
	sub_821A2548(ctx, base);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82275800
	ctx.lr = 0x821DC864;
	sub_82275800(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bl 0x82248a40
	ctx.lr = 0x821DC878;
	sub_82248A40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822757f0
	ctx.lr = 0x821DC880;
	sub_822757F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DC888"))) PPC_WEAK_FUNC(sub_821DC888);
PPC_FUNC_IMPL(__imp__sub_821DC888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821DC890;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821DC8C0;
	sub_8209EDA0(ctx, base);
	// mullw r30,r28,r27
	ctx.r30.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r27.s32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r30,15
	ctx.r9.s64 = ctx.r30.s64 + 15;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// rlwinm r10,r9,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// lwz r31,-8200(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821DC8FC;
	sub_821AAF10(ctx, base);
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// bl 0x82087ab0
	ctx.lr = 0x821DC930;
	sub_82087AB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aafd0
	ctx.lr = 0x821DC93C;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821DC944"))) PPC_WEAK_FUNC(sub_821DC944);
PPC_FUNC_IMPL(__imp__sub_821DC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC948"))) PPC_WEAK_FUNC(sub_821DC948);
PPC_FUNC_IMPL(__imp__sub_821DC948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821DC950;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821DC97C;
	sub_8209EDA0(ctx, base);
	// mullw r11,r30,r28
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// rlwinm r10,r9,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// lwz r30,-8200(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821DC9B8;
	sub_821AAF10(ctx, base);
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// ld r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821DC9E8;
	sub_821AAFD0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821DC9F4"))) PPC_WEAK_FUNC(sub_821DC9F4);
PPC_FUNC_IMPL(__imp__sub_821DC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC9F8"))) PPC_WEAK_FUNC(sub_821DC9F8);
PPC_FUNC_IMPL(__imp__sub_821DC9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-15644
	ctx.r4.s64 = ctx.r10.s64 + -15644;
	// lwz r3,-19020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// b 0x821a8180
	sub_821A8180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DCA0C"))) PPC_WEAK_FUNC(sub_821DCA0C);
PPC_FUNC_IMPL(__imp__sub_821DCA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCA10"))) PPC_WEAK_FUNC(sub_821DCA10);
PPC_FUNC_IMPL(__imp__sub_821DCA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249928
	ctx.lr = 0x821DCA24;
	sub_82249928(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x821b2118
	ctx.lr = 0x821DCA44;
	sub_821B2118(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stfs f29,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f28,308(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,-15620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15620);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r8,304(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// bl 0x821d1760
	ctx.lr = 0x821DCAA4;
	sub_821D1760(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r31,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// rlwinm r9,r31,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFF;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bl 0x821b5ef8
	ctx.lr = 0x821DCACC;
	sub_821B5EF8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b1d48
	ctx.lr = 0x821DCAD4;
	sub_821B1D48(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249974
	ctx.lr = 0x821DCAE0;
	sub_82249974(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DCAF0"))) PPC_WEAK_FUNC(sub_821DCAF0);
PPC_FUNC_IMPL(__imp__sub_821DCAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x821DCAF8;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r10,-15604
	ctx.r4.s64 = ctx.r10.s64 + -15604;
	// lwz r30,-19020(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8218a540
	ctx.lr = 0x821DCB2C;
	sub_8218A540(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bl 0x821a7758
	ctx.lr = 0x821DCB5C;
	sub_821A7758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bl 0x8211b248
	ctx.lr = 0x821DCB70;
	sub_8211B248(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dcec0
	if (ctx.cr6.eq) goto loc_821DCEC0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// addi r29,r11,-15644
	ctx.r29.s64 = ctx.r11.s64 + -15644;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x821a78b0
	ctx.lr = 0x821DCBAC;
	sub_821A78B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// bl 0x82082c80
	ctx.lr = 0x821DCBC0;
	sub_82082C80(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821dcbf0
	if (!ctx.cr6.eq) goto loc_821DCBF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a8180
	ctx.lr = 0x821DCBD8;
	sub_821A8180(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a78b0
	ctx.lr = 0x821DCBE8;
	sub_821A78B0(ctx, base);
	// ld r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x821dcbf4
	goto loc_821DCBF4;
loc_821DCBF0:
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_821DCBF4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r25,-7488(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// lwz r30,-19048(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ade68
	ctx.lr = 0x821DCC0C;
	sub_821ADE68(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821adc30
	ctx.lr = 0x821DCC18;
	sub_821ADC30(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821adca8
	ctx.lr = 0x821DCC24;
	sub_821ADCA8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821DCC34;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ad288
	ctx.lr = 0x821DCC40;
	sub_821AD288(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x821dcc54
	if (ctx.cr6.eq) goto loc_821DCC54;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821DCC54;
	sub_821AD6F8(ctx, base);
loc_821DCC54:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// bl 0x821a8848
	ctx.lr = 0x821DCC80;
	sub_821A8848(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r24.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r6,-15616
	ctx.r5.s64 = ctx.r6.s64 + -15616;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821a8c78
	ctx.lr = 0x821DCCB8;
	sub_821A8C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a29d0
	ctx.lr = 0x821DCCC0;
	sub_821A29D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// ld r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// ld r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// ld r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// ld r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// beq cr6,0x821dcd2c
	if (ctx.cr6.eq) goto loc_821DCD2C;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82289c50
	ctx.lr = 0x821DCD2C;
	sub_82289C50(ctx, base);
loc_821DCD2C:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82082318
	ctx.lr = 0x821DCD34;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,220
	ctx.r4.s64 = 220;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821b16b8
	ctx.lr = 0x821DCD48;
	sub_821B16B8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// rlwinm r10,r28,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r28,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,224
	ctx.r4.s64 = 224;
	// lfs f31,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x821DCDC4;
	sub_821B16B8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r11,-1728
	ctx.r30.s64 = ctx.r11.s64 + -1728;
	// ble cr6,0x821dce50
	if (!ctx.cr6.gt) goto loc_821DCE50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lfs f30,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
loc_821DCDE4:
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stdx r9,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u64);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821dce40
	if (!ctx.cr6.eq) goto loc_821DCE40;
	// stfsx f31,r11,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821dc888
	ctx.lr = 0x821DCE24;
	sub_821DC888(ctx, base);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// stfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_821DCE40:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x821dcde4
	if (!ctx.cr0.eq) goto loc_821DCDE4;
loc_821DCE50:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821dc888
	ctx.lr = 0x821DCE64;
	sub_821DC888(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821DCE8C;
	sub_821A8DC0(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821dcea0
	if (ctx.cr6.eq) goto loc_821DCEA0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821DCEA0;
	sub_821AD1F8(ctx, base);
loc_821DCEA0:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ad288
	ctx.lr = 0x821DCEAC;
	sub_821AD288(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x821dcec0
	if (ctx.cr6.eq) goto loc_821DCEC0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821DCEC0;
	sub_821AD6F8(ctx, base);
loc_821DCEC0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821DCED0"))) PPC_WEAK_FUNC(sub_821DCED0);
PPC_FUNC_IMPL(__imp__sub_821DCED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DCED8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,-4
	ctx.r31.s64 = ctx.r3.s64 + -4;
	// li r30,3
	ctx.r30.s64 = 3;
loc_821DCEE8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82088268
	ctx.lr = 0x821DCEF0;
	sub_82088268(ctx, base);
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82088268
	ctx.lr = 0x821DCEF8;
	sub_82088268(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821dcee8
	if (!ctx.cr0.eq) goto loc_821DCEE8;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82088268
	ctx.lr = 0x821DCF08;
	sub_82088268(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82088268
	ctx.lr = 0x821DCF10;
	sub_82088268(ctx, base);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1216, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DCF28"))) PPC_WEAK_FUNC(sub_821DCF28);
PPC_FUNC_IMPL(__imp__sub_821DCF28) {
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
	// bl 0x82183850
	ctx.lr = 0x821DCF44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dcf5c
	if (ctx.cr6.eq) goto loc_821DCF5C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x821DCF58;
	sub_82183448(ctx, base);
	// b 0x821dcf64
	goto loc_821DCF64;
loc_821DCF5C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821DCF64;
	sub_821845A0(ctx, base);
loc_821DCF64:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dcf88
	if (ctx.cr6.eq) goto loc_821DCF88;
	// bl 0x82183078
	ctx.lr = 0x821DCF74;
	sub_82183078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a23c8
	ctx.lr = 0x821DCF88;
	sub_821A23C8(ctx, base);
loc_821DCF88:
	// bl 0x82183850
	ctx.lr = 0x821DCF8C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dcfa4
	if (ctx.cr6.eq) goto loc_821DCFA4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x821DCFA0;
	sub_82183448(ctx, base);
	// b 0x821dcfac
	goto loc_821DCFAC;
loc_821DCFA4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821DCFAC;
	sub_821845A0(ctx, base);
loc_821DCFAC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dcfbc
	if (ctx.cr6.eq) goto loc_821DCFBC;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x821a7680
	ctx.lr = 0x821DCFBC;
	sub_821A7680(ctx, base);
loc_821DCFBC:
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

__attribute__((alias("__imp__sub_821DCFD8"))) PPC_WEAK_FUNC(sub_821DCFD8);
PPC_FUNC_IMPL(__imp__sub_821DCFD8) {
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
	// lwz r31,-19020(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd00c
	if (ctx.cr6.eq) goto loc_821DD00C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a8150
	ctx.lr = 0x821DD000;
	sub_821A8150(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821DD00C;
	sub_82183E40(ctx, base);
loc_821DD00C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-19228(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19228);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821dd030
	if (ctx.cr6.eq) goto loc_821DD030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a2358
	ctx.lr = 0x821DD024;
	sub_821A2358(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x821DD030;
	sub_82183E40(ctx, base);
loc_821DD030:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DD044"))) PPC_WEAK_FUNC(sub_821DD044);
PPC_FUNC_IMPL(__imp__sub_821DD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD048"))) PPC_WEAK_FUNC(sub_821DD048);
PPC_FUNC_IMPL(__imp__sub_821DD048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821DD050;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DD064;
	sub_821A2548(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82183078
	ctx.lr = 0x821DD070;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821DD07C;
	sub_821837D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,80
	ctx.r10.s64 = 80;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,79
	ctx.r7.s64 = ctx.r11.s64 + 79;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// divwu r11,r7,r10
	ctx.r11.u32 = ctx.r7.u32 / ctx.r10.u32;
	// clrlwi r10,r8,26
	ctx.r10.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,4
	ctx.r7.s64 = 4;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r6,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x821dd0c8
	if (ctx.cr6.eq) goto loc_821DD0C8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x821dd0c8
	if (ctx.cr6.eq) goto loc_821DD0C8;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// bne cr6,0x821dd0cc
	if (!ctx.cr6.eq) goto loc_821DD0CC;
loc_821DD0C8:
	// li r7,8
	ctx.r7.s64 = 8;
loc_821DD0CC:
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// li r11,0
	ctx.r11.s64 = 0;
	// divwu r7,r10,r9
	ctx.r7.u32 = ctx.r10.u32 / ctx.r9.u32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bl 0x8226b2c0
	ctx.lr = 0x821DD12C;
	sub_8226B2C0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8226b3e0
	ctx.lr = 0x821DD14C;
	sub_8226B3E0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8226b3e0
	ctx.lr = 0x821DD16C;
	sub_8226B3E0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821DD178;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821DD180"))) PPC_WEAK_FUNC(sub_821DD180);
PPC_FUNC_IMPL(__imp__sub_821DD180) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd1a4
	if (ctx.cr6.eq) goto loc_821DD1A4;
	// bl 0x82268fb0
	ctx.lr = 0x821DD1A4;
	sub_82268FB0(ctx, base);
loc_821DD1A4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd1b4
	if (ctx.cr6.eq) goto loc_821DD1B4;
	// bl 0x82268fb0
	ctx.lr = 0x821DD1B4;
	sub_82268FB0(ctx, base);
loc_821DD1B4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd1c4
	if (ctx.cr6.eq) goto loc_821DD1C4;
	// bl 0x82268fb0
	ctx.lr = 0x821DD1C4;
	sub_82268FB0(ctx, base);
loc_821DD1C4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DD1D8"))) PPC_WEAK_FUNC(sub_821DD1D8);
PPC_FUNC_IMPL(__imp__sub_821DD1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821DD1E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,51
	ctx.r10.s64 = 51;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821DD20C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821DD238;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821DD268;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821DD270"))) PPC_WEAK_FUNC(sub_821DD270);
PPC_FUNC_IMPL(__imp__sub_821DD270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DD278;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dd2f0
	if (ctx.cr6.eq) goto loc_821DD2F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dd2f0
	if (ctx.cr6.eq) goto loc_821DD2F0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dd2f0
	if (!ctx.cr6.gt) goto loc_821DD2F0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821DD2B4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd2dc
	if (ctx.cr6.eq) goto loc_821DD2DC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DD2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DD2DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dd2b4
	if (ctx.cr6.lt) goto loc_821DD2B4;
loc_821DD2F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DD2F8"))) PPC_WEAK_FUNC(sub_821DD2F8);
PPC_FUNC_IMPL(__imp__sub_821DD2F8) {
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
	// bl 0x82183850
	ctx.lr = 0x821DD310;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821dd328
	if (ctx.cr6.eq) goto loc_821DD328;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x821DD324;
	sub_82183448(ctx, base);
	// b 0x821dd330
	goto loc_821DD330;
loc_821DD328:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821DD330;
	sub_821845A0(ctx, base);
loc_821DD330:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x821DD348;
	sub_82184800(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821DD34C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd364
	if (ctx.cr6.eq) goto loc_821DD364;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x821DD360;
	sub_82183448(ctx, base);
	// b 0x821dd36c
	goto loc_821DD36C;
loc_821DD364:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821DD36C;
	sub_821845A0(ctx, base);
loc_821DD36C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd380
	if (ctx.cr6.eq) goto loc_821DD380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e65a8
	ctx.lr = 0x821DD37C;
	sub_821E65A8(ctx, base);
	// b 0x821dd384
	goto loc_821DD384;
loc_821DD380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD384:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD390;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd3a8
	if (ctx.cr6.eq) goto loc_821DD3A8;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x821DD3A4;
	sub_82183448(ctx, base);
	// b 0x821dd3b0
	goto loc_821DD3B0;
loc_821DD3A8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821DD3B0;
	sub_821845A0(ctx, base);
loc_821DD3B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd3c4
	if (ctx.cr6.eq) goto loc_821DD3C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e5b40
	ctx.lr = 0x821DD3C0;
	sub_821E5B40(ctx, base);
	// b 0x821dd3c8
	goto loc_821DD3C8;
loc_821DD3C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD3C8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD3D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd3ec
	if (ctx.cr6.eq) goto loc_821DD3EC;
	// li r3,1088
	ctx.r3.s64 = 1088;
	// bl 0x82183448
	ctx.lr = 0x821DD3E8;
	sub_82183448(ctx, base);
	// b 0x821dd3f4
	goto loc_821DD3F4;
loc_821DD3EC:
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x821845a0
	ctx.lr = 0x821DD3F4;
	sub_821845A0(ctx, base);
loc_821DD3F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd408
	if (ctx.cr6.eq) goto loc_821DD408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e3ea0
	ctx.lr = 0x821DD404;
	sub_821E3EA0(ctx, base);
	// b 0x821dd40c
	goto loc_821DD40C;
loc_821DD408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD40C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD418;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd430
	if (ctx.cr6.eq) goto loc_821DD430;
	// li r3,384
	ctx.r3.s64 = 384;
	// bl 0x82183448
	ctx.lr = 0x821DD42C;
	sub_82183448(ctx, base);
	// b 0x821dd438
	goto loc_821DD438;
loc_821DD430:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821845a0
	ctx.lr = 0x821DD438;
	sub_821845A0(ctx, base);
loc_821DD438:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd44c
	if (ctx.cr6.eq) goto loc_821DD44C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e2640
	ctx.lr = 0x821DD448;
	sub_821E2640(ctx, base);
	// b 0x821dd450
	goto loc_821DD450;
loc_821DD44C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD450:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD45C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd474
	if (ctx.cr6.eq) goto loc_821DD474;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x821DD470;
	sub_82183448(ctx, base);
	// b 0x821dd47c
	goto loc_821DD47C;
loc_821DD474:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821DD47C;
	sub_821845A0(ctx, base);
loc_821DD47C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd490
	if (ctx.cr6.eq) goto loc_821DD490;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e20d0
	ctx.lr = 0x821DD48C;
	sub_821E20D0(ctx, base);
	// b 0x821dd494
	goto loc_821DD494;
loc_821DD490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD494:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD4A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd4b8
	if (ctx.cr6.eq) goto loc_821DD4B8;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82183448
	ctx.lr = 0x821DD4B4;
	sub_82183448(ctx, base);
	// b 0x821dd4c0
	goto loc_821DD4C0;
loc_821DD4B8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821845a0
	ctx.lr = 0x821DD4C0;
	sub_821845A0(ctx, base);
loc_821DD4C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd4d4
	if (ctx.cr6.eq) goto loc_821DD4D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e1e10
	ctx.lr = 0x821DD4D0;
	sub_821E1E10(ctx, base);
	// b 0x821dd4d8
	goto loc_821DD4D8;
loc_821DD4D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD4D8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD4E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd4fc
	if (ctx.cr6.eq) goto loc_821DD4FC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x821DD4F8;
	sub_82183448(ctx, base);
	// b 0x821dd504
	goto loc_821DD504;
loc_821DD4FC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821DD504;
	sub_821845A0(ctx, base);
loc_821DD504:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd518
	if (ctx.cr6.eq) goto loc_821DD518;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e1b88
	ctx.lr = 0x821DD514;
	sub_821E1B88(ctx, base);
	// b 0x821dd51c
	goto loc_821DD51C;
loc_821DD518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD51C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD528;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd540
	if (ctx.cr6.eq) goto loc_821DD540;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82183448
	ctx.lr = 0x821DD53C;
	sub_82183448(ctx, base);
	// b 0x821dd548
	goto loc_821DD548;
loc_821DD540:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821DD548;
	sub_821845A0(ctx, base);
loc_821DD548:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd55c
	if (ctx.cr6.eq) goto loc_821DD55C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e1670
	ctx.lr = 0x821DD558;
	sub_821E1670(ctx, base);
	// b 0x821dd560
	goto loc_821DD560;
loc_821DD55C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD560:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821DD56C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821dd584
	if (ctx.cr6.eq) goto loc_821DD584;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82183448
	ctx.lr = 0x821DD580;
	sub_82183448(ctx, base);
	// b 0x821dd58c
	goto loc_821DD58C;
loc_821DD584:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x821DD58C;
	sub_821845A0(ctx, base);
loc_821DD58C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd5a0
	if (ctx.cr6.eq) goto loc_821DD5A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e11c8
	ctx.lr = 0x821DD59C;
	sub_821E11C8(ctx, base);
	// b 0x821dd5a4
	goto loc_821DD5A4;
loc_821DD5A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD5A4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821DD5C8"))) PPC_WEAK_FUNC(sub_821DD5C8);
PPC_FUNC_IMPL(__imp__sub_821DD5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821DD5D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dd63c
	if (!ctx.cr6.gt) goto loc_821DD63C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_821DD5F0:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821dd620
	if (ctx.cr6.eq) goto loc_821DD620;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd620
	if (ctx.cr6.eq) goto loc_821DD620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DD620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DD620:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821dd5f0
	if (ctx.cr6.lt) goto loc_821DD5F0;
loc_821DD63C:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dd650
	if (ctx.cr6.eq) goto loc_821DD650;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821DD650;
	sub_82183E40(ctx, base);
loc_821DD650:
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r28.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821DD664"))) PPC_WEAK_FUNC(sub_821DD664);
PPC_FUNC_IMPL(__imp__sub_821DD664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD668"))) PPC_WEAK_FUNC(sub_821DD668);
PPC_FUNC_IMPL(__imp__sub_821DD668) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821dd998
	sub_821DD998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD670"))) PPC_WEAK_FUNC(sub_821DD670);
PPC_FUNC_IMPL(__imp__sub_821DD670) {
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
	// bl 0x82249928
	ctx.lr = 0x821DD688;
	sub_82249928(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DD6AC;
	sub_821A2548(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82271e00
	ctx.lr = 0x821DD6B8;
	sub_82271E00(ctx, base);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f28,188(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fadds f0,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fsubs f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fsubs f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822750b0
	ctx.lr = 0x821DD7A8;
	sub_822750B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82275800
	ctx.lr = 0x821DD7BC;
	sub_82275800(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82087ab0
	ctx.lr = 0x821DD7C8;
	sub_82087AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822757f0
	ctx.lr = 0x821DD7D0;
	sub_822757F0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249974
	ctx.lr = 0x821DD7DC;
	sub_82249974(ctx, base);
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

__attribute__((alias("__imp__sub_821DD7F0"))) PPC_WEAK_FUNC(sub_821DD7F0);
PPC_FUNC_IMPL(__imp__sub_821DD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821DD7F8;
	sub_82248788(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8224991c
	ctx.lr = 0x821DD800;
	sub_8224991C(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// bl 0x821a2548
	ctx.lr = 0x821DD834;
	sub_821A2548(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82271e00
	ctx.lr = 0x821DD840;
	sub_82271E00(ctx, base);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f25,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,8064(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f12,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f28,196(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f25,208(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f28,220(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f27
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f6,f8,f26
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,204(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82270cb0
	ctx.lr = 0x821DD8F8;
	sub_82270CB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270c70
	ctx.lr = 0x821DD908;
	sub_82270C70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821dd924
	if (!ctx.cr6.eq) goto loc_821DD924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822701a0
	ctx.lr = 0x821DD918;
	sub_822701A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270168
	ctx.lr = 0x821DD924;
	sub_82270168(ctx, base);
loc_821DD924:
	// ld r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822750b0
	ctx.lr = 0x821DD93C;
	sub_822750B0(ctx, base);
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275800
	ctx.lr = 0x821DD950;
	sub_82275800(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821847a8
	ctx.lr = 0x821DD95C;
	sub_821847A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822757f0
	ctx.lr = 0x821DD964;
	sub_822757F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270c70
	ctx.lr = 0x821DD970;
	sub_82270C70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821dd984
	if (!ctx.cr6.eq) goto loc_821DD984;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270168
	ctx.lr = 0x821DD984;
	sub_82270168(ctx, base);
loc_821DD984:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82249968
	ctx.lr = 0x821DD990;
	sub_82249968(ctx, base);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821DD994"))) PPC_WEAK_FUNC(sub_821DD994);
PPC_FUNC_IMPL(__imp__sub_821DD994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD998"))) PPC_WEAK_FUNC(sub_821DD998);
PPC_FUNC_IMPL(__imp__sub_821DD998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DD9A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-15580
	ctx.r9.s64 = ctx.r11.s64 + -15580;
	// addi r8,r10,-15588
	ctx.r8.s64 = ctx.r10.s64 + -15588;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// bl 0x821dd5c8
	ctx.lr = 0x821DD9CC;
	sub_821DD5C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x821DD9D4;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185a50
	ctx.lr = 0x821DD9DC;
	sub_82185A50(ctx, base);
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821dd9f8
	if (ctx.cr6.eq) goto loc_821DD9F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821DD9F4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DD9F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DDA00"))) PPC_WEAK_FUNC(sub_821DDA00);
PPC_FUNC_IMPL(__imp__sub_821DDA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f4,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821dd670
	sub_821DD670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DDA1C"))) PPC_WEAK_FUNC(sub_821DDA1C);
PPC_FUNC_IMPL(__imp__sub_821DDA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDA20"))) PPC_WEAK_FUNC(sub_821DDA20);
PPC_FUNC_IMPL(__imp__sub_821DDA20) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f7,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821dd7f0
	ctx.lr = 0x821DDA58;
	sub_821DD7F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDA68"))) PPC_WEAK_FUNC(sub_821DDA68);
PPC_FUNC_IMPL(__imp__sub_821DDA68) {
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
	// bl 0x82249928
	ctx.lr = 0x821DDA80;
	sub_82249928(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad788
	ctx.lr = 0x821DDAAC;
	sub_821AD788(ctx, base);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-9728
	ctx.r4.s64 = ctx.r10.s64 + -9728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e6918
	ctx.lr = 0x821DDAD8;
	sub_821E6918(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad788
	ctx.lr = 0x821DDAE4;
	sub_821AD788(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249974
	ctx.lr = 0x821DDAF0;
	sub_82249974(ctx, base);
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

__attribute__((alias("__imp__sub_821DDB04"))) PPC_WEAK_FUNC(sub_821DDB04);
PPC_FUNC_IMPL(__imp__sub_821DDB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDB08"))) PPC_WEAK_FUNC(sub_821DDB08);
PPC_FUNC_IMPL(__imp__sub_821DDB08) {
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
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f4,156(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r11,-9696
	ctx.r4.s64 = ctx.r11.s64 + -9696;
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821e6918
	ctx.lr = 0x821DDB54;
	sub_821E6918(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DDB64"))) PPC_WEAK_FUNC(sub_821DDB64);
PPC_FUNC_IMPL(__imp__sub_821DDB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDB68"))) PPC_WEAK_FUNC(sub_821DDB68);
PPC_FUNC_IMPL(__imp__sub_821DDB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821DDB70;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-15536
	ctx.r29.s64 = ctx.r11.s64 + -15536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-19020(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19020);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a78b0
	ctx.lr = 0x821DDB98;
	sub_821A78B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r28,56
	ctx.r31.s64 = ctx.r28.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r9.u32);
	// bl 0x82082c80
	ctx.lr = 0x821DDBB8;
	sub_82082C80(ctx, base);
	// lwz r8,60(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821ddbf0
	if (!ctx.cr6.eq) goto loc_821DDBF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a8180
	ctx.lr = 0x821DDBD0;
	sub_821A8180(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a78b0
	ctx.lr = 0x821DDBE0;
	sub_821A78B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_821DDBF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,-15560
	ctx.r29.s64 = ctx.r11.s64 + -15560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821a78b0
	ctx.lr = 0x821DDC08;
	sub_821A78B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r28,64
	ctx.r31.s64 = ctx.r28.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r9.u32);
	// bl 0x82082c80
	ctx.lr = 0x821DDC28;
	sub_82082C80(ctx, base);
	// lwz r8,68(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821ddc60
	if (!ctx.cr6.eq) goto loc_821DDC60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a8180
	ctx.lr = 0x821DDC40;
	sub_821A8180(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a78b0
	ctx.lr = 0x821DDC50;
	sub_821A78B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_821DDC60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r31,-19020(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19020);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15572
	ctx.r4.s64 = ctx.r11.s64 + -15572;
	// bl 0x8218a540
	ctx.lr = 0x821DDC74;
	sub_8218A540(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a7758
	ctx.lr = 0x821DDC84;
	sub_821A7758(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821DDC9C"))) PPC_WEAK_FUNC(sub_821DDC9C);
PPC_FUNC_IMPL(__imp__sub_821DDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDCA0"))) PPC_WEAK_FUNC(sub_821DDCA0);
PPC_FUNC_IMPL(__imp__sub_821DDCA0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x821DDCCC;
	sub_821859A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82185740
	ctx.lr = 0x821DDCDC;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-15580
	ctx.r9.s64 = ctx.r11.s64 + -15580;
	// addi r8,r10,-15588
	ctx.r8.s64 = ctx.r10.s64 + -15588;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// lfs f0,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r4,r5,0,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x821ddb68
	ctx.lr = 0x821DDD6C;
	sub_821DDB68(ctx, base);
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

__attribute__((alias("__imp__sub_821DDD88"))) PPC_WEAK_FUNC(sub_821DDD88);
PPC_FUNC_IMPL(__imp__sub_821DDD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821DDD90;
	sub_82248764(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821adc30
	ctx.lr = 0x821DDDA8;
	sub_821ADC30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821adc58
	ctx.lr = 0x821DDDB4;
	sub_821ADC58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821add98
	ctx.lr = 0x821DDDC0;
	sub_821ADD98(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821adc80
	ctx.lr = 0x821DDDCC;
	sub_821ADC80(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821addc0
	ctx.lr = 0x821DDDD8;
	sub_821ADDC0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821add20
	ctx.lr = 0x821DDDE4;
	sub_821ADD20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ade68
	ctx.lr = 0x821DDDF0;
	sub_821ADE68(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821add48
	ctx.lr = 0x821DDDFC;
	sub_821ADD48(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad1f8
	ctx.lr = 0x821DDE0C;
	sub_821AD1F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad240
	ctx.lr = 0x821DDE18;
	sub_821AD240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad570
	ctx.lr = 0x821DDE24;
	sub_821AD570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad5b8
	ctx.lr = 0x821DDE30;
	sub_821AD5B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad600
	ctx.lr = 0x821DDE3C;
	sub_821AD600(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad498
	ctx.lr = 0x821DDE48;
	sub_821AD498(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6f8
	ctx.lr = 0x821DDE54;
	sub_821AD6F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad4e0
	ctx.lr = 0x821DDE60;
	sub_821AD4E0(ctx, base);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,-15500
	ctx.r5.s64 = ctx.r10.s64 + -15500;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a8c78
	ctx.lr = 0x821DDEA0;
	sub_821A8C78(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r19,-32178
	ctx.r19.s64 = -2108817408;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r11,-12408(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -12408);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821DDEDC;
	sub_821A8E50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad648
	ctx.lr = 0x821DDEEC;
	sub_821AD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad6a0
	ctx.lr = 0x821DDEFC;
	sub_821AD6A0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// lwz r11,-12408(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -12408);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x821DDF34;
	sub_821A8E50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad648
	ctx.lr = 0x821DDF44;
	sub_821AD648(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad6a0
	ctx.lr = 0x821DDF54;
	sub_821AD6A0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,2144(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,2148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x821dda68
	ctx.lr = 0x821DDF74;
	sub_821DDA68(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x821DDF9C;
	sub_821A8DC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x821DDFA8;
	sub_821AD1F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821ad240
	ctx.lr = 0x821DDFB4;
	sub_821AD240(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821ad570
	ctx.lr = 0x821DDFC0;
	sub_821AD570(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821ad5b8
	ctx.lr = 0x821DDFCC;
	sub_821AD5B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821ad600
	ctx.lr = 0x821DDFD8;
	sub_821AD600(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821ad498
	ctx.lr = 0x821DDFE4;
	sub_821AD498(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821DDFF0;
	sub_821AD6F8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ad4e0
	ctx.lr = 0x821DDFFC;
	sub_821AD4E0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821DE004"))) PPC_WEAK_FUNC(sub_821DE004);
PPC_FUNC_IMPL(__imp__sub_821DE004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE008"))) PPC_WEAK_FUNC(sub_821DE008);
PPC_FUNC_IMPL(__imp__sub_821DE008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821DE010;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821de144
	if (ctx.cr6.eq) goto loc_821DE144;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de144
	if (ctx.cr6.eq) goto loc_821DE144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820dd230
	ctx.lr = 0x821DE040;
	sub_820DD230(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x821DE050;
	sub_821ADE68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x821DE060;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad318
	ctx.lr = 0x821DE06C;
	sub_821AD318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ad2d0
	ctx.lr = 0x821DE078;
	sub_821AD2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad528
	ctx.lr = 0x821DE084;
	sub_821AD528(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821DE090;
	sub_821AD6F8(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821de0f0
	if (!ctx.cr6.gt) goto loc_821DE0F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821DE0A8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821de0d4
	if (ctx.cr6.eq) goto loc_821DE0D4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DE0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 | ctx.r27.u64;
loc_821DE0D4:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821de0a8
	if (ctx.cr6.lt) goto loc_821DE0A8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821de114
	if (!ctx.cr6.eq) goto loc_821DE114;
loc_821DE0F0:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de114
	if (ctx.cr6.eq) goto loc_821DE114;
	// bl 0x8216d578
	ctx.lr = 0x821DE104;
	sub_8216D578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821de114
	if (ctx.cr6.eq) goto loc_821DE114;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ddd88
	ctx.lr = 0x821DE114;
	sub_821DDD88(ctx, base);
loc_821DE114:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x821DE120;
	sub_821AD6F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821DE12C;
	sub_821AD498(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-1736(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de144
	if (ctx.cr6.eq) goto loc_821DE144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d16c0
	ctx.lr = 0x821DE144;
	sub_821D16C0(ctx, base);
loc_821DE144:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821DE14C"))) PPC_WEAK_FUNC(sub_821DE14C);
PPC_FUNC_IMPL(__imp__sub_821DE14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE150"))) PPC_WEAK_FUNC(sub_821DE150);
PPC_FUNC_IMPL(__imp__sub_821DE150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r10.u32);
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1536(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1536, temp.u32);
	// lwsync 
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r3,-1208(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1208, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE174"))) PPC_WEAK_FUNC(sub_821DE174);
PPC_FUNC_IMPL(__imp__sub_821DE174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE178"))) PPC_WEAK_FUNC(sub_821DE178);
PPC_FUNC_IMPL(__imp__sub_821DE178) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE184"))) PPC_WEAK_FUNC(sub_821DE184);
PPC_FUNC_IMPL(__imp__sub_821DE184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE188"))) PPC_WEAK_FUNC(sub_821DE188);
PPC_FUNC_IMPL(__imp__sub_821DE188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1536(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1536, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE190"))) PPC_WEAK_FUNC(sub_821DE190);
PPC_FUNC_IMPL(__imp__sub_821DE190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-15476
	ctx.r9.s64 = ctx.r11.s64 + -15476;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE1A4"))) PPC_WEAK_FUNC(sub_821DE1A4);
PPC_FUNC_IMPL(__imp__sub_821DE1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE1A8"))) PPC_WEAK_FUNC(sub_821DE1A8);
PPC_FUNC_IMPL(__imp__sub_821DE1A8) {
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
	// lwz r11,1540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821de2a8
	if (ctx.cr6.eq) goto loc_821DE2A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1536(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,3316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-15480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821de1ec
	if (!ctx.cr6.gt) goto loc_821DE1EC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821DE1EC:
	// bl 0x8224a1c8
	ctx.lr = 0x821DE1F0;
	sub_8224A1C8(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1022
	ctx.r11.s64 = ctx.r31.s64 + 1022;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-23768(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23768);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,11092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11092);
	ctx.f11.f64 = double(temp.f32);
loc_821DE21C:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821de248
	if (!ctx.cr6.lt) goto loc_821DE248;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821de254
	goto loc_821DE254;
loc_821DE248:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821de254
	if (ctx.cr6.lt) goto loc_821DE254;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_821DE254:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r9,-1022(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1022, ctx.r9.u16);
	// sth r9,-510(r11)
	PPC_STORE_U16(ctx.r11.u32 + -510, ctx.r9.u16);
	// sthu r9,2(r11)
	// bdnz 0x821de21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DE21C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DE280;
	sub_821A2548(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822720c8
	ctx.lr = 0x821DE28C;
	sub_822720C8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
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
loc_821DE2A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821DE2C4"))) PPC_WEAK_FUNC(sub_821DE2C4);
PPC_FUNC_IMPL(__imp__sub_821DE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE2C8"))) PPC_WEAK_FUNC(sub_821DE2C8);
PPC_FUNC_IMPL(__imp__sub_821DE2C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE2F8"))) PPC_WEAK_FUNC(sub_821DE2F8);
PPC_FUNC_IMPL(__imp__sub_821DE2F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 + 28;
loc_821DE318:
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x821de340
	if (!ctx.cr6.gt) goto loc_821DE340;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_821DE340:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821de350
	if (!ctx.cr6.gt) goto loc_821DE350;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_821DE350:
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821de318
	if (ctx.cr6.lt) goto loc_821DE318;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE368"))) PPC_WEAK_FUNC(sub_821DE368);
PPC_FUNC_IMPL(__imp__sub_821DE368) {
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
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de398
	if (ctx.cr6.eq) goto loc_821DE398;
	// bl 0x82268fb0
	ctx.lr = 0x821DE394;
	sub_82268FB0(ctx, base);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
loc_821DE398:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de3ac
	if (ctx.cr6.eq) goto loc_821DE3AC;
	// bl 0x82268fb0
	ctx.lr = 0x821DE3A8;
	sub_82268FB0(ctx, base);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
loc_821DE3AC:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de3c0
	if (ctx.cr6.eq) goto loc_821DE3C0;
	// bl 0x82268fb0
	ctx.lr = 0x821DE3BC;
	sub_82268FB0(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_821DE3C0:
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821DE3E0"))) PPC_WEAK_FUNC(sub_821DE3E0);
PPC_FUNC_IMPL(__imp__sub_821DE3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821DE3E8;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821de528
	if (ctx.cr6.eq) goto loc_821DE528;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DE408;
	sub_821A2548(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r5,272(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// ld r7,248(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// lfs f0,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r6,r27
	ctx.r6.s64 = ctx.r27.s32;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82272d60
	ctx.lr = 0x821DE4B8;
	sub_82272D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,276(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// bl 0x82272a88
	ctx.lr = 0x821DE4C4;
	sub_82272A88(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// ble cr6,0x821de500
	if (!ctx.cr6.gt) goto loc_821DE500;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// bl 0x822785f8
	ctx.lr = 0x821DE4F0;
	sub_822785F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821DE500:
	// rlwimi r28,r26,8,0,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0xFFFFFF00) | (ctx.r28.u64 & 0xFFFFFFFF000000FF);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// rlwimi r29,r28,8,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r7,r29,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// li r6,63
	ctx.r6.s64 = 63;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82273fe0
	ctx.lr = 0x821DE520;
	sub_82273FE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_821DE528:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821DE530"))) PPC_WEAK_FUNC(sub_821DE530);
PPC_FUNC_IMPL(__imp__sub_821DE530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821DE538;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-19048(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DE550;
	sub_821A2548(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821de5ec
	if (ctx.cr6.eq) goto loc_821DE5EC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821de5ec
	if (!ctx.cr6.gt) goto loc_821DE5EC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// li r25,3
	ctx.r25.s64 = 3;
loc_821DE588:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// slw r4,r25,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82278488
	ctx.lr = 0x821DE5A4;
	sub_82278488(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,284(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226d358
	ctx.lr = 0x821DE5D4;
	sub_8226D358(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821de588
	if (ctx.cr6.lt) goto loc_821DE588;
loc_821DE5EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82278488
	ctx.lr = 0x821DE5F8;
	sub_82278488(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,280(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ble cr6,0x821de62c
	if (!ctx.cr6.gt) goto loc_821DE62C;
	// bl 0x82278968
	ctx.lr = 0x821DE628;
	sub_82278968(ctx, base);
	// b 0x821de63c
	goto loc_821DE63C;
loc_821DE62C:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x8226d358
	ctx.lr = 0x821DE63C;
	sub_8226D358(ctx, base);
loc_821DE63C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226db58
	ctx.lr = 0x821DE644;
	sub_8226DB58(ctx, base);
	// lwz r11,-19048(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19048);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82272d60
	ctx.lr = 0x821DE658;
	sub_82272D60(ctx, base);
	// lwz r11,-19048(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19048);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// bl 0x82272a88
	ctx.lr = 0x821DE668;
	sub_82272A88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821DE67C"))) PPC_WEAK_FUNC(sub_821DE67C);
PPC_FUNC_IMPL(__imp__sub_821DE67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE680"))) PPC_WEAK_FUNC(sub_821DE680);
PPC_FUNC_IMPL(__imp__sub_821DE680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DE688;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821de6ac
	if (!ctx.cr6.eq) goto loc_821DE6AC;
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821de6ac
	if (!ctx.cr6.eq) goto loc_821DE6AC;
	// bl 0x821de530
	ctx.lr = 0x821DE6AC;
	sub_821DE530(ctx, base);
loc_821DE6AC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821DE6B8;
	sub_821A2548(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8226eed0
	ctx.lr = 0x821DE6C0;
	sub_8226EED0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lfs f1,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226d358
	ctx.lr = 0x821DE6F8;
	sub_8226D358(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x8226eed8
	ctx.lr = 0x821DE708;
	sub_8226EED8(ctx, base);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DE718"))) PPC_WEAK_FUNC(sub_821DE718);
PPC_FUNC_IMPL(__imp__sub_821DE718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DE720;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821de7f4
	if (!ctx.cr6.gt) goto loc_821DE7F4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821de2f8
	ctx.lr = 0x821DE748;
	sub_821DE2F8(ctx, base);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821de79c
	if (ctx.cr6.lt) goto loc_821DE79C;
	// beq cr6,0x821de78c
	if (ctx.cr6.eq) goto loc_821DE78C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821de7cc
	if (!ctx.cr6.lt) goto loc_821DE7CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,39
	ctx.r8.s64 = ctx.r11.s64 + 39;
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x821de7c4
	goto loc_821DE7C4;
loc_821DE78C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// b 0x821de7a8
	goto loc_821DE7A8;
loc_821DE79C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r9,15
	ctx.r7.s64 = ctx.r9.s64 + 15;
	// rlwinm r6,r7,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
loc_821DE7A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r8,r11,79
	ctx.r8.s64 = ctx.r11.s64 + 79;
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
loc_821DE7C4:
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_821DE7CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r9,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821DE7F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821DE80C"))) PPC_WEAK_FUNC(sub_821DE80C);
PPC_FUNC_IMPL(__imp__sub_821DE80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE810"))) PPC_WEAK_FUNC(sub_821DE810);
PPC_FUNC_IMPL(__imp__sub_821DE810) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821de824
	if (!ctx.cr6.eq) goto loc_821DE824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r11,-13640
	ctx.r9.s64 = ctx.r11.s64 + -13640;
	// b 0x821de82c
	goto loc_821DE82C;
loc_821DE824:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r11,-15432
	ctx.r9.s64 = ctx.r11.s64 + -15432;
loc_821DE82C:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_821DE838:
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821de85c
	if (!ctx.cr6.eq) goto loc_821DE85C;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821de85c
	if (!ctx.cr6.eq) goto loc_821DE85C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821de894
	if (ctx.cr6.eq) goto loc_821DE894;
loc_821DE85C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// blt cr6,0x821de838
	if (ctx.cr6.lt) goto loc_821DE838;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// stw r4,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// stw r5,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r5.u32);
	// blr 
	return;
loc_821DE894:
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DE8A8"))) PPC_WEAK_FUNC(sub_821DE8A8);
PPC_FUNC_IMPL(__imp__sub_821DE8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821DE8B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821DE8C4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821DE8D0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821de368
	ctx.lr = 0x821DE8D8;
	sub_821DE368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2548
	ctx.lr = 0x821DE8E0;
	sub_821A2548(ctx, base);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,304(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8226b2c0
	ctx.lr = 0x821DE908;
	sub_8226B2C0(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821DE914;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821DE91C"))) PPC_WEAK_FUNC(sub_821DE91C);
PPC_FUNC_IMPL(__imp__sub_821DE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE920"))) PPC_WEAK_FUNC(sub_821DE920);
PPC_FUNC_IMPL(__imp__sub_821DE920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821DE928;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82183078
	ctx.lr = 0x821DE944;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821DE950;
	sub_821837D0(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de968
	if (ctx.cr6.eq) goto loc_821DE968;
	// bl 0x82268fb0
	ctx.lr = 0x821DE964;
	sub_82268FB0(ctx, base);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
loc_821DE968:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821de97c
	if (ctx.cr6.eq) goto loc_821DE97C;
	// bl 0x82268fb0
	ctx.lr = 0x821DE978;
	sub_82268FB0(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_821DE97C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2548
	ctx.lr = 0x821DE984;
	sub_821A2548(ctx, base);
	// lwz r28,300(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// lwz r24,304(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	// bl 0x8226db58
	ctx.lr = 0x821DE990;
	sub_8226DB58(ctx, base);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821de810
	ctx.lr = 0x821DE9B8;
	sub_821DE810(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821de718
	ctx.lr = 0x821DE9CC;
	sub_821DE718(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dea44
	if (ctx.cr6.eq) goto loc_821DEA44;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x821DE9E4;
	sub_822AA648(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// bl 0x8226b3e0
	ctx.lr = 0x821DEA08;
	sub_8226B3E0(ctx, base);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// lis r5,11552
	ctx.r5.s64 = 757071872;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,406
	ctx.r5.u64 = ctx.r5.u64 | 406;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226b3e0
	ctx.lr = 0x821DEA40;
	sub_8226B3E0(ctx, base);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
loc_821DEA44:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x821837d0
	ctx.lr = 0x821DEA54;
	sub_821837D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821DEA5C"))) PPC_WEAK_FUNC(sub_821DEA5C);
PPC_FUNC_IMPL(__imp__sub_821DEA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEA60"))) PPC_WEAK_FUNC(sub_821DEA60);
PPC_FUNC_IMPL(__imp__sub_821DEA60) {
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
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEA88;
	sub_821E0E98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEA98;
	sub_821E0E98(ctx, base);
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

__attribute__((alias("__imp__sub_821DEAAC"))) PPC_WEAK_FUNC(sub_821DEAAC);
PPC_FUNC_IMPL(__imp__sub_821DEAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEAB0"))) PPC_WEAK_FUNC(sub_821DEAB0);
PPC_FUNC_IMPL(__imp__sub_821DEAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEAD0;
	sub_821E0E98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEAE0"))) PPC_WEAK_FUNC(sub_821DEAE0);
PPC_FUNC_IMPL(__imp__sub_821DEAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f1,300(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stw r4,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r4.u32);
	// stfs f2,304(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r5,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r5.u32);
	// stw r6,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r6.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r7,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821DEB0C"))) PPC_WEAK_FUNC(sub_821DEB0C);
PPC_FUNC_IMPL(__imp__sub_821DEB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEB10"))) PPC_WEAK_FUNC(sub_821DEB10);
PPC_FUNC_IMPL(__imp__sub_821DEB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x821e6bb0
	ctx.lr = 0x821DEB38;
	sub_821E6BB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEB48"))) PPC_WEAK_FUNC(sub_821DEB48);
PPC_FUNC_IMPL(__imp__sub_821DEB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r4.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEB68;
	sub_821E0E98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEB78"))) PPC_WEAK_FUNC(sub_821DEB78);
PPC_FUNC_IMPL(__imp__sub_821DEB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEB8C;
	sub_821E0E98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEB9C"))) PPC_WEAK_FUNC(sub_821DEB9C);
PPC_FUNC_IMPL(__imp__sub_821DEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEBA0"))) PPC_WEAK_FUNC(sub_821DEBA0);
PPC_FUNC_IMPL(__imp__sub_821DEBA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,332(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEBB4"))) PPC_WEAK_FUNC(sub_821DEBB4);
PPC_FUNC_IMPL(__imp__sub_821DEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEBB8"))) PPC_WEAK_FUNC(sub_821DEBB8);
PPC_FUNC_IMPL(__imp__sub_821DEBB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEBC8"))) PPC_WEAK_FUNC(sub_821DEBC8);
PPC_FUNC_IMPL(__imp__sub_821DEBC8) {
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
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,200
	ctx.r10.s64 = ctx.r3.s64 + 200;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r6,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_821DEC20:
	// stw r8,-76(r10)
	PPC_STORE_U32(ctx.r10.u32 + -76, ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821dec20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DEC20;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,216
	ctx.r11.s64 = ctx.r3.s64 + 216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DEC38:
	// stw r8,-76(r11)
	PPC_STORE_U32(ctx.r11.u32 + -76, ctx.r8.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821dec38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DEC38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e02f0
	ctx.lr = 0x821DEC4C;
	sub_821E02F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEC5C"))) PPC_WEAK_FUNC(sub_821DEC5C);
PPC_FUNC_IMPL(__imp__sub_821DEC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEC60"))) PPC_WEAK_FUNC(sub_821DEC60);
PPC_FUNC_IMPL(__imp__sub_821DEC60) {
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
	// addi r10,r11,-11848
	ctx.r10.s64 = ctx.r11.s64 + -11848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821e69f8
	ctx.lr = 0x821DEC8C;
	sub_821E69F8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821deca8
	if (ctx.cr6.eq) goto loc_821DECA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821DECA4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DECA8:
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

__attribute__((alias("__imp__sub_821DECC0"))) PPC_WEAK_FUNC(sub_821DECC0);
PPC_FUNC_IMPL(__imp__sub_821DECC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r7,2
	ctx.r7.s64 = 2;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
loc_821DED3C:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stwu r11,12(r9)
	ea = 12 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821ded3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DED3C;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r3,200
	ctx.r10.s64 = ctx.r3.s64 + 200;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821DED5C:
	// stw r11,-76(r10)
	PPC_STORE_U32(ctx.r10.u32 + -76, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ded5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DED5C;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r3,216
	ctx.r10.s64 = ctx.r3.s64 + 216;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821DED74:
	// stw r11,-76(r10)
	PPC_STORE_U32(ctx.r10.u32 + -76, ctx.r11.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ded74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DED74;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,-19048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// lwz r7,300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r7.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-19048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19048);
	// lwz r6,304(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// stfs f13,304(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stw r6,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEDC0"))) PPC_WEAK_FUNC(sub_821DEDC0);
PPC_FUNC_IMPL(__imp__sub_821DEDC0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x821DEDE8;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dee1c
	if (!ctx.cr6.eq) goto loc_821DEE1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x821dee08
	if (!ctx.cr6.eq) goto loc_821DEE08;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dee1c
	if (ctx.cr6.eq) goto loc_821DEE1C;
loc_821DEE08:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEE1C;
	sub_821E0E98(ctx, base);
loc_821DEE1C:
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

__attribute__((alias("__imp__sub_821DEE34"))) PPC_WEAK_FUNC(sub_821DEE34);
PPC_FUNC_IMPL(__imp__sub_821DEE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEE38"))) PPC_WEAK_FUNC(sub_821DEE38);
PPC_FUNC_IMPL(__imp__sub_821DEE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821dee60
	if (!ctx.cr6.eq) goto loc_821DEE60;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dee70
	if (ctx.cr6.eq) goto loc_821DEE70;
loc_821DEE60:
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEE70;
	sub_821E0E98(ctx, base);
loc_821DEE70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEE80"))) PPC_WEAK_FUNC(sub_821DEE80);
PPC_FUNC_IMPL(__imp__sub_821DEE80) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x821DEEA8;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821defc4
	if (!ctx.cr6.eq) goto loc_821DEFC4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x821deec8
	if (!ctx.cr6.eq) goto loc_821DEEC8;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821defc4
	if (ctx.cr6.eq) goto loc_821DEFC4;
loc_821DEEC8:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821deefc
	if (!ctx.cr6.eq) goto loc_821DEEFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEEE4;
	sub_821E0E98(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEEF4;
	sub_821E0E98(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x821defb8
	goto loc_821DEFB8;
loc_821DEEFC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x821def2c
	if (!ctx.cr6.eq) goto loc_821DEF2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEF14;
	sub_821E0E98(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEF24;
	sub_821E0E98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821defb8
	goto loc_821DEFB8;
loc_821DEF2C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821def5c
	if (!ctx.cr6.eq) goto loc_821DEF5C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEF44;
	sub_821E0E98(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEF54;
	sub_821E0E98(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821defb8
	goto loc_821DEFB8;
loc_821DEF5C:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x821def8c
	if (!ctx.cr6.eq) goto loc_821DEF8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEF74;
	sub_821E0E98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEF84;
	sub_821E0E98(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x821defb8
	goto loc_821DEFB8;
loc_821DEF8C:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x821defc4
	if (!ctx.cr6.eq) goto loc_821DEFC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEFA4;
	sub_821E0E98(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEFB4;
	sub_821E0E98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DEFB8:
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DEFC4;
	sub_821E0E98(ctx, base);
loc_821DEFC4:
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

__attribute__((alias("__imp__sub_821DEFDC"))) PPC_WEAK_FUNC(sub_821DEFDC);
PPC_FUNC_IMPL(__imp__sub_821DEFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEFE0"))) PPC_WEAK_FUNC(sub_821DEFE0);
PPC_FUNC_IMPL(__imp__sub_821DEFE0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x821DF008;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821df0a0
	if (!ctx.cr6.eq) goto loc_821DF0A0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x821df028
	if (!ctx.cr6.eq) goto loc_821DF028;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df0a0
	if (ctx.cr6.eq) goto loc_821DF0A0;
loc_821DF028:
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// bgt cr6,0x821df0a0
	if (ctx.cr6.gt) goto loc_821DF0A0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821df060
	// bdzf 4*cr6+eq,0x821df068
	// bdzf 4*cr6+eq,0x821df070
	// bdzf 4*cr6+eq,0x821df078
	// bdzf 4*cr6+eq,0x821df080
	// bdzf 4*cr6+eq,0x821df088
	// bne cr6,0x821df090
	if (!ctx.cr6.eq) goto loc_821DF090;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF060:
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF068:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF070:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF078:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF080:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF088:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x821df094
	goto loc_821DF094;
loc_821DF090:
	// li r5,5
	ctx.r5.s64 = 5;
loc_821DF094:
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF0A0;
	sub_821E0E98(ctx, base);
loc_821DF0A0:
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

__attribute__((alias("__imp__sub_821DF0B8"))) PPC_WEAK_FUNC(sub_821DF0B8);
PPC_FUNC_IMPL(__imp__sub_821DF0B8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df0e8
	if (!ctx.cr6.eq) goto loc_821DF0E8;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df124
	if (ctx.cr6.eq) goto loc_821DF124;
loc_821DF0E8:
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF0F8;
	sub_821E0E98(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df114
	if (ctx.cr6.eq) goto loc_821DF114;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821df118
	if (ctx.cr6.eq) goto loc_821DF118;
loc_821DF114:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DF118:
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF124;
	sub_821E0E98(ctx, base);
loc_821DF124:
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

__attribute__((alias("__imp__sub_821DF138"))) PPC_WEAK_FUNC(sub_821DF138);
PPC_FUNC_IMPL(__imp__sub_821DF138) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df16c
	if (!ctx.cr6.eq) goto loc_821DF16C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df18c
	if (ctx.cr6.eq) goto loc_821DF18C;
loc_821DF16C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x821df184
	if (ctx.cr6.eq) goto loc_821DF184;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DF184:
	// bl 0x821e0e98
	ctx.lr = 0x821DF188;
	sub_821E0E98(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_821DF18C:
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

__attribute__((alias("__imp__sub_821DF1A4"))) PPC_WEAK_FUNC(sub_821DF1A4);
PPC_FUNC_IMPL(__imp__sub_821DF1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF1A8"))) PPC_WEAK_FUNC(sub_821DF1A8);
PPC_FUNC_IMPL(__imp__sub_821DF1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821df1d4
	if (!ctx.cr6.eq) goto loc_821DF1D4;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df260
	if (ctx.cr6.eq) goto loc_821DF260;
loc_821DF1D4:
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,128
	ctx.r4.s64 = 128;
	// beq 0x821df1e4
	if (ctx.cr0.eq) goto loc_821DF1E4;
	// li r4,156
	ctx.r4.s64 = 156;
loc_821DF1E4:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// bgt cr6,0x821df260
	if (ctx.cr6.gt) goto loc_821DF260;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821df224
	// bdzf 4*cr6+eq,0x821df22c
	// bdzf 4*cr6+eq,0x821df234
	// bdzf 4*cr6+eq,0x821df23c
	// bdzf 4*cr6+eq,0x821df244
	// bdzf 4*cr6+eq,0x821df24c
	// bne cr6,0x821df254
	if (!ctx.cr6.eq) goto loc_821DF254;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF224:
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF22C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF234:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF23C:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF244:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF24C:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x821df258
	goto loc_821DF258;
loc_821DF254:
	// li r5,5
	ctx.r5.s64 = 5;
loc_821DF258:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF260;
	sub_821E0E98(ctx, base);
loc_821DF260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF270"))) PPC_WEAK_FUNC(sub_821DF270);
PPC_FUNC_IMPL(__imp__sub_821DF270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821DF278;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r8,-11680
	ctx.r27.s64 = ctx.r8.s64 + -11680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
	// addi r26,r10,-11704
	ctx.r26.s64 = ctx.r10.s64 + -11704;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821df2cc
	if (!ctx.cr6.eq) goto loc_821DF2CC;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df300
	if (ctx.cr6.eq) goto loc_821DF300;
loc_821DF2CC:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r4,r8,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// bl 0x821e0e98
	ctx.lr = 0x821DF2EC;
	sub_821E0E98(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u32);
loc_821DF300:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x821df328
	if (!ctx.cr6.eq) goto loc_821DF328;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df354
	if (ctx.cr6.eq) goto loc_821DF354;
loc_821DF328:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r10,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r4,r29,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// bl 0x821e0e98
	ctx.lr = 0x821DF34C;
	sub_821E0E98(ctx, base);
	// add r7,r29,r31
	ctx.r7.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r25,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r25.u32);
loc_821DF354:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x821df36c
	if (!ctx.cr6.eq) goto loc_821DF36C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df398
	if (ctx.cr6.eq) goto loc_821DF398;
loc_821DF36C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r26,8
	ctx.r8.s64 = ctx.r26.s64 + 8;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r10,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x821e0e98
	ctx.lr = 0x821DF390;
	sub_821E0E98(ctx, base);
	// add r7,r30,r31
	ctx.r7.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r24,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r24.u32);
loc_821DF398:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821DF3A0"))) PPC_WEAK_FUNC(sub_821DF3A0);
PPC_FUNC_IMPL(__imp__sub_821DF3A0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df3d4
	if (!ctx.cr6.eq) goto loc_821DF3D4;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df3e8
	if (ctx.cr6.eq) goto loc_821DF3E8;
loc_821DF3D4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF3E4;
	sub_821E0E98(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_821DF3E8:
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

__attribute__((alias("__imp__sub_821DF400"))) PPC_WEAK_FUNC(sub_821DF400);
PPC_FUNC_IMPL(__imp__sub_821DF400) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df434
	if (!ctx.cr6.eq) goto loc_821DF434;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df4c0
	if (ctx.cr6.eq) goto loc_821DF4C0;
loc_821DF434:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821df444
	if (!ctx.cr6.eq) goto loc_821DF444;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF444:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x821df454
	if (!ctx.cr6.eq) goto loc_821DF454;
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF454:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821df464
	if (!ctx.cr6.eq) goto loc_821DF464;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF464:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x821df474
	if (!ctx.cr6.eq) goto loc_821DF474;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF474:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x821df484
	if (!ctx.cr6.eq) goto loc_821DF484;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF484:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x821df494
	if (!ctx.cr6.eq) goto loc_821DF494;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF494:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bne cr6,0x821df4a4
	if (!ctx.cr6.eq) goto loc_821DF4A4;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x821df4b0
	goto loc_821DF4B0;
loc_821DF4A4:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bne cr6,0x821df4bc
	if (!ctx.cr6.eq) goto loc_821DF4BC;
	// li r5,5
	ctx.r5.s64 = 5;
loc_821DF4B0:
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF4BC;
	sub_821E0E98(ctx, base);
loc_821DF4BC:
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
loc_821DF4C0:
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

__attribute__((alias("__imp__sub_821DF4D8"))) PPC_WEAK_FUNC(sub_821DF4D8);
PPC_FUNC_IMPL(__imp__sub_821DF4D8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821df50c
	if (!ctx.cr6.eq) goto loc_821DF50C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df520
	if (ctx.cr6.eq) goto loc_821DF520;
loc_821DF50C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF51C;
	sub_821E0E98(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_821DF520:
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

__attribute__((alias("__imp__sub_821DF538"))) PPC_WEAK_FUNC(sub_821DF538);
PPC_FUNC_IMPL(__imp__sub_821DF538) {
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
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df56c
	if (!ctx.cr6.eq) goto loc_821DF56C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df58c
	if (ctx.cr6.eq) goto loc_821DF58C;
loc_821DF56C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,15
	ctx.r5.s64 = 15;
	// bne cr6,0x821df584
	if (!ctx.cr6.eq) goto loc_821DF584;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DF584:
	// bl 0x821e0e98
	ctx.lr = 0x821DF588;
	sub_821E0E98(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_821DF58C:
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

__attribute__((alias("__imp__sub_821DF5A4"))) PPC_WEAK_FUNC(sub_821DF5A4);
PPC_FUNC_IMPL(__imp__sub_821DF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF5A8"))) PPC_WEAK_FUNC(sub_821DF5A8);
PPC_FUNC_IMPL(__imp__sub_821DF5A8) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df5cc
	if (!ctx.cr6.eq) goto loc_821DF5CC;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df634
	if (ctx.cr6.eq) goto loc_821DF634;
loc_821DF5CC:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df618
	if (ctx.cr6.eq) goto loc_821DF618;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// and r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r5,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// and r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subfe r10,r5,r4
	temp.u8 = (~ctx.r5.u32 + ctx.r4.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_821DF618:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df628
	if (ctx.cr6.eq) goto loc_821DF628;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
loc_821DF628:
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF634;
	sub_821E0E98(ctx, base);
loc_821DF634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF644"))) PPC_WEAK_FUNC(sub_821DF644);
PPC_FUNC_IMPL(__imp__sub_821DF644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF648"))) PPC_WEAK_FUNC(sub_821DF648);
PPC_FUNC_IMPL(__imp__sub_821DF648) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df66c
	if (!ctx.cr6.eq) goto loc_821DF66C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df6d4
	if (ctx.cr6.eq) goto loc_821DF6D4;
loc_821DF66C:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df6b8
	if (ctx.cr6.eq) goto loc_821DF6B8;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subfe r9,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r4.s64;
	// or r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 | ctx.r9.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
loc_821DF6B8:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df6c8
	if (ctx.cr6.eq) goto loc_821DF6C8;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
loc_821DF6C8:
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF6D4;
	sub_821E0E98(ctx, base);
loc_821DF6D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF6E4"))) PPC_WEAK_FUNC(sub_821DF6E4);
PPC_FUNC_IMPL(__imp__sub_821DF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF6E8"))) PPC_WEAK_FUNC(sub_821DF6E8);
PPC_FUNC_IMPL(__imp__sub_821DF6E8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df70c
	if (!ctx.cr6.eq) goto loc_821DF70C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df774
	if (ctx.cr6.eq) goto loc_821DF774;
loc_821DF70C:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df758
	if (ctx.cr6.eq) goto loc_821DF758;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r8,4
	ctx.r8.s64 = 4;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subfe r9,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r4.s64;
	// or r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 | ctx.r9.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
loc_821DF758:
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df768
	if (ctx.cr6.eq) goto loc_821DF768;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
loc_821DF768:
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF774;
	sub_821E0E98(ctx, base);
loc_821DF774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF784"))) PPC_WEAK_FUNC(sub_821DF784);
PPC_FUNC_IMPL(__imp__sub_821DF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF788"))) PPC_WEAK_FUNC(sub_821DF788);
PPC_FUNC_IMPL(__imp__sub_821DF788) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df7ac
	if (!ctx.cr6.eq) goto loc_821DF7AC;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df814
	if (ctx.cr6.eq) goto loc_821DF814;
loc_821DF7AC:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df7fc
	if (ctx.cr6.eq) goto loc_821DF7FC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// subfe r3,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// and r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 & ctx.r10.u64;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// and r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subfe r10,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_821DF7FC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821df808
	if (ctx.cr6.eq) goto loc_821DF808;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
loc_821DF808:
	// li r4,212
	ctx.r4.s64 = 212;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF814;
	sub_821E0E98(ctx, base);
loc_821DF814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF824"))) PPC_WEAK_FUNC(sub_821DF824);
PPC_FUNC_IMPL(__imp__sub_821DF824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF828"))) PPC_WEAK_FUNC(sub_821DF828);
PPC_FUNC_IMPL(__imp__sub_821DF828) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821df85c
	if (!ctx.cr6.eq) goto loc_821DF85C;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821df870
	if (ctx.cr6.eq) goto loc_821DF870;
loc_821DF85C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0e98
	ctx.lr = 0x821DF86C;
	sub_821E0E98(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_821DF870:
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

__attribute__((alias("__imp__sub_821DF888"))) PPC_WEAK_FUNC(sub_821DF888);
PPC_FUNC_IMPL(__imp__sub_821DF888) {
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
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x821df8a4
	if (!ctx.cr6.eq) goto loc_821DF8A4;
	// li r5,2
	ctx.r5.s64 = 2;
loc_821DF8A4:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821df8c4
	if (!ctx.cr6.eq) goto loc_821DF8C4;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821df988
	if (ctx.cr6.eq) goto loc_821DF988;
loc_821DF8C4:
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821df8ec
	if (!ctx.cr6.eq) goto loc_821DF8EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DF8E4;
	sub_821E0258(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821df978
	goto loc_821DF978;
loc_821DF8EC:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x821df910
	if (!ctx.cr6.eq) goto loc_821DF910;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DF908;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821df978
	goto loc_821DF978;
loc_821DF910:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x821df934
	if (!ctx.cr6.eq) goto loc_821DF934;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DF92C;
	sub_821E0258(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x821df978
	goto loc_821DF978;
loc_821DF934:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x821df958
	if (!ctx.cr6.eq) goto loc_821DF958;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DF950;
	sub_821E0258(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x821df978
	goto loc_821DF978;
loc_821DF958:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x821df988
	if (!ctx.cr6.eq) goto loc_821DF988;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DF974;
	sub_821E0258(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
loc_821DF978:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DF988;
	sub_821E0258(ctx, base);
loc_821DF988:
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

__attribute__((alias("__imp__sub_821DF99C"))) PPC_WEAK_FUNC(sub_821DF99C);
PPC_FUNC_IMPL(__imp__sub_821DF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF9A0"))) PPC_WEAK_FUNC(sub_821DF9A0);
PPC_FUNC_IMPL(__imp__sub_821DF9A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x821df9c0
	if (!ctx.cr6.eq) goto loc_821DF9C0;
	// li r5,2
	ctx.r5.s64 = 2;
loc_821DF9C0:
	// addi r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 35;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821df9e0
	if (!ctx.cr6.eq) goto loc_821DF9E0;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dfaac
	if (ctx.cr6.eq) goto loc_821DFAAC;
loc_821DF9E0:
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bgt cr6,0x821dfaac
	if (ctx.cr6.gt) goto loc_821DFAAC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821dfa14
	// bdzf 4*cr6+eq,0x821dfa30
	// bdzf 4*cr6+eq,0x821dfaac
	// bdzf 4*cr6+eq,0x821dfa4c
	// bdzf 4*cr6+eq,0x821dfa68
	// bne cr6,0x821dfa84
	if (!ctx.cr6.eq) goto loc_821DFA84;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821dfa88
	goto loc_821DFA88;
loc_821DFA14:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFA28;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821dfa9c
	goto loc_821DFA9C;
loc_821DFA30:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFA44;
	sub_821E0258(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x821dfa9c
	goto loc_821DFA9C;
loc_821DFA4C:
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFA60;
	sub_821E0258(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x821dfa9c
	goto loc_821DFA9C;
loc_821DFA68:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFA7C;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821dfa9c
	goto loc_821DFA9C;
loc_821DFA84:
	// li r6,1
	ctx.r6.s64 = 1;
loc_821DFA88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFA98;
	sub_821E0258(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_821DFA9C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFAAC;
	sub_821E0258(ctx, base);
loc_821DFAAC:
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

__attribute__((alias("__imp__sub_821DFAC0"))) PPC_WEAK_FUNC(sub_821DFAC0);
PPC_FUNC_IMPL(__imp__sub_821DFAC0) {
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
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x821dfae4
	if (ctx.cr6.eq) goto loc_821DFAE4;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dfae8
	if (ctx.cr6.eq) goto loc_821DFAE8;
loc_821DFAE4:
	// li r5,2
	ctx.r5.s64 = 2;
loc_821DFAE8:
	// addi r11,r4,51
	ctx.r11.s64 = ctx.r4.s64 + 51;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x821dfbf0
	if (ctx.cr6.eq) goto loc_821DFBF0;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821dfb3c
	if (!ctx.cr6.eq) goto loc_821DFB3C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFB20;
	sub_821E0258(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFB34;
	sub_821E0258(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x821dfbe0
	goto loc_821DFBE0;
loc_821DFB3C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x821dfb74
	if (!ctx.cr6.eq) goto loc_821DFB74;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFB58;
	sub_821E0258(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFB6C;
	sub_821E0258(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821dfbe0
	goto loc_821DFBE0;
loc_821DFB74:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x821dfbac
	if (!ctx.cr6.eq) goto loc_821DFBAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFB90;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFBA4;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821dfbe0
	goto loc_821DFBE0;
loc_821DFBAC:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x821dfbf0
	if (!ctx.cr6.eq) goto loc_821DFBF0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFBC8;
	sub_821E0258(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFBDC;
	sub_821E0258(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
loc_821DFBE0:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFBF0;
	sub_821E0258(ctx, base);
loc_821DFBF0:
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

__attribute__((alias("__imp__sub_821DFC04"))) PPC_WEAK_FUNC(sub_821DFC04);
PPC_FUNC_IMPL(__imp__sub_821DFC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DFC08"))) PPC_WEAK_FUNC(sub_821DFC08);
PPC_FUNC_IMPL(__imp__sub_821DFC08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x821dfc28
	if (!ctx.cr6.eq) goto loc_821DFC28;
	// li r5,2
	ctx.r5.s64 = 2;
loc_821DFC28:
	// addi r11,r31,55
	ctx.r11.s64 = ctx.r31.s64 + 55;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821dfc48
	if (!ctx.cr6.eq) goto loc_821DFC48;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821dfd38
	if (ctx.cr6.eq) goto loc_821DFD38;
loc_821DFC48:
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821dfc84
	if (!ctx.cr6.eq) goto loc_821DFC84;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFC68;
	sub_821E0258(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFC7C;
	sub_821E0258(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x821dfd28
	goto loc_821DFD28;
loc_821DFC84:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x821dfcbc
	if (!ctx.cr6.eq) goto loc_821DFCBC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFCA0;
	sub_821E0258(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFCB4;
	sub_821E0258(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821dfd28
	goto loc_821DFD28;
loc_821DFCBC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x821dfcf4
	if (!ctx.cr6.eq) goto loc_821DFCF4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFCD8;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFCEC;
	sub_821E0258(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x821dfd28
	goto loc_821DFD28;
loc_821DFCF4:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x821dfd38
	if (!ctx.cr6.eq) goto loc_821DFD38;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFD10;
	sub_821E0258(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFD24;
	sub_821E0258(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
loc_821DFD28:
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e0258
	ctx.lr = 0x821DFD38;
	sub_821E0258(ctx, base);
loc_821DFD38:
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

__attribute__((alias("__imp__sub_821DFD4C"))) PPC_WEAK_FUNC(sub_821DFD4C);
PPC_FUNC_IMPL(__imp__sub_821DFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DFD50"))) PPC_WEAK_FUNC(sub_821DFD50);
PPC_FUNC_IMPL(__imp__sub_821DFD50) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x821DFD78;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dfdb8
	if (!ctx.cr6.eq) goto loc_821DFDB8;
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821dfdb0
	if (ctx.cr6.eq) goto loc_821DFDB0;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821dfda8
	if (!ctx.cr6.eq) goto loc_821DFDA8;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x821dfdb4
	goto loc_821DFDB4;
loc_821DFDA8:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x821dfdb4
	goto loc_821DFDB4;
loc_821DFDB0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DFDB4:
	// bl 0x821e0e98
	ctx.lr = 0x821DFDB8;
	sub_821E0E98(ctx, base);
loc_821DFDB8:
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

__attribute__((alias("__imp__sub_821DFDD0"))) PPC_WEAK_FUNC(sub_821DFDD0);
PPC_FUNC_IMPL(__imp__sub_821DFDD0) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x821DFDF8;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821dfe38
	if (!ctx.cr6.eq) goto loc_821DFE38;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,56
	ctx.r4.s64 = 56;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dfe30
	if (ctx.cr6.eq) goto loc_821DFE30;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x821dfe28
	if (!ctx.cr6.eq) goto loc_821DFE28;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x821dfe34
	goto loc_821DFE34;
loc_821DFE28:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x821dfe34
	goto loc_821DFE34;
loc_821DFE30:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821DFE34:
	// bl 0x821e0e98
	ctx.lr = 0x821DFE38;
	sub_821E0E98(ctx, base);
loc_821DFE38:
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

__attribute__((alias("__imp__sub_821DFE50"))) PPC_WEAK_FUNC(sub_821DFE50);
PPC_FUNC_IMPL(__imp__sub_821DFE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r4.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e6c70
	ctx.lr = 0x821DFE7C;
	sub_821E6C70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DFE8C"))) PPC_WEAK_FUNC(sub_821DFE8C);
PPC_FUNC_IMPL(__imp__sub_821DFE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DFE90"))) PPC_WEAK_FUNC(sub_821DFE90);
PPC_FUNC_IMPL(__imp__sub_821DFE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821DFE98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DFEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821DFECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,76(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821DFEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DFF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821DFF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821dff40
	if (ctx.cr6.eq) goto loc_821DFF40;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x821dff54
	if (!ctx.cr6.eq) goto loc_821DFF54;
loc_821DFF40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DFF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DFF54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DFF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821DFF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821DFF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DFFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821DFFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821DFFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,220
	ctx.r29.s64 = ctx.r31.s64 + 220;
loc_821E0004:
	// lwz r5,-80(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -80);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x821e0028
	if (ctx.cr6.eq) goto loc_821E0028;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0028:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x821e004c
	if (ctx.cr6.eq) goto loc_821E004C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E004C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E004C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x821e0004
	if (ctx.cr6.lt) goto loc_821E0004;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,204
	ctx.r29.s64 = ctx.r31.s64 + 204;
loc_821E0064:
	// lwz r5,-80(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -80);
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x821e0088
	if (ctx.cr6.eq) goto loc_821E0088;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0088:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x821e00ac
	if (ctx.cr6.eq) goto loc_821E00AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E00AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E00AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x821e0064
	if (ctx.cr6.lt) goto loc_821E0064;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E00C4"))) PPC_WEAK_FUNC(sub_821E00C4);
PPC_FUNC_IMPL(__imp__sub_821E00C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E00C8"))) PPC_WEAK_FUNC(sub_821E00C8);
PPC_FUNC_IMPL(__imp__sub_821E00C8) {
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
	// bl 0x821e69d8
	ctx.lr = 0x821E00E0;
	sub_821E69D8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-11848
	ctx.r10.s64 = ctx.r11.s64 + -11848;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821decc0
	ctx.lr = 0x821E00F4;
	sub_821DECC0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0108"))) PPC_WEAK_FUNC(sub_821E0108);
PPC_FUNC_IMPL(__imp__sub_821E0108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0110;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E0124;
	sub_821A2548(ctx, base);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82183078
	ctx.lr = 0x821E012C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E0138;
	sub_821837D0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r31,36(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8226b2c0
	ctx.lr = 0x821E0160;
	sub_8226B2C0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E016C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E0174"))) PPC_WEAK_FUNC(sub_821E0174);
PPC_FUNC_IMPL(__imp__sub_821E0174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0178"))) PPC_WEAK_FUNC(sub_821E0178);
PPC_FUNC_IMPL(__imp__sub_821E0178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0180;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E0194;
	sub_821A2548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x821d2978
	ctx.lr = 0x821E01A0;
	sub_821D2978(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x821b1108
	ctx.lr = 0x821E01A8;
	sub_821B1108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x821b10f8
	ctx.lr = 0x821E01B4;
	sub_821B10F8(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E01F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b10f8
	ctx.lr = 0x821E01FC;
	sub_821B10F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E0204"))) PPC_WEAK_FUNC(sub_821E0204);
PPC_FUNC_IMPL(__imp__sub_821E0204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0208"))) PPC_WEAK_FUNC(sub_821E0208);
PPC_FUNC_IMPL(__imp__sub_821E0208) {
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
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E0228;
	sub_821A2548(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,468(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E0244;
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

__attribute__((alias("__imp__sub_821E0258"))) PPC_WEAK_FUNC(sub_821E0258);
PPC_FUNC_IMPL(__imp__sub_821E0258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E0260;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8209eda0
	ctx.lr = 0x821E028C;
	sub_8209EDA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821E02B8;
	sub_821AAF10(ctx, base);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r4,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r4.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// bl 0x821aafd0
	ctx.lr = 0x821E02E8;
	sub_821AAFD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E02F0"))) PPC_WEAK_FUNC(sub_821E02F0);
PPC_FUNC_IMPL(__imp__sub_821E02F0) {
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
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8209eda0
	ctx.lr = 0x821E0320;
	sub_8209EDA0(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,-8200(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaf10
	ctx.lr = 0x821E0334;
	sub_821AAF10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821aafd0
	ctx.lr = 0x821E034C;
	sub_821AAFD0(ctx, base);
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

__attribute__((alias("__imp__sub_821E0364"))) PPC_WEAK_FUNC(sub_821E0364);
PPC_FUNC_IMPL(__imp__sub_821E0364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0368"))) PPC_WEAK_FUNC(sub_821E0368);
PPC_FUNC_IMPL(__imp__sub_821E0368) {
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
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x821E0384;
	sub_821A2548(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226fb68
	ctx.lr = 0x821E0390;
	sub_8226FB68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8226fbf8
	ctx.lr = 0x821E039C;
	sub_8226FBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8226fc88
	ctx.lr = 0x821E03A8;
	sub_8226FC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8226fad8
	ctx.lr = 0x821E03B4;
	sub_8226FAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8226faa0
	ctx.lr = 0x821E03C0;
	sub_8226FAA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8226ff60
	ctx.lr = 0x821E03CC;
	sub_8226FF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8226ff00
	ctx.lr = 0x821E03D8;
	sub_8226FF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8226fa40
	ctx.lr = 0x821E03E4;
	sub_8226FA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822701d8
	ctx.lr = 0x821E03F0;
	sub_822701D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822701a8
	ctx.lr = 0x821E03FC;
	sub_822701A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82270168
	ctx.lr = 0x821E0408;
	sub_82270168(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E041C"))) PPC_WEAK_FUNC(sub_821E041C);
PPC_FUNC_IMPL(__imp__sub_821E041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0420"))) PPC_WEAK_FUNC(sub_821E0420);
PPC_FUNC_IMPL(__imp__sub_821E0420) {
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
	// bl 0x821e6d08
	ctx.lr = 0x821E0438;
	sub_821E6D08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-11656
	ctx.r9.s64 = ctx.r11.s64 + -11656;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821E0464"))) PPC_WEAK_FUNC(sub_821E0464);
PPC_FUNC_IMPL(__imp__sub_821E0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0468"))) PPC_WEAK_FUNC(sub_821E0468);
PPC_FUNC_IMPL(__imp__sub_821E0468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e047c
	if (ctx.cr6.eq) goto loc_821E047C;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_821E047C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0484"))) PPC_WEAK_FUNC(sub_821E0484);
PPC_FUNC_IMPL(__imp__sub_821E0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0488"))) PPC_WEAK_FUNC(sub_821E0488);
PPC_FUNC_IMPL(__imp__sub_821E0488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e04ac
	if (ctx.cr6.eq) goto loc_821E04AC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_821E04AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E04B4"))) PPC_WEAK_FUNC(sub_821E04B4);
PPC_FUNC_IMPL(__imp__sub_821E04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E04B8"))) PPC_WEAK_FUNC(sub_821E04B8);
PPC_FUNC_IMPL(__imp__sub_821E04B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e04cc
	if (ctx.cr6.eq) goto loc_821E04CC;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
loc_821E04CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E04D4"))) PPC_WEAK_FUNC(sub_821E04D4);
PPC_FUNC_IMPL(__imp__sub_821E04D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E04D8"))) PPC_WEAK_FUNC(sub_821E04D8);
PPC_FUNC_IMPL(__imp__sub_821E04D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e04f4
	if (ctx.cr6.eq) goto loc_821E04F4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_821E04F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E04FC"))) PPC_WEAK_FUNC(sub_821E04FC);
PPC_FUNC_IMPL(__imp__sub_821E04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0500"))) PPC_WEAK_FUNC(sub_821E0500);
PPC_FUNC_IMPL(__imp__sub_821E0500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0514
	if (ctx.cr6.eq) goto loc_821E0514;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// blr 
	return;
loc_821E0514:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E051C"))) PPC_WEAK_FUNC(sub_821E051C);
PPC_FUNC_IMPL(__imp__sub_821E051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0520"))) PPC_WEAK_FUNC(sub_821E0520);
PPC_FUNC_IMPL(__imp__sub_821E0520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0528;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e0568
	if (!ctx.cr6.gt) goto loc_821E0568;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E0568:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E0574"))) PPC_WEAK_FUNC(sub_821E0574);
PPC_FUNC_IMPL(__imp__sub_821E0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0578"))) PPC_WEAK_FUNC(sub_821E0578);
PPC_FUNC_IMPL(__imp__sub_821E0578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e058c
	if (ctx.cr6.eq) goto loc_821E058C;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// blr 
	return;
loc_821E058C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0594"))) PPC_WEAK_FUNC(sub_821E0594);
PPC_FUNC_IMPL(__imp__sub_821E0594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0598"))) PPC_WEAK_FUNC(sub_821E0598);
PPC_FUNC_IMPL(__imp__sub_821E0598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E05A0;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E05C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e05e0
	if (!ctx.cr6.gt) goto loc_821E05E0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E05E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E05EC"))) PPC_WEAK_FUNC(sub_821E05EC);
PPC_FUNC_IMPL(__imp__sub_821E05EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E05F0"))) PPC_WEAK_FUNC(sub_821E05F0);
PPC_FUNC_IMPL(__imp__sub_821E05F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0604
	if (ctx.cr6.eq) goto loc_821E0604;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_821E0604:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E060C"))) PPC_WEAK_FUNC(sub_821E060C);
PPC_FUNC_IMPL(__imp__sub_821E060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0610"))) PPC_WEAK_FUNC(sub_821E0610);
PPC_FUNC_IMPL(__imp__sub_821E0610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0618;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e0660
	if (!ctx.cr6.gt) goto loc_821E0660;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E0660:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E066C"))) PPC_WEAK_FUNC(sub_821E066C);
PPC_FUNC_IMPL(__imp__sub_821E066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0670"))) PPC_WEAK_FUNC(sub_821E0670);
PPC_FUNC_IMPL(__imp__sub_821E0670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0678;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e06b8
	if (!ctx.cr6.gt) goto loc_821E06B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E06B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E06C4"))) PPC_WEAK_FUNC(sub_821E06C4);
PPC_FUNC_IMPL(__imp__sub_821E06C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E06C8"))) PPC_WEAK_FUNC(sub_821E06C8);
PPC_FUNC_IMPL(__imp__sub_821E06C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E06D0;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E06F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e0710
	if (!ctx.cr6.gt) goto loc_821E0710;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E0710:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E071C"))) PPC_WEAK_FUNC(sub_821E071C);
PPC_FUNC_IMPL(__imp__sub_821E071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0720"))) PPC_WEAK_FUNC(sub_821E0720);
PPC_FUNC_IMPL(__imp__sub_821E0720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0740"))) PPC_WEAK_FUNC(sub_821E0740);
PPC_FUNC_IMPL(__imp__sub_821E0740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0760"))) PPC_WEAK_FUNC(sub_821E0760);
PPC_FUNC_IMPL(__imp__sub_821E0760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0780"))) PPC_WEAK_FUNC(sub_821E0780);
PPC_FUNC_IMPL(__imp__sub_821E0780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0788;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E07A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e07c8
	if (!ctx.cr6.gt) goto loc_821E07C8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 * 180;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821E07C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E07D4"))) PPC_WEAK_FUNC(sub_821E07D4);
PPC_FUNC_IMPL(__imp__sub_821E07D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E07D8"))) PPC_WEAK_FUNC(sub_821E07D8);
PPC_FUNC_IMPL(__imp__sub_821E07D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195360
	ctx.lr = 0x821E081C;
	sub_82195360(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821e0898
	if (ctx.cr6.lt) goto loc_821E0898;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E0848:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f0,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f0,188(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 188, temp.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,32(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f0,268(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 268, temp.u32);
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// blt cr6,0x821e0848
	if (ctx.cr6.lt) goto loc_821E0848;
loc_821E0898:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821e08cc
	if (!ctx.cr6.lt) goto loc_821E08CC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E08B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// bdnz 0x821e08b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E08B4;
loc_821E08CC:
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

__attribute__((alias("__imp__sub_821E08E4"))) PPC_WEAK_FUNC(sub_821E08E4);
PPC_FUNC_IMPL(__imp__sub_821E08E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E08E8"))) PPC_WEAK_FUNC(sub_821E08E8);
PPC_FUNC_IMPL(__imp__sub_821E08E8) {
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
	// beq cr6,0x821e0920
	if (ctx.cr6.eq) goto loc_821E0920;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82195238
	ctx.lr = 0x821E0910;
	sub_82195238(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821e0934
	goto loc_821E0934;
loc_821E0920:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6d28
	ctx.lr = 0x821E093C;
	sub_821E6D28(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0950"))) PPC_WEAK_FUNC(sub_821E0950);
PPC_FUNC_IMPL(__imp__sub_821E0950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0968
	if (ctx.cr6.eq) goto loc_821E0968;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_821E0968:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0970"))) PPC_WEAK_FUNC(sub_821E0970);
PPC_FUNC_IMPL(__imp__sub_821E0970) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821E0998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x821E099C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821e09b4
	if (ctx.cr6.eq) goto loc_821E09B4;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x821E09B0;
	sub_82183448(ctx, base);
	// b 0x821e09bc
	goto loc_821E09BC;
loc_821E09B4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x821E09BC;
	sub_821845A0(ctx, base);
loc_821E09BC:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x821E09C8;
	sub_822AA648(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_821E09E4"))) PPC_WEAK_FUNC(sub_821E09E4);
PPC_FUNC_IMPL(__imp__sub_821E09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E09E8"))) PPC_WEAK_FUNC(sub_821E09E8);
PPC_FUNC_IMPL(__imp__sub_821E09E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E09F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x821e0a14
	if (!ctx.cr6.gt) goto loc_821E0A14;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_821E0A14:
	// bl 0x82183850
	ctx.lr = 0x821E0A18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821e0a30
	if (ctx.cr6.eq) goto loc_821E0A30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x821E0A2C;
	sub_82183448(ctx, base);
	// b 0x821e0a3c
	goto loc_821E0A3C;
loc_821E0A30:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821E0A3C;
	sub_821845A0(ctx, base);
loc_821E0A3C:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x821E0A48;
	sub_822AA648(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E0A60"))) PPC_WEAK_FUNC(sub_821E0A60);
PPC_FUNC_IMPL(__imp__sub_821E0A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821E0A68;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r3,r4,180
	ctx.r3.s64 = ctx.r4.s64 * 180;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,364
	ctx.r11.s64 = 23855104;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r10,r11,5825
	ctx.r10.u64 = ctx.r11.u64 | 5825;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821e0a98
	if (!ctx.cr6.gt) goto loc_821E0A98;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821E0A98:
	// bl 0x82080d68
	ctx.lr = 0x821E0A9C;
	sub_82080D68(ctx, base);
	// mulli r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 * 180;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x821E0AA8;
	sub_822AA648(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821E0AC0"))) PPC_WEAK_FUNC(sub_821E0AC0);
PPC_FUNC_IMPL(__imp__sub_821E0AC0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0ae8
	if (ctx.cr6.eq) goto loc_821E0AE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E0AE8;
	sub_82183E40(ctx, base);
loc_821E0AE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0B04"))) PPC_WEAK_FUNC(sub_821E0B04);
PPC_FUNC_IMPL(__imp__sub_821E0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0B08"))) PPC_WEAK_FUNC(sub_821E0B08);
PPC_FUNC_IMPL(__imp__sub_821E0B08) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0b50
	if (ctx.cr6.eq) goto loc_821E0B50;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0b3c
	if (ctx.cr6.eq) goto loc_821E0B3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821E0B3C;
	sub_82183E40(ctx, base);
loc_821E0B3C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
loc_821E0B50:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0B64"))) PPC_WEAK_FUNC(sub_821E0B64);
PPC_FUNC_IMPL(__imp__sub_821E0B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0B68"))) PPC_WEAK_FUNC(sub_821E0B68);
PPC_FUNC_IMPL(__imp__sub_821E0B68) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0bb0
	if (ctx.cr6.eq) goto loc_821E0BB0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0b9c
	if (ctx.cr6.eq) goto loc_821E0B9C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821E0B9C;
	sub_82183E40(ctx, base);
loc_821E0B9C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
loc_821E0BB0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0BC4"))) PPC_WEAK_FUNC(sub_821E0BC4);
PPC_FUNC_IMPL(__imp__sub_821E0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0BC8"))) PPC_WEAK_FUNC(sub_821E0BC8);
PPC_FUNC_IMPL(__imp__sub_821E0BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r5,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E0BE8"))) PPC_WEAK_FUNC(sub_821E0BE8);
PPC_FUNC_IMPL(__imp__sub_821E0BE8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11656
	ctx.r11.s64 = ctx.r11.s64 + -11656;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821e0c2c
	if (ctx.cr6.eq) goto loc_821E0C2C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82195238
	ctx.lr = 0x821E0C1C;
	sub_82195238(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821e0c3c
	goto loc_821E0C3C;
loc_821E0C2C:
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E0C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0C3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6d28
	ctx.lr = 0x821E0C44;
	sub_821E6D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6d38
	ctx.lr = 0x821E0C4C;
	sub_821E6D38(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0C60"))) PPC_WEAK_FUNC(sub_821E0C60);
PPC_FUNC_IMPL(__imp__sub_821E0C60) {
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
	// bl 0x821e0be8
	ctx.lr = 0x821E0C80;
	sub_821E0BE8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0c9c
	if (ctx.cr6.eq) goto loc_821E0C9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821E0C98;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E0C9C:
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

__attribute__((alias("__imp__sub_821E0CB4"))) PPC_WEAK_FUNC(sub_821E0CB4);
PPC_FUNC_IMPL(__imp__sub_821E0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E0CB8"))) PPC_WEAK_FUNC(sub_821E0CB8);
PPC_FUNC_IMPL(__imp__sub_821E0CB8) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-7480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7480);
	// bl 0x821ae208
	ctx.lr = 0x821E0CDC;
	sub_821AE208(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820de3a0
	ctx.lr = 0x821E0CE4;
	sub_820DE3A0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821E0CF8"))) PPC_WEAK_FUNC(sub_821E0CF8);
PPC_FUNC_IMPL(__imp__sub_821E0CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821E0D00;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x821E0D0C;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821E0D14;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821E0D20;
	sub_821837D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r29,300(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r28,304(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// bl 0x821a2548
	ctx.lr = 0x821E0D34;
	sub_821A2548(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
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
	ctx.lr = 0x821E0D5C;
	sub_8226B2C0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x821E0D68;
	sub_821D2978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ded28
	ctx.lr = 0x821E0D74;
	sub_820DED28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82092930
	ctx.lr = 0x821E0D90;
	sub_82092930(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821e0dc4
	if (ctx.cr6.eq) goto loc_821E0DC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E0DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0DC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821E0DD4;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821E0DDC"))) PPC_WEAK_FUNC(sub_821E0DDC);
PPC_FUNC_IMPL(__imp__sub_821E0DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

