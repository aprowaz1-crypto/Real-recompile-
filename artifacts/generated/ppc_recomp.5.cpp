#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820AD200"))) PPC_WEAK_FUNC(sub_820AD200);
PPC_FUNC_IMPL(__imp__sub_820AD200) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82103ee0
	ctx.lr = 0x820AD220;
	sub_82103EE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r9,11200
	ctx.r8.s64 = ctx.r9.s64 + 11200;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lfs f0,-29728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29728);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f31,244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// bl 0x821a9990
	ctx.lr = 0x820AD258;
	sub_821A9990(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r30.u32);
	// addi r5,r7,29604
	ctx.r5.s64 = ctx.r7.s64 + 29604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r5.u32);
	// stw r6,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r6.u32);
	// bl 0x820ac9b0
	ctx.lr = 0x820AD278;
	sub_820AC9B0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f31,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f0,2144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f31,280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f31,1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1224, temp.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1220, temp.u32);
	// stfs f31,1216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1216, temp.u32);
	// stfs f0,1228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1228, temp.u32);
	// stfs f31,1240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1240, temp.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f31,1232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1232, temp.u32);
	// stfs f0,1244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1244, temp.u32);
	// stfs f31,1256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// stfs f31,1252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// stfs f31,1248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// stfs f0,1260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// stfs f31,1264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f0,1276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AD300"))) PPC_WEAK_FUNC(sub_820AD300);
PPC_FUNC_IMPL(__imp__sub_820AD300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820AD308;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r25,r11,-7560
	ctx.r25.s64 = ctx.r11.s64 + -7560;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820ad3d4
	if (ctx.cr6.eq) goto loc_820AD3D4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad3d4
	if (ctx.cr6.eq) goto loc_820AD3D4;
	// bl 0x820ac2c0
	ctx.lr = 0x820AD354;
	sub_820AC2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ad370
	if (!ctx.cr6.eq) goto loc_820AD370;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x820ac2c0
	ctx.lr = 0x820AD368;
	sub_820AC2C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ad3d4
	if (ctx.cr6.eq) goto loc_820AD3D4;
loc_820AD370:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r27,r11,-29648
	ctx.r27.s64 = ctx.r11.s64 + -29648;
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 252, temp.u32);
	// lfs f0,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1308(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1308, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
loc_820AD394:
	// bge cr6,0x820ad39c
	if (!ctx.cr6.lt) goto loc_820AD39C;
	// stfs f0,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 252, temp.u32);
loc_820AD39C:
	// lwz r11,-8728(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ad924
	if (!ctx.cr6.eq) goto loc_820AD924;
	// lfs f12,1308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1304(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x820ad938
	if (ctx.cr6.eq) goto loc_820AD938;
	// lfs f11,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfs f0,60(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ble cr6,0x820ad8f8
	if (!ctx.cr6.gt) goto loc_820AD8F8;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x820ad8fc
	goto loc_820AD8FC;
