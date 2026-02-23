#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820DF6E8"))) PPC_WEAK_FUNC(sub_820DF6E8);
PPC_FUNC_IMPL(__imp__sub_820DF6E8) {
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
	// bl 0x820df448
	ctx.lr = 0x820DF708;
	sub_820DF448(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df724
	if (ctx.cr6.eq) goto loc_820DF724;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820DF720;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820DF724:
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

__attribute__((alias("__imp__sub_820DF73C"))) PPC_WEAK_FUNC(sub_820DF73C);
PPC_FUNC_IMPL(__imp__sub_820DF73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF740"))) PPC_WEAK_FUNC(sub_820DF740);
PPC_FUNC_IMPL(__imp__sub_820DF740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820DF748;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097288
	ctx.lr = 0x820DF764;
	sub_82097288(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// addi r28,r31,596
	ctx.r28.s64 = ctx.r31.s64 + 596;
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r29.u32);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// bl 0x820ef4c0
	ctx.lr = 0x820DF794;
	sub_820EF4C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4b0
	ctx.lr = 0x820DF7A0;
	sub_820EF4B0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4a8
	ctx.lr = 0x820DF7AC;
	sub_820EF4A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef4c8
	ctx.lr = 0x820DF7B8;
	sub_820EF4C8(ctx, base);
	// stw r29,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r29.u32);
	// stw r29,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r29.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r29,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// lfs f31,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fcfb8
	ctx.lr = 0x820DF7E8;
	sub_820FCFB8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// bl 0x8210f458
	ctx.lr = 0x820DF7F4;
	sub_8210F458(ctx, base);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r6,932(r5)
	PPC_STORE_U16(ctx.r5.u32 + 932, ctx.r6.u16);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stfs f31,868(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f31,924(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// stfs f31,928(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// sth r7,936(r11)
	PPC_STORE_U16(ctx.r11.u32 + 936, ctx.r7.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820DF830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// li r28,6
	ctx.r28.s64 = 6;
	// stw r29,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r29.u32);
loc_820DF840:
	// lwzu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DF854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x820df840
	if (!ctx.cr0.eq) goto loc_820DF840;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820df87c
	if (ctx.cr6.eq) goto loc_820DF87C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DF87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DF87C:
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e29f8
	ctx.lr = 0x820DF88C;
	sub_820E29F8(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820DF89C"))) PPC_WEAK_FUNC(sub_820DF89C);
PPC_FUNC_IMPL(__imp__sub_820DF89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DF8A0"))) PPC_WEAK_FUNC(sub_820DF8A0);
PPC_FUNC_IMPL(__imp__sub_820DF8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,1496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820df8c0
	if (ctx.cr6.eq) goto loc_820DF8C0;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f1,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820DF8C0:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF8D8"))) PPC_WEAK_FUNC(sub_820DF8D8);
PPC_FUNC_IMPL(__imp__sub_820DF8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,1496(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1496);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820df968
	if (ctx.cr6.eq) goto loc_820DF968;
	// lbz r10,934(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 934);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x820df918
	if (ctx.cr6.lt) goto loc_820DF918;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x820df914
	if (!ctx.cr6.gt) goto loc_820DF914;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x820df918
	if (!ctx.cr6.eq) goto loc_820DF918;
loc_820DF914:
	// li r7,1
	ctx.r7.s64 = 1;
loc_820DF918:
	// lbz r10,1110(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1110);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x820df938
	if (ctx.cr6.lt) goto loc_820DF938;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x820df934
	if (!ctx.cr6.gt) goto loc_820DF934;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x820df938
	if (!ctx.cr6.eq) goto loc_820DF938;
loc_820DF934:
	// li r8,1
	ctx.r8.s64 = 1;
loc_820DF938:
	// lbz r10,1286(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1286);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x820df9e8
	if (ctx.cr6.lt) goto loc_820DF9E8;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x820df954
	if (!ctx.cr6.gt) goto loc_820DF954;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x820df9e8
	if (!ctx.cr6.eq) goto loc_820DF9E8;
loc_820DF954:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r7,935(r11)
	PPC_STORE_U8(ctx.r11.u32 + 935, ctx.r7.u8);
	// stb r8,1111(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1111, ctx.r8.u8);
	// stb r9,1287(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1287, ctx.r9.u8);
	// blr 
	return;
loc_820DF968:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r6,935(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 935);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// lfs f0,17128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17128);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x820df998
	if (!ctx.cr6.eq) goto loc_820DF998;
	// lfs f13,868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df998
	if (!ctx.cr6.gt) goto loc_820DF998;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,868(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f13,924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// stfs f13,928(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
loc_820DF998:
	// lbz r10,1111(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1111);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820df9c0
	if (!ctx.cr6.eq) goto loc_820DF9C0;
	// lfs f13,1044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df9c0
	if (!ctx.cr6.gt) goto loc_820DF9C0;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,1044(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1044, temp.u32);
	// stfs f13,1100(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1100, temp.u32);
	// stfs f13,1104(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1104, temp.u32);
loc_820DF9C0:
	// lbz r10,1287(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1287);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820df9e8
	if (!ctx.cr6.eq) goto loc_820DF9E8;
	// lfs f13,1220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df9e8
	if (!ctx.cr6.gt) goto loc_820DF9E8;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,1220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1220, temp.u32);
	// stfs f0,1276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1276, temp.u32);
	// stfs f0,1280(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1280, temp.u32);
loc_820DF9E8:
	// stb r7,935(r11)
	PPC_STORE_U8(ctx.r11.u32 + 935, ctx.r7.u8);
	// stb r8,1111(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1111, ctx.r8.u8);
	// stb r9,1287(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1287, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DF9F8"))) PPC_WEAK_FUNC(sub_820DF9F8);
PPC_FUNC_IMPL(__imp__sub_820DF9F8) {
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
	ctx.lr = 0x820DFA10;
	sub_82249928(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x820c5258
	ctx.lr = 0x820DFA20;
	sub_820C5258(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	ctx.f28.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
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
	// stfs f31,136(r1)
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
	// bl 0x820c5460
	ctx.lr = 0x820DFA78;
	sub_820C5460(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820DFAA8;
	sub_82187200(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// bl 0x82187200
	ctx.lr = 0x820DFAC8;
	sub_82187200(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82187220
	ctx.lr = 0x820DFAD8;
	sub_82187220(ctx, base);
	// fadds f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f13,2140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820dfafc
	if (!ctx.cr6.gt) goto loc_820DFAFC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x820dfb10
	goto loc_820DFB10;
loc_820DFAFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820dfb10
	if (!ctx.cr6.lt) goto loc_820DFB10;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_820DFB10:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// fadds f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f0,8272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r10,r7,20
	ctx.r10.u64 = ctx.r7.u32 & 0xFFF;
	// srawi r6,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 9;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r8,r5,29
	ctx.r8.u64 = ctx.r5.u32 & 0x7;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x820dfb6c
	if (ctx.cr6.lt) goto loc_820DFB6C;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
loc_820DFB6C:
	// stfs f30,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820dfbc0
	if (ctx.cr6.eq) goto loc_820DFBC0;
	// clrlwi r5,r10,23
	ctx.r5.u64 = ctx.r10.u32 & 0x1FF;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f29,60(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,17124(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17124);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x820dfbd8
	goto loc_820DFBD8;
loc_820DFBC0:
	// li r11,10
	ctx.r11.s64 = 10;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820DFBD8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// std r8,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r8.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82249974
	ctx.lr = 0x820DFC00;
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

__attribute__((alias("__imp__sub_820DFC14"))) PPC_WEAK_FUNC(sub_820DFC14);
PPC_FUNC_IMPL(__imp__sub_820DFC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DFC18"))) PPC_WEAK_FUNC(sub_820DFC18);
PPC_FUNC_IMPL(__imp__sub_820DFC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820DFC20;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r3,344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x820DFC38;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dfc60
	if (!ctx.cr6.eq) goto loc_820DFC60;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DFC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820DFC60:
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r29,20
	ctx.r31.s64 = ctx.r29.s64 + 20;
loc_820DFC68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dfc94
	if (ctx.cr6.eq) goto loc_820DFC94;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DFC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dfd20
	if (ctx.cr6.eq) goto loc_820DFD20;
loc_820DFC94:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// ble cr6,0x820dfc68
	if (!ctx.cr6.gt) goto loc_820DFC68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820df9f8
	ctx.lr = 0x820DFCAC;
	sub_820DF9F8(ctx, base);
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DFCC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dfcf0
	if (ctx.cr6.eq) goto loc_820DFCF0;
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
	ctx.lr = 0x820DFCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
loc_820DFCF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DFD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820DFD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DFD20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820DFD28"))) PPC_WEAK_FUNC(sub_820DFD28);
PPC_FUNC_IMPL(__imp__sub_820DFD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820dfd78
	// bdzf 4*cr6+eq,0x820dfde0
	// bdzf 4*cr6+eq,0x820dfd5c
	// bdzf 4*cr6+eq,0x820dfe00
	// bne cr6,0x820dfdfc
	if (!ctx.cr6.eq) goto loc_820DFDFC;
loc_820DFD5C:
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// blr 
	return;
loc_820DFD78:
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// subf. r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r7,124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r5,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r5.s64;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
loc_820DFDA8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820dfdc0
	if (ctx.cr6.eq) goto loc_820DFDC0;
	// lwz r6,1468(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1468);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x820dfdd8
	if (ctx.cr6.eq) goto loc_820DFDD8;
loc_820DFDC0:
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820dfda8
	if (ctx.cr6.lt) goto loc_820DFDA8;
	// blr 
	return;
loc_820DFDD8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
loc_820DFDE0:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r8,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r8.u32);
	// blr 
	return;
loc_820DFDFC:
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
loc_820DFE00:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820DFE04"))) PPC_WEAK_FUNC(sub_820DFE04);
PPC_FUNC_IMPL(__imp__sub_820DFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820DFE08"))) PPC_WEAK_FUNC(sub_820DFE08);
PPC_FUNC_IMPL(__imp__sub_820DFE08) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820DFE50;
	sub_822AA648(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x822aa648
	ctx.lr = 0x820DFE5C;
	sub_822AA648(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x822aa648
	ctx.lr = 0x820DFE68;
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

__attribute__((alias("__imp__sub_820DFE80"))) PPC_WEAK_FUNC(sub_820DFE80);
PPC_FUNC_IMPL(__imp__sub_820DFE80) {
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
	// beq cr6,0x820dfea8
	if (ctx.cr6.eq) goto loc_820DFEA8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820DFEA8;
	sub_82183E40(ctx, base);
loc_820DFEA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820DFEC8"))) PPC_WEAK_FUNC(sub_820DFEC8);
PPC_FUNC_IMPL(__imp__sub_820DFEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820DFED0;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// stw r11,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r11.u32);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820DFF04;
	sub_822AA648(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x820DFF10;
	sub_822AA648(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x820DFF1C;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r28,r11,17136
	ctx.r28.s64 = ctx.r11.s64 + 17136;
	// addi r26,r10,-5052
	ctx.r26.s64 = ctx.r10.s64 + -5052;
	// li r25,9
	ctx.r25.s64 = 9;
	// li r27,1
	ctx.r27.s64 = 1;
loc_820DFF34:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e00b8
	if (ctx.cr6.eq) goto loc_820E00B8;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820e009c
	if (ctx.cr6.gt) goto loc_820E009C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820e007c
	// bdzf 4*cr6+eq,0x820dff78
	// bdzf 4*cr6+eq,0x820dffe4
	// bdzf 4*cr6+eq,0x820e009c
	// bne cr6,0x820dff98
	if (!ctx.cr6.eq) goto loc_820DFF98;
	// stb r27,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r27.u8);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// b 0x820e00b8
	goto loc_820E00B8;
loc_820DFF78:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r9.u32);
	// b 0x820e00b8
	goto loc_820E00B8;
loc_820DFF98:
	// addi r29,r31,900
	ctx.r29.s64 = ctx.r31.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef488
	ctx.lr = 0x820DFFA8;
	sub_820EF488(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4c0
	ctx.lr = 0x820DFFB4;
	sub_820EF4C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4e0
	ctx.lr = 0x820DFFC0;
	sub_820EF4E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x820DFFCC;
	sub_82156F00(ctx, base);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// li r5,304
	ctx.r5.s64 = 304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x820DFFDC;
	sub_82248A40(ctx, base);
	// stb r27,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r27.u8);
	// b 0x820e00b8
	goto loc_820E00B8;
loc_820DFFE4:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,424(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// bl 0x820b7dc0
	ctx.lr = 0x820E001C;
	sub_820B7DC0(ctx, base);
	// lwz r8,432(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lfs f11,416(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f11.f64 = double(temp.f32);
	// stb r27,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r27.u8);
	// stb r27,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r27.u8);
	// addi r29,r31,900
	ctx.r29.s64 = ctx.r31.s64 + 900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r7,432(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lfs f10,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// bl 0x820ef488
	ctx.lr = 0x820E004C;
	sub_820EF488(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef4b8
	ctx.lr = 0x820E0058;
	sub_820EF4B8(ctx, base);
	// addi r31,r31,596
	ctx.r31.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x820E0068;
	sub_820EF488(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4b8
	ctx.lr = 0x820E0074;
	sub_820EF4B8(ctx, base);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// b 0x820e00b8
	goto loc_820E00B8;
loc_820E007C:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r9.u32);
	// b 0x820e00b8
	goto loc_820E00B8;
loc_820E009C:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r31.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r9.u32);
loc_820E00B8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x820dff34
	if (!ctx.cr0.eq) goto loc_820DFF34;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820E00CC"))) PPC_WEAK_FUNC(sub_820E00CC);
PPC_FUNC_IMPL(__imp__sub_820E00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E00D0"))) PPC_WEAK_FUNC(sub_820E00D0);
PPC_FUNC_IMPL(__imp__sub_820E00D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E00D8;
	sub_82248784(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e01a8
	if (!ctx.cr6.gt) goto loc_820E01A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,17168
	ctx.r11.s64 = ctx.r11.s64 + 17168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lfs f30,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f29.f64 = double(temp.f32);
loc_820E0124:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f12,424(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// bl 0x82097388
	ctx.lr = 0x820E0160;
	sub_82097388(ctx, base);
	// stfs f1,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// stfs f9,404(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// ble cr6,0x820e0180
	if (!ctx.cr6.gt) goto loc_820E0180;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x820e018c
	goto loc_820E018C;
loc_820E0180:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x820e0190
	if (!ctx.cr6.lt) goto loc_820E0190;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_820E018C:
	// stfs f0,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
loc_820E0190:
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0124
	if (ctx.cr6.lt) goto loc_820E0124;
loc_820E01A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E01BC"))) PPC_WEAK_FUNC(sub_820E01BC);
PPC_FUNC_IMPL(__imp__sub_820E01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E01C0"))) PPC_WEAK_FUNC(sub_820E01C0);
PPC_FUNC_IMPL(__imp__sub_820E01C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E01C8;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249920
	ctx.lr = 0x820E01D0;
	sub_82249920(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820dfec8
	ctx.lr = 0x820E01E0;
	sub_820DFEC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e00d0
	ctx.lr = 0x820E01E8;
	sub_820E00D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mulli r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,10
	ctx.r30.s64 = ctx.r11.s64 + 10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f28,2136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f28.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f27,2132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,8608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8608);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9852(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9852);
	ctx.f31.f64 = double(temp.f32);
loc_820E0224:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbz r4,-6(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + -6);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820dfd28
	ctx.lr = 0x820E0234;
	sub_820DFD28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0320
	if (ctx.cr6.eq) goto loc_820E0320;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r29,r3,416
	ctx.r29.s64 = ctx.r3.s64 + 416;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r6,-2(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r4,432(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r6,432(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f1,8(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,416(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// fmuls f26,f2,f31
	ctx.f26.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,424(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// bl 0x82097388
	ctx.lr = 0x820E02D4;
	sub_82097388(ctx, base);
	// fmuls f13,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// stfs f1,420(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f13,404(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x820e02f4
	if (!ctx.cr6.gt) goto loc_820E02F4;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// b 0x820e0300
	goto loc_820E0300;
loc_820E02F4:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x820e0304
	if (!ctx.cr6.lt) goto loc_820E0304;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
loc_820E0300:
	// stfs f0,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
loc_820E0304:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82096e80
	ctx.lr = 0x820E030C;
	sub_82096E80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r11.u8);
	// bl 0x82097218
	ctx.lr = 0x820E031C;
	sub_82097218(ctx, base);
	// stb r3,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r3.u8);
loc_820E0320:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 7, ctx.xer);
	// blt cr6,0x820e0224
	if (ctx.cr6.lt) goto loc_820E0224;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820E033C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e034c
	if (ctx.cr6.eq) goto loc_820E034C;
	// bl 0x820af500
	ctx.lr = 0x820E034C;
	sub_820AF500(ctx, base);
loc_820E034C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820e033c
	if (!ctx.cr0.eq) goto loc_820E033C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8224996c
	ctx.lr = 0x820E0364;
	sub_8224996C(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E0368"))) PPC_WEAK_FUNC(sub_820E0368);
PPC_FUNC_IMPL(__imp__sub_820E0368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E0370;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,-8464(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8464);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e053c
	if (!ctx.cr6.eq) goto loc_820E053C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821847a8
	ctx.lr = 0x820E03A8;
	sub_821847A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821847a8
	ctx.lr = 0x820E03B8;
	sub_821847A8(ctx, base);
	// lbz r11,95(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r9,93(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// stb r8,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r8.u8);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x820e053c
	if (ctx.cr6.eq) goto loc_820E053C;
	// bl 0x82183078
	ctx.lr = 0x820E03EC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820E03F8;
	sub_821837D0(ctx, base);
	// lis r10,744
	ctx.r10.s64 = 48758784;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r9,r10,47662
	ctx.r9.u64 = ctx.r10.u64 | 47662;
	// mulli r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 * 88;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820e0414
	if (!ctx.cr6.gt) goto loc_820E0414;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820E0414:
	// bl 0x82080d68
	ctx.lr = 0x820E0418;
	sub_82080D68(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mulli r5,r11,88
	ctx.r5.s64 = ctx.r11.s64 * 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821847a8
	ctx.lr = 0x820E042C;
	sub_821847A8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e052c
	if (!ctx.cr6.gt) goto loc_820E052C;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// subfic r6,r31,-2
	ctx.xer.ca = ctx.r31.u32 <= 4294967294;
	ctx.r6.s64 = -2 - ctx.r31.s64;
loc_820E0444:
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// li r11,7
	ctx.r11.s64 = 7;
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lbz r3,-1(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r30,-2(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + -2);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stb r4,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r4.u8);
	// stb r3,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r3.u8);
	// stb r30,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r30.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,-2(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2, ctx.r11.u32);
loc_820E047C:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r4,9(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// stb r3,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r4,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r4.u8);
	// stb r3,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r9,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r9.u16);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// stb r3,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// lbz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r4,15(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r9,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r9.u16);
	// bdnz 0x820e047c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E047C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,88
	ctx.r8.s64 = ctx.r8.s64 + 88;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0444
	if (ctx.cr6.lt) goto loc_820E0444;
loc_820E052C:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// bl 0x821837d0
	ctx.lr = 0x820E053C;
	sub_821837D0(ctx, base);
loc_820E053C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E0544"))) PPC_WEAK_FUNC(sub_820E0544);
PPC_FUNC_IMPL(__imp__sub_820E0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0548"))) PPC_WEAK_FUNC(sub_820E0548);
PPC_FUNC_IMPL(__imp__sub_820E0548) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,800
	ctx.r10.s64 = 800;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E0564"))) PPC_WEAK_FUNC(sub_820E0564);
PPC_FUNC_IMPL(__imp__sub_820E0564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0568"))) PPC_WEAK_FUNC(sub_820E0568);
PPC_FUNC_IMPL(__imp__sub_820E0568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E0570;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c078
	ctx.lr = 0x820E057C;
	sub_8215C078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820E0584;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E0590;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820E0594;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820e05ac
	if (ctx.cr6.eq) goto loc_820E05AC;
	// li r3,18688
	ctx.r3.s64 = 18688;
	// bl 0x82183448
	ctx.lr = 0x820E05A8;
	sub_82183448(ctx, base);
	// b 0x820e05b4
	goto loc_820E05B4;
loc_820E05AC:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// bl 0x821845a0
	ctx.lr = 0x820E05B4;
	sub_821845A0(ctx, base);
loc_820E05B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e05dc
	if (ctx.cr6.eq) goto loc_820E05DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82095ce8
	ctx.lr = 0x820E05C4;
	sub_82095CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E05D0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820E05DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820E05E8;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E05F4"))) PPC_WEAK_FUNC(sub_820E05F4);
PPC_FUNC_IMPL(__imp__sub_820E05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E05F8"))) PPC_WEAK_FUNC(sub_820E05F8);
PPC_FUNC_IMPL(__imp__sub_820E05F8) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x820af5b8
	ctx.lr = 0x820E060C;
	sub_820AF5B8(ctx, base);
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

__attribute__((alias("__imp__sub_820E0620"))) PPC_WEAK_FUNC(sub_820E0620);
PPC_FUNC_IMPL(__imp__sub_820E0620) {
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
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,-5056(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5056);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,9250
	ctx.r3.s64 = ctx.r11.s64 + 9250;
	// bl 0x82105c18
	ctx.lr = 0x820E0668;
	sub_82105C18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x820e0684
	if (!ctx.cr6.gt) goto loc_820E0684;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_820E0684:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820E06A4"))) PPC_WEAK_FUNC(sub_820E06A4);
PPC_FUNC_IMPL(__imp__sub_820E06A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E06A8"))) PPC_WEAK_FUNC(sub_820E06A8);
PPC_FUNC_IMPL(__imp__sub_820E06A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E06BC"))) PPC_WEAK_FUNC(sub_820E06BC);
PPC_FUNC_IMPL(__imp__sub_820E06BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E06C0"))) PPC_WEAK_FUNC(sub_820E06C0);
PPC_FUNC_IMPL(__imp__sub_820E06C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mulli r7,r11,30
	ctx.r7.s64 = ctx.r11.s64 * 30;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r10,-8848(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8848, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E070C"))) PPC_WEAK_FUNC(sub_820E070C);
PPC_FUNC_IMPL(__imp__sub_820E070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0710"))) PPC_WEAK_FUNC(sub_820E0710);
PPC_FUNC_IMPL(__imp__sub_820E0710) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E0720"))) PPC_WEAK_FUNC(sub_820E0720);
PPC_FUNC_IMPL(__imp__sub_820E0720) {
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
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,796(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 796, temp.u32);
	// bl 0x821142a0
	ctx.lr = 0x820E0748;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0804
	if (ctx.cr6.eq) goto loc_820E0804;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,-8540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,2224(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2224);
	// beq cr6,0x820e07cc
	if (ctx.cr6.eq) goto loc_820E07CC;
	// lwz r10,1688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1688);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e07cc
	if (ctx.cr6.eq) goto loc_820E07CC;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// bge cr6,0x820e07b8
	if (!ctx.cr6.lt) goto loc_820E07B8;
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
loc_820E07B8:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e07cc
	if (!ctx.cr6.lt) goto loc_820E07CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820E07CC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,2224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2224, ctx.r11.u32);
	// stw r10,2228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2228, ctx.r10.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82114460
	ctx.lr = 0x820E07E4;
	sub_82114460(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-31808(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31808, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E0804:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-31808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31808, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E0824"))) PPC_WEAK_FUNC(sub_820E0824);
PPC_FUNC_IMPL(__imp__sub_820E0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0828"))) PPC_WEAK_FUNC(sub_820E0828);
PPC_FUNC_IMPL(__imp__sub_820E0828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820E0830;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-5052
	ctx.r26.s64 = ctx.r11.s64 + -5052;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_820E0848:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0890
	if (ctx.cr6.eq) goto loc_820E0890;
	// stw r29,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r29.u32);
	// addi r30,r31,900
	ctx.r30.s64 = ctx.r31.s64 + 900;
	// stw r29,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r29.u32);
	// stw r27,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r27.u32);
	// bl 0x820ef488
	ctx.lr = 0x820E0878;
	sub_820EF488(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x821847a8
	ctx.lr = 0x820E0888;
	sub_821847A8(ctx, base);
	// lwz r3,1908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// bl 0x820a6288
	ctx.lr = 0x820E0890;
	sub_820A6288(ctx, base);
loc_820E0890:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0848
	if (ctx.cr6.lt) goto loc_820E0848;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820E08A8"))) PPC_WEAK_FUNC(sub_820E08A8);
PPC_FUNC_IMPL(__imp__sub_820E08A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E08B0;
	sub_82248784(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,9200
	ctx.r30.s64 = 9200;
	// li r28,2
	ctx.r28.s64 = 2;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8956);
	ctx.f30.f64 = double(temp.f32);
loc_820E08DC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0934
	if (ctx.cr6.eq) goto loc_820E0934;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f23b8
	ctx.lr = 0x820E08F0;
	sub_820F23B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3cf8
	ctx.lr = 0x820E0908;
	sub_820D3CF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2348
	ctx.lr = 0x820E0924;
	sub_820F2348(ctx, base);
	// stfs f31,416(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f30,420(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f31,424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
loc_820E0934:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x820e08dc
	if (!ctx.cr0.eq) goto loc_820E08DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E0954"))) PPC_WEAK_FUNC(sub_820E0954);
PPC_FUNC_IMPL(__imp__sub_820E0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0958"))) PPC_WEAK_FUNC(sub_820E0958);
PPC_FUNC_IMPL(__imp__sub_820E0958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E0960;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249928
	ctx.lr = 0x820E0968;
	sub_82249928(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f28,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lfs f30,10388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10388);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
loc_820E09A0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0a3c
	if (ctx.cr6.eq) goto loc_820E0A3C;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097288
	ctx.lr = 0x820E09B8;
	sub_82097288(ctx, base);
	// lwz r11,1908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e09e8
	if (!ctx.cr6.lt) goto loc_820E09E8;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r4,r11,8060
	ctx.r4.s64 = ctx.r11.s64 + 8060;
	// b 0x820e0a00
	goto loc_820E0A00;
loc_820E09E8:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820e0a00
	if (!ctx.cr6.lt) goto loc_820E0A00;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r4,r11,8050
	ctx.r4.s64 = ctx.r11.s64 + 8050;
loc_820E0A00:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820e0a0c
	if (!ctx.cr6.eq) goto loc_820E0A0C;
	// addi r4,r30,8000
	ctx.r4.s64 = ctx.r30.s64 + 8000;
loc_820E0A0C:
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2348
	ctx.lr = 0x820E0A24;
	sub_820F2348(ctx, base);
	// lwz r11,1248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E0A38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f28,1300(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
loc_820E0A3C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e09a0
	if (ctx.cr6.lt) goto loc_820E09A0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// bl 0x82104e28
	ctx.lr = 0x820E0A5C;
	sub_82104E28(ctx, base);
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e0a84
	if (ctx.cr6.eq) goto loc_820E0A84;
	// bl 0x820ae430
	ctx.lr = 0x820E0A6C;
	sub_820AE430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E0A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r9.u32);
loc_820E0A84:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-4900(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820E0A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-31808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31808, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x820E0AB4;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E0AB8"))) PPC_WEAK_FUNC(sub_820E0AB8);
PPC_FUNC_IMPL(__imp__sub_820E0AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E0AC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820d40d0
	ctx.lr = 0x820E0ACC;
	sub_820D40D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// bl 0x82104e28
	ctx.lr = 0x820E0AD8;
	sub_82104E28(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820E0AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// addi r3,r11,-5052
	ctx.r3.s64 = ctx.r11.s64 + -5052;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// lis r6,-32190
	ctx.r6.s64 = -2109603840;
	// stw r11,-5000(r7)
	PPC_STORE_U32(ctx.r7.u32 + -5000, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,792(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,796(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 796, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820E0B20:
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e0bb0
	if (ctx.cr6.eq) goto loc_820E0BB0;
	// lwz r7,1936(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1936);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e0bb0
	if (ctx.cr6.eq) goto loc_820E0BB0;
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e0ba8
	if (!ctx.cr6.gt) goto loc_820E0BA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r7,2672
	ctx.r8.s64 = ctx.r7.s64 + 2672;
loc_820E0B50:
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r10,84(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820e0b70
	if (!ctx.cr6.eq) goto loc_820E0B70;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820e0b7c
	goto loc_820E0B7C;
loc_820E0B70:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820E0B7C:
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r29,r11,48
	ctx.r29.s64 = ctx.r11.s64 + 48;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// std r10,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// lwz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0b50
	if (ctx.cr6.lt) goto loc_820E0B50;
loc_820E0BA8:
	// stfs f0,2116(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2116, temp.u32);
	// stfs f0,2152(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2152, temp.u32);
loc_820E0BB0:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0b20
	if (ctx.cr6.lt) goto loc_820E0B20;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e0be8
	if (ctx.cr6.eq) goto loc_820E0BE8;
	// bl 0x820ae430
	ctx.lr = 0x820E0BD0;
	sub_820AE430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E0BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
loc_820E0BE8:
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E0BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E0C04"))) PPC_WEAK_FUNC(sub_820E0C04);
PPC_FUNC_IMPL(__imp__sub_820E0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0C08"))) PPC_WEAK_FUNC(sub_820E0C08);
PPC_FUNC_IMPL(__imp__sub_820E0C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820E0C10;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f0,796(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 796, temp.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,-31808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31808, ctx.r25.u32);
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// bl 0x820e08a8
	ctx.lr = 0x820E0C44;
	sub_820E08A8(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r11,-9772(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0c84
	if (ctx.cr6.eq) goto loc_820E0C84;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820E0C64;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0c84
	if (ctx.cr6.eq) goto loc_820E0C84;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0c84
	if (ctx.cr6.eq) goto loc_820E0C84;
	// addic. r11,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r11.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e0c84
	if (ctx.cr0.eq) goto loc_820E0C84;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_820E0C84:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r26,r11,-5052
	ctx.r26.s64 = ctx.r11.s64 + -5052;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_820E0C90:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0d04
	if (ctx.cr6.eq) goto loc_820E0D04;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x820ef4b8
	ctx.lr = 0x820E0CA8;
	sub_820EF4B8(ctx, base);
	// stw r27,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r27.u32);
	// addi r30,r31,1248
	ctx.r30.s64 = ctx.r31.s64 + 1248;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820E0CC0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0cd8
	if (ctx.cr6.eq) goto loc_820E0CD8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0cd8
	if (ctx.cr6.eq) goto loc_820E0CD8;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
loc_820E0CD8:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820E0CE8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0d04
	if (ctx.cr6.eq) goto loc_820E0D04;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0d04
	if (ctx.cr6.eq) goto loc_820E0D04;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x820afa08
	ctx.lr = 0x820E0D04;
	sub_820AFA08(ctx, base);
loc_820E0D04:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0c90
	if (ctx.cr6.lt) goto loc_820E0C90;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,50
	ctx.r5.s64 = 50;
	// lwz r6,-5056(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -5056);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,9250
	ctx.r3.s64 = ctx.r11.s64 + 9250;
	// bl 0x82105c18
	ctx.lr = 0x820E0D44;
	sub_82105C18(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x820e0d5c
	if (!ctx.cr6.gt) goto loc_820E0D5C;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
loc_820E0D5C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// lwz r31,-2032(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2032);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e0d8c
	if (ctx.cr6.eq) goto loc_820E0D8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82127a50
	ctx.lr = 0x820E0D84;
	sub_82127A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82129ea8
	ctx.lr = 0x820E0D8C;
	sub_82129EA8(ctx, base);
loc_820E0D8C:
	// bl 0x821142a0
	ctx.lr = 0x820E0D90;
	sub_821142A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0df4
	if (ctx.cr6.eq) goto loc_820E0DF4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r9,2228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2228);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// stw r9,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r9.u32);
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0df4
	if (ctx.cr6.eq) goto loc_820E0DF4;
	// lwz r30,1688(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1688);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e0df4
	if (ctx.cr6.eq) goto loc_820E0DF4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r9,2228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2228, ctx.r9.u32);
	// bl 0x82114410
	ctx.lr = 0x820E0DDC;
	sub_82114410(ctx, base);
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// bl 0x82114460
	ctx.lr = 0x820E0DF4;
	sub_82114460(ctx, base);
loc_820E0DF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820E0E00"))) PPC_WEAK_FUNC(sub_820E0E00);
PPC_FUNC_IMPL(__imp__sub_820E0E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E0E08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f13,8328(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lfs f11,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
loc_820E0E38:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,1936(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// lwz r11,1028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1028);
	// lfs f12,868(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0e6c
	if (ctx.cr6.eq) goto loc_820E0E6C;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// b 0x820e0e70
	goto loc_820E0E70;
loc_820E0E6C:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_820E0E70:
	// fmsubs f0,f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820e0e80
	if (ctx.cr6.lt) goto loc_820E0E80;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
loc_820E0E80:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820e0e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E0E38;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e0ea8
	if (ctx.cr6.eq) goto loc_820E0EA8;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e0ea8
	if (ctx.cr6.eq) goto loc_820E0EA8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820E0EA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e0fa8
	if (ctx.cr6.eq) goto loc_820E0FA8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x820e0ab8
	ctx.lr = 0x820E0EC0;
	sub_820E0AB8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-9772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0f00
	if (ctx.cr6.eq) goto loc_820E0F00;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820E0EE0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0f00
	if (ctx.cr6.eq) goto loc_820E0F00;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0f00
	if (ctx.cr6.eq) goto loc_820E0F00;
	// addic. r11,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r11.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e0f00
	if (ctx.cr0.eq) goto loc_820E0F00;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_820E0F00:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820E0F04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0f68
	if (ctx.cr6.eq) goto loc_820E0F68;
	// addi r31,r11,1248
	ctx.r31.s64 = ctx.r11.s64 + 1248;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820E0F24;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0f3c
	if (ctx.cr6.eq) goto loc_820E0F3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0f3c
	if (ctx.cr6.eq) goto loc_820E0F3C;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_820E0F3C:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820E0F4C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0f68
	if (ctx.cr6.eq) goto loc_820E0F68;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0f68
	if (ctx.cr6.eq) goto loc_820E0F68;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820afa08
	ctx.lr = 0x820E0F68;
	sub_820AFA08(ctx, base);
loc_820E0F68:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e0f04
	if (ctx.cr6.lt) goto loc_820E0F04;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0f8c
	if (ctx.cr6.eq) goto loc_820E0F8C;
	// bl 0x82127b98
	ctx.lr = 0x820E0F8C;
	sub_82127B98(ctx, base);
loc_820E0F8C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// bl 0x8212d7d0
	ctx.lr = 0x820E0F9C;
	sub_8212D7D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E0FA8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E0FB4"))) PPC_WEAK_FUNC(sub_820E0FB4);
PPC_FUNC_IMPL(__imp__sub_820E0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E0FB8"))) PPC_WEAK_FUNC(sub_820E0FB8);
PPC_FUNC_IMPL(__imp__sub_820E0FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E0FC0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0fe8
	if (ctx.cr6.eq) goto loc_820E0FE8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82127bf0
	ctx.lr = 0x820E0FE8;
	sub_82127BF0(ctx, base);
loc_820E0FE8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820e1198
	if (ctx.cr6.gt) goto loc_820E1198;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820e10a8
	// bdzf 4*cr6+eq,0x820e1158
	// bne cr6,0x820e1184
	if (!ctx.cr6.eq) goto loc_820E1184;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e1028
	if (!ctx.cr6.eq) goto loc_820E1028;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1198
	if (ctx.cr6.eq) goto loc_820E1198;
	// b 0x820e1030
	goto loc_820E1030;
loc_820E1028:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1094
	if (ctx.cr6.eq) goto loc_820E1094;
loc_820E1030:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820E1048:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e106c
	if (ctx.cr6.eq) goto loc_820E106C;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9300
	ctx.r4.s64 = 9300;
	// bl 0x820f2348
	ctx.lr = 0x820E106C;
	sub_820F2348(ctx, base);
loc_820E106C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e1048
	if (ctx.cr6.lt) goto loc_820E1048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E1094:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e0620
	ctx.lr = 0x820E109C;
	sub_820E0620(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E10A8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfs f13,8328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
loc_820E10C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,1936(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1936);
	// lwz r10,1028(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1028);
	// lfs f12,868(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e10f8
	if (ctx.cr6.eq) goto loc_820E10F8;
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// b 0x820e10fc
	goto loc_820E10FC;
loc_820E10F8:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_820E10FC:
	// fmsubs f0,f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x820e1124
	if (!ctx.cr6.lt) goto loc_820E1124;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820e10c4
	if (ctx.cr6.lt) goto loc_820E10C4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E1124:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2084);
	// bl 0x82104e28
	ctx.lr = 0x820E1130;
	sub_82104E28(ctx, base);
	// bl 0x820d40d0
	ctx.lr = 0x820E1134;
	sub_820D40D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e0958
	ctx.lr = 0x820E113C;
	sub_820E0958(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e0720
	ctx.lr = 0x820E1144;
	sub_820E0720(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E1158:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e0e00
	ctx.lr = 0x820E1160;
	sub_820E0E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1198
	if (ctx.cr6.eq) goto loc_820E1198;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e0828
	ctx.lr = 0x820E1170;
	sub_820E0828(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E1184:
	// bl 0x8212d8c8
	ctx.lr = 0x820E1188;
	sub_8212D8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1198
	if (ctx.cr6.eq) goto loc_820E1198;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_820E1198:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E11A4"))) PPC_WEAK_FUNC(sub_820E11A4);
PPC_FUNC_IMPL(__imp__sub_820E11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E11A8"))) PPC_WEAK_FUNC(sub_820E11A8);
PPC_FUNC_IMPL(__imp__sub_820E11A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r8,r10,17264
	ctx.r8.s64 = ctx.r10.s64 + 17264;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E11DC"))) PPC_WEAK_FUNC(sub_820E11DC);
PPC_FUNC_IMPL(__imp__sub_820E11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E11E0"))) PPC_WEAK_FUNC(sub_820E11E0);
PPC_FUNC_IMPL(__imp__sub_820E11E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9888
	ctx.r10.s64 = ctx.r11.s64 + 9888;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E11F0"))) PPC_WEAK_FUNC(sub_820E11F0);
PPC_FUNC_IMPL(__imp__sub_820E11F0) {
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
	ctx.lr = 0x820E1200;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820e1224
	if (ctx.cr6.eq) goto loc_820E1224;
	// bl 0x8215bec8
	ctx.lr = 0x820E1210;
	sub_8215BEC8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820E121C;
	sub_8215BEC8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r10.u8);
loc_820E1224:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1234"))) PPC_WEAK_FUNC(sub_820E1234);
PPC_FUNC_IMPL(__imp__sub_820E1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1238"))) PPC_WEAK_FUNC(sub_820E1238);
PPC_FUNC_IMPL(__imp__sub_820E1238) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8215bec8
	ctx.lr = 0x820E1250;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E1278"))) PPC_WEAK_FUNC(sub_820E1278);
PPC_FUNC_IMPL(__imp__sub_820E1278) {
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
	ctx.lr = 0x820E1290;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820e12a4
	if (!ctx.cr6.eq) goto loc_820E12A4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x820e1308
	goto loc_820E1308;
loc_820E12A4:
	// bl 0x8215bec8
	ctx.lr = 0x820E12A8;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820e12e0
	if (!ctx.cr6.eq) goto loc_820E12E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E12E0:
	// bl 0x8215bec8
	ctx.lr = 0x820E12E4;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e1304
	if (ctx.cr6.eq) goto loc_820E1304;
	// bl 0x8215bec8
	ctx.lr = 0x820E12F4;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,15
	ctx.r11.s64 = 15;
	// bne cr6,0x820e1308
	if (!ctx.cr6.eq) goto loc_820E1308;
loc_820E1304:
	// li r11,19
	ctx.r11.s64 = 19;
loc_820E1308:
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

__attribute__((alias("__imp__sub_820E1320"))) PPC_WEAK_FUNC(sub_820E1320);
PPC_FUNC_IMPL(__imp__sub_820E1320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E1328;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820E133C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x820E1348;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1390
	if (!ctx.cr6.eq) goto loc_820E1390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208ecd0
	ctx.lr = 0x820E1358;
	sub_8208ECD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1390
	if (!ctx.cr6.eq) goto loc_820E1390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0e0
	ctx.lr = 0x820E1368;
	sub_8208E0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1390
	if (!ctx.cr6.eq) goto loc_820E1390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x820E1378;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1390
	if (!ctx.cr6.eq) goto loc_820E1390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0c8
	ctx.lr = 0x820E1388;
	sub_8208E0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1394
	if (ctx.cr6.eq) goto loc_820E1394;
loc_820E1390:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_820E1394:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e133c
	if (ctx.cr6.lt) goto loc_820E133C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x820e13b8
	if (ctx.cr6.eq) goto loc_820E13B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E13B8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820E13C0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208ecd0
	ctx.lr = 0x820E13CC;
	sub_8208ECD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e13e4
	if (!ctx.cr6.eq) goto loc_820E13E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0e0
	ctx.lr = 0x820E13DC;
	sub_8208E0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1404
	if (ctx.cr6.eq) goto loc_820E1404;
loc_820E13E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x820E13EC;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1404
	if (!ctx.cr6.eq) goto loc_820E1404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0c8
	ctx.lr = 0x820E13FC;
	sub_8208E0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1410
	if (ctx.cr6.eq) goto loc_820E1410;
loc_820E1404:
	// addi r4,r29,8200
	ctx.r4.s64 = ctx.r29.s64 + 8200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f03b0
	ctx.lr = 0x820E1410;
	sub_820F03B0(ctx, base);
loc_820E1410:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e13c0
	if (ctx.cr6.lt) goto loc_820E13C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E1430"))) PPC_WEAK_FUNC(sub_820E1430);
PPC_FUNC_IMPL(__imp__sub_820E1430) {
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
	// bl 0x8215bec8
	ctx.lr = 0x820E1444;
	sub_8215BEC8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r31,-4964(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4964);
	// bl 0x8215bec8
	ctx.lr = 0x820E1458;
	sub_8215BEC8(ctx, base);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820E1460;
	sub_8215BEC8(ctx, base);
	// lwz r9,684(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x820e1470
	if (!ctx.cr6.eq) goto loc_820E1470;
	// bl 0x820cb338
	ctx.lr = 0x820E1470;
	sub_820CB338(ctx, base);
loc_820E1470:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E1484"))) PPC_WEAK_FUNC(sub_820E1484);
PPC_FUNC_IMPL(__imp__sub_820E1484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1488"))) PPC_WEAK_FUNC(sub_820E1488);
PPC_FUNC_IMPL(__imp__sub_820E1488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E1490;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x820E149C;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e14e8
	if (!ctx.cr6.eq) goto loc_820E14E8;
	// bl 0x8215bd60
	ctx.lr = 0x820E14AC;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e14c8
	if (!ctx.cr6.eq) goto loc_820E14C8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e14e8
	if (!ctx.cr6.eq) goto loc_820E14E8;
loc_820E14C8:
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r10,-8608(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8608);
	// lwz r11,-4964(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4964);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,-8608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8608, ctx.r10.u32);
	// stw r11,-4964(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4964, ctx.r11.u32);
loc_820E14E8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e14fc
	if (ctx.cr6.eq) goto loc_820E14FC;
	// bl 0x820d5c28
	ctx.lr = 0x820E14FC;
	sub_820D5C28(ctx, base);
loc_820E14FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x820e163c
	if (ctx.cr6.gt) goto loc_820E163C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820e15f4
	// bdzf 4*cr6+eq,0x820e1618
	// bdzf 4*cr6+eq,0x820e16b0
	// bdzf 4*cr6+eq,0x820e16c0
	// bdzf 4*cr6+eq,0x820e1718
	// bne cr6,0x820e174c
	if (!ctx.cr6.eq) goto loc_820E174C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E1540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e163c
	if (ctx.cr6.eq) goto loc_820E163C;
	// bl 0x8215bd60
	ctx.lr = 0x820E154C;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e1560
	if (ctx.cr6.eq) goto loc_820E1560;
	// lwz r3,-2032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2032);
	// bl 0x82127aa0
	ctx.lr = 0x820E1560;
	sub_82127AA0(ctx, base);
loc_820E1560:
	// bl 0x8215bec8
	ctx.lr = 0x820E1564;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820e1578
	if (!ctx.cr6.eq) goto loc_820E1578;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820e1638
	goto loc_820E1638;
loc_820E1578:
	// bl 0x8215bec8
	ctx.lr = 0x820E157C;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820e15b0
	if (ctx.cr6.eq) goto loc_820E15B0;
	// bl 0x8215bec8
	ctx.lr = 0x820E158C;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e15b0
	if (ctx.cr6.eq) goto loc_820E15B0;
	// bl 0x8215bec8
	ctx.lr = 0x820E159C;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e15b0
	if (ctx.cr6.eq) goto loc_820E15B0;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x820e1638
	goto loc_820E1638;
loc_820E15B0:
	// bl 0x8215bec8
	ctx.lr = 0x820E15B4;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e15d0
	if (ctx.cr6.eq) goto loc_820E15D0;
	// bl 0x8215bec8
	ctx.lr = 0x820E15C4;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e1634
	if (!ctx.cr6.eq) goto loc_820E1634;
loc_820E15D0:
	// bl 0x8215bec8
	ctx.lr = 0x820E15D4;
	sub_8215BEC8(ctx, base);
	// lbz r11,109(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 109);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// b 0x820e163c
	goto loc_820E163C;
loc_820E15F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E1608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e163c
	if (ctx.cr6.eq) goto loc_820E163C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820e1638
	goto loc_820E1638;
loc_820E1618:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_820E1624:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E162C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e163c
	if (ctx.cr6.eq) goto loc_820E163C;
loc_820E1634:
	// li r11,4
	ctx.r11.s64 = 4;
loc_820E1638:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820E163C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e1758
	if (!ctx.cr6.eq) goto loc_820E1758;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E165C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1758
	if (ctx.cr6.eq) goto loc_820E1758;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x820e1758
	if (ctx.cr6.eq) goto loc_820E1758;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E1684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-2032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2032);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8209eda0
	ctx.lr = 0x820E1698;
	sub_8209EDA0(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-8736(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8736, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820E16B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820e1624
	goto loc_820E1624;
loc_820E16C0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820E16D0;
	sub_8209C630(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820f2688
	ctx.lr = 0x820E16D8;
	sub_820F2688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f2640
	ctx.lr = 0x820E16F0;
	sub_820F2640(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
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
	// bl 0x820f28e0
	ctx.lr = 0x820E170C;
	sub_820F28E0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x820e163c
	goto loc_820E163C;
loc_820E1718:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820E1728;
	sub_8209C630(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820e163c
	if (!ctx.cr6.gt) goto loc_820E163C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e163c
	if (ctx.cr6.eq) goto loc_820E163C;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x820e1638
	goto loc_820E1638;
loc_820E174C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820E1758:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E1764"))) PPC_WEAK_FUNC(sub_820E1764);
PPC_FUNC_IMPL(__imp__sub_820E1764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1768"))) PPC_WEAK_FUNC(sub_820E1768);
PPC_FUNC_IMPL(__imp__sub_820E1768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E1770;
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,8328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f31.f64 = double(temp.f32);
	// li r30,8200
	ctx.r30.s64 = 8200;
	// lfs f30,17324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17324);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
loc_820E17A8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x820e180c
	if (ctx.cr6.eq) goto loc_820E180C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208ecd0
	ctx.lr = 0x820E17C4;
	sub_8208ECD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e17dc
	if (!ctx.cr6.eq) goto loc_820E17DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0e0
	ctx.lr = 0x820E17D4;
	sub_8208E0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e17fc
	if (ctx.cr6.eq) goto loc_820E17FC;
loc_820E17DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x820E17E4;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e17fc
	if (!ctx.cr6.eq) goto loc_820E17FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0c8
	ctx.lr = 0x820E17F4;
	sub_8208E0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1848
	if (ctx.cr6.eq) goto loc_820E1848;
loc_820E17FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f03b0
	ctx.lr = 0x820E1808;
	sub_820F03B0(ctx, base);
	// b 0x820e1848
	goto loc_820E1848;
loc_820E180C:
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// lfs f13,868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1838
	if (ctx.cr6.eq) goto loc_820E1838;
	// lhz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// b 0x820e183c
	goto loc_820E183C;
loc_820E1838:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_820E183C:
	// fmsubs f0,f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e1874
	if (!ctx.cr6.lt) goto loc_820E1874;
loc_820E1848:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r30,-8200
	ctx.r11.s64 = ctx.r30.s64 + -8200;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820e17a8
	if (ctx.cr6.lt) goto loc_820E17A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
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
loc_820E1874:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_820E188C"))) PPC_WEAK_FUNC(sub_820E188C);
PPC_FUNC_IMPL(__imp__sub_820E188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1890"))) PPC_WEAK_FUNC(sub_820E1890);
PPC_FUNC_IMPL(__imp__sub_820E1890) {
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
	// bl 0x8215bec8
	ctx.lr = 0x820E18A0;
	sub_8215BEC8(ctx, base);
	// lbz r11,109(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 109);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e1954
	if (ctx.cr6.eq) goto loc_820E1954;
	// lwz r10,1936(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// lwz r11,1028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e18ec
	if (ctx.cr6.eq) goto loc_820E18EC;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// b 0x820e18f4
	goto loc_820E18F4;
loc_820E18EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_820E18F4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,-8600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8600);
	// lfs f0,8328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e191c
	if (ctx.cr6.eq) goto loc_820E191C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3692);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820e1924
	goto loc_820E1924;
loc_820E191C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,17328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17328);
	ctx.f13.f64 = double(temp.f32);
loc_820E1924:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e1968
	if (ctx.cr6.lt) goto loc_820E1968;
	// bl 0x820b0c00
	ctx.lr = 0x820E1938;
	sub_820B0C00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e1954
	if (ctx.cr6.eq) goto loc_820E1954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E1954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E1954:
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
loc_820E1968:
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

__attribute__((alias("__imp__sub_820E197C"))) PPC_WEAK_FUNC(sub_820E197C);
PPC_FUNC_IMPL(__imp__sub_820E197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1980"))) PPC_WEAK_FUNC(sub_820E1980);
PPC_FUNC_IMPL(__imp__sub_820E1980) {
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
	// bl 0x8215bec8
	ctx.lr = 0x820E1994;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e19b8
	if (!ctx.cr6.eq) goto loc_820E19B8;
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
loc_820E19B8:
	// bl 0x8215bec8
	ctx.lr = 0x820E19BC;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820e19e0
	if (!ctx.cr6.eq) goto loc_820E19E0;
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
loc_820E19E0:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-4972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4972);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x820e19f8
	if (!ctx.cr6.lt) goto loc_820E19F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4972, ctx.r11.u32);
loc_820E19F8:
	// bl 0x8215bd60
	ctx.lr = 0x820E19FC;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e1a28
	if (ctx.cr6.eq) goto loc_820E1A28;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,-4972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4972);
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820e1a28
	if (!ctx.cr6.gt) goto loc_820E1A28;
	// stw r11,-4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4972, ctx.r11.u32);
loc_820E1A28:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-4964(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// bl 0x8215bec8
	ctx.lr = 0x820E1A34;
	sub_8215BEC8(ctx, base);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// bl 0x8212d3b8
	ctx.lr = 0x820E1A3C;
	sub_8212D3B8(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1A58"))) PPC_WEAK_FUNC(sub_820E1A58);
PPC_FUNC_IMPL(__imp__sub_820E1A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e1a70
	if (ctx.cr6.eq) goto loc_820E1A70;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820E1A70:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820e1ac4
	if (ctx.cr6.eq) goto loc_820E1AC4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1ac4
	if (ctx.cr6.eq) goto loc_820E1AC4;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x820e1aac
	if (!ctx.cr6.eq) goto loc_820E1AAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_820E1AAC:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x820e1ac4
	if (!ctx.cr6.eq) goto loc_820E1AC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_820E1AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1ACC"))) PPC_WEAK_FUNC(sub_820E1ACC);
PPC_FUNC_IMPL(__imp__sub_820E1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1AD0"))) PPC_WEAK_FUNC(sub_820E1AD0);
PPC_FUNC_IMPL(__imp__sub_820E1AD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1AEC"))) PPC_WEAK_FUNC(sub_820E1AEC);
PPC_FUNC_IMPL(__imp__sub_820E1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1AF0"))) PPC_WEAK_FUNC(sub_820E1AF0);
PPC_FUNC_IMPL(__imp__sub_820E1AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E1AF8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e1ba4
	if (!ctx.cr6.eq) goto loc_820E1BA4;
	// bl 0x820e1488
	ctx.lr = 0x820E1B10;
	sub_820E1488(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1b80
	if (!ctx.cr6.eq) goto loc_820E1B80;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e1b80
	if (!ctx.cr6.eq) goto loc_820E1B80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E1B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e1b68
	if (ctx.cr6.eq) goto loc_820E1B68;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8504(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8504);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e1b64
	if (ctx.cr6.eq) goto loc_820E1B64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d5c88
	ctx.lr = 0x820E1B5C;
	sub_820D5C88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d5ce8
	ctx.lr = 0x820E1B64;
	sub_820D5CE8(ctx, base);
loc_820E1B64:
	// bl 0x820cb5a0
	ctx.lr = 0x820E1B68;
	sub_820CB5A0(ctx, base);
loc_820E1B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e1278
	ctx.lr = 0x820E1B70;
	sub_820E1278(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e1b80
	if (!ctx.cr6.eq) goto loc_820E1B80;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_820E1B80:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e1ba4
	if (ctx.cr6.eq) goto loc_820E1BA4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x820e1ba4
	if (!ctx.cr6.eq) goto loc_820E1BA4;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_820E1BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E1BAC"))) PPC_WEAK_FUNC(sub_820E1BAC);
PPC_FUNC_IMPL(__imp__sub_820E1BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1BB0"))) PPC_WEAK_FUNC(sub_820E1BB0);
PPC_FUNC_IMPL(__imp__sub_820E1BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E1BB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e1c18
	if (!ctx.cr6.eq) goto loc_820E1C18;
	// bl 0x82182e90
	ctx.lr = 0x820E1BD4;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820E1BDC;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E1BE8;
	sub_821837D0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82080000
	ctx.lr = 0x820E1BF0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e1c04
	if (ctx.cr6.eq) goto loc_820E1C04;
	// bl 0x820e2c70
	ctx.lr = 0x820E1BFC;
	sub_820E2C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820e1c08
	goto loc_820E1C08;
loc_820E1C04:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820E1C08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e2c58
	ctx.lr = 0x820E1C10;
	sub_820E2C58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E1C18;
	sub_821837D0(ctx, base);
loc_820E1C18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E1C20"))) PPC_WEAK_FUNC(sub_820E1C20);
PPC_FUNC_IMPL(__imp__sub_820E1C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820E1C30:
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e1c30
	if (!ctx.cr6.eq) goto loc_820E1C30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1C44"))) PPC_WEAK_FUNC(sub_820E1C44);
PPC_FUNC_IMPL(__imp__sub_820E1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1C48"))) PPC_WEAK_FUNC(sub_820E1C48);
PPC_FUNC_IMPL(__imp__sub_820E1C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E1C50;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e1c88
	if (!ctx.cr6.eq) goto loc_820E1C88;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a360
	ctx.lr = 0x820E1C74;
	sub_8218A360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e1c88
	if (!ctx.cr6.eq) goto loc_820E1C88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E1C88:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820e1cc8
	if (!ctx.cr6.gt) goto loc_820E1CC8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E1C9C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x820e1c48
	ctx.lr = 0x820E1CAC;
	sub_820E1C48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e1ccc
	if (!ctx.cr6.eq) goto loc_820E1CCC;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820e1c9c
	if (ctx.cr6.lt) goto loc_820E1C9C;
loc_820E1CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E1CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E1CD4"))) PPC_WEAK_FUNC(sub_820E1CD4);
PPC_FUNC_IMPL(__imp__sub_820E1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1CD8"))) PPC_WEAK_FUNC(sub_820E1CD8);
PPC_FUNC_IMPL(__imp__sub_820E1CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E1CE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// bl 0x822aa648
	ctx.lr = 0x820E1CF4;
	sub_822AA648(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820e1d28
	if (!ctx.cr6.gt) goto loc_820E1D28;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E1D08:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x820e1cd8
	ctx.lr = 0x820E1D14;
	sub_820E1CD8(ctx, base);
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820e1d08
	if (ctx.cr6.lt) goto loc_820E1D08;
loc_820E1D28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E1D30"))) PPC_WEAK_FUNC(sub_820E1D30);
PPC_FUNC_IMPL(__imp__sub_820E1D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E1D38;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,17336
	ctx.r9.s64 = ctx.r11.s64 + 17336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x820e1db0
	if (!ctx.cr6.gt) goto loc_820E1DB0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_820E1D64:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1d94
	if (ctx.cr6.eq) goto loc_820E1D94;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e1d94
	if (ctx.cr6.eq) goto loc_820E1D94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E1D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E1D94:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820e1d64
	if (ctx.cr6.lt) goto loc_820E1D64;
loc_820E1DB0:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e1dc4
	if (ctx.cr6.eq) goto loc_820E1DC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820E1DC4;
	sub_82183E40(ctx, base);
loc_820E1DC4:
	// stw r28,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E1DD0"))) PPC_WEAK_FUNC(sub_820E1DD0);
PPC_FUNC_IMPL(__imp__sub_820E1DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r1,48
	ctx.r11.s64 = ctx.r1.s64 + 48;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// lfs f10,48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lfs f12,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f13,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f7.f64 = double(temp.f32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f9,f7
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f4,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f9,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fsubs f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fsubs f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f6,-32(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f1,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f6,f3,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fmuls f5,f2,f7
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f8,52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f8,68(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fadds f4,f1,f6
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f4,-28(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f3,-24(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// ld r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f10,96(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f8,100(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f9,104(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f10,112(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f8,116(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// std r6,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r6.u64);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// std r7,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1F14"))) PPC_WEAK_FUNC(sub_820E1F14);
PPC_FUNC_IMPL(__imp__sub_820E1F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E1F18"))) PPC_WEAK_FUNC(sub_820E1F18);
PPC_FUNC_IMPL(__imp__sub_820E1F18) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// neg r7,r3
	ctx.r7.s64 = -ctx.r3.s64;
	// lfs f0,17332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17332);
	ctx.f0.f64 = double(temp.f32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f12,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,17340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17340);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_820E1F68:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820E1F84:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e1f9c
	if (!ctx.cr6.lt) goto loc_820E1F9C;
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// b 0x820e1fac
	goto loc_820E1FAC;
loc_820E1F9C:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e1fac
	if (!ctx.cr6.gt) goto loc_820E1FAC;
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
loc_820E1FAC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820e1f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E1F84;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// bne 0x820e1f68
	if (!ctx.cr0.eq) goto loc_820E1F68;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x820e1dd0
	ctx.lr = 0x820E1FD8;
	sub_820E1DD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E1FE8"))) PPC_WEAK_FUNC(sub_820E1FE8);
PPC_FUNC_IMPL(__imp__sub_820E1FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E1FF0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// lfs f31,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_820E2010:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820E2038;
	sub_82187400(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x820e2010
	if (!ctx.cr0.eq) goto loc_820E2010;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e1f18
	ctx.lr = 0x820E204C;
	sub_820E1F18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E2058"))) PPC_WEAK_FUNC(sub_820E2058);
PPC_FUNC_IMPL(__imp__sub_820E2058) {
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
	// ld r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 56);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// ld r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f0,7948(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x820e1dd0
	ctx.lr = 0x820E20C4;
	sub_820E1DD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E20D4"))) PPC_WEAK_FUNC(sub_820E20D4);
PPC_FUNC_IMPL(__imp__sub_820E20D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E20D8"))) PPC_WEAK_FUNC(sub_820E20D8);
PPC_FUNC_IMPL(__imp__sub_820E20D8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820e219c
	if (ctx.cr6.eq) goto loc_820E219C;
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsubs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f12,f1,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmsubs f9,f4,f0,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f8,f13,f3,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 - ctx.f11.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f7,f1,f2,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - ctx.f10.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820E219C;
	sub_820A42E0(ctx, base);
loc_820E219C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E21AC"))) PPC_WEAK_FUNC(sub_820E21AC);
PPC_FUNC_IMPL(__imp__sub_820E21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E21B0"))) PPC_WEAK_FUNC(sub_820E21B0);
PPC_FUNC_IMPL(__imp__sub_820E21B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,17336
	ctx.r8.s64 = ctx.r11.s64 + 17336;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
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
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x820E2270;
	sub_822AA648(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x820E227C;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820E2298;
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

__attribute__((alias("__imp__sub_820E22B0"))) PPC_WEAK_FUNC(sub_820E22B0);
PPC_FUNC_IMPL(__imp__sub_820E22B0) {
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
	// bl 0x820e1d30
	ctx.lr = 0x820E22D0;
	sub_820E1D30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e22ec
	if (ctx.cr6.eq) goto loc_820E22EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E22E8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E22EC:
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

__attribute__((alias("__imp__sub_820E2304"))) PPC_WEAK_FUNC(sub_820E2304);
PPC_FUNC_IMPL(__imp__sub_820E2304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2308"))) PPC_WEAK_FUNC(sub_820E2308);
PPC_FUNC_IMPL(__imp__sub_820E2308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820E2310;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820e2360
	if (ctx.cr6.eq) goto loc_820E2360;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820e2348
	if (!ctx.cr6.eq) goto loc_820E2348;
loc_820E2338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820E2348:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2338
	if (ctx.cr6.eq) goto loc_820E2338;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e2338
	if (!ctx.cr6.eq) goto loc_820E2338;
loc_820E2360:
	// addi r11,r30,26
	ctx.r11.s64 = ctx.r30.s64 + 26;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e2380
	if (ctx.cr6.eq) goto loc_820E2380;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820e2514
	if (ctx.cr6.eq) goto loc_820E2514;
loc_820E2380:
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82248a40
	ctx.lr = 0x820E2398;
	sub_82248A40(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820e23ac
	if (ctx.cr6.eq) goto loc_820E23AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,180(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// bl 0x820e1fe8
	ctx.lr = 0x820E23AC;
	sub_820E1FE8(ctx, base);
loc_820E23AC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x820e23bc
	if (!ctx.cr6.eq) goto loc_820E23BC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e2058
	ctx.lr = 0x820E23BC;
	sub_820E2058(ctx, base);
loc_820E23BC:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r27,132
	ctx.r11.s64 = ctx.r27.s64 + 132;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f10,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f9,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
loc_820E2414:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820e242c
	if (!ctx.cr6.lt) goto loc_820E242C;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x820e2430
	goto loc_820E2430;
loc_820E242C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_820E2430:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820e2448
	if (!ctx.cr6.lt) goto loc_820E2448;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x820e244c
	goto loc_820E244C;
loc_820E2448:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_820E244C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820e2460
	if (!ctx.cr6.lt) goto loc_820E2460;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820E2460:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r27,112
	ctx.r10.s64 = ctx.r27.s64 + 112;
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fmuls f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// bne cr6,0x820e2480
	if (!ctx.cr6.eq) goto loc_820E2480;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
loc_820E2480:
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// fneg f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f4,f2,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f4,f31,f13,f12
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x820e2508
	if (!ctx.cr6.gt) goto loc_820E2508;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x820e2414
	if (ctx.cr6.lt) goto loc_820E2414;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820E2508:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_820E2514:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820E2524"))) PPC_WEAK_FUNC(sub_820E2524);
PPC_FUNC_IMPL(__imp__sub_820E2524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2528"))) PPC_WEAK_FUNC(sub_820E2528);
PPC_FUNC_IMPL(__imp__sub_820E2528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820E2530;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249928
	ctx.lr = 0x820E2538;
	sub_82249928(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lfs f29,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820e2578
	if (ctx.cr6.lt) goto loc_820E2578;
	// bne cr6,0x820e2580
	if (!ctx.cr6.eq) goto loc_820E2580;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,17348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17348);
	ctx.f29.f64 = double(temp.f32);
	// b 0x820e2580
	goto loc_820E2580;
loc_820E2578:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,17344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17344);
	ctx.f29.f64 = double(temp.f32);
loc_820E2580:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f1,f0
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8224a1c8
	ctx.lr = 0x820E2594;
	sub_8224A1C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f28,f29
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8224a1c8
	ctx.lr = 0x820E25D0;
	sub_8224A1C8(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// stfs f30,104(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r27,r31,96
	ctx.r27.s64 = ctx.r31.s64 + 96;
	// stfs f30,40(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
	// stfs f30,120(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// addi r24,r31,48
	ctx.r24.s64 = ctx.r31.s64 + 48;
	// stfs f30,56(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmuls f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f7,112(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f7,48(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f6,80(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f5,96(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820E2644;
	sub_820804F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82096f18
	ctx.lr = 0x820E2650;
	sub_82096F18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// li r23,8
	ctx.r23.s64 = 8;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_820E2660:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x820E2688;
	sub_82187400(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// bne 0x820e2660
	if (!ctx.cr0.eq) goto loc_820E2660;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e20d8
	ctx.lr = 0x820E26AC;
	sub_820E20D8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// std r10,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r10.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r9.u64);
	// bl 0x820e20d8
	ctx.lr = 0x820E2700;
	sub_820E20D8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e20d8
	ctx.lr = 0x820E2718;
	sub_820E20D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e20d8
	ctx.lr = 0x820E2730;
	sub_820E20D8(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e20d8
	ctx.lr = 0x820E2748;
	sub_820E20D8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249974
	ctx.lr = 0x820E2754;
	sub_82249974(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820E2758"))) PPC_WEAK_FUNC(sub_820E2758);
PPC_FUNC_IMPL(__imp__sub_820E2758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e278c
	if (!ctx.cr6.lt) goto loc_820E278C;
	// lfs f13,536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
loc_820E278C:
	// fmr f3,f13
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f13.f64;
	// b 0x820e2528
	sub_820E2528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E2794"))) PPC_WEAK_FUNC(sub_820E2794);
PPC_FUNC_IMPL(__imp__sub_820E2794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E2798"))) PPC_WEAK_FUNC(sub_820E2798);
PPC_FUNC_IMPL(__imp__sub_820E2798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E27A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82182e90
	ctx.lr = 0x820E27B0;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820E27B8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E27C4;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bgt cr6,0x820e29e0
	if (ctx.cr6.gt) goto loc_820E29E0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820e2840
	// bdzf 4*cr6+eq,0x820e2874
	// bdzf 4*cr6+eq,0x820e28a8
	// bdzf 4*cr6+eq,0x820e28dc
	// bdzf 4*cr6+eq,0x820e2910
	// bdzf 4*cr6+eq,0x820e2944
	// bdzf 4*cr6+eq,0x820e2978
	// bne cr6,0x820e29ac
	if (!ctx.cr6.eq) goto loc_820E29AC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820E27FC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e4f70
	ctx.lr = 0x820E2810;
	sub_820E4F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E281C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2828:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820E2834;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2840:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x820E2848;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e4c00
	ctx.lr = 0x820E285C;
	sub_820E4C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2868;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2874:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x820E287C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e4608
	ctx.lr = 0x820E2890;
	sub_820E4608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E289C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E28A8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820E28B0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e42b8
	ctx.lr = 0x820E28C4;
	sub_820E42B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E28D0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E28DC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E28E4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e3fd8
	ctx.lr = 0x820E28F8;
	sub_820E3FD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2904;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2910:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E2918;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e3b08
	ctx.lr = 0x820E292C;
	sub_820E3B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2938;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2944:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82080000
	ctx.lr = 0x820E294C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e3460
	ctx.lr = 0x820E2960;
	sub_820E3460(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E296C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2978:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E2980;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e31f0
	ctx.lr = 0x820E2994;
	sub_820E31F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E29A0;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E29AC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E29B4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2828
	if (ctx.cr6.eq) goto loc_820E2828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820e2ff0
	ctx.lr = 0x820E29C8;
	sub_820E2FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E29D4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E29E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E29E8;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E29F4"))) PPC_WEAK_FUNC(sub_820E29F4);
PPC_FUNC_IMPL(__imp__sub_820E29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E29F8"))) PPC_WEAK_FUNC(sub_820E29F8);
PPC_FUNC_IMPL(__imp__sub_820E29F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E2A00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82182e90
	ctx.lr = 0x820E2A10;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820E2A18;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2A24;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bgt cr6,0x820e2c40
	if (ctx.cr6.gt) goto loc_820E2C40;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820e2aa0
	// bdzf 4*cr6+eq,0x820e2ad4
	// bdzf 4*cr6+eq,0x820e2b08
	// bdzf 4*cr6+eq,0x820e2b3c
	// bdzf 4*cr6+eq,0x820e2b70
	// bdzf 4*cr6+eq,0x820e2ba4
	// bdzf 4*cr6+eq,0x820e2bd8
	// bne cr6,0x820e2c0c
	if (!ctx.cr6.eq) goto loc_820E2C0C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820E2A5C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e4f70
	ctx.lr = 0x820E2A70;
	sub_820E4F70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2A7C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2A88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820E2A94;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2AA0:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82080000
	ctx.lr = 0x820E2AA8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e4c00
	ctx.lr = 0x820E2ABC;
	sub_820E4C00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2AC8;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2AD4:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x820E2ADC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e4608
	ctx.lr = 0x820E2AF0;
	sub_820E4608(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2AFC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2B08:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x820E2B10;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e42b8
	ctx.lr = 0x820E2B24;
	sub_820E42B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2B30;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2B3C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E2B44;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e3fd8
	ctx.lr = 0x820E2B58;
	sub_820E3FD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2B64;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2B70:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E2B78;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e3b08
	ctx.lr = 0x820E2B8C;
	sub_820E3B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2B98;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2BA4:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82080000
	ctx.lr = 0x820E2BAC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e3460
	ctx.lr = 0x820E2BC0;
	sub_820E3460(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2BCC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2BD8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E2BE0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e31f0
	ctx.lr = 0x820E2BF4;
	sub_820E31F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2C00;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2C0C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x820E2C14;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2a88
	if (ctx.cr6.eq) goto loc_820E2A88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e2ff0
	ctx.lr = 0x820E2C28;
	sub_820E2FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2C34;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E2C40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E2C48;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E2C54"))) PPC_WEAK_FUNC(sub_820E2C54);
PPC_FUNC_IMPL(__imp__sub_820E2C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2C58"))) PPC_WEAK_FUNC(sub_820E2C58);
PPC_FUNC_IMPL(__imp__sub_820E2C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820d5dc8
	sub_820D5DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E2C6C"))) PPC_WEAK_FUNC(sub_820E2C6C);
PPC_FUNC_IMPL(__imp__sub_820E2C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E2C70"))) PPC_WEAK_FUNC(sub_820E2C70);
PPC_FUNC_IMPL(__imp__sub_820E2C70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,17372
	ctx.r9.s64 = ctx.r10.s64 + 17372;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E2C94"))) PPC_WEAK_FUNC(sub_820E2C94);
PPC_FUNC_IMPL(__imp__sub_820E2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2C98"))) PPC_WEAK_FUNC(sub_820E2C98);
PPC_FUNC_IMPL(__imp__sub_820E2C98) {
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
	// addi r9,r11,17352
	ctx.r9.s64 = ctx.r11.s64 + 17352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820e2cd0
	if (ctx.cr6.eq) goto loc_820E2CD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E2CCC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E2CD0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E2CE4"))) PPC_WEAK_FUNC(sub_820E2CE4);
PPC_FUNC_IMPL(__imp__sub_820E2CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2CE8"))) PPC_WEAK_FUNC(sub_820E2CE8);
PPC_FUNC_IMPL(__imp__sub_820E2CE8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820E2D08;
	sub_8215BD60(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e2d3c
	if (ctx.cr6.eq) goto loc_820E2D3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82227aa0
	ctx.lr = 0x820E2D20;
	sub_82227AA0(ctx, base);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E2D3C:
	// bl 0x8215bec8
	ctx.lr = 0x820E2D40;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x820e2d64
	if (!ctx.cr6.eq) goto loc_820E2D64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2d64
	if (ctx.cr6.eq) goto loc_820E2D64;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_820E2D64:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E2D78"))) PPC_WEAK_FUNC(sub_820E2D78);
PPC_FUNC_IMPL(__imp__sub_820E2D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E2D80;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,-8612(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x820E2DA4;
	sub_822AA648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820cb198
	ctx.lr = 0x820E2DB0;
	sub_820CB198(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x820E2DB8;
	sub_8215BEC8(ctx, base);
	// lwz r10,684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x820e2e30
	if (!ctx.cr6.eq) goto loc_820E2E30;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82163df0
	ctx.lr = 0x820E2DD4;
	sub_82163DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216c098
	ctx.lr = 0x820E2DDC;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820E2DE0;
	sub_8215BD28(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r9,r10,-5052
	ctx.r9.s64 = ctx.r10.s64 + -5052;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x820e2e00
	if (ctx.cr6.eq) goto loc_820E2E00;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e2e30
	if (!ctx.cr6.eq) goto loc_820E2E30;
loc_820E2E00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e2e30
	if (ctx.cr6.eq) goto loc_820E2E30;
	// bl 0x820f1808
	ctx.lr = 0x820E2E0C;
	sub_820F1808(ctx, base);
	// cmpwi cr6,r3,112
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 112, ctx.xer);
	// bne cr6,0x820e2e1c
	if (!ctx.cr6.eq) goto loc_820E2E1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820e2e28
	goto loc_820E2E28;
loc_820E2E1C:
	// cmpwi cr6,r3,111
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 111, ctx.xer);
	// bne cr6,0x820e2e30
	if (!ctx.cr6.eq) goto loc_820E2E30;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820E2E28:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_820E2E30:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e2e50
	if (!ctx.cr6.eq) goto loc_820E2E50;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820E2E50:
	// lwz r11,1732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2e88
	if (ctx.cr6.eq) goto loc_820E2E88;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820e2e88
	if (!ctx.cr6.eq) goto loc_820E2E88;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820e2e88
	if (!ctx.cr6.eq) goto loc_820E2E88;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820E2E88:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x820e2ec4
	if (!ctx.cr6.eq) goto loc_820E2EC4;
	// bl 0x8215bec8
	ctx.lr = 0x820E2E94;
	sub_8215BEC8(ctx, base);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// bl 0x82232d88
	ctx.lr = 0x820E2E9C;
	sub_82232D88(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r9,r11,34463
	ctx.r9.u64 = ctx.r11.u64 | 34463;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820e2ec4
	if (!ctx.cr6.eq) goto loc_820E2EC4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820E2EC4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2f2c
	if (ctx.cr6.eq) goto loc_820E2F2C;
	// bl 0x82227aa0
	ctx.lr = 0x820E2ED4;
	sub_82227AA0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e2f2c
	if (!ctx.cr6.eq) goto loc_820E2F2C;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8216c098
	ctx.lr = 0x820E2EE8;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820E2EEC;
	sub_8215BD28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r30,244(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// bl 0x8216c098
	ctx.lr = 0x820E2F04;
	sub_8216C098(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820E2F08;
	sub_8215BD28(ctx, base);
	// lwz r8,244(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r7,r30,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820e2f2c
	if (ctx.cr6.lt) goto loc_820E2F2C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820E2F2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e2f58
	if (ctx.cr6.eq) goto loc_820E2F58;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x820E2F40;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820e53f8
	ctx.lr = 0x820E2F58;
	sub_820E53F8(ctx, base);
loc_820E2F58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E2F60"))) PPC_WEAK_FUNC(sub_820E2F60);
PPC_FUNC_IMPL(__imp__sub_820E2F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E2F68;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x820E2F74;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820e2fe4
	if (ctx.cr6.eq) goto loc_820E2FE4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820e2fe4
	if (ctx.cr6.lt) goto loc_820E2FE4;
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
	// beq cr6,0x820e2fe4
	if (ctx.cr6.eq) goto loc_820E2FE4;
	// bl 0x8215bd08
	ctx.lr = 0x820E2FA8;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820c3aa8
	ctx.lr = 0x820E2FB8;
	sub_820C3AA8(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820e2fe4
	if (!ctx.cr6.eq) goto loc_820E2FE4;
	// bl 0x8215bec8
	ctx.lr = 0x820E2FC4;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r10,1284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820e2fe4
	if (!ctx.cr6.eq) goto loc_820E2FE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e2d78
	ctx.lr = 0x820E2FE4;
	sub_820E2D78(ctx, base);
loc_820E2FE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E2FEC"))) PPC_WEAK_FUNC(sub_820E2FEC);
PPC_FUNC_IMPL(__imp__sub_820E2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E2FF0"))) PPC_WEAK_FUNC(sub_820E2FF0);
PPC_FUNC_IMPL(__imp__sub_820E2FF0) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E300C;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,17392
	ctx.r10.s64 = ctx.r11.s64 + 17392;
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

__attribute__((alias("__imp__sub_820E3030"))) PPC_WEAK_FUNC(sub_820E3030);
PPC_FUNC_IMPL(__imp__sub_820E3030) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6388
	sub_820C6388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3034"))) PPC_WEAK_FUNC(sub_820E3034);
PPC_FUNC_IMPL(__imp__sub_820E3034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3038"))) PPC_WEAK_FUNC(sub_820E3038);
PPC_FUNC_IMPL(__imp__sub_820E3038) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c6398
	sub_820C6398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E303C"))) PPC_WEAK_FUNC(sub_820E303C);
PPC_FUNC_IMPL(__imp__sub_820E303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3040"))) PPC_WEAK_FUNC(sub_820E3040);
PPC_FUNC_IMPL(__imp__sub_820E3040) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c63a8
	sub_820C63A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E3044"))) PPC_WEAK_FUNC(sub_820E3044);
PPC_FUNC_IMPL(__imp__sub_820E3044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3048"))) PPC_WEAK_FUNC(sub_820E3048);
PPC_FUNC_IMPL(__imp__sub_820E3048) {
	PPC_FUNC_PROLOGUE();
	// b 0x820c63b8
	sub_820C63B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E304C"))) PPC_WEAK_FUNC(sub_820E304C);
PPC_FUNC_IMPL(__imp__sub_820E304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3050"))) PPC_WEAK_FUNC(sub_820E3050);
PPC_FUNC_IMPL(__imp__sub_820E3050) {
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
	// addi r10,r11,17392
	ctx.r10.s64 = ctx.r11.s64 + 17392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E307C;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3098
	if (ctx.cr6.eq) goto loc_820E3098;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E3094;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E3098:
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

__attribute__((alias("__imp__sub_820E30B0"))) PPC_WEAK_FUNC(sub_820E30B0);
PPC_FUNC_IMPL(__imp__sub_820E30B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E30B8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,17408
	ctx.r31.s64 = ctx.r11.s64 + 17408;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,40(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r28,1920(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
loc_820E30D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E30E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e312c
	if (ctx.cr6.eq) goto loc_820E312C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3148
	if (ctx.cr6.eq) goto loc_820E3148;
	// lwz r11,1908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3114
	if (ctx.cr6.eq) goto loc_820E3114;
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e312c
	if (!ctx.cr6.eq) goto loc_820E312C;
loc_820E3114:
	// lwz r11,1360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820e312c
	if (ctx.cr6.eq) goto loc_820E312C;
	// lwz r11,1364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820e3148
	if (!ctx.cr6.eq) goto loc_820E3148;
loc_820E312C:
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r29,560
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 560, ctx.xer);
	// blt cr6,0x820e30d8
	if (ctx.cr6.lt) goto loc_820E30D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820E3148:
	// lwz r11,1328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1328);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e3188
	if (!ctx.cr6.eq) goto loc_820E3188;
	// lwz r11,1332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e3174
	if (ctx.cr6.eq) goto loc_820E3174;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e3174
	if (ctx.cr6.eq) goto loc_820E3174;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x820e3188
	if (!ctx.cr6.eq) goto loc_820E3188;
loc_820E3174:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3188
	if (ctx.cr6.eq) goto loc_820E3188;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_820E3188:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82097288
	ctx.lr = 0x820E3190;
	sub_82097288(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3d58
	ctx.lr = 0x820E31AC;
	sub_820D3D58(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e31e4
	if (ctx.cr6.eq) goto loc_820E31E4;
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// lwz r3,1964(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// bl 0x821882d0
	ctx.lr = 0x820E31C8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e31e4
	if (ctx.cr6.eq) goto loc_820E31E4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e31e4
	if (ctx.cr6.eq) goto loc_820E31E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820b9bf0
	ctx.lr = 0x820E31E4;
	sub_820B9BF0(ctx, base);
loc_820E31E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E31F0"))) PPC_WEAK_FUNC(sub_820E31F0);
PPC_FUNC_IMPL(__imp__sub_820E31F0) {
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
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E320C;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,17968
	ctx.r10.s64 = ctx.r11.s64 + 17968;
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

__attribute__((alias("__imp__sub_820E3230"))) PPC_WEAK_FUNC(sub_820E3230);
PPC_FUNC_IMPL(__imp__sub_820E3230) {
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
	// addi r10,r11,17968
	ctx.r10.s64 = ctx.r11.s64 + 17968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E325C;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3278
	if (ctx.cr6.eq) goto loc_820E3278;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E3274;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E3278:
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

__attribute__((alias("__imp__sub_820E3290"))) PPC_WEAK_FUNC(sub_820E3290);
PPC_FUNC_IMPL(__imp__sub_820E3290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820E3298;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,1584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e344c
	if (!ctx.cr6.eq) goto loc_820E344C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dc50
	ctx.lr = 0x820E32C0;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e32d8
	if (!ctx.cr6.eq) goto loc_820E32D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208e5b8
	ctx.lr = 0x820E32D0;
	sub_8208E5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e344c
	if (ctx.cr6.eq) goto loc_820E344C;
loc_820E32D8:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,1630(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1630);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820e344c
	if (ctx.cr6.gt) goto loc_820E344C;
	// lhz r10,1632(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1632);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820e344c
	if (!ctx.cr6.lt) goto loc_820E344C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,1920(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// lwz r28,1732(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x820c6330
	ctx.lr = 0x820E331C;
	sub_820C6330(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c3a28
	ctx.lr = 0x820E3328;
	sub_820C3A28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820e344c
	if (ctx.cr6.eq) goto loc_820E344C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,344(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f03b0
	ctx.lr = 0x820E3344;
	sub_820F03B0(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,432(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r11,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r11.u32);
	// stw r11,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r11.u32);
	// stw r29,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r29.u32);
	// stw r9,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r9.u32);
	// lwz r3,432(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// bl 0x821871d8
	ctx.lr = 0x820E336C;
	sub_821871D8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,15936(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15936);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E3388;
	sub_820FB0B8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820e33c0
	if (ctx.cr6.eq) goto loc_820E33C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208dc50
	ctx.lr = 0x820E339C;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e33c0
	if (ctx.cr6.eq) goto loc_820E33C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17984);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820e33c0
	if (!ctx.cr6.lt) goto loc_820E33C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1312, ctx.r11.u32);
	// b 0x820e33c4
	goto loc_820E33C4;
loc_820E33C0:
	// stw r29,1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1312, ctx.r29.u32);
loc_820E33C4:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,20502
	ctx.r11.s64 = 20502;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r3,r31,2456
	ctx.r3.s64 = ctx.r31.s64 + 2456;
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// lfs f1,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,868(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f1,924(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stfs f1,928(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stfs f1,1044(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// stfs f1,1100(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stfs f1,1104(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// stfs f1,1220(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f1,1276(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f1,1280(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// stb r10,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r10.u8);
	// stb r10,1110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1110, ctx.r10.u8);
	// stb r10,1286(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1286, ctx.r10.u8);
	// sth r11,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r11.u16);
	// sth r11,1108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1108, ctx.r11.u16);
	// sth r11,1284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1284, ctx.r11.u16);
	// sth r29,936(r31)
	PPC_STORE_U16(ctx.r31.u32 + 936, ctx.r29.u16);
	// sth r29,1112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1112, ctx.r29.u16);
	// sth r29,1288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1288, ctx.r29.u16);
	// stfs f1,1412(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f1,1448(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// stfs f1,1588(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// stfs f1,1624(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// bl 0x8210f010
	ctx.lr = 0x820E343C;
	sub_8210F010(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820E344C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820E345C"))) PPC_WEAK_FUNC(sub_820E345C);
PPC_FUNC_IMPL(__imp__sub_820E345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3460"))) PPC_WEAK_FUNC(sub_820E3460);
PPC_FUNC_IMPL(__imp__sub_820E3460) {
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
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E347C;
	sub_820E4FD0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r6,r8,17988
	ctx.r6.s64 = ctx.r8.s64 + 17988;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E34E4"))) PPC_WEAK_FUNC(sub_820E34E4);
PPC_FUNC_IMPL(__imp__sub_820E34E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E34E8"))) PPC_WEAK_FUNC(sub_820E34E8);
PPC_FUNC_IMPL(__imp__sub_820E34E8) {
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
	// addi r10,r11,17988
	ctx.r10.s64 = ctx.r11.s64 + 17988;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E3514;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3530
	if (ctx.cr6.eq) goto loc_820E3530;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E352C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E3530:
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

__attribute__((alias("__imp__sub_820E3548"))) PPC_WEAK_FUNC(sub_820E3548);
PPC_FUNC_IMPL(__imp__sub_820E3548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E3590"))) PPC_WEAK_FUNC(sub_820E3590);
PPC_FUNC_IMPL(__imp__sub_820E3590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820E3598;
	sub_82248768(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r25,40(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r21,44(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x820c57e8
	ctx.lr = 0x820E35C8;
	sub_820C57E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c5818
	ctx.lr = 0x820E35D4;
	sub_820C5818(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,-4900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f31,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// lfs f29,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x820c5568
	ctx.lr = 0x820E3634;
	sub_820C5568(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820e39ac
	if (ctx.cr6.eq) goto loc_820E39AC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c5568
	ctx.lr = 0x820E3650;
	sub_820C5568(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820E3670;
	sub_82187200(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r31,48
	ctx.r26.s64 = ctx.r31.s64 + 48;
	// lfs f0,9048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e3750
	if (!ctx.cr6.gt) goto loc_820E3750;
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// li r9,5
	ctx.r9.s64 = 5;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,17108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17108);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// fmadds f7,f10,f0,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f6,f8,f0,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x820e36e0
	if (ctx.cr6.eq) goto loc_820E36E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,18004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18004);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E36E0;
	sub_820FB0B8(ctx, base);
loc_820E36E0:
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
loc_820E36E4:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820e3718
	if (!ctx.cr6.eq) goto loc_820E3718;
	// stfs f31,1412(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1412, temp.u32);
	// stfs f31,1448(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1448, temp.u32);
	// stfs f31,1588(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// stfs f31,1624(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1624, temp.u32);
	// stfs f31,1396(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1396, temp.u32);
	// stfs f31,1452(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1452, temp.u32);
	// stfs f31,1456(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1456, temp.u32);
	// stfs f31,1572(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1572, temp.u32);
	// stfs f31,1628(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1628, temp.u32);
	// stfs f31,1632(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1632, temp.u32);
loc_820E3718:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82187200
	ctx.lr = 0x820E3720;
	sub_82187200(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82187220
	ctx.lr = 0x820E372C;
	sub_82187220(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e37c4
	if (!ctx.cr6.gt) goto loc_820E37C4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820e37d8
	goto loc_820E37D8;
loc_820E3750:
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x820e36e0
	if (!ctx.cr6.eq) goto loc_820E36E0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// beq cr6,0x820e36e4
	if (ctx.cr6.eq) goto loc_820E36E4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x820cb9f8
	ctx.lr = 0x820E37B4;
	sub_820CB9F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820cbfb8
	ctx.lr = 0x820E37BC;
	sub_820CBFB8(ctx, base);
	// stw r23,1344(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1344, ctx.r23.u32);
	// b 0x820e36e4
	goto loc_820E36E4;
loc_820E37C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820e37d8
	if (!ctx.cr6.lt) goto loc_820E37D8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820E37D8:
	// lfs f11,404(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lhz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// clrlwi r11,r7,20
	ctx.r11.u64 = ctx.r7.u32 & 0xFFF;
	// clrlwi r4,r11,23
	ctx.r4.u64 = ctx.r11.u32 & 0x1FF;
	// srawi r5,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 9;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// fmuls f30,f3,f13
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// blt cr6,0x820e3850
	if (ctx.cr6.lt) goto loc_820E3850;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
loc_820E3850:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// lwz r11,84(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x820e3878
	if (ctx.cr6.lt) goto loc_820E3878;
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
loc_820E3878:
	// srawi r11,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// bl 0x820c5880
	ctx.lr = 0x820E3890;
	sub_820C5880(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e38b0
	if (ctx.cr6.eq) goto loc_820E38B0;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// li r29,11
	ctx.r29.s64 = 11;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r28,12
	ctx.r28.s64 = 12;
loc_820E38B0:
	// li r11,20501
	ctx.r11.s64 = 20501;
	// stfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f30,36(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// sth r11,1460(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1460, ctx.r11.u16);
	// stb r29,1462(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1462, ctx.r29.u8);
	// sth r11,1636(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1636, ctx.r11.u16);
	// stb r28,1638(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1638, ctx.r28.u8);
	// stfs f29,1412(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1412, temp.u32);
	// stfs f31,1448(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1448, temp.u32);
	// stfs f30,1588(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// stfs f31,1624(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1624, temp.u32);
	// sth r23,1464(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1464, ctx.r23.u16);
	// sth r23,1640(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1640, ctx.r23.u16);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fsubs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// std r6,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r6.u64);
	// std r7,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r7.u64);
	// bge cr6,0x820e3914
	if (!ctx.cr6.lt) goto loc_820E3914;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820E3914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,9852
	ctx.r11.s64 = ctx.r11.s64 + 9852;
	// lfs f12,11484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820e3948
	if (!ctx.cr6.gt) goto loc_820E3948;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x820e3940
	if (!ctx.cr6.lt) goto loc_820E3940;
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// b 0x820e3944
	goto loc_820E3944;
loc_820E3940:
	// fsubs f0,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
loc_820E3944:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_820E3948:
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x820e395c
	if (!ctx.cr6.lt) goto loc_820E395C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x820e3968
	goto loc_820E3968;
loc_820E395C:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x820e3968
	if (!ctx.cr6.gt) goto loc_820E3968;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
loc_820E3968:
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r3,r30,2456
	ctx.r3.s64 = ctx.r30.s64 + 2456;
	// bl 0x8210f010
	ctx.lr = 0x820E3974;
	sub_8210F010(ctx, base);
	// lbz r11,934(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 934);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x820e3988
	if (!ctx.cr6.eq) goto loc_820E3988;
	// stw r23,2016(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2016, ctx.r23.u32);
	// stw r23,2012(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2012, ctx.r23.u32);
loc_820E3988:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x820e3a48
	if (ctx.cr6.eq) goto loc_820E3A48;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820e3a48
	if (!ctx.cr6.gt) goto loc_820E3A48;
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,1336(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1336, ctx.r11.u32);
	// b 0x820e3a48
	goto loc_820E3A48;
loc_820E39AC:
	// stfs f31,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r11,r11,9852
	ctx.r11.s64 = ctx.r11.s64 + 9852;
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f29,60(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820e3a2c
	if (!ctx.cr6.gt) goto loc_820E3A2C;
	// li r11,20501
	ctx.r11.s64 = 20501;
	// sth r11,1460(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1460, ctx.r11.u16);
	// sth r11,1636(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1636, ctx.r11.u16);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,1448(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1448, temp.u32);
	// stfs f0,1412(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1412, temp.u32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1588(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// stfs f31,1624(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1624, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e3a18
	if (!ctx.cr6.lt) goto loc_820E3A18;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820e3a3c
	goto loc_820E3A3C;
loc_820E3A18:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820e3a24
	if (!ctx.cr6.gt) goto loc_820E3A24;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_820E3A24:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820e3a3c
	goto loc_820E3A3C;
loc_820E3A2C:
	// stfs f31,1412(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1412, temp.u32);
	// stfs f31,1448(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1448, temp.u32);
	// stfs f31,1588(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// stfs f31,1624(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1624, temp.u32);
loc_820E3A3C:
	// addi r3,r30,2456
	ctx.r3.s64 = ctx.r30.s64 + 2456;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210f010
	ctx.lr = 0x820E3A48;
	sub_8210F010(ctx, base);
loc_820E3A48:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820e3a88
	if (!ctx.cr6.lt) goto loc_820E3A88;
	// lwz r11,2016(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3a74
	if (ctx.cr6.eq) goto loc_820E3A74;
	// lwz r11,2012(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3a74
	if (ctx.cr6.eq) goto loc_820E3A74;
	// stw r20,2016(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2016, ctx.r20.u32);
	// stw r20,2012(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2012, ctx.r20.u32);
loc_820E3A74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r20,1328(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1328, ctx.r20.u32);
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1340(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 1340, temp.u32);
	// b 0x820e3ac4
	goto loc_820E3AC4;
loc_820E3A88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10928);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e3ab8
	if (!ctx.cr6.lt) goto loc_820E3AB8;
	// stw r23,1328(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1328, ctx.r23.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8064);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fmadds f11,f12,f0,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f29.f64));
	// stfs f11,1340(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 1340, temp.u32);
	// b 0x820e3ac4
	goto loc_820E3AC4;
loc_820E3AB8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f29,1340(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r25.u32 + 1340, temp.u32);
	// stw r11,1328(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1328, ctx.r11.u32);
loc_820E3AC4:
	// lwz r11,1348(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1348);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x820e3ad4
	if (ctx.cr6.eq) goto loc_820E3AD4;
	// stw r23,1344(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1344, ctx.r23.u32);
loc_820E3AD4:
	// stw r24,1332(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1332, ctx.r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,1348(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1348, ctx.r24.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e3af4
	if (!ctx.cr6.gt) goto loc_820E3AF4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820E3AF4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820E3B08"))) PPC_WEAK_FUNC(sub_820E3B08);
PPC_FUNC_IMPL(__imp__sub_820E3B08) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E3B24;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,18008
	ctx.r10.s64 = ctx.r11.s64 + 18008;
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

__attribute__((alias("__imp__sub_820E3B48"))) PPC_WEAK_FUNC(sub_820E3B48);
PPC_FUNC_IMPL(__imp__sub_820E3B48) {
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
	// addi r10,r11,18008
	ctx.r10.s64 = ctx.r11.s64 + 18008;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E3B74;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3b90
	if (ctx.cr6.eq) goto loc_820E3B90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E3B8C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E3B90:
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

__attribute__((alias("__imp__sub_820E3BA8"))) PPC_WEAK_FUNC(sub_820E3BA8);
PPC_FUNC_IMPL(__imp__sub_820E3BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820E3BB0;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r27,40(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,1920(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1920);
	// lwz r30,1732(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c6318
	ctx.lr = 0x820E3BDC;
	sub_820C6318(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c6320
	ctx.lr = 0x820E3BE8;
	sub_820C6320(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c3a28
	ctx.lr = 0x820E3BF4;
	sub_820C3A28(ctx, base);
	// lfs f31,2116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2116);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e3d18
	if (ctx.cr6.eq) goto loc_820E3D18;
	// lwz r4,432(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 432);
	// lwz r3,432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// bl 0x821871d8
	ctx.lr = 0x820E3C10;
	sub_821871D8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820e3f4c
	if (ctx.cr6.eq) goto loc_820E3F4C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820e3d18
	if (ctx.cr6.eq) goto loc_820E3D18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dc50
	ctx.lr = 0x820E3C2C;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e3d18
	if (ctx.cr6.eq) goto loc_820E3D18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17984);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x820e3d18
	if (!ctx.cr6.lt) goto loc_820E3D18;
	// lhz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 932);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,20503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20503, ctx.xer);
	// beq cr6,0x820e3d00
	if (ctx.cr6.eq) goto loc_820E3D00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820e3d00
	if (!ctx.cr6.lt) goto loc_820E3D00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,9056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9056);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x820fb0b8
	ctx.lr = 0x820E3C80;
	sub_820FB0B8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,20503
	ctx.r7.s64 = 20503;
	// li r6,10
	ctx.r6.s64 = 10;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lfs f13,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,884(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f0,920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// sth r7,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r7.u16);
	// stfs f31,1096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stb r6,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r6.u8);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stfs f0,868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f0,924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stfs f0,928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// stfs f0,1100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stfs f0,1104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// stfs f0,1220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f0,1276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f0,1280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// beq cr6,0x820e3d00
	if (ctx.cr6.eq) goto loc_820E3D00;
	// lwz r10,1324(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1324);
	// addi r11,r27,1316
	ctx.r11.s64 = ctx.r27.s64 + 1316;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e3d00
	if (!ctx.cr6.eq) goto loc_820E3D00;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_820E3D00:
	// stw r30,1312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1312, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820E3D18:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820e3f4c
	if (ctx.cr6.eq) goto loc_820E3F4C;
	// lhz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 932);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,20502
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20502, ctx.xer);
	// beq cr6,0x820e3f34
	if (ctx.cr6.eq) goto loc_820E3F34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820e3f34
	if (!ctx.cr6.lt) goto loc_820E3F34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,9056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9056);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E3D58;
	sub_820FB0B8(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sth r29,936(r31)
	PPC_STORE_U16(ctx.r31.u32 + 936, ctx.r29.u16);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// sth r29,1112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1112, ctx.r29.u16);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// sth r29,1288(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1288, ctx.r29.u16);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r30,20502
	ctx.r30.s64 = 20502;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,1286(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1286, ctx.r10.u8);
	// sth r30,1284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1284, ctx.r30.u16);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// sth r30,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r30.u16);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// sth r30,1108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1108, ctx.r30.u16);
	// stb r10,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r10.u8);
	// stb r10,1110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1110, ctx.r10.u8);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// std r11,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r11.u64);
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// std r11,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r11.u64);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r11.u64);
	// lwz r3,-5056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5056);
	// lbz r6,1287(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1287);
	// lbz r5,1286(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1286);
	// lhz r4,1284(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1284);
	// bl 0x820ed6b0
	ctx.lr = 0x820E3DE0;
	sub_820ED6B0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r3,-5056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5056);
	// lbz r6,935(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 935);
	// lbz r5,934(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 934);
	// lhz r4,932(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 932);
	// bl 0x820ed6b0
	ctx.lr = 0x820E3DF8;
	sub_820ED6B0(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r3,-5056(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5056);
	// lbz r6,1111(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1111);
	// lbz r5,1110(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1110);
	// lhz r4,1108(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1108);
	// bl 0x820ed6b0
	ctx.lr = 0x820E3E10;
	sub_820ED6B0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,2148(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820e3e48
	if (ctx.cr6.eq) goto loc_820E3E48;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// b 0x820e3e4c
	goto loc_820E3E4C;
loc_820E3E48:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_820E3E4C:
	// lfs f12,1220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x820e3e68
	if (!ctx.cr6.gt) goto loc_820E3E68;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,1220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f13,1276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f13,1280(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
loc_820E3E68:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3e98
	if (ctx.cr6.eq) goto loc_820E3E98;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// b 0x820e3e9c
	goto loc_820E3E9C;
loc_820E3E98:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_820E3E9C:
	// lfs f12,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x820e3eb8
	if (!ctx.cr6.gt) goto loc_820E3EB8;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,868(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f13,924(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stfs f13,928(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
loc_820E3EB8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3ee4
	if (ctx.cr6.eq) goto loc_820E3EE4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_820E3EE4:
	// lfs f13,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e3f00
	if (!ctx.cr6.gt) goto loc_820E3F00;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// stfs f0,1100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stfs f0,1104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
loc_820E3F00:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// beq cr6,0x820e3f34
	if (ctx.cr6.eq) goto loc_820E3F34;
	// lwz r10,1324(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1324);
	// addi r11,r27,1316
	ctx.r11.s64 = ctx.r27.s64 + 1316;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e3f34
	if (!ctx.cr6.eq) goto loc_820E3F34;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_820E3F34:
	// stw r29,1312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1312, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820E3F4C:
	// lhz r11,932(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 932);
	// cmplwi cr6,r11,20502
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20502, ctx.xer);
	// beq cr6,0x820e3f60
	if (ctx.cr6.eq) goto loc_820E3F60;
	// cmplwi cr6,r11,20503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20503, ctx.xer);
	// bne cr6,0x820e3fb8
	if (!ctx.cr6.eq) goto loc_820E3FB8;
loc_820E3F60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820e3fb8
	if (!ctx.cr6.lt) goto loc_820E3FB8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// sth r10,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r10.u16);
	// bl 0x82097288
	ctx.lr = 0x820E3F88;
	sub_82097288(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r3.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// sth r3,1108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1108, ctx.r3.u16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// sth r3,1284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1284, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r7,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r7.u32);
	// lfs f2,15936(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15936);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E3FB8;
	sub_820FB0B8(ctx, base);
loc_820E3FB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1312, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820E3FD4"))) PPC_WEAK_FUNC(sub_820E3FD4);
PPC_FUNC_IMPL(__imp__sub_820E3FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E3FD8"))) PPC_WEAK_FUNC(sub_820E3FD8);
PPC_FUNC_IMPL(__imp__sub_820E3FD8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E3FF4;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,18024
	ctx.r10.s64 = ctx.r11.s64 + 18024;
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

__attribute__((alias("__imp__sub_820E4018"))) PPC_WEAK_FUNC(sub_820E4018);
PPC_FUNC_IMPL(__imp__sub_820E4018) {
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
	// addi r10,r11,18024
	ctx.r10.s64 = ctx.r11.s64 + 18024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E4044;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e4060
	if (ctx.cr6.eq) goto loc_820E4060;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E405C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E4060:
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

__attribute__((alias("__imp__sub_820E4078"))) PPC_WEAK_FUNC(sub_820E4078);
PPC_FUNC_IMPL(__imp__sub_820E4078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E4080;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// lwz r30,1920(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lwz r29,576(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// bl 0x820c3328
	ctx.lr = 0x820E40A4;
	sub_820C3328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e40b4
	if (!ctx.cr6.eq) goto loc_820E40B4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820e4104
	if (!ctx.cr6.eq) goto loc_820E4104;
loc_820E40B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c63c8
	ctx.lr = 0x820E40BC;
	sub_820C63C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e4104
	if (ctx.cr6.eq) goto loc_820E4104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c5670
	ctx.lr = 0x820E40CC;
	sub_820C5670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820e4104
	if (ctx.cr6.eq) goto loc_820E4104;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2020
	ctx.r4.s64 = 2020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3d58
	ctx.lr = 0x820E40F0;
	sub_820D3D58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cb8b0
	ctx.lr = 0x820E40F8;
	sub_820CB8B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820E4104:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E4110"))) PPC_WEAK_FUNC(sub_820E4110);
PPC_FUNC_IMPL(__imp__sub_820E4110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e4130
	if (ctx.cr6.lt) goto loc_820E4130;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820e2798
	sub_820E2798(ctx, base);
	return;
loc_820E4130:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x820e4144
	if (!ctx.cr6.gt) goto loc_820E4144;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820e2798
	sub_820E2798(ctx, base);
	return;
loc_820E4144:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E414C"))) PPC_WEAK_FUNC(sub_820E414C);
PPC_FUNC_IMPL(__imp__sub_820E414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4150"))) PPC_WEAK_FUNC(sub_820E4150);
PPC_FUNC_IMPL(__imp__sub_820E4150) {
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
	// addi r10,r11,18040
	ctx.r10.s64 = ctx.r11.s64 + 18040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E417C;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e4198
	if (ctx.cr6.eq) goto loc_820E4198;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E4194;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E4198:
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

__attribute__((alias("__imp__sub_820E41B0"))) PPC_WEAK_FUNC(sub_820E41B0);
PPC_FUNC_IMPL(__imp__sub_820E41B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E41B8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r28,52(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x820df8a0
	ctx.lr = 0x820E41D4;
	sub_820DF8A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e41f8
	if (ctx.cr6.eq) goto loc_820E41F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e41f0
	if (ctx.cr6.eq) goto loc_820E41F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e41f8
	if (!ctx.cr6.eq) goto loc_820E41F8;
loc_820E41F0:
	// lfs f0,1236(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
loc_820E41F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2016(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2016, ctx.r11.u32);
	// stw r11,2012(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2012, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E420C"))) PPC_WEAK_FUNC(sub_820E420C);
PPC_FUNC_IMPL(__imp__sub_820E420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4210"))) PPC_WEAK_FUNC(sub_820E4210);
PPC_FUNC_IMPL(__imp__sub_820E4210) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f0,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e4248
	if (!ctx.cr6.gt) goto loc_820E4248;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x820e424c
	goto loc_820E424C;
loc_820E4248:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820E424C:
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820e4278
	if (!ctx.cr6.lt) goto loc_820E4278;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820e428c
	goto loc_820E428C;
loc_820E4278:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e428c
	if (!ctx.cr6.gt) goto loc_820E428C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E428C:
	// stfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f0,1236(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1236, temp.u32);
	// addi r3,r9,596
	ctx.r3.s64 = ctx.r9.s64 + 596;
	// stfs f12,1272(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1272, temp.u32);
	// bl 0x821af000
	ctx.lr = 0x820E42A4;
	sub_821AF000(ctx, base);
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

__attribute__((alias("__imp__sub_820E42B8"))) PPC_WEAK_FUNC(sub_820E42B8);
PPC_FUNC_IMPL(__imp__sub_820E42B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E42C0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E42D4;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r9,18040
	ctx.r8.s64 = ctx.r9.s64 + 18040;
	// lfs f0,9064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9064);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r27,52(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x820df8a0
	ctx.lr = 0x820E4310;
	sub_820DF8A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e4334
	if (ctx.cr6.eq) goto loc_820E4334;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e432c
	if (ctx.cr6.eq) goto loc_820E432C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e4334
	if (!ctx.cr6.eq) goto loc_820E4334;
loc_820E432C:
	// lfs f0,1236(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_820E4334:
	// stw r28,2016(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2016, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,2012(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2012, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E4348"))) PPC_WEAK_FUNC(sub_820E4348);
PPC_FUNC_IMPL(__imp__sub_820E4348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x820e4360
	if (!ctx.cr6.gt) goto loc_820E4360;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x820e2798
	sub_820E2798(ctx, base);
	return;
loc_820E4360:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E4368"))) PPC_WEAK_FUNC(sub_820E4368);
PPC_FUNC_IMPL(__imp__sub_820E4368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E4398:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820e4398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E4398;
	// lfs f0,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r11,r4,140
	ctx.r11.s64 = ctx.r4.s64 + 140;
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lhz r8,68(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// sth r8,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r8.u16);
	// lbz r7,70(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 70);
	// stb r7,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r7.u8);
	// lbz r6,71(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 71);
	// stb r6,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r6.u8);
	// lhz r5,72(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// sth r5,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r5.u16);
	// lfs f12,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lhz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 80);
	// sth r9,80(r3)
	PPC_STORE_U16(ctx.r3.u32 + 80, ctx.r9.u16);
	// lhz r8,82(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 82);
	// sth r8,82(r3)
	PPC_STORE_U16(ctx.r3.u32 + 82, ctx.r8.u16);
	// lhz r7,86(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 86);
	// sth r7,86(r3)
	PPC_STORE_U16(ctx.r3.u32 + 86, ctx.r7.u16);
	// lhz r6,84(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 84);
	// sth r6,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r6.u16);
	// ld r5,96(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r5,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r5.u64);
	// ld r4,104(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r4,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r4.u64);
loc_820E441C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820e441c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E441C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E442C"))) PPC_WEAK_FUNC(sub_820E442C);
PPC_FUNC_IMPL(__imp__sub_820E442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4430"))) PPC_WEAK_FUNC(sub_820E4430);
PPC_FUNC_IMPL(__imp__sub_820E4430) {
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
	// addi r10,r11,18060
	ctx.r10.s64 = ctx.r11.s64 + 18060;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E445C;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e4478
	if (ctx.cr6.eq) goto loc_820E4478;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E4474;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E4478:
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

__attribute__((alias("__imp__sub_820E4490"))) PPC_WEAK_FUNC(sub_820E4490);
PPC_FUNC_IMPL(__imp__sub_820E4490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820E4498;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249924
	ctx.lr = 0x820E44A0;
	sub_82249924(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r26,40(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x820df8a0
	ctx.lr = 0x820E44BC;
	sub_820DF8A0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f30.f64 = double(temp.f32);
	// lwz r28,64(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f29,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f29.f64 = double(temp.f32);
	// lwz r27,68(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r23,56(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// clrlwi r25,r10,16
	ctx.r25.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x820df4e0
	ctx.lr = 0x820E44F0;
	sub_820DF4E0(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// subfe r24,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r24.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x820e4524
	if (ctx.cr6.eq) goto loc_820E4524;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e4524
	if (!ctx.cr6.eq) goto loc_820E4524;
	// lbz r28,934(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 934);
	// lfs f30,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	ctx.f30.f64 = double(temp.f32);
	// lbz r27,1110(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1110);
	// lfs f29,1060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,1236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
	ctx.f27.f64 = double(temp.f32);
	// b 0x820e45ac
	goto loc_820E45AC;
loc_820E4524:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,15936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15936);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E453C;
	sub_820FB0B8(ctx, base);
	// addi r29,r31,864
	ctx.r29.s64 = ctx.r31.s64 + 864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8210f2e0
	ctx.lr = 0x820E4558;
	sub_8210F2E0(ctx, base);
	// stfs f31,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f31,924(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f31,928(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// stfs f28,876(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f28,880(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// bl 0x820e4368
	ctx.lr = 0x820E4578;
	sub_820E4368(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x820e4368
	ctx.lr = 0x820E4584;
	sub_820E4368(ctx, base);
	// li r7,10
	ctx.r7.s64 = 10;
	// stb r28,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r28.u8);
	// stb r27,1110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1110, ctx.r27.u8);
	// stb r7,1286(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1286, ctx.r7.u8);
	// stfs f30,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,920(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// stfs f29,1060(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f31,1096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
loc_820E45AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820df8d8
	ctx.lr = 0x820E45B4;
	sub_820DF8D8(ctx, base);
	// stfs f30,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// stfs f29,20(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// stfs f27,24(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stw r23,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r23.u32);
	// ld r9,416(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 416);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r9,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r9.u64);
	// addi r10,r26,416
	ctx.r10.s64 = ctx.r26.s64 + 416;
	// ld r8,424(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 424);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// std r8,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r8.u64);
	// stfs f31,72(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stfs f31,68(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x820E4604;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820E4608"))) PPC_WEAK_FUNC(sub_820E4608);
PPC_FUNC_IMPL(__imp__sub_820E4608) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E462C;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18060
	ctx.r9.s64 = ctx.r11.s64 + 18060;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820e4490
	ctx.lr = 0x820E464C;
	sub_820E4490(ctx, base);
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

__attribute__((alias("__imp__sub_820E4668"))) PPC_WEAK_FUNC(sub_820E4668);
PPC_FUNC_IMPL(__imp__sub_820E4668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820E4670;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249924
	ctx.lr = 0x820E4678;
	sub_82249924(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f27,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f0,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f29,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f29.f64 = double(temp.f32);
	// lwz r27,64(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f28,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f28.f64 = double(temp.f32);
	// lwz r28,68(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r26,56(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x820e46bc
	if (ctx.cr6.gt) goto loc_820E46BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E46BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2148
	ctx.r11.s64 = ctx.r11.s64 + 2148;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820e474c
	if (ctx.cr6.eq) goto loc_820E474C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lfs f0,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e46fc
	if (!ctx.cr6.lt) goto loc_820E46FC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820e4710
	goto loc_820E4710;
loc_820E46FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e4710
	if (!ctx.cr6.gt) goto loc_820E4710;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E4710:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820e4730
	if (!ctx.cr6.eq) goto loc_820E4730;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e47a8
	if (ctx.cr6.eq) goto loc_820E47A8;
loc_820E4730:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,18004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18004);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E4748;
	sub_820FB0B8(ctx, base);
	// b 0x820e47a8
	goto loc_820E47A8;
loc_820E474C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f29,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lfs f28,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f28.f64 = double(temp.f32);
	// lwz r26,36(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r27,28(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,9064(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9064);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820e478c
	if (!ctx.cr6.lt) goto loc_820E478C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820e47a0
	goto loc_820E47A0;
loc_820E478C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e47a0
	if (!ctx.cr6.gt) goto loc_820E47A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E47A0:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_820E47A8:
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r27,934(r30)
	PPC_STORE_U8(ctx.r30.u32 + 934, ctx.r27.u8);
	// stb r28,1110(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1110, ctx.r28.u8);
	// stb r9,1286(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1286, ctx.r9.u8);
	// stfs f29,884(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 884, temp.u32);
	// stfs f31,920(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 920, temp.u32);
	// stfs f28,1060(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1060, temp.u32);
	// stfs f31,1096(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1096, temp.u32);
	// stfs f30,1236(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1236, temp.u32);
	// stfs f31,1272(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1272, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820df8d8
	ctx.lr = 0x820E47D8;
	sub_820DF8D8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f2,11312(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11312);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x820df4f0
	ctx.lr = 0x820E47EC;
	sub_820DF4F0(ctx, base);
	// stfs f29,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stfs f28,20(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stfs f30,24(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// ld r6,416(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 416);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ld r5,424(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 424);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,1888(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1888);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// addi r11,r29,416
	ctx.r11.s64 = ctx.r29.s64 + 416;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r29,596
	ctx.r3.s64 = ctx.r29.s64 + 596;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f4,1888(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1888, temp.u32);
	// std r6,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r6.u64);
	// ld r10,424(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 424);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// bl 0x821af000
	ctx.lr = 0x820E486C;
	sub_821AF000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249970
	ctx.lr = 0x820E487C;
	sub_82249970(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820E4880"))) PPC_WEAK_FUNC(sub_820E4880);
PPC_FUNC_IMPL(__imp__sub_820E4880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820e4898
	if (ctx.cr6.lt) goto loc_820E4898;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x820e2798
	sub_820E2798(ctx, base);
	return;
loc_820E4898:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e48b4
	if (ctx.cr6.gt) goto loc_820E48B4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x820e2798
	sub_820E2798(ctx, base);
	return;
loc_820E48B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E48BC"))) PPC_WEAK_FUNC(sub_820E48BC);
PPC_FUNC_IMPL(__imp__sub_820E48BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E48C0"))) PPC_WEAK_FUNC(sub_820E48C0);
PPC_FUNC_IMPL(__imp__sub_820E48C0) {
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
	// addi r10,r11,18080
	ctx.r10.s64 = ctx.r11.s64 + 18080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820e4fe8
	ctx.lr = 0x820E48EC;
	sub_820E4FE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e4908
	if (ctx.cr6.eq) goto loc_820E4908;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E4904;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E4908:
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

__attribute__((alias("__imp__sub_820E4920"))) PPC_WEAK_FUNC(sub_820E4920);
PPC_FUNC_IMPL(__imp__sub_820E4920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820E4928;
	sub_82248774(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249924
	ctx.lr = 0x820E4930;
	sub_82249924(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x820df8a0
	ctx.lr = 0x820E494C;
	sub_820DF8A0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f28.f64 = double(temp.f32);
	// lwz r27,64(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f27,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f27.f64 = double(temp.f32);
	// lwz r26,68(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r24,56(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// clrlwi r25,r10,16
	ctx.r25.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x820df4e0
	ctx.lr = 0x820E4980;
	sub_820DF4E0(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// subfe r23,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r23.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x820e49a0
	if (ctx.cr6.eq) goto loc_820E49A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e49a0
	if (!ctx.cr6.eq) goto loc_820E49A0;
	// lfs f30,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f30.f64 = double(temp.f32);
loc_820E49A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,18004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18004);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E49B8;
	sub_820FB0B8(ctx, base);
	// addi r29,r31,864
	ctx.r29.s64 = ctx.r31.s64 + 864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8210f2e0
	ctx.lr = 0x820E49D4;
	sub_8210F2E0(ctx, base);
	// stfs f31,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f31,924(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f31,928(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// stfs f29,876(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f29,880(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// bl 0x820e4368
	ctx.lr = 0x820E49F4;
	sub_820E4368(ctx, base);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820e4368
	ctx.lr = 0x820E4A00;
	sub_820E4368(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,10
	ctx.r6.s64 = 10;
	// stb r27,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r27.u8);
	// stb r26,1110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1110, ctx.r26.u8);
	// stb r6,1286(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1286, ctx.r6.u8);
	// stfs f28,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,920(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// stfs f27,1060(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f31,1096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// lfs f29,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,1236(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stfs f30,1220(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f30,1276(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// stfs f30,1280(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1280, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820df8d8
	ctx.lr = 0x820E4A44;
	sub_820DF8D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f28,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// stfs f27,20(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// stfs f29,24(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stw r24,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r24.u32);
	// stw r11,2016(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2016, ctx.r11.u32);
	// stw r11,2012(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2012, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82249970
	ctx.lr = 0x820E4A74;
	sub_82249970(ctx, base);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820E4A78"))) PPC_WEAK_FUNC(sub_820E4A78);
PPC_FUNC_IMPL(__imp__sub_820E4A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820E4A80;
	sub_82248784(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r27,40(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f0,9048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lfs f30,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,64(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lfs f29,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f29.f64 = double(temp.f32);
	// lwz r29,68(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r28,56(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x820e4ad0
	if (ctx.cr6.gt) goto loc_820E4AD0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820E4AD0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,2148
	ctx.r10.s64 = ctx.r10.s64 + 2148;
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820e4b04
	if (ctx.cr6.eq) goto loc_820E4B04;
	// li r8,0
	ctx.r8.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// ble cr6,0x820e4b50
	if (!ctx.cr6.gt) goto loc_820E4B50;
	// b 0x820e4b24
	goto loc_820E4B24;
loc_820E4B04:
	// lfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f29,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e4b50
	if (!ctx.cr6.gt) goto loc_820E4B50;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
loc_820E4B24:
	// lfs f12,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e4b40
	if (!ctx.cr6.lt) goto loc_820E4B40;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x820e4b4c
	goto loc_820E4B4C;
loc_820E4B40:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x820e4b4c
	if (!ctx.cr6.gt) goto loc_820E4B4C;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_820E4B4C:
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_820E4B50:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e4b64
	if (!ctx.cr6.lt) goto loc_820E4B64;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x820e4b70
	goto loc_820E4B70;
loc_820E4B64:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x820e4b70
	if (ctx.cr6.gt) goto loc_820E4B70;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_820E4B70:
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r30,934(r11)
	PPC_STORE_U8(ctx.r11.u32 + 934, ctx.r30.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r29,1110(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1110, ctx.r29.u8);
	// stb r8,1286(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1286, ctx.r8.u8);
	// stfs f30,884(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 884, temp.u32);
	// stfs f0,920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 920, temp.u32);
	// stfs f29,1060(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1060, temp.u32);
	// stfs f0,1096(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1096, temp.u32);
	// stfs f31,1236(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1236, temp.u32);
	// stfs f0,1272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1272, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f2,11312(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11312);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820df4f0
	ctx.lr = 0x820E4BAC;
	sub_820DF4F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820df8d8
	ctx.lr = 0x820E4BB4;
	sub_820DF8D8(ctx, base);
	// stfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f29,20(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// addi r31,r27,596
	ctx.r31.s64 = ctx.r27.s64 + 596;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4a8
	ctx.lr = 0x820E4BDC;
	sub_820EF4A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af000
	ctx.lr = 0x820E4BE8;
	sub_821AF000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820E4C00"))) PPC_WEAK_FUNC(sub_820E4C00);
PPC_FUNC_IMPL(__imp__sub_820E4C00) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E4C24;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,18080
	ctx.r8.s64 = ctx.r10.s64 + 18080;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820e4920
	ctx.lr = 0x820E4C50;
	sub_820E4920(ctx, base);
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

__attribute__((alias("__imp__sub_820E4C6C"))) PPC_WEAK_FUNC(sub_820E4C6C);
PPC_FUNC_IMPL(__imp__sub_820E4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4C70"))) PPC_WEAK_FUNC(sub_820E4C70);
PPC_FUNC_IMPL(__imp__sub_820E4C70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E4C7C"))) PPC_WEAK_FUNC(sub_820E4C7C);
PPC_FUNC_IMPL(__imp__sub_820E4C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4C80"))) PPC_WEAK_FUNC(sub_820E4C80);
PPC_FUNC_IMPL(__imp__sub_820E4C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e4ca4
	if (!ctx.cr6.gt) goto loc_820E4CA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820e2798
	sub_820E2798(ctx, base);
	return;
loc_820E4CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E4CAC"))) PPC_WEAK_FUNC(sub_820E4CAC);
PPC_FUNC_IMPL(__imp__sub_820E4CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E4CB0"))) PPC_WEAK_FUNC(sub_820E4CB0);
PPC_FUNC_IMPL(__imp__sub_820E4CB0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,18100
	ctx.r9.s64 = ctx.r11.s64 + 18100;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4a8
	ctx.lr = 0x820E4CEC;
	sub_820EF4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4fe8
	ctx.lr = 0x820E4CF4;
	sub_820E4FE8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e4d10
	if (ctx.cr6.eq) goto loc_820E4D10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E4D0C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E4D10:
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

__attribute__((alias("__imp__sub_820E4D28"))) PPC_WEAK_FUNC(sub_820E4D28);
PPC_FUNC_IMPL(__imp__sub_820E4D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820E4D30;
	sub_82248780(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x820df8a0
	ctx.lr = 0x820E4D58;
	sub_820DF8A0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820df4e0
	ctx.lr = 0x820E4D6C;
	sub_820DF4E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// subfe r26,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// beq cr6,0x820e4d98
	if (ctx.cr6.eq) goto loc_820E4D98;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820e4d98
	if (!ctx.cr6.eq) goto loc_820E4D98;
	// lfs f30,1220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	ctx.f30.f64 = double(temp.f32);
loc_820E4D98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,15936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15936);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820fb0b8
	ctx.lr = 0x820E4DB0;
	sub_820FB0B8(ctx, base);
	// addi r30,r31,864
	ctx.r30.s64 = ctx.r31.s64 + 864;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8210f2e0
	ctx.lr = 0x820E4DCC;
	sub_8210F2E0(ctx, base);
	// stfs f30,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f30,924(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f30,928(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// addi r3,r31,1040
	ctx.r3.s64 = ctx.r31.s64 + 1040;
	// stfs f29,876(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f29,880(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// bl 0x820e4368
	ctx.lr = 0x820E4DEC;
	sub_820E4368(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// bl 0x820e4368
	ctx.lr = 0x820E4DF8;
	sub_820E4368(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,920(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,1060(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f31,1096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// bl 0x820df8d8
	ctx.lr = 0x820E4E20;
	sub_820DF8D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2016(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2016, ctx.r11.u32);
	// stw r11,2012(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2012, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820E4E40"))) PPC_WEAK_FUNC(sub_820E4E40);
PPC_FUNC_IMPL(__imp__sub_820E4E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E4E48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f13,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stfs f13,884(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f0,920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// stfs f0,1060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f0,1096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stfs f0,1236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f0,1272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x820df8d8
	ctx.lr = 0x820E4E8C;
	sub_820DF8D8(ctx, base);
	// addi r28,r29,596
	ctx.r28.s64 = ctx.r29.s64 + 596;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef4a8
	ctx.lr = 0x820E4E9C;
	sub_820EF4A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821af000
	ctx.lr = 0x820E4EA8;
	sub_821AF000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e6c0
	ctx.lr = 0x820E4EB0;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e4f5c
	if (!ctx.cr6.eq) goto loc_820E4F5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e098
	ctx.lr = 0x820E4EC0;
	sub_8208E098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e4f5c
	if (!ctx.cr6.eq) goto loc_820E4F5C;
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e4f64
	if (ctx.cr6.eq) goto loc_820E4F64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e4f30
	if (ctx.cr6.eq) goto loc_820E4F30;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// addi r30,r29,416
	ctx.r30.s64 = ctx.r29.s64 + 416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821871d8
	ctx.lr = 0x820E4EF4;
	sub_821871D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,18120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e4f14
	if (!ctx.cr6.gt) goto loc_820E4F14;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
loc_820E4F14:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E4F30:
	// ld r11,416(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 416);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r29,416
	ctx.r9.s64 = ctx.r29.s64 + 416;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// ld r7,424(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 424);
	// std r7,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r7.u64);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820E4F5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_820E4F64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E4F70"))) PPC_WEAK_FUNC(sub_820E4F70);
PPC_FUNC_IMPL(__imp__sub_820E4F70) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820e4fd0
	ctx.lr = 0x820E4F94;
	sub_820E4FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18100
	ctx.r9.s64 = ctx.r11.s64 + 18100;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820e4d28
	ctx.lr = 0x820E4FB4;
	sub_820E4D28(ctx, base);
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

__attribute__((alias("__imp__sub_820E4FD0"))) PPC_WEAK_FUNC(sub_820E4FD0);
PPC_FUNC_IMPL(__imp__sub_820E4FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r10,r11,18124
	ctx.r10.s64 = ctx.r11.s64 + 18124;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E4FE8"))) PPC_WEAK_FUNC(sub_820E4FE8);
PPC_FUNC_IMPL(__imp__sub_820E4FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18124
	ctx.r10.s64 = ctx.r11.s64 + 18124;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E4FF8"))) PPC_WEAK_FUNC(sub_820E4FF8);
PPC_FUNC_IMPL(__imp__sub_820E4FF8) {
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
	// addi r9,r11,18124
	ctx.r9.s64 = ctx.r11.s64 + 18124;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820e5030
	if (ctx.cr6.eq) goto loc_820E5030;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E502C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E5030:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5044"))) PPC_WEAK_FUNC(sub_820E5044);
PPC_FUNC_IMPL(__imp__sub_820E5044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5048"))) PPC_WEAK_FUNC(sub_820E5048);
PPC_FUNC_IMPL(__imp__sub_820E5048) {
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
	// lwz r3,-8460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e507c
	if (ctx.cr6.eq) goto loc_820E507C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E507C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E507C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8460, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5098"))) PPC_WEAK_FUNC(sub_820E5098);
PPC_FUNC_IMPL(__imp__sub_820E5098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820E50A0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,-8460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e513c
	if (!ctx.cr6.eq) goto loc_820E513C;
	// bl 0x82183078
	ctx.lr = 0x820E50C8;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E50D4;
	sub_821837D0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x820E50DC;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e512c
	if (ctx.cr6.eq) goto loc_820E512C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82185740
	ctx.lr = 0x820E50F4;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18140
	ctx.r9.s64 = ctx.r11.s64 + 18140;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e5858
	ctx.lr = 0x820E5114;
	sub_820E5858(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r31,-8460(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8460, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820E5124;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820E512C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,-8460(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8460, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x820E513C;
	sub_821837D0(ctx, base);
loc_820E513C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820E5144"))) PPC_WEAK_FUNC(sub_820E5144);
PPC_FUNC_IMPL(__imp__sub_820E5144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5148"))) PPC_WEAK_FUNC(sub_820E5148);
PPC_FUNC_IMPL(__imp__sub_820E5148) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,18140
	ctx.r10.s64 = ctx.r11.s64 + 18140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820e5190
	if (ctx.cr6.eq) goto loc_820E5190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E5190:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x820E51A0;
	sub_821857F0(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e51bc
	if (ctx.cr6.eq) goto loc_820E51BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E51B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E51BC:
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

__attribute__((alias("__imp__sub_820E51D4"))) PPC_WEAK_FUNC(sub_820E51D4);
PPC_FUNC_IMPL(__imp__sub_820E51D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E51D8"))) PPC_WEAK_FUNC(sub_820E51D8);
PPC_FUNC_IMPL(__imp__sub_820E51D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_820E51F4"))) PPC_WEAK_FUNC(sub_820E51F4);
PPC_FUNC_IMPL(__imp__sub_820E51F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E51F8"))) PPC_WEAK_FUNC(sub_820E51F8);
PPC_FUNC_IMPL(__imp__sub_820E51F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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

__attribute__((alias("__imp__sub_820E5214"))) PPC_WEAK_FUNC(sub_820E5214);
PPC_FUNC_IMPL(__imp__sub_820E5214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5218"))) PPC_WEAK_FUNC(sub_820E5218);
PPC_FUNC_IMPL(__imp__sub_820E5218) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5228
	if (!ctx.cr6.eq) goto loc_820E5228;
	// blr 
	return;
loc_820E5228:
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

__attribute__((alias("__imp__sub_820E5238"))) PPC_WEAK_FUNC(sub_820E5238);
PPC_FUNC_IMPL(__imp__sub_820E5238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E5240;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e529c
	if (ctx.cr6.eq) goto loc_820E529C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E526C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e529c
	if (ctx.cr6.eq) goto loc_820E529C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e529c
	if (ctx.cr6.eq) goto loc_820E529C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E529C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E529C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E52A4"))) PPC_WEAK_FUNC(sub_820E52A4);
PPC_FUNC_IMPL(__imp__sub_820E52A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E52A8"))) PPC_WEAK_FUNC(sub_820E52A8);
PPC_FUNC_IMPL(__imp__sub_820E52A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E52B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e5320
	if (ctx.cr6.eq) goto loc_820E5320;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e5320
	if (ctx.cr6.eq) goto loc_820E5320;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E52D8:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E52F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e5314
	if (ctx.cr6.eq) goto loc_820E5314;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E5314:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820e52d8
	if (ctx.cr6.lt) goto loc_820E52D8;
loc_820E5320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E5328"))) PPC_WEAK_FUNC(sub_820E5328);
PPC_FUNC_IMPL(__imp__sub_820E5328) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e537c
	if (ctx.cr6.eq) goto loc_820E537C;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e537c
	if (ctx.cr6.eq) goto loc_820E537C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E5358:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820e5358
	if (ctx.cr6.lt) goto loc_820E5358;
loc_820E537C:
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

__attribute__((alias("__imp__sub_820E5394"))) PPC_WEAK_FUNC(sub_820E5394);
PPC_FUNC_IMPL(__imp__sub_820E5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5398"))) PPC_WEAK_FUNC(sub_820E5398);
PPC_FUNC_IMPL(__imp__sub_820E5398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e53ac
	if (!ctx.cr6.eq) goto loc_820E53AC;
loc_820E53A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E53AC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e53a4
	if (ctx.cr6.eq) goto loc_820E53A4;
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

__attribute__((alias("__imp__sub_820E53C8"))) PPC_WEAK_FUNC(sub_820E53C8);
PPC_FUNC_IMPL(__imp__sub_820E53C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e53dc
	if (!ctx.cr6.eq) goto loc_820E53DC;
loc_820E53D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E53DC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e53d4
	if (ctx.cr6.eq) goto loc_820E53D4;
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

__attribute__((alias("__imp__sub_820E53F8"))) PPC_WEAK_FUNC(sub_820E53F8);
PPC_FUNC_IMPL(__imp__sub_820E53F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820E5400;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e5458
	if (ctx.cr6.eq) goto loc_820E5458;
	// bl 0x8222e080
	ctx.lr = 0x820E5424;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e5458
	if (ctx.cr6.eq) goto loc_820E5458;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5458
	if (ctx.cr6.eq) goto loc_820E5458;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E5458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820E5460"))) PPC_WEAK_FUNC(sub_820E5460);
PPC_FUNC_IMPL(__imp__sub_820E5460) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5488
	if (!ctx.cr6.eq) goto loc_820E5488;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E5488:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820E54AC"))) PPC_WEAK_FUNC(sub_820E54AC);
PPC_FUNC_IMPL(__imp__sub_820E54AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E54B0"))) PPC_WEAK_FUNC(sub_820E54B0);
PPC_FUNC_IMPL(__imp__sub_820E54B0) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e54d8
	if (!ctx.cr6.eq) goto loc_820E54D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E54D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E54E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820E54FC"))) PPC_WEAK_FUNC(sub_820E54FC);
PPC_FUNC_IMPL(__imp__sub_820E54FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5500"))) PPC_WEAK_FUNC(sub_820E5500);
PPC_FUNC_IMPL(__imp__sub_820E5500) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5528
	if (!ctx.cr6.eq) goto loc_820E5528;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E5528:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820E554C"))) PPC_WEAK_FUNC(sub_820E554C);
PPC_FUNC_IMPL(__imp__sub_820E554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5550"))) PPC_WEAK_FUNC(sub_820E5550);
PPC_FUNC_IMPL(__imp__sub_820E5550) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5578
	if (!ctx.cr6.eq) goto loc_820E5578;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E5578:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820E559C"))) PPC_WEAK_FUNC(sub_820E559C);
PPC_FUNC_IMPL(__imp__sub_820E559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E55A0"))) PPC_WEAK_FUNC(sub_820E55A0);
PPC_FUNC_IMPL(__imp__sub_820E55A0) {
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
	// bl 0x8215bd08
	ctx.lr = 0x820E55B8;
	sub_8215BD08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82256338
	ctx.lr = 0x820E55C8;
	sub_82256338(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E55DC"))) PPC_WEAK_FUNC(sub_820E55DC);
PPC_FUNC_IMPL(__imp__sub_820E55DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E55E0"))) PPC_WEAK_FUNC(sub_820E55E0);
PPC_FUNC_IMPL(__imp__sub_820E55E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e55f0
	if (!ctx.cr6.eq) goto loc_820E55F0;
	// blr 
	return;
loc_820E55F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820E5600"))) PPC_WEAK_FUNC(sub_820E5600);
PPC_FUNC_IMPL(__imp__sub_820E5600) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5610
	if (!ctx.cr6.eq) goto loc_820E5610;
	// blr 
	return;
loc_820E5610:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820E5620"))) PPC_WEAK_FUNC(sub_820E5620);
PPC_FUNC_IMPL(__imp__sub_820E5620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
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

__attribute__((alias("__imp__sub_820E5648"))) PPC_WEAK_FUNC(sub_820E5648);
PPC_FUNC_IMPL(__imp__sub_820E5648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E564C"))) PPC_WEAK_FUNC(sub_820E564C);
PPC_FUNC_IMPL(__imp__sub_820E564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5650"))) PPC_WEAK_FUNC(sub_820E5650);
PPC_FUNC_IMPL(__imp__sub_820E5650) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5660
	if (!ctx.cr6.eq) goto loc_820E5660;
	// blr 
	return;
loc_820E5660:
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

__attribute__((alias("__imp__sub_820E5670"))) PPC_WEAK_FUNC(sub_820E5670);
PPC_FUNC_IMPL(__imp__sub_820E5670) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5680
	if (!ctx.cr6.eq) goto loc_820E5680;
	// blr 
	return;
loc_820E5680:
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

__attribute__((alias("__imp__sub_820E5690"))) PPC_WEAK_FUNC(sub_820E5690);
PPC_FUNC_IMPL(__imp__sub_820E5690) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e56a0
	if (!ctx.cr6.eq) goto loc_820E56A0;
	// blr 
	return;
loc_820E56A0:
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

__attribute__((alias("__imp__sub_820E56B0"))) PPC_WEAK_FUNC(sub_820E56B0);
PPC_FUNC_IMPL(__imp__sub_820E56B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E56B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,18152
	ctx.r9.s64 = ctx.r10.s64 + 18152;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x820e5bb0
	ctx.lr = 0x820E56EC;
	sub_820E5BB0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e5ad8
	ctx.lr = 0x820E56F8;
	sub_820E5AD8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5a60
	ctx.lr = 0x820E5704;
	sub_820E5A60(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x820e5988
	ctx.lr = 0x820E570C;
	sub_820E5988(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820E571C"))) PPC_WEAK_FUNC(sub_820E571C);
PPC_FUNC_IMPL(__imp__sub_820E571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5720"))) PPC_WEAK_FUNC(sub_820E5720);
PPC_FUNC_IMPL(__imp__sub_820E5720) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,18152
	ctx.r10.s64 = ctx.r11.s64 + 18152;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820e5764
	if (ctx.cr6.eq) goto loc_820E5764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E5764:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e578c
	if (ctx.cr6.eq) goto loc_820E578C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E578C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E578C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e57b0
	if (ctx.cr6.eq) goto loc_820E57B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E57B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E57B0:
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

__attribute__((alias("__imp__sub_820E57CC"))) PPC_WEAK_FUNC(sub_820E57CC);
PPC_FUNC_IMPL(__imp__sub_820E57CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E57D0"))) PPC_WEAK_FUNC(sub_820E57D0);
PPC_FUNC_IMPL(__imp__sub_820E57D0) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x820E57E8;
	sub_822AA648(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E57FC"))) PPC_WEAK_FUNC(sub_820E57FC);
PPC_FUNC_IMPL(__imp__sub_820E57FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5800"))) PPC_WEAK_FUNC(sub_820E5800);
PPC_FUNC_IMPL(__imp__sub_820E5800) {
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
	// bl 0x820e5720
	ctx.lr = 0x820E5820;
	sub_820E5720(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e583c
	if (ctx.cr6.eq) goto loc_820E583C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E5838;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E583C:
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

__attribute__((alias("__imp__sub_820E5854"))) PPC_WEAK_FUNC(sub_820E5854);
PPC_FUNC_IMPL(__imp__sub_820E5854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5858"))) PPC_WEAK_FUNC(sub_820E5858);
PPC_FUNC_IMPL(__imp__sub_820E5858) {
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
	// bl 0x82183850
	ctx.lr = 0x820E5878;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820e5890
	if (ctx.cr6.eq) goto loc_820E5890;
	// li r3,3960
	ctx.r3.s64 = 3960;
	// bl 0x82183448
	ctx.lr = 0x820E588C;
	sub_82183448(ctx, base);
	// b 0x820e5898
	goto loc_820E5898;
loc_820E5890:
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x821845a0
	ctx.lr = 0x820E5898;
	sub_821845A0(ctx, base);
loc_820E5898:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e58b0
	if (ctx.cr6.eq) goto loc_820E58B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e5c10
	ctx.lr = 0x820E58AC;
	sub_820E5C10(ctx, base);
	// b 0x820e58b4
	goto loc_820E58B4;
loc_820E58B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E58B4:
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

__attribute__((alias("__imp__sub_820E58CC"))) PPC_WEAK_FUNC(sub_820E58CC);
PPC_FUNC_IMPL(__imp__sub_820E58CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E58D0"))) PPC_WEAK_FUNC(sub_820E58D0);
PPC_FUNC_IMPL(__imp__sub_820E58D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18252
	ctx.r10.s64 = ctx.r11.s64 + 18252;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821857f0
	sub_821857F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820E58E0"))) PPC_WEAK_FUNC(sub_820E58E0);
PPC_FUNC_IMPL(__imp__sub_820E58E0) {
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
	ctx.lr = 0x820E5900;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,18252
	ctx.r10.s64 = ctx.r11.s64 + 18252;
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

__attribute__((alias("__imp__sub_820E5924"))) PPC_WEAK_FUNC(sub_820E5924);
PPC_FUNC_IMPL(__imp__sub_820E5924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5928"))) PPC_WEAK_FUNC(sub_820E5928);
PPC_FUNC_IMPL(__imp__sub_820E5928) {
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
	// addi r10,r11,18252
	ctx.r10.s64 = ctx.r11.s64 + 18252;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x820E5954;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e5970
	if (ctx.cr6.eq) goto loc_820E5970;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E596C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E5970:
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

__attribute__((alias("__imp__sub_820E5988"))) PPC_WEAK_FUNC(sub_820E5988);
PPC_FUNC_IMPL(__imp__sub_820E5988) {
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
	ctx.lr = 0x820E5998;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820e59b0
	if (ctx.cr6.eq) goto loc_820E59B0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82183448
	ctx.lr = 0x820E59AC;
	sub_82183448(ctx, base);
	// b 0x820e59b8
	goto loc_820E59B8;
loc_820E59B0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820E59B8;
	sub_821845A0(ctx, base);
loc_820E59B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e59d4
	if (ctx.cr6.eq) goto loc_820E59D4;
	// bl 0x820e6818
	ctx.lr = 0x820E59C4;
	sub_820E6818(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E59D4:
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

__attribute__((alias("__imp__sub_820E59E8"))) PPC_WEAK_FUNC(sub_820E59E8);
PPC_FUNC_IMPL(__imp__sub_820E59E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r10,r11,18276
	ctx.r10.s64 = ctx.r11.s64 + 18276;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E59FC"))) PPC_WEAK_FUNC(sub_820E59FC);
PPC_FUNC_IMPL(__imp__sub_820E59FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5A00"))) PPC_WEAK_FUNC(sub_820E5A00);
PPC_FUNC_IMPL(__imp__sub_820E5A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18276
	ctx.r10.s64 = ctx.r11.s64 + 18276;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5A10"))) PPC_WEAK_FUNC(sub_820E5A10);
PPC_FUNC_IMPL(__imp__sub_820E5A10) {
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
	// addi r9,r11,18276
	ctx.r9.s64 = ctx.r11.s64 + 18276;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820e5a48
	if (ctx.cr6.eq) goto loc_820E5A48;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E5A44;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E5A48:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5A5C"))) PPC_WEAK_FUNC(sub_820E5A5C);
PPC_FUNC_IMPL(__imp__sub_820E5A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5A60"))) PPC_WEAK_FUNC(sub_820E5A60);
PPC_FUNC_IMPL(__imp__sub_820E5A60) {
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
	ctx.lr = 0x820E5A78;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820e5a90
	if (ctx.cr6.eq) goto loc_820E5A90;
	// li r3,12896
	ctx.r3.s64 = 12896;
	// bl 0x82183448
	ctx.lr = 0x820E5A8C;
	sub_82183448(ctx, base);
	// b 0x820e5a98
	goto loc_820E5A98;
loc_820E5A90:
	// li r3,806
	ctx.r3.s64 = 806;
	// bl 0x821845a0
	ctx.lr = 0x820E5A98;
	sub_821845A0(ctx, base);
loc_820E5A98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5abc
	if (ctx.cr6.eq) goto loc_820E5ABC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e6b68
	ctx.lr = 0x820E5AA8;
	sub_820E6B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E5ABC:
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

__attribute__((alias("__imp__sub_820E5AD4"))) PPC_WEAK_FUNC(sub_820E5AD4);
PPC_FUNC_IMPL(__imp__sub_820E5AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5AD8"))) PPC_WEAK_FUNC(sub_820E5AD8);
PPC_FUNC_IMPL(__imp__sub_820E5AD8) {
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
	ctx.lr = 0x820E5AF0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820e5b08
	if (ctx.cr6.eq) goto loc_820E5B08;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x820E5B04;
	sub_82183448(ctx, base);
	// b 0x820e5b10
	goto loc_820E5B10;
loc_820E5B08:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820E5B10;
	sub_821845A0(ctx, base);
loc_820E5B10:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5b34
	if (ctx.cr6.eq) goto loc_820E5B34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e6fa8
	ctx.lr = 0x820E5B20;
	sub_820E6FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E5B34:
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

__attribute__((alias("__imp__sub_820E5B4C"))) PPC_WEAK_FUNC(sub_820E5B4C);
PPC_FUNC_IMPL(__imp__sub_820E5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5B50"))) PPC_WEAK_FUNC(sub_820E5B50);
PPC_FUNC_IMPL(__imp__sub_820E5B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18292
	ctx.r10.s64 = ctx.r11.s64 + 18292;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5B60"))) PPC_WEAK_FUNC(sub_820E5B60);
PPC_FUNC_IMPL(__imp__sub_820E5B60) {
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
	// addi r9,r11,18292
	ctx.r9.s64 = ctx.r11.s64 + 18292;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820e5b98
	if (ctx.cr6.eq) goto loc_820E5B98;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E5B94;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E5B98:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5BAC"))) PPC_WEAK_FUNC(sub_820E5BAC);
PPC_FUNC_IMPL(__imp__sub_820E5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5BB0"))) PPC_WEAK_FUNC(sub_820E5BB0);
PPC_FUNC_IMPL(__imp__sub_820E5BB0) {
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
	ctx.lr = 0x820E5BC0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820e5bd8
	if (ctx.cr6.eq) goto loc_820E5BD8;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82183448
	ctx.lr = 0x820E5BD4;
	sub_82183448(ctx, base);
	// b 0x820e5be0
	goto loc_820E5BE0;
loc_820E5BD8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820E5BE0;
	sub_821845A0(ctx, base);
loc_820E5BE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5bfc
	if (ctx.cr6.eq) goto loc_820E5BFC;
	// bl 0x820e73a0
	ctx.lr = 0x820E5BEC;
	sub_820E73A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E5BFC:
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

__attribute__((alias("__imp__sub_820E5C10"))) PPC_WEAK_FUNC(sub_820E5C10);
PPC_FUNC_IMPL(__imp__sub_820E5C10) {
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
	// bl 0x820e56b0
	ctx.lr = 0x820E5C2C;
	sub_820E56B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,18344
	ctx.r10.s64 = ctx.r11.s64 + 18344;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r3,129
	ctx.r3.s64 = 129;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r30.u32);
	// stw r30,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r30.u32);
	// bl 0x822565c8
	ctx.lr = 0x820E5C80;
	sub_822565C8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5c94
	if (ctx.cr6.eq) goto loc_820E5C94;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820e5c98
	if (!ctx.cr6.eq) goto loc_820E5C98;
loc_820E5C94:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_820E5C98:
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// li r4,3848
	ctx.r4.s64 = 3848;
	// std r30,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r30.u64);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// bl 0x822aa648
	ctx.lr = 0x820E5CB4;
	sub_822AA648(ctx, base);
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

__attribute__((alias("__imp__sub_820E5CD0"))) PPC_WEAK_FUNC(sub_820E5CD0);
PPC_FUNC_IMPL(__imp__sub_820E5CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5CD8"))) PPC_WEAK_FUNC(sub_820E5CD8);
PPC_FUNC_IMPL(__imp__sub_820E5CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3952(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3952);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5CE0"))) PPC_WEAK_FUNC(sub_820E5CE0);
PPC_FUNC_IMPL(__imp__sub_820E5CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3956(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3956);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5CE8"))) PPC_WEAK_FUNC(sub_820E5CE8);
PPC_FUNC_IMPL(__imp__sub_820E5CE8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bgt cr6,0x820e5d80
	if (ctx.cr6.gt) goto loc_820E5D80;
	// beq cr6,0x820e5d68
	if (ctx.cr6.eq) goto loc_820E5D68;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// beq cr6,0x820e5d4c
	if (ctx.cr6.eq) goto loc_820E5D4C;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// bne cr6,0x820e5d94
	if (!ctx.cr6.eq) goto loc_820E5D94;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_820E5D4C:
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E5D68:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820E5D80:
	// lis r11,3588
	ctx.r11.s64 = 235143168;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820e5d94
	if (!ctx.cr6.eq) goto loc_820E5D94;
	// li r3,22
	ctx.r3.s64 = 22;
loc_820E5D94:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5DA8"))) PPC_WEAK_FUNC(sub_820E5DA8);
PPC_FUNC_IMPL(__imp__sub_820E5DA8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e5dec
	if (ctx.cr6.eq) goto loc_820E5DEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256578
	ctx.lr = 0x820E5DE0;
	sub_82256578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// beq cr6,0x820e5df0
	if (ctx.cr6.eq) goto loc_820E5DF0;
loc_820E5DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E5DF0:
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

__attribute__((alias("__imp__sub_820E5E04"))) PPC_WEAK_FUNC(sub_820E5E04);
PPC_FUNC_IMPL(__imp__sub_820E5E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5E08"))) PPC_WEAK_FUNC(sub_820E5E08);
PPC_FUNC_IMPL(__imp__sub_820E5E08) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82352360
	ctx.lr = 0x820E5E24;
	sub_82352360(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x820e5e34
	if (ctx.cr6.eq) goto loc_820E5E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E5E34:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5E48"))) PPC_WEAK_FUNC(sub_820E5E48);
PPC_FUNC_IMPL(__imp__sub_820E5E48) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82352388
	ctx.lr = 0x820E5E68;
	sub_82352388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x820e5e78
	if (ctx.cr6.eq) goto loc_820E5E78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E5E78:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820E5E8C"))) PPC_WEAK_FUNC(sub_820E5E8C);
PPC_FUNC_IMPL(__imp__sub_820E5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5E90"))) PPC_WEAK_FUNC(sub_820E5E90);
PPC_FUNC_IMPL(__imp__sub_820E5E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x820e5eb4
	if (!ctx.cr6.lt) goto loc_820E5EB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_820E5EB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5EBC"))) PPC_WEAK_FUNC(sub_820E5EBC);
PPC_FUNC_IMPL(__imp__sub_820E5EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5EC0"))) PPC_WEAK_FUNC(sub_820E5EC0);
PPC_FUNC_IMPL(__imp__sub_820E5EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x820e5ee4
	if (!ctx.cr6.lt) goto loc_820E5EE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_820E5EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5EEC"))) PPC_WEAK_FUNC(sub_820E5EEC);
PPC_FUNC_IMPL(__imp__sub_820E5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5EF0"))) PPC_WEAK_FUNC(sub_820E5EF0);
PPC_FUNC_IMPL(__imp__sub_820E5EF0) {
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
loc_820E5F0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E5F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e5f54
	if (!ctx.cr6.eq) goto loc_820E5F54;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820e5f0c
	if (ctx.cr6.lt) goto loc_820E5F0C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820E5F3C:
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
loc_820E5F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820e5f3c
	goto loc_820E5F3C;
}

__attribute__((alias("__imp__sub_820E5F5C"))) PPC_WEAK_FUNC(sub_820E5F5C);
PPC_FUNC_IMPL(__imp__sub_820E5F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E5F60"))) PPC_WEAK_FUNC(sub_820E5F60);
PPC_FUNC_IMPL(__imp__sub_820E5F60) {
	PPC_FUNC_PROLOGUE();
	// rldicl r11,r4,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x820e5f80
	if (!ctx.cr6.eq) goto loc_820E5F80;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E5F80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820E5F88"))) PPC_WEAK_FUNC(sub_820E5F88);
PPC_FUNC_IMPL(__imp__sub_820E5F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820E5F90;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,3956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3956, ctx.r27.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3952, ctx.r8.u32);
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820E5FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820e5fdc
	if (!ctx.cr6.eq) goto loc_820E5FDC;
	// stw r27,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820E5FDC:
	// lwz r11,3952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3952);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e6068
	if (!ctx.cr6.gt) goto loc_820E6068;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
loc_820E5FF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E6010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpld cr6,r3,r25
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r25.u64, ctx.xer);
	// beq cr6,0x820e6030
	if (ctx.cr6.eq) goto loc_820E6030;
	// lwz r11,3952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3952);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e5ff4
	if (ctx.cr6.lt) goto loc_820E5FF4;
	// b 0x820e6068
	goto loc_820E6068;
loc_820E6030:
	// mulli r11,r29,120
	ctx.r11.s64 = ctx.r29.s64 * 120;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e605c
	if (!ctx.cr6.eq) goto loc_820E605C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r11.u32);
	// stw r11,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820E605C:
	// ld r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 152);
	// lwz r26,144(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_820E6068:
	// lwz r11,3952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3952);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e60d0
	if (!ctx.cr6.gt) goto loc_820E60D0;
	// addi r30,r31,148
	ctx.r30.s64 = ctx.r31.s64 + 148;
loc_820E607C:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820e60bc
	if (!ctx.cr6.eq) goto loc_820E60BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e60bc
	if (ctx.cr6.eq) goto loc_820E60BC;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x821847c0
	ctx.lr = 0x820E60A8;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e60bc
	if (!ctx.cr6.eq) goto loc_820E60BC;
	// lwz r11,3956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3956);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r11.u32);
loc_820E60BC:
	// lwz r11,3952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3952);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e607c
	if (ctx.cr6.lt) goto loc_820E607C;
loc_820E60D0:
	// lwz r11,3956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3956);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3956, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820E60EC"))) PPC_WEAK_FUNC(sub_820E60EC);
PPC_FUNC_IMPL(__imp__sub_820E60EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E60F0"))) PPC_WEAK_FUNC(sub_820E60F0);
PPC_FUNC_IMPL(__imp__sub_820E60F0) {
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
	// bl 0x822565d8
	ctx.lr = 0x820E6104;
	sub_822565D8(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
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
}

__attribute__((alias("__imp__sub_820E6120"))) PPC_WEAK_FUNC(sub_820E6120);
PPC_FUNC_IMPL(__imp__sub_820E6120) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82352328
	ctx.lr = 0x820E6138;
	sub_82352328(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
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
}

__attribute__((alias("__imp__sub_820E6154"))) PPC_WEAK_FUNC(sub_820E6154);
PPC_FUNC_IMPL(__imp__sub_820E6154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6158"))) PPC_WEAK_FUNC(sub_820E6158);
PPC_FUNC_IMPL(__imp__sub_820E6158) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,18344
	ctx.r10.s64 = ctx.r11.s64 + 18344;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820e61a0
	if (ctx.cr6.eq) goto loc_820E61A0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e61a0
	if (ctx.cr6.eq) goto loc_820E61A0;
	// bl 0x82088268
	ctx.lr = 0x820E6198;
	sub_82088268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820E61A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5720
	ctx.lr = 0x820E61A8;
	sub_820E5720(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e61c4
	if (ctx.cr6.eq) goto loc_820E61C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820E61C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820E61C4:
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

__attribute__((alias("__imp__sub_820E61DC"))) PPC_WEAK_FUNC(sub_820E61DC);
PPC_FUNC_IMPL(__imp__sub_820E61DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E61E0"))) PPC_WEAK_FUNC(sub_820E61E0);
PPC_FUNC_IMPL(__imp__sub_820E61E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820E61E8;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r26.u32);
	// stw r25,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r25.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r26,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r26.u32);
	// addi r27,r3,72
	ctx.r27.s64 = ctx.r3.s64 + 72;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r26,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r26.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r26,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r26.u32);
loc_820E6224:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256340
	ctx.lr = 0x820E622C;
	sub_82256340(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820e630c
	if (ctx.cr6.lt) goto loc_820E630C;
	// beq cr6,0x820e6298
	if (ctx.cr6.eq) goto loc_820E6298;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x820e6324
	if (!ctx.cr6.lt) goto loc_820E6324;
	// bl 0x8215bd08
	ctx.lr = 0x820E6244;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e626c
	if (ctx.cr6.eq) goto loc_820E626C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820E626C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E626C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820E6298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E6298:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,2
	ctx.r4.s64 = 2;
	// or r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 | ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// bl 0x82256678
	ctx.lr = 0x820E62C0;
	sub_82256678(ctx, base);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e62d0
	if (ctx.cr6.eq) goto loc_820E62D0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_820E62D0:
	// bl 0x8215bd08
	ctx.lr = 0x820E62D4;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820e6304
	if (!ctx.cr6.eq) goto loc_820E6304;
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x820e6304
	if (ctx.cr6.eq) goto loc_820E6304;
	// bl 0x8215bd08
	ctx.lr = 0x820E62F0;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
loc_820E6304:
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
	// b 0x820e6324
	goto loc_820E6324;
loc_820E630C:
	// bl 0x8215bd08
	ctx.lr = 0x820E6310;
	sub_8215BD08(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820e6324
	if (!ctx.cr6.eq) goto loc_820E6324;
	// bl 0x8215bd08
	ctx.lr = 0x820E6320;
	sub_8215BD08(ctx, base);
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
loc_820E6324:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820e6224
	if (ctx.cr6.lt) goto loc_820E6224;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_820E634C:
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e6370
	if (!ctx.cr6.eq) goto loc_820E6370;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820e634c
	if (ctx.cr6.lt) goto loc_820E634C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_820E6370:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820E637C"))) PPC_WEAK_FUNC(sub_820E637C);
PPC_FUNC_IMPL(__imp__sub_820E637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820E6380"))) PPC_WEAK_FUNC(sub_820E6380);
PPC_FUNC_IMPL(__imp__sub_820E6380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820E6388;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bd08
	ctx.lr = 0x820E6394;
	sub_8215BD08(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e63f8
	if (ctx.cr6.eq) goto loc_820E63F8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820e63f8
	if (ctx.cr6.eq) goto loc_820E63F8;
	// bl 0x8215bd60
	ctx.lr = 0x820E63B0;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e63f8
	if (!ctx.cr6.eq) goto loc_820E63F8;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r9,r29,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820e63f8
	if (ctx.cr6.eq) goto loc_820E63F8;
	// bl 0x8215bd60
	ctx.lr = 0x820E63E0;
	sub_8215BD60(ctx, base);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// bl 0x822230d0
	ctx.lr = 0x820E63E8;
	sub_822230D0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820e63f8
	if (!ctx.cr6.eq) goto loc_820E63F8;
	// bl 0x8215bd60
	ctx.lr = 0x820E63F4;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd28
	ctx.lr = 0x820E63F8;
	sub_8215CD28(ctx, base);
loc_820E63F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

