#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823772B8"))) PPC_WEAK_FUNC(sub_823772B8);
PPC_FUNC_IMPL(__imp__sub_823772B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823772C0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,168
	ctx.r30.s64 = ctx.r3.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x823772D4;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82377354
	if (ctx.cr0.eq) goto loc_82377354;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x823772E4;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82377354
	if (ctx.cr6.lt) goto loc_82377354;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823897f8
	ctx.lr = 0x82377310;
	sub_823897F8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lbz r29,101(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// bl 0x82357358
	ctx.lr = 0x82377324;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237733C;
	sub_82376E20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82377344;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8237734C;
	sub_8237D130(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389828
	ctx.lr = 0x82377354;
	sub_82389828(ctx, base);
loc_82377354:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82377360"))) PPC_WEAK_FUNC(sub_82377360);
PPC_FUNC_IMPL(__imp__sub_82377360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82377368;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823773a0
	if (ctx.cr6.gt) goto loc_823773A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823770b8
	ctx.lr = 0x82377390;
	sub_823770B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823773a0
	if (!ctx.cr0.eq) goto loc_823773A0;
loc_82377398:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823773c8
	goto loc_823773C8;
loc_823773A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377398
	if (ctx.cr6.eq) goto loc_82377398;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823773C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823773D0"))) PPC_WEAK_FUNC(sub_823773D0);
PPC_FUNC_IMPL(__imp__sub_823773D0) {
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
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r31,-4856(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4856);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237740c
	if (ctx.cr6.eq) goto loc_8237740C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823771f0
	ctx.lr = 0x823773FC;
	sub_823771F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82377404;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4856(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4856, ctx.r11.u32);
loc_8237740C:
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

__attribute__((alias("__imp__sub_82377424"))) PPC_WEAK_FUNC(sub_82377424);
PPC_FUNC_IMPL(__imp__sub_82377424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377428"))) PPC_WEAK_FUNC(sub_82377428);
PPC_FUNC_IMPL(__imp__sub_82377428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82377430;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82377574
	if (ctx.cr6.eq) goto loc_82377574;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x82377574
	if (ctx.cr6.eq) goto loc_82377574;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82377574
	if (ctx.cr6.eq) goto loc_82377574;
	// bl 0x82376a08
	ctx.lr = 0x82377458;
	sub_82376A08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823774e0
	if (ctx.cr0.eq) goto loc_823774E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823896f8
	ctx.lr = 0x82377468;
	sub_823896F8(ctx, base);
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,15
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 15);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x82377488;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x823774A0;
	sub_82376E20(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823774b8
	if (!ctx.cr6.eq) goto loc_823774B8;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x823774d4
	if (ctx.cr6.eq) goto loc_823774D4;
loc_823774B8:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_823774D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x823774DC;
	sub_82389828(ctx, base);
	// b 0x82377510
	goto loc_82377510;
loc_823774E0:
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x823774f4
	if (!ctx.cr6.eq) goto loc_823774F4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82377510
	if (ctx.cr6.eq) goto loc_82377510;
loc_823774F4:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82377510:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377548
	if (!ctx.cr6.gt) goto loc_82377548;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82377524:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8237d170
	ctx.lr = 0x82377534;
	sub_8237D170(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82377524
	if (ctx.cr6.lt) goto loc_82377524;
loc_82377548:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d130
	ctx.lr = 0x82377550;
	sub_8237D130(ctx, base);
	// addi r31,r31,168
	ctx.r31.s64 = ctx.r31.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x8237755C;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237756c
	if (ctx.cr0.eq) goto loc_8237756C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x8237756C;
	sub_8237D170(ctx, base);
loc_8237756C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82377578
	goto loc_82377578;
loc_82377574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82377578:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82377580"))) PPC_WEAK_FUNC(sub_82377580);
PPC_FUNC_IMPL(__imp__sub_82377580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82377588;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823775a8
	if (!ctx.cr6.eq) goto loc_823775A8;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823775b8
	if (ctx.cr6.eq) goto loc_823775B8;
loc_823775A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823775b8
	if (ctx.cr6.eq) goto loc_823775B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82377688
	goto loc_82377688;
loc_823775B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377600
	if (!ctx.cr6.gt) goto loc_82377600;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823775CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823775ec
	if (ctx.cr6.eq) goto loc_823775EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823881d8
	ctx.lr = 0x823775E4;
	sub_823881D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357128
	ctx.lr = 0x823775EC;
	sub_82357128(ctx, base);
loc_823775EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823775cc
	if (ctx.cr6.lt) goto loc_823775CC;
loc_82377600:
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x8237760C;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237761c
	if (ctx.cr0.eq) goto loc_8237761C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x8237761C;
	sub_8237D170(ctx, base);
loc_8237761C:
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82377628;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82377638
	if (ctx.cr0.eq) goto loc_82377638;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x82377638;
	sub_8237D170(ctx, base);
loc_82377638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823826f8
	ctx.lr = 0x82377640;
	sub_823826F8(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x823826f8
	ctx.lr = 0x82377648;
	sub_823826F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823763c0
	ctx.lr = 0x82377650;
	sub_823763C0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82377668
	if (!ctx.cr6.eq) goto loc_82377668;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82377684
	if (ctx.cr6.eq) goto loc_82377684;
loc_82377668:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82377684:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82377688:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82377690"))) PPC_WEAK_FUNC(sub_82377690);
PPC_FUNC_IMPL(__imp__sub_82377690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82377698;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377714
	if (!ctx.cr6.gt) goto loc_82377714;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823776B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82377700
	if (ctx.cr6.eq) goto loc_82377700;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82388398
	ctx.lr = 0x823776D4;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82377700
	if (!ctx.cr0.eq) goto loc_82377700;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x82377700
	if (ctx.cr6.eq) goto loc_82377700;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82388318
	ctx.lr = 0x823776F8;
	sub_82388318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82377720
	if (ctx.cr0.eq) goto loc_82377720;
loc_82377700:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823776b4
	if (ctx.cr6.lt) goto loc_823776B4;
loc_82377714:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82377718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82377720:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82377718
	goto loc_82377718;
}

__attribute__((alias("__imp__sub_82377728"))) PPC_WEAK_FUNC(sub_82377728);
PPC_FUNC_IMPL(__imp__sub_82377728) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377748:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8237775c
	if (!ctx.cr6.eq) goto loc_8237775C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8237775C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82377748
	if (ctx.cr6.lt) goto loc_82377748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377770"))) PPC_WEAK_FUNC(sub_82377770);
PPC_FUNC_IMPL(__imp__sub_82377770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82377778;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823777b8
	if (!ctx.cr6.gt) goto loc_823777B8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82377798:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82388420
	ctx.lr = 0x823777A4;
	sub_82388420(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82377798
	if (ctx.cr6.lt) goto loc_82377798;
loc_823777B8:
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823777CC"))) PPC_WEAK_FUNC(sub_823777CC);
PPC_FUNC_IMPL(__imp__sub_823777CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823777D0"))) PPC_WEAK_FUNC(sub_823777D0);
PPC_FUNC_IMPL(__imp__sub_823777D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823777D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237783c
	if (!ctx.cr6.gt) goto loc_8237783C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823777F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x82377804;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82377828
	if (!ctx.cr0.eq) goto loc_82377828;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82377828
	if (ctx.cr6.eq) goto loc_82377828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388368
	ctx.lr = 0x82377820;
	sub_82388368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82377848
	if (ctx.cr0.eq) goto loc_82377848;
loc_82377828:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823777f4
	if (ctx.cr6.lt) goto loc_823777F4;
loc_8237783C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82377840:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82377848:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82377840
	goto loc_82377840;
}

__attribute__((alias("__imp__sub_82377850"))) PPC_WEAK_FUNC(sub_82377850);
PPC_FUNC_IMPL(__imp__sub_82377850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82377858;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82377930
	if (ctx.cr6.eq) goto loc_82377930;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82377930
	if (!ctx.cr6.eq) goto loc_82377930;
	// lhz r11,50(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// lhz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r9,558(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 558);
	// lhz r8,556(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 556);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rotlwi r10,r9,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82377930
	if (!ctx.cr6.eq) goto loc_82377930;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377918
	if (!ctx.cr6.gt) goto loc_82377918;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823778BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82388398
	ctx.lr = 0x823778C8;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823778e0
	if (ctx.cr0.eq) goto loc_823778E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x823882a8
	ctx.lr = 0x823778E0;
	sub_823882A8(ctx, base);
loc_823778E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82388298
	ctx.lr = 0x823778EC;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82377904
	if (!ctx.cr0.eq) goto loc_82377904;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82388378
	ctx.lr = 0x82377904;
	sub_82388378(ctx, base);
loc_82377904:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823778bc
	if (ctx.cr6.lt) goto loc_823778BC;
loc_82377918:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r28,556(r31)
	PPC_STORE_U16(ctx.r31.u32 + 556, ctx.r28.u16);
	// sth r28,558(r31)
	PPC_STORE_U16(ctx.r31.u32 + 558, ctx.r28.u16);
	// stb r10,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r10.u8);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_82377930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82377938"))) PPC_WEAK_FUNC(sub_82377938);
PPC_FUNC_IMPL(__imp__sub_82377938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82377940;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r27,r3,400
	ctx.r27.s64 = ctx.r3.s64 + 400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82377960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82377aa0
	if (ctx.cr0.eq) goto loc_82377AA0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82377a28
	if (ctx.cr6.eq) goto loc_82377A28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237798c
	if (!ctx.cr6.gt) goto loc_8237798C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82377a28
	if (!ctx.cr6.gt) goto loc_82377A28;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82377a28
	if (ctx.cr6.eq) goto loc_82377A28;
loc_8237798C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237799c
	if (!ctx.cr6.eq) goto loc_8237799C;
	// lhz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// b 0x823779a0
	goto loc_823779A0;
loc_8237799C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823779A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377a7c
	if (!ctx.cr6.gt) goto loc_82377A7C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823779B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82377a10
	if (ctx.cr6.eq) goto loc_82377A10;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x823883f8
	ctx.lr = 0x823779D4;
	sub_823883F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82377a10
	if (ctx.cr0.eq) goto loc_82377A10;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,412(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r25,92(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82388550
	ctx.lr = 0x823779F8;
	sub_82388550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82389ec0
	ctx.lr = 0x82377A10;
	sub_82389EC0(ctx, base);
loc_82377A10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823779b4
	if (ctx.cr6.lt) goto loc_823779B4;
	// b 0x82377a7c
	goto loc_82377A7C;
loc_82377A28:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377a7c
	if (!ctx.cr6.gt) goto loc_82377A7C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82377A3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,572(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,412(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// bl 0x82388550
	ctx.lr = 0x82377A50;
	sub_82388550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82389ec0
	ctx.lr = 0x82377A68;
	sub_82389EC0(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82377a3c
	if (ctx.cr6.lt) goto loc_82377A3C;
loc_82377A7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82377A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_82377AA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82377AAC"))) PPC_WEAK_FUNC(sub_82377AAC);
PPC_FUNC_IMPL(__imp__sub_82377AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377AB0"))) PPC_WEAK_FUNC(sub_82377AB0);
PPC_FUNC_IMPL(__imp__sub_82377AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82377AB8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82377b04
	if (ctx.cr6.eq) goto loc_82377B04;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377AE4:
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82377b30
	if (ctx.cr6.eq) goto loc_82377B30;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82377ae4
	if (ctx.cr6.lt) goto loc_82377AE4;
loc_82377B04:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823570e0
	ctx.lr = 0x82377B0C;
	sub_823570E0(ctx, base);
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x823570f0
	ctx.lr = 0x82377B14;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82377b38
	if (ctx.cr0.eq) goto loc_82377B38;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lbz r4,-32764(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32764);
	// bl 0x82388160
	ctx.lr = 0x82377B28;
	sub_82388160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82377b3c
	goto loc_82377B3C;
loc_82377B30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82377b90
	goto loc_82377B90;
loc_82377B38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82377B3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x823570e0
	ctx.lr = 0x82377B48;
	sub_823570E0(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// bl 0x82377360
	ctx.lr = 0x82377B6C;
	sub_82377360(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x82377b88
	if (ctx.cr6.lt) goto loc_82377B88;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82377B88:
	// bl 0x823882f8
	ctx.lr = 0x82377B8C;
	sub_823882F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82377B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82377B98"))) PPC_WEAK_FUNC(sub_82377B98);
PPC_FUNC_IMPL(__imp__sub_82377B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82377bd4
	if (ctx.cr6.eq) goto loc_82377BD4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377BB4:
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82377bdc
	if (ctx.cr6.eq) goto loc_82377BDC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82377bb4
	if (ctx.cr6.lt) goto loc_82377BB4;
loc_82377BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82377BDC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377BE8"))) PPC_WEAK_FUNC(sub_82377BE8);
PPC_FUNC_IMPL(__imp__sub_82377BE8) {
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
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82377c88
	if (!ctx.cr6.eq) goto loc_82377C88;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82377c4c
	if (!ctx.cr6.gt) goto loc_82377C4C;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82377C28:
	// lwzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x82377c3c
	if (!ctx.cr6.eq) goto loc_82377C3C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82377C3C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82377c28
	if (ctx.cr6.lt) goto loc_82377C28;
loc_82377C4C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82377c88
	if (!ctx.cr6.eq) goto loc_82377C88;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82377c78
	if (ctx.cr6.eq) goto loc_82377C78;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stw r6,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r6.u32);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r6,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r6.u32);
loc_82377C78:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// bl 0x8237d170
	ctx.lr = 0x82377C88;
	sub_8237D170(ctx, base);
loc_82377C88:
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

__attribute__((alias("__imp__sub_82377C9C"))) PPC_WEAK_FUNC(sub_82377C9C);
PPC_FUNC_IMPL(__imp__sub_82377C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377CA0"))) PPC_WEAK_FUNC(sub_82377CA0);
PPC_FUNC_IMPL(__imp__sub_82377CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82377CA8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r24,255
	ctx.r24.s64 = 255;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82377cfc
	if (ctx.cr6.eq) goto loc_82377CFC;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82377CD4:
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r5,92(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82377cf8
	if (ctx.cr6.eq) goto loc_82377CF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82377cd4
	if (ctx.cr6.lt) goto loc_82377CD4;
	// b 0x82377cfc
	goto loc_82377CFC;
loc_82377CF8:
	// lbz r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
loc_82377CFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x82377D14;
	sub_82358508(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82377d54
	if (ctx.cr6.eq) goto loc_82377D54;
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377d4c
	if (ctx.cr6.eq) goto loc_82377D4C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82377D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82377D4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82377df4
	goto loc_82377DF4;
loc_82377D54:
	// addi r30,r25,2
	ctx.r30.s64 = ctx.r25.s64 + 2;
	// addi r5,r29,-2
	ctx.r5.s64 = ctx.r29.s64 + -2;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x8240a900
	ctx.lr = 0x82377D6C;
	sub_8240A900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82377dc8
	if (ctx.cr0.eq) goto loc_82377DC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,32168
	ctx.r27.s64 = ctx.r11.s64 + 32168;
loc_82377D7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82358538
	ctx.lr = 0x82377D8C;
	sub_82358538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// beq 0x82377dc4
	if (ctx.cr0.eq) goto loc_82377DC4;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82377dc8
	if (!ctx.cr6.lt) goto loc_82377DC8;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// subf r5,r28,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240a900
	ctx.lr = 0x82377DB8;
	sub_8240A900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82377d7c
	if (!ctx.cr0.eq) goto loc_82377D7C;
	// b 0x82377dc8
	goto loc_82377DC8;
loc_82377DC4:
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_82377DC8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82377df0
	if (!ctx.cr6.gt) goto loc_82377DF0;
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377df0
	if (ctx.cr6.eq) goto loc_82377DF0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82377DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82377DF0:
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
loc_82377DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82377DFC"))) PPC_WEAK_FUNC(sub_82377DFC);
PPC_FUNC_IMPL(__imp__sub_82377DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377E00"))) PPC_WEAK_FUNC(sub_82377E00);
PPC_FUNC_IMPL(__imp__sub_82377E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82377E08;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82377e68
	if (!ctx.cr6.gt) goto loc_82377E68;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82377E34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r27,r29,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82377e54
	if (ctx.cr6.eq) goto loc_82377E54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823881d8
	ctx.lr = 0x82377E4C;
	sub_823881D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82357128
	ctx.lr = 0x82377E54;
	sub_82357128(ctx, base);
loc_82377E54:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82377e34
	if (ctx.cr6.lt) goto loc_82377E34;
loc_82377E68:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r25,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r25.u32);
	// beq cr6,0x82377ea0
	if (ctx.cr6.eq) goto loc_82377EA0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82377E7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82377e94
	if (ctx.cr6.eq) goto loc_82377E94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x82377360
	ctx.lr = 0x82377E94;
	sub_82377360(ctx, base);
loc_82377E94:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82377e7c
	if (!ctx.cr0.eq) goto loc_82377E7C;
loc_82377EA0:
	// stb r24,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r24.u8);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82358590
	ctx.lr = 0x82377EB4;
	sub_82358590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x823764f8
	ctx.lr = 0x82377EC4;
	sub_823764F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377ab0
	ctx.lr = 0x82377ED4;
	sub_82377AB0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82377eec
	if (!ctx.cr6.eq) goto loc_82377EEC;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82377f08
	if (ctx.cr6.eq) goto loc_82377F08;
loc_82377EEC:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82377F08:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d130
	ctx.lr = 0x82377F10;
	sub_8237D130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82377F1C"))) PPC_WEAK_FUNC(sub_82377F1C);
PPC_FUNC_IMPL(__imp__sub_82377F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377F20"))) PPC_WEAK_FUNC(sub_82377F20);
PPC_FUNC_IMPL(__imp__sub_82377F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82377F28;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82377b98
	ctx.lr = 0x82377F44;
	sub_82377B98(ctx, base);
	// lwz r27,136(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r26,140(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x823882e8
	ctx.lr = 0x82377F54;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82377f70
	if (!ctx.cr0.eq) goto loc_82377F70;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// bge cr6,0x82377f70
	if (!ctx.cr6.lt) goto loc_82377F70;
loc_82377F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82378044
	goto loc_82378044;
loc_82377F70:
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 7, ctx.xer);
	// bne cr6,0x82377f68
	if (!ctx.cr6.eq) goto loc_82377F68;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82377f68
	if (!ctx.cr6.eq) goto loc_82377F68;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82377f68
	if (ctx.cr6.eq) goto loc_82377F68;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82377f68
	if (!ctx.cr6.eq) goto loc_82377F68;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// blt cr6,0x82378034
	if (ctx.cr6.lt) goto loc_82378034;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389838
	ctx.lr = 0x82377FA8;
	sub_82389838(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389878
	ctx.lr = 0x82377FB4;
	sub_82389878(ctx, base);
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// stb r29,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// bl 0x823882e8
	ctx.lr = 0x82377FC8;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82378028
	if (!ctx.cr0.eq) goto loc_82378028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357358
	ctx.lr = 0x82377FD8;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x823766e8
	ctx.lr = 0x82377FEC;
	sub_823766E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82378000
	if (!ctx.cr0.eq) goto loc_82378000;
loc_82377FF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x82377FFC;
	sub_82389828(ctx, base);
	// b 0x82377f68
	goto loc_82377F68;
loc_82378000:
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823766e8
	ctx.lr = 0x82378014;
	sub_823766E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_82378018:
	// beq 0x82377ff4
	if (ctx.cr0.eq) goto loc_82377FF4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x82378024;
	sub_82389828(ctx, base);
	// b 0x82378040
	goto loc_82378040;
loc_82378028:
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x82378018
	goto loc_82378018;
loc_82378034:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82378044
	if (ctx.cr0.eq) goto loc_82378044;
loc_82378040:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82378044:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8237804C"))) PPC_WEAK_FUNC(sub_8237804C);
PPC_FUNC_IMPL(__imp__sub_8237804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82378050"))) PPC_WEAK_FUNC(sub_82378050);
PPC_FUNC_IMPL(__imp__sub_82378050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82378058;
	sub_8224877C(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8368(r1)
	ea = -8368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// addi r28,r3,416
	ctx.r28.s64 = ctx.r3.s64 + 416;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82378080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82378098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf. r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823780a8
	if (!ctx.cr0.eq) goto loc_823780A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823781bc
	goto loc_823781BC;
loc_823780A8:
	// lwz r11,576(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 576);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823781a8
	if (!ctx.cr6.gt) goto loc_823781A8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_823780BC:
	// lwz r11,572(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 572);
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82378194
	if (!ctx.cr6.eq) goto loc_82378194;
loc_823780D4:
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823585a0
	ctx.lr = 0x823780E0;
	sub_823585A0(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8238a150
	ctx.lr = 0x823780F0;
	sub_8238A150(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82378194
	if (!ctx.cr0.gt) goto loc_82378194;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823780FC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82377ca0
	ctx.lr = 0x82378110;
	sub_82377CA0(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x823780d4
	if (!ctx.cr6.gt) goto loc_823780D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388560
	ctx.lr = 0x8237812C;
	sub_82388560(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823898a0
	ctx.lr = 0x82378134;
	sub_823898A0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// subf r10,r31,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823893c0
	ctx.lr = 0x82378150;
	sub_823893C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823893f0
	ctx.lr = 0x82378158;
	sub_823893F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388560
	ctx.lr = 0x8237816C;
	sub_82388560(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823893f0
	ctx.lr = 0x82378174;
	sub_823893F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// bl 0x823ab568
	ctx.lr = 0x82378188;
	sub_823AB568(ctx, base);
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x823780fc
	if (ctx.cr6.gt) goto loc_823780FC;
	// b 0x823780d4
	goto loc_823780D4;
loc_82378194:
	// lwz r11,576(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 576);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823780bc
	if (ctx.cr6.lt) goto loc_823780BC;
loc_823781A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823781BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823781BC:
	// addi r1,r1,8368
	ctx.r1.s64 = ctx.r1.s64 + 8368;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823781C4"))) PPC_WEAK_FUNC(sub_823781C4);
PPC_FUNC_IMPL(__imp__sub_823781C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823781C8"))) PPC_WEAK_FUNC(sub_823781C8);
PPC_FUNC_IMPL(__imp__sub_823781C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823781D0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82389530
	ctx.lr = 0x823781EC;
	sub_82389530(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823897b0
	ctx.lr = 0x823781FC;
	sub_823897B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823893e0
	ctx.lr = 0x82378208;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82377ab0
	ctx.lr = 0x82378218;
	sub_82377AB0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82378258
	if (ctx.cr0.eq) goto loc_82378258;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x823893e0
	ctx.lr = 0x82378230;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82378244
	if (!ctx.cr6.eq) goto loc_82378244;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82378254
	goto loc_82378254;
loc_82378244:
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_82378254:
	// sth r11,72(r30)
	PPC_STORE_U16(ctx.r30.u32 + 72, ctx.r11.u16);
loc_82378258:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82378264;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82378270"))) PPC_WEAK_FUNC(sub_82378270);
PPC_FUNC_IMPL(__imp__sub_82378270) {
	PPC_FUNC_PROLOGUE();
	// b 0x82377b98
	sub_82377B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82378274"))) PPC_WEAK_FUNC(sub_82378274);
PPC_FUNC_IMPL(__imp__sub_82378274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82378278"))) PPC_WEAK_FUNC(sub_82378278);
PPC_FUNC_IMPL(__imp__sub_82378278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82378280;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82377b98
	ctx.lr = 0x82378290;
	sub_82377B98(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r29,140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823785fc
	if (!ctx.cr6.eq) goto loc_823785FC;
	// bl 0x823882e8
	ctx.lr = 0x823782A8;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823782f0
	if (!ctx.cr0.eq) goto loc_823782F0;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// bne cr6,0x823785fc
	if (!ctx.cr6.eq) goto loc_823785FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377690
	ctx.lr = 0x823782C0;
	sub_82377690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823785fc
	if (ctx.cr0.eq) goto loc_823785FC;
	// lhz r11,106(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 106);
	// lhz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 104);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823785fc
	if (ctx.cr6.lt) goto loc_823785FC;
loc_823782F0:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823785fc
	if (!ctx.cr6.eq) goto loc_823785FC;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823785fc
	if (!ctx.cr6.eq) goto loc_823785FC;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82378330
	if (ctx.cr6.eq) goto loc_82378330;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82378330
	if (!ctx.cr6.eq) goto loc_82378330;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x823785fc
	goto loc_823785FC;
loc_82378330:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x823785fc
	if (ctx.cr6.eq) goto loc_823785FC;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x823785fc
	if (ctx.cr6.eq) goto loc_823785FC;
	// addi r26,r31,432
	ctx.r26.s64 = ctx.r31.s64 + 432;
	// lbz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823886c0
	ctx.lr = 0x82378354;
	sub_823886C0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,480
	ctx.r30.s64 = ctx.r31.s64 + 480;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388788
	ctx.lr = 0x82378370;
	sub_82388788(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x823783b0
	if (!ctx.cr6.gt) goto loc_823783B0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82378390
	if (!ctx.cr6.eq) goto loc_82378390;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823783a8
	if (ctx.cr6.eq) goto loc_823783A8;
loc_82378390:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_823783A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82378600
	goto loc_82378600;
loc_823783B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82378480
	if (ctx.cr6.eq) goto loc_82378480;
	// lhz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82376918
	ctx.lr = 0x823783C8;
	sub_82376918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823783d8
	if (ctx.cr0.eq) goto loc_823783D8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
loc_823783D8:
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823890b0
	ctx.lr = 0x823783F0;
	sub_823890B0(ctx, base);
	// b 0x82378464
	goto loc_82378464;
loc_823783F4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823898d8
	ctx.lr = 0x823783FC;
	sub_823898D8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// bl 0x82388928
	ctx.lr = 0x8237840C;
	sub_82388928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82389900
	ctx.lr = 0x8237841C;
	sub_82389900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r29,101(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// bl 0x82388928
	ctx.lr = 0x8237842C;
	sub_82388928(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82378444;
	sub_82376E20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82388750
	ctx.lr = 0x82378458;
	sub_82388750(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389828
	ctx.lr = 0x82378464;
	sub_82389828(ctx, base);
loc_82378464:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823783f4
	if (ctx.cr6.eq) goto loc_823783F4;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// b 0x82378530
	goto loc_82378530;
loc_82378480:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82378494
	if (ctx.cr6.eq) goto loc_82378494;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82378528
	if (!ctx.cr6.eq) goto loc_82378528;
loc_82378494:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82389488
	ctx.lr = 0x8237849C;
	sub_82389488(ctx, base);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// bl 0x82388c10
	ctx.lr = 0x823784B4;
	sub_82388C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// bl 0x82376918
	ctx.lr = 0x823784C0;
	sub_82376918(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823784d4
	if (ctx.cr0.eq) goto loc_823784D4;
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
loc_823784D4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r29,93(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// bl 0x82357358
	ctx.lr = 0x823784E0;
	sub_82357358(ctx, base);
	// lbz r28,92(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823766e8
	ctx.lr = 0x823784FC;
	sub_823766E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82378518
	if (ctx.cr0.eq) goto loc_82378518;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82388898
	ctx.lr = 0x82378518;
	sub_82388898(ctx, base);
loc_82378518:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82389828
	ctx.lr = 0x82378528;
	sub_82389828(ctx, base);
loc_82378528:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82378530:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237853C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823886c0
	ctx.lr = 0x8237854C;
	sub_823886C0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823785fc
	if (ctx.cr0.eq) goto loc_823785FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388788
	ctx.lr = 0x82378560;
	sub_82388788(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x823785fc
	if (ctx.cr6.gt) goto loc_823785FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823890b0
	ctx.lr = 0x82378580;
	sub_823890B0(ctx, base);
	// b 0x823785ec
	goto loc_823785EC;
loc_82378584:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823898d8
	ctx.lr = 0x8237858C;
	sub_823898D8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// bl 0x82388928
	ctx.lr = 0x8237859C;
	sub_82388928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82389900
	ctx.lr = 0x823785AC;
	sub_82389900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r29,117(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// bl 0x82388928
	ctx.lr = 0x823785BC;
	sub_82388928(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x823785D4;
	sub_82376E20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388750
	ctx.lr = 0x823785E0;
	sub_82388750(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82389828
	ctx.lr = 0x823785EC;
	sub_82389828(ctx, base);
loc_823785EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82378584
	if (ctx.cr6.eq) goto loc_82378584;
loc_823785FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82378600:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82378608"))) PPC_WEAK_FUNC(sub_82378608);
PPC_FUNC_IMPL(__imp__sub_82378608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82378610;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82377b98
	ctx.lr = 0x82378620;
	sub_82377B98(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8237891c
	if (!ctx.cr6.eq) goto loc_8237891C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82378890
	if (ctx.cr6.eq) goto loc_82378890;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823787f4
	if (ctx.cr6.eq) goto loc_823787F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82378734
	if (ctx.cr6.eq) goto loc_82378734;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8237891c
	if (!ctx.cr6.eq) goto loc_8237891C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377728
	ctx.lr = 0x82378660;
	sub_82377728(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237891c
	if (!ctx.cr6.eq) goto loc_8237891C;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d170
	ctx.lr = 0x82378674;
	sub_8237D170(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8237868c
	if (!ctx.cr6.eq) goto loc_8237868C;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823786a8
	if (ctx.cr6.eq) goto loc_823786A8;
loc_8237868C:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_823786A8:
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823786c0
	if (ctx.cr6.lt) goto loc_823786C0;
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// b 0x823786c4
	goto loc_823786C4;
loc_823786C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823786C4:
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// ble cr6,0x82378720
	if (!ctx.cr6.gt) goto loc_82378720;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82378714
	if (!ctx.cr6.gt) goto loc_82378714;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823786F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8237d130
	ctx.lr = 0x82378700;
	sub_8237D130(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823786f0
	if (ctx.cr6.lt) goto loc_823786F0;
loc_82378714:
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8237d130
	ctx.lr = 0x8237871C;
	sub_8237D130(ctx, base);
	// b 0x8237891c
	goto loc_8237891C;
loc_82378720:
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8237d170
	ctx.lr = 0x82378728;
	sub_8237D170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8237891c
	goto loc_8237891C;
loc_82378734:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377728
	ctx.lr = 0x82378744;
	sub_82377728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377728
	ctx.lr = 0x82378754;
	sub_82377728(ctx, base);
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8237891c
	if (!ctx.cr6.eq) goto loc_8237891C;
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
	// beq cr6,0x823787ac
	if (ctx.cr6.eq) goto loc_823787AC;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237877C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lhz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lhz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82378798
	if (!ctx.cr6.gt) goto loc_82378798;
	// sth r10,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r10.u16);
loc_82378798:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237877c
	if (ctx.cr6.lt) goto loc_8237877C;
loc_823787AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389558
	ctx.lr = 0x823787B4;
	sub_82389558(ctx, base);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x823787C8;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x823787E0;
	sub_82376E20(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82389828
	ctx.lr = 0x823787F0;
	sub_82389828(ctx, base);
	// b 0x8237891c
	goto loc_8237891C;
loc_823787F4:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377728
	ctx.lr = 0x82378804;
	sub_82377728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377728
	ctx.lr = 0x82378814;
	sub_82377728(ctx, base);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377728
	ctx.lr = 0x82378824;
	sub_82377728(ctx, base);
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8237891c
	if (!ctx.cr6.eq) goto loc_8237891C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82378880
	if (ctx.cr6.eq) goto loc_82378880;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82378844:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8237886c
	if (!ctx.cr6.eq) goto loc_8237886C;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8237886c
	if (ctx.cr6.eq) goto loc_8237886C;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8237886C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82378844
	if (ctx.cr6.lt) goto loc_82378844;
loc_82378880:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// b 0x8237891c
	goto loc_8237891C;
loc_82378890:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237891c
	if (!ctx.cr6.eq) goto loc_8237891C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82378914
	if (ctx.cr6.eq) goto loc_82378914;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823788B8:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82378900
	if (ctx.cr6.eq) goto loc_82378900;
	// addi r10,r10,47
	ctx.r10.s64 = ctx.r10.s64 + 47;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm. r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8237891c
	if (ctx.cr0.eq) goto loc_8237891C;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r10,r10,47
	ctx.r10.s64 = ctx.r10.s64 + 47;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// sth r10,16(r9)
	PPC_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
loc_82378900:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823788b8
	if (ctx.cr6.lt) goto loc_823788B8;
loc_82378914:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8237891C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82378928"))) PPC_WEAK_FUNC(sub_82378928);
PPC_FUNC_IMPL(__imp__sub_82378928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82378930;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,140(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x823789d8
	if (ctx.cr0.eq) goto loc_823789D8;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x82378a50
	if (!ctx.cr6.eq) goto loc_82378A50;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8237899c
	if (ctx.cr6.eq) goto loc_8237899C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
loc_82378970:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8237898c
	if (ctx.cr6.lt) goto loc_8237898C;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bgt cr6,0x8237898c
	if (ctx.cr6.gt) goto loc_8237898C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8237898C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82378970
	if (ctx.cr6.lt) goto loc_82378970;
loc_8237899C:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82378a50
	if (!ctx.cr6.eq) goto loc_82378A50;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823789b8
	if (!ctx.cr6.eq) goto loc_823789B8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823789cc
	if (ctx.cr6.eq) goto loc_823789CC;
loc_823789B8:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
loc_823789CC:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d170
	ctx.lr = 0x823789D4;
	sub_8237D170(ctx, base);
	// b 0x82378a50
	goto loc_82378A50;
loc_823789D8:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r28,24
	ctx.r28.s64 = 24;
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
loc_823789E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82378a3c
	if (ctx.cr6.lt) goto loc_82378A3C;
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82378a3c
	if (!ctx.cr6.eq) goto loc_82378A3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x82378A0C;
	sub_82377B98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823881e0
	ctx.lr = 0x82378A18;
	sub_823881E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388200
	ctx.lr = 0x82378A2C;
	sub_82388200(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sthx r10,r28,r26
	PPC_STORE_U16(ctx.r28.u32 + ctx.r26.u32, ctx.r10.u16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82378A3C:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r28,88
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 88, ctx.xer);
	// blt cr6,0x823789e4
	if (ctx.cr6.lt) goto loc_823789E4;
loc_82378A50:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82378aa8
	if (ctx.cr6.eq) goto loc_82378AA8;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82378A68;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82378aa8
	if (ctx.cr0.eq) goto loc_82378AA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,200(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x8237d218
	ctx.lr = 0x82378A7C;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82378aa8
	if (ctx.cr6.lt) goto loc_82378AA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82378AA4;
	sub_823A86F8(ctx, base);
	// stw r27,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r27.u32);
loc_82378AA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82378AB4"))) PPC_WEAK_FUNC(sub_82378AB4);
PPC_FUNC_IMPL(__imp__sub_82378AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82378AB8"))) PPC_WEAK_FUNC(sub_82378AB8);
PPC_FUNC_IMPL(__imp__sub_82378AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82378AC0;
	sub_82248780(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,480
	ctx.r28.s64 = ctx.r3.s64 + 480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388750
	ctx.lr = 0x82378AD8;
	sub_82388750(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82378ccc
	if (!ctx.cr6.eq) goto loc_82378CCC;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82378AEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388750
	ctx.lr = 0x82378AF8;
	sub_82388750(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388928
	ctx.lr = 0x82378B08;
	sub_82388928(ctx, base);
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82389400
	ctx.lr = 0x82378B14;
	sub_82389400(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82378ca4
	if (ctx.cr6.eq) goto loc_82378CA4;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82378b40
	if (ctx.cr6.eq) goto loc_82378B40;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82378ca4
	if (ctx.cr6.eq) goto loc_82378CA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82388550
	ctx.lr = 0x82378B3C;
	sub_82388550(ctx, base);
	// b 0x82378cc0
	goto loc_82378CC0;
loc_82378B40:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82378ca4
	if (ctx.cr0.eq) goto loc_82378CA4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823898d8
	ctx.lr = 0x82378B54;
	sub_823898D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x82389900
	ctx.lr = 0x82378B64;
	sub_82389900(ctx, base);
	// lbz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bne cr6,0x82378bb8
	if (!ctx.cr6.eq) goto loc_82378BB8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823896b0
	ctx.lr = 0x82378B7C;
	sub_823896B0(ctx, base);
	// lbz r11,93(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// addi r4,r30,5
	ctx.r4.s64 = ctx.r30.s64 + 5;
	// addi r11,r11,251
	ctx.r11.s64 = ctx.r11.s64 + 251;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823896e8
	ctx.lr = 0x82378B94;
	sub_823896E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,166(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82377b98
	ctx.lr = 0x82378BA4;
	sub_82377B98(ctx, base);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82388200
	ctx.lr = 0x82378BAC;
	sub_82388200(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82389828
	ctx.lr = 0x82378BB4;
	sub_82389828(ctx, base);
	// b 0x82378c9c
	goto loc_82378C9C;
loc_82378BB8:
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// blt cr6,0x82378c7c
	if (ctx.cr6.lt) goto loc_82378C7C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82389838
	ctx.lr = 0x82378BC8;
	sub_82389838(ctx, base);
	// lbz r11,93(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// addi r4,r30,5
	ctx.r4.s64 = ctx.r30.s64 + 5;
	// addi r11,r11,251
	ctx.r11.s64 = ctx.r11.s64 + 251;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82389890
	ctx.lr = 0x82378BE0;
	sub_82389890(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// bne cr6,0x82378c30
	if (!ctx.cr6.eq) goto loc_82378C30;
	// lbz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82378c70
	if (!ctx.cr6.eq) goto loc_82378C70;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,21
	ctx.r4.s64 = ctx.r30.s64 + 21;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x82378C0C;
	sub_82358508(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82377b98
	ctx.lr = 0x82378C1C;
	sub_82377B98(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x823882a8
	ctx.lr = 0x82378C2C;
	sub_823882A8(ctx, base);
	// b 0x82378c70
	goto loc_82378C70;
loc_82378C30:
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// addi r6,r30,21
	ctx.r6.s64 = ctx.r30.s64 + 21;
	// lbz r5,126(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// addi r3,r29,448
	ctx.r3.s64 = ctx.r29.s64 + 448;
	// lbz r4,125(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// bl 0x82388fd0
	ctx.lr = 0x82378C4C;
	sub_82388FD0(ctx, base);
	// lbz r11,126(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lbz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82378c60
	if (!ctx.cr6.eq) goto loc_82378C60;
	// stw r26,596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 596, ctx.r26.u32);
loc_82378C60:
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_82378C70:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82389828
	ctx.lr = 0x82378C78;
	sub_82389828(ctx, base);
	// b 0x82378c9c
	goto loc_82378C9C;
loc_82378C7C:
	// lbz r11,93(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r30,5
	ctx.r6.s64 = ctx.r30.s64 + 5;
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r11,r11,251
	ctx.r11.s64 = ctx.r11.s64 + 251;
	// addi r3,r29,448
	ctx.r3.s64 = ctx.r29.s64 + 448;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82388fd0
	ctx.lr = 0x82378C9C;
	sub_82388FD0(ctx, base);
loc_82378C9C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82389828
	ctx.lr = 0x82378CA4;
	sub_82389828(ctx, base);
loc_82378CA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388550
	ctx.lr = 0x82378CB0;
	sub_82388550(ctx, base);
	// subf r4,r3,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subf r5,r31,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r31.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823885b0
	ctx.lr = 0x82378CC0;
	sub_823885B0(ctx, base);
loc_82378CC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82378aec
	if (ctx.cr6.eq) goto loc_82378AEC;
loc_82378CCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82378CD8"))) PPC_WEAK_FUNC(sub_82378CD8);
PPC_FUNC_IMPL(__imp__sub_82378CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82378CE0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82377b98
	ctx.lr = 0x82378CF0;
	sub_82377B98(ctx, base);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r29,140(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823882e8
	ctx.lr = 0x82378D00;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82378d10
	if (!ctx.cr0.eq) goto loc_82378D10;
loc_82378D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82378dd4
	goto loc_82378DD4;
loc_82378D10:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82378d20
	if (ctx.cr6.eq) goto loc_82378D20;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bne cr6,0x82378d08
	if (!ctx.cr6.eq) goto loc_82378D08;
loc_82378D20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82378d08
	if (!ctx.cr6.eq) goto loc_82378D08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389588
	ctx.lr = 0x82378D30;
	sub_82389588(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x82378D3C;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82378D54;
	sub_82376E20(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,156
	ctx.r29.s64 = ctx.r31.s64 + 156;
	// sth r30,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r30.u16);
	// sth r30,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r30,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r30.u16);
	// sth r30,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r30.u16);
	// sth r30,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r30.u16);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// sth r30,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r30.u16);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// bl 0x82357080
	ctx.lr = 0x82378D84;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82378d94
	if (!ctx.cr0.eq) goto loc_82378D94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x82378D94;
	sub_8237D130(ctx, base);
loc_82378D94:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r10,6
	ctx.r10.s64 = 6;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82378db0
	if (!ctx.cr6.eq) goto loc_82378DB0;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82378dc4
	if (ctx.cr6.eq) goto loc_82378DC4;
loc_82378DB0:
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
loc_82378DC4:
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x82378DD0;
	sub_82389828(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82378DD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82378DDC"))) PPC_WEAK_FUNC(sub_82378DDC);
PPC_FUNC_IMPL(__imp__sub_82378DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82378DE0"))) PPC_WEAK_FUNC(sub_82378DE0);
PPC_FUNC_IMPL(__imp__sub_82378DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82378DE8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82377b98
	ctx.lr = 0x82378DF8;
	sub_82377B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823882e8
	ctx.lr = 0x82378E00;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82378ea0
	if (ctx.cr0.eq) goto loc_82378EA0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82378ea0
	if (!ctx.cr6.eq) goto loc_82378EA0;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82378ea0
	if (!ctx.cr6.eq) goto loc_82378EA0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823895b0
	ctx.lr = 0x82378E28;
	sub_823895B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x82378E34;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82378E4C;
	sub_82376E20(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82378e6c
	if (!ctx.cr6.eq) goto loc_82378E6C;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82378e88
	if (ctx.cr6.eq) goto loc_82378E88;
loc_82378E6C:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82378E88:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d130
	ctx.lr = 0x82378E90;
	sub_8237D130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x82378E98;
	sub_82389828(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82378ea4
	goto loc_82378EA4;
loc_82378EA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82378EA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82378EAC"))) PPC_WEAK_FUNC(sub_82378EAC);
PPC_FUNC_IMPL(__imp__sub_82378EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82378EB0"))) PPC_WEAK_FUNC(sub_82378EB0);
PPC_FUNC_IMPL(__imp__sub_82378EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82378EB8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82377b98
	ctx.lr = 0x82378EC8;
	sub_82377B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823882e8
	ctx.lr = 0x82378ED0;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82378ee0
	if (ctx.cr0.eq) goto loc_82378EE0;
loc_82378ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82378fc0
	goto loc_82378FC0;
loc_82378EE0:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82378ed8
	if (!ctx.cr6.eq) goto loc_82378ED8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82378ed8
	if (!ctx.cr6.eq) goto loc_82378ED8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389638
	ctx.lr = 0x82378F00;
	sub_82389638(ctx, base);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lhz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lhz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82378f28
	if (!ctx.cr6.lt) goto loc_82378F28;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_82378F28:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// bl 0x82357358
	ctx.lr = 0x82378F4C;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82378F64;
	sub_82376E20(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r10,12
	ctx.r10.s64 = 12;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82378f80
	if (!ctx.cr6.eq) goto loc_82378F80;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// beq cr6,0x82378f98
	if (ctx.cr6.eq) goto loc_82378F98;
loc_82378F80:
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
loc_82378F98:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// sth r10,104(r30)
	PPC_STORE_U16(ctx.r30.u32 + 104, ctx.r10.u16);
	// sth r11,106(r30)
	PPC_STORE_U16(ctx.r30.u32 + 106, ctx.r11.u16);
	// bl 0x8237d130
	ctx.lr = 0x82378FB4;
	sub_8237D130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x82378FBC;
	sub_82389828(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82378FC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82378FC8"))) PPC_WEAK_FUNC(sub_82378FC8);
PPC_FUNC_IMPL(__imp__sub_82378FC8) {
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
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82377b98
	ctx.lr = 0x82378FE8;
	sub_82377B98(ctx, base);
	// bl 0x823882e8
	ctx.lr = 0x82378FEC;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82378ffc
	if (!ctx.cr0.eq) goto loc_82378FFC;
loc_82378FF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823790a4
	goto loc_823790A4;
loc_82378FFC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82378ff4
	if (!ctx.cr6.eq) goto loc_82378FF4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82378ff4
	if (!ctx.cr6.eq) goto loc_82378FF4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389638
	ctx.lr = 0x8237901C;
	sub_82389638(ctx, base);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// bne cr6,0x8237904c
	if (!ctx.cr6.eq) goto loc_8237904C;
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// addi r10,r10,32767
	ctx.r10.s64 = ctx.r10.s64 + 32767;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r10,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// b 0x8237905c
	goto loc_8237905C;
loc_8237904C:
	// lhz r9,54(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
loc_8237905C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82357358
	ctx.lr = 0x82379070;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82379088;
	sub_82376E20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// bl 0x82389828
	ctx.lr = 0x823790A0;
	sub_82389828(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823790A4:
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

__attribute__((alias("__imp__sub_823790BC"))) PPC_WEAK_FUNC(sub_823790BC);
PPC_FUNC_IMPL(__imp__sub_823790BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823790C0"))) PPC_WEAK_FUNC(sub_823790C0);
PPC_FUNC_IMPL(__imp__sub_823790C0) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823790e8
	if (ctx.cr6.eq) goto loc_823790E8;
loc_823790E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237912c
	goto loc_8237912C;
loc_823790E8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823790e0
	if (ctx.cr6.eq) goto loc_823790E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378278
	ctx.lr = 0x823790FC;
	sub_82378278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823790e0
	if (ctx.cr0.eq) goto loc_823790E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82376e88
	ctx.lr = 0x8237910C;
	sub_82376E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82379128
	if (ctx.cr0.eq) goto loc_82379128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377938
	ctx.lr = 0x8237911C;
	sub_82377938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8237912c
	if (ctx.cr0.eq) goto loc_8237912C;
loc_82379128:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237912C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82379140"))) PPC_WEAK_FUNC(sub_82379140);
PPC_FUNC_IMPL(__imp__sub_82379140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82379148;
	sub_8224877C(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379164;
	sub_82377B98(ctx, base);
	// lwz r26,136(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r25,140(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x823882e8
	ctx.lr = 0x82379174;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379190
	if (!ctx.cr0.eq) goto loc_82379190;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// bge cr6,0x82379190
	if (!ctx.cr6.lt) goto loc_82379190;
loc_82379188:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823792cc
	goto loc_823792CC;
loc_82379190:
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// bne cr6,0x82379188
	if (!ctx.cr6.eq) goto loc_82379188;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82379188
	if (!ctx.cr6.eq) goto loc_82379188;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82379188
	if (ctx.cr6.eq) goto loc_82379188;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// blt cr6,0x823792ac
	if (ctx.cr6.lt) goto loc_823792AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389838
	ctx.lr = 0x823791BC;
	sub_82389838(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389878
	ctx.lr = 0x823791C8;
	sub_82389878(ctx, base);
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// rotlwi r11,r11,15
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 15);
	// stb r29,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r29.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// bl 0x823882e8
	ctx.lr = 0x823791F0;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379250
	if (!ctx.cr0.eq) goto loc_82379250;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82379210
	if (ctx.cr6.eq) goto loc_82379210;
	// bl 0x82389828
	ctx.lr = 0x8237920C;
	sub_82389828(ctx, base);
	// b 0x82379188
	goto loc_82379188;
loc_82379210:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// bl 0x82357358
	ctx.lr = 0x8237921C;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82379234;
	sub_82376E20(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82376e20
	ctx.lr = 0x8237924C;
	sub_82376E20(ctx, base);
	// b 0x823792a0
	goto loc_823792A0;
loc_82379250:
	// li r4,276
	ctx.r4.s64 = 276;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823585a0
	ctx.lr = 0x8237925C;
	sub_823585A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357358
	ctx.lr = 0x82379264;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82358508
	ctx.lr = 0x82379274;
	sub_82358508(ctx, base);
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82358508
	ctx.lr = 0x82379284;
	sub_82358508(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x82388fd0
	ctx.lr = 0x823792A0;
	sub_82388FD0(ctx, base);
loc_823792A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x823792A8;
	sub_82389828(ctx, base);
	// b 0x823792c8
	goto loc_823792C8;
loc_823792AC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x82388fd0
	ctx.lr = 0x823792C8;
	sub_82388FD0(ctx, base);
loc_823792C8:
	// clrlwi r3,r28,24
	ctx.r3.u64 = ctx.r28.u32 & 0xFF;
loc_823792CC:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823792D4"))) PPC_WEAK_FUNC(sub_823792D4);
PPC_FUNC_IMPL(__imp__sub_823792D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823792D8"))) PPC_WEAK_FUNC(sub_823792D8);
PPC_FUNC_IMPL(__imp__sub_823792D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823792E0;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,136(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82379324
	if (ctx.cr6.eq) goto loc_82379324;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82379324
	if (ctx.cr6.eq) goto loc_82379324;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x82379324
	if (ctx.cr6.eq) goto loc_82379324;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82379324
	if (ctx.cr6.eq) goto loc_82379324;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82379324
	if (ctx.cr6.eq) goto loc_82379324;
loc_8237931C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823793dc
	goto loc_823793DC;
loc_82379324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x82379330;
	sub_82377B98(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8237931c
	if (ctx.cr0.eq) goto loc_8237931C;
	// addi r11,r29,59
	ctx.r11.s64 = ctx.r29.s64 + 59;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8237931c
	if (!ctx.cr6.eq) goto loc_8237931C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823881e0
	ctx.lr = 0x82379358;
	sub_823881E0(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8237931c
	if (ctx.cr6.eq) goto loc_8237931C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823896b0
	ctx.lr = 0x82379368;
	sub_823896B0(ctx, base);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// stb r10,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x8237938C;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x823793A4;
	sub_82376E20(ctx, base);
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x823793bc
	if (!ctx.cr6.eq) goto loc_823793BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823882e8
	ctx.lr = 0x823793B4;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823793d0
	if (ctx.cr0.eq) goto loc_823793D0;
loc_823793BC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// addi r11,r11,59
	ctx.r11.s64 = ctx.r11.s64 + 59;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_823793D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x823793D8;
	sub_82389828(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823793DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823793E4"))) PPC_WEAK_FUNC(sub_823793E4);
PPC_FUNC_IMPL(__imp__sub_823793E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823793E8"))) PPC_WEAK_FUNC(sub_823793E8);
PPC_FUNC_IMPL(__imp__sub_823793E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823793F0;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823795c0
	if (!ctx.cr6.gt) goto loc_823795C0;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r24,-10003
	ctx.r24.s64 = -10003;
loc_82379418:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r26,r22,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823795ac
	if (ctx.cr6.eq) goto loc_823795AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388460
	ctx.lr = 0x82379438;
	sub_82388460(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388398
	ctx.lr = 0x82379440;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379504
	if (!ctx.cr0.eq) goto loc_82379504;
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82379504
	if (!ctx.cr6.eq) goto loc_82379504;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823882e8
	ctx.lr = 0x82379460;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823794fc
	if (!ctx.cr0.eq) goto loc_823794FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,16
	ctx.r27.s64 = 16;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823794cc
	if (!ctx.cr6.gt) goto loc_823794CC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82379480:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823794b8
	if (ctx.cr6.eq) goto loc_823794B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882e8
	ctx.lr = 0x82379498;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823794b8
	if (ctx.cr0.eq) goto loc_823794B8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823794b8
	if (!ctx.cr6.gt) goto loc_823794B8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_823794B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379480
	if (ctx.cr6.lt) goto loc_82379480;
loc_823794CC:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82379504
	if (!ctx.cr6.eq) goto loc_82379504;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82379140
	ctx.lr = 0x823794F8;
	sub_82379140(ctx, base);
	// b 0x82379504
	goto loc_82379504;
loc_823794FC:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82379504:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388398
	ctx.lr = 0x8237950C;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823795ac
	if (ctx.cr0.eq) goto loc_823795AC;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8237953c
	if (ctx.cr6.eq) goto loc_8237953C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388298
	ctx.lr = 0x82379528;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237953c
	if (!ctx.cr0.eq) goto loc_8237953C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823882a8
	ctx.lr = 0x8237953C;
	sub_823882A8(ctx, base);
loc_8237953C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237955c
	if (!ctx.cr6.eq) goto loc_8237955C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823795a0
	if (ctx.cr6.eq) goto loc_823795A0;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// b 0x8237958c
	goto loc_8237958C;
loc_8237955C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823882e8
	ctx.lr = 0x82379564;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823795a0
	if (ctx.cr0.eq) goto loc_823795A0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823795a0
	if (!ctx.cr6.eq) goto loc_823795A0;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823795a0
	if (!ctx.cr6.eq) goto loc_823795A0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,5
	ctx.r10.s64 = 5;
loc_8237958C:
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r25,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
	// stw r23,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r23.u32);
loc_823795A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823882f8
	ctx.lr = 0x823795AC;
	sub_823882F8(ctx, base);
loc_823795AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379418
	if (ctx.cr6.lt) goto loc_82379418;
loc_823795C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823795CC"))) PPC_WEAK_FUNC(sub_823795CC);
PPC_FUNC_IMPL(__imp__sub_823795CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823795D0"))) PPC_WEAK_FUNC(sub_823795D0);
PPC_FUNC_IMPL(__imp__sub_823795D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823795D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,558(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 558);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r9,562(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 562);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r8,556(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 556);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r7,560(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 560);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// rlwimi. r11,r5,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// bne 0x82379674
	if (!ctx.cr0.eq) goto loc_82379674;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r30,556(r3)
	PPC_STORE_U16(ctx.r3.u32 + 556, ctx.r30.u16);
	// sth r30,558(r3)
	PPC_STORE_U16(ctx.r3.u32 + 558, ctx.r30.u16);
	// sth r30,560(r3)
	PPC_STORE_U16(ctx.r3.u32 + 560, ctx.r30.u16);
	// sth r30,562(r3)
	PPC_STORE_U16(ctx.r3.u32 + 562, ctx.r30.u16);
	// stb r11,564(r3)
	PPC_STORE_U8(ctx.r3.u32 + 564, ctx.r11.u8);
	// bl 0x82377690
	ctx.lr = 0x8237962C;
	sub_82377690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823796b8
	if (ctx.cr0.eq) goto loc_823796B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82379668
	if (!ctx.cr6.gt) goto loc_82379668;
loc_82379644:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82388328
	ctx.lr = 0x82379654;
	sub_82388328(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379644
	if (ctx.cr6.lt) goto loc_82379644;
loc_82379668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378eb0
	ctx.lr = 0x82379670;
	sub_82378EB0(ctx, base);
	// b 0x823796b8
	goto loc_823796B8;
loc_82379674:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82379684
	if (ctx.cr6.eq) goto loc_82379684;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237968c
	if (!ctx.cr6.lt) goto loc_8237968C;
loc_82379684:
	// sth r4,560(r31)
	PPC_STORE_U16(ctx.r31.u32 + 560, ctx.r4.u16);
	// sth r5,562(r31)
	PPC_STORE_U16(ctx.r31.u32 + 562, ctx.r5.u16);
loc_8237968C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823796a0
	if (!ctx.cr6.gt) goto loc_823796A0;
	// sth r4,556(r31)
	PPC_STORE_U16(ctx.r31.u32 + 556, ctx.r4.u16);
	// sth r5,558(r31)
	PPC_STORE_U16(ctx.r31.u32 + 558, ctx.r5.u16);
	// b 0x823796b4
	goto loc_823796B4;
loc_823796A0:
	// bne cr6,0x823796b8
	if (!ctx.cr6.eq) goto loc_823796B8;
	// lbz r11,564(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 564);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823796b8
	if (!ctx.cr6.gt) goto loc_823796B8;
loc_823796B4:
	// stb r6,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r6.u8);
loc_823796B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823796C0"))) PPC_WEAK_FUNC(sub_823796C0);
PPC_FUNC_IMPL(__imp__sub_823796C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823796C8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82379808
	if (ctx.cr6.eq) goto loc_82379808;
	// lhz r11,210(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 210);
	// lhz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82379808
	if (!ctx.cr6.lt) goto loc_82379808;
	// addi r29,r3,216
	ctx.r29.s64 = ctx.r3.s64 + 216;
	// lwz r30,200(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d218
	ctx.lr = 0x823796FC;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82379808
	if (ctx.cr6.gt) goto loc_82379808;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379808
	if (ctx.cr6.lt) goto loc_82379808;
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lhz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237974c
	if (!ctx.cr6.lt) goto loc_8237974C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r11.u16);
	// b 0x823797f8
	goto loc_823797F8;
loc_8237974C:
	// lhz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 208);
	// lhz r11,210(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 210);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8237976c
	if (!ctx.cr6.gt) goto loc_8237976C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8237976C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389558
	ctx.lr = 0x82379774;
	sub_82389558(ctx, base);
	// sth r30,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r30.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r28,101(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// bl 0x82357358
	ctx.lr = 0x82379784;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237979C;
	sub_82376E20(ctx, base);
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823797d0
	if (ctx.cr6.lt) goto loc_823797D0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x823797d4
	goto loc_823797D4;
loc_823797D0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823797D4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// bl 0x82377b98
	ctx.lr = 0x823797E8;
	sub_82377B98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823882c8
	ctx.lr = 0x823797F0;
	sub_823882C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389828
	ctx.lr = 0x823797F8;
	sub_82389828(ctx, base);
loc_823797F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82379808;
	sub_823A86F8(ctx, base);
loc_82379808:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82379810"))) PPC_WEAK_FUNC(sub_82379810);
PPC_FUNC_IMPL(__imp__sub_82379810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82379818;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82389488
	ctx.lr = 0x82379834;
	sub_82389488(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237983C;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379848;
	sub_82377B98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823894b0
	ctx.lr = 0x8237985C;
	sub_823894B0(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,8(r27)
	PPC_STORE_U16(ctx.r27.u32 + 8, ctx.r11.u16);
	// bl 0x823893e0
	ctx.lr = 0x8237986C;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82388c10
	ctx.lr = 0x8237987C;
	sub_82388C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379888;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82379894"))) PPC_WEAK_FUNC(sub_82379894);
PPC_FUNC_IMPL(__imp__sub_82379894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82379898"))) PPC_WEAK_FUNC(sub_82379898);
PPC_FUNC_IMPL(__imp__sub_82379898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823798A0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823898d8
	ctx.lr = 0x823798BC;
	sub_823898D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823893e0
	ctx.lr = 0x823798C4;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x823798D0;
	sub_82377B98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389900
	ctx.lr = 0x823798E4;
	sub_82389900(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,8(r27)
	PPC_STORE_U16(ctx.r27.u32 + 8, ctx.r11.u16);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r11,r11,251
	ctx.r11.s64 = ctx.r11.s64 + 251;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823893e0
	ctx.lr = 0x82379900;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,5
	ctx.r6.s64 = ctx.r30.s64 + 5;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82388b38
	ctx.lr = 0x82379918;
	sub_82388B38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379924;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82379930"))) PPC_WEAK_FUNC(sub_82379930);
PPC_FUNC_IMPL(__imp__sub_82379930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82379938;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x82379950;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237995C;
	sub_82377B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x8237996C;
	sub_82377B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389558
	ctx.lr = 0x82379978;
	sub_82389558(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389720
	ctx.lr = 0x82379988;
	sub_82389720(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823799ec
	if (!ctx.cr6.eq) goto loc_823799EC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823799bc
	if (ctx.cr6.eq) goto loc_823799BC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823799bc
	if (ctx.cr6.eq) goto loc_823799BC;
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// sth r11,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r11.u16);
	// b 0x823799dc
	goto loc_823799DC;
loc_823799BC:
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823799d4
	if (!ctx.cr6.lt) goto loc_823799D4;
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
loc_823799D4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
loc_823799DC:
	// beq cr6,0x82379a54
	if (ctx.cr6.eq) goto loc_82379A54;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// b 0x82379a54
	goto loc_82379A54;
loc_823799EC:
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379a54
	if (ctx.cr6.lt) goto loc_82379A54;
	// lhz r9,54(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lhz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// or r30,r9,r7
	ctx.r30.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r29,r8,r5
	ctx.r29.u64 = ctx.r8.u64 | ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82379a3c
	if (!ctx.cr6.lt) goto loc_82379A3C;
	// sth r10,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r10.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882c8
	ctx.lr = 0x82379A3C;
	sub_823882C8(ctx, base);
loc_82379A3C:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// bge cr6,0x82379a4c
	if (!ctx.cr6.lt) goto loc_82379A4C;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
loc_82379A4C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
loc_82379A54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379A60;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82379A6C"))) PPC_WEAK_FUNC(sub_82379A6C);
PPC_FUNC_IMPL(__imp__sub_82379A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82379A70"))) PPC_WEAK_FUNC(sub_82379A70);
PPC_FUNC_IMPL(__imp__sub_82379A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82379A78;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x82379A90;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379A9C;
	sub_82377B98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,136(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x823895b0
	ctx.lr = 0x82379AB0;
	sub_823895B0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823897b0
	ctx.lr = 0x82379AC0;
	sub_823897B0(ctx, base);
	// li r28,8
	ctx.r28.s64 = 8;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// bne cr6,0x82379b70
	if (!ctx.cr6.eq) goto loc_82379B70;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82379adc
	if (ctx.cr6.eq) goto loc_82379ADC;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82379b70
	if (!ctx.cr6.eq) goto loc_82379B70;
loc_82379ADC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82379af4
	if (!ctx.cr6.eq) goto loc_82379AF4;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82379b10
	if (ctx.cr6.eq) goto loc_82379B10;
loc_82379AF4:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82379B10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823895d8
	ctx.lr = 0x82379B18;
	sub_823895D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x82379B24;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x82379B3C;
	sub_82376E20(ctx, base);
	// addi r30,r31,156
	ctx.r30.s64 = ctx.r31.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82379B48;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379b58
	if (!ctx.cr0.eq) goto loc_82379B58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x82379B58;
	sub_8237D130(ctx, base);
loc_82379B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x82379B64;
	sub_82377B98(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x82379B70;
	sub_82389828(ctx, base);
loc_82379B70:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388348
	ctx.lr = 0x82379B7C;
	sub_82388348(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r31,101(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// bl 0x82389828
	ctx.lr = 0x82379B8C;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82379B98"))) PPC_WEAK_FUNC(sub_82379B98);
PPC_FUNC_IMPL(__imp__sub_82379B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82379BA0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x82379BB8;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379BC4;
	sub_82377B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823895d8
	ctx.lr = 0x82379BD0;
	sub_823895D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823897b0
	ctx.lr = 0x82379BE0;
	sub_823897B0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379BF4;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82379C00"))) PPC_WEAK_FUNC(sub_82379C00);
PPC_FUNC_IMPL(__imp__sub_82379C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82379C08;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x82379C20;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379C2C;
	sub_82377B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x82379C3C;
	sub_82377B98(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,136(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82389588
	ctx.lr = 0x82379C4C;
	sub_82389588(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823897b0
	ctx.lr = 0x82379C5C;
	sub_823897B0(ctx, base);
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r3,r28,108
	ctx.r3.s64 = ctx.r28.s64 + 108;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// bl 0x8237d170
	ctx.lr = 0x82379C6C;
	sub_8237D170(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823882e8
	ctx.lr = 0x82379C74;
	sub_823882E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82379ca0
	if (ctx.cr0.eq) goto loc_82379CA0;
	// addi r29,r31,156
	ctx.r29.s64 = ctx.r31.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357080
	ctx.lr = 0x82379C8C;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379d4c
	if (!ctx.cr0.eq) goto loc_82379D4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x82379C9C;
	sub_8237D130(ctx, base);
	// b 0x82379d4c
	goto loc_82379D4C;
loc_82379CA0:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x82379cb0
	if (ctx.cr6.eq) goto loc_82379CB0;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82379d4c
	if (!ctx.cr6.eq) goto loc_82379D4C;
loc_82379CB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// sth r30,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r30.u16);
	// sth r30,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r30.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r30,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r30.u16);
	// sth r30,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r30.u16);
	// sth r30,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r30.u16);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// sth r30,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r30.u16);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// ble cr6,0x82379d20
	if (!ctx.cr6.gt) goto loc_82379D20;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82379CE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82379d0c
	if (ctx.cr6.eq) goto loc_82379D0C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82379d0c
	if (ctx.cr6.eq) goto loc_82379D0C;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8237d130
	ctx.lr = 0x82379D0C;
	sub_8237D130(ctx, base);
loc_82379D0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379ce4
	if (ctx.cr6.lt) goto loc_82379CE4;
loc_82379D20:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82379d38
	if (!ctx.cr6.eq) goto loc_82379D38;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82379d4c
	if (ctx.cr6.eq) goto loc_82379D4C;
loc_82379D38:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r26,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r26.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82379D4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82379dbc
	if (!ctx.cr6.gt) goto loc_82379DBC;
loc_82379D5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x823882e8
	ctx.lr = 0x82379D68;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379da8
	if (!ctx.cr0.eq) goto loc_82379DA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82388398
	ctx.lr = 0x82379D7C;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379da8
	if (!ctx.cr0.eq) goto loc_82379DA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82379da8
	if (ctx.cr6.eq) goto loc_82379DA8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82379da8
	if (ctx.cr6.eq) goto loc_82379DA8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82379DA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82379d5c
	if (ctx.cr6.lt) goto loc_82379D5C;
loc_82379DBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379DC8;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82379DD4"))) PPC_WEAK_FUNC(sub_82379DD4);
PPC_FUNC_IMPL(__imp__sub_82379DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82379DD8"))) PPC_WEAK_FUNC(sub_82379DD8);
PPC_FUNC_IMPL(__imp__sub_82379DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82379DE0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823896f8
	ctx.lr = 0x82379DFC;
	sub_823896F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,136(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r28,140(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82389720
	ctx.lr = 0x82379E14;
	sub_82389720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823893e0
	ctx.lr = 0x82379E1C;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379E28;
	sub_82377B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x82379f50
	if (ctx.cr6.eq) goto loc_82379F50;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82379e44
	if (!ctx.cr6.eq) goto loc_82379E44;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82379f50
	if (ctx.cr6.eq) goto loc_82379F50;
loc_82379E44:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82379f0c
	if (ctx.cr6.eq) goto loc_82379F0C;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// beq cr6,0x82379f0c
	if (ctx.cr6.eq) goto loc_82379F0C;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x82379f0c
	if (ctx.cr6.eq) goto loc_82379F0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882e8
	ctx.lr = 0x82379E64;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82379e88
	if (ctx.cr0.eq) goto loc_82379E88;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82379e88
	if (ctx.cr6.eq) goto loc_82379E88;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82379f38
	if (ctx.cr6.eq) goto loc_82379F38;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82379f28
	goto loc_82379F28;
loc_82379E88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82379f38
	if (ctx.cr6.eq) goto loc_82379F38;
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// bne cr6,0x82379eac
	if (!ctx.cr6.eq) goto loc_82379EAC;
loc_82379E98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379EA4;
	sub_82389828(ctx, base);
	// neg r3,r31
	ctx.r3.s64 = -ctx.r31.s64;
	// b 0x82379f48
	goto loc_82379F48;
loc_82379EAC:
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// rotlwi r10,r10,15
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 15);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82379f24
	if (ctx.cr6.eq) goto loc_82379F24;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x82379ee4
	if (!ctx.cr6.eq) goto loc_82379EE4;
	// addi r31,r30,108
	ctx.r31.s64 = ctx.r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x82379EDC;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x82379EE4;
	sub_8237D130(ctx, base);
loc_82379EE4:
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// bne cr6,0x82379e98
	if (!ctx.cr6.eq) goto loc_82379E98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388318
	ctx.lr = 0x82379EF4;
	sub_82388318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379e98
	if (!ctx.cr0.eq) goto loc_82379E98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388328
	ctx.lr = 0x82379F08;
	sub_82388328(ctx, base);
	// b 0x82379e98
	goto loc_82379E98;
loc_82379F0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82379f38
	if (ctx.cr6.eq) goto loc_82379F38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x82379F1C;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82379f38
	if (!ctx.cr0.eq) goto loc_82379F38;
loc_82379F24:
	// li r11,11
	ctx.r11.s64 = 11;
loc_82379F28:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882f8
	ctx.lr = 0x82379F38;
	sub_823882F8(ctx, base);
loc_82379F38:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82379F44;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82379F48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82379F50:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82379f68
	if (!ctx.cr6.eq) goto loc_82379F68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82379f38
	if (ctx.cr6.eq) goto loc_82379F38;
	// b 0x82379f24
	goto loc_82379F24;
loc_82379F68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882e8
	ctx.lr = 0x82379F70;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82379f24
	if (ctx.cr0.eq) goto loc_82379F24;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82379f90
	if (!ctx.cr6.eq) goto loc_82379F90;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82379f38
	if (ctx.cr6.eq) goto loc_82379F38;
loc_82379F90:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,11
	ctx.r9.s64 = 11;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// b 0x82379f38
	goto loc_82379F38;
}

__attribute__((alias("__imp__sub_82379FB0"))) PPC_WEAK_FUNC(sub_82379FB0);
PPC_FUNC_IMPL(__imp__sub_82379FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82379FB8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x82379FD0;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x82379FDC;
	sub_82377B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823897f8
	ctx.lr = 0x82379FE8;
	sub_823897F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389720
	ctx.lr = 0x82379FF8;
	sub_82389720(ctx, base);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x8237A004;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x8237A00C;
	sub_8237D130(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x8237A018;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237A024"))) PPC_WEAK_FUNC(sub_8237A024);
PPC_FUNC_IMPL(__imp__sub_8237A024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237A028"))) PPC_WEAK_FUNC(sub_8237A028);
PPC_FUNC_IMPL(__imp__sub_8237A028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237A030;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237A04C;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237A058;
	sub_82377B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389600
	ctx.lr = 0x8237A064;
	sub_82389600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389720
	ctx.lr = 0x8237A074;
	sub_82389720(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8237d170
	ctx.lr = 0x8237A07C;
	sub_8237D170(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388378
	ctx.lr = 0x8237A088;
	sub_82388378(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r31,94(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// bl 0x823893e0
	ctx.lr = 0x8237A098;
	sub_823893E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823795d0
	ctx.lr = 0x8237A0AC;
	sub_823795D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x8237A0B8;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237A0C4"))) PPC_WEAK_FUNC(sub_8237A0C4);
PPC_FUNC_IMPL(__imp__sub_8237A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237A0C8"))) PPC_WEAK_FUNC(sub_8237A0C8);
PPC_FUNC_IMPL(__imp__sub_8237A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8237A0D0;
	sub_82248768(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237A0EC;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237A0F8;
	sub_82377B98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x8237A108;
	sub_82377B98(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823896b0
	ctx.lr = 0x8237A114;
	sub_823896B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823896e8
	ctx.lr = 0x8237A124;
	sub_823896E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,255
	ctx.r28.s64 = 255;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r24,136(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r22,140(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// ble cr6,0x8237a1c4
	if (!ctx.cr6.gt) goto loc_8237A1C4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8237A148:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r11,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lbz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x823893e0
	ctx.lr = 0x8237A15C;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237a1b0
	if (ctx.cr6.eq) goto loc_8237A1B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882e8
	ctx.lr = 0x8237A174;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237a1b0
	if (ctx.cr0.eq) goto loc_8237A1B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x8237A184;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237a1b0
	if (!ctx.cr0.eq) goto loc_8237A1B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8237a1b0
	if (ctx.cr6.eq) goto loc_8237A1B0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237a1b0
	if (!ctx.cr6.lt) goto loc_8237A1B0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8237A1B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237a148
	if (ctx.cr6.lt) goto loc_8237A148;
loc_8237A1C4:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237a1d8
	if (!ctx.cr6.eq) goto loc_8237A1D8;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8237A1D8:
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 7, ctx.xer);
	// bne cr6,0x8237a224
	if (!ctx.cr6.eq) goto loc_8237A224;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823882e8
	ctx.lr = 0x8237A1E8;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237a23c
	if (ctx.cr0.eq) goto loc_8237A23C;
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237a214
	if (ctx.cr6.eq) goto loc_8237A214;
loc_8237A200:
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8237A208:
	// bl 0x82389828
	ctx.lr = 0x8237A20C;
	sub_82389828(ctx, base);
	// neg r3,r31
	ctx.r3.s64 = -ctx.r31.s64;
	// b 0x8237a234
	goto loc_8237A234;
loc_8237A214:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82388200
	ctx.lr = 0x8237A224;
	sub_82388200(ctx, base);
loc_8237A224:
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8237A22C:
	// bl 0x82389828
	ctx.lr = 0x8237A230;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237A234:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8237A23C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8237a2a4
	if (!ctx.cr6.eq) goto loc_8237A2A4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8237a2a4
	if (ctx.cr6.eq) goto loc_8237A2A4;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237a200
	if (!ctx.cr6.eq) goto loc_8237A200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x8237A264;
	sub_82357358(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// lbz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82388fd0
	ctx.lr = 0x8237A280;
	sub_82388FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8237a200
	if (!ctx.cr0.gt) goto loc_8237A200;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// bl 0x82389828
	ctx.lr = 0x8237A29C;
	sub_82389828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8237a234
	goto loc_8237A234;
loc_8237A2A4:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823882e8
	ctx.lr = 0x8237A2AC;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x8237a22c
	if (ctx.cr0.eq) goto loc_8237A22C;
	// b 0x8237a208
	goto loc_8237A208;
}

__attribute__((alias("__imp__sub_8237A2C0"))) PPC_WEAK_FUNC(sub_8237A2C0);
PPC_FUNC_IMPL(__imp__sub_8237A2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237A2C8;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82389638
	ctx.lr = 0x8237A2E4;
	sub_82389638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237A2EC;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237A2F8;
	sub_82377B98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823896e8
	ctx.lr = 0x8237A30C;
	sub_823896E8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a3dc
	if (ctx.cr6.eq) goto loc_8237A3DC;
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// lbz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// or r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwimi r30,r10,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x82377b98
	ctx.lr = 0x8237A340;
	sub_82377B98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r11,106(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 106);
	// lhz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 104);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82389678
	ctx.lr = 0x8237A35C;
	sub_82389678(ctx, base);
	// lbz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bge cr6,0x8237a378
	if (!ctx.cr6.lt) goto loc_8237A378;
	// lhz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// b 0x8237a384
	goto loc_8237A384;
loc_8237A378:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lhz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
loc_8237A384:
	// sth r10,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// lbz r28,85(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x8237A398;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237A3B0;
	sub_82376E20(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bge cr6,0x8237a3d0
	if (!ctx.cr6.lt) goto loc_8237A3D0;
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// sth r11,106(r29)
	PPC_STORE_U16(ctx.r29.u32 + 106, ctx.r11.u16);
	// sth r10,104(r29)
	PPC_STORE_U16(ctx.r29.u32 + 104, ctx.r10.u16);
loc_8237A3D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x8237A3D8;
	sub_82389828(ctx, base);
	// b 0x8237a438
	goto loc_8237A438;
loc_8237A3DC:
	// lhz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r31,126(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// or r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x823882e8
	ctx.lr = 0x8237A3FC;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237a438
	if (ctx.cr0.eq) goto loc_8237A438;
	// rlwimi r30,r31,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8237a424
	if (ctx.cr6.eq) goto loc_8237A424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r31,117(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// bl 0x82389828
	ctx.lr = 0x8237A41C;
	sub_82389828(ctx, base);
	// neg r3,r31
	ctx.r3.s64 = -ctx.r31.s64;
	// b 0x8237a448
	goto loc_8237A448;
loc_8237A424:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882f8
	ctx.lr = 0x8237A438;
	sub_823882F8(ctx, base);
loc_8237A438:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r31,117(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// bl 0x82389828
	ctx.lr = 0x8237A444;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237A448:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237A450"))) PPC_WEAK_FUNC(sub_8237A450);
PPC_FUNC_IMPL(__imp__sub_8237A450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237A458;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237A470;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237A47C;
	sub_82377B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389678
	ctx.lr = 0x8237A488;
	sub_82389678(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389890
	ctx.lr = 0x8237A498;
	sub_82389890(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237a4b4
	if (!ctx.cr6.eq) goto loc_8237A4B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388328
	ctx.lr = 0x8237A4B4;
	sub_82388328(ctx, base);
loc_8237A4B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82377b98
	ctx.lr = 0x8237A4C0;
	sub_82377B98(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r8,106(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 106);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lhz r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 104);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237a4f0
	if (!ctx.cr6.lt) goto loc_8237A4F0;
	// sth r11,104(r3)
	PPC_STORE_U16(ctx.r3.u32 + 104, ctx.r11.u16);
	// sth r10,106(r3)
	PPC_STORE_U16(ctx.r3.u32 + 106, ctx.r10.u16);
loc_8237A4F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x8237A4FC;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237A508"))) PPC_WEAK_FUNC(sub_8237A508);
PPC_FUNC_IMPL(__imp__sub_8237A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8237A510;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237A52C;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237A538;
	sub_82377B98(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,255
	ctx.r26.s64 = 255;
	// bl 0x82389838
	ctx.lr = 0x8237A548;
	sub_82389838(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389890
	ctx.lr = 0x8237A558;
	sub_82389890(ctx, base);
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// rotlwi r10,r10,15
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 15);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8237a588
	if (!ctx.cr6.gt) goto loc_8237A588;
loc_8237A574:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x8237A580;
	sub_82389828(ctx, base);
	// neg r3,r31
	ctx.r3.s64 = -ctx.r31.s64;
	// b 0x8237a6d0
	goto loc_8237A6D0;
loc_8237A588:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823893e0
	ctx.lr = 0x8237A590;
	sub_823893E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823893e0
	ctx.lr = 0x8237A59C;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,150
	ctx.r11.s64 = ctx.r11.s64 + 150;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8237a6c0
	if (!ctx.cr6.lt) goto loc_8237A6C0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237a6c0
	if (ctx.cr6.eq) goto loc_8237A6C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237a64c
	if (!ctx.cr6.gt) goto loc_8237A64C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8237A5D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lbz r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x823893e0
	ctx.lr = 0x8237A5E4;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237a638
	if (ctx.cr6.eq) goto loc_8237A638;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882e8
	ctx.lr = 0x8237A5FC;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237a638
	if (ctx.cr0.eq) goto loc_8237A638;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x8237A60C;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237a638
	if (!ctx.cr0.eq) goto loc_8237A638;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8237a638
	if (ctx.cr6.eq) goto loc_8237A638;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237a638
	if (!ctx.cr6.lt) goto loc_8237A638;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8237A638:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237a5d0
	if (ctx.cr6.lt) goto loc_8237A5D0;
loc_8237A64C:
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237a574
	if (!ctx.cr6.eq) goto loc_8237A574;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r4,93(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// bl 0x82388228
	ctx.lr = 0x8237A668;
	sub_82388228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237a574
	if (!ctx.cr0.eq) goto loc_8237A574;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237a574
	if (!ctx.cr6.eq) goto loc_8237A574;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r30,93(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x823893e0
	ctx.lr = 0x8237A68C;
	sub_823893E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82388fd0
	ctx.lr = 0x8237A6A8;
	sub_82388FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8237a574
	if (!ctx.cr0.gt) goto loc_8237A574;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,93(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82388250
	ctx.lr = 0x8237A6C0;
	sub_82388250(ctx, base);
loc_8237A6C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x8237A6CC;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237A6D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8237A6D8"))) PPC_WEAK_FUNC(sub_8237A6D8);
PPC_FUNC_IMPL(__imp__sub_8237A6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237A6E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8237a7a4
	if (ctx.cr6.eq) goto loc_8237A7A4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8237a798
	if (ctx.cr6.eq) goto loc_8237A798;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8237a728
	if (ctx.cr6.eq) goto loc_8237A728;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8237a71c
	if (ctx.cr6.eq) goto loc_8237A71C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237a7ac
	if (!ctx.cr6.eq) goto loc_8237A7AC;
	// bl 0x82378928
	ctx.lr = 0x8237A718;
	sub_82378928(ctx, base);
	// b 0x8237a7ac
	goto loc_8237A7AC;
loc_8237A71C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82377be8
	ctx.lr = 0x8237A724;
	sub_82377BE8(ctx, base);
	// b 0x8237a7ac
	goto loc_8237A7AC;
loc_8237A728:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,24
	ctx.r29.s64 = 24;
	// addi r31,r28,236
	ctx.r31.s64 = ctx.r28.s64 + 236;
loc_8237A734:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8237a780
	if (ctx.cr6.lt) goto loc_8237A780;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,92(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x8237A74C;
	sub_82377B98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823881e0
	ctx.lr = 0x8237A758;
	sub_823881E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82388200
	ctx.lr = 0x8237A76C;
	sub_82388200(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r29,r27
	PPC_STORE_U16(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8237A780:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,88
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 88, ctx.xer);
	// blt cr6,0x8237a734
	if (ctx.cr6.lt) goto loc_8237A734;
	// b 0x8237a7ac
	goto loc_8237A7AC;
loc_8237A798:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82378608
	ctx.lr = 0x8237A7A0;
	sub_82378608(ctx, base);
	// b 0x8237a7ac
	goto loc_8237A7AC;
loc_8237A7A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82376f00
	ctx.lr = 0x8237A7AC;
	sub_82376F00(ctx, base);
loc_8237A7AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237A7B8"))) PPC_WEAK_FUNC(sub_8237A7B8);
PPC_FUNC_IMPL(__imp__sub_8237A7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237A7C0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8237a7dc
	if (ctx.cr6.eq) goto loc_8237A7DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237a944
	goto loc_8237A944;
loc_8237A7DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237a860
	if (!ctx.cr6.gt) goto loc_8237A860;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8237A7F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237a814
	if (!ctx.cr6.eq) goto loc_8237A814;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388378
	ctx.lr = 0x8237A814;
	sub_82388378(ctx, base);
loc_8237A814:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x8237A81C;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237a84c
	if (!ctx.cr0.eq) goto loc_8237A84C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8237a84c
	if (ctx.cr6.eq) goto loc_8237A84C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882e8
	ctx.lr = 0x8237A838;
	sub_823882E8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8237A84C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237a7f0
	if (ctx.cr6.lt) goto loc_8237A7F0;
loc_8237A860:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389600
	ctx.lr = 0x8237A868;
	sub_82389600(ctx, base);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// bne cr6,0x8237a89c
	if (!ctx.cr6.eq) goto loc_8237A89C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r9,50(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r10,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// b 0x8237a8b4
	goto loc_8237A8B4;
loc_8237A89C:
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r10,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
loc_8237A8B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r30,85(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x8237A8C0;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237A8D8;
	sub_82376E20(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237a8f0
	if (!ctx.cr6.eq) goto loc_8237A8F0;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x8237a90c
	if (ctx.cr6.eq) goto loc_8237A90C;
loc_8237A8F0:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237A90C:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d130
	ctx.lr = 0x8237A914;
	sub_8237D130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,94(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lbz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x823795d0
	ctx.lr = 0x8237A928;
	sub_823795D0(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// bl 0x82389828
	ctx.lr = 0x8237A940;
	sub_82389828(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237A944:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237A94C"))) PPC_WEAK_FUNC(sub_8237A94C);
PPC_FUNC_IMPL(__imp__sub_8237A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237A950"))) PPC_WEAK_FUNC(sub_8237A950);
PPC_FUNC_IMPL(__imp__sub_8237A950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x8237A958;
	sub_8224875C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r21,140(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// bl 0x82377b98
	ctx.lr = 0x8237A978;
	sub_82377B98(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r20,r31,364
	ctx.r20.s64 = ctx.r31.s64 + 364;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237A994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237a9a8
	if (ctx.cr6.eq) goto loc_8237A9A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237b128
	if (!ctx.cr6.eq) goto loc_8237B128;
loc_8237A9A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237aa20
	if (!ctx.cr6.gt) goto loc_8237AA20;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8237A9C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x823883b8
	ctx.lr = 0x8237A9CC;
	sub_823883B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237a9f8
	if (!ctx.cr0.eq) goto loc_8237A9F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x8237aa0c
	if (!ctx.cr6.eq) goto loc_8237AA0C;
	// lhz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237aa0c
	if (!ctx.cr6.eq) goto loc_8237AA0C;
loc_8237A9F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// or r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 | ctx.r19.u64;
loc_8237AA0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237a9c0
	if (ctx.cr6.lt) goto loc_8237A9C0;
loc_8237AA20:
	// cmpwi cr6,r21,12
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 12, ctx.xer);
	// beq cr6,0x8237aa30
	if (ctx.cr6.eq) goto loc_8237AA30;
	// cmpwi cr6,r21,13
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 13, ctx.xer);
	// bne cr6,0x8237aa60
	if (!ctx.cr6.eq) goto loc_8237AA60;
loc_8237AA30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377690
	ctx.lr = 0x8237AA38;
	sub_82377690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237aa60
	if (!ctx.cr0.eq) goto loc_8237AA60;
	// lhz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 104);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8237aa60
	if (!ctx.cr6.eq) goto loc_8237AA60;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// or r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 | ctx.r19.u64;
loc_8237AA60:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237aa88
	if (ctx.cr6.eq) goto loc_8237AA88;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// lhz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237aa88
	if (!ctx.cr6.eq) goto loc_8237AA88;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// andc r19,r19,r11
	ctx.r19.u64 = ctx.r19.u64 & ~ctx.r11.u64;
loc_8237AA88:
	// addi r22,r31,480
	ctx.r22.s64 = ctx.r31.s64 + 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8237abf0
	goto loc_8237ABF0;
loc_8237AA94:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82388928
	ctx.lr = 0x8237AAB8;
	sub_82388928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82389400
	ctx.lr = 0x8237AAC0;
	sub_82389400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8237ab64
	if (ctx.cr6.eq) goto loc_8237AB64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8237abec
	if (!ctx.cr6.eq) goto loc_8237ABEC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388928
	ctx.lr = 0x8237AAE0;
	sub_82388928(ctx, base);
	// bl 0x82389470
	ctx.lr = 0x8237AAE4;
	sub_82389470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237ab10
	if (ctx.cr0.eq) goto loc_8237AB10;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388928
	ctx.lr = 0x8237AAF8;
	sub_82388928(ctx, base);
	// bl 0x82389440
	ctx.lr = 0x8237AAFC;
	sub_82389440(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// bl 0x823889c0
	ctx.lr = 0x8237AB10;
	sub_823889C0(ctx, base);
loc_8237AB10:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388928
	ctx.lr = 0x8237AB1C;
	sub_82388928(ctx, base);
	// bl 0x823894c0
	ctx.lr = 0x8237AB20;
	sub_823894C0(ctx, base);
loc_8237AB20:
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237abec
	if (!ctx.cr6.eq) goto loc_8237ABEC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237abb4
	if (ctx.cr0.eq) goto loc_8237ABB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823887e8
	ctx.lr = 0x8237AB50;
	sub_823887E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// b 0x8237abec
	goto loc_8237ABEC;
loc_8237AB64:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388928
	ctx.lr = 0x8237AB70;
	sub_82388928(ctx, base);
	// bl 0x82389470
	ctx.lr = 0x8237AB74;
	sub_82389470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237aba0
	if (ctx.cr0.eq) goto loc_8237ABA0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388928
	ctx.lr = 0x8237AB88;
	sub_82388928(ctx, base);
	// bl 0x82389440
	ctx.lr = 0x8237AB8C;
	sub_82389440(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// bl 0x823889c0
	ctx.lr = 0x8237ABA0;
	sub_823889C0(ctx, base);
loc_8237ABA0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82388928
	ctx.lr = 0x8237ABAC;
	sub_82388928(ctx, base);
	// bl 0x82389440
	ctx.lr = 0x8237ABB0;
	sub_82389440(ctx, base);
	// b 0x8237ab20
	goto loc_8237AB20;
loc_8237ABB4:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x8237abdc
	if (ctx.cr6.eq) goto loc_8237ABDC;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x8237abdc
	if (ctx.cr6.eq) goto loc_8237ABDC;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x8237abdc
	if (ctx.cr6.eq) goto loc_8237ABDC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82388928
	ctx.lr = 0x8237ABD4;
	sub_82388928(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8237abe8
	goto loc_8237ABE8;
loc_8237ABDC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82388928
	ctx.lr = 0x8237ABE4;
	sub_82388928(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
loc_8237ABE8:
	// bl 0x82389438
	ctx.lr = 0x8237ABEC;
	sub_82389438(ctx, base);
loc_8237ABEC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8237ABF0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82388750
	ctx.lr = 0x8237ABF8;
	sub_82388750(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237aa94
	if (ctx.cr6.eq) goto loc_8237AA94;
	// cmplw cr6,r19,r27
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8237aeec
	if (!ctx.cr6.eq) goto loc_8237AEEC;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8237aeec
	if (ctx.cr6.eq) goto loc_8237AEEC;
	// lwz r23,552(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8237ace4
	if (ctx.cr6.eq) goto loc_8237ACE4;
	// addi r25,r31,536
	ctx.r25.s64 = ctx.r31.s64 + 536;
loc_8237AC2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82388a48
	ctx.lr = 0x8237AC38;
	sub_82388A48(ctx, base);
	// lhz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r10,r10,32767
	ctx.r10.s64 = ctx.r10.s64 * 32767;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82388a70
	ctx.lr = 0x8237AC54;
	sub_82388A70(ctx, base);
	// lwz r26,532(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8237accc
	if (ctx.cr6.eq) goto loc_8237ACCC;
	// addi r27,r31,516
	ctx.r27.s64 = ctx.r31.s64 + 516;
loc_8237AC6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82388a48
	ctx.lr = 0x8237AC78;
	sub_82388A48(ctx, base);
	// lhz r9,54(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lhz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 592);
	// mulli r9,r9,32767
	ctx.r9.s64 = ctx.r9.s64 * 32767;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8237acc0
	if (ctx.cr6.gt) goto loc_8237ACC0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237acc0
	if (ctx.cr6.lt) goto loc_8237ACC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82388a70
	ctx.lr = 0x8237ACB0;
	sub_82388A70(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237acd8
	if (ctx.cr6.eq) goto loc_8237ACD8;
loc_8237ACC0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8237ac6c
	if (ctx.cr6.lt) goto loc_8237AC6C;
loc_8237ACCC:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_8237ACD8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8237ac2c
	if (ctx.cr6.lt) goto loc_8237AC2C;
loc_8237ACE4:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237ACF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AD0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,7
	ctx.r30.s64 = 7;
	// cmpwi cr6,r21,5
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 5, ctx.xer);
	// bne cr6,0x8237ad5c
	if (!ctx.cr6.eq) goto loc_8237AD5C;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d170
	ctx.lr = 0x8237AD20;
	sub_8237D170(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8237d170
	ctx.lr = 0x8237AD28;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823796c0
	ctx.lr = 0x8237AD30;
	sub_823796C0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237ad48
	if (!ctx.cr6.eq) goto loc_8237AD48;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237ad94
	if (ctx.cr6.eq) goto loc_8237AD94;
loc_8237AD48:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r17,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r17.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237AD5C:
	// cmpwi cr6,r21,13
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 13, ctx.xer);
	// bne cr6,0x8237ad94
	if (!ctx.cr6.eq) goto loc_8237AD94;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237ad7c
	if (!ctx.cr6.eq) goto loc_8237AD7C;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x8237ad94
	if (ctx.cr6.eq) goto loc_8237AD94;
loc_8237AD7C:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237AD94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237ae14
	if (!ctx.cr6.gt) goto loc_8237AE14;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8237ADA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8237d170
	ctx.lr = 0x8237ADB8;
	sub_8237D170(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8237ae00
	if (ctx.cr6.eq) goto loc_8237AE00;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x8237ae00
	if (!ctx.cr6.eq) goto loc_8237AE00;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237ae00
	if (ctx.cr0.eq) goto loc_8237AE00;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x823882f8
	ctx.lr = 0x8237AE00;
	sub_823882F8(ctx, base);
loc_8237AE00:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237ada8
	if (ctx.cr6.lt) goto loc_8237ADA8;
loc_8237AE14:
	// addi r30,r31,168
	ctx.r30.s64 = ctx.r31.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x8237AE20;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237ae30
	if (ctx.cr0.eq) goto loc_8237AE30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x8237AE30;
	sub_8237D170(ctx, base);
loc_8237AE30:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237ae44
	if (ctx.cr6.eq) goto loc_8237AE44;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237AE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237AE44:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237aebc
	if (!ctx.cr6.gt) goto loc_8237AEBC;
	// addi r28,r31,464
	ctx.r28.s64 = ctx.r31.s64 + 464;
loc_8237AE58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82388828
	ctx.lr = 0x8237AE64;
	sub_82388828(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823891b0
	ctx.lr = 0x8237AE74;
	sub_823891B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82388928
	ctx.lr = 0x8237AE80;
	sub_82388928(ctx, base);
	// lhz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82389400
	ctx.lr = 0x8237AE8C;
	sub_82389400(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8237aea0
	if (ctx.cr6.eq) goto loc_8237AEA0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// bne cr6,0x8237aea4
	if (!ctx.cr6.eq) goto loc_8237AEA4;
loc_8237AEA0:
	// li r4,7
	ctx.r4.s64 = 7;
loc_8237AEA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82389438
	ctx.lr = 0x8237AEAC;
	sub_82389438(ctx, base);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237ae58
	if (ctx.cr6.lt) goto loc_8237AE58;
loc_8237AEBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377850
	ctx.lr = 0x8237AEC4;
	sub_82377850(ctx, base);
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bne cr6,0x8237aedc
	if (!ctx.cr6.eq) goto loc_8237AEDC;
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r10.u16);
loc_8237AEDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// b 0x8237b128
	goto loc_8237B128;
loc_8237AEEC:
	// lwz r28,140(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi r28,0
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8237af00
	if (ctx.cr0.eq) goto loc_8237AF00;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// bne cr6,0x8237b0a0
	if (!ctx.cr6.eq) goto loc_8237B0A0;
loc_8237AF00:
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// beq cr6,0x8237b018
	if (ctx.cr6.eq) goto loc_8237B018;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237af1c
	if (!ctx.cr6.eq) goto loc_8237AF1C;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// beq cr6,0x8237af34
	if (ctx.cr6.eq) goto loc_8237AF34;
loc_8237AF1C:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_8237AF34:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d130
	ctx.lr = 0x8237AF3C;
	sub_8237D130(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x8237d130
	ctx.lr = 0x8237AF44;
	sub_8237D130(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237af98
	if (!ctx.cr6.gt) goto loc_8237AF98;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8237AF58:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8237af84
	if (ctx.cr6.eq) goto loc_8237AF84;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237af84
	if (ctx.cr0.eq) goto loc_8237AF84;
	// addi r3,r10,108
	ctx.r3.s64 = ctx.r10.s64 + 108;
	// bl 0x8237d130
	ctx.lr = 0x8237AF84;
	sub_8237D130(ctx, base);
loc_8237AF84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237af58
	if (ctx.cr6.lt) goto loc_8237AF58;
loc_8237AF98:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237b0a0
	if (ctx.cr6.eq) goto loc_8237B0A0;
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237b0a0
	if (ctx.cr6.lt) goto loc_8237B0A0;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x8237AFC0;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237afd4
	if (!ctx.cr0.eq) goto loc_8237AFD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8237AFD0;
	sub_8237D130(ctx, base);
	// stw r17,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r17.u32);
loc_8237AFD4:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8237b0a0
	if (ctx.cr6.eq) goto loc_8237B0A0;
loc_8237AFE4:
	// slw r11,r18,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r30.u8 & 0x3F));
	// and. r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8237b008
	if (ctx.cr0.eq) goto loc_8237B008;
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8237b008
	if (!ctx.cr0.eq) goto loc_8237B008;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x823889c0
	ctx.lr = 0x8237B008;
	sub_823889C0(ctx, base);
loc_8237B008:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8237afe4
	if (ctx.cr6.lt) goto loc_8237AFE4;
	// b 0x8237b0a0
	goto loc_8237B0A0;
loc_8237B018:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237b06c
	if (!ctx.cr6.gt) goto loc_8237B06C;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8237B02C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8237b058
	if (ctx.cr6.eq) goto loc_8237B058;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237b058
	if (ctx.cr0.eq) goto loc_8237B058;
	// addi r3,r10,108
	ctx.r3.s64 = ctx.r10.s64 + 108;
	// bl 0x8237d130
	ctx.lr = 0x8237B058;
	sub_8237D130(ctx, base);
loc_8237B058:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b02c
	if (ctx.cr6.lt) goto loc_8237B02C;
loc_8237B06C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237b084
	if (!ctx.cr6.eq) goto loc_8237B084;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8237b0f8
	if (ctx.cr6.eq) goto loc_8237B0F8;
loc_8237B084:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237B0A0:
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// bne cr6,0x8237b0f8
	if (!ctx.cr6.eq) goto loc_8237B0F8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237b0f8
	if (!ctx.cr6.gt) goto loc_8237B0F8;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_8237B0BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x82357080
	ctx.lr = 0x8237B0CC;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237b0e4
	if (!ctx.cr0.eq) goto loc_8237B0E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x8237d130
	ctx.lr = 0x8237B0E4;
	sub_8237D130(ctx, base);
loc_8237B0E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b0bc
	if (ctx.cr6.lt) goto loc_8237B0BC;
loc_8237B0F8:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237b10c
	if (ctx.cr6.eq) goto loc_8237B10C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237B10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237B10C:
	// addi r31,r31,156
	ctx.r31.s64 = ctx.r31.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x8237B118;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237b128
	if (!ctx.cr0.eq) goto loc_8237B128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x8237B128;
	sub_8237D130(ctx, base);
loc_8237B128:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_8237B130"))) PPC_WEAK_FUNC(sub_8237B130);
PPC_FUNC_IMPL(__imp__sub_8237B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8237B138;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r4,556(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,562(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 562);
	// lhz r9,558(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 558);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r8,50(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r7,560(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 560);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237b1f0
	if (!ctx.cr6.eq) goto loc_8237B1F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237b3ec
	if (!ctx.cr6.gt) goto loc_8237B3EC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8237B190:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x8237B1A0;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237b1cc
	if (ctx.cr0.eq) goto loc_8237B1CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388298
	ctx.lr = 0x8237B1B0;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237b1cc
	if (!ctx.cr0.eq) goto loc_8237B1CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882a8
	ctx.lr = 0x8237B1C4;
	sub_823882A8(ctx, base);
	// lhz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 556);
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
loc_8237B1CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388378
	ctx.lr = 0x8237B1D8;
	sub_82388378(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b190
	if (ctx.cr6.lt) goto loc_8237B190;
	// b 0x8237b3ec
	goto loc_8237B3EC;
loc_8237B1F0:
	// lbz r9,564(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 564);
	// lbz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8237b370
	if (!ctx.cr6.eq) goto loc_8237B370;
	// addi r23,r31,464
	ctx.r23.s64 = ctx.r31.s64 + 464;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82388e80
	ctx.lr = 0x8237B20C;
	sub_82388E80(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8237b368
	if (ctx.cr0.eq) goto loc_8237B368;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r24,562(r31)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r31.u32 + 562);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ble cr6,0x8237b27c
	if (!ctx.cr6.gt) goto loc_8237B27C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8237B238:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8237b268
	if (!ctx.cr6.eq) goto loc_8237B268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388298
	ctx.lr = 0x8237B254;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237b268
	if (!ctx.cr0.eq) goto loc_8237B268;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 | ctx.r26.u64;
loc_8237B268:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b238
	if (ctx.cr6.lt) goto loc_8237B238;
loc_8237B27C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82388928
	ctx.lr = 0x8237B288;
	sub_82388928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8237B28C:
	// lbz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237b2cc
	if (ctx.cr0.eq) goto loc_8237B2CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,5(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237B2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237B2CC;
	sub_82376E20(ctx, base);
loc_8237B2CC:
	// lhz r28,6(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr. r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8237b2e4
	if (!ctx.cr0.eq) goto loc_8237B2E4;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
loc_8237B2E4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8237b310
	if (!ctx.cr6.eq) goto loc_8237B310;
	// lhz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 556);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237b310
	if (!ctx.cr6.eq) goto loc_8237B310;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// bl 0x823795d0
	ctx.lr = 0x8237B310;
	sub_823795D0(ctx, base);
loc_8237B310:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82388930
	ctx.lr = 0x8237B31C;
	sub_82388930(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82388928
	ctx.lr = 0x8237B32C;
	sub_82388928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8237b350
	if (ctx.cr6.eq) goto loc_8237B350;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8237b28c
	if (ctx.cr6.eq) goto loc_8237B28C;
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8237b28c
	if (ctx.cr6.eq) goto loc_8237B28C;
loc_8237B350:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lbz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823795d0
	ctx.lr = 0x8237B364;
	sub_823795D0(ctx, base);
	// b 0x8237b43c
	goto loc_8237B43C;
loc_8237B368:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237b440
	goto loc_8237B440;
loc_8237B370:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237b43c
	if (!ctx.cr6.eq) goto loc_8237B43C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237b3ec
	if (!ctx.cr6.gt) goto loc_8237B3EC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8237B390:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388398
	ctx.lr = 0x8237B3A0;
	sub_82388398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237b3cc
	if (ctx.cr0.eq) goto loc_8237B3CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388298
	ctx.lr = 0x8237B3B0;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237b3cc
	if (!ctx.cr0.eq) goto loc_8237B3CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823882a8
	ctx.lr = 0x8237B3C4;
	sub_823882A8(ctx, base);
	// lhz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 556);
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
loc_8237B3CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388378
	ctx.lr = 0x8237B3D8;
	sub_82388378(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b390
	if (ctx.cr6.lt) goto loc_8237B390;
loc_8237B3EC:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237b404
	if (!ctx.cr6.eq) goto loc_8237B404;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237b41c
	if (ctx.cr6.eq) goto loc_8237B41C;
loc_8237B404:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237B41C:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d170
	ctx.lr = 0x8237B424;
	sub_8237D170(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823795d0
	ctx.lr = 0x8237B438;
	sub_823795D0(ctx, base);
	// sth r26,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r26.u16);
loc_8237B43C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237B440:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8237B448"))) PPC_WEAK_FUNC(sub_8237B448);
PPC_FUNC_IMPL(__imp__sub_8237B448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237B450;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82389500
	ctx.lr = 0x8237B474;
	sub_82389500(ctx, base);
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x8237b624
	if (ctx.cr6.gt) goto loc_8237B624;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32200
	ctx.r12.s64 = ctx.r12.s64 + 32200;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// nop 
	// addi r12,r12,-19292
	ctx.r12.s64 = ctx.r12.s64 + -19292;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823781c8
	ctx.lr = 0x8237B4B8;
	sub_823781C8(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82376c38
	ctx.lr = 0x8237B4D0;
	sub_82376C38(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82379930
	ctx.lr = 0x8237B4E8;
	sub_82379930(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82379c00
	ctx.lr = 0x8237B500;
	sub_82379C00(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82379a70
	ctx.lr = 0x8237B518;
	sub_82379A70(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82379b98
	ctx.lr = 0x8237B530;
	sub_82379B98(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82379dd8
	ctx.lr = 0x8237B548;
	sub_82379DD8(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82376cc0
	ctx.lr = 0x8237B560;
	sub_82376CC0(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82376d40
	ctx.lr = 0x8237B578;
	sub_82376D40(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82376dc0
	ctx.lr = 0x8237B590;
	sub_82376DC0(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82379fb0
	ctx.lr = 0x8237B5A8;
	sub_82379FB0(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237a028
	ctx.lr = 0x8237B5C0;
	sub_8237A028(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237a0c8
	ctx.lr = 0x8237B5D8;
	sub_8237A0C8(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237a2c0
	ctx.lr = 0x8237B5F0;
	sub_8237A2C0(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237a450
	ctx.lr = 0x8237B608;
	sub_8237A450(ctx, base);
	// b 0x8237b620
	goto loc_8237B620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237a508
	ctx.lr = 0x8237B620;
	sub_8237A508(ctx, base);
loc_8237B620:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8237B624:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237B630"))) PPC_WEAK_FUNC(sub_8237B630);
PPC_FUNC_IMPL(__imp__sub_8237B630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237B638;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8237a6d8
	ctx.lr = 0x8237B644;
	sub_8237A6D8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r30,120
	ctx.r30.s64 = 120;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8237b89c
	if (ctx.cr6.eq) goto loc_8237B89C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8237b8ec
	if (ctx.cr6.eq) goto loc_8237B8EC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237b9f0
	if (!ctx.cr6.eq) goto loc_8237B9F0;
	// lhz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8237b6a4
	if (ctx.cr6.lt) goto loc_8237B6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237a950
	ctx.lr = 0x8237B67C;
	sub_8237A950(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8237b6c0
	if (!ctx.cr6.eq) goto loc_8237B6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823777d0
	ctx.lr = 0x8237B690;
	sub_823777D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237b6c0
	if (ctx.cr0.eq) goto loc_8237B6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b130
	ctx.lr = 0x8237B6A0;
	sub_8237B130(ctx, base);
	// b 0x8237b6c0
	goto loc_8237B6C0;
loc_8237B6A4:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r10,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// beq cr6,0x8237b6c0
	if (ctx.cr6.eq) goto loc_8237B6C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237B6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237B6C0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,7
	ctx.r30.s64 = 7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8237b790
	if (ctx.cr6.eq) goto loc_8237B790;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8237b790
	if (ctx.cr6.eq) goto loc_8237B790;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8237b790
	if (ctx.cr6.eq) goto loc_8237B790;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8237b768
	if (!ctx.cr6.eq) goto loc_8237B768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377690
	ctx.lr = 0x8237B6F0;
	sub_82377690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237b768
	if (!ctx.cr0.eq) goto loc_8237B768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// lhz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// bl 0x82377b98
	ctx.lr = 0x8237B708;
	sub_82377B98(ctx, base);
	// lhz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 104);
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8237b74c
	if (!ctx.cr6.eq) goto loc_8237B74C;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237b730
	if (!ctx.cr6.eq) goto loc_8237B730;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8237b790
	if (ctx.cr6.eq) goto loc_8237B790;
loc_8237B730:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// b 0x8237b790
	goto loc_8237B790;
loc_8237B74C:
	// cmplwi cr6,r5,32767
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32767, ctx.xer);
	// bne cr6,0x8237b760
	if (!ctx.cr6.eq) goto loc_8237B760;
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
loc_8237B760:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// b 0x8237b788
	goto loc_8237B788;
loc_8237B768:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bne cr6,0x8237b780
	if (!ctx.cr6.eq) goto loc_8237B780;
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
loc_8237B780:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8237B788:
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
loc_8237B790:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8237b848
	if (!ctx.cr6.eq) goto loc_8237B848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x8237B7AC;
	sub_82377B98(ctx, base);
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8237b848
	if (!ctx.cr6.eq) goto loc_8237B848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82377690
	ctx.lr = 0x8237B7CC;
	sub_82377690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237b848
	if (ctx.cr0.eq) goto loc_8237B848;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8237b7ec
	if (!ctx.cr6.eq) goto loc_8237B7EC;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237b800
	if (ctx.cr6.eq) goto loc_8237B800;
loc_8237B7EC:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237B800:
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8237d170
	ctx.lr = 0x8237B808;
	sub_8237D170(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823882f8
	ctx.lr = 0x8237B814;
	sub_823882F8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237b848
	if (!ctx.cr6.gt) goto loc_8237B848;
loc_8237B82C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388328
	ctx.lr = 0x8237B838;
	sub_82388328(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b82c
	if (ctx.cr6.lt) goto loc_8237B82C;
loc_8237B848:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237b890
	if (ctx.cr6.eq) goto loc_8237B890;
	// lhz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 48);
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8237b890
	if (!ctx.cr6.eq) goto loc_8237B890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// bl 0x82377b98
	ctx.lr = 0x8237B874;
	sub_82377B98(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x823882f8
	ctx.lr = 0x8237B884;
	sub_823882F8(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// sth r28,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r28.u16);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_8237B890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378ab8
	ctx.lr = 0x8237B898;
	sub_82378AB8(ctx, base);
	// b 0x8237b9f0
	goto loc_8237B9F0;
loc_8237B89C:
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// divw r9,r11,r30
	ctx.r9.s32 = ctx.r11.s32 / ctx.r30.s32;
	// mulli r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 * 120;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8237b8ec
	if (!ctx.cr6.eq) goto loc_8237B8EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389730
	ctx.lr = 0x8237B8C0;
	sub_82389730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x8237B8CC;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237B8E4;
	sub_82376E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x8237B8EC;
	sub_82389828(ctx, base);
loc_8237B8EC:
	// lhz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8237b958
	if (ctx.cr0.eq) goto loc_8237B958;
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// divw r9,r11,r30
	ctx.r9.s32 = ctx.r11.s32 / ctx.r30.s32;
	// mulli r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 * 120;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8237b958
	if (!ctx.cr6.eq) goto loc_8237B958;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389758
	ctx.lr = 0x8237B920;
	sub_82389758(ctx, base);
	// lhz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// lbz r30,101(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// bl 0x82357358
	ctx.lr = 0x8237B934;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237B94C;
	sub_82376E20(ctx, base);
	// sth r28,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r28.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389828
	ctx.lr = 0x8237B958;
	sub_82389828(ctx, base);
loc_8237B958:
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8237b9a8
	if (ctx.cr0.eq) goto loc_8237B9A8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823897c0
	ctx.lr = 0x8237B96C;
	sub_823897C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lhz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// bl 0x823897f0
	ctx.lr = 0x8237B978;
	sub_823897F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r30,117(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// bl 0x82357358
	ctx.lr = 0x8237B984;
	sub_82357358(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82376e20
	ctx.lr = 0x8237B99C;
	sub_82376E20(ctx, base);
	// sth r28,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r28.u16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82389828
	ctx.lr = 0x8237B9A8;
	sub_82389828(ctx, base);
loc_8237B9A8:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237b9f0
	if (ctx.cr0.eq) goto loc_8237B9F0;
	// addi r11,r31,94
	ctx.r11.s64 = ctx.r31.s64 + 94;
loc_8237B9C0:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm. r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8237b9d4
	if (!ctx.cr0.eq) goto loc_8237B9D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_8237B9D4:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8237b9c0
	if (ctx.cr6.lt) goto loc_8237B9C0;
loc_8237B9F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237B9FC"))) PPC_WEAK_FUNC(sub_8237B9FC);
PPC_FUNC_IMPL(__imp__sub_8237B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237BA00"))) PPC_WEAK_FUNC(sub_8237BA00);
PPC_FUNC_IMPL(__imp__sub_8237BA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8237BA08;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x823898a0
	ctx.lr = 0x8237BA28;
	sub_823898A0(ctx, base);
	// lwz r11,416(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 416);
	// addi r31,r23,416
	ctx.r31.s64 = ctx.r23.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237BA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8237bc40
	if (ctx.cr0.eq) goto loc_8237BC40;
loc_8237BA48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BA54;
	sub_82388550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82358508
	ctx.lr = 0x8237BA64;
	sub_82358508(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237BA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r29,r30,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BA8C;
	sub_82388550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x823893c0
	ctx.lr = 0x8237BA9C;
	sub_823893C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r24,r30,8
	ctx.r24.s64 = ctx.r30.s64 + 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823893f0
	ctx.lr = 0x8237BAB0;
	sub_823893F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// extsh. r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x8237bbc4
	if (!ctx.cr0.gt) goto loc_8237BBC4;
loc_8237BAC0:
	// add r30,r26,r24
	ctx.r30.u64 = ctx.r26.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r29,r26,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82388550
	ctx.lr = 0x8237BAD4;
	sub_82388550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82389400
	ctx.lr = 0x8237BADC;
	sub_82389400(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8237bb68
	if (ctx.cr6.eq) goto loc_8237BB68;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8237bb44
	if (ctx.cr6.eq) goto loc_8237BB44;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8237bb20
	if (ctx.cr6.eq) goto loc_8237BB20;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bne cr6,0x8237bb8c
	if (!ctx.cr6.eq) goto loc_8237BB8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BB08;
	sub_82388550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8237b448
	ctx.lr = 0x8237BB1C;
	sub_8237B448(ctx, base);
	// b 0x8237bb88
	goto loc_8237BB88;
loc_8237BB20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BB2C;
	sub_82388550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82376bc8
	ctx.lr = 0x8237BB40;
	sub_82376BC8(ctx, base);
	// b 0x8237bb88
	goto loc_8237BB88;
loc_8237BB44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BB50;
	sub_82388550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82379898
	ctx.lr = 0x8237BB64;
	sub_82379898(ctx, base);
	// b 0x8237bb88
	goto loc_8237BB88;
loc_8237BB68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BB74;
	sub_82388550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82379810
	ctx.lr = 0x8237BB88;
	sub_82379810(ctx, base);
loc_8237BB88:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8237BB8C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8237bbb0
	if (!ctx.cr6.gt) goto loc_8237BBB0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823885b0
	ctx.lr = 0x8237BBA4;
	sub_823885B0(ctx, base);
	// subf r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// b 0x8237bbb8
	goto loc_8237BBB8;
loc_8237BBB0:
	// bge cr6,0x8237bbb8
	if (!ctx.cr6.lt) goto loc_8237BBB8;
	// subf r26,r27,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r27.s64;
loc_8237BBB8:
	// extsh r28,r25
	ctx.r28.s64 = ctx.r25.s16;
	// subf. r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8237bac0
	if (ctx.cr0.gt) goto loc_8237BAC0;
loc_8237BBC4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8237bbe4
	if (!ctx.cr6.eq) goto loc_8237BBE4;
	// addi r30,r24,-12
	ctx.r30.s64 = ctx.r24.s64 + -12;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823885b0
	ctx.lr = 0x8237BBE0;
	sub_823885B0(ctx, base);
	// b 0x8237bc24
	goto loc_8237BC24;
loc_8237BBE4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823893e0
	ctx.lr = 0x8237BBEC;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x823893c8
	ctx.lr = 0x8237BBFC;
	sub_823893C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ab568
	ctx.lr = 0x8237BC04;
	sub_823AB568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r24,-8
	ctx.r4.s64 = ctx.r24.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388550
	ctx.lr = 0x8237BC14;
	sub_82388550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x8237BC20;
	sub_82358508(ctx, base);
	// add r30,r26,r24
	ctx.r30.u64 = ctx.r26.u64 + ctx.r24.u64;
loc_8237BC24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237BC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf. r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8237ba48
	if (!ctx.cr0.eq) goto loc_8237BA48;
loc_8237BC40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237BC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237BC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ab568
	ctx.lr = 0x8237BC70;
	sub_823AB568(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8237BC7C"))) PPC_WEAK_FUNC(sub_8237BC7C);
PPC_FUNC_IMPL(__imp__sub_8237BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237BC80"))) PPC_WEAK_FUNC(sub_8237BC80);
PPC_FUNC_IMPL(__imp__sub_8237BC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237BC88;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237bd4c
	if (!ctx.cr6.eq) goto loc_8237BD4C;
	// bl 0x82377770
	ctx.lr = 0x8237BCA4;
	sub_82377770(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8237bcd4
	if (ctx.cr6.lt) goto loc_8237BCD4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8237bcc8
	if (!ctx.cr6.gt) goto loc_8237BCC8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x8237bcd4
	if (!ctx.cr6.gt) goto loc_8237BCD4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x8237bcd4
	if (ctx.cr6.gt) goto loc_8237BCD4;
loc_8237BCC8:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8237bd4c
	goto loc_8237BD4C;
loc_8237BCD4:
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237bd08
	if (!ctx.cr6.gt) goto loc_8237BD08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8237BCE8:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8238a368
	ctx.lr = 0x8237BCF4;
	sub_8238A368(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237bce8
	if (ctx.cr6.lt) goto loc_8237BCE8;
loc_8237BD08:
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r11.u16);
	// bl 0x82376a50
	ctx.lr = 0x8237BD1C;
	sub_82376A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378050
	ctx.lr = 0x8237BD24;
	sub_82378050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237ba00
	ctx.lr = 0x8237BD2C;
	sub_8237BA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b630
	ctx.lr = 0x8237BD34;
	sub_8237B630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82376ab0
	ctx.lr = 0x8237BD3C;
	sub_82376AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823772b8
	ctx.lr = 0x8237BD44;
	sub_823772B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823793e8
	ctx.lr = 0x8237BD4C;
	sub_823793E8(ctx, base);
loc_8237BD4C:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237BD58"))) PPC_WEAK_FUNC(sub_8237BD58);
PPC_FUNC_IMPL(__imp__sub_8237BD58) {
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
	// li r10,2048
	ctx.r10.s64 = 2048;
	// li r9,8000
	ctx.r9.s64 = 8000;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x823585a0
	ctx.lr = 0x8237BD9C;
	sub_823585A0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237BDB8"))) PPC_WEAK_FUNC(sub_8237BDB8);
PPC_FUNC_IMPL(__imp__sub_8237BDB8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32436
	ctx.r11.s64 = ctx.r11.s64 + 32436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8237bd58
	ctx.lr = 0x8237BDDC;
	sub_8237BD58(ctx, base);
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

__attribute__((alias("__imp__sub_8237BDF4"))) PPC_WEAK_FUNC(sub_8237BDF4);
PPC_FUNC_IMPL(__imp__sub_8237BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237BDF8"))) PPC_WEAK_FUNC(sub_8237BDF8);
PPC_FUNC_IMPL(__imp__sub_8237BDF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237BE2C"))) PPC_WEAK_FUNC(sub_8237BE2C);
PPC_FUNC_IMPL(__imp__sub_8237BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237BE30"))) PPC_WEAK_FUNC(sub_8237BE30);
PPC_FUNC_IMPL(__imp__sub_8237BE30) {
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
	// addi r11,r11,32436
	ctx.r11.s64 = ctx.r11.s64 + 32436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8237bd58
	ctx.lr = 0x8237BE5C;
	sub_8237BD58(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8237BEA8"))) PPC_WEAK_FUNC(sub_8237BEA8);
PPC_FUNC_IMPL(__imp__sub_8237BEA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237BEDC"))) PPC_WEAK_FUNC(sub_8237BEDC);
PPC_FUNC_IMPL(__imp__sub_8237BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237BEE0"))) PPC_WEAK_FUNC(sub_8237BEE0);
PPC_FUNC_IMPL(__imp__sub_8237BEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237BEE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8237bf00
	if (!ctx.cr6.eq) goto loc_8237BF00;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8237BF00:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8237bf14
	if (!ctx.cr0.eq) goto loc_8237BF14;
loc_8237BF0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237bf8c
	goto loc_8237BF8C;
loc_8237BF14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x8237BF1C;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x8237BF2C;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237BF38;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237bf0c
	if (ctx.cr6.eq) goto loc_8237BF0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x8237BF4C;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237bf80
	if (ctx.cr6.eq) goto loc_8237BF80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x8237BF68;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237bf80
	if (ctx.cr6.eq) goto loc_8237BF80;
	// bl 0x82357240
	ctx.lr = 0x8237BF78;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8237BF80:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8237BF8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237BF94"))) PPC_WEAK_FUNC(sub_8237BF94);
PPC_FUNC_IMPL(__imp__sub_8237BF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237BF98"))) PPC_WEAK_FUNC(sub_8237BF98);
PPC_FUNC_IMPL(__imp__sub_8237BF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237BFA0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8237bfd8
	if (ctx.cr6.gt) goto loc_8237BFD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8237bee0
	ctx.lr = 0x8237BFC8;
	sub_8237BEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237bfd8
	if (!ctx.cr0.eq) goto loc_8237BFD8;
loc_8237BFD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237c00c
	goto loc_8237C00C;
loc_8237BFD8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237bfd0
	if (ctx.cr6.eq) goto loc_8237BFD0;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8237C00C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237C014"))) PPC_WEAK_FUNC(sub_8237C014);
PPC_FUNC_IMPL(__imp__sub_8237C014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C018"))) PPC_WEAK_FUNC(sub_8237C018);
PPC_FUNC_IMPL(__imp__sub_8237C018) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32220
	ctx.r10.s64 = ctx.r10.s64 + 32220;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237C074"))) PPC_WEAK_FUNC(sub_8237C074);
PPC_FUNC_IMPL(__imp__sub_8237C074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C078"))) PPC_WEAK_FUNC(sub_8237C078);
PPC_FUNC_IMPL(__imp__sub_8237C078) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r10,r10,32220
	ctx.r10.s64 = ctx.r10.s64 + 32220;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x823826f8
	sub_823826F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237C090"))) PPC_WEAK_FUNC(sub_8237C090);
PPC_FUNC_IMPL(__imp__sub_8237C090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237C098;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237c128
	if (!ctx.cr6.gt) goto loc_8237C128;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8237C104:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8237bf98
	ctx.lr = 0x8237C114;
	sub_8237BF98(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237c104
	if (ctx.cr6.lt) goto loc_8237C104;
loc_8237C128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237C130"))) PPC_WEAK_FUNC(sub_8237C130);
PPC_FUNC_IMPL(__imp__sub_8237C130) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r11,r11,32220
	ctx.r11.s64 = ctx.r11.s64 + 32220;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823826f8
	ctx.lr = 0x8237C160;
	sub_823826F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8237c170
	if (ctx.cr0.eq) goto loc_8237C170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x8237C170;
	sub_82357128(ctx, base);
loc_8237C170:
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

__attribute__((alias("__imp__sub_8237C18C"))) PPC_WEAK_FUNC(sub_8237C18C);
PPC_FUNC_IMPL(__imp__sub_8237C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C190"))) PPC_WEAK_FUNC(sub_8237C190);
PPC_FUNC_IMPL(__imp__sub_8237C190) {
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
	// bl 0x82355d50
	ctx.lr = 0x8237C1A8;
	sub_82355D50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,32224
	ctx.r10.s64 = ctx.r11.s64 + 32224;
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

__attribute__((alias("__imp__sub_8237C1CC"))) PPC_WEAK_FUNC(sub_8237C1CC);
PPC_FUNC_IMPL(__imp__sub_8237C1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C1D0"))) PPC_WEAK_FUNC(sub_8237C1D0);
PPC_FUNC_IMPL(__imp__sub_8237C1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,32224
	ctx.r10.s64 = ctx.r11.s64 + 32224;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82355de8
	sub_82355DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237C1E0"))) PPC_WEAK_FUNC(sub_8237C1E0);
PPC_FUNC_IMPL(__imp__sub_8237C1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82356220
	sub_82356220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237C1E4"))) PPC_WEAK_FUNC(sub_8237C1E4);
PPC_FUNC_IMPL(__imp__sub_8237C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C1E8"))) PPC_WEAK_FUNC(sub_8237C1E8);
PPC_FUNC_IMPL(__imp__sub_8237C1E8) {
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
	// addi r10,r11,32224
	ctx.r10.s64 = ctx.r11.s64 + 32224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x8237C214;
	sub_82355DE8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237c22c
	if (ctx.cr6.eq) goto loc_8237C22C;
	// bl 0x82357128
	ctx.lr = 0x8237C228;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237C22C:
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

__attribute__((alias("__imp__sub_8237C244"))) PPC_WEAK_FUNC(sub_8237C244);
PPC_FUNC_IMPL(__imp__sub_8237C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C248"))) PPC_WEAK_FUNC(sub_8237C248);
PPC_FUNC_IMPL(__imp__sub_8237C248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237C250;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237C26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359918
	ctx.lr = 0x8237C274;
	sub_82359918(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237c334
	if (ctx.cr6.eq) goto loc_8237C334;
loc_8237C284:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x8237C290;
	sub_82359C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x8237C2A0;
	sub_82359D58(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237c328
	if (ctx.cr6.eq) goto loc_8237C328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82359ba8
	ctx.lr = 0x8237C2BC;
	sub_82359BA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237c2f8
	if (!ctx.cr6.eq) goto loc_8237C2F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x8237C2D0;
	sub_82359D58(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x8237C2E0;
	sub_82359C98(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82359248
	ctx.lr = 0x8237C2F0;
	sub_82359248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237c46c
	if (ctx.cr6.eq) goto loc_8237C46C;
loc_8237C2F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359990
	ctx.lr = 0x8237C304;
	sub_82359990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8237c314
	if (!ctx.cr6.eq) goto loc_8237C314;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8237C314:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235a2a0
	ctx.lr = 0x8237C320;
	sub_8235A2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237c46c
	if (ctx.cr6.eq) goto loc_8237C46C;
loc_8237C328:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8237c284
	if (ctx.cr6.lt) goto loc_8237C284;
loc_8237C334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355a80
	ctx.lr = 0x8237C33C;
	sub_82355A80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823561e0
	ctx.lr = 0x8237C348;
	sub_823561E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355a88
	ctx.lr = 0x8237C350;
	sub_82355A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823561f0
	ctx.lr = 0x8237C35C;
	sub_823561F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355a90
	ctx.lr = 0x8237C364;
	sub_82355A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356210
	ctx.lr = 0x8237C370;
	sub_82356210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355aa0
	ctx.lr = 0x8237C378;
	sub_82355AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355a98
	ctx.lr = 0x8237C384;
	sub_82355A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8237C38C;
	sub_82355AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355aa8
	ctx.lr = 0x8237C398;
	sub_82355AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8237C3A0;
	sub_82355AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ab8
	ctx.lr = 0x8237C3AC;
	sub_82355AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8237C3B4;
	sub_82355AD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ac8
	ctx.lr = 0x8237C3C0;
	sub_82355AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8237C3C8;
	sub_82355AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ad8
	ctx.lr = 0x8237C3D4;
	sub_82355AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355af0
	ctx.lr = 0x8237C3DC;
	sub_82355AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ae8
	ctx.lr = 0x8237C3E8;
	sub_82355AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b00
	ctx.lr = 0x8237C3F0;
	sub_82355B00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355af8
	ctx.lr = 0x8237C3FC;
	sub_82355AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b10
	ctx.lr = 0x8237C404;
	sub_82355B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355b08
	ctx.lr = 0x8237C410;
	sub_82355B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b20
	ctx.lr = 0x8237C418;
	sub_82355B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355b18
	ctx.lr = 0x8237C424;
	sub_82355B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b30
	ctx.lr = 0x8237C42C;
	sub_82355B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355b28
	ctx.lr = 0x8237C438;
	sub_82355B28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b38
	ctx.lr = 0x8237C440;
	sub_82355B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355b40
	ctx.lr = 0x8237C44C;
	sub_82355B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355b50
	ctx.lr = 0x8237C454;
	sub_82355B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355b48
	ctx.lr = 0x8237C460;
	sub_82355B48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8237C46C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237C480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237C48C"))) PPC_WEAK_FUNC(sub_8237C48C);
PPC_FUNC_IMPL(__imp__sub_8237C48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C490"))) PPC_WEAK_FUNC(sub_8237C490);
PPC_FUNC_IMPL(__imp__sub_8237C490) {
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
	// bl 0x82355d50
	ctx.lr = 0x8237C4B0;
	sub_82355D50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,32224
	ctx.r10.s64 = ctx.r11.s64 + 32224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237c248
	ctx.lr = 0x8237C4C8;
	sub_8237C248(ctx, base);
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

__attribute__((alias("__imp__sub_8237C4E4"))) PPC_WEAK_FUNC(sub_8237C4E4);
PPC_FUNC_IMPL(__imp__sub_8237C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C4E8"))) PPC_WEAK_FUNC(sub_8237C4E8);
PPC_FUNC_IMPL(__imp__sub_8237C4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237c490
	ctx.lr = 0x8237C504;
	sub_8237C490(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8237c1e0
	ctx.lr = 0x8237C510;
	sub_8237C1E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237c1d0
	ctx.lr = 0x8237C51C;
	sub_8237C1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237C534"))) PPC_WEAK_FUNC(sub_8237C534);
PPC_FUNC_IMPL(__imp__sub_8237C534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C538"))) PPC_WEAK_FUNC(sub_8237C538);
PPC_FUNC_IMPL(__imp__sub_8237C538) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237c584
	if (ctx.cr6.eq) goto loc_8237C584;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8237c584
	if (ctx.cr6.eq) goto loc_8237C584;
	// cmpwi cr6,r5,1152
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1152, ctx.xer);
	// ble cr6,0x8237c574
	if (!ctx.cr6.gt) goto loc_8237C574;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237c588
	goto loc_8237C588;
loc_8237C574:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,236
	ctx.r3.s64 = ctx.r30.s64 + 236;
	// bl 0x82358508
	ctx.lr = 0x8237C580;
	sub_82358508(ctx, base);
	// stw r31,1260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1260, ctx.r31.u32);
loc_8237C584:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237C588:
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

__attribute__((alias("__imp__sub_8237C5A0"))) PPC_WEAK_FUNC(sub_8237C5A0);
PPC_FUNC_IMPL(__imp__sub_8237C5A0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,32248
	ctx.r9.s64 = ctx.r11.s64 + 32248;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// bl 0x8237c190
	ctx.lr = 0x8237C5D8;
	sub_8237C190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// stw r11,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x8237C62C;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_8237C644"))) PPC_WEAK_FUNC(sub_8237C644);
PPC_FUNC_IMPL(__imp__sub_8237C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C648"))) PPC_WEAK_FUNC(sub_8237C648);
PPC_FUNC_IMPL(__imp__sub_8237C648) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,32248
	ctx.r10.s64 = ctx.r11.s64 + 32248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237c1d0
	ctx.lr = 0x8237C670;
	sub_8237C1D0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,31588
	ctx.r8.s64 = ctx.r9.s64 + 31588;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237C690"))) PPC_WEAK_FUNC(sub_8237C690);
PPC_FUNC_IMPL(__imp__sub_8237C690) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,32248
	ctx.r10.s64 = ctx.r11.s64 + 32248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8237c1d0
	ctx.lr = 0x8237C6C0;
	sub_8237C1D0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31588
	ctx.r7.s64 = ctx.r9.s64 + 31588;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8237c6e4
	if (ctx.cr6.eq) goto loc_8237C6E4;
	// bl 0x82357128
	ctx.lr = 0x8237C6E0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237C6E4:
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

__attribute__((alias("__imp__sub_8237C6FC"))) PPC_WEAK_FUNC(sub_8237C6FC);
PPC_FUNC_IMPL(__imp__sub_8237C6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C700"))) PPC_WEAK_FUNC(sub_8237C700);
PPC_FUNC_IMPL(__imp__sub_8237C700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32256
	ctx.r9.s64 = ctx.r10.s64 + 32256;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237C738"))) PPC_WEAK_FUNC(sub_8237C738);
PPC_FUNC_IMPL(__imp__sub_8237C738) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,32256
	ctx.r10.s64 = ctx.r11.s64 + 32256;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8237c780
	if (ctx.cr6.eq) goto loc_8237C780;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237C778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8237C780:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237C794"))) PPC_WEAK_FUNC(sub_8237C794);
PPC_FUNC_IMPL(__imp__sub_8237C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C798"))) PPC_WEAK_FUNC(sub_8237C798);
PPC_FUNC_IMPL(__imp__sub_8237C798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8237C7AC"))) PPC_WEAK_FUNC(sub_8237C7AC);
PPC_FUNC_IMPL(__imp__sub_8237C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C7B0"))) PPC_WEAK_FUNC(sub_8237C7B0);
PPC_FUNC_IMPL(__imp__sub_8237C7B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237C7C8"))) PPC_WEAK_FUNC(sub_8237C7C8);
PPC_FUNC_IMPL(__imp__sub_8237C7C8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,32256
	ctx.r10.s64 = ctx.r11.s64 + 32256;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8237c818
	if (ctx.cr6.eq) goto loc_8237C818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237C810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8237C818:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237c830
	if (ctx.cr6.eq) goto loc_8237C830;
	// bl 0x82357128
	ctx.lr = 0x8237C82C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237C830:
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

__attribute__((alias("__imp__sub_8237C848"))) PPC_WEAK_FUNC(sub_8237C848);
PPC_FUNC_IMPL(__imp__sub_8237C848) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8237c880
	if (ctx.cr6.eq) goto loc_8237C880;
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
loc_8237C880:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237c8b0
	if (ctx.cr6.eq) goto loc_8237C8B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8237C8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237c8b0
	if (ctx.cr6.eq) goto loc_8237C8B0;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_8237C8B0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237C8C4"))) PPC_WEAK_FUNC(sub_8237C8C4);
PPC_FUNC_IMPL(__imp__sub_8237C8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237C8C8"))) PPC_WEAK_FUNC(sub_8237C8C8);
PPC_FUNC_IMPL(__imp__sub_8237C8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8237C8D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8237C8E4;
	sub_8235BF58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x823570e0
	ctx.lr = 0x8237C8F8;
	sub_823570E0(ctx, base);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bgt cr6,0x8237cf3c
	if (ctx.cr6.gt) goto loc_8237CF3C;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14052
	ctx.r12.s64 = ctx.r12.s64 + -14052;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-13840(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13840);
	// lwz r17,-13804(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13804);
	// lwz r17,-13768(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13768);
	// lwz r17,-13736(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13736);
	// lwz r17,-13700(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13700);
	// lwz r17,-13664(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13664);
	// lwz r17,-13632(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13632);
	// lwz r17,-13600(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13600);
	// lwz r17,-12560(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12560);
	// lwz r17,-13568(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13568);
	// lwz r17,-13536(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13536);
	// lwz r17,-13568(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13568);
	// lwz r17,-13504(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13504);
	// lwz r17,-13472(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13472);
	// lwz r17,-13440(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13440);
	// lwz r17,-13408(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13408);
	// lwz r17,-13376(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13376);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-13344(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13344);
	// lwz r17,-13312(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13312);
	// lwz r17,-13276(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13276);
	// lwz r17,-13240(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13240);
	// lwz r17,-13208(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13208);
	// lwz r17,-13176(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13176);
	// lwz r17,-13140(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13140);
	// lwz r17,-13104(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13104);
	// lwz r17,-13068(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13068);
	// lwz r17,-13036(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13036);
	// lwz r17,-13000(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -13000);
	// lwz r17,-12808(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12808);
	// lwz r17,-12776(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12776);
	// lwz r17,-12744(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12744);
	// lwz r17,-12708(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12708);
	// lwz r17,-12672(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12672);
	// lwz r17,-12636(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12636);
	// lwz r17,-12600(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12600);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12484(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12484);
	// lwz r17,-12968(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12968);
	// lwz r17,-12936(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12936);
	// lwz r17,-12904(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12904);
	// lwz r17,-12872(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12872);
	// lwz r17,-12840(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + -12840);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823570f0
	ctx.lr = 0x8237C9F8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a0560
	ctx.lr = 0x8237CA0C;
	sub_823A0560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823570f0
	ctx.lr = 0x8237CA1C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a0560
	ctx.lr = 0x8237CA30;
	sub_823A0560(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CA40;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8239f180
	ctx.lr = 0x8237CA50;
	sub_8239F180(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CA60;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239ddc0
	ctx.lr = 0x8237CA74;
	sub_8239DDC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CA84;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8239ddc0
	ctx.lr = 0x8237CA98;
	sub_8239DDC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x823570f0
	ctx.lr = 0x8237CAA8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8239d0b0
	ctx.lr = 0x8237CAB8;
	sub_8239D0B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x823570f0
	ctx.lr = 0x8237CAC8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8239c818
	ctx.lr = 0x8237CAD8;
	sub_8239C818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CAE8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8239bdc8
	ctx.lr = 0x8237CAF8;
	sub_8239BDC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x823570f0
	ctx.lr = 0x8237CB08;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8239a5b0
	ctx.lr = 0x8237CB18;
	sub_8239A5B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CB28;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82399d88
	ctx.lr = 0x8237CB38;
	sub_82399D88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x823570f0
	ctx.lr = 0x8237CB48;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82397f20
	ctx.lr = 0x8237CB58;
	sub_82397F20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CB68;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82397728
	ctx.lr = 0x8237CB78;
	sub_82397728(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CB88;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82396c58
	ctx.lr = 0x8237CB98;
	sub_82396C58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CBA8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82396600
	ctx.lr = 0x8237CBB8;
	sub_82396600(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CBC8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82396160
	ctx.lr = 0x8237CBD8;
	sub_82396160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CBE8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82395a98
	ctx.lr = 0x8237CBF8;
	sub_82395A98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CC08;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82394990
	ctx.lr = 0x8237CC1C;
	sub_82394990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CC2C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82394990
	ctx.lr = 0x8237CC40;
	sub_82394990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CC50;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82394538
	ctx.lr = 0x8237CC60;
	sub_82394538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CC70;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82393248
	ctx.lr = 0x8237CC80;
	sub_82393248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CC90;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82392be0
	ctx.lr = 0x8237CCA4;
	sub_82392BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CCB4;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82392be0
	ctx.lr = 0x8237CCC8;
	sub_82392BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CCD8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82392be0
	ctx.lr = 0x8237CCEC;
	sub_82392BE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CCFC;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82392690
	ctx.lr = 0x8237CD0C;
	sub_82392690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x823570f0
	ctx.lr = 0x8237CD1C;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82391ff0
	ctx.lr = 0x8237CD30;
	sub_82391FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CD40;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823910e8
	ctx.lr = 0x8237CD50;
	sub_823910E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CD60;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82390688
	ctx.lr = 0x8237CD70;
	sub_82390688(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CD80;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82390210
	ctx.lr = 0x8237CD90;
	sub_82390210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CDA0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238fb90
	ctx.lr = 0x8237CDB0;
	sub_8238FB90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x823570f0
	ctx.lr = 0x8237CDC0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238f6d0
	ctx.lr = 0x8237CDD0;
	sub_8238F6D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x8237CDE0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238f4d8
	ctx.lr = 0x8237CDF0;
	sub_8238F4D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x823570f0
	ctx.lr = 0x8237CE00;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238f0e8
	ctx.lr = 0x8237CE10;
	sub_8238F0E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x823570f0
	ctx.lr = 0x8237CE20;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238bd88
	ctx.lr = 0x8237CE30;
	sub_8238BD88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x8237CE40;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8238a620
	ctx.lr = 0x8237CE54;
	sub_8238A620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x8237CE64;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8238a620
	ctx.lr = 0x8237CE78;
	sub_8238A620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x8237CE88;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8238a620
	ctx.lr = 0x8237CE9C;
	sub_8238A620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x8237CEAC;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8238a620
	ctx.lr = 0x8237CEC0;
	sub_8238A620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x823570f0
	ctx.lr = 0x8237CED0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237ceec
	if (ctx.cr6.eq) goto loc_8237CEEC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8238a620
	ctx.lr = 0x8237CEE4;
	sub_8238A620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8237cef0
	goto loc_8237CEF0;
loc_8237CEEC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8237CEF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237CEF8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8237cf1c
	if (!ctx.cr6.eq) goto loc_8237CF1C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8237CF1C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stw r27,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8237CF3C:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stw r29,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8237CF58"))) PPC_WEAK_FUNC(sub_8237CF58);
PPC_FUNC_IMPL(__imp__sub_8237CF58) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237cf98
	if (ctx.cr6.eq) goto loc_8237CF98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237CF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8237CF98:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8237CFB8"))) PPC_WEAK_FUNC(sub_8237CFB8);
PPC_FUNC_IMPL(__imp__sub_8237CFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237CFC0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237cff0
	if (!ctx.cr6.gt) goto loc_8237CFF0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bgt 0x8237d128
	if (ctx.cr0.gt) goto loc_8237D128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8237CFF0:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8237d00c
	if (!ctx.cr6.eq) goto loc_8237D00C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8237D00C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8237d104
	if (ctx.cr6.eq) goto loc_8237D104;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8237d128
	if (!ctx.cr6.eq) goto loc_8237D128;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8237d090
	if (!ctx.cr6.eq) goto loc_8237D090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8237cf58
	ctx.lr = 0x8237D04C;
	sub_8237CF58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237d128
	if (ctx.cr6.eq) goto loc_8237D128;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8237D090:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8237d128
	if (!ctx.cr6.eq) goto loc_8237D128;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8237cf58
	ctx.lr = 0x8237D0AC;
	sub_8237CF58(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8237D0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237d128
	if (ctx.cr6.eq) goto loc_8237D128;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8237D0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8237D104:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
loc_8237D128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237D130"))) PPC_WEAK_FUNC(sub_8237D130);
PPC_FUNC_IMPL(__imp__sub_8237D130) {
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
	// bl 0x82088600
	ctx.lr = 0x8237D148;
	sub_82088600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D170"))) PPC_WEAK_FUNC(sub_8237D170);
PPC_FUNC_IMPL(__imp__sub_8237D170) {
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
	// beq cr6,0x8237d1b8
	if (ctx.cr6.eq) goto loc_8237D1B8;
	// bl 0x82088600
	ctx.lr = 0x8237D194;
	sub_82088600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8237D1B8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D1CC"))) PPC_WEAK_FUNC(sub_8237D1CC);
PPC_FUNC_IMPL(__imp__sub_8237D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D1D0"))) PPC_WEAK_FUNC(sub_8237D1D0);
PPC_FUNC_IMPL(__imp__sub_8237D1D0) {
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
	// bne cr6,0x8237d200
	if (!ctx.cr6.eq) goto loc_8237D200;
	// bl 0x82088600
	ctx.lr = 0x8237D1F4;
	sub_82088600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8237D200:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D214"))) PPC_WEAK_FUNC(sub_8237D214);
PPC_FUNC_IMPL(__imp__sub_8237D214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D218"))) PPC_WEAK_FUNC(sub_8237D218);
PPC_FUNC_IMPL(__imp__sub_8237D218) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237d24c
	if (ctx.cr6.eq) goto loc_8237D24C;
	// bl 0x82088600
	ctx.lr = 0x8237D240;
	sub_82088600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_8237D24C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,11484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
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

__attribute__((alias("__imp__sub_8237D288"))) PPC_WEAK_FUNC(sub_8237D288);
PPC_FUNC_IMPL(__imp__sub_8237D288) {
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
	// bl 0x823a3d40
	ctx.lr = 0x8237D29C;
	sub_823A3D40(ctx, base);
	// bl 0x823a32b8
	ctx.lr = 0x8237D2A0;
	sub_823A32B8(ctx, base);
	// bl 0x823a1db8
	ctx.lr = 0x8237D2A4;
	sub_823A1DB8(ctx, base);
	// bl 0x823a0ec0
	ctx.lr = 0x8237D2A8;
	sub_823A0EC0(ctx, base);
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d2d4
	if (ctx.cr6.eq) goto loc_8237D2D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4852, ctx.r11.u32);
loc_8237D2D4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D2E8"))) PPC_WEAK_FUNC(sub_8237D2E8);
PPC_FUNC_IMPL(__imp__sub_8237D2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4852(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D2F4"))) PPC_WEAK_FUNC(sub_8237D2F4);
PPC_FUNC_IMPL(__imp__sub_8237D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D2F8"))) PPC_WEAK_FUNC(sub_8237D2F8);
PPC_FUNC_IMPL(__imp__sub_8237D2F8) {
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
	// bl 0x823a3d90
	ctx.lr = 0x8237D310;
	sub_823A3D90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237d32c
	if (!ctx.cr6.eq) goto loc_8237D32C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8237D32C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a3f20
	ctx.lr = 0x8237D334;
	sub_823A3F20(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D348"))) PPC_WEAK_FUNC(sub_8237D348);
PPC_FUNC_IMPL(__imp__sub_8237D348) {
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
	// bl 0x823a3d90
	ctx.lr = 0x8237D360;
	sub_823A3D90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237d37c
	if (!ctx.cr6.eq) goto loc_8237D37C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8237D37C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a3ff8
	ctx.lr = 0x8237D384;
	sub_823A3FF8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D398"))) PPC_WEAK_FUNC(sub_8237D398);
PPC_FUNC_IMPL(__imp__sub_8237D398) {
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
	// bl 0x823a3d90
	ctx.lr = 0x8237D3A8;
	sub_823A3D90(ctx, base);
	// bl 0x823a3e10
	ctx.lr = 0x8237D3AC;
	sub_823A3E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D3BC"))) PPC_WEAK_FUNC(sub_8237D3BC);
PPC_FUNC_IMPL(__imp__sub_8237D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D3C0"))) PPC_WEAK_FUNC(sub_8237D3C0);
PPC_FUNC_IMPL(__imp__sub_8237D3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823a0f10
	ctx.lr = 0x8237D3D8;
	sub_823A0F10(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823a40f0
	ctx.lr = 0x8237D3E0;
	sub_823A40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D3F4"))) PPC_WEAK_FUNC(sub_8237D3F4);
PPC_FUNC_IMPL(__imp__sub_8237D3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D3F8"))) PPC_WEAK_FUNC(sub_8237D3F8);
PPC_FUNC_IMPL(__imp__sub_8237D3F8) {
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
	// bl 0x823a0f10
	ctx.lr = 0x8237D408;
	sub_823A0F10(ctx, base);
	// bl 0x823a4120
	ctx.lr = 0x8237D40C;
	sub_823A4120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D41C"))) PPC_WEAK_FUNC(sub_8237D41C);
PPC_FUNC_IMPL(__imp__sub_8237D41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D420"))) PPC_WEAK_FUNC(sub_8237D420);
PPC_FUNC_IMPL(__imp__sub_8237D420) {
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
	// bl 0x823a0f10
	ctx.lr = 0x8237D438;
	sub_823A0F10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a1020
	ctx.lr = 0x8237D440;
	sub_823A1020(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D454"))) PPC_WEAK_FUNC(sub_8237D454);
PPC_FUNC_IMPL(__imp__sub_8237D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D458"))) PPC_WEAK_FUNC(sub_8237D458);
PPC_FUNC_IMPL(__imp__sub_8237D458) {
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
	// bl 0x823a0f10
	ctx.lr = 0x8237D478;
	sub_823A0F10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a4130
	ctx.lr = 0x8237D484;
	sub_823A4130(ctx, base);
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

__attribute__((alias("__imp__sub_8237D49C"))) PPC_WEAK_FUNC(sub_8237D49C);
PPC_FUNC_IMPL(__imp__sub_8237D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D4A0"))) PPC_WEAK_FUNC(sub_8237D4A0);
PPC_FUNC_IMPL(__imp__sub_8237D4A0) {
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
	// bl 0x823a0f10
	ctx.lr = 0x8237D4B0;
	sub_823A0F10(ctx, base);
	// bl 0x823a4148
	ctx.lr = 0x8237D4B4;
	sub_823A4148(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D4C4"))) PPC_WEAK_FUNC(sub_8237D4C4);
PPC_FUNC_IMPL(__imp__sub_8237D4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D4C8"))) PPC_WEAK_FUNC(sub_8237D4C8);
PPC_FUNC_IMPL(__imp__sub_8237D4C8) {
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
	// bl 0x823a43b0
	ctx.lr = 0x8237D4E8;
	sub_823A43B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a4e38
	ctx.lr = 0x8237D4F4;
	sub_823A4E38(ctx, base);
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

__attribute__((alias("__imp__sub_8237D50C"))) PPC_WEAK_FUNC(sub_8237D50C);
PPC_FUNC_IMPL(__imp__sub_8237D50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D510"))) PPC_WEAK_FUNC(sub_8237D510);
PPC_FUNC_IMPL(__imp__sub_8237D510) {
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
	// bl 0x823a43b0
	ctx.lr = 0x8237D528;
	sub_823A43B0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a4a28
	ctx.lr = 0x8237D534;
	sub_823A4A28(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D548"))) PPC_WEAK_FUNC(sub_8237D548);
PPC_FUNC_IMPL(__imp__sub_8237D548) {
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
	// bl 0x823a43b0
	ctx.lr = 0x8237D560;
	sub_823A43B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a4a28
	ctx.lr = 0x8237D56C;
	sub_823A4A28(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D580"))) PPC_WEAK_FUNC(sub_8237D580);
PPC_FUNC_IMPL(__imp__sub_8237D580) {
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
	// bl 0x823a43b0
	ctx.lr = 0x8237D598;
	sub_823A43B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a4ad8
	ctx.lr = 0x8237D5A0;
	sub_823A4AD8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D5B4"))) PPC_WEAK_FUNC(sub_8237D5B4);
PPC_FUNC_IMPL(__imp__sub_8237D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D5B8"))) PPC_WEAK_FUNC(sub_8237D5B8);
PPC_FUNC_IMPL(__imp__sub_8237D5B8) {
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
	// bl 0x823a43b0
	ctx.lr = 0x8237D5D0;
	sub_823A43B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a4b68
	ctx.lr = 0x8237D5D8;
	sub_823A4B68(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D5EC"))) PPC_WEAK_FUNC(sub_8237D5EC);
PPC_FUNC_IMPL(__imp__sub_8237D5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D5F0"))) PPC_WEAK_FUNC(sub_8237D5F0);
PPC_FUNC_IMPL(__imp__sub_8237D5F0) {
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
	// bl 0x823a43b0
	ctx.lr = 0x8237D600;
	sub_823A43B0(ctx, base);
	// bl 0x823a43c8
	ctx.lr = 0x8237D604;
	sub_823A43C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D614"))) PPC_WEAK_FUNC(sub_8237D614);
PPC_FUNC_IMPL(__imp__sub_8237D614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D618"))) PPC_WEAK_FUNC(sub_8237D618);
PPC_FUNC_IMPL(__imp__sub_8237D618) {
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
	// bl 0x823a3308
	ctx.lr = 0x8237D638;
	sub_823A3308(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a37a0
	ctx.lr = 0x8237D644;
	sub_823A37A0(ctx, base);
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

__attribute__((alias("__imp__sub_8237D65C"))) PPC_WEAK_FUNC(sub_8237D65C);
PPC_FUNC_IMPL(__imp__sub_8237D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D660"))) PPC_WEAK_FUNC(sub_8237D660);
PPC_FUNC_IMPL(__imp__sub_8237D660) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823a3308
	ctx.lr = 0x8237D678;
	sub_823A3308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a3830
	ctx.lr = 0x8237D680;
	sub_823A3830(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_8237D69C"))) PPC_WEAK_FUNC(sub_8237D69C);
PPC_FUNC_IMPL(__imp__sub_8237D69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D6A0"))) PPC_WEAK_FUNC(sub_8237D6A0);
PPC_FUNC_IMPL(__imp__sub_8237D6A0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823a3308
	ctx.lr = 0x8237D6C0;
	sub_823A3308(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a3ba0
	ctx.lr = 0x8237D6CC;
	sub_823A3BA0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_8237D6EC"))) PPC_WEAK_FUNC(sub_8237D6EC);
PPC_FUNC_IMPL(__imp__sub_8237D6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D6F0"))) PPC_WEAK_FUNC(sub_8237D6F0);
PPC_FUNC_IMPL(__imp__sub_8237D6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237D6F8;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x823a3308
	ctx.lr = 0x8237D71C;
	sub_823A3308(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a33a0
	ctx.lr = 0x8237D738;
	sub_823A33A0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237D74C"))) PPC_WEAK_FUNC(sub_8237D74C);
PPC_FUNC_IMPL(__imp__sub_8237D74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D750"))) PPC_WEAK_FUNC(sub_8237D750);
PPC_FUNC_IMPL(__imp__sub_8237D750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237D758;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8237d794
	if (ctx.cr6.eq) goto loc_8237D794;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8237D794:
	// bl 0x823a1e50
	ctx.lr = 0x8237D798;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237D7C0"))) PPC_WEAK_FUNC(sub_8237D7C0);
PPC_FUNC_IMPL(__imp__sub_8237D7C0) {
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
	// bl 0x823a0f10
	ctx.lr = 0x8237D7D0;
	sub_823A0F10(ctx, base);
	// bl 0x823ac6b8
	ctx.lr = 0x8237D7D4;
	sub_823AC6B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D7E4"))) PPC_WEAK_FUNC(sub_8237D7E4);
PPC_FUNC_IMPL(__imp__sub_8237D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D7E8"))) PPC_WEAK_FUNC(sub_8237D7E8);
PPC_FUNC_IMPL(__imp__sub_8237D7E8) {
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
	// bl 0x823a3308
	ctx.lr = 0x8237D7F8;
	sub_823A3308(ctx, base);
	// bl 0x823a36b0
	ctx.lr = 0x8237D7FC;
	sub_823A36B0(ctx, base);
	// bl 0x823a1e50
	ctx.lr = 0x8237D800;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D810;
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

__attribute__((alias("__imp__sub_8237D820"))) PPC_WEAK_FUNC(sub_8237D820);
PPC_FUNC_IMPL(__imp__sub_8237D820) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32288
	ctx.r9.s64 = ctx.r11.s64 + 32288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8237d854
	if (ctx.cr6.eq) goto loc_8237D854;
	// bl 0x82357128
	ctx.lr = 0x8237D850;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237D854:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D868"))) PPC_WEAK_FUNC(sub_8237D868);
PPC_FUNC_IMPL(__imp__sub_8237D868) {
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
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237d928
	if (!ctx.cr6.eq) goto loc_8237D928;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8237D890;
	sub_823570E0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823570f0
	ctx.lr = 0x8237D898;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d8bc
	if (ctx.cr6.eq) goto loc_8237D8BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,32304
	ctx.r9.s64 = ctx.r11.s64 + 32304;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,-4852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4852, ctx.r3.u32);
	// b 0x8237d8c4
	goto loc_8237D8C4;
loc_8237D8BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4852, ctx.r11.u32);
loc_8237D8C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237D8CC;
	sub_823570E0(ctx, base);
	// lwz r11,-4852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4852);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237d8e8
	if (ctx.cr6.eq) goto loc_8237D8E8;
	// bl 0x823a17d0
	ctx.lr = 0x8237D8DC;
	sub_823A17D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237d900
	if (!ctx.cr6.eq) goto loc_8237D900;
loc_8237D8E4:
	// bl 0x8237d288
	ctx.lr = 0x8237D8E8;
	sub_8237D288(ctx, base);
loc_8237D8E8:
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
loc_8237D900:
	// bl 0x823a2a30
	ctx.lr = 0x8237D904;
	sub_823A2A30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d8e4
	if (ctx.cr6.eq) goto loc_8237D8E4;
	// bl 0x823a3628
	ctx.lr = 0x8237D910;
	sub_823A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d8e4
	if (ctx.cr6.eq) goto loc_8237D8E4;
	// bl 0x823a3e98
	ctx.lr = 0x8237D91C;
	sub_823A3E98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d8e4
	if (ctx.cr6.eq) goto loc_8237D8E4;
	// lwz r3,-4852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4852);
loc_8237D928:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237D93C"))) PPC_WEAK_FUNC(sub_8237D93C);
PPC_FUNC_IMPL(__imp__sub_8237D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D940"))) PPC_WEAK_FUNC(sub_8237D940);
PPC_FUNC_IMPL(__imp__sub_8237D940) {
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
	// bl 0x823a1e50
	ctx.lr = 0x8237D950;
	sub_823A1E50(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_8237D96C"))) PPC_WEAK_FUNC(sub_8237D96C);
PPC_FUNC_IMPL(__imp__sub_8237D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D970"))) PPC_WEAK_FUNC(sub_8237D970);
PPC_FUNC_IMPL(__imp__sub_8237D970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237D978;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823a3308
	ctx.lr = 0x8237D994;
	sub_823A3308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823a3a58
	ctx.lr = 0x8237D9AC;
	sub_823A3A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237D9BC"))) PPC_WEAK_FUNC(sub_8237D9BC);
PPC_FUNC_IMPL(__imp__sub_8237D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D9C0"))) PPC_WEAK_FUNC(sub_8237D9C0);
PPC_FUNC_IMPL(__imp__sub_8237D9C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8237d868
	sub_8237D868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237D9C4"))) PPC_WEAK_FUNC(sub_8237D9C4);
PPC_FUNC_IMPL(__imp__sub_8237D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D9C8"))) PPC_WEAK_FUNC(sub_8237D9C8);
PPC_FUNC_IMPL(__imp__sub_8237D9C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237D9DC"))) PPC_WEAK_FUNC(sub_8237D9DC);
PPC_FUNC_IMPL(__imp__sub_8237D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237D9E0"))) PPC_WEAK_FUNC(sub_8237D9E0);
PPC_FUNC_IMPL(__imp__sub_8237D9E0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32296
	ctx.r9.s64 = ctx.r11.s64 + 32296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8237da14
	if (ctx.cr6.eq) goto loc_8237DA14;
	// bl 0x82357128
	ctx.lr = 0x8237DA10;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237DA14:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237DA28"))) PPC_WEAK_FUNC(sub_8237DA28);
PPC_FUNC_IMPL(__imp__sub_8237DA28) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8237da54
	if (!ctx.cr6.eq) goto loc_8237DA54;
loc_8237DA40:
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
loc_8237DA54:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237da7c
	if (ctx.cr6.eq) goto loc_8237DA7C;
loc_8237DA60:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8237da40
	if (ctx.cr6.eq) goto loc_8237DA40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237da60
	if (!ctx.cr6.eq) goto loc_8237DA60;
loc_8237DA7C:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823a6fa8
	ctx.lr = 0x8237DA88;
	sub_823A6FA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DA98"))) PPC_WEAK_FUNC(sub_8237DA98);
PPC_FUNC_IMPL(__imp__sub_8237DA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237DAA0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823a1e50
	ctx.lr = 0x8237DAB0;
	sub_823A1E50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a67d8
	ctx.lr = 0x8237DABC;
	sub_823A67D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237dacc
	if (!ctx.cr6.eq) goto loc_8237DACC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8237DACC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237da28
	ctx.lr = 0x8237DAD8;
	sub_8237DA28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237dae8
	if (!ctx.cr6.eq) goto loc_8237DAE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82394730
	ctx.lr = 0x8237DAE8;
	sub_82394730(ctx, base);
loc_8237DAE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237DAF4"))) PPC_WEAK_FUNC(sub_8237DAF4);
PPC_FUNC_IMPL(__imp__sub_8237DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DAF8"))) PPC_WEAK_FUNC(sub_8237DAF8);
PPC_FUNC_IMPL(__imp__sub_8237DAF8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237db38
	if (ctx.cr6.eq) goto loc_8237DB38;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237db38
	if (ctx.cr6.eq) goto loc_8237DB38;
loc_8237DB18:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8237db4c
	if (ctx.cr6.eq) goto loc_8237DB4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237db18
	if (!ctx.cr6.eq) goto loc_8237DB18;
loc_8237DB38:
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
loc_8237DB4C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237db74
	if (!ctx.cr6.eq) goto loc_8237DB74;
	// bl 0x823a7020
	ctx.lr = 0x8237DB60;
	sub_823A7020(ctx, base);
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
loc_8237DB74:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237db98
	if (!ctx.cr6.eq) goto loc_8237DB98;
	// bl 0x823a7088
	ctx.lr = 0x8237DB84;
	sub_823A7088(ctx, base);
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
loc_8237DB98:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x823a6b00
	ctx.lr = 0x8237DBA0;
	sub_823A6B00(ctx, base);
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

__attribute__((alias("__imp__sub_8237DBB4"))) PPC_WEAK_FUNC(sub_8237DBB4);
PPC_FUNC_IMPL(__imp__sub_8237DBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DBB8"))) PPC_WEAK_FUNC(sub_8237DBB8);
PPC_FUNC_IMPL(__imp__sub_8237DBB8) {
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
	// bl 0x823a1e50
	ctx.lr = 0x8237DBD4;
	sub_823A1E50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a7850
	ctx.lr = 0x8237DBDC;
	sub_823A7850(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237dbf4
	if (ctx.cr6.eq) goto loc_8237DBF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8237daf8
	ctx.lr = 0x8237DBEC;
	sub_8237DAF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394730
	ctx.lr = 0x8237DBF4;
	sub_82394730(ctx, base);
loc_8237DBF4:
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

__attribute__((alias("__imp__sub_8237DC0C"))) PPC_WEAK_FUNC(sub_8237DC0C);
PPC_FUNC_IMPL(__imp__sub_8237DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DC10"))) PPC_WEAK_FUNC(sub_8237DC10);
PPC_FUNC_IMPL(__imp__sub_8237DC10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32420
	ctx.r9.s64 = ctx.r10.s64 + 32420;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DC48"))) PPC_WEAK_FUNC(sub_8237DC48);
PPC_FUNC_IMPL(__imp__sub_8237DC48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DC68"))) PPC_WEAK_FUNC(sub_8237DC68);
PPC_FUNC_IMPL(__imp__sub_8237DC68) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,30912
	ctx.r10.s64 = ctx.r11.s64 + 30912;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823585a0
	ctx.lr = 0x8237DC94;
	sub_823585A0(ctx, base);
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// bl 0x823585a0
	ctx.lr = 0x8237DCA0;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r11.u32);
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237DCC4"))) PPC_WEAK_FUNC(sub_8237DCC4);
PPC_FUNC_IMPL(__imp__sub_8237DCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DCC8"))) PPC_WEAK_FUNC(sub_8237DCC8);
PPC_FUNC_IMPL(__imp__sub_8237DCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,30912
	ctx.r10.s64 = ctx.r11.s64 + 30912;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DCD8"))) PPC_WEAK_FUNC(sub_8237DCD8);
PPC_FUNC_IMPL(__imp__sub_8237DCD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237dcec
	if (!ctx.cr6.eq) goto loc_8237DCEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237DCEC:
	// addi r3,r3,1156
	ctx.r3.s64 = ctx.r3.s64 + 1156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DCF4"))) PPC_WEAK_FUNC(sub_8237DCF4);
PPC_FUNC_IMPL(__imp__sub_8237DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DCF8"))) PPC_WEAK_FUNC(sub_8237DCF8);
PPC_FUNC_IMPL(__imp__sub_8237DCF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1156
	ctx.r3.s64 = ctx.r3.s64 + 1156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DD00"))) PPC_WEAK_FUNC(sub_8237DD00);
PPC_FUNC_IMPL(__imp__sub_8237DD00) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,32424
	ctx.r10.s64 = ctx.r11.s64 + 32424;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823585a0
	ctx.lr = 0x8237DD2C;
	sub_823585A0(ctx, base);
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// bl 0x823585a0
	ctx.lr = 0x8237DD38;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r11.u32);
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237DD5C"))) PPC_WEAK_FUNC(sub_8237DD5C);
PPC_FUNC_IMPL(__imp__sub_8237DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DD60"))) PPC_WEAK_FUNC(sub_8237DD60);
PPC_FUNC_IMPL(__imp__sub_8237DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,32424
	ctx.r10.s64 = ctx.r11.s64 + 32424;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DD70"))) PPC_WEAK_FUNC(sub_8237DD70);
PPC_FUNC_IMPL(__imp__sub_8237DD70) {
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
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8237DD90;
	sub_823585A0(ctx, base);
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// bl 0x823585a0
	ctx.lr = 0x8237DD9C;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r11.u32);
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237DDBC"))) PPC_WEAK_FUNC(sub_8237DDBC);
PPC_FUNC_IMPL(__imp__sub_8237DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DDC0"))) PPC_WEAK_FUNC(sub_8237DDC0);
PPC_FUNC_IMPL(__imp__sub_8237DDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DDC8"))) PPC_WEAK_FUNC(sub_8237DDC8);
PPC_FUNC_IMPL(__imp__sub_8237DDC8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1152
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1152, ctx.xer);
	// ble cr6,0x8237ddf4
	if (!ctx.cr6.gt) goto loc_8237DDF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237de30
	goto loc_8237DE30;
loc_8237DDF4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237de18
	if (ctx.cr6.eq) goto loc_8237DE18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237de18
	if (ctx.cr6.eq) goto loc_8237DE18;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,1156
	ctx.r3.s64 = ctx.r30.s64 + 1156;
	// bl 0x82358508
	ctx.lr = 0x8237DE10;
	sub_82358508(ctx, base);
	// stw r31,2312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2312, ctx.r31.u32);
	// b 0x8237de2c
	goto loc_8237DE2C;
loc_8237DE18:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r30,1156
	ctx.r3.s64 = ctx.r30.s64 + 1156;
	// bl 0x823585a0
	ctx.lr = 0x8237DE24;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2312, ctx.r11.u32);
loc_8237DE2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237DE30:
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

__attribute__((alias("__imp__sub_8237DE48"))) PPC_WEAK_FUNC(sub_8237DE48);
PPC_FUNC_IMPL(__imp__sub_8237DE48) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1152
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1152, ctx.xer);
	// ble cr6,0x8237de74
	if (!ctx.cr6.gt) goto loc_8237DE74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237de90
	goto loc_8237DE90;
loc_8237DE74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237de88
	if (ctx.cr6.eq) goto loc_8237DE88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,1156
	ctx.r3.s64 = ctx.r30.s64 + 1156;
	// bl 0x82358508
	ctx.lr = 0x8237DE88;
	sub_82358508(ctx, base);
loc_8237DE88:
	// stw r31,2312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2312, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237DE90:
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

__attribute__((alias("__imp__sub_8237DEA8"))) PPC_WEAK_FUNC(sub_8237DEA8);
PPC_FUNC_IMPL(__imp__sub_8237DEA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2312);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237DEB0"))) PPC_WEAK_FUNC(sub_8237DEB0);
PPC_FUNC_IMPL(__imp__sub_8237DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8237DEB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8237dee8
	if (ctx.cr6.eq) goto loc_8237DEE8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8237dee8
	if (!ctx.cr6.eq) goto loc_8237DEE8;
loc_8237DEDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8237DEE8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237df00
	if (ctx.cr6.eq) goto loc_8237DF00;
	// bl 0x82357128
	ctx.lr = 0x8237DEFC;
	sub_82357128(ctx, base);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_8237DF00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8237df58
	if (ctx.cr6.eq) goto loc_8237DF58;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237df58
	if (ctx.cr6.eq) goto loc_8237DF58;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8237DF18;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x8237DF20;
	sub_823570F0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237DF2C;
	sub_823570E0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237dedc
	if (ctx.cr6.eq) goto loc_8237DEDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x8237DF40;
	sub_823585A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237df58
	if (ctx.cr6.eq) goto loc_8237DF58;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x8237DF58;
	sub_82358508(ctx, base);
loc_8237DF58:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r28,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r28.u16);
	// bne cr6,0x8237df70
	if (!ctx.cr6.eq) goto loc_8237DF70;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8237df84
	goto loc_8237DF84;
loc_8237DF70:
	// clrlwi r11,r30,22
	ctx.r11.u64 = ctx.r30.u32 & 0x3FF;
	// rlwinm r10,r30,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 22) & 0x3FFFFF;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8237DF84:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237DF9C"))) PPC_WEAK_FUNC(sub_8237DF9C);
PPC_FUNC_IMPL(__imp__sub_8237DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237DFA0"))) PPC_WEAK_FUNC(sub_8237DFA0);
PPC_FUNC_IMPL(__imp__sub_8237DFA0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,32420
	ctx.r10.s64 = ctx.r11.s64 + 32420;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// beq cr6,0x8237dffc
	if (ctx.cr6.eq) goto loc_8237DFFC;
	// bl 0x82357128
	ctx.lr = 0x8237DFF8;
	sub_82357128(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_8237DFFC:
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

__attribute__((alias("__imp__sub_8237E014"))) PPC_WEAK_FUNC(sub_8237E014);
PPC_FUNC_IMPL(__imp__sub_8237E014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E018"))) PPC_WEAK_FUNC(sub_8237E018);
PPC_FUNC_IMPL(__imp__sub_8237E018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237E020;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// beq cr6,0x8237e068
	if (ctx.cr6.eq) goto loc_8237E068;
	// bl 0x82357128
	ctx.lr = 0x8237E064;
	sub_82357128(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_8237E068:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x8237E070;
	sub_823570E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823570f0
	ctx.lr = 0x8237E078;
	sub_823570F0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237E084;
	sub_823570E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237e098
	if (!ctx.cr6.eq) goto loc_8237E098;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8237E098:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x8237E0A0;
	sub_823585A0(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237E0B4"))) PPC_WEAK_FUNC(sub_8237E0B4);
PPC_FUNC_IMPL(__imp__sub_8237E0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E0B8"))) PPC_WEAK_FUNC(sub_8237E0B8);
PPC_FUNC_IMPL(__imp__sub_8237E0B8) {
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
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8237e018
	ctx.lr = 0x8237E0E0;
	sub_8237E018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237e128
	if (ctx.cr6.eq) goto loc_8237E128;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// beq cr6,0x8237e124
	if (ctx.cr6.eq) goto loc_8237E124;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82358508
	ctx.lr = 0x8237E124;
	sub_82358508(ctx, base);
loc_8237E124:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237E128:
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

__attribute__((alias("__imp__sub_8237E140"))) PPC_WEAK_FUNC(sub_8237E140);
PPC_FUNC_IMPL(__imp__sub_8237E140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E158"))) PPC_WEAK_FUNC(sub_8237E158);
PPC_FUNC_IMPL(__imp__sub_8237E158) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8237e16c
	if (!ctx.cr6.eq) goto loc_8237E16C;
loc_8237E164:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237E16C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8237e164
	if (ctx.cr6.lt) goto loc_8237E164;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E198"))) PPC_WEAK_FUNC(sub_8237E198);
PPC_FUNC_IMPL(__imp__sub_8237E198) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e1d8
	if (!ctx.cr6.eq) goto loc_8237E1D8;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237e1d8
	if (!ctx.cr6.eq) goto loc_8237E1D8;
loc_8237E1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237e23c
	goto loc_8237E23C;
loc_8237E1D8:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237e1d0
	if (!ctx.cr6.eq) goto loc_8237E1D0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8237e1d0
	if (ctx.cr6.eq) goto loc_8237E1D0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8237e1d0
	if (ctx.cr6.lt) goto loc_8237E1D0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237e220
	if (ctx.cr6.eq) goto loc_8237E220;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x8237E220;
	sub_82358508(ctx, base);
loc_8237E220:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8237E23C:
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

__attribute__((alias("__imp__sub_8237E254"))) PPC_WEAK_FUNC(sub_8237E254);
PPC_FUNC_IMPL(__imp__sub_8237E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E258"))) PPC_WEAK_FUNC(sub_8237E258);
PPC_FUNC_IMPL(__imp__sub_8237E258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E274"))) PPC_WEAK_FUNC(sub_8237E274);
PPC_FUNC_IMPL(__imp__sub_8237E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E278"))) PPC_WEAK_FUNC(sub_8237E278);
PPC_FUNC_IMPL(__imp__sub_8237E278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e298
	if (!ctx.cr6.eq) goto loc_8237E298;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237e298
	if (!ctx.cr6.eq) goto loc_8237E298;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237E298:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E2B0"))) PPC_WEAK_FUNC(sub_8237E2B0);
PPC_FUNC_IMPL(__imp__sub_8237E2B0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1140
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1140, ctx.xer);
	// ble cr6,0x8237e2dc
	if (!ctx.cr6.gt) goto loc_8237E2DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237e318
	goto loc_8237E318;
loc_8237E2DC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237e300
	if (ctx.cr6.eq) goto loc_8237E300;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237e300
	if (ctx.cr6.eq) goto loc_8237E300;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82358508
	ctx.lr = 0x8237E2F8;
	sub_82358508(ctx, base);
	// stw r31,2308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2308, ctx.r31.u32);
	// b 0x8237e314
	goto loc_8237E314;
loc_8237E300:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8237E30C;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2308, ctx.r11.u32);
loc_8237E314:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237E318:
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

__attribute__((alias("__imp__sub_8237E330"))) PPC_WEAK_FUNC(sub_8237E330);
PPC_FUNC_IMPL(__imp__sub_8237E330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e344
	if (!ctx.cr6.eq) goto loc_8237E344;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237E344:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E34C"))) PPC_WEAK_FUNC(sub_8237E34C);
PPC_FUNC_IMPL(__imp__sub_8237E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E350"))) PPC_WEAK_FUNC(sub_8237E350);
PPC_FUNC_IMPL(__imp__sub_8237E350) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1152
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1152, ctx.xer);
	// ble cr6,0x8237e37c
	if (!ctx.cr6.gt) goto loc_8237E37C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237e39c
	goto loc_8237E39C;
loc_8237E37C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237e390
	if (ctx.cr6.eq) goto loc_8237E390;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82358508
	ctx.lr = 0x8237E390;
	sub_82358508(ctx, base);
loc_8237E390:
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,2308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2308, ctx.r11.u32);
loc_8237E39C:
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

__attribute__((alias("__imp__sub_8237E3B4"))) PPC_WEAK_FUNC(sub_8237E3B4);
PPC_FUNC_IMPL(__imp__sub_8237E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E3B8"))) PPC_WEAK_FUNC(sub_8237E3B8);
PPC_FUNC_IMPL(__imp__sub_8237E3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E3C4"))) PPC_WEAK_FUNC(sub_8237E3C4);
PPC_FUNC_IMPL(__imp__sub_8237E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E3C8"))) PPC_WEAK_FUNC(sub_8237E3C8);
PPC_FUNC_IMPL(__imp__sub_8237E3C8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32424
	ctx.r9.s64 = ctx.r11.s64 + 32424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8237e3fc
	if (ctx.cr6.eq) goto loc_8237E3FC;
	// bl 0x82357128
	ctx.lr = 0x8237E3F8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8237E3FC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8237E410"))) PPC_WEAK_FUNC(sub_8237E410);
PPC_FUNC_IMPL(__imp__sub_8237E410) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1148
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1148, ctx.xer);
	// ble cr6,0x8237e43c
	if (!ctx.cr6.gt) goto loc_8237E43C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237e478
	goto loc_8237E478;
loc_8237E43C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237e460
	if (ctx.cr6.eq) goto loc_8237E460;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237e460
	if (ctx.cr6.eq) goto loc_8237E460;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82358508
	ctx.lr = 0x8237E458;
	sub_82358508(ctx, base);
	// stw r31,2308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2308, ctx.r31.u32);
	// b 0x8237e474
	goto loc_8237E474;
loc_8237E460:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8237E46C;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2308, ctx.r11.u32);
loc_8237E474:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237E478:
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

__attribute__((alias("__imp__sub_8237E490"))) PPC_WEAK_FUNC(sub_8237E490);
PPC_FUNC_IMPL(__imp__sub_8237E490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e4a4
	if (!ctx.cr6.eq) goto loc_8237E4A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237E4A4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E4AC"))) PPC_WEAK_FUNC(sub_8237E4AC);
PPC_FUNC_IMPL(__imp__sub_8237E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E4B0"))) PPC_WEAK_FUNC(sub_8237E4B0);
PPC_FUNC_IMPL(__imp__sub_8237E4B0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,1152
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1152, ctx.xer);
	// ble cr6,0x8237e4dc
	if (!ctx.cr6.gt) goto loc_8237E4DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237e4fc
	goto loc_8237E4FC;
loc_8237E4DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8237e4f0
	if (ctx.cr6.eq) goto loc_8237E4F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82358508
	ctx.lr = 0x8237E4F0;
	sub_82358508(ctx, base);
loc_8237E4F0:
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,2308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2308, ctx.r11.u32);
loc_8237E4FC:
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

__attribute__((alias("__imp__sub_8237E514"))) PPC_WEAK_FUNC(sub_8237E514);
PPC_FUNC_IMPL(__imp__sub_8237E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E518"))) PPC_WEAK_FUNC(sub_8237E518);
PPC_FUNC_IMPL(__imp__sub_8237E518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E524"))) PPC_WEAK_FUNC(sub_8237E524);
PPC_FUNC_IMPL(__imp__sub_8237E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E528"))) PPC_WEAK_FUNC(sub_8237E528);
PPC_FUNC_IMPL(__imp__sub_8237E528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237E530;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,32432
	ctx.r10.s64 = ctx.r11.s64 + 32432;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// sth r30,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r30.u16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x8237E57C;
	sub_823A86F8(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237E5A4"))) PPC_WEAK_FUNC(sub_8237E5A4);
PPC_FUNC_IMPL(__imp__sub_8237E5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E5A8"))) PPC_WEAK_FUNC(sub_8237E5A8);
PPC_FUNC_IMPL(__imp__sub_8237E5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8237E5B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,32432
	ctx.r10.s64 = ctx.r11.s64 + 32432;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8237e5dc
	if (ctx.cr6.eq) goto loc_8237E5DC;
	// bl 0x82357128
	ctx.lr = 0x8237E5D8;
	sub_82357128(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_8237E5DC:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237e5f8
	if (ctx.cr6.eq) goto loc_8237E5F8;
	// bl 0x82357240
	ctx.lr = 0x8237E5F4;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8237E5F8:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x823ab568
	ctx.lr = 0x8237E608;
	sub_823AB568(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237E610"))) PPC_WEAK_FUNC(sub_8237E610);
PPC_FUNC_IMPL(__imp__sub_8237E610) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,32420
	ctx.r9.s64 = ctx.r10.s64 + 32420;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// bl 0x8237e0b8
	ctx.lr = 0x8237E65C;
	sub_8237E0B8(ctx, base);
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

__attribute__((alias("__imp__sub_8237E674"))) PPC_WEAK_FUNC(sub_8237E674);
PPC_FUNC_IMPL(__imp__sub_8237E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E678"))) PPC_WEAK_FUNC(sub_8237E678);
PPC_FUNC_IMPL(__imp__sub_8237E678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2308);
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8237e68c
	if (!ctx.cr0.eq) goto loc_8237E68C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237E68C:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E694"))) PPC_WEAK_FUNC(sub_8237E694);
PPC_FUNC_IMPL(__imp__sub_8237E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E698"))) PPC_WEAK_FUNC(sub_8237E698);
PPC_FUNC_IMPL(__imp__sub_8237E698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237E6A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r10,r11,32432
	ctx.r10.s64 = ctx.r11.s64 + 32432;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8237e6d0
	if (ctx.cr6.eq) goto loc_8237E6D0;
	// bl 0x82357128
	ctx.lr = 0x8237E6CC;
	sub_82357128(ctx, base);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_8237E6D0:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237e6ec
	if (ctx.cr6.eq) goto loc_8237E6EC;
	// bl 0x82357240
	ctx.lr = 0x8237E6E8;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8237E6EC:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x823ab568
	ctx.lr = 0x8237E6FC;
	sub_823AB568(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e714
	if (ctx.cr6.eq) goto loc_8237E714;
	// bl 0x82357128
	ctx.lr = 0x8237E710;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8237E714:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237E71C"))) PPC_WEAK_FUNC(sub_8237E71C);
PPC_FUNC_IMPL(__imp__sub_8237E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E720"))) PPC_WEAK_FUNC(sub_8237E720);
PPC_FUNC_IMPL(__imp__sub_8237E720) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8237deb0
	ctx.lr = 0x8237E764;
	sub_8237DEB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237e7a0
	if (ctx.cr6.eq) goto loc_8237E7A0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// sth r10,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r10.u16);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r7,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r7.u32);
	// bl 0x82364480
	ctx.lr = 0x8237E7A0;
	sub_82364480(ctx, base);
loc_8237E7A0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8237E7BC"))) PPC_WEAK_FUNC(sub_8237E7BC);
PPC_FUNC_IMPL(__imp__sub_8237E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E7C0"))) PPC_WEAK_FUNC(sub_8237E7C0);
PPC_FUNC_IMPL(__imp__sub_8237E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237E7C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,32432
	ctx.r10.s64 = ctx.r11.s64 + 32432;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// sth r30,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r30.u16);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// sth r30,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r30.u16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x8237E818;
	sub_823A86F8(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// bl 0x8237e720
	ctx.lr = 0x8237E840;
	sub_8237E720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237E84C"))) PPC_WEAK_FUNC(sub_8237E84C);
PPC_FUNC_IMPL(__imp__sub_8237E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E850"))) PPC_WEAK_FUNC(sub_8237E850);
PPC_FUNC_IMPL(__imp__sub_8237E850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,32436
	ctx.r11.s64 = ctx.r11.s64 + 32436;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237E860"))) PPC_WEAK_FUNC(sub_8237E860);
PPC_FUNC_IMPL(__imp__sub_8237E860) {
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
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8237E884;
	sub_823585A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// sth r30,1156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1156, ctx.r30.u16);
	// addi r3,r31,1158
	ctx.r3.s64 = ctx.r31.s64 + 1158;
	// bl 0x823585a0
	ctx.lr = 0x8237E898;
	sub_823585A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r30,2310(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2310, ctx.r30.u16);
	// stb r30,2312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2312, ctx.r30.u8);
	// stw r11,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8237E8C0"))) PPC_WEAK_FUNC(sub_8237E8C0);
PPC_FUNC_IMPL(__imp__sub_8237E8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8237E8C8;
	sub_8224877C(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8237e860
	ctx.lr = 0x8237E8EC;
	sub_8237E860(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237e908
	if (ctx.cr6.eq) goto loc_8237E908;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82358508
	ctx.lr = 0x8237E904;
	sub_82358508(ctx, base);
	// sth r29,1156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1156, ctx.r29.u16);
loc_8237E908:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8237e924
	if (ctx.cr6.eq) goto loc_8237E924;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1158
	ctx.r3.s64 = ctx.r31.s64 + 1158;
	// bl 0x82358508
	ctx.lr = 0x8237E920;
	sub_82358508(ctx, base);
	// sth r27,2310(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2310, ctx.r27.u16);
loc_8237E924:
	// lhz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// stw r25,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r25.u32);
	// stb r26,2312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2312, ctx.r26.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8237e948
	if (!ctx.cr0.eq) goto loc_8237E948;
	// lhz r11,2310(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2310);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8237e94c
	if (ctx.cr0.eq) goto loc_8237E94C;
loc_8237E948:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237E94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8237E954"))) PPC_WEAK_FUNC(sub_8237E954);
PPC_FUNC_IMPL(__imp__sub_8237E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8237E958"))) PPC_WEAK_FUNC(sub_8237E958);
PPC_FUNC_IMPL(__imp__sub_8237E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8237E960;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x823585a0
	ctx.lr = 0x8237E980;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r11,1156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1156, ctx.r11.u16);
	// beq cr6,0x8237e9ac
	if (ctx.cr6.eq) goto loc_8237E9AC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8237e9ac
	if (ctx.cr6.eq) goto loc_8237E9AC;
	// li r5,1152
	ctx.r5.s64 = 1152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x8237E9A8;
	sub_82358508(ctx, base);
	// sth r28,1156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1156, ctx.r28.u16);
loc_8237E9AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