loc_820AD3D4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r27,r11,-29680
	ctx.r27.s64 = ctx.r11.s64 + -29680;
	// bl 0x822aa648
	ctx.lr = 0x820AD3E8;
	sub_822AA648(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_820AD3EC:
	// lwzx r31,r30,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ad434
	if (ctx.cr6.eq) goto loc_820AD434;
	// lbz r11,573(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 573);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ad434
	if (!ctx.cr6.eq) goto loc_820AD434;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AD418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ad42c
	if (ctx.cr6.eq) goto loc_820AD42C;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820ad434
	if (ctx.cr6.eq) goto loc_820AD434;
loc_820AD42C:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
loc_820AD434:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x820ad3ec
	if (ctx.cr6.lt) goto loc_820AD3EC;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad778
	if (ctx.cr6.eq) goto loc_820AD778;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad778
	if (ctx.cr6.eq) goto loc_820AD778;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ad778
	if (!ctx.cr6.gt) goto loc_820AD778;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x820AD474;
	sub_821A2A60(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// beq cr6,0x820ad668
	if (ctx.cr6.eq) goto loc_820AD668;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r7,-4900(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// lwz r6,712(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 712);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820ad4a8
	if (ctx.cr6.eq) goto loc_820AD4A8;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ad4b4
	if (ctx.cr6.eq) goto loc_820AD4B4;
loc_820AD4A8:
	// lwz r11,748(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ad668
	if (ctx.cr6.eq) goto loc_820AD668;
loc_820AD4B4:
	// lwz r11,988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// lfs f0,592(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f0.f64 = double(temp.f32);
	// addi r22,r1,128
	ctx.r22.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ad578
	if (ctx.cr6.eq) goto loc_820AD578;
	// lwz r11,432(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r5,432(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 432);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lfs f13,596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,600(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r21,0(r5)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// std r21,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r21.u64);
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r11,0(r22)
	PPC_STORE_U64(ctx.r22.u32 + 0, ctx.r11.u64);
	// std r4,8(r22)
	PPC_STORE_U64(ctx.r22.u32 + 8, ctx.r4.u64);
	// b 0x820ad624
	goto loc_820AD624;
loc_820AD578:
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,600(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lfs f12,596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r23,56(r10)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// ld r21,56(r11)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// ld r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r23,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r23.u64);
	// std r21,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r21.u64);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r4.u64);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// std r10,8(r22)
	PPC_STORE_U64(ctx.r22.u32 + 8, ctx.r10.u64);
	// std r5,0(r22)
	PPC_STORE_U64(ctx.r22.u32 + 0, ctx.r5.u64);
loc_820AD624:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820ad63c
	if (ctx.cr6.eq) goto loc_820AD63C;
	// lwz r11,712(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 712);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ad668
	if (ctx.cr6.eq) goto loc_820AD668;
loc_820AD63C:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// bgt cr6,0x820ad664
	if (ctx.cr6.gt) goto loc_820AD664;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AD664:
	// stw r11,1280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1280, ctx.r11.u32);
loc_820AD668:
	// lwz r11,1280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ad688
	if (ctx.cr6.eq) goto loc_820AD688;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
loc_820AD688:
	// lwz r11,988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ad6a0
	if (ctx.cr6.eq) goto loc_820AD6A0;
	// lwz r4,432(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 432);
	// lwz r3,432(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// b 0x820ad6b0
	goto loc_820AD6B0;
loc_820AD6A0:
	// lwz r11,112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
loc_820AD6B0:
	// bl 0x82187220
	ctx.lr = 0x820AD6B4;
	sub_82187220(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820ad6e0
	if (!ctx.cr6.gt) goto loc_820AD6E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820ad6fc
	goto loc_820AD6FC;
loc_820AD6E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ad6fc
	if (!ctx.cr6.lt) goto loc_820AD6FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820AD6FC:
	// lwz r11,-8728(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8728);
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ad774
	if (!ctx.cr6.eq) goto loc_820AD774;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f1,1312(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1312);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820ac340
	ctx.lr = 0x820AD71C;
	sub_820AC340(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11272);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820ad734
	if (ctx.cr6.gt) goto loc_820AD734;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820AD734:
	// stw r11,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f30,288(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820ac340
	ctx.lr = 0x820AD748;
	sub_820AC340(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,9048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82186ab0
	ctx.lr = 0x820AD768;
	sub_82186AB0(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1312(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1312, temp.u32);
	// b 0x820ad778
	goto loc_820AD778;
loc_820AD774:
	// stfs f0,1312(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1312, temp.u32);
loc_820AD778:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ad888
	if (ctx.cr6.eq) goto loc_820AD888;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ad888
	if (ctx.cr6.eq) goto loc_820AD888;
	// lwz r9,988(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ad7ac
	if (ctx.cr6.eq) goto loc_820AD7AC;
	// lwz r4,432(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// b 0x820ad884
	goto loc_820AD884;
loc_820AD7AC:
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r9,48
	ctx.r31.s64 = ctx.r9.s64 + 48;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 48);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,8060(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// ld r9,56(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 56);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f8,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f4,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// ld r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// lwz r11,188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_820AD884:
	// bl 0x821871d8
	ctx.lr = 0x820AD888;
	sub_821871D8(ctx, base);
loc_820AD888:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// lfs f13,8328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x820ad8d4
	if (!ctx.cr6.gt) goto loc_820AD8D4;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,252(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 252, temp.u32);
	// lfs f0,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1308(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1308, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// b 0x820ad394
	goto loc_820AD394;
loc_820AD8D4:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820ad39c
	if (!ctx.cr6.lt) goto loc_820AD39C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 252, temp.u32);
	// lfs f0,7884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7884);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1308(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1308, temp.u32);
	// b 0x820ad39c
	goto loc_820AD39C;
loc_820AD8F8:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820AD8FC:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,1304(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1304, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820ad914
	if (!ctx.cr6.lt) goto loc_820AD914;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820AD914:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820ad92c
	if (!ctx.cr6.lt) goto loc_820AD92C;
	// stfs f12,1304(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1304, temp.u32);
	// b 0x820ad92c
	goto loc_820AD92C;
loc_820AD924:
	// lfs f0,1308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1304(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1304, temp.u32);
loc_820AD92C:
	// lwz r11,-8728(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ad990
	if (!ctx.cr6.eq) goto loc_820AD990;
loc_820AD938:
	// lfs f12,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,292(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x820ad998
	if (ctx.cr6.eq) goto loc_820AD998;
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// lfs f0,60(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ble cr6,0x820ad964
	if (!ctx.cr6.gt) goto loc_820AD964;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x820ad968
	goto loc_820AD968;
loc_820AD964:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820AD968:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,292(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 292, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820ad980
	if (!ctx.cr6.lt) goto loc_820AD980;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820AD980:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820ad998
	if (!ctx.cr6.lt) goto loc_820AD998;
	// stfs f12,292(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 292, temp.u32);
	// b 0x820ad998
	goto loc_820AD998;
loc_820AD990:
	// lfs f0,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,292(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 292, temp.u32);
loc_820AD998:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,964(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 964, temp.u32);
	// lfs f0,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820ad9bc
	if (!ctx.cr6.gt) goto loc_820AD9BC;
	// stfs f0,964(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 964, temp.u32);
loc_820AD9BC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820AD9CC"))) PPC_WEAK_FUNC(sub_820AD9CC);
PPC_FUNC_IMPL(__imp__sub_820AD9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AD9D0"))) PPC_WEAK_FUNC(sub_820AD9D0);
PPC_FUNC_IMPL(__imp__sub_820AD9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820AD9D8;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249924
	ctx.lr = 0x820AD9E0;
	sub_82249924(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r8,272(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ld r6,280(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// ld r5,264(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 264);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lfs f0,292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r3,1008
	ctx.r28.s64 = ctx.r3.s64 + 1008;
	// lfs f13,1312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lfs f30,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r8,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// bl 0x82187e38
	ctx.lr = 0x820ADA54;
	sub_82187E38(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r10,r11,-29712
	ctx.r10.s64 = ctx.r11.s64 + -29712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r9,-29712(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29712);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r9.u64);
	// std r8,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r8.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820ADA78;
	sub_8208EA90(ctx, base);
	// lfs f12,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1056(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1056);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,1060(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,1056(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f8,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f6,1064(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,1056
	ctx.r11.s64 = ctx.r31.s64 + 1056;
	// stfs f7,1060(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// lfs f5,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,1064(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1064, temp.u32);
	// lfs f3,960(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f30,272(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f30,276(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f2,280(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820ADAD0;
	sub_8208EA90(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-8728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8728);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820adbd0
	if (!ctx.cr6.eq) goto loc_820ADBD0;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmadds f27,f0,f0,f12
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f28,f10,f10,f11
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// bne cr6,0x820adb14
	if (!ctx.cr6.eq) goto loc_820ADB14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11284);
	ctx.f31.f64 = double(temp.f32);
loc_820ADB14:
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820adb28
	if (ctx.cr6.eq) goto loc_820ADB28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,8332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8332);
	ctx.f31.f64 = double(temp.f32);
loc_820ADB28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f29,11280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11280);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f30,11276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11276);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-7560
	ctx.r28.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ble cr6,0x820adb68
	if (!ctx.cr6.gt) goto loc_820ADB68;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// b 0x820adb6c
	goto loc_820ADB6C;
loc_820ADB68:
	// fmuls f1,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820ADB6C:
	// bl 0x82186cd8
	ctx.lr = 0x820ADB70;
	sub_82186CD8(ctx, base);
	// lfs f0,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ble cr6,0x820adbb0
	if (!ctx.cr6.gt) goto loc_820ADBB0;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82186cd8
	ctx.lr = 0x820ADB98;
	sub_82186CD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249970
	ctx.lr = 0x820ADBAC;
	sub_82249970(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820ADBB0:
	// fmuls f1,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82186cd8
	ctx.lr = 0x820ADBB8;
	sub_82186CD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249970
	ctx.lr = 0x820ADBCC;
	sub_82249970(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820ADBD0:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r10,-8724(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8724);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820adbf8
	if (!ctx.cr6.eq) goto loc_820ADBF8;
	// stw r10,-8728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8728, ctx.r10.u32);
	// stw r10,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249970
	ctx.lr = 0x820ADBF4;
	sub_82249970(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820ADBF8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-8724(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8724, ctx.r11.u32);
	// stw r10,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249970
	ctx.lr = 0x820ADC14;
	sub_82249970(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ADC18"))) PPC_WEAK_FUNC(sub_820ADC18);
PPC_FUNC_IMPL(__imp__sub_820ADC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ADC20;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249928
	ctx.lr = 0x820ADC28;
	sub_82249928(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r30,14520(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820add48
	if (ctx.cr6.eq) goto loc_820ADD48;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// lwz r11,-4900(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4900);
	// lwz r11,728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820add48
	if (!ctx.cr6.eq) goto loc_820ADD48;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820add48
	if (ctx.cr6.eq) goto loc_820ADD48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f28,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r29,9
	ctx.r29.s64 = 9;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f29,11296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11296);
	ctx.f29.f64 = double(temp.f32);
	// std r4,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r4.u64);
	// lfs f30,11292(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11292);
	ctx.f30.f64 = double(temp.f32);
	// std r5,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r5.u64);
	// lwz r28,-4900(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4900);
loc_820ADCB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820add10
	if (ctx.cr6.eq) goto loc_820ADD10;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stfs f28,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r28,272
	ctx.r4.s64 = ctx.r28.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820ADCEC;
	sub_8208EA90(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820add10
	if (ctx.cr6.lt) goto loc_820ADD10;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x820add04
	if (!ctx.cr6.lt) goto loc_820ADD04;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_820ADD04:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820add10
	if (!ctx.cr6.gt) goto loc_820ADD10;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_820ADD10:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820adcb4
	if (!ctx.cr0.eq) goto loc_820ADCB4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stfs f13,136(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// lfs f0,11288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11288);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// lwz r11,-4900(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4900);
	// lfs f12,544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
loc_820ADD48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x820ADD54;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820ADD58"))) PPC_WEAK_FUNC(sub_820ADD58);
PPC_FUNC_IMPL(__imp__sub_820ADD58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ac9b0
	ctx.lr = 0x820ADD74;
	sub_820AC9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac8f8
	ctx.lr = 0x820ADD7C;
	sub_820AC8F8(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820adea4
	if (ctx.cr6.eq) goto loc_820ADEA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,29604
	ctx.r9.s64 = ctx.r10.s64 + 29604;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820ADDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// bl 0x820ad300
	ctx.lr = 0x820ADDD4;
	sub_820AD300(ctx, base);
	// lfs f13,964(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,960(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f12,292(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// bl 0x820ad9d0
	ctx.lr = 0x820ADDF0;
	sub_820AD9D0(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r30,r10,-5136
	ctx.r30.s64 = ctx.r10.s64 + -5136;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// addi r6,r9,-29696
	ctx.r6.s64 = ctx.r9.s64 + -29696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ad078
	ctx.lr = 0x820ADE10;
	sub_820AD078(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// ld r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 256);
	// ld r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 264);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// std r10,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r10.u64);
	// std r9,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r9.u64);
	// ld r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r6.u64);
	// ld r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r5,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r5.u64);
	// ld r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r4,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r4.u64);
	// ld r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r3,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r3.u64);
	// ld r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// ld r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r9,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r9.u64);
	// bl 0x820adc18
	ctx.lr = 0x820ADE8C;
	sub_820ADC18(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-8728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8728, ctx.r11.u32);
	// stw r10,-8724(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8724, ctx.r10.u32);
loc_820ADEA4:
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

__attribute__((alias("__imp__sub_820ADEBC"))) PPC_WEAK_FUNC(sub_820ADEBC);
PPC_FUNC_IMPL(__imp__sub_820ADEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820ADEC0"))) PPC_WEAK_FUNC(sub_820ADEC0);
PPC_FUNC_IMPL(__imp__sub_820ADEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820ADEC8;
	sub_82248784(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820acdd0
	ctx.lr = 0x820ADEDC;
	sub_820ACDD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x820adf88
	if (!ctx.cr6.eq) goto loc_820ADF88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r29.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r29,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r29,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r29.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,1072
	ctx.r11.s64 = ctx.r31.s64 + 1072;
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stfs f12,1096(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// stfs f0,1088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// stfs f13,1092(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// stfs f0,1100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stfs f0,1128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stfs f0,1124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stfs f13,1132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1132, temp.u32);
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// stfs f0,1136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1136, temp.u32);
	// stw r28,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r28.u32);
	// lfs f12,11192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11192);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r29.u32);
	// lfs f11,9048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9048);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r29.u32);
	// stfs f0,1176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stw r28,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r28.u32);
	// stfs f12,1180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f11,1184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// stfs f13,1188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stfs f0,1192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820ADF88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r31,1072
	ctx.r30.s64 = ctx.r31.s64 + 1072;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820ae24c
	if (ctx.cr6.eq) goto loc_820AE24C;
	// lwz r11,1076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r10,-5052
	ctx.r9.s64 = ctx.r10.s64 + -5052;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820ae064
	if (!ctx.cr6.eq) goto loc_820AE064;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lfs f12,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f13,60(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// lfs f12,11192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11192);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r29.u32);
	// lfs f11,9048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9048);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r29.u32);
	// stfs f0,1176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stw r28,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r28.u32);
	// stfs f12,1180(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f11,1184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// stfs f13,1188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stfs f0,1192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820AE064:
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ae140
	if (ctx.cr6.lt) goto loc_820AE140;
	// beq cr6,0x820ae0c0
	if (ctx.cr6.eq) goto loc_820AE0C0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f30,20(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stfs f31,28(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lfs f0,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f31,56(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,48(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// b 0x820ae164
	goto loc_820AE164;
loc_820AE0C0:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ae164
	if (!ctx.cr6.eq) goto loc_820AE164;
	// lfs f0,1100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820ae0e8
	if (!ctx.cr6.gt) goto loc_820AE0E8;
	// bl 0x820ece30
	ctx.lr = 0x820AE0DC;
	sub_820ECE30(ctx, base);
	// lfs f0,1100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,1100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
loc_820AE0E8:
	// lfs f0,1100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820ae164
	if (ctx.cr6.gt) goto loc_820AE164;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f30,20(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stfs f31,28(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lfs f0,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f31,56(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,48(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r29.u32);
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// b 0x820ae164
	goto loc_820AE164;
loc_820AE140:
	// lfs f0,1088(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1096(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,1092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,1088(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820ae164
	if (!ctx.cr6.gt) goto loc_820AE164;
	// stfs f0,1088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1088, temp.u32);
	// stw r28,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r28.u32);
loc_820AE164:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ae24c
	if (ctx.cr6.eq) goto loc_820AE24C;
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r31,1120
	ctx.r11.s64 = ctx.r31.s64 + 1120;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r8,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// ld r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r4,1120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1120, ctx.r4.u64);
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// std r8,1128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1128, ctx.r8.u64);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820AE20C;
	sub_820A42E0(ctx, base);
	// lfs f5,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f5
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lfs f10,1088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f10,f5
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f5.f64));
	// stfs f9,256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// fmadds f8,f12,f10,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f4.f64));
	// stfs f8,260(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// fmadds f7,f11,f10,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f7,264(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
loc_820AE24C:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ae3b4
	if (ctx.cr6.eq) goto loc_820AE3B4;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ae324
	if (ctx.cr6.lt) goto loc_820AE324;
	// beq cr6,0x820ae2f0
	if (ctx.cr6.eq) goto loc_820AE2F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820ae2a4
	if (ctx.cr6.lt) goto loc_820AE2A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,1176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,1188(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stfs f31,1192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// stw r29,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r29.u32);
	// stw r29,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r29.u32);
	// stw r28,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r28.u32);
	// lfs f0,11192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f13,1184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// b 0x820ae344
	goto loc_820AE344;
loc_820AE2A4:
	// lfs f0,1176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,1176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x820ae344
	if (!ctx.cr6.lt) goto loc_820AE344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,1176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,1188(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1188, temp.u32);
	// stfs f31,1192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// stw r29,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r29.u32);
	// stw r29,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r29.u32);
	// stw r28,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r28.u32);
	// lfs f0,11192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f13,1184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1184, temp.u32);
	// b 0x820ae344
	goto loc_820AE344;
loc_820AE2F0:
	// lfs f0,1192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820ae30c
	if (!ctx.cr6.gt) goto loc_820AE30C;
	// bl 0x820ece30
	ctx.lr = 0x820AE300;
	sub_820ECE30(ctx, base);
	// lfs f0,1192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,1192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
loc_820AE30C:
	// lfs f0,1192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820ae344
	if (ctx.cr6.gt) goto loc_820AE344;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// b 0x820ae340
	goto loc_820AE340;
loc_820AE324:
	// lfs f0,1176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,1176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// ble cr6,0x820ae344
	if (!ctx.cr6.gt) goto loc_820AE344;
	// stw r28,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r28.u32);
loc_820AE340:
	// stfs f30,1176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
loc_820AE344:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ae3b4
	if (ctx.cr6.eq) goto loc_820AE3B4;
	// lfs f0,1180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,1008
	ctx.r4.s64 = ctx.r31.s64 + 1008;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820AE374;
	sub_8208EA90(ctx, base);
	// lfs f12,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f9,1176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f2,f6,f9,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f2,272(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// fmadds f1,f4,f9,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f1,276(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// fmadds f0,f3,f9,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_820AE3B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820AE3C4"))) PPC_WEAK_FUNC(sub_820AE3C4);
PPC_FUNC_IMPL(__imp__sub_820AE3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AE3C8"))) PPC_WEAK_FUNC(sub_820AE3C8);
PPC_FUNC_IMPL(__imp__sub_820AE3C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r5,704(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,700(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// addi r7,r10,22272
	ctx.r7.s64 = ctx.r10.s64 + 22272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82249d68
	ctx.lr = 0x820AE3FC;
	sub_82249D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ae418
	if (ctx.cr6.eq) goto loc_820AE418;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AE418:
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

__attribute__((alias("__imp__sub_820AE42C"))) PPC_WEAK_FUNC(sub_820AE42C);
PPC_FUNC_IMPL(__imp__sub_820AE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AE430"))) PPC_WEAK_FUNC(sub_820AE430);
PPC_FUNC_IMPL(__imp__sub_820AE430) {
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
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ae480
	if (ctx.cr6.eq) goto loc_820AE480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ae3c8
	ctx.lr = 0x820AE458;
	sub_820AE3C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ae480
	if (ctx.cr6.eq) goto loc_820AE480;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// bl 0x820ae3c8
	ctx.lr = 0x820AE46C;
	sub_820AE3C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820AE480:
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

__attribute__((alias("__imp__sub_820AE498"))) PPC_WEAK_FUNC(sub_820AE498);
PPC_FUNC_IMPL(__imp__sub_820AE498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820AE4A0;
	sub_82248770(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82249920
	ctx.lr = 0x820AE4A8;
	sub_82249920(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ae9d4
	if (!ctx.cr6.eq) goto loc_820AE9D4;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 980, ctx.r22.u32);
	// bl 0x820ac8f8
	ctx.lr = 0x820AE4C8;
	sub_820AC8F8(ctx, base);
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ae9cc
	if (!ctx.cr6.gt) goto loc_820AE9CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,29604
	ctx.r9.s64 = ctx.r10.s64 + 29604;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820AE4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,24(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// bl 0x820ad300
	ctx.lr = 0x820AE520;
	sub_820AD300(ctx, base);
	// lfs f13,964(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,960(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ad9d0
	ctx.lr = 0x820AE534;
	sub_820AD9D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820adec0
	ctx.lr = 0x820AE53C;
	sub_820ADEC0(ctx, base);
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ae550
	if (ctx.cr6.eq) goto loc_820AE550;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
loc_820AE550:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f28,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
	// stfs f28,972(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stfs f28,976(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// ble cr6,0x820ae62c
	if (!ctx.cr6.gt) goto loc_820AE62C;
	// lwz r11,1300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ae5e0
	if (!ctx.cr6.eq) goto loc_820AE5E0;
	// bl 0x8218fd40
	ctx.lr = 0x820AE58C;
	sub_8218FD40(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f13,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f10,272(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// bl 0x8218fd40
	ctx.lr = 0x820AE5A8;
	sub_8218FD40(ctx, base);
	// fsubs f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f8,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmadds f5,f6,f7,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// stfs f5,276(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x8218fd40
	ctx.lr = 0x820AE5C4;
	sub_8218FD40(ctx, base);
	// fsubs f4,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f3,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmadds f0,f1,f2,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// b 0x820ae62c
	goto loc_820AE62C;
loc_820AE5E0:
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ae608
	if (ctx.cr6.eq) goto loc_820AE608;
	// lwz r10,1292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lfs f0,1284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x820ae60c
	goto loc_820AE60C;
loc_820AE608:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_820AE60C:
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// stfs f0,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// ble cr6,0x820ae62c
	if (!ctx.cr6.gt) goto loc_820AE62C;
	// stw r22,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r22.u32);
loc_820AE62C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r24,r11,-29696
	ctx.r24.s64 = ctx.r11.s64 + -29696;
	// addi r30,r10,-5136
	ctx.r30.s64 = ctx.r10.s64 + -5136;
	// addi r25,r31,256
	ctx.r25.s64 = ctx.r31.s64 + 256;
	// addi r29,r31,272
	ctx.r29.s64 = ctx.r31.s64 + 272;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820ad078
	ctx.lr = 0x820AE658;
	sub_820AD078(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x820ae6f4
	if (!ctx.cr6.gt) goto loc_820AE6F4;
	// lwz r11,1300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ae6f4
	if (!ctx.cr6.eq) goto loc_820AE6F4;
	// bl 0x8218fd40
	ctx.lr = 0x820AE67C;
	sub_8218FD40(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11308);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8218fd40
	ctx.lr = 0x820AE690;
	sub_8218FD40(ctx, base);
	// fsubs f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8218fd40
	ctx.lr = 0x820AE6A4;
	sub_8218FD40(ctx, base);
	// fsubs f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,1284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f0,11272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f7,f26,f9
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f6,f27,f9
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x820AE6E4;
	sub_82187920(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82289c50
	ctx.lr = 0x820AE6F4;
	sub_82289C50(ctx, base);
loc_820AE6F4:
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
	// lwz r11,-4900(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4900);
	// lwz r11,728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ae710
	if (!ctx.cr6.eq) goto loc_820AE710;
	// lfs f0,1304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_820AE710:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// ld r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// ld r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// std r9,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r9.u64);
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// std r8,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r8.u64);
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// std r6,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r6.u64);
	// addi r26,r29,48
	ctx.r26.s64 = ctx.r29.s64 + 48;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// ld r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r7,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r7.u64);
	// ld r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r6,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r6.u64);
	// ld r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r5,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r5.u64);
	// ld r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r4,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r4.u64);
	// lfs f0,972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x820ae7a4
	if (!ctx.cr6.lt) goto loc_820AE7A4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820AE7A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820ae7cc
	if (ctx.cr6.gt) goto loc_820AE7CC;
	// lfs f0,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x820ae7c4
	if (!ctx.cr6.lt) goto loc_820AE7C4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820AE7C4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820ae930
	if (!ctx.cr6.gt) goto loc_820AE930;
loc_820AE7CC:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820AE7DC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820ae7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AE7DC;
	// lfs f11,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f10,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f5,f9,f13,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f4,f11,f12,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f3,f10,f0,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// bl 0x820a42e0
	ctx.lr = 0x820AE848;
	sub_820A42E0(ctx, base);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r6,29344
	ctx.r4.s64 = ctx.r6.s64 + 29344;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lbz r11,24332(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 24332);
	// lfs f1,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f0,11300(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r5,24332(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24332, ctx.r5.u8);
	// lfs f6,972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lbzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// fmuls f3,f10,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f11,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f10,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f9,f3,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f8,f12,f5
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,176(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r5.u64);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r7,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r7.u64);
	// std r4,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r4.u64);
	// std r11,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
	// std r8,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r8.u64);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
	// std r6,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r6.u64);
loc_820AE930:
	// bl 0x820adc18
	ctx.lr = 0x820AE934;
	sub_820ADC18(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// lwz r30,-4900(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820ae950
	if (!ctx.cr6.eq) goto loc_820AE950;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820AE950:
	// lis r4,21071
	ctx.r4.s64 = 1380909056;
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x820AE95C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ae96c
	if (ctx.cr6.eq) goto loc_820AE96C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ae970
	goto loc_820AE970;
loc_820AE96C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_820AE970:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ae99c
	if (ctx.cr6.eq) goto loc_820AE99C;
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ae99c
	if (ctx.cr6.eq) goto loc_820AE99C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ae9cc
	if (ctx.cr6.eq) goto loc_820AE9CC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,37680
	ctx.r9.u64 = ctx.r11.u64 | 37680;
	// stwx r22,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r22.u32);
	// b 0x820ae9cc
	goto loc_820AE9CC;
loc_820AE99C:
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ae9cc
	if (ctx.cr6.eq) goto loc_820AE9CC;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ae9cc
	if (!ctx.cr6.eq) goto loc_820AE9CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ae9cc
	if (ctx.cr6.eq) goto loc_820AE9CC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37680
	ctx.r8.u64 = ctx.r11.u64 | 37680;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_820AE9CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820acc50
	ctx.lr = 0x820AE9D4;
	sub_820ACC50(ctx, base);
loc_820AE9D4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8224996c
	ctx.lr = 0x820AE9E0;
	sub_8224996C(ctx, base);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820AE9E4"))) PPC_WEAK_FUNC(sub_820AE9E4);
PPC_FUNC_IMPL(__imp__sub_820AE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AE9E8"))) PPC_WEAK_FUNC(sub_820AE9E8);
PPC_FUNC_IMPL(__imp__sub_820AE9E8) {
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
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aea3c
	if (ctx.cr6.eq) goto loc_820AEA3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ae3c8
	ctx.lr = 0x820AEA18;
	sub_820AE3C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aea3c
	if (ctx.cr6.eq) goto loc_820AEA3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// bl 0x820ae3c8
	ctx.lr = 0x820AEA2C;
	sub_820AE3C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aea3c
	if (ctx.cr6.eq) goto loc_820AEA3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820acfa0
	ctx.lr = 0x820AEA3C;
	sub_820ACFA0(ctx, base);
loc_820AEA3C:
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

__attribute__((alias("__imp__sub_820AEA54"))) PPC_WEAK_FUNC(sub_820AEA54);
PPC_FUNC_IMPL(__imp__sub_820AEA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEA58"))) PPC_WEAK_FUNC(sub_820AEA58);
PPC_FUNC_IMPL(__imp__sub_820AEA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x820aea8c
	if (ctx.cr6.eq) goto loc_820AEA8C;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820aea90
	if (!ctx.cr6.eq) goto loc_820AEA90;
loc_820AEA8C:
	// li r10,2
	ctx.r10.s64 = 2;
loc_820AEA90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820aeac0
	if (!ctx.cr6.eq) goto loc_820AEAC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mullw r3,r10,r31
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lfs f1,11308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3a48
	ctx.lr = 0x820AEAAC;
	sub_820D3A48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820AEAC0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820aec68
	if (ctx.cr6.eq) goto loc_820AEC68;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820aeb80
	if (!ctx.cr6.eq) goto loc_820AEB80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820d2fb8
	ctx.lr = 0x820AEAD8;
	sub_820D2FB8(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x820d2ff0
	ctx.lr = 0x820AEB24;
	sub_820D2FF0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,200
	ctx.r5.s64 = 200;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r4,220
	ctx.r4.s64 = 220;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// li r3,250
	ctx.r3.s64 = 250;
	// lfs f0,11316(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// li r11,128
	ctx.r11.s64 = 128;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x820d3060
	ctx.lr = 0x820AEB64;
	sub_820D3060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820d3680
	ctx.lr = 0x820AEB6C;
	sub_820D3680(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820AEB80:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x820aebb0
	if (!ctx.cr6.eq) goto loc_820AEBB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mullw r3,r10,r31
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3a48
	ctx.lr = 0x820AEB9C;
	sub_820D3A48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820AEBB0:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x820aebe0
	if (!ctx.cr6.eq) goto loc_820AEBE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mullw r3,r10,r31
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lfs f1,11312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11312);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d3a48
	ctx.lr = 0x820AEBCC;
	sub_820D3A48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820AEBE0:
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x820aebf0
	if (ctx.cr6.lt) goto loc_820AEBF0;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// ble cr6,0x820aec68
	if (!ctx.cr6.gt) goto loc_820AEC68;
loc_820AEBF0:
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// bne cr6,0x820aec20
	if (!ctx.cr6.eq) goto loc_820AEC20;
	// mullw. r11,r10,r31
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820aec04
	if (!ctx.cr0.eq) goto loc_820AEC04;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820AEC04:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820aec5c
	goto loc_820AEC5C;
loc_820AEC20:
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// blt cr6,0x820aec68
	if (ctx.cr6.lt) goto loc_820AEC68;
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// bgt cr6,0x820aec68
	if (ctx.cr6.gt) goto loc_820AEC68;
	// mullw. r31,r10,r31
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820aec3c
	if (!ctx.cr0.eq) goto loc_820AEC3C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820AEC3C:
	// addi r3,r3,-30
	ctx.r3.s64 = ctx.r3.s64 + -30;
	// bl 0x820d2ce0
	ctx.lr = 0x820AEC44;
	sub_820D2CE0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_820AEC5C:
	// frsp f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bl 0x820d2d58
	ctx.lr = 0x820AEC68;
	sub_820D2D58(ctx, base);
loc_820AEC68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AEC7C"))) PPC_WEAK_FUNC(sub_820AEC7C);
PPC_FUNC_IMPL(__imp__sub_820AEC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEC80"))) PPC_WEAK_FUNC(sub_820AEC80);
PPC_FUNC_IMPL(__imp__sub_820AEC80) {
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
	// bl 0x820ecdf8
	ctx.lr = 0x820AEC90;
	sub_820ECDF8(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stb r11,-8662(r9)
	PPC_STORE_U8(ctx.r9.u32 + -8662, ctx.r11.u8);
	// li r4,36
	ctx.r4.s64 = 36;
	// stb r10,-8663(r8)
	PPC_STORE_U8(ctx.r8.u32 + -8663, ctx.r10.u8);
	// addi r3,r7,-8660
	ctx.r3.s64 = ctx.r7.s64 + -8660;
	// bl 0x822aa648
	ctx.lr = 0x820AECB8;
	sub_822AA648(ctx, base);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// stb r11,-8664(r6)
	PPC_STORE_U8(ctx.r6.u32 + -8664, ctx.r11.u8);
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// stw r10,-8624(r5)
	PPC_STORE_U32(ctx.r5.u32 + -8624, ctx.r10.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-8620(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8620, ctx.r11.u32);
	// stw r10,-8612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8612, ctx.r10.u32);
	// stw r9,-8668(r4)
	PPC_STORE_U32(ctx.r4.u32 + -8668, ctx.r9.u32);
	// stw r9,-8608(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8608, ctx.r9.u32);
	// stw r11,-8604(r6)
	PPC_STORE_U32(ctx.r6.u32 + -8604, ctx.r11.u32);
	// stw r10,-8600(r5)
	PPC_STORE_U32(ctx.r5.u32 + -8600, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AED14"))) PPC_WEAK_FUNC(sub_820AED14);
PPC_FUNC_IMPL(__imp__sub_820AED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AED18"))) PPC_WEAK_FUNC(sub_820AED18);
PPC_FUNC_IMPL(__imp__sub_820AED18) {
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
	ctx.lr = 0x820AED28;
	sub_8215BEC8(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820aed48
	if (!ctx.cr6.eq) goto loc_820AED48;
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
loc_820AED48:
	// bl 0x8215bec8
	ctx.lr = 0x820AED4C;
	sub_8215BEC8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_820AED7C"))) PPC_WEAK_FUNC(sub_820AED7C);
PPC_FUNC_IMPL(__imp__sub_820AED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AED80"))) PPC_WEAK_FUNC(sub_820AED80);
PPC_FUNC_IMPL(__imp__sub_820AED80) {
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
	ctx.lr = 0x820AED90;
	sub_8215BEC8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mulli r11,r8,60
	ctx.r11.s64 = ctx.r8.s64 * 60;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820aedc4
	if (!ctx.cr6.eq) goto loc_820AEDC4;
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
loc_820AEDC4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,-8608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8608);
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_820AEDEC"))) PPC_WEAK_FUNC(sub_820AEDEC);
PPC_FUNC_IMPL(__imp__sub_820AEDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AEDF0"))) PPC_WEAK_FUNC(sub_820AEDF0);
PPC_FUNC_IMPL(__imp__sub_820AEDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820AEDF8;
	sub_82248774(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,20548
	ctx.r4.s64 = 1346633728;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21332
	ctx.r4.u64 = ctx.r4.u64 | 21332;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820AEE1C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r24,52
	ctx.r27.s64 = ctx.r24.s64 + 52;
	// stw r26,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r26.u32);
	// addi r10,r11,11344
	ctx.r10.s64 = ctx.r11.s64 + 11344;
	// stw r24,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r24.u32);
	// addi r31,r24,192
	ctx.r31.s64 = ctx.r24.s64 + 192;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820AEE44:
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// bl 0x820804f8
	ctx.lr = 0x820AEE50;
	sub_820804F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820804f8
	ctx.lr = 0x820AEE58;
	sub_820804F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x820aee44
	if (!ctx.cr0.eq) goto loc_820AEE44;
	// lwz r30,84(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820af00c
	if (ctx.cr6.eq) goto loc_820AF00C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r31,r24,96
	ctx.r31.s64 = ctx.r24.s64 + 96;
	// lfs f30,8608(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8608);
	ctx.f30.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r11,-29608
	ctx.r25.s64 = ctx.r11.s64 + -29608;
	// addi r23,r10,-29616
	ctx.r23.s64 = ctx.r10.s64 + -29616;
loc_820AEE98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r26,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AEEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820aeff8
	if (ctx.cr6.eq) goto loc_820AEFF8;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// rlwinm r28,r3,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,268(r27)
	PPC_STORE_U32(ctx.r27.u32 + 268, ctx.r11.u32);
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,-32(r31)
	PPC_STORE_U64(ctx.r31.u32 + -32, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,-24(r31)
	PPC_STORE_U64(ctx.r31.u32 + -24, ctx.r8.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,-16(r31)
	PPC_STORE_U64(ctx.r31.u32 + -16, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r6.u64);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820AEF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// std r6,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820AEF70;
	sub_8208EA90(ctx, base);
	// lfsx f12,r26,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x821876f8
	ctx.lr = 0x820AEF80;
	sub_821876F8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82289c50
	ctx.lr = 0x820AEF90;
	sub_82289C50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r6.u64);
	// std r5,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r5.u64);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// std r9,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r9.u64);
	// std r8,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r8.u64);
	// std r7,120(r31)
	PPC_STORE_U64(ctx.r31.u32 + 120, ctx.r7.u64);
	// std r4,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r4.u64);
	// std r3,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r3.u64);
loc_820AEFF8:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// blt cr6,0x820aee98
	if (ctx.cr6.lt) goto loc_820AEE98;
loc_820AF00C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820AF020"))) PPC_WEAK_FUNC(sub_820AF020);
PPC_FUNC_IMPL(__imp__sub_820AF020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,11344
	ctx.r10.s64 = ctx.r11.s64 + 11344;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820af088
	if (ctx.cr6.eq) goto loc_820AF088;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// ld r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// ld r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// std r4,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r4.u64);
	// ld r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// ld r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// std r9,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r9.u64);
	// ld r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 112);
	// std r8,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r8.u64);
	// ld r7,120(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 120);
	// std r7,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r7.u64);
loc_820AF088:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820af0e4
	if (ctx.cr6.eq) goto loc_820AF0E4;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// ld r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 128);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r6,136(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 136);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r5,144(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 144);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// ld r4,152(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// std r4,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r4.u64);
	// ld r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// ld r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 168);
	// std r9,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r9.u64);
	// ld r8,176(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// std r8,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r8.u64);
	// ld r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// std r7,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r7.u64);
loc_820AF0E4:
	// b 0x821883b8
	sub_821883B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF0E8"))) PPC_WEAK_FUNC(sub_820AF0E8);
PPC_FUNC_IMPL(__imp__sub_820AF0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820af144
	if (ctx.cr6.eq) goto loc_820AF144;
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// ld r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r6,72(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 80);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// ld r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// std r4,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r4.u64);
	// ld r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// ld r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// std r9,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r9.u64);
	// ld r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 112);
	// std r8,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r8.u64);
	// ld r7,120(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 120);
	// std r7,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r7.u64);
loc_820AF144:
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// ld r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 128);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r6,136(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 136);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r5,144(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 144);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// ld r4,152(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// std r4,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r4.u64);
	// ld r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// ld r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 168);
	// std r9,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r9.u64);
	// ld r8,176(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// std r8,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r8.u64);
	// ld r7,184(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// std r7,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AF1A4"))) PPC_WEAK_FUNC(sub_820AF1A4);
PPC_FUNC_IMPL(__imp__sub_820AF1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF1A8"))) PPC_WEAK_FUNC(sub_820AF1A8);
PPC_FUNC_IMPL(__imp__sub_820AF1A8) {
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
	// bl 0x820af020
	ctx.lr = 0x820AF1C8;
	sub_820AF020(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af1e4
	if (ctx.cr6.eq) goto loc_820AF1E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AF1E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AF1E4:
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

__attribute__((alias("__imp__sub_820AF1FC"))) PPC_WEAK_FUNC(sub_820AF1FC);
PPC_FUNC_IMPL(__imp__sub_820AF1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF200"))) PPC_WEAK_FUNC(sub_820AF200);
PPC_FUNC_IMPL(__imp__sub_820AF200) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,1360(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// lfs f13,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9864);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1908(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lwz r10,1936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x820af2a4
	if (!ctx.cr6.eq) goto loc_820AF2A4;
	// lwz r11,760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,2676(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 2676, temp.u32);
	// stfs f13,240(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 240, temp.u32);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x820af2a4
	if (ctx.cr6.eq) goto loc_820AF2A4;
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// ld r7,192(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 192);
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r4,200(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 200);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 208);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r7,216(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 216);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,224(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 224);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,232(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 232);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// ld r4,240(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 240);
	// std r4,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r4.u64);
	// ld r9,248(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 248);
	// std r9,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r9.u64);
loc_820AF2A4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,1364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820af324
	if (!ctx.cr6.eq) goto loc_820AF324;
	// lwz r11,792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,2676(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 2676, temp.u32);
	// stfs f13,288(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 288, temp.u32);
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x820af324
	if (ctx.cr6.eq) goto loc_820AF324;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r9,r3,256
	ctx.r9.s64 = ctx.r3.s64 + 256;
	// ld r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r4,264(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 264);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r9,272(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r7,280(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,288(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 288);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,296(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// ld r4,304(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 304);
	// std r4,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r4.u64);
	// ld r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 312);
	// std r9,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r9.u64);
loc_820AF324:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,1356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820af380
	if (!ctx.cr6.eq) goto loc_820AF380;
	// lwz r11,736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820af34c
	if (ctx.cr6.eq) goto loc_820AF34C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,2676(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2676, temp.u32);
loc_820AF34C:
	// lwz r11,744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820af364
	if (ctx.cr6.eq) goto loc_820AF364;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,2676(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2676, temp.u32);
loc_820AF364:
	// lwz r11,752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820af37c
	if (ctx.cr6.eq) goto loc_820AF37C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,2676(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2676, temp.u32);
loc_820AF37C:
	// stfs f13,192(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 192, temp.u32);
loc_820AF380:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820af39c
	if (!ctx.cr6.eq) goto loc_820AF39C;
	// lwz r10,1364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820af3a8
	if (ctx.cr6.eq) goto loc_820AF3A8;
loc_820AF39C:
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820af3b4
	if (!ctx.cr6.eq) goto loc_820AF3B4;
loc_820AF3A8:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4952, ctx.r11.u32);
loc_820AF3B4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820af3c8
	if (!ctx.cr6.eq) goto loc_820AF3C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820AF3C8:
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820AF3D4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af3f8
	if (ctx.cr6.eq) goto loc_820AF3F8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af3f8
	if (ctx.cr6.eq) goto loc_820AF3F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF3F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AF408"))) PPC_WEAK_FUNC(sub_820AF408);
PPC_FUNC_IMPL(__imp__sub_820AF408) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,339
	ctx.r11.s64 = ctx.r4.s64 + 339;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// b 0x820af200
	sub_820AF200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF428"))) PPC_WEAK_FUNC(sub_820AF428);
PPC_FUNC_IMPL(__imp__sub_820AF428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AF42C"))) PPC_WEAK_FUNC(sub_820AF42C);
PPC_FUNC_IMPL(__imp__sub_820AF42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF430"))) PPC_WEAK_FUNC(sub_820AF430);
PPC_FUNC_IMPL(__imp__sub_820AF430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820AF438;
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-29600
	ctx.r31.s64 = ctx.r11.s64 + -29600;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,1908(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1908);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,4
	ctx.r27.s64 = 4;
	// lfs f30,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820AF470:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfsx f0,r9,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820af4b0
	if (ctx.cr6.gt) goto loc_820AF4B0;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x820af4bc
	goto loc_820AF4BC;
loc_820AF4B0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x820af4bc
	if (ctx.cr6.gt) goto loc_820AF4BC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820AF4BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r11,339
	ctx.r11.s64 = ctx.r11.s64 + 339;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x820af4e4
	if (!ctx.cr6.lt) goto loc_820AF4E4;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820af200
	ctx.lr = 0x820AF4E4;
	sub_820AF200(ctx, base);
loc_820AF4E4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820af470
	if (!ctx.cr0.eq) goto loc_820AF470;
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

__attribute__((alias("__imp__sub_820AF500"))) PPC_WEAK_FUNC(sub_820AF500);
PPC_FUNC_IMPL(__imp__sub_820AF500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820AF508;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820bac38
	ctx.lr = 0x820AF514;
	sub_820BAC38(ctx, base);
	// bl 0x82188208
	ctx.lr = 0x820AF518;
	sub_82188208(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x820AF51C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820AF524;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820AF530;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820AF534;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820af54c
	if (ctx.cr6.eq) goto loc_820AF54C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x820AF548;
	sub_82183448(ctx, base);
	// b 0x820af554
	goto loc_820AF554;
loc_820AF54C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x820AF554;
	sub_821845A0(ctx, base);
loc_820AF554:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af56c
	if (ctx.cr6.eq) goto loc_820AF56C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d3bc8
	ctx.lr = 0x820AF564;
	sub_820D3BC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820af570
	goto loc_820AF570;
loc_820AF56C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820AF570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bac38
	ctx.lr = 0x820AF578;
	sub_820BAC38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af5a8
	if (ctx.cr6.eq) goto loc_820AF5A8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// stfs f0,2152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
loc_820AF5A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820AF5B0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820AF5B8"))) PPC_WEAK_FUNC(sub_820AF5B8);
PPC_FUNC_IMPL(__imp__sub_820AF5B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820bac38
	ctx.lr = 0x820AF5D4;
	sub_820BAC38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820af5f0
	if (!ctx.cr6.eq) goto loc_820AF5F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x820ef4a8
	ctx.lr = 0x820AF5EC;
	sub_820EF4A8(ctx, base);
	// b 0x820af72c
	goto loc_820AF72C;
loc_820AF5F0:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820af614
	if (ctx.cr6.eq) goto loc_820AF614;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2081
	ctx.r4.s64 = 2081;
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f03b0
	ctx.lr = 0x820AF610;
	sub_820F03B0(ctx, base);
	// b 0x820af72c
	goto loc_820AF72C;
loc_820AF614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5b8
	ctx.lr = 0x820AF61C;
	sub_8208E5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820af6a4
	if (ctx.cr6.eq) goto loc_820AF6A4;
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820af6a4
	if (!ctx.cr6.eq) goto loc_820AF6A4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r3,-5056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// bl 0x820ed6b0
	ctx.lr = 0x820AF64C;
	sub_820ED6B0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af664
	if (ctx.cr6.eq) goto loc_820AF664;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820af668
	goto loc_820AF668;
loc_820AF664:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820AF668:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x820af67c
	if (ctx.cr6.gt) goto loc_820AF67C;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x820af69c
	goto loc_820AF69C;
loc_820AF67C:
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// bge cr6,0x820af68c
	if (!ctx.cr6.lt) goto loc_820AF68C;
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x820af69c
	goto loc_820AF69C;
loc_820AF68C:
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// li r3,35
	ctx.r3.s64 = 35;
	// blt cr6,0x820af69c
	if (ctx.cr6.lt) goto loc_820AF69C;
	// li r3,36
	ctx.r3.s64 = 36;
loc_820AF69C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820cb9f8
	ctx.lr = 0x820AF6A4;
	sub_820CB9F8(ctx, base);
loc_820AF6A4:
	// lis r4,22862
	ctx.r4.s64 = 1498284032;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,24950
	ctx.r4.u64 = ctx.r4.u64 | 24950;
	// bl 0x821882d0
	ctx.lr = 0x820AF6B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820af72c
	goto loc_820AF72C;
loc_820AF6DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x820AF6E4;
	sub_82080068(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x820AF6EC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af704
	if (ctx.cr6.eq) goto loc_820AF704;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820d3bc8
	ctx.lr = 0x820AF6FC;
	sub_820D3BC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820af708
	goto loc_820AF708;
loc_820AF704:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820AF708:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bac38
	ctx.lr = 0x820AF710;
	sub_820BAC38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x820AF72C;
	sub_821837D0(ctx, base);
loc_820AF72C:
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

__attribute__((alias("__imp__sub_820AF744"))) PPC_WEAK_FUNC(sub_820AF744);
PPC_FUNC_IMPL(__imp__sub_820AF744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF748"))) PPC_WEAK_FUNC(sub_820AF748);
PPC_FUNC_IMPL(__imp__sub_820AF748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820AF750;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
loc_820AF760:
	// lwzu r11,28(r30)
	ea = 28 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820AF784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// blt cr6,0x820af760
	if (ctx.cr6.lt) goto loc_820AF760;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820AF798"))) PPC_WEAK_FUNC(sub_820AF798);
PPC_FUNC_IMPL(__imp__sub_820AF798) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820af7b4
	if (ctx.cr6.lt) goto loc_820AF7B4;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x820af7c8
	if (ctx.cr6.lt) goto loc_820AF7C8;
loc_820AF7B4:
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
loc_820AF7C8:
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// blt cr6,0x820af7b4
	if (ctx.cr6.lt) goto loc_820AF7B4;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bge cr6,0x820af7b4
	if (!ctx.cr6.lt) goto loc_820AF7B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// subf r8,r10,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820AF818;
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

__attribute__((alias("__imp__sub_820AF82C"))) PPC_WEAK_FUNC(sub_820AF82C);
PPC_FUNC_IMPL(__imp__sub_820AF82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF830"))) PPC_WEAK_FUNC(sub_820AF830);
PPC_FUNC_IMPL(__imp__sub_820AF830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820AF838;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
loc_820AF84C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x820af85c
	if (ctx.cr6.lt) goto loc_820AF85C;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820af864
	if (ctx.cr6.lt) goto loc_820AF864;
loc_820AF85C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820af8b4
	goto loc_820AF8B4;
loc_820AF864:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x820af874
	if (ctx.cr6.lt) goto loc_820AF874;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// blt cr6,0x820af87c
	if (ctx.cr6.lt) goto loc_820AF87C;
loc_820AF874:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820af8b4
	goto loc_820AF8B4;
loc_820AF87C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820AF8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820AF8B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// and r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 & ctx.r28.u64;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820af84c
	if (ctx.cr6.lt) goto loc_820AF84C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820AF8D4"))) PPC_WEAK_FUNC(sub_820AF8D4);
PPC_FUNC_IMPL(__imp__sub_820AF8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AF8D8"))) PPC_WEAK_FUNC(sub_820AF8D8);
PPC_FUNC_IMPL(__imp__sub_820AF8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,14524(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820af8f4
	if (!ctx.cr6.eq) goto loc_820AF8F4;
	// blr 
	return;
loc_820AF8F4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lfs f1,-8596(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8596);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x82169318
	sub_82169318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF908"))) PPC_WEAK_FUNC(sub_820AF908);
PPC_FUNC_IMPL(__imp__sub_820AF908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,344(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 344);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,348(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 348);
	// stw r4,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AF950"))) PPC_WEAK_FUNC(sub_820AF950);
PPC_FUNC_IMPL(__imp__sub_820AF950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,14524(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820af96c
	if (!ctx.cr6.eq) goto loc_820AF96C;
	// blr 
	return;
loc_820AF96C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f1,-29568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29568);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x82169318
	sub_82169318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AF980"))) PPC_WEAK_FUNC(sub_820AF980);
PPC_FUNC_IMPL(__imp__sub_820AF980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820AF988;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// addi r9,r10,11448
	ctx.r9.s64 = ctx.r10.s64 + 11448;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,3
	ctx.r26.s64 = 3;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820AF9AC:
	// addi r29,r29,-28
	ctx.r29.s64 = ctx.r29.s64 + -28;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
loc_820AF9B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af9d8
	if (ctx.cr6.eq) goto loc_820AF9D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF9D8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x820af9b8
	if (!ctx.cr0.eq) goto loc_820AF9B8;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x820af9ac
	if (!ctx.cr0.lt) goto loc_820AF9AC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821883b8
	ctx.lr = 0x820AF9F4;
	sub_821883B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820AF9FC"))) PPC_WEAK_FUNC(sub_820AF9FC);
PPC_FUNC_IMPL(__imp__sub_820AF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFA00"))) PPC_WEAK_FUNC(sub_820AFA00);
PPC_FUNC_IMPL(__imp__sub_820AFA00) {
	PPC_FUNC_PROLOGUE();
	// b 0x820af798
	sub_820AF798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFA04"))) PPC_WEAK_FUNC(sub_820AFA04);
PPC_FUNC_IMPL(__imp__sub_820AFA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFA08"))) PPC_WEAK_FUNC(sub_820AFA08);
PPC_FUNC_IMPL(__imp__sub_820AFA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x820af830
	sub_820AF830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820AFA0C"))) PPC_WEAK_FUNC(sub_820AFA0C);
PPC_FUNC_IMPL(__imp__sub_820AFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFA10"))) PPC_WEAK_FUNC(sub_820AFA10);
PPC_FUNC_IMPL(__imp__sub_820AFA10) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bgt cr6,0x820afbe8
	if (ctx.cr6.gt) goto loc_820AFBE8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820afa98
	// bdzf 4*cr6+eq,0x820afaec
	// bdzf 4*cr6+eq,0x820afb40
	// bne cr6,0x820afb94
	if (!ctx.cr6.eq) goto loc_820AFB94;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820AFA4C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afbe8
	if (ctx.cr6.eq) goto loc_820AFBE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,11388
	ctx.r7.s64 = ctx.r8.s64 + 11388;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r9,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r9.u64);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AFA98:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820AFAA0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afbe8
	if (ctx.cr6.eq) goto loc_820AFBE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,11400
	ctx.r7.s64 = ctx.r8.s64 + 11400;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r9,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r9.u64);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AFAEC:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820AFAF4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afbe8
	if (ctx.cr6.eq) goto loc_820AFBE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,11412
	ctx.r7.s64 = ctx.r8.s64 + 11412;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r9,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r9.u64);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AFB40:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820AFB48;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afbe8
	if (ctx.cr6.eq) goto loc_820AFBE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,11424
	ctx.r7.s64 = ctx.r8.s64 + 11424;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r9,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r9.u64);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AFB94:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820AFB9C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afbe8
	if (ctx.cr6.eq) goto loc_820AFBE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,11436
	ctx.r7.s64 = ctx.r8.s64 + 11436;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r9,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r9.u64);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820AFBE8:
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

__attribute__((alias("__imp__sub_820AFBFC"))) PPC_WEAK_FUNC(sub_820AFBFC);
PPC_FUNC_IMPL(__imp__sub_820AFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFC00"))) PPC_WEAK_FUNC(sub_820AFC00);
PPC_FUNC_IMPL(__imp__sub_820AFC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r9,1908(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,576(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 576);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820afc68
	if (ctx.cr6.eq) goto loc_820AFC68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_820AFC68:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820AFCB4"))) PPC_WEAK_FUNC(sub_820AFCB4);
PPC_FUNC_IMPL(__imp__sub_820AFCB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820AFCB8"))) PPC_WEAK_FUNC(sub_820AFCB8);
PPC_FUNC_IMPL(__imp__sub_820AFCB8) {
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
	// addi r9,r11,11376
	ctx.r9.s64 = ctx.r11.s64 + 11376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820afcf0
	if (ctx.cr6.eq) goto loc_820AFCF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820AFCEC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820AFCF0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820AFD04"))) PPC_WEAK_FUNC(sub_820AFD04);
PPC_FUNC_IMPL(__imp__sub_820AFD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFD08"))) PPC_WEAK_FUNC(sub_820AFD08);
PPC_FUNC_IMPL(__imp__sub_820AFD08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r11,-8584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8584);
	// lfs f12,-29552(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29552);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820afd58
	if (!ctx.cr6.eq) goto loc_820AFD58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f12,-8588(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8588, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// stw r11,-8584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8584, ctx.r11.u32);
	// b 0x820afd5c
	goto loc_820AFD5C;
loc_820AFD58:
	// lfs f10,-8588(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8588);
	ctx.f10.f64 = double(temp.f32);
loc_820AFD5C:
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f11,-29556(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29556);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x820afd88
	if (!ctx.cr6.eq) goto loc_820AFD88;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stfs f11,-8592(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8592, temp.u32);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// stw r11,-8584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8584, ctx.r11.u32);
	// b 0x820afd8c
	goto loc_820AFD8C;
loc_820AFD88:
	// lfs f13,-8592(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8592);
	ctx.f13.f64 = double(temp.f32);
loc_820AFD8C:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,-29560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29560);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-29564(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29564);
	ctx.f30.f64 = double(temp.f32);
	// blt cr6,0x820afe34
	if (ctx.cr6.lt) goto loc_820AFE34;
	// bne cr6,0x820afebc
	if (!ctx.cr6.eq) goto loc_820AFEBC;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afdf8
	if (ctx.cr6.eq) goto loc_820AFDF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f9,f0,f13,f12
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f1,f7,f11,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f10.f64));
	// bl 0x82169318
	ctx.lr = 0x820AFDF8;
	sub_82169318(ctx, base);
loc_820AFDF8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// ble cr6,0x820afec0
	if (!ctx.cr6.gt) goto loc_820AFEC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820afec0
	goto loc_820AFEC0;
loc_820AFE34:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820afe80
	if (ctx.cr6.eq) goto loc_820AFE80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f9,f0,f13,f12
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f1,f7,f10,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// bl 0x82169318
	ctx.lr = 0x820AFE80;
	sub_82169318(ctx, base);
loc_820AFE80:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x820afec0
	if (!ctx.cr6.gt) goto loc_820AFEC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820afec0
	goto loc_820AFEC0;
loc_820AFEBC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820AFEC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_820AFEDC"))) PPC_WEAK_FUNC(sub_820AFEDC);
PPC_FUNC_IMPL(__imp__sub_820AFEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820AFEE0"))) PPC_WEAK_FUNC(sub_820AFEE0);
PPC_FUNC_IMPL(__imp__sub_820AFEE0) {
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
	// bl 0x82249910
	ctx.lr = 0x820AFEF8;
	sub_82249910(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r11,-8572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8572);
	// lfs f30,-29512(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29512);
	ctx.f30.f64 = double(temp.f32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820aff34
	if (!ctx.cr6.eq) goto loc_820AFF34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f30,-8576(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8576, temp.u32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// stw r11,-8572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8572, ctx.r11.u32);
	// b 0x820aff38
	goto loc_820AFF38;
loc_820AFF34:
	// lfs f31,-8576(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8576);
	ctx.f31.f64 = double(temp.f32);
loc_820AFF38:
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f23,-29516(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29516);
	ctx.f23.f64 = double(temp.f32);
	// bne cr6,0x820aff64
	if (!ctx.cr6.eq) goto loc_820AFF64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stfs f23,-8580(r9)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8580, temp.u32);
	// fmr f22,f23
	ctx.f22.f64 = ctx.f23.f64;
	// stw r11,-8572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8572, ctx.r11.u32);
	// b 0x820aff68
	goto loc_820AFF68;
loc_820AFF64:
	// lfs f22,-8580(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8580);
	ctx.f22.f64 = double(temp.f32);
loc_820AFF68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lfs f29,-29520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29520);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,-29524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29524);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,-29528(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29528);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,-29532(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29532);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,-29536(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29536);
	ctx.f26.f64 = double(temp.f32);
	// lwz r3,80(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lfs f28,-29540(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -29540);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82230de8
	ctx.lr = 0x820AFFA8;
	sub_82230DE8(ctx, base);
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// beq cr6,0x820affb8
	if (ctx.cr6.eq) goto loc_820AFFB8;
	// cmpwi cr6,r3,110
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 110, ctx.xer);
	// bne cr6,0x820affcc
	if (!ctx.cr6.eq) goto loc_820AFFCC;
loc_820AFFB8:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f31,-29544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-29548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29548);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_820AFFCC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820b02b4
	if (ctx.cr6.gt) goto loc_820B02B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b0094
	// bdzf 4*cr6+eq,0x820b00cc
	// bdzf 4*cr6+eq,0x820b0170
	// bne cr6,0x820b01f0
	if (!ctx.cr6.eq) goto loc_820B01F0;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f25.f64));
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b005c
	if (ctx.cr6.eq) goto loc_820B005C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f30,f23
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f23.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f23
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f23.f64));
	// bl 0x82169318
	ctx.lr = 0x820B003C;
	sub_82169318(ctx, base);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b005c
	if (ctx.cr6.eq) goto loc_820B005C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B005C;
	sub_821693A0(ctx, base);
loc_820B005C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// ble cr6,0x820b02b4
	if (!ctx.cr6.gt) goto loc_820B02B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b02b4
	goto loc_820B02B4;
loc_820B0094:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// ble cr6,0x820b02b4
	if (!ctx.cr6.gt) goto loc_820B02B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b02b4
	goto loc_820B02B4;
loc_820B00CC:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f24.f64));
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0138
	if (ctx.cr6.eq) goto loc_820B0138;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f22,f31
	ctx.f11.f64 = double(float(ctx.f22.f64 - ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f31.f64));
	// bl 0x82169318
	ctx.lr = 0x820B0118;
	sub_82169318(ctx, base);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0138
	if (ctx.cr6.eq) goto loc_820B0138;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B0138;
	sub_821693A0(ctx, base);
loc_820B0138:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f24
	ctx.cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// ble cr6,0x820b02b4
	if (!ctx.cr6.gt) goto loc_820B02B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b02b4
	goto loc_820B02B4;
loc_820B0170:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0194
	if (ctx.cr6.eq) goto loc_820B0194;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B0194;
	sub_821693A0(ctx, base);
loc_820B0194:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b01d8
	if (!ctx.cr6.eq) goto loc_820B01D8;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b01d8
	if (!ctx.cr6.eq) goto loc_820B01D8;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b01d8
	if (!ctx.cr6.eq) goto loc_820B01D8;
	// bl 0x8208e820
	ctx.lr = 0x820B01D0;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b02b4
	if (ctx.cr6.eq) goto loc_820B02B4;
loc_820B01D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b02b4
	goto loc_820B02B4;
loc_820B01F0:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f26.f64));
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b023c
	if (ctx.cr6.eq) goto loc_820B023C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f28,f29
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f29
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f29.f64));
	// bl 0x821693a0
	ctx.lr = 0x820B023C;
	sub_821693A0(ctx, base);
loc_820B023C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// ble cr6,0x820b02b4
	if (!ctx.cr6.gt) goto loc_820B02B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b02ac
	if (ctx.cr6.eq) goto loc_820B02AC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x82169318
	ctx.lr = 0x820B0288;
	sub_82169318(ctx, base);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b02ac
	if (ctx.cr6.eq) goto loc_820B02AC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B02AC;
	sub_821693A0(ctx, base);
loc_820B02AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820afc00
	ctx.lr = 0x820B02B4;
	sub_820AFC00(ctx, base);
loc_820B02B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8224995c
	ctx.lr = 0x820B02C4;
	sub_8224995C(ctx, base);
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_820B02D8"))) PPC_WEAK_FUNC(sub_820B02D8);
PPC_FUNC_IMPL(__imp__sub_820B02D8) {
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
	// bl 0x82249910
	ctx.lr = 0x820B02F0;
	sub_82249910(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r11,-8560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8560);
	// lfs f30,-29472(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29472);
	ctx.f30.f64 = double(temp.f32);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820b032c
	if (!ctx.cr6.eq) goto loc_820B032C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f30,-8564(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8564, temp.u32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// stw r11,-8560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8560, ctx.r11.u32);
	// b 0x820b0330
	goto loc_820B0330;
loc_820B032C:
	// lfs f31,-8564(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8564);
	ctx.f31.f64 = double(temp.f32);
loc_820B0330:
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f23,-29476(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29476);
	ctx.f23.f64 = double(temp.f32);
	// bne cr6,0x820b035c
	if (!ctx.cr6.eq) goto loc_820B035C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stfs f23,-8568(r9)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8568, temp.u32);
	// fmr f22,f23
	ctx.f22.f64 = ctx.f23.f64;
	// stw r11,-8560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8560, ctx.r11.u32);
	// b 0x820b0360
	goto loc_820B0360;
loc_820B035C:
	// lfs f22,-8568(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8568);
	ctx.f22.f64 = double(temp.f32);
loc_820B0360:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lfs f29,-29480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29480);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,-29484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29484);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,-29488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29488);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,-29492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29492);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,-29496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29496);
	ctx.f26.f64 = double(temp.f32);
	// lwz r3,80(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// lfs f28,-29500(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -29500);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82230de8
	ctx.lr = 0x820B03A0;
	sub_82230DE8(ctx, base);
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// beq cr6,0x820b03b0
	if (ctx.cr6.eq) goto loc_820B03B0;
	// cmpwi cr6,r3,110
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 110, ctx.xer);
	// bne cr6,0x820b03c4
	if (!ctx.cr6.eq) goto loc_820B03C4;
loc_820B03B0:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f31,-29504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29504);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-29508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29508);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_820B03C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820b06ac
	if (ctx.cr6.gt) goto loc_820B06AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b048c
	// bdzf 4*cr6+eq,0x820b04c4
	// bdzf 4*cr6+eq,0x820b0568
	// bne cr6,0x820b05e8
	if (!ctx.cr6.eq) goto loc_820B05E8;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f25.f64));
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0454
	if (ctx.cr6.eq) goto loc_820B0454;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f30,f23
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f23.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f23
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f23.f64));
	// bl 0x82169318
	ctx.lr = 0x820B0434;
	sub_82169318(ctx, base);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0454
	if (ctx.cr6.eq) goto loc_820B0454;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B0454;
	sub_821693A0(ctx, base);
loc_820B0454:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// ble cr6,0x820b06ac
	if (!ctx.cr6.gt) goto loc_820B06AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b06ac
	goto loc_820B06AC;
loc_820B048C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// ble cr6,0x820b06ac
	if (!ctx.cr6.gt) goto loc_820B06AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b06ac
	goto loc_820B06AC;
loc_820B04C4:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f24.f64));
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0530
	if (ctx.cr6.eq) goto loc_820B0530;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f22,f31
	ctx.f11.f64 = double(float(ctx.f22.f64 - ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f31.f64));
	// bl 0x82169318
	ctx.lr = 0x820B0510;
	sub_82169318(ctx, base);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0530
	if (ctx.cr6.eq) goto loc_820B0530;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B0530;
	sub_821693A0(ctx, base);
loc_820B0530:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f24
	ctx.cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// ble cr6,0x820b06ac
	if (!ctx.cr6.gt) goto loc_820B06AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b06ac
	goto loc_820B06AC;
loc_820B0568:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b058c
	if (ctx.cr6.eq) goto loc_820B058C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B058C;
	sub_821693A0(ctx, base);
loc_820B058C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b05d0
	if (!ctx.cr6.eq) goto loc_820B05D0;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b05d0
	if (!ctx.cr6.eq) goto loc_820B05D0;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b05d0
	if (!ctx.cr6.eq) goto loc_820B05D0;
	// bl 0x8208e820
	ctx.lr = 0x820B05C8;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b06ac
	if (ctx.cr6.eq) goto loc_820B06AC;
loc_820B05D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x820b06ac
	goto loc_820B06AC;
loc_820B05E8:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f26.f64));
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0634
	if (ctx.cr6.eq) goto loc_820B0634;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f28,f29
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f29
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f29.f64));
	// bl 0x821693a0
	ctx.lr = 0x820B0634;
	sub_821693A0(ctx, base);
loc_820B0634:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// ble cr6,0x820b06ac
	if (!ctx.cr6.gt) goto loc_820B06AC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b06a4
	if (ctx.cr6.eq) goto loc_820B06A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x82169318
	ctx.lr = 0x820B0680;
	sub_82169318(ctx, base);
	// lwz r3,14524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b06a4
	if (ctx.cr6.eq) goto loc_820B06A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x821693a0
	ctx.lr = 0x820B06A4;
	sub_821693A0(ctx, base);
loc_820B06A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820afc00
	ctx.lr = 0x820B06AC;
	sub_820AFC00(ctx, base);
loc_820B06AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8224995c
	ctx.lr = 0x820B06BC;
	sub_8224995C(ctx, base);
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_820B06D0"))) PPC_WEAK_FUNC(sub_820B06D0);
PPC_FUNC_IMPL(__imp__sub_820B06D0) {
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
	// bl 0x820af980
	ctx.lr = 0x820B06F0;
	sub_820AF980(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b070c
	if (ctx.cr6.eq) goto loc_820B070C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B0708;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B070C:
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

__attribute__((alias("__imp__sub_820B0724"))) PPC_WEAK_FUNC(sub_820B0724);
PPC_FUNC_IMPL(__imp__sub_820B0724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0728"))) PPC_WEAK_FUNC(sub_820B0728);
PPC_FUNC_IMPL(__imp__sub_820B0728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B0730;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820B0740:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x820b077c
	if (ctx.cr6.lt) goto loc_820B077C;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x820b077c
	if (!ctx.cr6.lt) goto loc_820B077C;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r29,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B077C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B077C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820b0740
	if (ctx.cr6.lt) goto loc_820B0740;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B0794"))) PPC_WEAK_FUNC(sub_820B0794);
PPC_FUNC_IMPL(__imp__sub_820B0794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0798"))) PPC_WEAK_FUNC(sub_820B0798);
PPC_FUNC_IMPL(__imp__sub_820B0798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B07A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B07BC;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// addi r9,r10,11448
	ctx.r9.s64 = ctx.r10.s64 + 11448;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820B07DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x820b07dc
	if (!ctx.cr0.lt) goto loc_820B07DC;
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r29,11
	ctx.r29.s64 = 11;
loc_820B0810:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_820B0814:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820afa10
	ctx.lr = 0x820B0824;
	sub_820AFA10(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// blt cr6,0x820b0814
	if (ctx.cr6.lt) goto loc_820B0814;
	// addi r29,r29,7
	ctx.r29.s64 = ctx.r29.s64 + 7;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r29,39
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 39, ctx.xer);
	// blt cr6,0x820b0810
	if (ctx.cr6.lt) goto loc_820B0810;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b0728
	ctx.lr = 0x820B0854;
	sub_820B0728(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B0860"))) PPC_WEAK_FUNC(sub_820B0860);
PPC_FUNC_IMPL(__imp__sub_820B0860) {
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
	// bl 0x8208e1b8
	ctx.lr = 0x820B0878;
	sub_8208E1B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b08c4
	if (ctx.cr6.eq) goto loc_820B08C4;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x820b08c4
	if (ctx.cr6.gt) goto loc_820B08C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b08c4
	// bdzf 4*cr6+eq,0x820b08ac
	// bdzf 4*cr6+eq,0x820b08c4
	// bdzf 4*cr6+eq,0x820b08ac
	// bdzf 4*cr6+eq,0x820b08c4
	// bne cr6,0x820b08ac
	if (!ctx.cr6.eq) goto loc_820B08AC;
loc_820B08AC:
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
loc_820B08C4:
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

__attribute__((alias("__imp__sub_820B08DC"))) PPC_WEAK_FUNC(sub_820B08DC);
PPC_FUNC_IMPL(__imp__sub_820B08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B08E0"))) PPC_WEAK_FUNC(sub_820B08E0);
PPC_FUNC_IMPL(__imp__sub_820B08E0) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x820b0954
	if (!ctx.cr6.lt) goto loc_820B0954;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x820b3090
	ctx.lr = 0x820B090C;
	sub_820B3090(ctx, base);
	// addi r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 33;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820b0954
	if (!ctx.cr6.eq) goto loc_820B0954;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-29464
	ctx.r9.s64 = ctx.r11.s64 + -29464;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,344(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x820d3e60
	ctx.lr = 0x820B0948;
	sub_820D3E60(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
loc_820B0954:
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

__attribute__((alias("__imp__sub_820B096C"))) PPC_WEAK_FUNC(sub_820B096C);
PPC_FUNC_IMPL(__imp__sub_820B096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0970"))) PPC_WEAK_FUNC(sub_820B0970);
PPC_FUNC_IMPL(__imp__sub_820B0970) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821142a0
	ctx.lr = 0x820B0994;
	sub_821142A0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lfs f12,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// lfs f13,11488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11488);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f30,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,10412(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10412);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// bge cr6,0x820b09f8
	if (!ctx.cr6.lt) goto loc_820B09F8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x820b0a0c
	goto loc_820B0A0C;
loc_820B09F8:
	// lfsx f11,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820b0a0c
	if (!ctx.cr6.gt) goto loc_820B0A0C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820B0A0C:
	// fsubs f10,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r10,383
	ctx.r11.s64 = ctx.r10.s64 + 383;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,11484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f12,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfsx f8,r8,r9
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lfs f7,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// blt cr6,0x820b0bd0
	if (ctx.cr6.lt) goto loc_820B0BD0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f10,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r7,r11,21
	ctx.r7.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820b0a94
	if (!ctx.cr6.lt) goto loc_820B0A94;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x820b0aa0
	goto loc_820B0AA0;
loc_820B0A94:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820b0aa0
	if (!ctx.cr6.gt) goto loc_820B0AA0;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820B0AA0:
	// stfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// addi r7,r11,383
	ctx.r7.s64 = ctx.r11.s64 + 383;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsx f13,r5,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,1508(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1508);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b0ae4
	if (!ctx.cr6.eq) goto loc_820B0AE4;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
loc_820B0AE4:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b0b30
	if (ctx.cr6.eq) goto loc_820B0B30;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b0b30
	if (ctx.cr6.eq) goto loc_820B0B30;
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x820b0b30
	if (ctx.cr6.eq) goto loc_820B0B30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114690
	ctx.lr = 0x820B0B0C;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b0b30
	if (ctx.cr6.eq) goto loc_820B0B30;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x820B0B24;
	sub_821146C8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
loc_820B0B30:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bge cr6,0x820b0bdc
	if (!ctx.cr6.lt) goto loc_820B0BDC;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820b0bdc
	if (!ctx.cr6.eq) goto loc_820B0BDC;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820b0bdc
	if (!ctx.cr6.eq) goto loc_820B0BDC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r9,r11,-29464
	ctx.r9.s64 = ctx.r11.s64 + -29464;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,344(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820d3e60
	ctx.lr = 0x820B0B8C;
	sub_820D3E60(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r5,444(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820b0bdc
	if (ctx.cr6.eq) goto loc_820B0BDC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b0bdc
	if (ctx.cr6.eq) goto loc_820B0BDC;
	// li r4,30199
	ctx.r4.s64 = 30199;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x820B0BCC;
	sub_82114658(ctx, base);
	// b 0x820b0bdc
	goto loc_820B0BDC;
loc_820B0BD0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1508, ctx.r10.u32);
loc_820B0BDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_820B0BFC"))) PPC_WEAK_FUNC(sub_820B0BFC);
PPC_FUNC_IMPL(__imp__sub_820B0BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0C00"))) PPC_WEAK_FUNC(sub_820B0C00);
PPC_FUNC_IMPL(__imp__sub_820B0C00) {
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
	// lis r4,17495
	ctx.r4.s64 = 1146552320;
	// lwz r3,1972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// ori r4,r4,19783
	ctx.r4.u64 = ctx.r4.u64 | 19783;
	// bl 0x821882d0
	ctx.lr = 0x820B0C1C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0c38
	if (ctx.cr6.eq) goto loc_820B0C38;
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
loc_820B0C38:
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

__attribute__((alias("__imp__sub_820B0C4C"))) PPC_WEAK_FUNC(sub_820B0C4C);
PPC_FUNC_IMPL(__imp__sub_820B0C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B0C50"))) PPC_WEAK_FUNC(sub_820B0C50);
PPC_FUNC_IMPL(__imp__sub_820B0C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820B0C58;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,17495
	ctx.r4.s64 = 1146552320;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19783
	ctx.r4.u64 = ctx.r4.u64 | 19783;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B0C7C;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82185740
	ctx.lr = 0x820B0C8C;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r8,r11,11504
	ctx.r8.s64 = ctx.r11.s64 + 11504;
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// addi r7,r10,11496
	ctx.r7.s64 = ctx.r10.s64 + 11496;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// ori r5,r9,65535
	ctx.r5.u64 = ctx.r9.u64 | 65535;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stw r26,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r26.u32);
	// stw r24,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r24.u32);
	// stw r5,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r5.u32);
	// bl 0x822aa648
	ctx.lr = 0x820B0CFC;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x822aa648
	ctx.lr = 0x820B0D08;
	sub_822AA648(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,1524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1524, ctx.r26.u32);
	// li r4,2051
	ctx.r4.s64 = 2051;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f31,2148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r24,1504(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1504, ctx.r24.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,1504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1504, ctx.r11.u32);
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x820d3cf8
	ctx.lr = 0x820B0D48;
	sub_820D3CF8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,2051
	ctx.r4.s64 = 2051;
	// bl 0x820f2348
	ctx.lr = 0x820B0D64;
	sub_820F2348(ctx, base);
	// lwz r25,1908(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1908);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820a62f0
	ctx.lr = 0x820B0D70;
	sub_820A62F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// cmpwi cr6,r3,4000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4000, ctx.xer);
	// addi r29,r11,29344
	ctx.r29.s64 = ctx.r11.s64 + 29344;
	// bge cr6,0x820b0fb8
	if (!ctx.cr6.lt) goto loc_820B0FB8;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze. r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x820b0da4
	if (ctx.cr0.gt) goto loc_820B0DA4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820B0DA4:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,17529
	ctx.r11.s64 = 1148780544;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820B0DD8:
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r10.u8);
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfsx f12,r11,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// stb r6,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r6.u8);
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfsx f10,r11,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// stb r3,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r3.u8);
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfsx f8,r11,r31
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stb r9,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r9.u8);
	// addi r8,r11,21
	ctx.r8.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfsx f6,r11,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// stb r6,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r6.u8);
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfsx f4,r11,r31
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// stb r3,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r3.u8);
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfsx f2,r11,r31
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// stb r9,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r9.u8);
	// addi r8,r10,21
	ctx.r8.s64 = ctx.r10.s64 + 21;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lbzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// stb r10,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r10.u8);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x820b0dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B0DD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f13,10412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x820b0f3c
	if (!ctx.cr6.lt) goto loc_820B0F3C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b0f48
	goto loc_820B0F48;
loc_820B0F3C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b0f48
	if (!ctx.cr6.gt) goto loc_820B0F48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820B0F48:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b0f60
	if (!ctx.cr6.lt) goto loc_820B0F60;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b0f6c
	goto loc_820B0F6C;
loc_820B0F60:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b0f6c
	if (!ctx.cr6.gt) goto loc_820B0F6C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820B0F6C:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b0f84
	if (!ctx.cr6.lt) goto loc_820B0F84;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b0f90
	goto loc_820B0F90;
loc_820B0F84:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b0f90
	if (!ctx.cr6.gt) goto loc_820B0F90;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820B0F90:
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b0fa8
	if (!ctx.cr6.lt) goto loc_820B0FA8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820b0fb4
	goto loc_820B0FB4;
loc_820B0FA8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b0fb4
	if (!ctx.cr6.gt) goto loc_820B0FB4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820B0FB4:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
loc_820B0FB8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b0fcc
	if (!ctx.cr6.eq) goto loc_820B0FCC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820B0FCC:
	// lis r4,19535
	ctx.r4.s64 = 1280245760;
	// ori r4,r4,20299
	ctx.r4.u64 = ctx.r4.u64 | 20299;
	// bl 0x821882d0
	ctx.lr = 0x820B0FD8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0ffc
	if (ctx.cr6.eq) goto loc_820B0FFC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b0ffc
	if (ctx.cr6.eq) goto loc_820B0FFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B0FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B0FFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82097288
	ctx.lr = 0x820B1008;
	sub_82097288(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,20512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20512, ctx.xer);
	// bne cr6,0x820b1028
	if (!ctx.cr6.eq) goto loc_820B1028;
	// li r5,20500
	ctx.r5.s64 = 20500;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097308
	ctx.lr = 0x820B1024;
	sub_82097308(ctx, base);
	// stw r24,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r24.u32);
loc_820B1028:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x820af5b8
	ctx.lr = 0x820B1030;
	sub_820AF5B8(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-28916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28916);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 416, temp.u32);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f13,-28920(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28920);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,424(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 424, temp.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f12,11480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11480);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 404, temp.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,1936(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b1078
	if (ctx.cr6.eq) goto loc_820B1078;
	// stfs f31,2116(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// stfs f31,2152(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
loc_820B1078:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef4b8
	ctx.lr = 0x820B1088;
	sub_820EF4B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef4b8
	ctx.lr = 0x820B1098;
	sub_820EF4B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4b8
	ctx.lr = 0x820B10A8;
	sub_820EF4B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4b8
	ctx.lr = 0x820B10B8;
	sub_820EF4B8(ctx, base);
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// addi r3,r27,1248
	ctx.r3.s64 = ctx.r27.s64 + 1248;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820B10C8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b10e4
	if (ctx.cr6.eq) goto loc_820B10E4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b10e4
	if (ctx.cr6.eq) goto loc_820B10E4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x820afa08
	ctx.lr = 0x820B10E4;
	sub_820AFA08(ctx, base);
loc_820B10E4:
	// addi r28,r31,132
	ctx.r28.s64 = ctx.r31.s64 + 132;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa648
	ctx.lr = 0x820B10F4;
	sub_822AA648(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b118c
	if (ctx.cr6.eq) goto loc_820B118C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820a6390
	ctx.lr = 0x820B1118;
	sub_820A6390(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// ori r4,r6,50000
	ctx.r4.u64 = ctx.r6.u64 | 50000;
	// stb r7,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r7.u8);
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,16
	ctx.r5.s64 = 16;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x820b1174
	if (!ctx.cr6.gt) goto loc_820B1174;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r11,r9,-29176
	ctx.r11.s64 = ctx.r9.s64 + -29176;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x820B116C;
	sub_821847A8(ctx, base);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// b 0x820b1190
	goto loc_820B1190;
loc_820B1174:
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r11,r9,-29432
	ctx.r11.s64 = ctx.r9.s64 + -29432;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x820B1184;
	sub_821847A8(ctx, base);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// b 0x820b1190
	goto loc_820B1190;
loc_820B118C:
	// stw r26,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r26.u32);
loc_820B1190:
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// addi r10,r31,148
	ctx.r10.s64 = ctx.r31.s64 + 148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,-8540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8540);
	// lwz r8,1680(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1680);
	// lwz r9,1676(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	// addi r11,r8,7
	ctx.r11.s64 = ctx.r8.s64 + 7;
loc_820B11B0:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stw r5,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stw r7,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// lbzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stwu r8,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820b11b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B11B0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f0,11492(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11492);
	ctx.f0.f64 = double(temp.f32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,424(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r8,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r8.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r6,10(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,428(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,432(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r3,6(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,436(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820b12f4
	if (!ctx.cr6.eq) goto loc_820B12F4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b12f4
	if (ctx.cr6.eq) goto loc_820B12F4;
	// bl 0x82129f68
	ctx.lr = 0x820B12F4;
	sub_82129F68(ctx, base);
loc_820B12F4:
	// bl 0x821142a0
	ctx.lr = 0x820B12F8;
	sub_821142A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1394
	if (ctx.cr6.eq) goto loc_820B1394;
	// lwz r29,-8540(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8540);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b1394
	if (ctx.cr6.eq) goto loc_820B1394;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82114410
	ctx.lr = 0x820B1318;
	sub_82114410(ctx, base);
	// stw r3,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114410
	ctx.lr = 0x820B1328;
	sub_82114410(ctx, base);
	// stw r3,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r3.u32);
	// lwz r29,1688(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1688);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b1380
	if (ctx.cr6.eq) goto loc_820B1380;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r8.u32);
	// bl 0x82114460
	ctx.lr = 0x820B135C;
	sub_82114460(ctx, base);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r6,460(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,104(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
	// bl 0x82114460
	ctx.lr = 0x820B1380;
	sub_82114460(ctx, base);
loc_820B1380:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1394
	if (ctx.cr6.eq) goto loc_820B1394;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821159e0
	ctx.lr = 0x820B1394;
	sub_821159E0(ctx, base);
loc_820B1394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820B13A8"))) PPC_WEAK_FUNC(sub_820B13A8);
PPC_FUNC_IMPL(__imp__sub_820B13A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820b1a60
	sub_820B1A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B13B0"))) PPC_WEAK_FUNC(sub_820B13B0);
PPC_FUNC_IMPL(__imp__sub_820B13B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B13B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,11504
	ctx.r8.s64 = ctx.r11.s64 + 11504;
	// addi r7,r9,11496
	ctx.r7.s64 = ctx.r9.s64 + 11496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b1400
	if (ctx.cr6.eq) goto loc_820B1400;
	// li r5,20512
	ctx.r5.s64 = 20512;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097308
	ctx.lr = 0x820B13FC;
	sub_82097308(ctx, base);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
loc_820B1400:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1414
	if (ctx.cr6.eq) goto loc_820B1414;
	// bl 0x82127c40
	ctx.lr = 0x820B1414;
	sub_82127C40(ctx, base);
loc_820B1414:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef4b8
	ctx.lr = 0x820B1424;
	sub_820EF4B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef4b8
	ctx.lr = 0x820B1434;
	sub_820EF4B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r30,1504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1504, ctx.r30.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,1504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1504, ctx.r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r30,1548(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1548, ctx.r30.u8);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r30,1548(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1548, ctx.r30.u8);
	// bl 0x821142a0
	ctx.lr = 0x820B1458;
	sub_821142A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b14cc
	if (ctx.cr6.eq) goto loc_820B14CC;
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x820b1498
	if (ctx.cr6.eq) goto loc_820B1498;
	// bl 0x82114690
	ctx.lr = 0x820B1474;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1498
	if (ctx.cr6.eq) goto loc_820B1498;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x820B148C;
	sub_821146C8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
loc_820B1498:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114460
	ctx.lr = 0x820B14A8;
	sub_82114460(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,460(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// bl 0x82114460
	ctx.lr = 0x820B14B8;
	sub_82114460(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b14cc
	if (ctx.cr6.eq) goto loc_820B14CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821159e0
	ctx.lr = 0x820B14CC;
	sub_821159E0(ctx, base);
loc_820B14CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B14D4;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820B14DC;
	sub_821883B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B14E4"))) PPC_WEAK_FUNC(sub_820B14E4);
PPC_FUNC_IMPL(__imp__sub_820B14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B14E8"))) PPC_WEAK_FUNC(sub_820B14E8);
PPC_FUNC_IMPL(__imp__sub_820B14E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B14F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x820b0860
	ctx.lr = 0x820B151C;
	sub_820B0860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1580
	if (ctx.cr6.eq) goto loc_820B1580;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r10,573(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b1580
	if (ctx.cr6.eq) goto loc_820B1580;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820b1550
	if (!ctx.cr6.eq) goto loc_820B1550;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x82163ef8
	ctx.lr = 0x820B1550;
	sub_82163EF8(ctx, base);
loc_820B1550:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-29448
	ctx.r8.s64 = ctx.r11.s64 + -29448;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,344(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lfs f1,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x820d3e60
	ctx.lr = 0x820B157C;
	sub_820D3E60(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_820B1580:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8208e1d8
	ctx.lr = 0x820B1588;
	sub_8208E1D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1598
	if (ctx.cr6.eq) goto loc_820B1598;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820b15e0
	if (ctx.cr6.eq) goto loc_820B15E0;
loc_820B1598:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b15ac
	if (ctx.cr6.eq) goto loc_820B15AC;
	// bl 0x82127c40
	ctx.lr = 0x820B15AC;
	sub_82127C40(ctx, base);
loc_820B15AC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r10,573(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b15d8
	if (ctx.cr6.eq) goto loc_820B15D8;
	// stw r29,1892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1892, ctx.r29.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r29,1892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1892, ctx.r29.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B15D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820B15E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B15E8"))) PPC_WEAK_FUNC(sub_820B15E8);
PPC_FUNC_IMPL(__imp__sub_820B15E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B15F0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// beq cr6,0x820b162c
	if (ctx.cr6.eq) goto loc_820B162C;
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
	// b 0x820b1634
	goto loc_820B1634;
loc_820B162C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_820B1634:
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
	// bge cr6,0x820b1658
	if (!ctx.cr6.lt) goto loc_820B1658;
	// lwz r3,344(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x820B1650;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1828
	if (ctx.cr6.eq) goto loc_820B1828;
loc_820B1658:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1670
	if (ctx.cr6.eq) goto loc_820B1670;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82127a50
	ctx.lr = 0x820B1670;
	sub_82127A50(ctx, base);
loc_820B1670:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b1684
	if (!ctx.cr6.eq) goto loc_820B1684;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B1684:
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// bl 0x821882d0
	ctx.lr = 0x820B1690;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b16ac
	if (ctx.cr6.eq) goto loc_820B16AC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b16ac
	if (ctx.cr6.eq) goto loc_820B16AC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820afa08
	ctx.lr = 0x820B16AC;
	sub_820AFA08(ctx, base);
loc_820B16AC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,1908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lwz r30,1908(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1908);
	// bl 0x820a6288
	ctx.lr = 0x820B16C0;
	sub_820A6288(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a6288
	ctx.lr = 0x820B16C8;
	sub_820A6288(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef4b8
	ctx.lr = 0x820B16D8;
	sub_820EF4B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef4b8
	ctx.lr = 0x820B16E8;
	sub_820EF4B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4b8
	ctx.lr = 0x820B16F8;
	sub_820EF4B8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4b8
	ctx.lr = 0x820B1708;
	sub_820EF4B8(ctx, base);
	// lwz r9,440(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820b172c
	if (ctx.cr6.eq) goto loc_820B172C;
	// li r5,20512
	ctx.r5.s64 = 20512;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097308
	ctx.lr = 0x820B1724;
	sub_82097308(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_820B172C:
	// bl 0x820d40d0
	ctx.lr = 0x820B1730;
	sub_820D40D0(ctx, base);
	// bl 0x820ae430
	ctx.lr = 0x820B1734;
	sub_820AE430(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82182e90
	ctx.lr = 0x820B1748;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B1750;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B175C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B1760;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b1778
	if (ctx.cr6.eq) goto loc_820B1778;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82183448
	ctx.lr = 0x820B1774;
	sub_82183448(ctx, base);
	// b 0x820b1780
	goto loc_820B1780;
loc_820B1778:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820B1780;
	sub_821845A0(ctx, base);
loc_820B1780:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1798
	if (ctx.cr6.eq) goto loc_820B1798;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x820d3ee8
	ctx.lr = 0x820B1790;
	sub_820D3EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820b179c
	goto loc_820B179C;
loc_820B1798:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820B179C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B17B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820B17B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b17d0
	if (ctx.cr6.eq) goto loc_820B17D0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82183448
	ctx.lr = 0x820B17CC;
	sub_82183448(ctx, base);
	// b 0x820b17d8
	goto loc_820B17D8;
loc_820B17D0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x820B17D8;
	sub_821845A0(ctx, base);
loc_820B17D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b17f0
	if (ctx.cr6.eq) goto loc_820B17F0;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x820d3ee8
	ctx.lr = 0x820B17E8;
	sub_820D3EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820b17f4
	goto loc_820B17F4;
loc_820B17F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820B17F4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B180C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B1814;
	sub_821837D0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x820cb9f8
	ctx.lr = 0x820B1820;
	sub_820CB9F8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_820B1828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B1830"))) PPC_WEAK_FUNC(sub_820B1830);
PPC_FUNC_IMPL(__imp__sub_820B1830) {
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
	// lwz r11,440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b1868
	if (ctx.cr6.eq) goto loc_820B1868;
	// li r5,20512
	ctx.r5.s64 = 20512;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82097308
	ctx.lr = 0x820B1860;
	sub_82097308(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_820B1868:
	// bl 0x821142a0
	ctx.lr = 0x820B186C;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b18d4
	if (ctx.cr6.eq) goto loc_820B18D4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b18d4
	if (ctx.cr6.eq) goto loc_820B18D4;
	// lwz r9,1688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b18d4
	if (ctx.cr6.eq) goto loc_820B18D4;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,2228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2228);
	// lwz r8,64(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,2228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2228, ctx.r6.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,64(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r4,2224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2224, ctx.r4.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B18D4:
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_820B18F0"))) PPC_WEAK_FUNC(sub_820B18F0);
PPC_FUNC_IMPL(__imp__sub_820B18F0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b19ac
	if (ctx.cr6.eq) goto loc_820B19AC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820b19ac
	if (ctx.cr6.eq) goto loc_820B19AC;
	// lis r4,17495
	ctx.r4.s64 = 1146552320;
	// lwz r3,1972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// ori r4,r4,19783
	ctx.r4.u64 = ctx.r4.u64 | 19783;
	// bl 0x821882d0
	ctx.lr = 0x820B192C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1940
	if (ctx.cr6.eq) goto loc_820B1940;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b19ac
	if (!ctx.cr6.eq) goto loc_820B19AC;
loc_820B1940:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82080068
	ctx.lr = 0x820B1948;
	sub_82080068(ctx, base);
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x82080000
	ctx.lr = 0x820B1950;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b196c
	if (ctx.cr6.eq) goto loc_820B196C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b0c50
	ctx.lr = 0x820B1964;
	sub_820B0C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820b1970
	goto loc_820B1970;
loc_820B196C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820B1970:
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r3,-4900(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4900);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B199C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x820B19A4;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b19b0
	goto loc_820B19B0;
loc_820B19AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B19B0:
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

__attribute__((alias("__imp__sub_820B19C8"))) PPC_WEAK_FUNC(sub_820B19C8);
PPC_FUNC_IMPL(__imp__sub_820B19C8) {
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
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b1a4c
	if (!ctx.cr6.eq) goto loc_820B1A4C;
	// lbz r11,573(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 573);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b1a4c
	if (!ctx.cr6.eq) goto loc_820B1A4C;
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b1a4c
	if (ctx.cr6.eq) goto loc_820B1A4C;
	// lwz r11,1360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820b1a10
	if (!ctx.cr6.eq) goto loc_820B1A10;
	// lwz r11,1364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b1a4c
	if (ctx.cr6.eq) goto loc_820B1A4C;
loc_820B1A10:
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,2051
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2051, ctx.xer);
	// beq cr6,0x820b1a4c
	if (ctx.cr6.eq) goto loc_820B1A4C;
	// cmpwi cr6,r11,2050
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2050, ctx.xer);
	// bne cr6,0x820b1a30
	if (!ctx.cr6.eq) goto loc_820B1A30;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b1a4c
	if (!ctx.cr6.eq) goto loc_820B1A4C;
loc_820B1A30:
	// lwz r4,1732(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1732);
	// bl 0x820b18f0
	ctx.lr = 0x820B1A38;
	sub_820B18F0(ctx, base);
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
loc_820B1A4C:
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

__attribute__((alias("__imp__sub_820B1A60"))) PPC_WEAK_FUNC(sub_820B1A60);
PPC_FUNC_IMPL(__imp__sub_820B1A60) {
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
	// bl 0x820b13b0
	ctx.lr = 0x820B1A80;
	sub_820B13B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b1a9c
	if (ctx.cr6.eq) goto loc_820B1A9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B1A98;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B1A9C:
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

__attribute__((alias("__imp__sub_820B1AB4"))) PPC_WEAK_FUNC(sub_820B1AB4);
PPC_FUNC_IMPL(__imp__sub_820B1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1AB8"))) PPC_WEAK_FUNC(sub_820B1AB8);
PPC_FUNC_IMPL(__imp__sub_820B1AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B1AC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x820B1ACC;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820b1c40
	if (ctx.cr6.eq) goto loc_820B1C40;
	// bl 0x8215bec8
	ctx.lr = 0x820B1ADC;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820b1c40
	if (ctx.cr6.eq) goto loc_820B1C40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b1bb4
	if (ctx.cr6.eq) goto loc_820B1BB4;
	// lwz r29,1688(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b1ba8
	if (ctx.cr6.eq) goto loc_820B1BA8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf. r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x820b1ba8
	if (!ctx.cr0.eq) goto loc_820B1BA8;
	// bl 0x821142a0
	ctx.lr = 0x820B1B28;
	sub_821142A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1ba8
	if (ctx.cr6.eq) goto loc_820B1BA8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82114410
	ctx.lr = 0x820B1B3C;
	sub_82114410(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820b1b6c
	if (!ctx.cr6.lt) goto loc_820B1B6C;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114460
	ctx.lr = 0x820B1B6C;
	sub_82114460(ctx, base);
loc_820B1B6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114410
	ctx.lr = 0x820B1B78;
	sub_82114410(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x820b1ba8
	if (!ctx.cr6.lt) goto loc_820B1BA8;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114460
	ctx.lr = 0x820B1BA8;
	sub_82114460(ctx, base);
loc_820B1BA8:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_820B1BB4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r31,-32
	ctx.r30.s64 = ctx.r31.s64 + -32;
	// lfs f0,-28916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28916);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 416, temp.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f13,-28920(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28920);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,424(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 424, temp.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f12,11480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11480);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 404, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820b1c18
	if (ctx.cr6.lt) goto loc_820B1C18;
	// beq cr6,0x820b1c0c
	if (ctx.cr6.eq) goto loc_820B1C0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820b1c20
	if (!ctx.cr6.lt) goto loc_820B1C20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b1830
	ctx.lr = 0x820B1C08;
	sub_820B1830(ctx, base);
	// b 0x820b1c20
	goto loc_820B1C20;
loc_820B1C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b15e8
	ctx.lr = 0x820B1C14;
	sub_820B15E8(ctx, base);
	// b 0x820b1c20
	goto loc_820B1C20;
loc_820B1C18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b14e8
	ctx.lr = 0x820B1C20;
	sub_820B14E8(ctx, base);
loc_820B1C20:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b1c5c
	if (ctx.cr6.eq) goto loc_820B1C5C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b1c5c
	if (ctx.cr6.eq) goto loc_820B1C5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820b1c4c
	goto loc_820B1C4C;
loc_820B1C40:
	// addic. r3,r31,-32
	ctx.xer.ca = ctx.r31.u32 > 31;
	ctx.r3.s64 = ctx.r31.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820b1c5c
	if (ctx.cr0.eq) goto loc_820B1C5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_820B1C4C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B1C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B1C64"))) PPC_WEAK_FUNC(sub_820B1C64);
PPC_FUNC_IMPL(__imp__sub_820B1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B1C68"))) PPC_WEAK_FUNC(sub_820B1C68);
PPC_FUNC_IMPL(__imp__sub_820B1C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B1C70;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,1716(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1716);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1cb4
	if (ctx.cr6.eq) goto loc_820B1CB4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x820b1d34
	goto loc_820B1D34;
loc_820B1CB4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820b1d14
	if (ctx.cr6.eq) goto loc_820B1D14;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x820b1cf8
	if (ctx.cr6.eq) goto loc_820B1CF8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b1cf8
	if (ctx.cr6.eq) goto loc_820B1CF8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820b1d20
	if (ctx.cr6.eq) goto loc_820B1D20;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// b 0x820b1d20
	goto loc_820B1D20;
loc_820B1CF8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b1d20
	if (ctx.cr6.eq) goto loc_820B1D20;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// b 0x820b1d20
	goto loc_820B1D20;
loc_820B1D14:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b1d20
	if (ctx.cr6.eq) goto loc_820B1D20;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
loc_820B1D20:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,1524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 & ctx.r29.u64;
loc_820B1D34:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,1528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1528, ctx.r28.u32);
	// lfs f0,11540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11540);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x820b1d7c
	if (ctx.cr6.lt) goto loc_820B1D7C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,601
	ctx.r10.s64 = 601;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r27,1528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1528, ctx.r27.u32);
loc_820B1D7C:
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// lwz r6,1516(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1516);
loc_820B1D94:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x820b1db4
	if (!ctx.cr0.gt) goto loc_820B1DB4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x820b1d94
	if (ctx.cr6.lt) goto loc_820B1D94;
loc_820B1DB4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820b1dc4
	if (!ctx.cr6.lt) goto loc_820B1DC4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820b1dd0
	goto loc_820B1DD0;
loc_820B1DC4:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x820b1dd0
	if (!ctx.cr6.gt) goto loc_820B1DD0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_820B1DD0:
	// stw r11,1516(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1516, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r28,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r28.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,1516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1516);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820b1df0
	if (ctx.cr6.eq) goto loc_820B1DF0;
	// stw r27,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r27.u32);
loc_820B1DF0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r30,1920(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1920);
	// stw r28,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c4860
	ctx.lr = 0x820B1E0C;
	sub_820C4860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1e2c
	if (ctx.cr6.eq) goto loc_820B1E2C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b1e2c
	if (!ctx.cr6.eq) goto loc_820B1E2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x820b1eb0
	goto loc_820B1EB0;
loc_820B1E2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c4860
	ctx.lr = 0x820B1E3C;
	sub_820C4860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1e5c
	if (ctx.cr6.eq) goto loc_820B1E5C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b1e5c
	if (!ctx.cr6.eq) goto loc_820B1E5C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x820b1eb0
	goto loc_820B1EB0;
loc_820B1E5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c4860
	ctx.lr = 0x820B1E6C;
	sub_820C4860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1e88
	if (ctx.cr6.eq) goto loc_820B1E88;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b1e88
	if (!ctx.cr6.eq) goto loc_820B1E88;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// b 0x820b1eb0
	goto loc_820B1EB0;
loc_820B1E88:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c4860
	ctx.lr = 0x820B1E98;
	sub_820C4860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b1eb4
	if (ctx.cr6.eq) goto loc_820B1EB4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b1eb4
	if (!ctx.cr6.eq) goto loc_820B1EB4;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
loc_820B1EB0:
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
loc_820B1EB4:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b1ef0
	if (ctx.cr6.eq) goto loc_820B1EF0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b1ef0
	if (!ctx.cr6.eq) goto loc_820B1EF0;
	// bl 0x821142a0
	ctx.lr = 0x820B1ED0;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b1ef0
	if (ctx.cr6.eq) goto loc_820B1EF0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x820b1ef0
	if (!ctx.cr6.eq) goto loc_820B1EF0;
	// li r4,30198
	ctx.r4.s64 = 30198;
	// bl 0x82114658
	ctx.lr = 0x820B1EEC;
	sub_82114658(ctx, base);
	// stw r3,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r3.u32);
loc_820B1EF0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// lfs f0,11484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,1532(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1532, temp.u32);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,1536(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1536, temp.u32);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f9,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,1540(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 1540, temp.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f7,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,1544(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1544, temp.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r9,1512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1512, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r28,1508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1508, ctx.r28.u32);
loc_820B1F6C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820b1f90
	if (!ctx.cr6.lt) goto loc_820B1F90;
	// lfs f11,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x820b1f90
	if (!ctx.cr6.lt) goto loc_820B1F90;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_820B1F90:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820b1f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B1F6C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B1FA0"))) PPC_WEAK_FUNC(sub_820B1FA0);
PPC_FUNC_IMPL(__imp__sub_820B1FA0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,573(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 573);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b2064
	if (!ctx.cr6.eq) goto loc_820B2064;
	// bl 0x8215bd60
	ctx.lr = 0x820B1FC8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b2008
	if (ctx.cr6.eq) goto loc_820B2008;
	// bl 0x82227aa0
	ctx.lr = 0x820B1FD8;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
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
	// beq cr6,0x820b2008
	if (ctx.cr6.eq) goto loc_820B2008;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b2008
	if (ctx.cr6.eq) goto loc_820B2008;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
loc_820B2008:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b2030
	if (ctx.cr6.eq) goto loc_820B2030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b08e0
	ctx.lr = 0x820B201C;
	sub_820B08E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B2030:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820b205c
	if (ctx.cr6.lt) goto loc_820B205C;
	// bne cr6,0x820b2064
	if (!ctx.cr6.eq) goto loc_820B2064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b0970
	ctx.lr = 0x820B2048;
	sub_820B0970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B205C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b1c68
	ctx.lr = 0x820B2064;
	sub_820B1C68(ctx, base);
loc_820B2064:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B2078"))) PPC_WEAK_FUNC(sub_820B2078);
PPC_FUNC_IMPL(__imp__sub_820B2078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,11544
	ctx.r10.s64 = ctx.r11.s64 + 11544;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2088"))) PPC_WEAK_FUNC(sub_820B2088);
PPC_FUNC_IMPL(__imp__sub_820B2088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r6,r8,11544
	ctx.r6.s64 = ctx.r8.s64 + 11544;
	// lfs f13,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r11,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r11.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stb r10,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r10.u8);
	// stb r10,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r10.u8);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
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
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B213C"))) PPC_WEAK_FUNC(sub_820B213C);
PPC_FUNC_IMPL(__imp__sub_820B213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2140"))) PPC_WEAK_FUNC(sub_820B2140);
PPC_FUNC_IMPL(__imp__sub_820B2140) {
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
	// bl 0x8209e0b0
	ctx.lr = 0x820B2158;
	sub_8209E0B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,11548
	ctx.r10.s64 = ctx.r11.s64 + 11548;
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

__attribute__((alias("__imp__sub_820B217C"))) PPC_WEAK_FUNC(sub_820B217C);
PPC_FUNC_IMPL(__imp__sub_820B217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2180"))) PPC_WEAK_FUNC(sub_820B2180);
PPC_FUNC_IMPL(__imp__sub_820B2180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820B2188;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820b22b8
	if (!ctx.cr6.gt) goto loc_820B22B8;
	// bl 0x8215c078
	ctx.lr = 0x820B21A0;
	sub_8215C078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B21A8;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B21B4;
	sub_821837D0(ctx, base);
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r10,r11,39321
	ctx.r10.u64 = ctx.r11.u64 | 39321;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820b21e4
	if (ctx.cr6.gt) goto loc_820B21E4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-17
	ctx.r10.s64 = -17;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x820b21e8
	if (!ctx.cr6.gt) goto loc_820B21E8;
loc_820B21E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820B21E8:
	// bl 0x82080d68
	ctx.lr = 0x820B21EC;
	sub_82080D68(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2224
	if (ctx.cr6.eq) goto loc_820B2224;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r30,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r30.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x820b2228
	if (ctx.cr0.lt) goto loc_820B2228;
loc_820B220C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b2088
	ctx.lr = 0x820B2214;
	sub_820B2088(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x820b220c
	if (!ctx.cr0.lt) goto loc_820B220C;
	// b 0x820b2228
	goto loc_820B2228;
loc_820B2224:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_820B2228:
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// stw r28,56(r27)
	PPC_STORE_U32(ctx.r27.u32 + 56, ctx.r28.u32);
	// rlwinm r3,r31,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820b2244
	if (!ctx.cr6.gt) goto loc_820B2244;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820B2244:
	// bl 0x82080d68
	ctx.lr = 0x820B2248;
	sub_82080D68(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// stw r3,92(r27)
	PPC_STORE_U32(ctx.r27.u32 + 92, ctx.r3.u32);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820b2264
	if (!ctx.cr6.gt) goto loc_820B2264;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820B2264:
	// bl 0x82080d68
	ctx.lr = 0x820B2268;
	sub_82080D68(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r3,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r3.u32);
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820b2284
	if (!ctx.cr6.gt) goto loc_820B2284;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820B2284:
	// bl 0x82080d68
	ctx.lr = 0x820B2288;
	sub_82080D68(ctx, base);
	// stw r3,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r3.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x820b22ac
	if (!ctx.cr6.gt) goto loc_820B22AC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_820B229C:
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// sthx r25,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x820b229c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B229C;
loc_820B22AC:
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B22B8;
	sub_821837D0(ctx, base);
loc_820B22B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820B22C0"))) PPC_WEAK_FUNC(sub_820B22C0);
PPC_FUNC_IMPL(__imp__sub_820B22C0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2318
	if (ctx.cr6.eq) goto loc_820B2318;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b2310
	if (ctx.cr6.eq) goto loc_820B2310;
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
	ctx.lr = 0x820B230C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820b2318
	goto loc_820B2318;
loc_820B2310:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820B2318;
	sub_82183E40(ctx, base);
loc_820B2318:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2334
	if (ctx.cr6.eq) goto loc_820B2334;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820B2334;
	sub_82183E40(ctx, base);
loc_820B2334:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b234c
	if (ctx.cr6.eq) goto loc_820B234C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820B234C;
	sub_82183E40(ctx, base);
loc_820B234C:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2364
	if (ctx.cr6.eq) goto loc_820B2364;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820B2364;
	sub_82183E40(ctx, base);
loc_820B2364:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820B2384"))) PPC_WEAK_FUNC(sub_820B2384);
PPC_FUNC_IMPL(__imp__sub_820B2384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2388"))) PPC_WEAK_FUNC(sub_820B2388);
PPC_FUNC_IMPL(__imp__sub_820B2388) {
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
	// addi r10,r11,11548
	ctx.r10.s64 = ctx.r11.s64 + 11548;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820b22c0
	ctx.lr = 0x820B23B4;
	sub_820B22C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e238
	ctx.lr = 0x820B23BC;
	sub_8209E238(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b23d8
	if (ctx.cr6.eq) goto loc_820B23D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B23D4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B23D8:
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

__attribute__((alias("__imp__sub_820B23F0"))) PPC_WEAK_FUNC(sub_820B23F0);
PPC_FUNC_IMPL(__imp__sub_820B23F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820B23F8;
	sub_82248774(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b26d8
	if (ctx.cr6.eq) goto loc_820B26D8;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,38576
	ctx.r8.u64 = ctx.r10.u64 | 38576;
	// ori r7,r9,38592
	ctx.r7.u64 = ctx.r9.u64 | 38592;
	// lwz r31,-19792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// ldx r28,r31,r8
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r8.u32);
	// lhzx r23,r31,r7
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b26d8
	if (ctx.cr6.eq) goto loc_820B26D8;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b26d8
	if (ctx.cr6.eq) goto loc_820B26D8;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// ori r7,r10,35024
	ctx.r7.u64 = ctx.r10.u64 | 35024;
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r4,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ldx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// bl 0x821a8e50
	ctx.lr = 0x820B24AC;
	sub_821A8E50(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208fb30
	ctx.lr = 0x820B24BC;
	sub_8208FB30(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82092930
	ctx.lr = 0x820B24C4;
	sub_82092930(ctx, base);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820b250c
	if (ctx.cr6.eq) goto loc_820B250C;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x8208fb30
	ctx.lr = 0x820B24FC;
	sub_8208FB30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x821a8e50
	ctx.lr = 0x820B250C;
	sub_821A8E50(ctx, base);
loc_820B250C:
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addis r24,r31,2
	ctx.r24.s64 = ctx.r31.s64 + 131072;
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r24,r24,-26952
	ctx.r24.s64 = ctx.r24.s64 + -26952;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// ld r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// bl 0x82095700
	ctx.lr = 0x820B2540;
	sub_82095700(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x821a8bc0
	ctx.lr = 0x820B2558;
	sub_821A8BC0(ctx, base);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r6,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x821a8848
	ctx.lr = 0x820B2584;
	sub_821A8848(ctx, base);
	// li r7,28
	ctx.r7.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a88d0
	ctx.lr = 0x820B259C;
	sub_821A88D0(ctx, base);
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// subf r8,r29,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r29.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,584(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 584);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x821a8968
	ctx.lr = 0x820B25BC;
	sub_821A8968(ctx, base);
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820b26a8
	if (!ctx.cr6.gt) goto loc_820B26A8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_820B25D0:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820b2694
	if (!ctx.cr6.eq) goto loc_820B2694;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// bne cr6,0x820b2608
	if (!ctx.cr6.eq) goto loc_820B2608;
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
loc_820B2608:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820b2694
	if (!ctx.cr6.eq) goto loc_820B2694;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// addi r9,r1,312
	ctx.r9.s64 = ctx.r1.s64 + 312;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820B2624:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x820b2624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B2624;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x82082318
	ctx.lr = 0x820B2650;
	sub_82082318(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// clrlwi r4,r23,16
	ctx.r4.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821b16b8
	ctx.lr = 0x820B2664;
	sub_821B16B8(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r3,r11,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r11.s64;
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// bl 0x821a89e8
	ctx.lr = 0x820B2694;
	sub_821A89E8(ctx, base);
loc_820B2694:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b25d0
	if (ctx.cr6.lt) goto loc_820B25D0;
loc_820B26A8:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// ld r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// bl 0x821a8dc0
	ctx.lr = 0x820B26D8;
	sub_821A8DC0(ctx, base);
loc_820B26D8:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820B26E0"))) PPC_WEAK_FUNC(sub_820B26E0);
PPC_FUNC_IMPL(__imp__sub_820B26E0) {
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
	// lwz r3,-8556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2714
	if (ctx.cr6.eq) goto loc_820B2714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B2714:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8556, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B2730"))) PPC_WEAK_FUNC(sub_820B2730);
PPC_FUNC_IMPL(__imp__sub_820B2730) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,11576
	ctx.r9.s64 = ctx.r11.s64 + 11576;
	// addi r8,r10,11568
	ctx.r8.s64 = ctx.r10.s64 + 11568;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// bl 0x82185a50
	ctx.lr = 0x820B2764;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B276C;
	sub_821857F0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B2780"))) PPC_WEAK_FUNC(sub_820B2780);
PPC_FUNC_IMPL(__imp__sub_820B2780) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_820B2790"))) PPC_WEAK_FUNC(sub_820B2790);
PPC_FUNC_IMPL(__imp__sub_820B2790) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B27B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b27d0
	if (!ctx.cr6.eq) goto loc_820B27D0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B27D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B27E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B27F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820B2810"))) PPC_WEAK_FUNC(sub_820B2810);
PPC_FUNC_IMPL(__imp__sub_820B2810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820b2928
	sub_820B2928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2818"))) PPC_WEAK_FUNC(sub_820B2818);
PPC_FUNC_IMPL(__imp__sub_820B2818) {
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
	ctx.lr = 0x820B2828;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b2840
	if (ctx.cr6.eq) goto loc_820B2840;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82183448
	ctx.lr = 0x820B283C;
	sub_82183448(ctx, base);
	// b 0x820b2848
	goto loc_820B2848;
loc_820B2840:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820B2848;
	sub_821845A0(ctx, base);
loc_820B2848:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b286c
	if (ctx.cr6.eq) goto loc_820B286C;
	// bl 0x820d4648
	ctx.lr = 0x820B2854;
	sub_820D4648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8556(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B286C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8556, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2888"))) PPC_WEAK_FUNC(sub_820B2888);
PPC_FUNC_IMPL(__imp__sub_820B2888) {
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
	ctx.lr = 0x820B28A8;
	sub_82185740(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// addi r10,r11,-5
	ctx.r10.s64 = ctx.r11.s64 + -5;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x821859a0
	ctx.lr = 0x820B28D4;
	sub_821859A0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r7,11576
	ctx.r5.s64 = ctx.r7.s64 + 11576;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r4,r6,11568
	ctx.r4.s64 = ctx.r6.s64 + 11568;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B2924"))) PPC_WEAK_FUNC(sub_820B2924);
PPC_FUNC_IMPL(__imp__sub_820B2924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2928"))) PPC_WEAK_FUNC(sub_820B2928);
PPC_FUNC_IMPL(__imp__sub_820B2928) {
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
	// addi r9,r11,11576
	ctx.r9.s64 = ctx.r11.s64 + 11576;
	// addi r8,r10,11568
	ctx.r8.s64 = ctx.r10.s64 + 11568;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185a50
	ctx.lr = 0x820B2964;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B296C;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820b2988
	if (ctx.cr6.eq) goto loc_820B2988;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B2984;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B2988:
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

__attribute__((alias("__imp__sub_820B29A0"))) PPC_WEAK_FUNC(sub_820B29A0);
PPC_FUNC_IMPL(__imp__sub_820B29A0) {
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
	ctx.lr = 0x820B29B0;
	sub_8215BD60(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B29C4"))) PPC_WEAK_FUNC(sub_820B29C4);
PPC_FUNC_IMPL(__imp__sub_820B29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B29C8"))) PPC_WEAK_FUNC(sub_820B29C8);
PPC_FUNC_IMPL(__imp__sub_820B29C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B29D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82225508
	ctx.lr = 0x820B29DC;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2b9c
	if (ctx.cr6.eq) goto loc_820B2B9C;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -740);
	// bl 0x82225eb8
	ctx.lr = 0x820B29F0;
	sub_82225EB8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-4964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b2b9c
	if (ctx.cr6.eq) goto loc_820B2B9C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820b2a70
	if (ctx.cr6.lt) goto loc_820B2A70;
	// beq cr6,0x820b2a80
	if (ctx.cr6.eq) goto loc_820B2A80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820b2b9c
	if (!ctx.cr6.eq) goto loc_820B2B9C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b2b9c
	if (!ctx.cr6.eq) goto loc_820B2B9C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820b2b9c
	if (!ctx.cr6.eq) goto loc_820B2B9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,-740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -740);
	// lwz r30,704(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x82227aa0
	ctx.lr = 0x820B2A48;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227fe8
	ctx.lr = 0x820B2A50;
	sub_82227FE8(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B2A70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820b2b9c
	if (ctx.cr6.eq) goto loc_820B2B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_820B2A80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2b9c
	if (ctx.cr6.eq) goto loc_820B2B9C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x820b2b30
	if (ctx.cr6.eq) goto loc_820B2B30;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x820b2ad4
	if (ctx.cr6.eq) goto loc_820B2AD4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x820b2b9c
	if (!ctx.cr6.eq) goto loc_820B2B9C;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// lwz r11,-740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -740);
	// lwz r11,704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b2b58
	if (!ctx.cr6.eq) goto loc_820B2B58;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x820b2b58
	goto loc_820B2B58;
loc_820B2AD4:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,-740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -740);
	// lwz r30,704(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x82227aa0
	ctx.lr = 0x820B2AEC;
	sub_82227AA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82227fe8
	ctx.lr = 0x820B2AF4;
	sub_82227FE8(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2B0C;
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
	ctx.lr = 0x820B2B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B2B30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,-740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -740);
	// lwz r10,1816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b2b54
	if (ctx.cr6.eq) goto loc_820B2B54;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,-740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -740);
loc_820B2B54:
	// lwz r29,704(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
loc_820B2B58:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82227aa0
	ctx.lr = 0x820B2B60;
	sub_82227AA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82227fe8
	ctx.lr = 0x820B2B68;
	sub_82227FE8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B2B80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B2B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
loc_820B2B9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B2BA4"))) PPC_WEAK_FUNC(sub_820B2BA4);
PPC_FUNC_IMPL(__imp__sub_820B2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2BA8"))) PPC_WEAK_FUNC(sub_820B2BA8);
PPC_FUNC_IMPL(__imp__sub_820B2BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820cfc08
	sub_820CFC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2BBC"))) PPC_WEAK_FUNC(sub_820B2BBC);
PPC_FUNC_IMPL(__imp__sub_820B2BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2BC0"))) PPC_WEAK_FUNC(sub_820B2BC0);
PPC_FUNC_IMPL(__imp__sub_820B2BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820cfac8
	sub_820CFAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B2BD4"))) PPC_WEAK_FUNC(sub_820B2BD4);
PPC_FUNC_IMPL(__imp__sub_820B2BD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2BD8"))) PPC_WEAK_FUNC(sub_820B2BD8);
PPC_FUNC_IMPL(__imp__sub_820B2BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,1248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820B2BFC"))) PPC_WEAK_FUNC(sub_820B2BFC);
PPC_FUNC_IMPL(__imp__sub_820B2BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2C00"))) PPC_WEAK_FUNC(sub_820B2C00);
PPC_FUNC_IMPL(__imp__sub_820B2C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,1248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820B2C24"))) PPC_WEAK_FUNC(sub_820B2C24);
PPC_FUNC_IMPL(__imp__sub_820B2C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2C28"))) PPC_WEAK_FUNC(sub_820B2C28);
PPC_FUNC_IMPL(__imp__sub_820B2C28) {
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
	ctx.lr = 0x820B2C38;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x820b2c50
	if (ctx.cr6.eq) goto loc_820B2C50;
	// bl 0x82183448
	ctx.lr = 0x820B2C4C;
	sub_82183448(ctx, base);
	// b 0x820b2c54
	goto loc_820B2C54;
loc_820B2C50:
	// bl 0x821845a0
	ctx.lr = 0x820B2C54;
	sub_821845A0(ctx, base);
loc_820B2C54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2c78
	if (ctx.cr6.eq) goto loc_820B2C78;
	// bl 0x8209eda0
	ctx.lr = 0x820B2C60;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B2C78:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8520, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2C94"))) PPC_WEAK_FUNC(sub_820B2C94);
PPC_FUNC_IMPL(__imp__sub_820B2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2C98"))) PPC_WEAK_FUNC(sub_820B2C98);
PPC_FUNC_IMPL(__imp__sub_820B2C98) {
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
	ctx.lr = 0x820B2CA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b2cc0
	if (ctx.cr6.eq) goto loc_820B2CC0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x820B2CBC;
	sub_82183448(ctx, base);
	// b 0x820b2cc8
	goto loc_820B2CC8;
loc_820B2CC0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820B2CC8;
	sub_821845A0(ctx, base);
loc_820B2CC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2cec
	if (ctx.cr6.eq) goto loc_820B2CEC;
	// bl 0x820d4d58
	ctx.lr = 0x820B2CD4;
	sub_820D4D58(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B2CEC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2D08"))) PPC_WEAK_FUNC(sub_820B2D08);
PPC_FUNC_IMPL(__imp__sub_820B2D08) {
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
	ctx.lr = 0x820B2D18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b2d30
	if (ctx.cr6.eq) goto loc_820B2D30;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82183448
	ctx.lr = 0x820B2D2C;
	sub_82183448(ctx, base);
	// b 0x820b2d38
	goto loc_820B2D38;
loc_820B2D30:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x820B2D38;
	sub_821845A0(ctx, base);
loc_820B2D38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2d5c
	if (ctx.cr6.eq) goto loc_820B2D5C;
	// bl 0x820d5800
	ctx.lr = 0x820B2D44;
	sub_820D5800(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B2D5C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8512, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B2D78"))) PPC_WEAK_FUNC(sub_820B2D78);
PPC_FUNC_IMPL(__imp__sub_820B2D78) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x820b2c28
	ctx.lr = 0x820B2DA4;
	sub_820B2C28(ctx, base);
	// bl 0x820b2c98
	ctx.lr = 0x820B2DA8;
	sub_820B2C98(ctx, base);
	// bl 0x820b2d08
	ctx.lr = 0x820B2DAC;
	sub_820B2D08(ctx, base);
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

__attribute__((alias("__imp__sub_820B2DC4"))) PPC_WEAK_FUNC(sub_820B2DC4);
PPC_FUNC_IMPL(__imp__sub_820B2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2DC8"))) PPC_WEAK_FUNC(sub_820B2DC8);
PPC_FUNC_IMPL(__imp__sub_820B2DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B2DD0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820d5ac8
	ctx.lr = 0x820B2DDC;
	sub_820D5AC8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-8520(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8520);
	// bl 0x8215bec8
	ctx.lr = 0x820B2DE8;
	sub_8215BEC8(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4bd8
	ctx.lr = 0x820B2DF4;
	sub_820D4BD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2ea8
	if (ctx.cr6.eq) goto loc_820B2EA8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820b2e30
	if (!ctx.cr6.eq) goto loc_820B2E30;
	// lwz r31,-8516(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8516);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2e30
	if (ctx.cr6.eq) goto loc_820B2E30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4dd8
	ctx.lr = 0x820B2E24;
	sub_820D4DD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4dd8
	ctx.lr = 0x820B2E30;
	sub_820D4DD8(ctx, base);
loc_820B2E30:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-468(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x8215bec8
	ctx.lr = 0x820B2E3C;
	sub_8215BEC8(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8215f840
	ctx.lr = 0x820B2E60;
	sub_8215F840(ctx, base);
	// bl 0x820f3a78
	ctx.lr = 0x820B2E64;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2ea8
	if (ctx.cr6.eq) goto loc_820B2EA8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b2ea8
	if (ctx.cr6.eq) goto loc_820B2EA8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820b2ea8
	if (ctx.cr6.eq) goto loc_820B2EA8;
	// bl 0x820f3a78
	ctx.lr = 0x820B2E88;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2ea8
	if (ctx.cr6.eq) goto loc_820B2EA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8516);
	// bl 0x820d4e20
	ctx.lr = 0x820B2E9C;
	sub_820D4E20(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820B2EA0;
	sub_8215BEC8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820B2EA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B2EB0"))) PPC_WEAK_FUNC(sub_820B2EB0);
PPC_FUNC_IMPL(__imp__sub_820B2EB0) {
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
	// bl 0x8215c068
	ctx.lr = 0x820B2EC8;
	sub_8215C068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B2ED0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B2EDC;
	sub_821837D0(ctx, base);
	// bl 0x820d59a8
	ctx.lr = 0x820B2EE0;
	sub_820D59A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2eec
	if (ctx.cr6.eq) goto loc_820B2EEC;
	// bl 0x820d5958
	ctx.lr = 0x820B2EEC;
	sub_820D5958(ctx, base);
loc_820B2EEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B2EF4;
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

__attribute__((alias("__imp__sub_820B2F0C"))) PPC_WEAK_FUNC(sub_820B2F0C);
PPC_FUNC_IMPL(__imp__sub_820B2F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B2F10"))) PPC_WEAK_FUNC(sub_820B2F10);
PPC_FUNC_IMPL(__imp__sub_820B2F10) {
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
	// lwz r31,-8520(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8520);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2f48
	if (ctx.cr6.eq) goto loc_820B2F48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820B2F3C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B2F48;
	sub_82183E40(ctx, base);
loc_820B2F48:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8520(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8520, ctx.r11.u32);
	// lwz r30,-8516(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8516);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b2f74
	if (ctx.cr6.eq) goto loc_820B2F74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d5350
	ctx.lr = 0x820B2F68;
	sub_820D5350(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B2F74;
	sub_82183E40(ctx, base);
loc_820B2F74:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8516, ctx.r11.u32);
	// lwz r31,-8512(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8512);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b2fa0
	if (ctx.cr6.eq) goto loc_820B2FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d5400
	ctx.lr = 0x820B2F94;
	sub_820D5400(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B2FA0;
	sub_82183E40(ctx, base);
loc_820B2FA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8512(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8512, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820B2FC0"))) PPC_WEAK_FUNC(sub_820B2FC0);
PPC_FUNC_IMPL(__imp__sub_820B2FC0) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r7,r11,11652
	ctx.r7.s64 = ctx.r11.s64 + 11652;
	// addi r6,r10,11644
	ctx.r6.s64 = ctx.r10.s64 + 11644;
	// addi r5,r9,11612
	ctx.r5.s64 = ctx.r9.s64 + 11612;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,-8548(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8548, ctx.r11.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// bl 0x821883b8
	ctx.lr = 0x820B3014;
	sub_821883B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B301C;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821863b8
	ctx.lr = 0x820B3024;
	sub_821863B8(ctx, base);
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

__attribute__((alias("__imp__sub_820B303C"))) PPC_WEAK_FUNC(sub_820B303C);
PPC_FUNC_IMPL(__imp__sub_820B303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3040"))) PPC_WEAK_FUNC(sub_820B3040);
PPC_FUNC_IMPL(__imp__sub_820B3040) {
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
	// lwz r3,-8548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3074
	if (ctx.cr6.eq) goto loc_820B3074;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B3074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B3074:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8548, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B3090"))) PPC_WEAK_FUNC(sub_820B3090);
PPC_FUNC_IMPL(__imp__sub_820B3090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b30a8
	if (ctx.cr6.eq) goto loc_820B30A8;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// blr 
	return;
loc_820B30A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B30B0"))) PPC_WEAK_FUNC(sub_820B30B0);
PPC_FUNC_IMPL(__imp__sub_820B30B0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820ecca8
	ctx.lr = 0x820B30D4;
	sub_820ECCA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820B3104"))) PPC_WEAK_FUNC(sub_820B3104);
PPC_FUNC_IMPL(__imp__sub_820B3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3108"))) PPC_WEAK_FUNC(sub_820B3108);
PPC_FUNC_IMPL(__imp__sub_820B3108) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b3140
	if (ctx.cr6.eq) goto loc_820B3140;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820b31a0
	if (!ctx.cr6.eq) goto loc_820B31A0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b31a0
	if (ctx.cr6.eq) goto loc_820B31A0;
loc_820B3140:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x820b3178
	if (!ctx.cr6.lt) goto loc_820B3178;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b3194
	if (!ctx.cr6.eq) goto loc_820B3194;
	// bl 0x820f3a78
	ctx.lr = 0x820B315C;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b3178
	if (ctx.cr6.eq) goto loc_820B3178;
	// bl 0x8215bec8
	ctx.lr = 0x820B3168;
	sub_8215BEC8(ctx, base);
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3178
	if (ctx.cr6.eq) goto loc_820B3178;
	// bl 0x8208f880
	ctx.lr = 0x820B3178;
	sub_8208F880(ctx, base);
loc_820B3178:
	// li r11,1
	ctx.r11.s64 = 1;
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
loc_820B3194:
	// ble cr6,0x820b31a0
	if (!ctx.cr6.gt) goto loc_820B31A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_820B31A0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B31B4"))) PPC_WEAK_FUNC(sub_820B31B4);
PPC_FUNC_IMPL(__imp__sub_820B31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B31B8"))) PPC_WEAK_FUNC(sub_820B31B8);
PPC_FUNC_IMPL(__imp__sub_820B31B8) {
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
	// lwz r3,-8544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b31ec
	if (ctx.cr6.eq) goto loc_820B31EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B31EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B31EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8544, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B3208"))) PPC_WEAK_FUNC(sub_820B3208);
PPC_FUNC_IMPL(__imp__sub_820B3208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x820b3220
	sub_820B3220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B3210"))) PPC_WEAK_FUNC(sub_820B3210);
PPC_FUNC_IMPL(__imp__sub_820B3210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x820b3220
	sub_820B3220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B3218"))) PPC_WEAK_FUNC(sub_820B3218);
PPC_FUNC_IMPL(__imp__sub_820B3218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x820b38a8
	sub_820B38A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B3220"))) PPC_WEAK_FUNC(sub_820B3220);
PPC_FUNC_IMPL(__imp__sub_820B3220) {
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
	// bl 0x820b2fc0
	ctx.lr = 0x820B3240;
	sub_820B2FC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b325c
	if (ctx.cr6.eq) goto loc_820B325C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B3258;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B325C:
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

__attribute__((alias("__imp__sub_820B3274"))) PPC_WEAK_FUNC(sub_820B3274);
PPC_FUNC_IMPL(__imp__sub_820B3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3278"))) PPC_WEAK_FUNC(sub_820B3278);
PPC_FUNC_IMPL(__imp__sub_820B3278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,112
	ctx.r8.s64 = 112;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,8056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// li r6,116
	ctx.r6.s64 = 116;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lfs f0,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,11700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11700);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f12,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.f12.u32);
	// lfs f0,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.f10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B32E0"))) PPC_WEAK_FUNC(sub_820B32E0);
PPC_FUNC_IMPL(__imp__sub_820B32E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B32E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820B32F8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0e0
	ctx.lr = 0x820B3304;
	sub_8208E0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b33a0
	if (!ctx.cr6.eq) goto loc_820B33A0;
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820b3328
	if (!ctx.cr6.eq) goto loc_820B3328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e148
	ctx.lr = 0x820B3320;
	sub_8208E148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b33a0
	if (!ctx.cr6.eq) goto loc_820B33A0;
loc_820B3328:
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820b3344
	if (!ctx.cr6.eq) goto loc_820B3344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e118
	ctx.lr = 0x820B333C;
	sub_8208E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b33a0
	if (!ctx.cr6.eq) goto loc_820B33A0;
loc_820B3344:
	// lwz r11,1356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b33a0
	if (ctx.cr6.eq) goto loc_820B33A0;
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820b3368
	if (!ctx.cr6.eq) goto loc_820B3368;
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b33a0
	if (ctx.cr6.eq) goto loc_820B33A0;
loc_820B3368:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x820b33a0
	if (ctx.cr6.eq) goto loc_820B33A0;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x820b33a0
	if (ctx.cr6.eq) goto loc_820B33A0;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x820b33a0
	if (ctx.cr6.eq) goto loc_820B33A0;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b32f8
	if (ctx.cr6.lt) goto loc_820B32F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B33A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B33AC"))) PPC_WEAK_FUNC(sub_820B33AC);
PPC_FUNC_IMPL(__imp__sub_820B33AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B33B0"))) PPC_WEAK_FUNC(sub_820B33B0);
PPC_FUNC_IMPL(__imp__sub_820B33B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B33B8;
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
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_820B33CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b33e8
	if (ctx.cr6.eq) goto loc_820B33E8;
	// stw r29,1892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1892, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,900
	ctx.r3.s64 = ctx.r11.s64 + 900;
	// bl 0x820ef488
	ctx.lr = 0x820B33E8;
	sub_820EF488(ctx, base);
loc_820B33E8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b33cc
	if (ctx.cr6.lt) goto loc_820B33CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B3400"))) PPC_WEAK_FUNC(sub_820B3400);
PPC_FUNC_IMPL(__imp__sub_820B3400) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820b3430
	if (!ctx.cr6.gt) goto loc_820B3430;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_820B3430:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3488
	if (ctx.cr6.eq) goto loc_820B3488;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bne 0x820b3488
	if (!ctx.cr0.eq) goto loc_820B3488;
	// bl 0x8215bec8
	ctx.lr = 0x820B344C;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820b348c
	if (!ctx.cr6.gt) goto loc_820B348C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x820b348c
	if (ctx.cr6.gt) goto loc_820B348C;
	// bl 0x820ecca8
	ctx.lr = 0x820B3468;
	sub_820ECCA8(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34557
	ctx.r3.u64 = ctx.r3.u64 | 34557;
	// bl 0x8208f878
	ctx.lr = 0x820B3474;
	sub_8208F878(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
loc_820B3488:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820B348C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B34A0"))) PPC_WEAK_FUNC(sub_820B34A0);
PPC_FUNC_IMPL(__imp__sub_820B34A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820B34A8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,-5052
	ctx.r28.s64 = ctx.r11.s64 + -5052;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820B34C4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3554
	if (ctx.cr6.eq) goto loc_820B3554;
	// lbz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b3554
	if (!ctx.cr6.eq) goto loc_820B3554;
	// lwz r11,1356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b35e0
	if (ctx.cr6.eq) goto loc_820B35E0;
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820b3500
	if (!ctx.cr6.eq) goto loc_820B3500;
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b35e0
	if (ctx.cr6.eq) goto loc_820B35E0;
loc_820B3500:
	// bl 0x8215bec8
	ctx.lr = 0x820B3504;
	sub_8215BEC8(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3524
	if (ctx.cr6.eq) goto loc_820B3524;
	// bl 0x8215bec8
	ctx.lr = 0x820B3514;
	sub_8215BEC8(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lwz r10,1564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820b3570
	if (!ctx.cr6.lt) goto loc_820B3570;
loc_820B3524:
	// bl 0x8215bec8
	ctx.lr = 0x820B3528;
	sub_8215BEC8(ctx, base);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3554
	if (ctx.cr6.eq) goto loc_820B3554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e7f0
	ctx.lr = 0x820B353C;
	sub_8208E7F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b3554
	if (ctx.cr6.eq) goto loc_820B3554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e700
	ctx.lr = 0x820B354C;
	sub_8208E700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b35c8
	if (ctx.cr6.eq) goto loc_820B35C8;
loc_820B3554:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b34c4
	if (ctx.cr6.lt) goto loc_820B34C4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820B3570:
	// lwz r30,1728(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// bl 0x8215bec8
	ctx.lr = 0x820B3578;
	sub_8215BEC8(ctx, base);
	// stb r30,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r30.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820B3580;
	sub_8215BEC8(ctx, base);
	// stb r29,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r29.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820B3588;
	sub_8215BEC8(ctx, base);
	// lbz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r11,1908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r8,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r8.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r9.u8);
	// beq cr6,0x820b35b4
	if (ctx.cr6.eq) goto loc_820B35B4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_820B35B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r26.u32);
	// stw r11,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820B35C8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,88(r27)
	PPC_STORE_U32(ctx.r27.u32 + 88, ctx.r29.u32);
	// stw r26,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r26.u32);
	// stw r11,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820B35E0:
	// lwz r30,1728(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// bl 0x8215bec8
	ctx.lr = 0x820B35E8;
	sub_8215BEC8(ctx, base);
	// stb r30,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r30.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820B35F0;
	sub_8215BEC8(ctx, base);
	// stb r29,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r29.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820B35F8;
	sub_8215BEC8(ctx, base);
	// lbz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r11,1908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r9.u8);
	// beq cr6,0x820b3624
	if (ctx.cr6.eq) goto loc_820B3624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_820B3624:
	// stw r10,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r10.u32);
	// stw r26,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820B3634"))) PPC_WEAK_FUNC(sub_820B3634);
PPC_FUNC_IMPL(__imp__sub_820B3634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3638"))) PPC_WEAK_FUNC(sub_820B3638);
PPC_FUNC_IMPL(__imp__sub_820B3638) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820b3680
	if (!ctx.cr6.lt) goto loc_820B3680;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b368c
	if (ctx.cr6.eq) goto loc_820B368C;
loc_820B3680:
	// bl 0x8215bec8
	ctx.lr = 0x820B3684;
	sub_8215BEC8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_820B368C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B369C"))) PPC_WEAK_FUNC(sub_820B369C);
PPC_FUNC_IMPL(__imp__sub_820B369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B36A0"))) PPC_WEAK_FUNC(sub_820B36A0);
PPC_FUNC_IMPL(__imp__sub_820B36A0) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820b36e4
	if (!ctx.cr6.lt) goto loc_820B36E4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b36f0
	if (ctx.cr6.eq) goto loc_820B36F0;
loc_820B36E4:
	// bl 0x8215bec8
	ctx.lr = 0x820B36E8;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_820B36F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B3700"))) PPC_WEAK_FUNC(sub_820B3700);
PPC_FUNC_IMPL(__imp__sub_820B3700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B3708;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-5052
	ctx.r9.s64 = ctx.r10.s64 + -5052;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208e1d8
	ctx.lr = 0x820B372C;
	sub_8208E1D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b3754
	if (!ctx.cr6.eq) goto loc_820B3754;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8212d230
	ctx.lr = 0x820B373C;
	sub_8212D230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B3754:
	// bl 0x8215bec8
	ctx.lr = 0x820B3758;
	sub_8215BEC8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// twllei r8,0
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r3,r7,r8
	ctx.r3.s32 = ctx.r7.s32 / ctx.r8.s32;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// beq cr6,0x820b3814
	if (ctx.cr6.eq) goto loc_820B3814;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820b3810
	if (!ctx.cr6.eq) goto loc_820B3810;
	// bl 0x8212d258
	ctx.lr = 0x820B37A8;
	sub_8212D258(ctx, base);
	// lwz r29,1728(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// bl 0x8215bec8
	ctx.lr = 0x820B37B0;
	sub_8215BEC8(ctx, base);
	// stb r29,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r29.u8);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8215bec8
	ctx.lr = 0x820B37BC;
	sub_8215BEC8(ctx, base);
	// stb r29,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r29.u8);
	// bl 0x8215bec8
	ctx.lr = 0x820B37C4;
	sub_8215BEC8(ctx, base);
	// lbz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lwz r11,1908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,573(r30)
	PPC_STORE_U8(ctx.r30.u32 + 573, ctx.r8.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,574(r30)
	PPC_STORE_U8(ctx.r30.u32 + 574, ctx.r9.u8);
	// beq cr6,0x820b37f0
	if (ctx.cr6.eq) goto loc_820B37F0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_820B37F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B3810:
	// bl 0x8212d1d8
	ctx.lr = 0x820B3814;
	sub_8212D1D8(ctx, base);
loc_820B3814:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B3824"))) PPC_WEAK_FUNC(sub_820B3824);
PPC_FUNC_IMPL(__imp__sub_820B3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3828"))) PPC_WEAK_FUNC(sub_820B3828);
PPC_FUNC_IMPL(__imp__sub_820B3828) {
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
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820B3848;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820B3854;
	sub_82188338(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r9,11692
	ctx.r7.s64 = ctx.r9.s64 + 11692;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r6,r8,11660
	ctx.r6.s64 = ctx.r8.s64 + 11660;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B38A8"))) PPC_WEAK_FUNC(sub_820B38A8);
PPC_FUNC_IMPL(__imp__sub_820B38A8) {
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
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r11,11692
	ctx.r8.s64 = ctx.r11.s64 + 11692;
	// addi r7,r10,11660
	ctx.r7.s64 = ctx.r10.s64 + 11660;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,-8544(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8544, ctx.r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x820B38F0;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B38F8;
	sub_821857F0(ctx, base);
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820b3914
	if (ctx.cr6.eq) goto loc_820B3914;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B3910;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B3914:
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

__attribute__((alias("__imp__sub_820B392C"))) PPC_WEAK_FUNC(sub_820B392C);
PPC_FUNC_IMPL(__imp__sub_820B392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3930"))) PPC_WEAK_FUNC(sub_820B3930);
PPC_FUNC_IMPL(__imp__sub_820B3930) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185698
	ctx.lr = 0x820B394C;
	sub_82185698(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82185740
	ctx.lr = 0x820B395C;
	sub_82185740(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820B3968;
	sub_82188338(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r11,-7560
	ctx.r6.s64 = ctx.r11.s64 + -7560;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r8,11612
	ctx.r3.s64 = ctx.r8.s64 + 11612;
	// addi r5,r10,11652
	ctx.r5.s64 = ctx.r10.s64 + 11652;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r4,r9,11644
	ctx.r4.s64 = ctx.r9.s64 + 11644;
	// lfs f13,8056(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r10,112
	ctx.r10.s64 = 112;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// li r8,116
	ctx.r8.s64 = 116;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lfs f0,64(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,11700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f12,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f12.u32);
	// lfs f0,64(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f10.u32);
	// stw r31,-8548(r7)
	PPC_STORE_U32(ctx.r7.u32 + -8548, ctx.r31.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B3A14"))) PPC_WEAK_FUNC(sub_820B3A14);
PPC_FUNC_IMPL(__imp__sub_820B3A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3A18"))) PPC_WEAK_FUNC(sub_820B3A18);
PPC_FUNC_IMPL(__imp__sub_820B3A18) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b3ae8
	if (ctx.cr6.eq) goto loc_820B3AE8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b3ae8
	if (ctx.cr6.eq) goto loc_820B3AE8;
	// bl 0x8215bec8
	ctx.lr = 0x820B3A44;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b3ae8
	if (!ctx.cr6.eq) goto loc_820B3AE8;
	// bl 0x820aed80
	ctx.lr = 0x820B3A54;
	sub_820AED80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b3ad0
	if (ctx.cr6.eq) goto loc_820B3AD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b32e0
	ctx.lr = 0x820B3A64;
	sub_820B32E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b3ad0
	if (ctx.cr6.eq) goto loc_820B3AD0;
	// bl 0x820aed18
	ctx.lr = 0x820B3A70;
	sub_820AED18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b3aa0
	if (ctx.cr6.eq) goto loc_820B3AA0;
	// bl 0x8215bec8
	ctx.lr = 0x820B3A7C;
	sub_8215BEC8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x820b33b0
	ctx.lr = 0x820B3A98;
	sub_820B33B0(ctx, base);
	// bl 0x820ba520
	ctx.lr = 0x820B3A9C;
	sub_820BA520(ctx, base);
	// b 0x820b3ac0
	goto loc_820B3AC0;
loc_820B3AA0:
	// bl 0x8215bec8
	ctx.lr = 0x820B3AA4;
	sub_8215BEC8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x820b33b0
	ctx.lr = 0x820B3AC0;
	sub_820B33B0(ctx, base);
loc_820B3AC0:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,50132
	ctx.r3.u64 = ctx.r3.u64 | 50132;
	// bl 0x8208f658
	ctx.lr = 0x820B3ACC;
	sub_8208F658(ctx, base);
	// bl 0x820cbde8
	ctx.lr = 0x820B3AD0;
	sub_820CBDE8(ctx, base);
loc_820B3AD0:
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
loc_820B3AE8:
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

__attribute__((alias("__imp__sub_820B3B00"))) PPC_WEAK_FUNC(sub_820B3B00);
PPC_FUNC_IMPL(__imp__sub_820B3B00) {
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
	ctx.lr = 0x820B3B10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b3b28
	if (ctx.cr6.eq) goto loc_820B3B28;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82183448
	ctx.lr = 0x820B3B24;
	sub_82183448(ctx, base);
	// b 0x820b3b30
	goto loc_820B3B30;
loc_820B3B28:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820B3B30;
	sub_821845A0(ctx, base);
loc_820B3B30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3b3c
	if (ctx.cr6.eq) goto loc_820B3B3C;
	// bl 0x820b3930
	ctx.lr = 0x820B3B3C;
	sub_820B3930(ctx, base);
loc_820B3B3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B3B4C"))) PPC_WEAK_FUNC(sub_820B3B4C);
PPC_FUNC_IMPL(__imp__sub_820B3B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3B50"))) PPC_WEAK_FUNC(sub_820B3B50);
PPC_FUNC_IMPL(__imp__sub_820B3B50) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b3c28
	if (!ctx.cr6.eq) goto loc_820B3C28;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-4948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820b3ba4
	if (!ctx.cr6.gt) goto loc_820B3BA4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-4948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4948, ctx.r11.u32);
	// bne 0x820b3ba4
	if (!ctx.cr0.eq) goto loc_820B3BA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-27256(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27256, temp.u32);
loc_820B3BA4:
	// addi r31,r30,-24
	ctx.r31.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3a18
	ctx.lr = 0x820B3BB0;
	sub_820B3A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3400
	ctx.lr = 0x820B3BB8;
	sub_820B3400(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B3BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820B3BD0;
	sub_8215BEC8(ctx, base);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820b3c28
	if (!ctx.cr6.eq) goto loc_820B3C28;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820b3c28
	if (ctx.cr6.gt) goto loc_820B3C28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b3c08
	// bdzf 4*cr6+eq,0x820b3c14
	// bne cr6,0x820b3c20
	if (!ctx.cr6.eq) goto loc_820B3C20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b34a0
	ctx.lr = 0x820B3C04;
	sub_820B34A0(ctx, base);
	// b 0x820b3c28
	goto loc_820B3C28;
loc_820B3C08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3638
	ctx.lr = 0x820B3C10;
	sub_820B3638(ctx, base);
	// b 0x820b3c28
	goto loc_820B3C28;
loc_820B3C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b36a0
	ctx.lr = 0x820B3C1C;
	sub_820B36A0(ctx, base);
	// b 0x820b3c28
	goto loc_820B3C28;
loc_820B3C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3700
	ctx.lr = 0x820B3C28;
	sub_820B3700(ctx, base);
loc_820B3C28:
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

__attribute__((alias("__imp__sub_820B3C40"))) PPC_WEAK_FUNC(sub_820B3C40);
PPC_FUNC_IMPL(__imp__sub_820B3C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B3C48;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-8544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b3cac
	if (!ctx.cr6.eq) goto loc_820B3CAC;
	// bl 0x82182e90
	ctx.lr = 0x820B3C60;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B3C68;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B3C74;
	sub_821837D0(ctx, base);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82080000
	ctx.lr = 0x820B3C7C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3c9c
	if (ctx.cr6.eq) goto loc_820B3C9C;
	// bl 0x820b3828
	ctx.lr = 0x820B3C88;
	sub_820B3828(ctx, base);
	// stw r3,-8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8544, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B3C94;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B3C9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8544, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x820B3CAC;
	sub_821837D0(ctx, base);
loc_820B3CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B3CB4"))) PPC_WEAK_FUNC(sub_820B3CB4);
PPC_FUNC_IMPL(__imp__sub_820B3CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3CB8"))) PPC_WEAK_FUNC(sub_820B3CB8);
PPC_FUNC_IMPL(__imp__sub_820B3CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,11704
	ctx.r9.s64 = ctx.r11.s64 + 11704;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B3CE0"))) PPC_WEAK_FUNC(sub_820B3CE0);
PPC_FUNC_IMPL(__imp__sub_820B3CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B3CF4"))) PPC_WEAK_FUNC(sub_820B3CF4);
PPC_FUNC_IMPL(__imp__sub_820B3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B3CF8"))) PPC_WEAK_FUNC(sub_820B3CF8);
PPC_FUNC_IMPL(__imp__sub_820B3CF8) {
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
	// lis r4,17203
	ctx.r4.s64 = 1127415808;
	// ori r4,r4,17476
	ctx.r4.u64 = ctx.r4.u64 | 17476;
	// bl 0x821882d0
	ctx.lr = 0x820B3D10;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3d2c
	if (ctx.cr6.eq) goto loc_820B3D2C;
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
loc_820B3D2C:
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

__attribute__((alias("__imp__sub_820B3D40"))) PPC_WEAK_FUNC(sub_820B3D40);
PPC_FUNC_IMPL(__imp__sub_820B3D40) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094db0
	ctx.lr = 0x820B3D64;
	sub_82094DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-18236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x820B3D70;
	sub_82094DD0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x820B3D80;
	sub_820B2BC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-8552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// bl 0x820b2ba8
	ctx.lr = 0x820B3D8C;
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

__attribute__((alias("__imp__sub_820B3DA0"))) PPC_WEAK_FUNC(sub_820B3DA0);
PPC_FUNC_IMPL(__imp__sub_820B3DA0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x820B3DB4;
	sub_821636D8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b3de4
	if (!ctx.cr6.eq) goto loc_820B3DE4;
loc_820B3DC4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -432);
	// bl 0x82162c00
	ctx.lr = 0x820B3DD0;
	sub_82162C00(ctx, base);
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
loc_820B3DE4:
	// bl 0x82127b28
	ctx.lr = 0x820B3DE8;
	sub_82127B28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b3dc4
	if (!ctx.cr6.eq) goto loc_820B3DC4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B3E00"))) PPC_WEAK_FUNC(sub_820B3E00);
PPC_FUNC_IMPL(__imp__sub_820B3E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B3E08;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r29,-32185
	ctx.r29.s64 = -2109276160;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// bne cr6,0x820b4008
	if (!ctx.cr6.eq) goto loc_820B4008;
	// bl 0x820ecc70
	ctx.lr = 0x820B3E20;
	sub_820ECC70(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4976);
	// bl 0x820aec80
	ctx.lr = 0x820B3E30;
	sub_820AEC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ecc60
	ctx.lr = 0x820B3E38;
	sub_820ECC60(ctx, base);
	// bl 0x8215bd18
	ctx.lr = 0x820B3E3C;
	sub_8215BD18(ctx, base);
	// bl 0x8215bd18
	ctx.lr = 0x820B3E40;
	sub_8215BD18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162470
	ctx.lr = 0x820B3E48;
	sub_82162470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x820B3E54;
	sub_8215BD28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,9108
	ctx.r5.s64 = 9108;
	// bl 0x821847a8
	ctx.lr = 0x820B3E60;
	sub_821847A8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820B3E64;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,480
	ctx.r4.s64 = 480;
	// bl 0x822aa648
	ctx.lr = 0x820B3E70;
	sub_822AA648(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820B3E74;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8215be98
	ctx.lr = 0x820B3E7C;
	sub_8215BE98(ctx, base);
	// bl 0x820cbad8
	ctx.lr = 0x820B3E80;
	sub_820CBAD8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x820B3E84;
	sub_8215BEC8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r28.u32);
	// bl 0x8215bec8
	ctx.lr = 0x820B3E90;
	sub_8215BEC8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r9,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r9.u8);
	// lwz r3,-8548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3eac
	if (ctx.cr6.eq) goto loc_820B3EAC;
	// bl 0x820b3278
	ctx.lr = 0x820B3EAC;
	sub_820B3278(ctx, base);
loc_820B3EAC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r31,9
	ctx.r31.s64 = 9;
	// addi r11,r11,-5052
	ctx.r11.s64 = ctx.r11.s64 + -5052;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_820B3EBC:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x820d5f40
	ctx.lr = 0x820B3EC4;
	sub_820D5F40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820b3ebc
	if (!ctx.cr0.eq) goto loc_820B3EBC;
	// lwz r3,-8552(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8552);
	// bl 0x820b2c00
	ctx.lr = 0x820B3ED4;
	sub_820B2C00(ctx, base);
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// bl 0x82094d68
	ctx.lr = 0x820B3EDC;
	sub_82094D68(ctx, base);
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// bl 0x82094d58
	ctx.lr = 0x820B3EE4;
	sub_82094D58(ctx, base);
	// lwz r3,-8552(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8552);
	// bl 0x820b2bd8
	ctx.lr = 0x820B3EEC;
	sub_820B2BD8(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r11,27144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3f24
	if (ctx.cr6.eq) goto loc_820B3F24;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// bl 0x82081b88
	ctx.lr = 0x820B3F24;
	sub_82081B88(ctx, base);
loc_820B3F24:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
loc_820B3F28:
	// lwz r11,-9772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9772);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,21324
	ctx.r4.u64 = ctx.r4.u64 | 21324;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820B3F3C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3f74
	if (ctx.cr6.eq) goto loc_820B3F74;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b3f74
	if (ctx.cr6.eq) goto loc_820B3F74;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82188260
	ctx.lr = 0x820B3F58;
	sub_82188260(ctx, base);
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
	ctx.lr = 0x820B3F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820b3f28
	goto loc_820B3F28;
loc_820B3F74:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-8976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b3f8c
	if (!ctx.cr6.eq) goto loc_820B3F8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820B3F8C:
	// lis r4,17203
	ctx.r4.s64 = 1127415808;
	// ori r4,r4,17476
	ctx.r4.u64 = ctx.r4.u64 | 17476;
	// bl 0x821882d0
	ctx.lr = 0x820B3F98;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3fb8
	if (ctx.cr6.eq) goto loc_820B3FB8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b3fb8
	if (ctx.cr6.eq) goto loc_820B3FB8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,408(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
loc_820B3FB8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x82128f58
	ctx.lr = 0x820B3FC4;
	sub_82128F58(ctx, base);
	// lwz r11,-8976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b3fd8
	if (!ctx.cr6.eq) goto loc_820B3FD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820B3FD8:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,22082
	ctx.r4.u64 = ctx.r4.u64 | 22082;
	// bl 0x821882d0
	ctx.lr = 0x820B3FE4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4008
	if (ctx.cr6.eq) goto loc_820B4008;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4008
	if (ctx.cr6.eq) goto loc_820B4008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B4008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B4008:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-4984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820b4024
	if (!ctx.cr6.eq) goto loc_820B4024;
	// bl 0x8213e968
	ctx.lr = 0x820B401C;
	sub_8213E968(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820b4068
	if (ctx.cr6.eq) goto loc_820B4068;
loc_820B4024:
	// bl 0x82182e90
	ctx.lr = 0x820B4028;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B4030;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B403C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82104060
	ctx.lr = 0x820B4044;
	sub_82104060(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,11728
	ctx.r9.s64 = ctx.r11.s64 + 11728;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r3,-4900(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// bl 0x820ee190
	ctx.lr = 0x820B4060;
	sub_820EE190(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B4068;
	sub_821837D0(ctx, base);
loc_820B4068:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82094db0
	ctx.lr = 0x820B4078;
	sub_82094DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-18236(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18236);
	// bl 0x82094dd0
	ctx.lr = 0x820B4084;
	sub_82094DD0(ctx, base);
	// lwz r11,-4984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820b409c
	if (!ctx.cr6.eq) goto loc_820B409C;
	// bl 0x8213e968
	ctx.lr = 0x820B4094;
	sub_8213E968(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820b40b4
	if (ctx.cr6.eq) goto loc_820B40B4;
loc_820B409C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8552(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8552);
	// bl 0x820b2bc0
	ctx.lr = 0x820B40A8;
	sub_820B2BC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8552(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8552);
	// bl 0x820b2ba8
	ctx.lr = 0x820B40B4;
	sub_820B2BA8(ctx, base);
loc_820B40B4:
	// bl 0x820d4440
	ctx.lr = 0x820B40B8;
	sub_820D4440(ctx, base);
	// bl 0x820d4178
	ctx.lr = 0x820B40BC;
	sub_820D4178(ctx, base);
	// bl 0x820d40d0
	ctx.lr = 0x820B40C0;
	sub_820D40D0(ctx, base);
	// bl 0x820d45d0
	ctx.lr = 0x820B40C4;
	sub_820D45D0(ctx, base);
	// bl 0x820d43d0
	ctx.lr = 0x820B40C8;
	sub_820D43D0(ctx, base);
	// bl 0x820d4440
	ctx.lr = 0x820B40CC;
	sub_820D4440(ctx, base);
	// lwz r11,-4984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820b40e4
	if (!ctx.cr6.eq) goto loc_820B40E4;
	// bl 0x8213e968
	ctx.lr = 0x820B40DC;
	sub_8213E968(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820b40e8
	if (ctx.cr6.eq) goto loc_820B40E8;
loc_820B40E4:
	// bl 0x820d40e8
	ctx.lr = 0x820B40E8;
	sub_820D40E8(ctx, base);
loc_820B40E8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b40fc
	if (ctx.cr6.eq) goto loc_820B40FC;
	// bl 0x820d5bb0
	ctx.lr = 0x820B40FC;
	sub_820D5BB0(ctx, base);
loc_820B40FC:
	// bl 0x820a2790
	ctx.lr = 0x820B4100;
	sub_820A2790(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B4108"))) PPC_WEAK_FUNC(sub_820B4108);
PPC_FUNC_IMPL(__imp__sub_820B4108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B4110;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x820b4580
	if (ctx.cr6.eq) goto loc_820B4580;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x820b4580
	if (ctx.cr6.gt) goto loc_820B4580;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b41c4
	// bdzf 4*cr6+eq,0x820b41e4
	// bdzf 4*cr6+eq,0x820b41f4
	// bdzf 4*cr6+eq,0x820b4204
	// bdzf 4*cr6+eq,0x820b42e8
	// bdzf 4*cr6+eq,0x820b4314
	// bdzf 4*cr6+eq,0x820b43c8
	// bne cr6,0x820b4484
	if (!ctx.cr6.eq) goto loc_820B4484;
	// bl 0x820d62d0
	ctx.lr = 0x820B4164;
	sub_820D62D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4170
	if (ctx.cr6.eq) goto loc_820B4170;
	// bl 0x820d6340
	ctx.lr = 0x820B4170;
	sub_820D6340(ctx, base);
loc_820B4170:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-2032(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2032);
	// stw r11,-4952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4952, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b419c
	if (ctx.cr6.eq) goto loc_820B419C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8209eda0
	ctx.lr = 0x820B419C;
	sub_8209EDA0(ctx, base);
loc_820B419C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bl 0x821142a0
	ctx.lr = 0x820B41A8;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4580
	if (ctx.cr6.eq) goto loc_820B4580;
	// bl 0x821142a0
	ctx.lr = 0x820B41B4;
	sub_821142A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82115208
	ctx.lr = 0x820B41BC;
	sub_82115208(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B41C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b3da0
	ctx.lr = 0x820B41CC;
	sub_820B3DA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4580
	if (ctx.cr6.eq) goto loc_820B4580;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B41E4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B41F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B4204:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820ecc60
	ctx.lr = 0x820B420C;
	sub_820ECC60(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820b4224
	if (!ctx.cr6.lt) goto loc_820B4224;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820B4224:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820b3e00
	ctx.lr = 0x820B422C;
	sub_820B3E00(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820B4238:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4250
	if (ctx.cr6.eq) goto loc_820B4250;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4e0
	ctx.lr = 0x820B4250;
	sub_820EF4E0(ctx, base);
loc_820B4250:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820b4238
	if (!ctx.cr0.eq) goto loc_820B4238;
	// bl 0x82181040
	ctx.lr = 0x820B4260;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4274
	if (ctx.cr6.eq) goto loc_820B4274;
	// bl 0x82181040
	ctx.lr = 0x820B426C;
	sub_82181040(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82181370
	ctx.lr = 0x820B4274;
	sub_82181370(ctx, base);
loc_820B4274:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820B4284;
	sub_8209C630(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820f2688
	ctx.lr = 0x820B428C;
	sub_820F2688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f2640
	ctx.lr = 0x820B42A4;
	sub_820F2640(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
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
	// bl 0x820f28e0
	ctx.lr = 0x820B42C0;
	sub_820F28E0(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x82127ab8
	ctx.lr = 0x820B42CC;
	sub_82127AB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x82128020
	ctx.lr = 0x820B42D8;
	sub_82128020(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B42E8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x820b4580
	if (!ctx.cr6.gt) goto loc_820B4580;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b3d40
	ctx.lr = 0x820B4304;
	sub_820B3D40(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B4314:
	// lwz r11,-9772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820B4320;
	sub_8209C630(ctx, base);
	// lwz r11,-4972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4972);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x820b4338
	if (!ctx.cr6.lt) goto loc_820B4338;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,-4972(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4972, ctx.r28.u32);
loc_820B4338:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820b43c8
	if (!ctx.cr6.gt) goto loc_820B43C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b43c8
	if (ctx.cr6.eq) goto loc_820B43C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2688
	ctx.lr = 0x820B435C;
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
	ctx.lr = 0x820B4374;
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
	ctx.lr = 0x820B4390;
	sub_820F28E0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-5052
	ctx.r10.s64 = ctx.r11.s64 + -5052;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b43a8
	if (ctx.cr6.eq) goto loc_820B43A8;
	// stw r28,1496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1496, ctx.r28.u32);
loc_820B43A8:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b43b8
	if (ctx.cr6.eq) goto loc_820B43B8;
	// stw r28,1496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1496, ctx.r28.u32);
loc_820B43B8:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B43C8:
	// lwz r11,-9772(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209c630
	ctx.lr = 0x820B43D4;
	sub_8209C630(ctx, base);
	// lwz r11,-4972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4972);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x820b43ec
	if (!ctx.cr6.lt) goto loc_820B43EC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,-4972(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4972, ctx.r28.u32);
loc_820B43EC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820b4580
	if (!ctx.cr6.gt) goto loc_820B4580;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4580
	if (ctx.cr6.eq) goto loc_820B4580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2688
	ctx.lr = 0x820B4410;
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
	ctx.lr = 0x820B442C;
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
	ctx.lr = 0x820B4444;
	sub_820F2640(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// bl 0x82128020
	ctx.lr = 0x820B4454;
	sub_82128020(ctx, base);
	// lwz r11,-2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2032);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// bl 0x82128030
	ctx.lr = 0x820B4464;
	sub_82128030(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8612(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8612);
	// bl 0x8212d7d0
	ctx.lr = 0x820B4474;
	sub_8212D7D0(ctx, base);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820B4484:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,-4972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4972);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820b449c
	if (!ctx.cr6.lt) goto loc_820B449C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4972, ctx.r10.u32);
loc_820B449C:
	// bl 0x8212d8c8
	ctx.lr = 0x820B44A0;
	sub_8212D8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4580
	if (ctx.cr6.eq) goto loc_820B4580;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-2032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// bl 0x82128020
	ctx.lr = 0x820B44B8;
	sub_82128020(ctx, base);
	// bl 0x82181040
	ctx.lr = 0x820B44BC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b44d0
	if (ctx.cr6.eq) goto loc_820B44D0;
	// bl 0x82181040
	ctx.lr = 0x820B44C8;
	sub_82181040(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82181370
	ctx.lr = 0x820B44D0;
	sub_82181370(ctx, base);
loc_820B44D0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b44e8
	if (ctx.cr6.eq) goto loc_820B44E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b30b0
	ctx.lr = 0x820B44E8;
	sub_820B30B0(ctx, base);
loc_820B44E8:
	// bl 0x82181040
	ctx.lr = 0x820B44EC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4500
	if (ctx.cr6.eq) goto loc_820B4500;
	// bl 0x82181040
	ctx.lr = 0x820B44F8;
	sub_82181040(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82181370
	ctx.lr = 0x820B4500;
	sub_82181370(ctx, base);
loc_820B4500:
	// bl 0x8209eda0
	ctx.lr = 0x820B4504;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-5052
	ctx.r31.s64 = ctx.r11.s64 + -5052;
loc_820B4510:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4528
	if (ctx.cr6.eq) goto loc_820B4528;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4e0
	ctx.lr = 0x820B4528;
	sub_820EF4E0(ctx, base);
loc_820B4528:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820b4510
	if (!ctx.cr0.eq) goto loc_820B4510;
	// bl 0x8208f830
	ctx.lr = 0x820B4538;
	sub_8208F830(ctx, base);
	// bl 0x8208f7b0
	ctx.lr = 0x820B453C;
	sub_8208F7B0(ctx, base);
	// bl 0x820cff30
	ctx.lr = 0x820B4540;
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
	// blt cr6,0x820b4564
	if (ctx.cr6.lt) goto loc_820B4564;
	// bne cr6,0x820b4564
	if (!ctx.cr6.eq) goto loc_820B4564;
	// ori r4,r4,4642
	ctx.r4.u64 = ctx.r4.u64 | 4642;
	// b 0x820b4568
	goto loc_820B4568;
loc_820B4564:
	// ori r4,r4,4641
	ctx.r4.u64 = ctx.r4.u64 | 4641;
loc_820B4568:
	// bl 0x8208f758
	ctx.lr = 0x820B456C;
	sub_8208F758(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,50132
	ctx.r3.u64 = ctx.r3.u64 | 50132;
	// bl 0x8208f658
	ctx.lr = 0x820B4578;
	sub_8208F658(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_820B4580:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B4588"))) PPC_WEAK_FUNC(sub_820B4588);
PPC_FUNC_IMPL(__imp__sub_820B4588) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,11772
	ctx.r8.s64 = ctx.r11.s64 + 11772;
	// addi r7,r10,11764
	ctx.r7.s64 = ctx.r10.s64 + 11764;
	// addi r6,r9,11732
	ctx.r6.s64 = ctx.r9.s64 + 11732;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// bl 0x821883b8
	ctx.lr = 0x820B45D0;
	sub_821883B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B45D8;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821863b8
	ctx.lr = 0x820B45E0;
	sub_821863B8(ctx, base);
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

__attribute__((alias("__imp__sub_820B45F8"))) PPC_WEAK_FUNC(sub_820B45F8);
PPC_FUNC_IMPL(__imp__sub_820B45F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B4620"))) PPC_WEAK_FUNC(sub_820B4620);
PPC_FUNC_IMPL(__imp__sub_820B4620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x820b54b0
	sub_820B54B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4628"))) PPC_WEAK_FUNC(sub_820B4628);
PPC_FUNC_IMPL(__imp__sub_820B4628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x820b54b0
	sub_820B54B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B4630"))) PPC_WEAK_FUNC(sub_820B4630);
PPC_FUNC_IMPL(__imp__sub_820B4630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820B4638;
	sub_82248780(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4a20
	if (ctx.cr6.eq) goto loc_820B4A20;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820b4a20
	if (ctx.cr6.eq) goto loc_820B4A20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f7,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,11780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11780);
	ctx.f6.f64 = double(temp.f32);
loc_820B4664:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r9,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x180;
	// ld r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// ld r30,24(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r27,36(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r31,628(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lwz r28,624(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lbz r7,570(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// std r8,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r8.u64);
	// std r30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r30.u64);
	// beq cr6,0x820b46ac
	if (ctx.cr6.eq) goto loc_820B46AC;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820b46ac
	if (!ctx.cr6.eq) goto loc_820B46AC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_820B46AC:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f10,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// ble cr6,0x820b46d0
	if (!ctx.cr6.gt) goto loc_820B46D0;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
loc_820B46D0:
	// fcmpu cr6,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820b46e4
	if (!ctx.cr6.gt) goto loc_820B46E4;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
loc_820B46E4:
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b4860
	if (!ctx.cr6.eq) goto loc_820B4860;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820b4a14
	if (ctx.cr6.eq) goto loc_820B4A14;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// beq cr6,0x820b4a14
	if (ctx.cr6.eq) goto loc_820B4A14;
	// fsubs f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// bne cr6,0x820b4734
	if (!ctx.cr6.eq) goto loc_820B4734;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x820b4734
	if (!ctx.cr6.eq) goto loc_820B4734;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x820b4734
	if (!ctx.cr6.eq) goto loc_820B4734;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_820B4734:
	// lfs f0,-92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x820b4764
	if (!ctx.cr6.gt) goto loc_820B4764;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x820b4758
	if (ctx.cr6.eq) goto loc_820B4758;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bne cr6,0x820b4764
	if (!ctx.cr6.eq) goto loc_820B4764;
loc_820B4758:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x820b4764
	if (!ctx.cr6.eq) goto loc_820B4764;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_820B4764:
	// rlwinm r11,r9,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b4778
	if (!ctx.cr6.eq) goto loc_820B4778;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b4a14
	if (ctx.cr6.eq) goto loc_820B4A14;
loc_820B4778:
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x820b4a14
	if (!ctx.cr6.gt) goto loc_820B4A14;
	// lfs f13,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x820b4a14
	if (!ctx.cr6.gt) goto loc_820B4A14;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820b4a14
	if (!ctx.cr6.lt) goto loc_820B4A14;
	// lfs f0,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x820b4a14
	if (!ctx.cr6.gt) goto loc_820B4A14;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x820b4a14
	if (!ctx.cr6.lt) goto loc_820B4A14;
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f9,f7
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// blt cr6,0x820b47c8
	if (ctx.cr6.lt) goto loc_820B47C8;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// b 0x820b47cc
	goto loc_820B47CC;
loc_820B47C8:
	// fneg f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f9.u64 ^ 0x8000000000000000;
loc_820B47CC:
	// fcmpu cr6,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// blt cr6,0x820b47dc
	if (ctx.cr6.lt) goto loc_820B47DC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820b47e0
	goto loc_820B47E0;
loc_820B47DC:
	// fneg f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_820B47E0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820b47ec
	if (!ctx.cr6.gt) goto loc_820B47EC;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_820B47EC:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x820b47fc
	if (ctx.cr6.lt) goto loc_820B47FC;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// b 0x820b4800
	goto loc_820B4800;
loc_820B47FC:
	// fneg f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f8.u64 ^ 0x8000000000000000;
loc_820B4800:
	// fcmpu cr6,f11,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// blt cr6,0x820b4810
	if (ctx.cr6.lt) goto loc_820B4810;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x820b4814
	goto loc_820B4814;
loc_820B4810:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820B4814:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820b4820
	if (!ctx.cr6.gt) goto loc_820B4820;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
loc_820B4820:
	// fcmpu cr6,f9,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// blt cr6,0x820b4830
	if (ctx.cr6.lt) goto loc_820B4830;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// b 0x820b4834
	goto loc_820B4834;
loc_820B4830:
	// fneg f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f9.u64 ^ 0x8000000000000000;
loc_820B4834:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x820b4844
	if (ctx.cr6.lt) goto loc_820B4844;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x820b4848
	goto loc_820B4848;
loc_820B4844:
	// fneg f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
loc_820B4848:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820b4858
	if (!ctx.cr6.lt) goto loc_820B4858;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x820b4a14
	goto loc_820B4A14;
loc_820B4858:
	// stfs f8,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// b 0x820b4a14
	goto loc_820B4A14;
loc_820B4860:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b4a14
	if (!ctx.cr6.eq) goto loc_820B4A14;
	// rlwinm r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b487c
	if (ctx.cr6.eq) goto loc_820B487C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820b4a14
	if (!ctx.cr6.eq) goto loc_820B4A14;
loc_820B487C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b4898
	if (!ctx.cr6.eq) goto loc_820B4898;
	// rlwinm r11,r9,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b4978
	if (ctx.cr6.eq) goto loc_820B4978;
loc_820B4898:
	// lfs f9,-92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// ble cr6,0x820b4904
	if (!ctx.cr6.gt) goto loc_820B4904;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmpwi cr6,r10,110
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 110, ctx.xer);
	// beq cr6,0x820b48d0
	if (ctx.cr6.eq) goto loc_820B48D0;
	// cmpwi cr6,r10,111
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 111, ctx.xer);
	// bne cr6,0x820b4904
	if (!ctx.cr6.eq) goto loc_820B4904;
loc_820B48D0:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820b4904
	if (!ctx.cr6.eq) goto loc_820B4904;
	// lwz r11,1732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4904
	if (ctx.cr6.eq) goto loc_820B4904;
	// lbz r11,570(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4904
	if (!ctx.cr6.eq) goto loc_820B4904;
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_820B4904:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x820b4914
	if (!ctx.cr6.eq) goto loc_820B4914;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820b4924
	if (ctx.cr6.eq) goto loc_820B4924;
loc_820B4914:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820b492c
	if (ctx.cr6.eq) goto loc_820B492C;
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// beq cr6,0x820b492c
	if (ctx.cr6.eq) goto loc_820B492C;
loc_820B4924:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820B492C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820b4954
	if (!ctx.cr6.eq) goto loc_820B4954;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r10,568(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 568);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b4950
	if (ctx.cr6.eq) goto loc_820B4950;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820b4954
	goto loc_820B4954;
loc_820B4950:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820B4954:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b4a14
	if (!ctx.cr6.eq) goto loc_820B4A14;
	// lwz r11,740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4a14
	if (!ctx.cr6.eq) goto loc_820B4A14;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820b49ac
	if (ctx.cr6.eq) goto loc_820B49AC;
loc_820B4978:
	// lfs f0,-96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820b4994
	if (!ctx.cr6.lt) goto loc_820B4994;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_820B4994:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820b49ac
	if (!ctx.cr6.gt) goto loc_820B49AC;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_820B49AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820b49e8
	if (ctx.cr6.eq) goto loc_820B49E8;
	// lfs f0,-88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820b49d0
	if (!ctx.cr6.lt) goto loc_820B49D0;
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_820B49D0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x820b49e8
	if (!ctx.cr6.gt) goto loc_820B49E8;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// b 0x820b49f0
	goto loc_820B49F0;
loc_820B49E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820b4a14
	if (ctx.cr6.eq) goto loc_820B4A14;
loc_820B49F0:
	// rlwinm r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4a14
	if (ctx.cr6.eq) goto loc_820B4A14;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b4a14
	if (ctx.cr6.eq) goto loc_820B4A14;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stb r26,576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 576, ctx.r26.u8);
loc_820B4A14:
	// lwzu r9,24(r6)
	ea = 24 + ctx.r6.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x820b4664
	if (!ctx.cr6.eq) goto loc_820B4664;
loc_820B4A20:
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820B4A24"))) PPC_WEAK_FUNC(sub_820B4A24);
PPC_FUNC_IMPL(__imp__sub_820B4A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4A28"))) PPC_WEAK_FUNC(sub_820B4A28);
PPC_FUNC_IMPL(__imp__sub_820B4A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820B4A30;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249918
	ctx.lr = 0x820B4A38;
	sub_82249918(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r31,-8760(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8760);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4c04
	if (ctx.cr6.eq) goto loc_820B4C04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820abb00
	ctx.lr = 0x820B4A60;
	sub_820ABB00(ctx, base);
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821882d0
	ctx.lr = 0x820B4A74;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4c04
	if (ctx.cr6.eq) goto loc_820B4C04;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b4c04
	if (ctx.cr6.eq) goto loc_820B4C04;
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f30,32(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f24,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f24.f64 = double(temp.f32);
	// lfs f27,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// blt cr6,0x820b4ab8
	if (ctx.cr6.lt) goto loc_820B4AB8;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x820b4abc
	goto loc_820B4ABC;
loc_820B4AB8:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_820B4ABC:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f28,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f28.f64 = double(temp.f32);
	// lfs f25,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,8064(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8064);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820b4b28
	if (!ctx.cr6.gt) goto loc_820B4B28;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820b4afc
	if (!ctx.cr6.gt) goto loc_820B4AFC;
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820b4b00
	goto loc_820B4B00;
loc_820B4AFC:
	// fadds f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820B4B00:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// beq cr6,0x820b4b5c
	if (ctx.cr6.eq) goto loc_820B4B5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ab788
	ctx.lr = 0x820B4B14;
	sub_820AB788(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stb r28,577(r29)
	PPC_STORE_U8(ctx.r29.u32 + 577, ctx.r28.u8);
	// b 0x820b4b5c
	goto loc_820B4B5C;
loc_820B4B28:
	// fcmpu cr6,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820b4b44
	if (!ctx.cr6.gt) goto loc_820B4B44;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820b4b5c
	if (!ctx.cr6.gt) goto loc_820B4B5C;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// b 0x820b4b54
	goto loc_820B4B54;
loc_820B4B44:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x820b4b5c
	if (!ctx.cr6.lt) goto loc_820B4B5C;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
loc_820B4B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ab788
	ctx.lr = 0x820B4B5C;
	sub_820AB788(ctx, base);
loc_820B4B5C:
	// lfs f11,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// blt cr6,0x820b4b78
	if (ctx.cr6.lt) goto loc_820B4B78;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x820b4b7c
	goto loc_820B4B7C;
loc_820B4B78:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_820B4B7C:
	// fsubs f0,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f30.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820b4bd0
	if (!ctx.cr6.gt) goto loc_820B4BD0;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820b4b98
	if (!ctx.cr6.gt) goto loc_820B4B98;
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820b4b9c
	goto loc_820B4B9C;
loc_820B4B98:
	// fadds f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820B4B9C:
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// beq cr6,0x820b4c04
	if (ctx.cr6.eq) goto loc_820B4C04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ab7c0
	ctx.lr = 0x820B4BB0;
	sub_820AB7C0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stb r28,577(r29)
	PPC_STORE_U8(ctx.r29.u32 + 577, ctx.r28.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249964
	ctx.lr = 0x820B4BCC;
	sub_82249964(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820B4BD0:
	// fcmpu cr6,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820b4bec
	if (!ctx.cr6.gt) goto loc_820B4BEC;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820b4c04
	if (!ctx.cr6.gt) goto loc_820B4C04;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// b 0x820b4bfc
	goto loc_820B4BFC;
loc_820B4BEC:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x820b4c04
	if (!ctx.cr6.lt) goto loc_820B4C04;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
loc_820B4BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ab7c0
	ctx.lr = 0x820B4C04;
	sub_820AB7C0(ctx, base);
loc_820B4C04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249964
	ctx.lr = 0x820B4C10;
	sub_82249964(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820B4C14"))) PPC_WEAK_FUNC(sub_820B4C14);
PPC_FUNC_IMPL(__imp__sub_820B4C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B4C18"))) PPC_WEAK_FUNC(sub_820B4C18);
PPC_FUNC_IMPL(__imp__sub_820B4C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820B4C20;
	sub_8224876C(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82249924
	ctx.lr = 0x820B4C28;
	sub_82249924(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r11,-8976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5408
	if (ctx.cr6.eq) goto loc_820B5408;
	// lfs f27,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r23,r4,16
	ctx.r23.s64 = ctx.r4.s64 + 16;
	// fadds f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// lfs f29,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x820b4c94
	if (!ctx.cr6.gt) goto loc_820B4C94;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1044(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4c8c
	if (ctx.cr6.eq) goto loc_820B4C8C;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4c94
	if (!ctx.cr6.eq) goto loc_820B4C94;
loc_820B4C8C:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,20(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 20, temp.u32);
loc_820B4C94:
	// lwz r11,-8976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// lwz r3,22640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22640);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4ca8
	if (ctx.cr6.eq) goto loc_820B4CA8;
	// bl 0x820f1070
	ctx.lr = 0x820B4CA8;
	sub_820F1070(ctx, base);
loc_820B4CA8:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4cc0
	if (ctx.cr6.eq) goto loc_820B4CC0;
	// stw r22,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r22.u32);
loc_820B4CC0:
	// lwz r11,-8976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// lwz r3,22640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22640);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4f98
	if (ctx.cr6.eq) goto loc_820B4F98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,8064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8064);
	ctx.f30.f64 = double(temp.f32);
loc_820B4CD8:
	// bl 0x820f1080
	ctx.lr = 0x820B4CDC;
	sub_820F1080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4f98
	if (ctx.cr6.eq) goto loc_820B4F98;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x820b4f88
	if (ctx.cr6.eq) goto loc_820B4F88;
	// cmpdi cr6,r11,-2
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -2, ctx.xer);
	// bne cr6,0x820b4d14
	if (!ctx.cr6.eq) goto loc_820B4D14;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b4f88
	if (!ctx.cr6.eq) goto loc_820B4F88;
loc_820B4D14:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4d54
	if (ctx.cr6.eq) goto loc_820B4D54;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x820B4D30;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4d40
	if (ctx.cr6.eq) goto loc_820B4D40;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820b4d44
	goto loc_820B4D44;
loc_820B4D40:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_820B4D44:
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// bl 0x820f15f0
	ctx.lr = 0x820B4D4C;
	sub_820F15F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b4f88
	if (!ctx.cr6.eq) goto loc_820B4F88;
loc_820B4D54:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b4f88
	if (!ctx.cr6.eq) goto loc_820B4F88;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4d8c
	if (ctx.cr6.eq) goto loc_820B4D8C;
	// bl 0x821040e8
	ctx.lr = 0x820B4D74;
	sub_821040E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4d8c
	if (ctx.cr6.eq) goto loc_820B4D8C;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b4f88
	if (!ctx.cr6.eq) goto loc_820B4F88;
loc_820B4D8C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82190400
	ctx.lr = 0x820B4D98;
	sub_82190400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b4f88
	if (ctx.cr6.eq) goto loc_820B4F88;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x821919e0
	ctx.lr = 0x820B4DCC;
	sub_821919E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4f88
	if (ctx.cr6.eq) goto loc_820B4F88;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4df0
	if (ctx.cr6.eq) goto loc_820B4DF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B4DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B4DF0:
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b4eac
	if (ctx.cr6.eq) goto loc_820B4EAC;
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4ea4
	if (!ctx.cr6.eq) goto loc_820B4EA4;
	// lis r4,21061
	ctx.r4.s64 = 1380253696;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// bl 0x821882d0
	ctx.lr = 0x820B4E18;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4ea4
	if (ctx.cr6.eq) goto loc_820B4EA4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4ea4
	if (ctx.cr6.eq) goto loc_820B4EA4;
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsubs f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// lfs f0,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bge cr6,0x820b4e54
	if (!ctx.cr6.lt) goto loc_820B4E54;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B4E54:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x820b4e64
	if (ctx.cr6.lt) goto loc_820B4E64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x820b4e68
	goto loc_820B4E68;
loc_820B4E64:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_820B4E68:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820b4e74
	if (!ctx.cr6.lt) goto loc_820B4E74;
	// stfs f13,512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
loc_820B4E74:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b4e84
	if (!ctx.cr6.lt) goto loc_820B4E84;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B4E84:
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x820b4e94
	if (ctx.cr6.lt) goto loc_820B4E94;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x820b4e98
	goto loc_820B4E98;
loc_820B4E94:
	// fneg f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820B4E98:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820b4ea4
	if (!ctx.cr6.lt) goto loc_820B4EA4;
	// stfs f11,520(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
loc_820B4EA4:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r31,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r31.u32);
loc_820B4EAC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b4ec8
	if (!ctx.cr6.eq) goto loc_820B4EC8;
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4edc
	if (ctx.cr6.eq) goto loc_820B4EDC;
loc_820B4EC8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r10.u64);
	// std r9,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r9.u64);
loc_820B4EDC:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4f20
	if (ctx.cr6.eq) goto loc_820B4F20;
	// rlwinm r11,r29,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4f20
	if (!ctx.cr6.eq) goto loc_820B4F20;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// bne cr6,0x820b4f20
	if (!ctx.cr6.eq) goto loc_820B4F20;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// ld r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 192);
	// addi r8,r11,528
	ctx.r8.s64 = ctx.r11.s64 + 528;
	// std r9,528(r11)
	PPC_STORE_U64(ctx.r11.u32 + 528, ctx.r9.u64);
	// ld r7,200(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 200);
	// std r7,536(r11)
	PPC_STORE_U64(ctx.r11.u32 + 536, ctx.r7.u64);
loc_820B4F20:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// lbz r10,581(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 581);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4f3c
	if (ctx.cr6.eq) goto loc_820B4F3C;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x820b4f60
	if (!ctx.cr6.eq) goto loc_820B4F60;
loc_820B4F3C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// stb r10,581(r11)
	PPC_STORE_U8(ctx.r11.u32 + 581, ctx.r10.u8);
	// ld r8,192(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 192);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r7,r11,528
	ctx.r7.s64 = ctx.r11.s64 + 528;
	// std r8,528(r11)
	PPC_STORE_U64(ctx.r11.u32 + 528, ctx.r8.u64);
	// ld r6,200(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 200);
	// std r6,536(r11)
	PPC_STORE_U64(ctx.r11.u32 + 536, ctx.r6.u64);
loc_820B4F60:
	// rlwinm r11,r29,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820b4f88
	if (ctx.cr6.eq) goto loc_820B4F88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4f88
	if (ctx.cr6.eq) goto loc_820B4F88;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,580(r10)
	PPC_STORE_U8(ctx.r10.u32 + 580, ctx.r9.u8);
	// lwz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stb r9,583(r8)
	PPC_STORE_U8(ctx.r8.u32 + 583, ctx.r9.u8);
loc_820B4F88:
	// lwz r11,-8976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// lwz r3,22640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22640);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b4cd8
	if (!ctx.cr6.eq) goto loc_820B4CD8;
loc_820B4F98:
	// bl 0x820f3a78
	ctx.lr = 0x820B4F9C;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b50c0
	if (ctx.cr6.eq) goto loc_820B50C0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r6,r11,-28912
	ctx.r6.s64 = ctx.r11.s64 + -28912;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b4630
	ctx.lr = 0x820B4FBC;
	sub_820B4630(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b50c0
	if (!ctx.cr6.eq) goto loc_820B50C0;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820b4fe4
	if (ctx.cr6.lt) goto loc_820B4FE4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x820b4fe8
	goto loc_820B4FE8;
loc_820B4FE4:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B4FE8:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b4ff8
	if (!ctx.cr6.lt) goto loc_820B4FF8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B4FF8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// lfs f13,8960(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8960);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x820b5018
	if (!ctx.cr6.lt) goto loc_820B5018;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820b5018
	if (!ctx.cr6.lt) goto loc_820B5018;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820B5018:
	// lbz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5060
	if (ctx.cr6.eq) goto loc_820B5060;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,11788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11788);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x820b503c
	if (ctx.cr6.gt) goto loc_820B503C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b5060
	if (!ctx.cr6.gt) goto loc_820B5060;
loc_820B503C:
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11784);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820b505c
	if (ctx.cr6.gt) goto loc_820B505C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b5060
	if (!ctx.cr6.gt) goto loc_820B5060;
loc_820B505C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_820B5060:
	// bl 0x820a2b00
	ctx.lr = 0x820B5064;
	sub_820A2B00(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b50b0
	if (!ctx.cr6.eq) goto loc_820B50B0;
	// lwz r10,696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820b50b0
	if (!ctx.cr6.eq) goto loc_820B50B0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820b50b0
	if (ctx.cr6.eq) goto loc_820B50B0;
	// lbz r11,570(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b50b0
	if (!ctx.cr6.eq) goto loc_820B50B0;
	// lfs f0,32(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// ble cr6,0x820b50b0
	if (!ctx.cr6.gt) goto loc_820B50B0;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,20(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 20, temp.u32);
loc_820B50B0:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b4a28
	ctx.lr = 0x820B50C0;
	sub_820B4A28(ctx, base);
loc_820B50C0:
	// lwz r3,-8976(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// bl 0x820ce2d0
	ctx.lr = 0x820B50C8;
	sub_820CE2D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5394
	if (ctx.cr6.eq) goto loc_820B5394;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lbz r10,570(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5394
	if (ctx.cr6.eq) goto loc_820B5394;
	// lwz r10,740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 740);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// beq cr6,0x820b50fc
	if (ctx.cr6.eq) goto loc_820B50FC;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// stw r11,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r11.u32);
loc_820B50FC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820b5118
	if (!ctx.cr6.eq) goto loc_820B5118;
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5124
	if (ctx.cr6.eq) goto loc_820B5124;
loc_820B5118:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r10.u32);
loc_820B5124:
	// lfs f0,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820b5138
	if (ctx.cr6.lt) goto loc_820B5138;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// b 0x820b513c
	goto loc_820B513C;
loc_820B5138:
	// fneg f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B513C:
	// lfs f13,32(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x820b5154
	if (ctx.cr6.lt) goto loc_820B5154;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// b 0x820b5158
	goto loc_820B5158;
loc_820B5154:
	// fneg f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f10.u64 ^ 0x8000000000000000;
loc_820B5158:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x820b516c
	if (ctx.cr6.lt) goto loc_820B516C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x820b5170
	goto loc_820B5170;
loc_820B516C:
	// fneg f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_820B5170:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f0,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f6,f11
	ctx.f6.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// fctiwz f4,f7
	ctx.f4.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bge cr6,0x820b51d0
	if (!ctx.cr6.lt) goto loc_820B51D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_820B51D0:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bge cr6,0x820b51e0
	if (!ctx.cr6.lt) goto loc_820B51E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_820B51E0:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x820b51f0
	if (!ctx.cr6.lt) goto loc_820B51F0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_820B51F0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820b5200
	if (!ctx.cr6.eq) goto loc_820B5200;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_820B5200:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b5210
	if (!ctx.cr6.eq) goto loc_820B5210;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_820B5210:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b5220
	if (!ctx.cr6.eq) goto loc_820B5220;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_820B5220:
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r28,3
	ctx.r28.s64 = 3;
loc_820B5228:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5244
	if (ctx.cr6.eq) goto loc_820B5244;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5384
	if (ctx.cr6.eq) goto loc_820B5384;
loc_820B5244:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b5384
	if (ctx.cr6.eq) goto loc_820B5384;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bge cr6,0x820b5384
	if (!ctx.cr6.lt) goto loc_820B5384;
	// lwz r3,-8976(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x820ce2c8
	ctx.lr = 0x820B5264;
	sub_820CE2C8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r3,-8976(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// bl 0x820ce2c8
	ctx.lr = 0x820B5278;
	sub_820CE2C8(ctx, base);
	// lhzx r9,r3,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// lwz r3,-8976(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x820ce2d0
	ctx.lr = 0x820B528C;
	sub_820CE2D0(ctx, base);
	// lwz r11,-8976(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820ce2c0
	ctx.lr = 0x820B529C;
	sub_820CE2C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,255
	ctx.r7.s64 = 255;
	// bl 0x821919e0
	ctx.lr = 0x820B52B0;
	sub_821919E0(ctx, base);
	// lwz r7,36(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820b5318
	if (ctx.cr6.eq) goto loc_820B5318;
	// rlwinm r11,r3,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b5318
	if (!ctx.cr6.eq) goto loc_820B5318;
	// cmpwi cr6,r30,249
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 249, ctx.xer);
	// beq cr6,0x820b5318
	if (ctx.cr6.eq) goto loc_820B5318;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820b5318
	if (ctx.cr6.eq) goto loc_820B5318;
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// beq cr6,0x820b5318
	if (ctx.cr6.eq) goto loc_820B5318;
	// lwz r3,-8976(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -8976);
	// bl 0x820ce2c0
	ctx.lr = 0x820B52F4;
	sub_820CE2C0(ctx, base);
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r9,r11,528
	ctx.r9.s64 = ctx.r11.s64 + 528;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,528(r11)
	PPC_STORE_U64(ctx.r11.u32 + 528, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,536(r11)
	PPC_STORE_U64(ctx.r11.u32 + 536, ctx.r7.u64);
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r22,544(r6)
	PPC_STORE_U32(ctx.r6.u32 + 544, ctx.r22.u32);
loc_820B5318:
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820b5340
	if (ctx.cr6.eq) goto loc_820B5340;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5340
	if (ctx.cr6.eq) goto loc_820B5340;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,580(r10)
	PPC_STORE_U8(ctx.r10.u32 + 580, ctx.r9.u8);
	// lwz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stb r9,583(r8)
	PPC_STORE_U8(ctx.r8.u32 + 583, ctx.r9.u8);
loc_820B5340:
	// rlwinm r11,r31,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820b535c
	if (ctx.cr6.eq) goto loc_820B535C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b535c
	if (ctx.cr6.eq) goto loc_820B535C;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stb r11,582(r10)
	PPC_STORE_U8(ctx.r10.u32 + 582, ctx.r11.u8);
loc_820B535C:
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lbz r11,581(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 581);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5374
	if (ctx.cr6.eq) goto loc_820B5374;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x820b5384
	if (!ctx.cr6.eq) goto loc_820B5384;
loc_820B5374:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b5384
	if (ctx.cr6.eq) goto loc_820B5384;
	// stb r10,581(r9)
	PPC_STORE_U8(ctx.r9.u32 + 581, ctx.r10.u8);
loc_820B5384:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820b5228
	if (!ctx.cr0.eq) goto loc_820B5228;
	// stw r26,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r26.u32);
loc_820B5394:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f12,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9228);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r21)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfs f10,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// stfs f9,4(r21)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r21.u32 + 4, temp.u32);
	// lfs f8,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// fadds f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f5,8(r21)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r21.u32 + 8, temp.u32);
	// lfs f4,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x820b5408
	if (!ctx.cr6.lt) goto loc_820B5408;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lbz r10,578(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 578);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820b5408
	if (!ctx.cr6.eq) goto loc_820B5408;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,578(r11)
	PPC_STORE_U8(ctx.r11.u32 + 578, ctx.r10.u8);
	// lfs f0,20(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,112(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 112, temp.u32);
loc_820B5408:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82249970
	ctx.lr = 0x820B5414;
	sub_82249970(ctx, base);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820B5418"))) PPC_WEAK_FUNC(sub_820B5418);
PPC_FUNC_IMPL(__imp__sub_820B5418) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185698
	ctx.lr = 0x820B5434;
	sub_82185698(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82185740
	ctx.lr = 0x820B5444;
	sub_82185740(ctx, base);
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x82188378
	ctx.lr = 0x820B5458;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,11772
	ctx.r7.s64 = ctx.r10.s64 + 11772;
	// addi r6,r9,11764
	ctx.r6.s64 = ctx.r9.s64 + 11764;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// addi r5,r8,11732
	ctx.r5.s64 = ctx.r8.s64 + 11732;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820B5498;
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

__attribute__((alias("__imp__sub_820B54B0"))) PPC_WEAK_FUNC(sub_820B54B0);
PPC_FUNC_IMPL(__imp__sub_820B54B0) {
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
	// bl 0x820b4588
	ctx.lr = 0x820B54D0;
	sub_820B4588(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b54ec
	if (ctx.cr6.eq) goto loc_820B54EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B54E8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B54EC:
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

__attribute__((alias("__imp__sub_820B5504"))) PPC_WEAK_FUNC(sub_820B5504);
PPC_FUNC_IMPL(__imp__sub_820B5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5508"))) PPC_WEAK_FUNC(sub_820B5508);
PPC_FUNC_IMPL(__imp__sub_820B5508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820B5510;
	sub_82248778(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x820b5654
	if (!ctx.cr6.gt) goto loc_820B5654;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
loc_820B554C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b5640
	if (ctx.cr6.eq) goto loc_820B5640;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5638
	if (ctx.cr6.eq) goto loc_820B5638;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f31,504(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 504, temp.u32);
	// stfs f31,500(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 500, temp.u32);
	// stfs f31,496(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 496, temp.u32);
	// stfs f30,508(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 508, temp.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f31,520(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 520, temp.u32);
	// stfs f31,516(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 516, temp.u32);
	// stfs f31,512(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 512, temp.u32);
	// stfs f30,524(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 524, temp.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r25,576(r10)
	PPC_STORE_U8(ctx.r10.u32 + 576, ctx.r25.u8);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r25,577(r9)
	PPC_STORE_U8(ctx.r9.u32 + 577, ctx.r25.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r8,579(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 579);
	// rlwinm r7,r8,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stb r7,579(r10)
	PPC_STORE_U8(ctx.r10.u32 + 579, ctx.r7.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r6,579(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 579);
	// lbz r5,578(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 578);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stb r3,579(r10)
	PPC_STORE_U8(ctx.r10.u32 + 579, ctx.r3.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r9,578(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 578);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r8,578(r10)
	PPC_STORE_U8(ctx.r10.u32 + 578, ctx.r8.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lbz r7,578(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 578);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r6,578(r10)
	PPC_STORE_U8(ctx.r10.u32 + 578, ctx.r6.u8);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r25,580(r5)
	PPC_STORE_U8(ctx.r5.u32 + 580, ctx.r25.u8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r25,581(r4)
	PPC_STORE_U8(ctx.r4.u32 + 581, ctx.r25.u8);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r25,583(r3)
	PPC_STORE_U8(ctx.r3.u32 + 583, ctx.r25.u8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stb r25,582(r10)
	PPC_STORE_U8(ctx.r10.u32 + 582, ctx.r25.u8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820b5638
	if (!ctx.cr6.gt) goto loc_820B5638;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_820B561C:
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r7.u32);
	// bdnz 0x820b561c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B561C;
loc_820B5638:
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x821906b8
	ctx.lr = 0x820B5640;
	sub_821906B8(ctx, base);
loc_820B5640:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b554c
	if (ctx.cr6.lt) goto loc_820B554C;
loc_820B5654:
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x820b573c
	if (!ctx.cr0.gt) goto loc_820B573C;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r26,r24,52
	ctx.r26.s64 = ctx.r24.s64 + 52;
loc_820B5664:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b5724
	if (ctx.cr6.eq) goto loc_820B5724;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b5698
	if (ctx.cr6.eq) goto loc_820B5698;
	// lwz r9,596(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b5724
	if (ctx.cr6.eq) goto loc_820B5724;
	// lwz r10,684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x820b5724
	if (ctx.cr6.eq) goto loc_820B5724;
loc_820B5698:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820b5724
	if (!ctx.cr6.lt) goto loc_820B5724;
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
loc_820B56A8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b5710
	if (ctx.cr6.eq) goto loc_820B5710;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b56d4
	if (ctx.cr6.eq) goto loc_820B56D4;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x820f15f0
	ctx.lr = 0x820B56CC;
	sub_820F15F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b5710
	if (!ctx.cr6.eq) goto loc_820B5710;
loc_820B56D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b56f8
	if (ctx.cr6.eq) goto loc_820B56F8;
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x820b5710
	if (ctx.cr6.eq) goto loc_820B5710;
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5710
	if (ctx.cr6.eq) goto loc_820B5710;
loc_820B56F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B5710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5710:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b56a8
	if (ctx.cr6.lt) goto loc_820B56A8;
loc_820B5724:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820b5664
	if (ctx.cr6.lt) goto loc_820B5664;
loc_820B573C:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820b5960
	if (!ctx.cr6.gt) goto loc_820B5960;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r24,52
	ctx.r27.s64 = ctx.r24.s64 + 52;
	// lfs f29,11792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11792);
	ctx.f29.f64 = double(temp.f32);
loc_820B5754:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b594c
	if (ctx.cr6.eq) goto loc_820B594C;
	// lwz r28,32(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820b594c
	if (ctx.cr6.eq) goto loc_820B594C;
	// lwz r11,596(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b594c
	if (ctx.cr6.eq) goto loc_820B594C;
	// lwz r11,676(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 676);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820b594c
	if (ctx.cr6.eq) goto loc_820B594C;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b594c
	if (ctx.cr6.eq) goto loc_820B594C;
	// ble cr6,0x820b5914
	if (!ctx.cr6.gt) goto loc_820B5914;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820B57B4:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820b5908
	if (!ctx.cr6.eq) goto loc_820B5908;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lfs f13,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x820b5908
	if (ctx.cr6.eq) goto loc_820B5908;
	// lwz r11,308(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 308);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x820b5814
	if (ctx.cr6.eq) goto loc_820B5814;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x820B5814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5814:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x820b4c18
	ctx.lr = 0x820B5828;
	sub_820B4C18(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x820b583c
	if (ctx.cr6.lt) goto loc_820B583C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x820b5840
	goto loc_820B5840;
loc_820B583C:
	// fneg f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_820B5840:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b5850
	if (!ctx.cr6.lt) goto loc_820B5850;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B5850:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820b585c
	if (!ctx.cr6.gt) goto loc_820B585C;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_820B585C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820b58a8
	if (!ctx.cr6.eq) goto loc_820B58A8;
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x820b5888
	if (ctx.cr6.lt) goto loc_820B5888;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x820b588c
	goto loc_820B588C;
loc_820B5888:
	// fneg f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f10.u64 ^ 0x8000000000000000;
loc_820B588C:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b589c
	if (!ctx.cr6.lt) goto loc_820B589C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B589C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820b58a8
	if (!ctx.cr6.gt) goto loc_820B58A8;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_820B58A8:
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x820b58bc
	if (ctx.cr6.lt) goto loc_820B58BC;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x820b58c0
	goto loc_820B58C0;
loc_820B58BC:
	// fneg f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_820B58C0:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820b58d4
	if (ctx.cr6.lt) goto loc_820B58D4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x820b58d8
	goto loc_820B58D8;
loc_820B58D4:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B58D8:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x820b58e8
	if (!ctx.cr6.gt) goto loc_820B58E8;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_820B58E8:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// beq cr6,0x820b5908
	if (ctx.cr6.eq) goto loc_820B5908;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_820B5908:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820b57b4
	if (!ctx.cr0.eq) goto loc_820B57B4;
loc_820B5914:
	// lwz r11,860(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b5924
	if (ctx.cr6.eq) goto loc_820B5924;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_820B5924:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820b5930
	if (!ctx.cr6.lt) goto loc_820B5930;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B5930:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x820b593c
	if (!ctx.cr6.lt) goto loc_820B593C;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820B593C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82100910
	ctx.lr = 0x820B594C;
	sub_82100910(ctx, base);
loc_820B594C:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b5754
	if (ctx.cr6.lt) goto loc_820B5754;
loc_820B5960:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820b59ec
	if (!ctx.cr6.gt) goto loc_820B59EC;
	// addi r31,r24,52
	ctx.r31.s64 = ctx.r24.s64 + 52;
loc_820B5970:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b59d8
	if (ctx.cr6.eq) goto loc_820B59D8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b59d8
	if (ctx.cr6.eq) goto loc_820B59D8;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r10,496
	ctx.r8.s64 = ctx.r10.s64 + 496;
	// ld r7,496(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 496);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,504(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 504);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820b59c4
	if (!ctx.cr6.eq) goto loc_820B59C4;
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820b59d8
	if (ctx.cr6.eq) goto loc_820B59D8;
loc_820B59C4:
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b59d8
	if (ctx.cr6.eq) goto loc_820B59D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821b0788
	ctx.lr = 0x820B59D8;
	sub_821B0788(ctx, base);
loc_820B59D8:
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820b5970
	if (ctx.cr6.lt) goto loc_820B5970;
loc_820B59EC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_820B5A00"))) PPC_WEAK_FUNC(sub_820B5A00);
PPC_FUNC_IMPL(__imp__sub_820B5A00) {
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
	ctx.lr = 0x820B5A10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b5a28
	if (ctx.cr6.eq) goto loc_820B5A28;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82183448
	ctx.lr = 0x820B5A24;
	sub_82183448(ctx, base);
	// b 0x820b5a30
	goto loc_820B5A30;
loc_820B5A28:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x821845a0
	ctx.lr = 0x820B5A30;
	sub_821845A0(ctx, base);
loc_820B5A30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5a48
	if (ctx.cr6.eq) goto loc_820B5A48;
	// bl 0x820b5418
	ctx.lr = 0x820B5A3C;
	sub_820B5418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// bne cr6,0x820b5a4c
	if (!ctx.cr6.eq) goto loc_820B5A4C;
loc_820B5A48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820B5A4C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B5A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B5A78"))) PPC_WEAK_FUNC(sub_820B5A78);
PPC_FUNC_IMPL(__imp__sub_820B5A78) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,11796
	ctx.r10.s64 = ctx.r11.s64 + 11796;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820b5abc
	if (ctx.cr6.eq) goto loc_820B5ABC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B5ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5ABC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5ae4
	if (ctx.cr6.eq) goto loc_820B5AE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B5AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5AE4:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x820B5AF0;
	sub_821857F0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8209eda0
	ctx.lr = 0x820B5AF8;
	sub_8209EDA0(ctx, base);
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

__attribute__((alias("__imp__sub_820B5B10"))) PPC_WEAK_FUNC(sub_820B5B10);
PPC_FUNC_IMPL(__imp__sub_820B5B10) {
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
	ctx.lr = 0x820B5B28;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b5bc8
	if (!ctx.cr6.eq) goto loc_820B5BC8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x820b5bc0
	if (ctx.cr6.gt) goto loc_820B5BC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b5b80
	// bdzf 4*cr6+eq,0x820b5b68
	// bdzf 4*cr6+eq,0x820b5b68
	// bdzf 4*cr6+eq,0x820b5ba0
	// bdzf 4*cr6+eq,0x820b5bc0
	// bne cr6,0x820b5bc0
	if (!ctx.cr6.eq) goto loc_820B5BC0;
loc_820B5B68:
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
loc_820B5B80:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B5BA0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822344f8
	ctx.lr = 0x820B5BA8;
	sub_822344F8(ctx, base);
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
loc_820B5BC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_820B5BC8:
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

__attribute__((alias("__imp__sub_820B5BE0"))) PPC_WEAK_FUNC(sub_820B5BE0);
PPC_FUNC_IMPL(__imp__sub_820B5BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b5bfc
	if (ctx.cr6.eq) goto loc_820B5BFC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820B5BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B5C04"))) PPC_WEAK_FUNC(sub_820B5C04);
PPC_FUNC_IMPL(__imp__sub_820B5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5C08"))) PPC_WEAK_FUNC(sub_820B5C08);
PPC_FUNC_IMPL(__imp__sub_820B5C08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82213b78
	ctx.lr = 0x820B5C24;
	sub_82213B78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82213ba0
	ctx.lr = 0x820B5C2C;
	sub_82213BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82213eb8
	ctx.lr = 0x820B5C38;
	sub_82213EB8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82214190
	ctx.lr = 0x820B5C4C;
	sub_82214190(ctx, base);
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

__attribute__((alias("__imp__sub_820B5C60"))) PPC_WEAK_FUNC(sub_820B5C60);
PPC_FUNC_IMPL(__imp__sub_820B5C60) {
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
	// bl 0x8221bae8
	ctx.lr = 0x820B5C7C;
	sub_8221BAE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82185740
	ctx.lr = 0x820B5C8C;
	sub_82185740(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,11796
	ctx.r9.s64 = ctx.r10.s64 + 11796;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820B5CCC"))) PPC_WEAK_FUNC(sub_820B5CCC);
PPC_FUNC_IMPL(__imp__sub_820B5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5CD0"))) PPC_WEAK_FUNC(sub_820B5CD0);
PPC_FUNC_IMPL(__imp__sub_820B5CD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r9,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r9.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B5CFC"))) PPC_WEAK_FUNC(sub_820B5CFC);
PPC_FUNC_IMPL(__imp__sub_820B5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5D00"))) PPC_WEAK_FUNC(sub_820B5D00);
PPC_FUNC_IMPL(__imp__sub_820B5D00) {
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
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b5d40
	if (!ctx.cr6.eq) goto loc_820B5D40;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b5d40
	if (ctx.cr6.eq) goto loc_820B5D40;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5d40
	if (ctx.cr6.eq) goto loc_820B5D40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B5D40;
	sub_82183E40(ctx, base);
loc_820B5D40:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_820B5D5C"))) PPC_WEAK_FUNC(sub_820B5D5C);
PPC_FUNC_IMPL(__imp__sub_820B5D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B5D60"))) PPC_WEAK_FUNC(sub_820B5D60);
PPC_FUNC_IMPL(__imp__sub_820B5D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820B5D68;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x820B5D88;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B5D94;
	sub_821837D0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8209eda0
	ctx.lr = 0x820B5D9C;
	sub_8209EDA0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822310a0
	ctx.lr = 0x820B5DA8;
	sub_822310A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b5e70
	if (ctx.cr6.eq) goto loc_820B5E70;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5dd0
	if (ctx.cr6.eq) goto loc_820B5DD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B5DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5DD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x820B5DDC;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B5DE4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B5DF0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B5DF4;
	sub_82183850(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B5E00;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B5E08;
	sub_821830F8(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,480
	ctx.r3.s64 = 480;
	// lwz r30,28(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r29,32(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x82080000
	ctx.lr = 0x820B5E1C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5e44
	if (ctx.cr6.eq) goto loc_820B5E44;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x82234ec0
	ctx.lr = 0x820B5E40;
	sub_82234EC0(ctx, base);
	// b 0x820b5e48
	goto loc_820B5E48;
loc_820B5E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5E48:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x820b5e60
	if (ctx.cr6.lt) goto loc_820B5E60;
	// bne cr6,0x820b5e68
	if (!ctx.cr6.eq) goto loc_820B5E68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b5e64
	goto loc_820B5E64;
loc_820B5E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5E64:
	// bl 0x821830f8
	ctx.lr = 0x820B5E68;
	sub_821830F8(ctx, base);
loc_820B5E68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B5E70;
	sub_821837D0(ctx, base);
loc_820B5E70:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B5E78;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820B5E80"))) PPC_WEAK_FUNC(sub_820B5E80);
PPC_FUNC_IMPL(__imp__sub_820B5E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B5E88;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820b6244
	if (ctx.cr6.gt) goto loc_820B6244;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b5f28
	// bdzf 4*cr6+eq,0x820b5fa4
	// bdzf 4*cr6+eq,0x820b6020
	// bdzf 4*cr6+eq,0x820b6194
	// bne cr6,0x820b61ec
	if (!ctx.cr6.eq) goto loc_820B61EC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed50
	ctx.lr = 0x820B5EC8;
	sub_8209ED50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b6244
	if (ctx.cr6.eq) goto loc_820B6244;
	// bl 0x82182e90
	ctx.lr = 0x820B5ED4;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B5EDC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B5EE8;
	sub_821837D0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,34580
	ctx.r3.u64 = ctx.r3.u64 | 34580;
	// bl 0x82080000
	ctx.lr = 0x820B5EF4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5f08
	if (ctx.cr6.eq) goto loc_820B5F08;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82235848
	ctx.lr = 0x820B5F04;
	sub_82235848(ctx, base);
	// b 0x820b5f0c
	goto loc_820B5F0C;
loc_820B5F08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B5F0C:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B5F18;
	sub_821837D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B5F28:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82235838
	ctx.lr = 0x820B5F30;
	sub_82235838(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b6244
	if (ctx.cr6.eq) goto loc_820B6244;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5f58
	if (ctx.cr6.eq) goto loc_820B5F58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B5F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5F58:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b5f84
	if (!ctx.cr6.eq) goto loc_820B5F84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b5d60
	ctx.lr = 0x820B5F74;
	sub_820B5D60(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B5F84:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820b5d00
	ctx.lr = 0x820B5F8C;
	sub_820B5D00(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed78
	ctx.lr = 0x820B5F98;
	sub_8209ED78(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B5FA4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822344a0
	ctx.lr = 0x820B5FAC;
	sub_822344A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b6244
	if (ctx.cr6.eq) goto loc_820B6244;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b5fd8
	if (!ctx.cr6.eq) goto loc_820B5FD8;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82234be0
	ctx.lr = 0x820B5FC8;
	sub_82234BE0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B5FD8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820b5d00
	ctx.lr = 0x820B5FE0;
	sub_820B5D00(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6000
	if (ctx.cr6.eq) goto loc_820B6000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B6000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B6000:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed78
	ctx.lr = 0x820B6014;
	sub_8209ED78(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B6020:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822344b0
	ctx.lr = 0x820B6028;
	sub_822344B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b6244
	if (ctx.cr6.eq) goto loc_820B6244;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b6084
	if (ctx.cr6.eq) goto loc_820B6084;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820b5d00
	ctx.lr = 0x820B6044;
	sub_820B5D00(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6064
	if (ctx.cr6.eq) goto loc_820B6064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B6064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B6064:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed78
	ctx.lr = 0x820B6078;
	sub_8209ED78(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B6084:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b6130
	if (!ctx.cr6.eq) goto loc_820B6130;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82234d48
	ctx.lr = 0x820B60A4;
	sub_82234D48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// bl 0x821b02c8
	ctx.lr = 0x820B60B8;
	sub_821B02C8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,48(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// bl 0x82234208
	ctx.lr = 0x820B60E0;
	sub_82234208(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x820b6128
	if (!ctx.cr6.gt) goto loc_820B6128;
loc_820B60F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82233948
	ctx.lr = 0x820B6114;
	sub_82233948(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820b60f4
	if (ctx.cr6.lt) goto loc_820B60F4;
loc_820B6128:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820b5d00
	ctx.lr = 0x820B6130;
	sub_820B5D00(ctx, base);
loc_820B6130:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r6,5(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// stw r6,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r6.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6170
	if (ctx.cr6.eq) goto loc_820B6170;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B6170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B6170:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b5c08
	ctx.lr = 0x820B617C;
	sub_820B5C08(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B6194:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82213a20
	ctx.lr = 0x820B61AC;
	sub_82213A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b6244
	if (ctx.cr6.eq) goto loc_820B6244;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b61d0
	if (!ctx.cr6.eq) goto loc_820B61D0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B61D0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed78
	ctx.lr = 0x820B61DC;
	sub_8209ED78(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B61EC:
	// bl 0x821142a0
	ctx.lr = 0x820B61F0;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6204
	if (ctx.cr6.eq) goto loc_820B6204;
	// bl 0x821ff660
	ctx.lr = 0x820B61FC;
	sub_821FF660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b6244
	if (ctx.cr6.eq) goto loc_820B6244;
loc_820B6204:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,-468(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// addi r4,r11,-17
	ctx.r4.s64 = ctx.r11.s64 + -17;
	// bl 0x8215f490
	ctx.lr = 0x820B621C;
	sub_8215F490(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r3,-8968(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8968);
	// bl 0x8209ed78
	ctx.lr = 0x820B6230;
	sub_8209ED78(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_820B6244:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B624C"))) PPC_WEAK_FUNC(sub_820B624C);
PPC_FUNC_IMPL(__imp__sub_820B624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6250"))) PPC_WEAK_FUNC(sub_820B6250);
PPC_FUNC_IMPL(__imp__sub_820B6250) {
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
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221bae8
	ctx.lr = 0x820B6274;
	sub_8221BAE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215f550
	ctx.lr = 0x820B627C;
	sub_8215F550(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r9,r11,11804
	ctx.r9.s64 = ctx.r11.s64 + 11804;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x820B62A0;
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

__attribute__((alias("__imp__sub_820B62BC"))) PPC_WEAK_FUNC(sub_820B62BC);
PPC_FUNC_IMPL(__imp__sub_820B62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B62C0"))) PPC_WEAK_FUNC(sub_820B62C0);
PPC_FUNC_IMPL(__imp__sub_820B62C0) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,11832
	ctx.r10.s64 = ctx.r11.s64 + 11832;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820b6300
	if (ctx.cr6.eq) goto loc_820B6300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B6300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B6300:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x820B6310;
	sub_821857F0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8209eda0
	ctx.lr = 0x820B6318;
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

__attribute__((alias("__imp__sub_820B632C"))) PPC_WEAK_FUNC(sub_820B632C);
PPC_FUNC_IMPL(__imp__sub_820B632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6330"))) PPC_WEAK_FUNC(sub_820B6330);
PPC_FUNC_IMPL(__imp__sub_820B6330) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B6354"))) PPC_WEAK_FUNC(sub_820B6354);
PPC_FUNC_IMPL(__imp__sub_820B6354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6358"))) PPC_WEAK_FUNC(sub_820B6358);
PPC_FUNC_IMPL(__imp__sub_820B6358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B636C"))) PPC_WEAK_FUNC(sub_820B636C);
PPC_FUNC_IMPL(__imp__sub_820B636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6370"))) PPC_WEAK_FUNC(sub_820B6370);
PPC_FUNC_IMPL(__imp__sub_820B6370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820b638c
	if (!ctx.cr6.eq) goto loc_820B638C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820B638C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B6394"))) PPC_WEAK_FUNC(sub_820B6394);
PPC_FUNC_IMPL(__imp__sub_820B6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6398"))) PPC_WEAK_FUNC(sub_820B6398);
PPC_FUNC_IMPL(__imp__sub_820B6398) {
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
	// addi r10,r11,11804
	ctx.r10.s64 = ctx.r11.s64 + 11804;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8215f338
	ctx.lr = 0x820B63C4;
	sub_8215F338(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8209eda0
	ctx.lr = 0x820B63CC;
	sub_8209EDA0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b63e8
	if (ctx.cr6.eq) goto loc_820B63E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B63E4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B63E8:
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

__attribute__((alias("__imp__sub_820B6400"))) PPC_WEAK_FUNC(sub_820B6400);
PPC_FUNC_IMPL(__imp__sub_820B6400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B6408;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820B6424;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6430
	if (ctx.cr6.eq) goto loc_820B6430;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820B6430:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B643C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6448
	if (ctx.cr6.eq) goto loc_820B6448;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_820B6448:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6454;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6460
	if (ctx.cr6.eq) goto loc_820B6460;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_820B6460:
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B646C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b648c
	if (ctx.cr6.eq) goto loc_820B648C;
	// li r4,21000
	ctx.r4.s64 = 21000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6480;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b648c
	if (ctx.cr6.eq) goto loc_820B648C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_820B648C:
	// li r29,10000
	ctx.r29.s64 = 10000;
loc_820B6490:
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B649C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b64a8
	if (ctx.cr6.eq) goto loc_820B64A8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_820B64A8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,10999
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10999, ctx.xer);
	// ble cr6,0x820b6490
	if (!ctx.cr6.gt) goto loc_820B6490;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b6608
	if (ctx.cr6.eq) goto loc_820B6608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// bl 0x820f6948
	ctx.lr = 0x820B64C8;
	sub_820F6948(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820B64D8;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b64fc
	if (ctx.cr6.eq) goto loc_820B64FC;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x820f6268
	ctx.lr = 0x820B64FC;
	sub_820F6268(ctx, base);
loc_820B64FC:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6508;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6534
	if (ctx.cr6.eq) goto loc_820B6534;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,1032
	ctx.r6.s64 = 1032;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820f6268
	ctx.lr = 0x820B6534;
	sub_820F6268(ctx, base);
loc_820B6534:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6540;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b656c
	if (ctx.cr6.eq) goto loc_820B656C;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,1033
	ctx.r6.s64 = 1033;
	// li r5,33
	ctx.r5.s64 = 33;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820f6268
	ctx.lr = 0x820B656C;
	sub_820F6268(ctx, base);
loc_820B656C:
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6578;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b65b8
	if (ctx.cr6.eq) goto loc_820B65B8;
	// li r4,21000
	ctx.r4.s64 = 21000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B658C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b65b8
	if (ctx.cr6.eq) goto loc_820B65B8;
	// lwz r10,88(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,21000
	ctx.r6.s64 = 21000;
	// li r5,20000
	ctx.r5.s64 = 20000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820f6268
	ctx.lr = 0x820B65B8;
	sub_820F6268(ctx, base);
loc_820B65B8:
	// li r29,10000
	ctx.r29.s64 = 10000;
loc_820B65BC:
	// clrlwi r28,r29,16
	ctx.r28.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B65CC;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b65fc
	if (ctx.cr6.eq) goto loc_820B65FC;
	// lwz r10,88(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r29,1000
	ctx.r9.s64 = ctx.r29.s64 + 1000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820f6268
	ctx.lr = 0x820B65FC;
	sub_820F6268(ctx, base);
loc_820B65FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,10999
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 10999, ctx.xer);
	// ble cr6,0x820b65bc
	if (!ctx.cr6.gt) goto loc_820B65BC;
loc_820B6608:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B6610"))) PPC_WEAK_FUNC(sub_820B6610);
PPC_FUNC_IMPL(__imp__sub_820B6610) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6638;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6670
	if (ctx.cr6.eq) goto loc_820B6670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B664C;
	sub_8218AC78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b6670
	if (ctx.cr6.eq) goto loc_820B6670;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x820f6b38
	ctx.lr = 0x820B665C;
	sub_820F6B38(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x820f66f8
	ctx.lr = 0x820B6670;
	sub_820F66F8(ctx, base);
loc_820B6670:
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

__attribute__((alias("__imp__sub_820B6688"))) PPC_WEAK_FUNC(sub_820B6688);
PPC_FUNC_IMPL(__imp__sub_820B6688) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8221bae8
	ctx.lr = 0x820B66A8;
	sub_8221BAE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185740
	ctx.lr = 0x820B66B8;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,11832
	ctx.r10.s64 = ctx.r11.s64 + 11832;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x820B66E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b66f8
	if (ctx.cr6.eq) goto loc_820B66F8;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x820B66F4;
	sub_82183448(ctx, base);
	// b 0x820b6700
	goto loc_820B6700;
loc_820B66F8:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x820B6700;
	sub_821845A0(ctx, base);
loc_820B6700:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b671c
	if (ctx.cr6.eq) goto loc_820B671C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b6250
	ctx.lr = 0x820B6710;
	sub_820B6250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x820b6720
	goto loc_820B6720;
loc_820B671C:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_820B6720:
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

__attribute__((alias("__imp__sub_820B673C"))) PPC_WEAK_FUNC(sub_820B673C);
PPC_FUNC_IMPL(__imp__sub_820B673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6740"))) PPC_WEAK_FUNC(sub_820B6740);
PPC_FUNC_IMPL(__imp__sub_820B6740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B6748;
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820b67bc
	if (!ctx.cr6.eq) goto loc_820B67BC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191ea0
	ctx.lr = 0x820B6770;
	sub_82191EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b6788
	if (!ctx.cr6.eq) goto loc_820B6788;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82191f38
	ctx.lr = 0x820B6780;
	sub_82191F38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b67d8
	if (ctx.cr6.eq) goto loc_820B67D8;
loc_820B6788:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// bl 0x82191e20
	ctx.lr = 0x820B6798;
	sub_82191E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b67bc
	if (ctx.cr6.eq) goto loc_820B67BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B67BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b67d8
	if (!ctx.cr6.eq) goto loc_820B67D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B67D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B67E4"))) PPC_WEAK_FUNC(sub_820B67E4);
PPC_FUNC_IMPL(__imp__sub_820B67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B67E8"))) PPC_WEAK_FUNC(sub_820B67E8);
PPC_FUNC_IMPL(__imp__sub_820B67E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820B67F0;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8218a810
	ctx.lr = 0x820B680C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6818
	if (ctx.cr6.eq) goto loc_820B6818;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820B6818:
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6824;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6830
	if (ctx.cr6.eq) goto loc_820B6830;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B6830:
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B683C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6848
	if (ctx.cr6.eq) goto loc_820B6848;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B6848:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6854;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6860
	if (ctx.cr6.eq) goto loc_820B6860;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B6860:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B686C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6878
	if (ctx.cr6.eq) goto loc_820B6878;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B6878:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6884;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6890
	if (ctx.cr6.eq) goto loc_820B6890;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B6890:
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B689C;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b68a8
	if (ctx.cr6.eq) goto loc_820B68A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B68A8:
	// li r4,20001
	ctx.r4.s64 = 20001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B68B4;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b68c0
	if (ctx.cr6.eq) goto loc_820B68C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B68C0:
	// li r4,30000
	ctx.r4.s64 = 30000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B68CC;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b68d8
	if (ctx.cr6.eq) goto loc_820B68D8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B68D8:
	// li r4,30001
	ctx.r4.s64 = 30001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B68E4;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b68f0
	if (ctx.cr6.eq) goto loc_820B68F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B68F0:
	// li r29,10000
	ctx.r29.s64 = 10000;
loc_820B68F4:
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6900;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b690c
	if (ctx.cr6.eq) goto loc_820B690C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820B690C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,10999
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10999, ctx.xer);
	// ble cr6,0x820b68f4
	if (!ctx.cr6.gt) goto loc_820B68F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b6d54
	if (ctx.cr6.eq) goto loc_820B6D54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,88(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// bl 0x820f64f8
	ctx.lr = 0x820B692C;
	sub_820F64F8(ctx, base);
	// li r11,26
	ctx.r11.s64 = 26;
	// li r10,27
	ctx.r10.s64 = 27;
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// li r22,4
	ctx.r22.s64 = 4;
loc_820B695C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6970;
	sub_8218A810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6a20
	if (ctx.cr6.eq) goto loc_820B6A20;
	// bl 0x82182e90
	ctx.lr = 0x820B6980;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B6988;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6994;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B6998;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B69A4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B69AC;
	sub_821830F8(ctx, base);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820B69B8;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x820b69d0
	if (ctx.cr6.lt) goto loc_820B69D0;
	// bne cr6,0x820b69d8
	if (!ctx.cr6.eq) goto loc_820B69D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b69d4
	goto loc_820B69D4;
loc_820B69D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B69D4:
	// bl 0x821830f8
	ctx.lr = 0x820B69D8;
	sub_821830F8(ctx, base);
loc_820B69D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B69E0;
	sub_821837D0(ctx, base);
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bl 0x8218ac78
	ctx.lr = 0x820B6A00;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x820f60f0
	ctx.lr = 0x820B6A14;
	sub_820F60F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B6A20;
	sub_82183E40(ctx, base);
loc_820B6A20:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x820b695c
	if (!ctx.cr0.eq) goto loc_820B695C;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6A38;
	sub_8218A810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6ae8
	if (ctx.cr6.eq) goto loc_820B6AE8;
	// bl 0x82182e90
	ctx.lr = 0x820B6A48;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B6A50;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6A5C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B6A60;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B6A6C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B6A74;
	sub_821830F8(ctx, base);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820B6A80;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x820b6a98
	if (ctx.cr6.lt) goto loc_820B6A98;
	// bne cr6,0x820b6aa0
	if (!ctx.cr6.eq) goto loc_820B6AA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b6a9c
	goto loc_820B6A9C;
loc_820B6A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6A9C:
	// bl 0x821830f8
	ctx.lr = 0x820B6AA0;
	sub_821830F8(ctx, base);
loc_820B6AA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6AA8;
	sub_821837D0(ctx, base);
	// lwz r10,88(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B6AC8;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,33
	ctx.r6.s64 = 33;
	// bl 0x820f60f0
	ctx.lr = 0x820B6ADC;
	sub_820F60F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B6AE8;
	sub_82183E40(ctx, base);
loc_820B6AE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6AF4;
	sub_8218A810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6ba4
	if (ctx.cr6.eq) goto loc_820B6BA4;
	// bl 0x82182e90
	ctx.lr = 0x820B6B04;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B6B0C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6B18;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B6B1C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B6B28;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B6B30;
	sub_821830F8(ctx, base);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820B6B3C;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x820b6b54
	if (ctx.cr6.lt) goto loc_820B6B54;
	// bne cr6,0x820b6b5c
	if (!ctx.cr6.eq) goto loc_820B6B5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b6b58
	goto loc_820B6B58;
loc_820B6B54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6B58:
	// bl 0x821830f8
	ctx.lr = 0x820B6B5C;
	sub_821830F8(ctx, base);
loc_820B6B5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6B64;
	sub_821837D0(ctx, base);
	// lwz r10,88(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B6B84;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x820f60f0
	ctx.lr = 0x820B6B98;
	sub_820F60F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B6BA4;
	sub_82183E40(ctx, base);
loc_820B6BA4:
	// li r23,10000
	ctx.r23.s64 = 10000;
	// rlwinm r27,r30,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_820B6BAC:
	// clrlwi r25,r23,16
	ctx.r25.u64 = ctx.r23.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6BBC;
	sub_8218A810(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6c6c
	if (ctx.cr6.eq) goto loc_820B6C6C;
	// bl 0x82182e90
	ctx.lr = 0x820B6BCC;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B6BD4;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6BE0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B6BE4;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B6BF0;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B6BF8;
	sub_821830F8(ctx, base);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820B6C04;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x820b6c1c
	if (ctx.cr6.lt) goto loc_820B6C1C;
	// bne cr6,0x820b6c24
	if (!ctx.cr6.eq) goto loc_820B6C24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b6c20
	goto loc_820B6C20;
loc_820B6C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6C20:
	// bl 0x821830f8
	ctx.lr = 0x820B6C24;
	sub_821830F8(ctx, base);
loc_820B6C24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6C2C;
	sub_821837D0(ctx, base);
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bl 0x8218ac78
	ctx.lr = 0x820B6C4C;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x820f60f0
	ctx.lr = 0x820B6C60;
	sub_820F60F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B6C6C;
	sub_82183E40(ctx, base);
loc_820B6C6C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,10999
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10999, ctx.xer);
	// ble cr6,0x820b6bac
	if (!ctx.cr6.gt) goto loc_820B6BAC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r24,r11,-28840
	ctx.r24.s64 = ctx.r11.s64 + -28840;
	// li r23,5
	ctx.r23.s64 = 5;
loc_820B6C88:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6C9C;
	sub_8218A810(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6d48
	if (ctx.cr6.eq) goto loc_820B6D48;
	// bl 0x82182e90
	ctx.lr = 0x820B6CAC;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B6CB4;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6CC0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B6CC4;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B6CD0;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B6CD8;
	sub_821830F8(ctx, base);
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820B6CE4;
	sub_8218AE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x820b6cfc
	if (ctx.cr6.lt) goto loc_820B6CFC;
	// bne cr6,0x820b6d04
	if (!ctx.cr6.eq) goto loc_820B6D04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b6d00
	goto loc_820B6D00;
loc_820B6CFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6D00:
	// bl 0x821830f8
	ctx.lr = 0x820B6D04;
	sub_821830F8(ctx, base);
loc_820B6D04:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6D0C;
	sub_821837D0(ctx, base);
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bl 0x8218ac78
	ctx.lr = 0x820B6D28;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x820f60f0
	ctx.lr = 0x820B6D3C;
	sub_820F60F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B6D48;
	sub_82183E40(ctx, base);
loc_820B6D48:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x820b6c88
	if (!ctx.cr0.eq) goto loc_820B6C88;
loc_820B6D54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820B6D5C"))) PPC_WEAK_FUNC(sub_820B6D5C);
PPC_FUNC_IMPL(__imp__sub_820B6D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B6D60"))) PPC_WEAK_FUNC(sub_820B6D60);
PPC_FUNC_IMPL(__imp__sub_820B6D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820B6D68;
	sub_8224876C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6D80;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b70e0
	if (ctx.cr6.eq) goto loc_820B70E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x820B6D94;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b70e0
	if (ctx.cr6.eq) goto loc_820B70E0;
	// bl 0x821b1108
	ctx.lr = 0x820B6DA0;
	sub_821B1108(ctx, base);
	// lwz r11,92(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 92);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// bl 0x821b10f8
	ctx.lr = 0x820B6DB0;
	sub_821B10F8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6DBC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6dd8
	if (ctx.cr6.eq) goto loc_820B6DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B6DD0;
	sub_8218AC78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820b6ddc
	goto loc_820B6DDC;
loc_820B6DD8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820B6DDC:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6DE8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6dfc
	if (ctx.cr6.eq) goto loc_820B6DFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B6DFC;
	sub_8218AC78(ctx, base);
loc_820B6DFC:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6E08;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6e24
	if (ctx.cr6.eq) goto loc_820B6E24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B6E1C;
	sub_8218AC78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x820b6e28
	goto loc_820B6E28;
loc_820B6E24:
	// li r25,0
	ctx.r25.s64 = 0;
loc_820B6E28:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6E34;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6e50
	if (ctx.cr6.eq) goto loc_820B6E50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B6E48;
	sub_8218AC78(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x820b6e54
	goto loc_820B6E54;
loc_820B6E50:
	// li r24,0
	ctx.r24.s64 = 0;
loc_820B6E54:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82182e90
	ctx.lr = 0x820B6E64;
	sub_82182E90(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B6E6C;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6E78;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B6E7C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r23,r11,27,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B6E88;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B6E90;
	sub_821830F8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820b6ecc
	if (ctx.cr6.eq) goto loc_820B6ECC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82080d68
	ctx.lr = 0x820B6EA0;
	sub_82080D68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6EB0;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6ecc
	if (ctx.cr6.eq) goto loc_820B6ECC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ad90
	ctx.lr = 0x820B6ECC;
	sub_8218AD90(ctx, base);
loc_820B6ECC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820b6f08
	if (ctx.cr6.eq) goto loc_820B6F08;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82080d68
	ctx.lr = 0x820B6EDC;
	sub_82080D68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6EEC;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6f08
	if (ctx.cr6.eq) goto loc_820B6F08;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ad90
	ctx.lr = 0x820B6F08;
	sub_8218AD90(ctx, base);
loc_820B6F08:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x820b6f44
	if (ctx.cr6.eq) goto loc_820B6F44;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82080d68
	ctx.lr = 0x820B6F18;
	sub_82080D68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B6F28;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b6f44
	if (ctx.cr6.eq) goto loc_820B6F44;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ad90
	ctx.lr = 0x820B6F44;
	sub_8218AD90(ctx, base);
loc_820B6F44:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x820b6f58
	if (ctx.cr6.lt) goto loc_820B6F58;
	// bne cr6,0x820b6f60
	if (!ctx.cr6.eq) goto loc_820B6F60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b6f5c
	goto loc_820B6F5C;
loc_820B6F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B6F5C:
	// bl 0x821830f8
	ctx.lr = 0x820B6F60;
	sub_821830F8(ctx, base);
loc_820B6F60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6F68;
	sub_821837D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a1448
	ctx.lr = 0x820B6F74;
	sub_821A1448(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1448
	ctx.lr = 0x820B6F80;
	sub_821A1448(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1448
	ctx.lr = 0x820B6F8C;
	sub_821A1448(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1448
	ctx.lr = 0x820B6F98;
	sub_821A1448(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1118
	ctx.lr = 0x820B6FA0;
	sub_821A1118(ctx, base);
	// lwz r11,92(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x820B6FB0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B6FBC;
	sub_821837D0(ctx, base);
	// lwz r10,88(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x821a1118
	ctx.lr = 0x820B6FCC;
	sub_821A1118(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1118
	ctx.lr = 0x820B6FD8;
	sub_821A1118(ctx, base);
	// add r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 + ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a1118
	ctx.lr = 0x820B6FE4;
	sub_821A1118(ctx, base);
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821a1de8
	ctx.lr = 0x820B6FF4;
	sub_821A1DE8(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2570
	ctx.lr = 0x820B7004;
	sub_821A2570(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821a1980
	ctx.lr = 0x820B7018;
	sub_821A1980(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1980
	ctx.lr = 0x820B702C;
	sub_821A1980(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1980
	ctx.lr = 0x820B7040;
	sub_821A1980(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821b10f8
	ctx.lr = 0x820B7048;
	sub_821B10F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a1980
	ctx.lr = 0x820B705C;
	sub_821A1980(ctx, base);
	// lwz r9,92(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 92);
	// lbz r3,6(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// bl 0x821b10f8
	ctx.lr = 0x820B7068;
	sub_821B10F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2570
	ctx.lr = 0x820B7074;
	sub_821A2570(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b7088
	if (ctx.cr6.eq) goto loc_820B7088;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B7088;
	sub_82183E40(ctx, base);
loc_820B7088:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820b709c
	if (ctx.cr6.eq) goto loc_820B709C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B709C;
	sub_82183E40(ctx, base);
loc_820B709C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820b70b0
	if (ctx.cr6.eq) goto loc_820B70B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B70B0;
	sub_82183E40(ctx, base);
loc_820B70B0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821b10f8
	ctx.lr = 0x820B70B8;
	sub_821B10F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B70C0;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a11e8
	ctx.lr = 0x820B70C8;
	sub_821A11E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a11e8
	ctx.lr = 0x820B70D0;
	sub_821A11E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a11e8
	ctx.lr = 0x820B70D8;
	sub_821A11E8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a11e8
	ctx.lr = 0x820B70E0;
	sub_821A11E8(ctx, base);
loc_820B70E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820B70E8"))) PPC_WEAK_FUNC(sub_820B70E8);
PPC_FUNC_IMPL(__imp__sub_820B70E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B70F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8218a810
	ctx.lr = 0x820B710C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b71f8
	if (ctx.cr6.eq) goto loc_820B71F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x820B7120;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b71f8
	if (ctx.cr6.eq) goto loc_820B71F8;
	// bl 0x82182e90
	ctx.lr = 0x820B712C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820B7134;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B7140;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820B7144;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820B7150;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820B7158;
	sub_821830F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B7164;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b7180
	if (ctx.cr6.eq) goto loc_820B7180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820B7178;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x820b7184
	goto loc_820B7184;
loc_820B7180:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820B7184:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x820b7198
	if (ctx.cr6.lt) goto loc_820B7198;
	// bne cr6,0x820b71a0
	if (!ctx.cr6.eq) goto loc_820B71A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b719c
	goto loc_820B719C;
loc_820B7198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B719C:
	// bl 0x821830f8
	ctx.lr = 0x820B71A0;
	sub_821830F8(ctx, base);
loc_820B71A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B71A8;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x820B71B4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b71d0
	if (ctx.cr6.eq) goto loc_820B71D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820B71C8;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820b71d4
	goto loc_820B71D4;
loc_820B71D0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820B71D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B71EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820B71F8;
	sub_82183E40(ctx, base);
loc_820B71F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B7200"))) PPC_WEAK_FUNC(sub_820B7200);
PPC_FUNC_IMPL(__imp__sub_820B7200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820B7208;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821a2590
	ctx.lr = 0x820B7224;
	sub_821A2590(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a2588
	ctx.lr = 0x820B7238;
	sub_821A2588(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8218aa18
	ctx.lr = 0x820B724C;
	sub_8218AA18(ctx, base);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x820B7258;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B7264;
	sub_821837D0(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8209eda0
	ctx.lr = 0x820B726C;
	sub_8209EDA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b70e8
	ctx.lr = 0x820B7278;
	sub_820B70E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6d60
	ctx.lr = 0x820B7284;
	sub_820B6D60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b67e8
	ctx.lr = 0x820B7290;
	sub_820B67E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6400
	ctx.lr = 0x820B729C;
	sub_820B6400(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6610
	ctx.lr = 0x820B72A8;
	sub_820B6610(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821a2588
	ctx.lr = 0x820B72B4;
	sub_821A2588(ctx, base);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r6.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r4,5(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r4,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x820B72EC;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x820B72F4;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820B7300"))) PPC_WEAK_FUNC(sub_820B7300);
PPC_FUNC_IMPL(__imp__sub_820B7300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820B7308;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8215f348
	ctx.lr = 0x820B7344;
	sub_8215F348(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r25,8(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x82183078
	ctx.lr = 0x820B7368;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B7374;
	sub_821837D0(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,-8964(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8964);
	// bl 0x8209f008
	ctx.lr = 0x820B7388;
	sub_8209F008(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820b73b0
	if (!ctx.cr6.eq) goto loc_820B73B0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215f370
	ctx.lr = 0x820B739C;
	sub_8215F370(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x820B73A4;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820B73B0:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8218a128
	ctx.lr = 0x820B73C8;
	sub_8218A128(ctx, base);
	// stw r31,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r31.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7200
	ctx.lr = 0x820B73D8;
	sub_820B7200(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x820B73E8;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820B73F4"))) PPC_WEAK_FUNC(sub_820B73F4);
PPC_FUNC_IMPL(__imp__sub_820B73F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B73F8"))) PPC_WEAK_FUNC(sub_820B73F8);
PPC_FUNC_IMPL(__imp__sub_820B73F8) {
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
	// stw r3,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// bl 0x820b7200
	ctx.lr = 0x820B741C;
	sub_820B7200(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B7438"))) PPC_WEAK_FUNC(sub_820B7438);
PPC_FUNC_IMPL(__imp__sub_820B7438) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x820b7650
	if (ctx.cr6.gt) goto loc_820B7650;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b74c8
	// bdzf 4*cr6+eq,0x820b7558
	// bdzf 4*cr6+eq,0x820b74f4
	// bdzf 4*cr6+eq,0x820b7538
	// bdzf 4*cr6+eq,0x820b7564
	// bdzf 4*cr6+eq,0x820b759c
	// bdzf 4*cr6+eq,0x820b75c4
	// bne cr6,0x820b7610
	if (!ctx.cr6.eq) goto loc_820B7610;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed50
	ctx.lr = 0x820B7494;
	sub_8209ED50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7650
	if (ctx.cr6.eq) goto loc_820B7650;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x820b7300
	ctx.lr = 0x820B74B4;
	sub_820B7300(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x820b7650
	goto loc_820B7650;
loc_820B74C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b7650
	if (ctx.cr6.eq) goto loc_820B7650;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// b 0x820b7650
	goto loc_820B7650;
loc_820B74F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82213b78
	ctx.lr = 0x820B74FC;
	sub_82213B78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82213ba0
	ctx.lr = 0x820B7504;
	sub_82213BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82213eb8
	ctx.lr = 0x820B7510;
	sub_82213EB8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82214190
	ctx.lr = 0x820B7524;
	sub_82214190(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// b 0x820b7650
	goto loc_820B7650;
loc_820B7538:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82213a20
	ctx.lr = 0x820B7550;
	sub_82213A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7650
	if (ctx.cr6.eq) goto loc_820B7650;
loc_820B7558:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x820b7650
	goto loc_820B7650;
loc_820B7564:
	// bl 0x82181040
	ctx.lr = 0x820B7568;
	sub_82181040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7590
	if (ctx.cr6.eq) goto loc_820B7590;
	// li r4,66
	ctx.r4.s64 = 66;
	// bl 0x82181370
	ctx.lr = 0x820B757C;
	sub_82181370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7590
	if (ctx.cr6.eq) goto loc_820B7590;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82181370
	ctx.lr = 0x820B7590;
	sub_82181370(ctx, base);
loc_820B7590:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x820b7650
	goto loc_820B7650;
loc_820B759C:
	// bl 0x82181040
	ctx.lr = 0x820B75A0;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b75b8
	if (ctx.cr6.eq) goto loc_820B75B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82181078
	ctx.lr = 0x820B75B0;
	sub_82181078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b7650
	if (!ctx.cr6.eq) goto loc_820B7650;
loc_820B75B8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x820b7650
	goto loc_820B7650;
loc_820B75C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,-468(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// addi r4,r11,-17
	ctx.r4.s64 = ctx.r11.s64 + -17;
	// bl 0x8215f490
	ctx.lr = 0x820B75DC;
	sub_8215F490(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r9,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r3,-8968(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8968);
	// b 0x820b764c
	goto loc_820B764C;
loc_820B7610:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8218b1e0
	ctx.lr = 0x820B7618;
	sub_8218B1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7650
	if (ctx.cr6.eq) goto loc_820B7650;
	// bl 0x82181040
	ctx.lr = 0x820B7624;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b763c
	if (ctx.cr6.eq) goto loc_820B763C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82181078
	ctx.lr = 0x820B7634;
	sub_82181078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b7650
	if (!ctx.cr6.eq) goto loc_820B7650;
loc_820B763C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,-8968(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
loc_820B764C:
	// bl 0x8209ed78
	ctx.lr = 0x820B7650;
	sub_8209ED78(ctx, base);
loc_820B7650:
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

__attribute__((alias("__imp__sub_820B7668"))) PPC_WEAK_FUNC(sub_820B7668);
PPC_FUNC_IMPL(__imp__sub_820B7668) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820b7690
	if (!ctx.cr6.eq) goto loc_820B7690;
loc_820B767C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B7690:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x820b767c
	if (ctx.cr6.lt) goto loc_820B767C;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x820b767c
	if (!ctx.cr6.lt) goto loc_820B767C;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// beq cr6,0x820b767c
	if (ctx.cr6.eq) goto loc_820B767C;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// lbz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// cmplwi cr6,r4,21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21, ctx.xer);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r6,1284(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1284);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// bne cr6,0x820b771c
	if (!ctx.cr6.eq) goto loc_820B771C;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b771c
	if (ctx.cr6.eq) goto loc_820B771C;
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
loc_820B771C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x820b773c
	if (!ctx.cr6.eq) goto loc_820B773C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b773c
	if (ctx.cr6.eq) goto loc_820B773C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
loc_820B773C:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,27136(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27136);
	// bl 0x82080248
	ctx.lr = 0x820B774C;
	sub_82080248(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7760"))) PPC_WEAK_FUNC(sub_820B7760);
PPC_FUNC_IMPL(__imp__sub_820B7760) {
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
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// ori r4,r4,20545
	ctx.r4.u64 = ctx.r4.u64 | 20545;
	// bl 0x821882d0
	ctx.lr = 0x820B7778;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7794
	if (ctx.cr6.eq) goto loc_820B7794;
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
loc_820B7794:
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

__attribute__((alias("__imp__sub_820B77A8"))) PPC_WEAK_FUNC(sub_820B77A8);
PPC_FUNC_IMPL(__imp__sub_820B77A8) {
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
	// addi r10,r11,11840
	ctx.r10.s64 = ctx.r11.s64 + 11840;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820B77D4;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820b77f0
	if (ctx.cr6.eq) goto loc_820B77F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820B77EC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820B77F0:
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

__attribute__((alias("__imp__sub_820B7808"))) PPC_WEAK_FUNC(sub_820B7808);
PPC_FUNC_IMPL(__imp__sub_820B7808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820B7810;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x820B7824;
	sub_822AA648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,-8540(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// bl 0x822aa648
	ctx.lr = 0x820B783C;
	sub_822AA648(ctx, base);
	// addi r30,r30,1696
	ctx.r30.s64 = ctx.r30.s64 + 1696;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c92e8
	ctx.lr = 0x820B7850;
	sub_820C92E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c92e8
	ctx.lr = 0x820B7864;
	sub_820C92E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820b7874
	if (!ctx.cr6.eq) goto loc_820B7874;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820B7874:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820b7880
	if (!ctx.cr6.eq) goto loc_820B7880;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_820B7880:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820B7888"))) PPC_WEAK_FUNC(sub_820B7888);
PPC_FUNC_IMPL(__imp__sub_820B7888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820B7890;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b78b4
	if (!ctx.cr6.eq) goto loc_820B78B4;
loc_820B78A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820B78B4:
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// bl 0x820d63a8
	ctx.lr = 0x820B78BC;
	sub_820D63A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b78a8
	if (ctx.cr6.eq) goto loc_820B78A8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// bgt cr6,0x820b7934
	if (ctx.cr6.gt) goto loc_820B7934;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b7914
	// bdzf 4*cr6+eq,0x820b7920
	// bne cr6,0x820b792c
	if (!ctx.cr6.eq) goto loc_820B792C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x820b7934
	goto loc_820B7934;
loc_820B7914:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x820b7934
	goto loc_820B7934;
loc_820B7920:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x820b7934
	goto loc_820B7934;
loc_820B792C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_820B7934:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_820B7938:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b7954
	if (ctx.cr6.eq) goto loc_820B7954;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820b7668
	ctx.lr = 0x820B7954;
	sub_820B7668(ctx, base);
loc_820B7954:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x820b7938
	if (ctx.cr6.lt) goto loc_820B7938;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820B7970"))) PPC_WEAK_FUNC(sub_820B7970);
PPC_FUNC_IMPL(__imp__sub_820B7970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820B7978;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,1732(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// bl 0x8208dcb8
	ctx.lr = 0x820B7998;
	sub_8208DCB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b79a8
	if (ctx.cr6.eq) goto loc_820B79A8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x820b79bc
	goto loc_820B79BC;
loc_820B79A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dcf0
	ctx.lr = 0x820B79B0;
	sub_8208DCF0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 & ctx.r31.u64;
loc_820B79BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b7a28
	if (ctx.cr6.eq) goto loc_820B7A28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e6c0
	ctx.lr = 0x820B79CC;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b79d8
	if (ctx.cr6.eq) goto loc_820B79D8;
	// li r28,4
	ctx.r28.s64 = 4;
loc_820B79D8:
	// lbz r11,1397(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1397);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b79e8
	if (ctx.cr6.eq) goto loc_820B79E8;
	// li r28,5
	ctx.r28.s64 = 5;
loc_820B79E8:
	// lbz r11,1400(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b79f8
	if (ctx.cr6.eq) goto loc_820B79F8;
	// li r28,8
	ctx.r28.s64 = 8;
loc_820B79F8:
	// lbz r11,1401(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1401);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7a08
	if (ctx.cr6.eq) goto loc_820B7A08;
	// li r28,10
	ctx.r28.s64 = 10;
loc_820B7A08:
	// lbz r11,1399(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1399);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7a18
	if (ctx.cr6.eq) goto loc_820B7A18;
	// li r28,7
	ctx.r28.s64 = 7;
loc_820B7A18:
	// lbz r11,1398(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1398);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7a28
	if (ctx.cr6.eq) goto loc_820B7A28;
	// li r28,6
	ctx.r28.s64 = 6;
loc_820B7A28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b7a3c
	if (ctx.cr6.eq) goto loc_820B7A3C;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,1397
	ctx.r3.s64 = ctx.r30.s64 + 1397;
	// bl 0x822aa648
	ctx.lr = 0x820B7A3C;
	sub_822AA648(ctx, base);
loc_820B7A3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b7a50
	if (ctx.cr6.eq) goto loc_820B7A50;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r29,1397
	ctx.r3.s64 = ctx.r29.s64 + 1397;
	// bl 0x822aa648
	ctx.lr = 0x820B7A50;
	sub_822AA648(ctx, base);
loc_820B7A50:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b7888
	ctx.lr = 0x820B7A60;
	sub_820B7888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820B7A6C"))) PPC_WEAK_FUNC(sub_820B7A6C);
PPC_FUNC_IMPL(__imp__sub_820B7A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7A70"))) PPC_WEAK_FUNC(sub_820B7A70);
PPC_FUNC_IMPL(__imp__sub_820B7A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820B7A78;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-8540(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b7b78
	if (ctx.cr6.eq) goto loc_820B7B78;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8208dcb8
	ctx.lr = 0x820B7A98;
	sub_8208DCB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7ab8
	if (ctx.cr6.eq) goto loc_820B7AB8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820b7ae8
	if (!ctx.cr6.eq) goto loc_820B7AE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x820b7adc
	goto loc_820B7ADC;
loc_820B7AB8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208dcf0
	ctx.lr = 0x820B7AC0;
	sub_8208DCF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7ae8
	if (ctx.cr6.eq) goto loc_820B7AE8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,1364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820b7ae8
	if (!ctx.cr6.eq) goto loc_820B7AE8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_820B7ADC:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7888
	ctx.lr = 0x820B7AE8;
	sub_820B7888(ctx, base);
loc_820B7AE8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8208e198
	ctx.lr = 0x820B7AF0;
	sub_8208E198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b7b78
	if (ctx.cr6.eq) goto loc_820B7B78;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r24,r30,2088
	ctx.r24.s64 = ctx.r30.s64 + 2088;
	// addi r29,r11,-28816
	ctx.r29.s64 = ctx.r11.s64 + -28816;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// lwz r26,1908(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1908);
	// li r28,16
	ctx.r28.s64 = 16;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,13
	ctx.r25.s64 = 13;
loc_820B7B20:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820d63a8
	ctx.lr = 0x820B7B30;
	sub_820D63A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7b64
	if (ctx.cr6.eq) goto loc_820B7B64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x820a75f0
	ctx.lr = 0x820B7B44;
	sub_820A75F0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820b7b54
	if (ctx.cr6.eq) goto loc_820B7B54;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x820b7b64
	if (!ctx.cr6.eq) goto loc_820B7B64;
loc_820B7B54:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_820B7B64:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x820b7b20
	if (!ctx.cr0.eq) goto loc_820B7B20;
loc_820B7B78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820B7B80"))) PPC_WEAK_FUNC(sub_820B7B80);
PPC_FUNC_IMPL(__imp__sub_820B7B80) {
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
	// addi r3,r3,1248
	ctx.r3.s64 = ctx.r3.s64 + 1248;
	// bne cr6,0x820b7b9c
	if (!ctx.cr6.eq) goto loc_820B7B9C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B7B9C:
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// ori r4,r4,20545
	ctx.r4.u64 = ctx.r4.u64 | 20545;
	// bl 0x821882d0
	ctx.lr = 0x820B7BA8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7bc0
	if (ctx.cr6.eq) goto loc_820B7BC0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7bc0
	if (ctx.cr6.eq) goto loc_820B7BC0;
	// bl 0x820b7a70
	ctx.lr = 0x820B7BC0;
	sub_820B7A70(ctx, base);
loc_820B7BC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7BD0"))) PPC_WEAK_FUNC(sub_820B7BD0);
PPC_FUNC_IMPL(__imp__sub_820B7BD0) {
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
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20545
	ctx.r4.u64 = ctx.r4.u64 | 20545;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B7BFC;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,11840
	ctx.r10.s64 = ctx.r11.s64 + 11840;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820b7808
	ctx.lr = 0x820B7C18;
	sub_820B7808(ctx, base);
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

__attribute__((alias("__imp__sub_820B7C34"))) PPC_WEAK_FUNC(sub_820B7C34);
PPC_FUNC_IMPL(__imp__sub_820B7C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7C38"))) PPC_WEAK_FUNC(sub_820B7C38);
PPC_FUNC_IMPL(__imp__sub_820B7C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820B7C40;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r25,-8540(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820b7db4
	if (ctx.cr6.eq) goto loc_820B7DB4;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820b7c90
	if (!ctx.cr6.eq) goto loc_820B7C90;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,1364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1364);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x820b7c90
	if (!ctx.cr6.eq) goto loc_820B7C90;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
loc_820B7C90:
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820b7cbc
	if (!ctx.cr6.eq) goto loc_820B7CBC;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r8,1360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1360);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x820b7cbc
	if (!ctx.cr6.eq) goto loc_820B7CBC;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// stw r10,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r10.u32);
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
loc_820B7CBC:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8208e198
	ctx.lr = 0x820B7CC4;
	sub_8208E198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b7ce4
	if (!ctx.cr6.eq) goto loc_820B7CE4;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820B7CD8:
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b7cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B7CD8;
loc_820B7CE4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r29,48
	ctx.r31.s64 = ctx.r29.s64 + 48;
	// li r27,18
	ctx.r27.s64 = 18;
	// li r26,60
	ctx.r26.s64 = 60;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// addi r28,r11,29344
	ctx.r28.s64 = ctx.r11.s64 + 29344;
loc_820B7CFC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b7da8
	if (ctx.cr6.eq) goto loc_820B7DA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b7da0
	if (!ctx.cr6.eq) goto loc_820B7DA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// bl 0x820b7888
	ctx.lr = 0x820B7D28;
	sub_820B7888(ctx, base);
	// addi r3,r25,2088
	ctx.r3.s64 = ctx.r25.s64 + 2088;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820d63a8
	ctx.lr = 0x820B7D38;
	sub_820D63A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b7d98
	if (ctx.cr6.eq) goto loc_820B7D98;
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b7da8
	if (ctx.cr6.eq) goto loc_820B7DA8;
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r10.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// lbz r7,11(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// twllei r7,0
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r6,r9,r7
	ctx.r6.s32 = ctx.r9.s32 / ctx.r7.s32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// andc r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r3,-1
	// b 0x820b7da4
	goto loc_820B7DA4;
loc_820B7D98:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x820b7da8
	goto loc_820B7DA8;
loc_820B7DA0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820B7DA4:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820B7DA8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x820b7cfc
	if (!ctx.cr0.eq) goto loc_820B7CFC;
loc_820B7DB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820B7DBC"))) PPC_WEAK_FUNC(sub_820B7DBC);
PPC_FUNC_IMPL(__imp__sub_820B7DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7DC0"))) PPC_WEAK_FUNC(sub_820B7DC0);
PPC_FUNC_IMPL(__imp__sub_820B7DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,404(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x820b7dec
	if (!ctx.cr6.gt) goto loc_820B7DEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// blr 
	return;
loc_820B7DEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7E10"))) PPC_WEAK_FUNC(sub_820B7E10);
PPC_FUNC_IMPL(__imp__sub_820B7E10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r10,-4984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4984);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820b7e30
	if (ctx.cr6.eq) goto loc_820B7E30;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820B7E30:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B7E38"))) PPC_WEAK_FUNC(sub_820B7E38);
PPC_FUNC_IMPL(__imp__sub_820B7E38) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f30,11872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11872);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82186ab0
	ctx.lr = 0x820B7E7C;
	sub_82186AB0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82186ab0
	ctx.lr = 0x820B7EA0;
	sub_82186AB0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820B7ED0;
	sub_820804F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82187e38
	ctx.lr = 0x820B7EDC;
	sub_82187E38(ctx, base);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// bne cr6,0x820b7ef8
	if (!ctx.cr6.eq) goto loc_820B7EF8;
	// addi r5,r10,32
	ctx.r5.s64 = ctx.r10.s64 + 32;
	// b 0x820b7f04
	goto loc_820B7F04;
loc_820B7EF8:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820B7F04:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82289c50
	ctx.lr = 0x820B7F10;
	sub_82289C50(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,1820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b7f38
	if (ctx.cr6.eq) goto loc_820B7F38;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B7F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B7F38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_820B7F54"))) PPC_WEAK_FUNC(sub_820B7F54);
PPC_FUNC_IMPL(__imp__sub_820B7F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7F58"))) PPC_WEAK_FUNC(sub_820B7F58);
PPC_FUNC_IMPL(__imp__sub_820B7F58) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b7f80
	if (ctx.cr6.eq) goto loc_820B7F80;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// bl 0x820804f8
	ctx.lr = 0x820B7F80;
	sub_820804F8(ctx, base);
loc_820B7F80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
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
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_820B7FBC"))) PPC_WEAK_FUNC(sub_820B7FBC);
PPC_FUNC_IMPL(__imp__sub_820B7FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B7FC0"))) PPC_WEAK_FUNC(sub_820B7FC0);
PPC_FUNC_IMPL(__imp__sub_820B7FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B7FC8;
	sub_8224878C(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249928
	ctx.lr = 0x820B7FD0;
	sub_82249928(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b829c
	if (ctx.cr6.eq) goto loc_820B829C;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b829c
	if (ctx.cr6.eq) goto loc_820B829C;
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// ld r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// ld r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// ld r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// lfs f0,1880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x821871d8
	ctx.lr = 0x820B8048;
	sub_821871D8(ctx, base);
	// lfs f12,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fsubs f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// bl 0x82249c38
	ctx.lr = 0x820B805C;
	sub_82249C38(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lfs f0,2140(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820b8080
	if (!ctx.cr6.gt) goto loc_820B8080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x820b809c
	goto loc_820B809C;
loc_820B8080:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820b809c
	if (!ctx.cr6.lt) goto loc_820B809C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_820B809C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820b80bc
	if (ctx.cr6.gt) goto loc_820B80BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11884);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820b80c0
	if (!ctx.cr6.lt) goto loc_820B80C0;
loc_820B80BC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_820B80C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x820b80e0
	if (ctx.cr6.gt) goto loc_820B80E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x820b80e4
	if (!ctx.cr6.lt) goto loc_820B80E4;
loc_820B80E0:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f0.f64;
loc_820B80E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8138
	if (ctx.cr6.eq) goto loc_820B8138;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,8608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82186ab0
	ctx.lr = 0x820B8110;
	sub_82186AB0(ctx, base);
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82186ab0
	ctx.lr = 0x820B8130;
	sub_82186AB0(ctx, base);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
loc_820B8138:
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f29,84(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// lfs f30,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820b8160
	if (!ctx.cr6.lt) goto loc_820B8160;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820B8160:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// fsubs f31,f29,f13
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x820b8178
	if (!ctx.cr6.lt) goto loc_820B8178;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_820B8178:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b81a8
	if (ctx.cr6.eq) goto loc_820B81A8;
	// lfs f2,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x820b81a0
	if (!ctx.cr6.lt) goto loc_820B81A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82186ab0
	ctx.lr = 0x820B819C;
	sub_82186AB0(ctx, base);
	// b 0x820b81a8
	goto loc_820B81A8;
loc_820B81A0:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820B81A8:
	// lfs f2,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bge cr6,0x820b81c4
	if (!ctx.cr6.lt) goto loc_820B81C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82186ab0
	ctx.lr = 0x820B81C0;
	sub_82186AB0(ctx, base);
	// b 0x820b81cc
	goto loc_820B81CC;
loc_820B81C4:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820B81CC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82187e38
	ctx.lr = 0x820B8210;
	sub_82187E38(ctx, base);
	// stfs f28,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// bl 0x82187e38
	ctx.lr = 0x820B8230;
	sub_82187E38(ctx, base);
loc_820B8230:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b828c
	if (ctx.cr6.eq) goto loc_820B828C;
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// lwz r8,1728(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x820b828c
	if (!ctx.cr6.gt) goto loc_820B828C;
	// lis r4,19526
	ctx.r4.s64 = 1279655936;
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// ori r4,r4,16707
	ctx.r4.u64 = ctx.r4.u64 | 16707;
	// bl 0x821882d0
	ctx.lr = 0x820B8260;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b828c
	if (ctx.cr6.eq) goto loc_820B828C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b828c
	if (ctx.cr6.eq) goto loc_820B828C;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820b828c
	if (ctx.cr6.eq) goto loc_820B828C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B828C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B828C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x820B8298;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820B829C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// beq cr6,0x820b82f8
	if (ctx.cr6.eq) goto loc_820B82F8;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,8608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8608);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82186ab0
	ctx.lr = 0x820B82D8;
	sub_82186AB0(ctx, base);
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82186ab0
	ctx.lr = 0x820B82F4;
	sub_82186AB0(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
loc_820B82F8:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f30,80(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x820b8318
	if (!ctx.cr6.lt) goto loc_820B8318;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_820B8318:
	// lfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// fsubs f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x820b8330
	if (!ctx.cr6.lt) goto loc_820B8330;
	// fneg f30,f30
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
loc_820B8330:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8374
	if (ctx.cr6.eq) goto loc_820B8374;
	// lfs f2,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x820b8358
	if (!ctx.cr6.lt) goto loc_820B8358;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82186ab0
	ctx.lr = 0x820B8354;
	sub_82186AB0(ctx, base);
	// b 0x820b8374
	goto loc_820B8374;
loc_820B8358:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b836c
	if (ctx.cr6.eq) goto loc_820B836C;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820b8370
	goto loc_820B8370;
loc_820B836C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820B8370:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820B8374:
	// lfs f2,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, ctx.f30.f64);
	// bge cr6,0x820b8390
	if (!ctx.cr6.lt) goto loc_820B8390;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82186ab0
	ctx.lr = 0x820B838C;
	sub_82186AB0(ctx, base);
	// b 0x820b83ac
	goto loc_820B83AC;
loc_820B8390:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b83a4
	if (ctx.cr6.eq) goto loc_820B83A4;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820b83a8
	goto loc_820B83A8;
loc_820B83A4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820B83A8:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820B83AC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82187e38
	ctx.lr = 0x820B83F0;
	sub_82187E38(ctx, base);
	// stfs f28,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// bl 0x82187e38
	ctx.lr = 0x820B8410;
	sub_82187E38(ctx, base);
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x820b8230
	if (!ctx.cr6.eq) goto loc_820B8230;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b8230
	if (!ctx.cr6.eq) goto loc_820B8230;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B8440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82249974
	ctx.lr = 0x820B844C;
	sub_82249974(ctx, base);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820B8450"))) PPC_WEAK_FUNC(sub_820B8450);
PPC_FUNC_IMPL(__imp__sub_820B8450) {
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
	// lis r4,19535
	ctx.r4.s64 = 1280245760;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20299
	ctx.r4.u64 = ctx.r4.u64 | 20299;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B847C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r8,r11,11900
	ctx.r8.s64 = ctx.r11.s64 + 11900;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r7,11892
	ctx.r4.s64 = ctx.r7.s64 + 11892;
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
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B84E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b8500
	if (!ctx.cr6.eq) goto loc_820B8500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820B8500:
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x820B850C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b851c
	if (ctx.cr6.eq) goto loc_820B851C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820b8520
	goto loc_820B8520;
loc_820B851C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820B8520:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b8538
	if (!ctx.cr6.eq) goto loc_820B8538;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820B8538:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x820B8544;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8554
	if (ctx.cr6.eq) goto loc_820B8554;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820b8558
	goto loc_820B8558;
loc_820B8554:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B8558:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820B8588"))) PPC_WEAK_FUNC(sub_820B8588);
PPC_FUNC_IMPL(__imp__sub_820B8588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820B8590;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8224991c
	ctx.lr = 0x820B8598;
	sub_8224991C(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8c0c
	if (ctx.cr6.eq) goto loc_820B8C0C;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
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
	// lwz r5,660(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f26,8608(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8608);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,11964(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11964);
	ctx.f25.f64 = double(temp.f32);
	// addi r29,r11,-7560
	ctx.r29.s64 = ctx.r11.s64 + -7560;
	// lfs f29,11960(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11960);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f27,11888(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11888);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x820b8714
	if (!ctx.cr6.eq) goto loc_820B8714;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8638
	if (ctx.cr6.eq) goto loc_820B8638;
	// lwz r11,1732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b8714
	if (ctx.cr6.eq) goto loc_820B8714;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11956);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8208e5d8
	ctx.lr = 0x820B8610;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b861c
	if (ctx.cr6.eq) goto loc_820B861C;
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_820B861C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// lfs f1,1880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1880);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82186ab0
	ctx.lr = 0x820B8634;
	sub_82186AB0(ctx, base);
	// b 0x820b8714
	goto loc_820B8714;
loc_820B8638:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b8714
	if (ctx.cr6.eq) goto loc_820B8714;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f27
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820b867c
	if (!ctx.cr6.gt) goto loc_820B867C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x820b8698
	goto loc_820B8698;
loc_820B867C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820b8698
	if (!ctx.cr6.lt) goto loc_820B8698;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_820B8698:
	// lfs f0,404(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ac340
	ctx.lr = 0x820B86AC;
	sub_820AC340(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x820b86b8
	if (!ctx.cr6.lt) goto loc_820B86B8;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820B86B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,3316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ble cr6,0x820b86d8
	if (!ctx.cr6.gt) goto loc_820B86D8;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// b 0x820b86dc
	goto loc_820B86DC;
loc_820B86D8:
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f25.f64;
loc_820B86DC:
	// bl 0x82186ab0
	ctx.lr = 0x820B86E0;
	sub_82186AB0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820b7dc0
	ctx.lr = 0x820B86EC;
	sub_820B7DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ac340
	ctx.lr = 0x820B86F8;
	sub_820AC340(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x820b8704
	if (!ctx.cr6.lt) goto loc_820B8704;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820B8704:
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// bge cr6,0x820b8714
	if (!ctx.cr6.lt) goto loc_820B8714;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_820B8714:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,1732(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1732);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820b8bbc
	if (ctx.cr6.eq) goto loc_820B8BBC;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b8bbc
	if (!ctx.cr6.eq) goto loc_820B8BBC;
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b8bbc
	if (ctx.cr6.eq) goto loc_820B8BBC;
	// lwz r11,1356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b8bbc
	if (ctx.cr6.eq) goto loc_820B8BBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B8758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b8780
	if (ctx.cr6.eq) goto loc_820B8780;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,1284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// lwz r9,1284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8bbc
	if (ctx.cr6.eq) goto loc_820B8BBC;
loc_820B8780:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8208e5d8
	ctx.lr = 0x820B8788;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b87c0
	if (!ctx.cr6.eq) goto loc_820B87C0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8208e820
	ctx.lr = 0x820B8798;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b87c0
	if (!ctx.cr6.eq) goto loc_820B87C0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x822e6048
	ctx.lr = 0x820B87A8;
	sub_822E6048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b87c0
	if (!ctx.cr6.eq) goto loc_820B87C0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,888(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b8bbc
	if (ctx.cr6.eq) goto loc_820B8BBC;
loc_820B87C0:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x820b87e4
	if (ctx.cr6.gt) goto loc_820B87E4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8208e820
	ctx.lr = 0x820B87DC;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b8c0c
	if (!ctx.cr6.eq) goto loc_820B8C0C;
loc_820B87E4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// lfs f2,1884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,432(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r8,432(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82249c38
	ctx.lr = 0x820B8808;
	sub_82249C38(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820b887c
	if (ctx.cr6.eq) goto loc_820B887C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// ld r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// ld r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lwz r11,1732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1732);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// bl 0x821871d8
	ctx.lr = 0x820B8864;
	sub_821871D8(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82249c38
	ctx.lr = 0x820B8878;
	sub_82249C38(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
loc_820B887C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,11884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11884);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820b88ac
	if (ctx.cr6.eq) goto loc_820B88AC;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// ble cr6,0x820b88a0
	if (!ctx.cr6.gt) goto loc_820B88A0;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// b 0x820b88ac
	goto loc_820B88AC;
loc_820B88A0:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x820b88ac
	if (!ctx.cr6.lt) goto loc_820B88AC;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_820B88AC:
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r27,24(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// ld r25,40(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
	// std r27,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r27.u64);
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r26.u64);
	// std r25,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r25.u64);
	// std r24,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r24.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// bl 0x82096f18
	ctx.lr = 0x820B8914;
	sub_82096F18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,1732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// bl 0x820ef968
	ctx.lr = 0x820B8920;
	sub_820EF968(ctx, base);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820B8944;
	sub_8208EA90(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// beq cr6,0x820b8978
	if (ctx.cr6.eq) goto loc_820B8978;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a42e0
	ctx.lr = 0x820B8974;
	sub_820A42E0(ctx, base);
	// b 0x820b8988
	goto loc_820B8988;
loc_820B8978:
	// stfs f28,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,96(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_820B8988:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x820B8998;
	sub_82249C38(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11952);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x820b8a04
	if (ctx.cr6.lt) goto loc_820B8A04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820b89f4
	if (ctx.cr6.gt) goto loc_820B89F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820b89d4
	if (!ctx.cr6.gt) goto loc_820B89D4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x820b8a08
	goto loc_820B8A08;
loc_820B89D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820b89ec
	if (!ctx.cr6.lt) goto loc_820B89EC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x820b8a08
	goto loc_820B8A08;
loc_820B89EC:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// ble cr6,0x820b89fc
	if (!ctx.cr6.gt) goto loc_820B89FC;
loc_820B89F4:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x820b8a08
	goto loc_820B8A08;
loc_820B89FC:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x820b8a08
	if (!ctx.cr6.lt) goto loc_820B8A08;
loc_820B8A04:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_820B8A08:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8a34
	if (ctx.cr6.eq) goto loc_820B8A34;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x82186ab0
	ctx.lr = 0x820B8A28;
	sub_82186AB0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
loc_820B8A34:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8a64
	if (ctx.cr6.eq) goto loc_820B8A64;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11880);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f1,f1,f13
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820b8a68
	if (!ctx.cr6.gt) goto loc_820B8A68;
	// fmr f30,f25
	ctx.f30.f64 = ctx.f25.f64;
	// b 0x820b8a68
	goto loc_820B8A68;
loc_820B8A64:
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
loc_820B8A68:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stfs f30,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b8ae4
	if (!ctx.cr6.eq) goto loc_820B8AE4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8aa0
	if (ctx.cr6.eq) goto loc_820B8AA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11280);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x820b8ae0
	goto loc_820B8AE0;
loc_820B8AA0:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f0,f13,f13,f12
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x820b8acc
	if (!ctx.cr6.gt) goto loc_820B8ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11940);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x820b8ae0
	goto loc_820B8AE0;
loc_820B8ACC:
	// lfs f13,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820B8AE0:
	// bl 0x82186ab0
	ctx.lr = 0x820B8AE4;
	sub_82186AB0(ctx, base);
loc_820B8AE4:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,9064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9064);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f11,f13,f13,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820b8b24
	if (!ctx.cr6.gt) goto loc_820B8B24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,11936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11936);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82186ab0
	ctx.lr = 0x820B8B24;
	sub_82186AB0(ctx, base);
loc_820B8B24:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820B8B44;
	sub_820804F8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82187e38
	ctx.lr = 0x820B8B50;
	sub_82187E38(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bne cr6,0x820b8b6c
	if (!ctx.cr6.eq) goto loc_820B8B6C;
	// addi r5,r10,32
	ctx.r5.s64 = ctx.r10.s64 + 32;
	// b 0x820b8b78
	goto loc_820B8B78;
loc_820B8B6C:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820B8B78:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82289c50
	ctx.lr = 0x820B8B84;
	sub_82289C50(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,1820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820b8c0c
	if (ctx.cr6.eq) goto loc_820B8C0C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B8BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249968
	ctx.lr = 0x820B8BB8;
	sub_82249968(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_820B8BBC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b8be0
	if (ctx.cr6.eq) goto loc_820B8BE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7e38
	ctx.lr = 0x820B8BD0;
	sub_820B7E38(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249968
	ctx.lr = 0x820B8BDC;
	sub_82249968(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_820B8BE0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// bl 0x820804f8
	ctx.lr = 0x820B8BEC;
	sub_820804F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f28,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f28,52(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f28,48(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
loc_820B8C0C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249968
	ctx.lr = 0x820B8C18;
	sub_82249968(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820B8C1C"))) PPC_WEAK_FUNC(sub_820B8C1C);
PPC_FUNC_IMPL(__imp__sub_820B8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8C20"))) PPC_WEAK_FUNC(sub_820B8C20);
PPC_FUNC_IMPL(__imp__sub_820B8C20) {
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
	ctx.lr = 0x820B8C38;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820b8c50
	if (ctx.cr6.eq) goto loc_820B8C50;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82183448
	ctx.lr = 0x820B8C4C;
	sub_82183448(ctx, base);
	// b 0x820b8c58
	goto loc_820B8C58;
loc_820B8C50:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x820B8C58;
	sub_821845A0(ctx, base);
loc_820B8C58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8c7c
	if (ctx.cr6.eq) goto loc_820B8C7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b8450
	ctx.lr = 0x820B8C68;
	sub_820B8450(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B8C7C:
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

__attribute__((alias("__imp__sub_820B8C94"))) PPC_WEAK_FUNC(sub_820B8C94);
PPC_FUNC_IMPL(__imp__sub_820B8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B8C98"))) PPC_WEAK_FUNC(sub_820B8C98);
PPC_FUNC_IMPL(__imp__sub_820B8C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820B8CA0;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r4,19526
	ctx.r4.s64 = 1279655936;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16707
	ctx.r4.u64 = ctx.r4.u64 | 16707;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820B8CC8;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r10,r11,8276
	ctx.r10.s64 = ctx.r11.s64 + 8276;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82185740
	ctx.lr = 0x820B8CF0;
	sub_82185740(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r9,11976
	ctx.r5.s64 = ctx.r9.s64 + 11976;
	// addi r4,r8,11968
	ctx.r4.s64 = ctx.r8.s64 + 11968;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// lfs f31,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r3,11892
	ctx.r4.s64 = ctx.r3.s64 + 11892;
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
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B8D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820b8d78
	if (!ctx.cr6.eq) goto loc_820B8D78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820B8D78:
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x820B8D84;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b8d94
	if (ctx.cr6.eq) goto loc_820B8D94;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820b8d98
	goto loc_820B8D98;
loc_820B8D94:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B8D98:
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

