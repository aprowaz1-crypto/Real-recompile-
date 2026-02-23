#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8214015C"))) PPC_WEAK_FUNC(sub_8214015C);
PPC_FUNC_IMPL(__imp__sub_8214015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140160"))) PPC_WEAK_FUNC(sub_82140160);
PPC_FUNC_IMPL(__imp__sub_82140160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214018c
	if (ctx.cr6.eq) goto loc_8214018C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82140184
	if (ctx.cr6.eq) goto loc_82140184;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8213ecd0
	sub_8213ECD0(ctx, base);
	return;
loc_82140184:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8213f730
	sub_8213F730(ctx, base);
	return;
loc_8214018C:
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8213fc88
	sub_8213FC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140194"))) PPC_WEAK_FUNC(sub_82140194);
PPC_FUNC_IMPL(__imp__sub_82140194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140198"))) PPC_WEAK_FUNC(sub_82140198);
PPC_FUNC_IMPL(__imp__sub_82140198) {
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
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821401cc
	if (ctx.cr6.eq) goto loc_821401CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821401CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821401CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1396, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821401E8"))) PPC_WEAK_FUNC(sub_821401E8);
PPC_FUNC_IMPL(__imp__sub_821401E8) {
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82140210
	if (!ctx.cr6.eq) goto loc_82140210;
loc_82140208:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8214027c
	goto loc_8214027C;
loc_82140210:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-776(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd08
	ctx.lr = 0x82140224;
	sub_821EFD08(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82140208
	if (!ctx.cr6.eq) goto loc_82140208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd20
	ctx.lr = 0x82140238;
	sub_821EFD20(ctx, base);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ec8
	ctx.lr = 0x8214024C;
	sub_823C3EC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82140208
	if (ctx.cr6.eq) goto loc_82140208;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82140208
	if (ctx.cr6.eq) goto loc_82140208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3e40
	ctx.lr = 0x8214026C;
	sub_823C3E40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82140208
	if (ctx.cr6.eq) goto loc_82140208;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8214027C:
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

__attribute__((alias("__imp__sub_82140294"))) PPC_WEAK_FUNC(sub_82140294);
PPC_FUNC_IMPL(__imp__sub_82140294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140298"))) PPC_WEAK_FUNC(sub_82140298);
PPC_FUNC_IMPL(__imp__sub_82140298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821402A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821402c0
	if (!ctx.cr6.eq) goto loc_821402C0;
loc_821402B4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821402C0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-776(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd08
	ctx.lr = 0x821402D4;
	sub_821EFD08(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821402b4
	if (!ctx.cr6.eq) goto loc_821402B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd20
	ctx.lr = 0x821402E8;
	sub_821EFD20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823c3ec8
	ctx.lr = 0x821402FC;
	sub_823C3EC8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x821402b4
	if (ctx.cr6.eq) goto loc_821402B4;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x8214032c
	if (!ctx.cr6.eq) goto loc_8214032C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8214032C:
	// lbz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823c4070
	ctx.lr = 0x82140344;
	sub_823C4070(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821402b4
	if (ctx.cr6.eq) goto loc_821402B4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8214035C"))) PPC_WEAK_FUNC(sub_8214035C);
PPC_FUNC_IMPL(__imp__sub_8214035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140360"))) PPC_WEAK_FUNC(sub_82140360);
PPC_FUNC_IMPL(__imp__sub_82140360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82140368;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8214038c
	if (!ctx.cr6.eq) goto loc_8214038C;
loc_82140380:
	// addi r3,r28,1832
	ctx.r3.s64 = ctx.r28.s64 + 1832;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8214038C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,-776(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -776);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821efd08
	ctx.lr = 0x821403A0;
	sub_821EFD08(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82140380
	if (!ctx.cr6.eq) goto loc_82140380;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821efd20
	ctx.lr = 0x821403B4;
	sub_821EFD20(ctx, base);
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823c3ec8
	ctx.lr = 0x821403C4;
	sub_823C3EC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821403CC"))) PPC_WEAK_FUNC(sub_821403CC);
PPC_FUNC_IMPL(__imp__sub_821403CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821403D0"))) PPC_WEAK_FUNC(sub_821403D0);
PPC_FUNC_IMPL(__imp__sub_821403D0) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_821403E0"))) PPC_WEAK_FUNC(sub_821403E0);
PPC_FUNC_IMPL(__imp__sub_821403E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3bd0
	sub_823C3BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821403E4"))) PPC_WEAK_FUNC(sub_821403E4);
PPC_FUNC_IMPL(__imp__sub_821403E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821403E8"))) PPC_WEAK_FUNC(sub_821403E8);
PPC_FUNC_IMPL(__imp__sub_821403E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821403FC"))) PPC_WEAK_FUNC(sub_821403FC);
PPC_FUNC_IMPL(__imp__sub_821403FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140400"))) PPC_WEAK_FUNC(sub_82140400);
PPC_FUNC_IMPL(__imp__sub_82140400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,1744(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140420"))) PPC_WEAK_FUNC(sub_82140420);
PPC_FUNC_IMPL(__imp__sub_82140420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1736(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1736);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82140444
	if (ctx.cr6.gt) goto loc_82140444;
	// lfs f13,1740(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82140444:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214044C"))) PPC_WEAK_FUNC(sub_8214044C);
PPC_FUNC_IMPL(__imp__sub_8214044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140450"))) PPC_WEAK_FUNC(sub_82140450);
PPC_FUNC_IMPL(__imp__sub_82140450) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,70
	ctx.r9.s64 = ctx.r10.s64 + 70;
	// stw r10,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r10.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r7,r10,9
	ctx.r7.s64 = ctx.r10.s64 + 9;
	// rlwinm r6,r7,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r11,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r5,276(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 292, ctx.r11.u32);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r11.u32);
	// lwz r8,276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,300(r7)
	PPC_STORE_U32(ctx.r7.u32 + 300, ctx.r11.u32);
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,304(r5)
	PPC_STORE_U32(ctx.r5.u32 + 304, ctx.r11.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r11.u32);
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 312, ctx.r11.u32);
	// lwz r7,276(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,316(r6)
	PPC_STORE_U32(ctx.r6.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821404F0"))) PPC_WEAK_FUNC(sub_821404F0);
PPC_FUNC_IMPL(__imp__sub_821404F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,70
	ctx.r10.s64 = ctx.r10.s64 + 70;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,292(r5)
	PPC_STORE_U32(ctx.r5.u32 + 292, ctx.r11.u32);
	// lwz r4,276(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 300, ctx.r11.u32);
	// lwz r7,276(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,304(r6)
	PPC_STORE_U32(ctx.r6.u32 + 304, ctx.r11.u32);
	// lwz r5,276(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,308(r4)
	PPC_STORE_U32(ctx.r4.u32 + 308, ctx.r11.u32);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 312, ctx.r11.u32);
	// lwz r8,276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,316(r7)
	PPC_STORE_U32(ctx.r7.u32 + 316, ctx.r11.u32);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140594"))) PPC_WEAK_FUNC(sub_82140594);
PPC_FUNC_IMPL(__imp__sub_82140594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140598"))) PPC_WEAK_FUNC(sub_82140598);
PPC_FUNC_IMPL(__imp__sub_82140598) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821405AC"))) PPC_WEAK_FUNC(sub_821405AC);
PPC_FUNC_IMPL(__imp__sub_821405AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821405B0"))) PPC_WEAK_FUNC(sub_821405B0);
PPC_FUNC_IMPL(__imp__sub_821405B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r8,376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,320
	ctx.r11.s64 = ctx.r3.s64 + 320;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r7,284(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// stw r7,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r7.u32);
	// lwz r6,356(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// stw r6,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r6.u32);
	// lwz r5,320(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// stw r5,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r5.u32);
	// lwz r4,324(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// stw r4,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r4.u32);
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// stw r9,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r9.u32);
	// lwz r8,332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// stw r8,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r8.u32);
	// lwz r7,336(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// stw r7,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r7.u32);
	// lwz r6,340(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r6,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r6.u32);
	// lwz r5,344(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// stw r5,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r5.u32);
	// lwz r4,348(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// stw r4,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r4.u32);
	// stw r10,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r10.u32);
	// stw r10,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r10.u32);
	// stw r10,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
loc_82140628:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82140628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82140628;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140640"))) PPC_WEAK_FUNC(sub_82140640);
PPC_FUNC_IMPL(__imp__sub_82140640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// stw r4,1828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1828, ctx.r4.u32);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140650"))) PPC_WEAK_FUNC(sub_82140650);
PPC_FUNC_IMPL(__imp__sub_82140650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-1396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1396);
	// stw r4,-1400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1400, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140674"))) PPC_WEAK_FUNC(sub_82140674);
PPC_FUNC_IMPL(__imp__sub_82140674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140678"))) PPC_WEAK_FUNC(sub_82140678);
PPC_FUNC_IMPL(__imp__sub_82140678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1400);
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

__attribute__((alias("__imp__sub_8214068C"))) PPC_WEAK_FUNC(sub_8214068C);
PPC_FUNC_IMPL(__imp__sub_8214068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140690"))) PPC_WEAK_FUNC(sub_82140690);
PPC_FUNC_IMPL(__imp__sub_82140690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1400);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821406A8"))) PPC_WEAK_FUNC(sub_821406A8);
PPC_FUNC_IMPL(__imp__sub_821406A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1736(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1736);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821406d4
	if (!ctx.cr6.gt) goto loc_821406D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1740(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_821406D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821406DC"))) PPC_WEAK_FUNC(sub_821406DC);
PPC_FUNC_IMPL(__imp__sub_821406DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821406E0"))) PPC_WEAK_FUNC(sub_821406E0);
PPC_FUNC_IMPL(__imp__sub_821406E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1824(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// b 0x82144de8
	sub_82144DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821406E8"))) PPC_WEAK_FUNC(sub_821406E8);
PPC_FUNC_IMPL(__imp__sub_821406E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1824(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// b 0x82144a28
	sub_82144A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821406F0"))) PPC_WEAK_FUNC(sub_821406F0);
PPC_FUNC_IMPL(__imp__sub_821406F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1824(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// b 0x82144a48
	sub_82144A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821406F8"))) PPC_WEAK_FUNC(sub_821406F8);
PPC_FUNC_IMPL(__imp__sub_821406F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1824(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// b 0x82144a70
	sub_82144A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140700"))) PPC_WEAK_FUNC(sub_82140700);
PPC_FUNC_IMPL(__imp__sub_82140700) {
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
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r11,-1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1424, ctx.r11.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r11,-1420(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1420, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r4,r11,70
	ctx.r4.s64 = ctx.r11.s64 + 70;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r6,-1460
	ctx.r3.s64 = ctx.r6.s64 + -1460;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,-1416(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1416, ctx.r11.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,-1412(r7)
	PPC_STORE_U32(ctx.r7.u32 + -1412, ctx.r11.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82140770;
	sub_821847A8(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r11,93
	ctx.r8.s64 = ctx.r11.s64 + 93;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r11,-1408(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1408, ctx.r11.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r5,r11,88
	ctx.r5.s64 = ctx.r11.s64 + 88;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r11,-1404(r7)
	PPC_STORE_U32(ctx.r7.u32 + -1404, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821407B4"))) PPC_WEAK_FUNC(sub_821407B4);
PPC_FUNC_IMPL(__imp__sub_821407B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821407B8"))) PPC_WEAK_FUNC(sub_821407B8);
PPC_FUNC_IMPL(__imp__sub_821407B8) {
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
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-1424(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1424, ctx.r11.u32);
	// stw r10,-1420(r7)
	PPC_STORE_U32(ctx.r7.u32 + -1420, ctx.r10.u32);
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r9,-1416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -1416, ctx.r9.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r5,-1460
	ctx.r3.s64 = ctx.r5.s64 + -1460;
	// bl 0x822aa648
	ctx.lr = 0x821407F8;
	sub_822AA648(ctx, base);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-1408(r4)
	PPC_STORE_U32(ctx.r4.u32 + -1408, ctx.r11.u32);
	// stw r10,-1412(r3)
	PPC_STORE_U32(ctx.r3.u32 + -1412, ctx.r10.u32);
	// stw r9,-1404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1404, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214082C"))) PPC_WEAK_FUNC(sub_8214082C);
PPC_FUNC_IMPL(__imp__sub_8214082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140830"))) PPC_WEAK_FUNC(sub_82140830);
PPC_FUNC_IMPL(__imp__sub_82140830) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214083C"))) PPC_WEAK_FUNC(sub_8214083C);
PPC_FUNC_IMPL(__imp__sub_8214083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140840"))) PPC_WEAK_FUNC(sub_82140840);
PPC_FUNC_IMPL(__imp__sub_82140840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82140858
	if (ctx.cr6.eq) goto loc_82140858;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82140858:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140860"))) PPC_WEAK_FUNC(sub_82140860);
PPC_FUNC_IMPL(__imp__sub_82140860) {
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
	// bl 0x821eacc8
	ctx.lr = 0x82140870;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821408b0
	if (ctx.cr6.eq) goto loc_821408B0;
	// bl 0x821eacc8
	ctx.lr = 0x8214087C;
	sub_821EACC8(ctx, base);
	// lwz r11,1720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821408b0
	if (ctx.cr6.eq) goto loc_821408B0;
	// bl 0x821eacc8
	ctx.lr = 0x8214088C;
	sub_821EACC8(ctx, base);
	// lwz r3,1720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821408A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821408B0:
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

__attribute__((alias("__imp__sub_821408C4"))) PPC_WEAK_FUNC(sub_821408C4);
PPC_FUNC_IMPL(__imp__sub_821408C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821408C8"))) PPC_WEAK_FUNC(sub_821408C8);
PPC_FUNC_IMPL(__imp__sub_821408C8) {
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
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214090c
	if (!ctx.cr6.eq) goto loc_8214090C;
	// lwz r3,1776(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// bl 0x821ebaa8
	ctx.lr = 0x821408F8;
	sub_821EBAA8(ctx, base);
	// lwz r3,1784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r4,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821eb980
	ctx.lr = 0x82140908;
	sub_821EB980(ctx, base);
	// b 0x821409b4
	goto loc_821409B4;
loc_8214090C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x82140970
	if (!ctx.cr6.gt) goto loc_82140970;
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// blt cr6,0x82140950
	if (ctx.cr6.lt) goto loc_82140950;
	// lwz r11,1788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82140944
	if (!ctx.cr6.eq) goto loc_82140944;
	// lwz r3,1772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// bl 0x821ebaa8
	ctx.lr = 0x82140930;
	sub_821EBAA8(ctx, base);
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r4,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821eb980
	ctx.lr = 0x82140940;
	sub_821EB980(ctx, base);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
loc_82140944:
	// stw r30,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r30.u32);
	// stw r30,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r30.u32);
	// b 0x821409b4
	goto loc_821409B4;
loc_82140950:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x82140958;
	sub_821EBAA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb980
	ctx.lr = 0x82140964;
	sub_821EB980(ctx, base);
	// stw r30,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r30.u32);
	// stw r30,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r30.u32);
	// b 0x821409b4
	goto loc_821409B4;
loc_82140970:
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// bl 0x8218ca20
	ctx.lr = 0x82140978;
	sub_8218CA20(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x8214097C;
	sub_821EB440(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x821409b4
	if (ctx.cr6.eq) goto loc_821409B4;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821409a8
	if (!ctx.cr6.eq) goto loc_821409A8;
	// bl 0x821eb440
	ctx.lr = 0x82140994;
	sub_821EB440(ctx, base);
	// stw r3,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r3.u32);
	// bl 0x82140860
	ctx.lr = 0x8214099C;
	sub_82140860(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r3.u32);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
loc_821409A8:
	// bl 0x8218ca20
	ctx.lr = 0x821409AC;
	sub_8218CA20(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821ebaa8
	ctx.lr = 0x821409B4;
	sub_821EBAA8(ctx, base);
loc_821409B4:
	// stw r30,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x821409C0;
	sub_823C3C70(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821409D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_821409F0"))) PPC_WEAK_FUNC(sub_821409F0);
PPC_FUNC_IMPL(__imp__sub_821409F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821409F8;
	sub_82248784(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82140b50
	if (!ctx.cr6.eq) goto loc_82140B50;
	// bl 0x8218ca20
	ctx.lr = 0x82140A14;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x82140b50
	if (ctx.cr6.eq) goto loc_82140B50;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82140A28;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82140A38;
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
	ctx.lr = 0x82140A4C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82140A58;
	sub_821AD498(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b2118
	ctx.lr = 0x82140A60;
	sub_821B2118(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-29564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29564);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// lfs f13,-29568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29568);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32636(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32636);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-29572(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29572);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x82140AA8;
	sub_821D1718(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,1740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,7884(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7884);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32624(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32624);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,11296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11296);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f7,f10
	ctx.f7.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// bl 0x821b5ef8
	ctx.lr = 0x82140B0C;
	sub_821B5EF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82140B18;
	sub_821AD600(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-7488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82140B24;
	sub_821AD498(ctx, base);
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82140b48
	if (ctx.cr6.eq) goto loc_82140B48;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,-4772(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4772);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82140b48
	if (!ctx.cr6.lt) goto loc_82140B48;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4772, ctx.r10.u32);
loc_82140B48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b1d48
	ctx.lr = 0x82140B50;
	sub_821B1D48(ctx, base);
loc_82140B50:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82140B58"))) PPC_WEAK_FUNC(sub_82140B58);
PPC_FUNC_IMPL(__imp__sub_82140B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82140B60;
	sub_82248788(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218ca20
	ctx.lr = 0x82140B6C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x82140cb0
	if (!ctx.cr6.eq) goto loc_82140CB0;
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82140cb0
	if (ctx.cr6.eq) goto loc_82140CB0;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r11,-1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82140b98
	if (ctx.cr6.eq) goto loc_82140B98;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_82140B98:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82140cb0
	if (ctx.cr6.eq) goto loc_82140CB0;
	// bl 0x820cc6e0
	ctx.lr = 0x82140BAC;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82140cb0
	if (!ctx.cr6.eq) goto loc_82140CB0;
	// lwz r3,-1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82140bec
	if (ctx.cr6.eq) goto loc_82140BEC;
	// bl 0x82143ae8
	ctx.lr = 0x82140BC8;
	sub_82143AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,-1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
	// bne cr6,0x82140be8
	if (!ctx.cr6.eq) goto loc_82140BE8;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82140be8
	if (ctx.cr6.eq) goto loc_82140BE8;
	// bl 0x82143d00
	ctx.lr = 0x82140BE4;
	sub_82143D00(ctx, base);
	// lwz r3,-1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
loc_82140BE8:
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
loc_82140BEC:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82140BF8;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82140C08;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82140C1C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82140C28;
	sub_821AD498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2118
	ctx.lr = 0x82140C30;
	sub_821B2118(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-29564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29564);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,-29568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29568);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lfs f3,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32636(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32636);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-29572(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29572);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x82140C74;
	sub_821D1718(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// bl 0x821b5ef8
	ctx.lr = 0x82140C90;
	sub_821B5EF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82140C9C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82140CA8;
	sub_821AD498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b1d48
	ctx.lr = 0x82140CB0;
	sub_821B1D48(ctx, base);
loc_82140CB0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82140CB8"))) PPC_WEAK_FUNC(sub_82140CB8);
PPC_FUNC_IMPL(__imp__sub_82140CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82140CC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r28,380(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// stw r30,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r30.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1784, temp.u32);
	// stfs f0,1776(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1776, temp.u32);
	// beq cr6,0x82140da0
	if (ctx.cr6.eq) goto loc_82140DA0;
	// cmpwi cr6,r28,1000
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1000, ctx.xer);
	// bge cr6,0x82140da0
	if (!ctx.cr6.lt) goto loc_82140DA0;
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// ori r27,r11,57599
	ctx.r27.u64 = ctx.r11.u64 | 57599;
loc_82140D00:
	// lwz r31,-776(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -776);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd08
	ctx.lr = 0x82140D10;
	sub_821EFD08(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82140d20
	if (ctx.cr6.eq) goto loc_82140D20;
	// addi r3,r29,1832
	ctx.r3.s64 = ctx.r29.s64 + 1832;
	// b 0x82140d3c
	goto loc_82140D3C;
loc_82140D20:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd20
	ctx.lr = 0x82140D2C;
	sub_821EFD20(ctx, base);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823c3ec8
	ctx.lr = 0x82140D3C;
	sub_823C3EC8(ctx, base);
loc_82140D3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82140d74
	if (ctx.cr6.eq) goto loc_82140D74;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82140d74
	if (ctx.cr6.eq) goto loc_82140D74;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82140d74
	if (ctx.cr6.eq) goto loc_82140D74;
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// stw r11,364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 364, ctx.r11.u32);
	// blt cr6,0x82140d00
	if (ctx.cr6.lt) goto loc_82140D00;
loc_82140D74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,1760(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29576);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82140d94
	if (ctx.cr6.lt) goto loc_82140D94;
	// lfs f13,1764(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1764);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82140d98
	if (!ctx.cr6.gt) goto loc_82140D98;
loc_82140D94:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82140D98:
	// stfs f0,1784(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1784, temp.u32);
	// stfs f0,1776(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1776, temp.u32);
loc_82140DA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82140DA8"))) PPC_WEAK_FUNC(sub_82140DA8);
PPC_FUNC_IMPL(__imp__sub_82140DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,1780(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,1776(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,1752(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-29560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29560);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1784(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1784);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1788(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1788);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f10,f13,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f10,1784(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1784, temp.u32);
	// fnmsubs f9,f13,f0,f11
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f9,1788(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1788, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82140DF4"))) PPC_WEAK_FUNC(sub_82140DF4);
PPC_FUNC_IMPL(__imp__sub_82140DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140DF8"))) PPC_WEAK_FUNC(sub_82140DF8);
PPC_FUNC_IMPL(__imp__sub_82140DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82140E00;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-15296
	ctx.r28.s64 = ctx.r11.s64 + -15296;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r3,416
	ctx.r26.s64 = ctx.r3.s64 + 416;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r3,412
	ctx.r30.s64 = ctx.r3.s64 + 412;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82140E24:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c30f0
	ctx.lr = 0x82140E34;
	sub_823C30F0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stfs f10,36(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stwu r25,48(r30)
	ea = 48 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82140e24
	if (ctx.cr6.lt) goto loc_82140E24;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-15232
	ctx.r28.s64 = ctx.r11.s64 + -15232;
	// addi r26,r27,900
	ctx.r26.s64 = ctx.r27.s64 + 900;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r27,896
	ctx.r30.s64 = ctx.r27.s64 + 896;
loc_82140E8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c30f0
	ctx.lr = 0x82140E9C;
	sub_823C30F0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stfs f10,36(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stwu r25,48(r30)
	ea = 48 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82140e8c
	if (ctx.cr6.lt) goto loc_82140E8C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82140EE4"))) PPC_WEAK_FUNC(sub_82140EE4);
PPC_FUNC_IMPL(__imp__sub_82140EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140EE8"))) PPC_WEAK_FUNC(sub_82140EE8);
PPC_FUNC_IMPL(__imp__sub_82140EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82140EF0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-15168
	ctx.r28.s64 = ctx.r11.s64 + -15168;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r3,416
	ctx.r26.s64 = ctx.r3.s64 + 416;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r3,412
	ctx.r30.s64 = ctx.r3.s64 + 412;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82140F14:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c30f0
	ctx.lr = 0x82140F24;
	sub_823C30F0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stfs f10,36(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stwu r25,48(r30)
	ea = 48 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82140f14
	if (ctx.cr6.lt) goto loc_82140F14;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-15104
	ctx.r28.s64 = ctx.r11.s64 + -15104;
	// addi r26,r27,900
	ctx.r26.s64 = ctx.r27.s64 + 900;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r27,896
	ctx.r30.s64 = ctx.r27.s64 + 896;
loc_82140F7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c30f0
	ctx.lr = 0x82140F8C;
	sub_823C30F0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stfs f10,36(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stwu r25,48(r30)
	ea = 48 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82140f7c
	if (ctx.cr6.lt) goto loc_82140F7C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82140FD4"))) PPC_WEAK_FUNC(sub_82140FD4);
PPC_FUNC_IMPL(__imp__sub_82140FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140FD8"))) PPC_WEAK_FUNC(sub_82140FD8);
PPC_FUNC_IMPL(__imp__sub_82140FD8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1384
	ctx.r3.s64 = ctx.r3.s64 + 1384;
	// bl 0x823c3058
	ctx.lr = 0x82141000;
	sub_823C3058(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1404, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1408(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1412(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stfs f10,1416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
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

__attribute__((alias("__imp__sub_82141048"))) PPC_WEAK_FUNC(sub_82141048);
PPC_FUNC_IMPL(__imp__sub_82141048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82141050;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,380(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8214106c
	if (ctx.cr6.eq) goto loc_8214106C;
	// cmpwi cr6,r4,1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1000, ctx.xer);
	// blt cr6,0x82141070
	if (ctx.cr6.lt) goto loc_82141070;
loc_8214106C:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82141070:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82141088
	if (!ctx.cr6.eq) goto loc_82141088;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// b 0x821410b0
	goto loc_821410B0;
loc_82141088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821401e8
	ctx.lr = 0x82141090;
	sub_821401E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821410b8
	if (!ctx.cr6.eq) goto loc_821410B8;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821410c0
	if (ctx.cr6.lt) goto loc_821410C0;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821410B0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_821410B8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821411a8
	if (ctx.cr6.eq) goto loc_821411A8;
loc_821410C0:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bne cr6,0x82141100
	if (!ctx.cr6.eq) goto loc_82141100;
	// addi r9,r11,69
	ctx.r9.s64 = ctx.r11.s64 + 69;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,63
	ctx.r7.s64 = ctx.r11.s64 + 63;
	// b 0x82141118
	goto loc_82141118;
loc_82141100:
	// addi r10,r11,70
	ctx.r10.s64 = ctx.r11.s64 + 70;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82141118:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r5,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r5.u32);
	// bl 0x82140ee8
	ctx.lr = 0x8214112C;
	sub_82140EE8(ctx, base);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// beq cr6,0x82141148
	if (ctx.cr6.eq) goto loc_82141148;
	// cmpwi cr6,r30,1000
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1000, ctx.xer);
	// bge cr6,0x82141148
	if (!ctx.cr6.lt) goto loc_82141148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82141148:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// bl 0x82140298
	ctx.lr = 0x82141154;
	sub_82140298(ctx, base);
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82141178
	if (!ctx.cr6.eq) goto loc_82141178;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821404f0
	ctx.lr = 0x8214116C;
	sub_821404F0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// b 0x8214118c
	goto loc_8214118C;
loc_82141178:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8214118c
	if (ctx.cr6.eq) goto loc_8214118C;
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821404f0
	ctx.lr = 0x8214118C;
	sub_821404F0(ctx, base);
loc_8214118C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140cb8
	ctx.lr = 0x82141194;
	sub_82140CB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821411A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821411A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821411B0"))) PPC_WEAK_FUNC(sub_821411B0);
PPC_FUNC_IMPL(__imp__sub_821411B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,15936(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15936);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1736(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1736, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821411D0"))) PPC_WEAK_FUNC(sub_821411D0);
PPC_FUNC_IMPL(__imp__sub_821411D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,9852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1736(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1736, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821411F0"))) PPC_WEAK_FUNC(sub_821411F0);
PPC_FUNC_IMPL(__imp__sub_821411F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821411F8;
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
	// bl 0x82140298
	ctx.lr = 0x8214120C;
	sub_82140298(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82141220
	if (!ctx.cr6.eq) goto loc_82141220;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82141220:
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140360
	ctx.lr = 0x82141230;
	sub_82140360(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214124c
	if (!ctx.cr6.eq) goto loc_8214124C;
loc_82141240:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8214124C:
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ori r9,r11,57599
	ctx.r9.u64 = ctx.r11.u64 | 57599;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141298
	if (ctx.cr6.eq) goto loc_82141298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3dc0
	ctx.lr = 0x82141290;
	sub_823C3DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
loc_82141298:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x821412b8
	if (!ctx.cr6.eq) goto loc_821412B8;
	// bl 0x8215bd08
	ctx.lr = 0x821412AC;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821412B0;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
loc_821412B8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x821412fc
	if (!ctx.cr6.eq) goto loc_821412FC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bd08
	ctx.lr = 0x821412D8;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821412F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
loc_821412FC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82141318
	if (!ctx.cr6.eq) goto loc_82141318;
	// bl 0x821f0050
	ctx.lr = 0x82141310;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141240
	if (ctx.cr6.eq) goto loc_82141240;
loc_82141318:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x82141338
	if (!ctx.cr6.eq) goto loc_82141338;
	// bl 0x8218ca20
	ctx.lr = 0x8214132C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8214133c
	if (!ctx.cr6.eq) goto loc_8214133C;
loc_82141338:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8214133C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82141344"))) PPC_WEAK_FUNC(sub_82141344);
PPC_FUNC_IMPL(__imp__sub_82141344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141348"))) PPC_WEAK_FUNC(sub_82141348);
PPC_FUNC_IMPL(__imp__sub_82141348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82141350;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-784(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141484
	if (ctx.cr6.eq) goto loc_82141484;
	// bl 0x82140360
	ctx.lr = 0x8214136C;
	sub_82140360(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141484
	if (ctx.cr6.eq) goto loc_82141484;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141484
	if (ctx.cr6.eq) goto loc_82141484;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82141390;
	sub_821EBB58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r6,r7,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// bne cr6,0x821413dc
	if (!ctx.cr6.eq) goto loc_821413DC;
	// bl 0x8215bd08
	ctx.lr = 0x821413C4;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x821413C8;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821413fc
	if (ctx.cr6.eq) goto loc_821413FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82141454
	if (!ctx.cr6.eq) goto loc_82141454;
loc_821413DC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82141424
	if (!ctx.cr6.eq) goto loc_82141424;
	// bl 0x821f0050
	ctx.lr = 0x821413F0;
	sub_821F0050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82141408
	if (!ctx.cr6.eq) goto loc_82141408;
	// bl 0x821f0100
	ctx.lr = 0x821413FC;
	sub_821F0100(ctx, base);
loc_821413FC:
	// li r11,24999
	ctx.r11.s64 = 24999;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82141454
	goto loc_82141454;
loc_82141408:
	// lwz r3,1748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// bl 0x821f00b0
	ctx.lr = 0x82141410;
	sub_821F00B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821413fc
	if (ctx.cr6.eq) goto loc_821413FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82141454
	if (!ctx.cr6.eq) goto loc_82141454;
loc_82141424:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82141484
	if (!ctx.cr6.eq) goto loc_82141484;
	// bl 0x8215bd08
	ctx.lr = 0x82141438;
	sub_8215BD08(ctx, base);
	// lwz r11,1748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821413fc
	if (!ctx.cr6.eq) goto loc_821413FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141484
	if (ctx.cr6.eq) goto loc_82141484;
loc_82141454:
	// li r4,84
	ctx.r4.s64 = 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ed998
	ctx.lr = 0x82141460;
	sub_821ED998(ctx, base);
	// lwz r3,-784(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82141478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82141484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82141490"))) PPC_WEAK_FUNC(sub_82141490);
PPC_FUNC_IMPL(__imp__sub_82141490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82141498;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-784(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141568
	if (ctx.cr6.eq) goto loc_82141568;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82141568
	if (ctx.cr6.eq) goto loc_82141568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x821414C4;
	sub_821EBB58(ctx, base);
	// lwz r8,1748(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x8218ca20
	ctx.lr = 0x821414E8;
	sub_8218CA20(ctx, base);
	// li r30,24999
	ctx.r30.s64 = 24999;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x82141508
	if (ctx.cr6.eq) goto loc_82141508;
	// cmpwi cr6,r31,2000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2000, ctx.xer);
	// blt cr6,0x82141508
	if (ctx.cr6.lt) goto loc_82141508;
	// cmpwi cr6,r31,2135
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2135, ctx.xer);
	// bge cr6,0x82141508
	if (!ctx.cr6.lt) goto loc_82141508;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82141508:
	// bl 0x8218ca20
	ctx.lr = 0x8214150C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x8214152c
	if (ctx.cr6.eq) goto loc_8214152C;
	// cmpwi cr6,r31,1500
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1500, ctx.xer);
	// blt cr6,0x8214152c
	if (ctx.cr6.lt) goto loc_8214152C;
	// cmpwi cr6,r31,1502
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1502, ctx.xer);
	// bge cr6,0x8214152c
	if (!ctx.cr6.lt) goto loc_8214152C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82141538
	goto loc_82141538;
loc_8214152C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141568
	if (ctx.cr6.eq) goto loc_82141568;
loc_82141538:
	// li r4,84
	ctx.r4.s64 = 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ed998
	ctx.lr = 0x82141544;
	sub_821ED998(ctx, base);
	// lwz r3,-784(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214155C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82141568:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82141574"))) PPC_WEAK_FUNC(sub_82141574);
PPC_FUNC_IMPL(__imp__sub_82141574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141578"))) PPC_WEAK_FUNC(sub_82141578);
PPC_FUNC_IMPL(__imp__sub_82141578) {
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
	// lwz r11,1820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1820);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821415b0
	if (!ctx.cr6.eq) goto loc_821415B0;
loc_82141598:
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
loc_821415B0:
	// lwz r3,1828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821415d4
	if (ctx.cr6.eq) goto loc_821415D4;
	// bl 0x8213ea20
	ctx.lr = 0x821415C0;
	sub_8213EA20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82141598
	if (!ctx.cr6.eq) goto loc_82141598;
	// bl 0x8213e968
	ctx.lr = 0x821415CC;
	sub_8213E968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82141598
	if (!ctx.cr6.eq) goto loc_82141598;
loc_821415D4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r3,r11,18,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821415F0"))) PPC_WEAK_FUNC(sub_821415F0);
PPC_FUNC_IMPL(__imp__sub_821415F0) {
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
	// lwz r11,1820(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1820);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141660
	if (ctx.cr6.eq) goto loc_82141660;
	// bl 0x8218ca20
	ctx.lr = 0x82141614;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x82141660
	if (!ctx.cr6.eq) goto loc_82141660;
	// lwz r3,1828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82141640
	if (ctx.cr6.eq) goto loc_82141640;
	// bl 0x8213ea20
	ctx.lr = 0x8214162C;
	sub_8213EA20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82141660
	if (!ctx.cr6.eq) goto loc_82141660;
	// bl 0x8213e968
	ctx.lr = 0x82141638;
	sub_8213E968(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82141660
	if (!ctx.cr6.eq) goto loc_82141660;
loc_82141640:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82141660
	if (!ctx.cr6.eq) goto loc_82141660;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82141664
	if (!ctx.cr6.eq) goto loc_82141664;
loc_82141660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82141664:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82141678"))) PPC_WEAK_FUNC(sub_82141678);
PPC_FUNC_IMPL(__imp__sub_82141678) {
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
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141698
	if (ctx.cr6.eq) goto loc_82141698;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x8214169c
	if (ctx.cr6.lt) goto loc_8214169C;
loc_82141698:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8214169C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,360(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// bl 0x821411f0
	ctx.lr = 0x821416A8;
	sub_821411F0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
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

__attribute__((alias("__imp__sub_821416C4"))) PPC_WEAK_FUNC(sub_821416C4);
PPC_FUNC_IMPL(__imp__sub_821416C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821416C8"))) PPC_WEAK_FUNC(sub_821416C8);
PPC_FUNC_IMPL(__imp__sub_821416C8) {
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
	// lwz r11,1920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82141730
	if (ctx.cr6.lt) goto loc_82141730;
	// bne cr6,0x82141738
	if (!ctx.cr6.eq) goto loc_82141738;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82141708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141738
	if (ctx.cr6.eq) goto loc_82141738;
	// lwz r3,-784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82141724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r9.u32);
	// b 0x82141738
	goto loc_82141738;
loc_82141730:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
loc_82141738:
	// lwz r11,1920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82141760"))) PPC_WEAK_FUNC(sub_82141760);
PPC_FUNC_IMPL(__imp__sub_82141760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82141768;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-1424(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -1424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82141790
	if (!ctx.cr6.eq) goto loc_82141790;
	// bl 0x821407b8
	ctx.lr = 0x82141784;
	sub_821407B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82141790:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x821417f4
	if (!ctx.cr6.lt) goto loc_821417F4;
	// li r8,80
	ctx.r8.s64 = 80;
	// addi r9,r11,284
	ctx.r9.s64 = ctx.r11.s64 + 284;
loc_821417B0:
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r30.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_821417C8:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r30.u32);
	// bdnz 0x821417c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821417C8;
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821417b0
	if (ctx.cr6.gt) goto loc_821417B0;
loc_821417F4:
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// addi r10,r10,93
	ctx.r10.s64 = ctx.r10.s64 + 93;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lwz r10,-1408(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1408);
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// addi r25,r27,-1460
	ctx.r25.s64 = ctx.r27.s64 + -1460;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r10,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r10.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r9,-1416(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -1416);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// addi r10,r10,70
	ctx.r10.s64 = ctx.r10.s64 + 70;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,-1404(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -1404);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,-1460(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1460);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r9.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r9.u32);
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 300, ctx.r9.u32);
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 304, ctx.r9.u32);
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r9.u32);
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 312, ctx.r9.u32);
	// lwz r9,28(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,-1420(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -1420);
	// stw r10,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// lwz r10,-1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1412);
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// stw r30,-1424(r5)
	PPC_STORE_U32(ctx.r5.u32 + -1424, ctx.r30.u32);
	// stw r30,-1420(r26)
	PPC_STORE_U32(ctx.r26.u32 + -1420, ctx.r30.u32);
	// stw r30,-1416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -1416, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82141918;
	sub_822AA648(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,-1408(r29)
	PPC_STORE_U32(ctx.r29.u32 + -1408, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,-1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1412, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,-1404(r28)
	PPC_STORE_U32(ctx.r28.u32 + -1404, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8214193C"))) PPC_WEAK_FUNC(sub_8214193C);
PPC_FUNC_IMPL(__imp__sub_8214193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141940"))) PPC_WEAK_FUNC(sub_82141940);
PPC_FUNC_IMPL(__imp__sub_82141940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82141948;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x8214195C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82141968;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8214196C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82141978;
	sub_82183078(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8214198c
	if (ctx.cr6.lt) goto loc_8214198C;
	// bne cr6,0x82141994
	if (!ctx.cr6.eq) goto loc_82141994;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82141990
	goto loc_82141990;
loc_8214198C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82141990:
	// bl 0x821830f8
	ctx.lr = 0x82141994;
	sub_821830F8(ctx, base);
loc_82141994:
	// bl 0x82183850
	ctx.lr = 0x82141998;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821419b0
	if (ctx.cr6.eq) goto loc_821419B0;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x821419AC;
	sub_82183448(ctx, base);
	// b 0x821419b8
	goto loc_821419B8;
loc_821419B0:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x821419B8;
	sub_821845A0(ctx, base);
loc_821419B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821419dc
	if (ctx.cr6.eq) goto loc_821419DC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82143b40
	ctx.lr = 0x821419D0;
	sub_82143B40(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-1396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1396, ctx.r3.u32);
	// b 0x821419e8
	goto loc_821419E8;
loc_821419DC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1396, ctx.r11.u32);
loc_821419E8:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82141a0c
	if (ctx.cr6.lt) goto loc_82141A0C;
	// bne cr6,0x82141a14
	if (!ctx.cr6.eq) goto loc_82141A14;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821419FC;
	sub_821830F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82141A04;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82141A0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82141A14;
	sub_821830F8(ctx, base);
loc_82141A14:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82141A1C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82141A24"))) PPC_WEAK_FUNC(sub_82141A24);
PPC_FUNC_IMPL(__imp__sub_82141A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141A28"))) PPC_WEAK_FUNC(sub_82141A28);
PPC_FUNC_IMPL(__imp__sub_82141A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82141A30;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,1824(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r11,-29324
	ctx.r7.s64 = ctx.r11.s64 + -29324;
	// addi r6,r10,-29332
	ctx.r6.s64 = ctx.r10.s64 + -29332;
	// addi r5,r9,-29416
	ctx.r5.s64 = ctx.r9.s64 + -29416;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-29552
	ctx.r4.s64 = ctx.r8.s64 + -29552;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82141a94
	if (ctx.cr6.eq) goto loc_82141A94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82144e70
	ctx.lr = 0x82141A88;
	sub_82144E70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82141A94;
	sub_82183E40(ctx, base);
loc_82141A94:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r10.u32);
	// lwz r3,-776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82141ab4
	if (ctx.cr6.eq) goto loc_82141AB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821efdc8
	ctx.lr = 0x82141AB4;
	sub_821EFDC8(ctx, base);
loc_82141AB4:
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82141ad0
	if (!ctx.cr6.eq) goto loc_82141AD0;
	// bl 0x8215bd50
	ctx.lr = 0x82141AC4;
	sub_8215BD50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82141ad0
	if (ctx.cr6.eq) goto loc_82141AD0;
	// bl 0x8216e530
	ctx.lr = 0x82141AD0;
	sub_8216E530(ctx, base);
loc_82141AD0:
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// stw r11,-1428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1428, ctx.r11.u32);
	// bl 0x823c31a0
	ctx.lr = 0x82141AE8;
	sub_823C31A0(ctx, base);
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// bl 0x823c3048
	ctx.lr = 0x82141AF0;
	sub_823C3048(ctx, base);
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// bl 0x823c30b8
	ctx.lr = 0x82141AF8;
	sub_823C30B8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x823c30b8
	ctx.lr = 0x82141B00;
	sub_823C30B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82141B08;
	sub_823C52A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82141B10;
	sub_823C3BC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82141B18;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x82141B20;
	sub_82185670(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82141B28"))) PPC_WEAK_FUNC(sub_82141B28);
PPC_FUNC_IMPL(__imp__sub_82141B28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82142888
	sub_82142888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141B30"))) PPC_WEAK_FUNC(sub_82141B30);
PPC_FUNC_IMPL(__imp__sub_82141B30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x82142888
	sub_82142888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141B38"))) PPC_WEAK_FUNC(sub_82141B38);
PPC_FUNC_IMPL(__imp__sub_82141B38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82142888
	sub_82142888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141B40"))) PPC_WEAK_FUNC(sub_82141B40);
PPC_FUNC_IMPL(__imp__sub_82141B40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82141B4C"))) PPC_WEAK_FUNC(sub_82141B4C);
PPC_FUNC_IMPL(__imp__sub_82141B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141B50"))) PPC_WEAK_FUNC(sub_82141B50);
PPC_FUNC_IMPL(__imp__sub_82141B50) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82141B5C"))) PPC_WEAK_FUNC(sub_82141B5C);
PPC_FUNC_IMPL(__imp__sub_82141B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141B60"))) PPC_WEAK_FUNC(sub_82141B60);
PPC_FUNC_IMPL(__imp__sub_82141B60) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141B68"))) PPC_WEAK_FUNC(sub_82141B68);
PPC_FUNC_IMPL(__imp__sub_82141B68) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823c5728
	sub_823C5728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141B70"))) PPC_WEAK_FUNC(sub_82141B70);
PPC_FUNC_IMPL(__imp__sub_82141B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82141B78;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821438e0
	ctx.lr = 0x82141B88;
	sub_821438E0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r28,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r28.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// addi r10,r31,352
	ctx.r10.s64 = ctx.r31.s64 + 352;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
loc_82141BB8:
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-72(r10)
	PPC_STORE_U32(ctx.r10.u32 + -72, ctx.r30.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82141BD0:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// bdnz 0x82141bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82141BD0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,88
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 88, ctx.xer);
	// blt cr6,0x82141bb8
	if (ctx.cr6.lt) goto loc_82141BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140df8
	ctx.lr = 0x82141BFC;
	sub_82140DF8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823c31b0
	ctx.lr = 0x82141C20;
	sub_823C31B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// bl 0x823c3058
	ctx.lr = 0x82141C2C;
	sub_823C3058(ctx, base);
	// lfs f0,1760(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r30.u32);
	// stfs f31,1740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
	// stw r29,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r29.u32);
	// stfs f31,1736(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// stw r30,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r30.u32);
	// stfs f0,1784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// stw r30,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r30.u32);
	// stfs f0,1776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// stfs f13,1788(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1788, temp.u32);
	// stfs f13,1780(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1780, temp.u32);
	// bl 0x821eb440
	ctx.lr = 0x82141C60;
	sub_821EB440(ctx, base);
	// stw r3,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r3.u32);
	// bl 0x821eacc8
	ctx.lr = 0x82141C68;
	sub_821EACC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82141c9c
	if (ctx.cr6.eq) goto loc_82141C9C;
	// bl 0x821eacc8
	ctx.lr = 0x82141C74;
	sub_821EACC8(ctx, base);
	// lwz r11,1720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141c9c
	if (ctx.cr6.eq) goto loc_82141C9C;
	// bl 0x821eacc8
	ctx.lr = 0x82141C84;
	sub_821EACC8(ctx, base);
	// lwz r3,1720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82141C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82141ca0
	goto loc_82141CA0;
loc_82141C9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82141CA0:
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// stw r3,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r3.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r28,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r28.u32);
	// ori r11,r11,57599
	ctx.r11.u64 = ctx.r11.u64 | 57599;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r29.u32);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// addi r11,r31,1832
	ctx.r11.s64 = ctx.r31.s64 + 1832;
	// stw r29,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r29.u32);
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// stb r10,1846(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1846, ctx.r10.u8);
	// sth r9,1844(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1844, ctx.r9.u16);
	// stb r28,1847(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1847, ctx.r28.u8);
	// stw r29,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r29.u32);
	// stw r29,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r29.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// stw r30,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r30.u32);
	// stw r30,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r30.u32);
	// stw r30,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stw r30,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
	// stw r30,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r30.u32);
	// stw r30,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82141D20"))) PPC_WEAK_FUNC(sub_82141D20);
PPC_FUNC_IMPL(__imp__sub_82141D20) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82141D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8218ca20
	ctx.lr = 0x82141D5C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x82141d74
	if (!ctx.cr6.eq) goto loc_82141D74;
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// bl 0x821416c8
	ctx.lr = 0x82141D6C;
	sub_821416C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82141dc8
	if (ctx.cr6.eq) goto loc_82141DC8;
loc_82141D74:
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x823c3160
	ctx.lr = 0x82141D7C;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141dc8
	if (ctx.cr6.eq) goto loc_82141DC8;
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x823c3160
	ctx.lr = 0x82141D8C;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141dc8
	if (ctx.cr6.eq) goto loc_82141DC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x823c3240
	ctx.lr = 0x82141DA0;
	sub_823C3240(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82141DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82141DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82141DC8:
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

__attribute__((alias("__imp__sub_82141DE0"))) PPC_WEAK_FUNC(sub_82141DE0);
PPC_FUNC_IMPL(__imp__sub_82141DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82141DE8;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-4772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82141e0c
	if (!ctx.cr6.lt) goto loc_82141E0C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4772(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4772, ctx.r11.u32);
loc_82141E0C:
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140b58
	ctx.lr = 0x82141E18;
	sub_82140B58(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141f54
	if (ctx.cr6.eq) goto loc_82141F54;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,1740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,1740(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82141e54
	if (!ctx.cr6.gt) goto loc_82141E54;
	// stfs f0,1740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
loc_82141E54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82141e6c
	if (!ctx.cr6.lt) goto loc_82141E6C;
	// stfs f31,1740(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1740, temp.u32);
loc_82141E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821409f0
	ctx.lr = 0x82141E74;
	sub_821409F0(ctx, base);
	// lfs f0,1736(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82141e98
	if (!ctx.cr6.eq) goto loc_82141E98;
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1740, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82141E98:
	// lwz r11,-4772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4772);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82141eac
	if (!ctx.cr6.lt) goto loc_82141EAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4772(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4772, ctx.r11.u32);
loc_82141EAC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1740, ctx.r10.u32);
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141f54
	if (ctx.cr6.eq) goto loc_82141F54;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141f54
	if (ctx.cr6.eq) goto loc_82141F54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820dd230
	ctx.lr = 0x82141ED8;
	sub_820DD230(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x82141EE8;
	sub_8216DB98(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82141EF4;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82141F04;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82141F18;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82141F24;
	sub_821AD498(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82141F30;
	sub_821AD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82141F3C;
	sub_821AD498(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-1736(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82141f54
	if (ctx.cr6.eq) goto loc_82141F54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821d16c0
	ctx.lr = 0x82141F54;
	sub_821D16C0(ctx, base);
loc_82141F54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82141F60"))) PPC_WEAK_FUNC(sub_82141F60);
PPC_FUNC_IMPL(__imp__sub_82141F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82141F68;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,384(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// stw r30,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r30.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1788(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1788, temp.u32);
	// stfs f0,1780(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1780, temp.u32);
	// beq cr6,0x82142078
	if (ctx.cr6.eq) goto loc_82142078;
	// cmpwi cr6,r27,1000
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1000, ctx.xer);
	// bge cr6,0x82142078
	if (!ctx.cr6.lt) goto loc_82142078;
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82141fb0
	if (ctx.cr6.eq) goto loc_82141FB0;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x82141fb4
	if (ctx.cr6.lt) goto loc_82141FB4;
loc_82141FB0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82141FB4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,360(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821411f0
	ctx.lr = 0x82141FC4;
	sub_821411F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82142078
	if (ctx.cr6.eq) goto loc_82142078;
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// ori r28,r11,57599
	ctx.r28.u64 = ctx.r11.u64 | 57599;
loc_82141FD8:
	// lwz r31,-776(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -776);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd08
	ctx.lr = 0x82141FE8;
	sub_821EFD08(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82141ff8
	if (ctx.cr6.eq) goto loc_82141FF8;
	// addi r3,r29,1832
	ctx.r3.s64 = ctx.r29.s64 + 1832;
	// b 0x82142014
	goto loc_82142014;
loc_82141FF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efd20
	ctx.lr = 0x82142004;
	sub_821EFD20(ctx, base);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823c3ec8
	ctx.lr = 0x82142014;
	sub_823C3EC8(ctx, base);
loc_82142014:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214204c
	if (ctx.cr6.eq) goto loc_8214204C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8214204c
	if (ctx.cr6.eq) goto loc_8214204C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8214204c
	if (ctx.cr6.eq) goto loc_8214204C;
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// stw r11,368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 368, ctx.r11.u32);
	// blt cr6,0x82141fd8
	if (ctx.cr6.lt) goto loc_82141FD8;
loc_8214204C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,1768(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1768);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-29576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29576);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8214206c
	if (ctx.cr6.lt) goto loc_8214206C;
	// lfs f13,1772(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1772);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82142070
	if (!ctx.cr6.gt) goto loc_82142070;
loc_8214206C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82142070:
	// stfs f0,1788(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1788, temp.u32);
	// stfs f0,1780(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1780, temp.u32);
loc_82142078:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82142080"))) PPC_WEAK_FUNC(sub_82142080);
PPC_FUNC_IMPL(__imp__sub_82142080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82142088;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,380(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x821420a8
	if (ctx.cr6.eq) goto loc_821420A8;
	// cmpwi cr6,r29,1000
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1000, ctx.xer);
	// blt cr6,0x821420ac
	if (ctx.cr6.lt) goto loc_821420AC;
loc_821420A8:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_821420AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821411f0
	ctx.lr = 0x821420BC;
	sub_821411F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821420f4
	if (ctx.cr6.eq) goto loc_821420F4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,360(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141348
	ctx.lr = 0x821420D8;
	sub_82141348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821421d4
	if (!ctx.cr6.eq) goto loc_821421D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141490
	ctx.lr = 0x821420EC;
	sub_82141490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821421d4
	if (!ctx.cr6.eq) goto loc_821421D4;
loc_821420F4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821421d4
	if (ctx.cr6.eq) goto loc_821421D4;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82142118
	if (ctx.cr6.eq) goto loc_82142118;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82140360
	ctx.lr = 0x82142118;
	sub_82140360(ctx, base);
loc_82142118:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r8,r11,70
	ctx.r8.s64 = ctx.r11.s64 + 70;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 9;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r11,r11,70
	ctx.r11.s64 = ctx.r11.s64 + 70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x82140df8
	ctx.lr = 0x82142174;
	sub_82140DF8(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r30,1000
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1000, ctx.xer);
	// addi r9,r11,93
	ctx.r9.s64 = ctx.r11.s64 + 93;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// blt cr6,0x821421a4
	if (ctx.cr6.lt) goto loc_821421A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// b 0x821421b8
	goto loc_821421B8;
loc_821421A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140298
	ctx.lr = 0x821421B4;
	sub_82140298(ctx, base);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
loc_821421B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140cb8
	ctx.lr = 0x821421C0;
	sub_82140CB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821421D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821421D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821421DC"))) PPC_WEAK_FUNC(sub_821421DC);
PPC_FUNC_IMPL(__imp__sub_821421DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821421E0"))) PPC_WEAK_FUNC(sub_821421E0);
PPC_FUNC_IMPL(__imp__sub_821421E0) {
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
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,1812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1812, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82142210
	if (ctx.cr6.eq) goto loc_82142210;
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// blt cr6,0x82142220
	if (ctx.cr6.lt) goto loc_82142220;
loc_82142210:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15040
	ctx.r4.s64 = ctx.r11.s64 + -15040;
	// bl 0x82140fd8
	ctx.lr = 0x82142220;
	sub_82140FD8(ctx, base);
loc_82142220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141048
	ctx.lr = 0x82142228;
	sub_82141048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142230;
	sub_82141F60(ctx, base);
	// lfs f0,1780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,1752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-29560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29560);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82142278
	if (ctx.cr6.lt) goto loc_82142278;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1784(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1788(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f10,f13,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f10,1784(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// fnmsubs f9,f13,f0,f11
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f9,1788(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1788, temp.u32);
loc_82142278:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214228C"))) PPC_WEAK_FUNC(sub_8214228C);
PPC_FUNC_IMPL(__imp__sub_8214228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142290"))) PPC_WEAK_FUNC(sub_82142290);
PPC_FUNC_IMPL(__imp__sub_82142290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82142298;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,1748(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1748);
	// lwz r11,21796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142330
	if (ctx.cr6.eq) goto loc_82142330;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214232c
	if (ctx.cr6.lt) goto loc_8214232C;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8214232c
	if (!ctx.cr6.lt) goto loc_8214232C;
	// bl 0x8218e938
	ctx.lr = 0x821422CC;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821422DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214232c
	if (!ctx.cr6.eq) goto loc_8214232C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8214232c
	if (!ctx.cr6.gt) goto loc_8214232C;
loc_821422F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e938
	ctx.lr = 0x821422F8;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82142328
	if (ctx.cr6.eq) goto loc_82142328;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821422f0
	if (ctx.cr6.lt) goto loc_821422F0;
	// lwz r3,1748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1748);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142328:
	// stw r31,1748(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1748, ctx.r31.u32);
loc_8214232C:
	// lwz r3,1748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1748);
loc_82142330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82142338"))) PPC_WEAK_FUNC(sub_82142338);
PPC_FUNC_IMPL(__imp__sub_82142338) {
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
	// lwz r11,-1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82142390
	if (!ctx.cr6.eq) goto loc_82142390;
	// li r31,50
	ctx.r31.s64 = 50;
	// bl 0x8218ca20
	ctx.lr = 0x82142368;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x82142374
	if (ctx.cr6.eq) goto loc_82142374;
	// li r31,81
	ctx.r31.s64 = 81;
loc_82142374:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141940
	ctx.lr = 0x82142384;
	sub_82141940(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1924, ctx.r11.u32);
	// b 0x821423c8
	goto loc_821423C8;
loc_82142390:
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8218ca20
	ctx.lr = 0x82142398;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x821423b0
	if (ctx.cr6.eq) goto loc_821423B0;
	// cmplwi cr6,r30,81
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 81, ctx.xer);
	// beq cr6,0x821423c8
	if (ctx.cr6.eq) goto loc_821423C8;
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x821423bc
	goto loc_821423BC;
loc_821423B0:
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 50, ctx.xer);
	// beq cr6,0x821423c8
	if (ctx.cr6.eq) goto loc_821423C8;
	// li r4,50
	ctx.r4.s64 = 50;
loc_821423BC:
	// lwz r11,-1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82185ba0
	ctx.lr = 0x821423C8;
	sub_82185BA0(ctx, base);
loc_821423C8:
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

__attribute__((alias("__imp__sub_821423E0"))) PPC_WEAK_FUNC(sub_821423E0);
PPC_FUNC_IMPL(__imp__sub_821423E0) {
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
	// lwz r11,1908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82142530
	if (ctx.cr6.gt) goto loc_82142530;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8214247c
	// bdzf 4*cr6+eq,0x821424a8
	// bdzf 4*cr6+eq,0x821424d0
	// bdzf 4*cr6+eq,0x82142514
	// bdzf 4*cr6+eq,0x82142530
	// bdzf 4*cr6+eq,0x82142530
	// bne cr6,0x82142428
	if (!ctx.cr6.eq) goto loc_82142428;
loc_82142428:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821424c0
	if (ctx.cr6.eq) goto loc_821424C0;
	// bl 0x82143b00
	ctx.lr = 0x8214243C;
	sub_82143B00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821424bc
	if (ctx.cr6.eq) goto loc_821424BC;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143ac0
	ctx.lr = 0x8214244C;
	sub_82143AC0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82142464
	if (!ctx.cr6.eq) goto loc_82142464;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1908, ctx.r11.u32);
	// b 0x82142534
	goto loc_82142534;
loc_82142464:
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143a98
	ctx.lr = 0x8214246C;
	sub_82143A98(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1908, ctx.r11.u32);
	// b 0x82142534
	goto loc_82142534;
loc_8214247C:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143ae8
	ctx.lr = 0x82142488;
	sub_82143AE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821424a0
	if (!ctx.cr6.eq) goto loc_821424A0;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143a98
	ctx.lr = 0x82142498;
	sub_82143A98(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1908, ctx.r11.u32);
loc_821424A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82142534
	goto loc_82142534;
loc_821424A8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1396);
	// bl 0x82143b00
	ctx.lr = 0x821424B4;
	sub_82143B00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821424c8
	if (!ctx.cr6.eq) goto loc_821424C8;
loc_821424BC:
	// bl 0x82140198
	ctx.lr = 0x821424C0;
	sub_82140198(ctx, base);
loc_821424C0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1908, ctx.r11.u32);
loc_821424C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82142534
	goto loc_82142534;
loc_821424D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82142338
	ctx.lr = 0x821424D8;
	sub_82142338(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143ae8
	ctx.lr = 0x821424E4;
	sub_82143AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82142504
	if (!ctx.cr6.eq) goto loc_82142504;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143ac0
	ctx.lr = 0x821424F4;
	sub_82143AC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82142504
	if (!ctx.cr6.eq) goto loc_82142504;
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bl 0x82143a70
	ctx.lr = 0x82142504;
	sub_82143A70(ctx, base);
loc_82142504:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1908, ctx.r11.u32);
	// b 0x82142534
	goto loc_82142534;
loc_82142514:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1396);
	// bl 0x82143ae8
	ctx.lr = 0x82142520;
	sub_82143AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821424a0
	if (ctx.cr6.eq) goto loc_821424A0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1908, ctx.r11.u32);
loc_82142530:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82142534:
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

__attribute__((alias("__imp__sub_8214254C"))) PPC_WEAK_FUNC(sub_8214254C);
PPC_FUNC_IMPL(__imp__sub_8214254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142550"))) PPC_WEAK_FUNC(sub_82142550);
PPC_FUNC_IMPL(__imp__sub_82142550) {
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
	// lwz r11,1908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821425c0
	if (ctx.cr6.eq) goto loc_821425C0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821425a0
	if (ctx.cr6.eq) goto loc_821425A0;
	// lwz r11,1916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1916);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82142610
	if (!ctx.cr6.eq) goto loc_82142610;
	// bl 0x821423e0
	ctx.lr = 0x8214258C;
	sub_821423E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82142610
	if (!ctx.cr6.eq) goto loc_82142610;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r11.u32);
	// b 0x82142610
	goto loc_82142610;
loc_821425A0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1396);
	// bl 0x82143b00
	ctx.lr = 0x821425AC;
	sub_82143B00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82142610
	if (!ctx.cr6.eq) goto loc_82142610;
loc_821425B4:
	// bl 0x82140198
	ctx.lr = 0x821425B8;
	sub_82140198(ctx, base);
loc_821425B8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82142604
	goto loc_82142604;
loc_821425C0:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821425b8
	if (ctx.cr6.eq) goto loc_821425B8;
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82142610
	if (!ctx.cr6.eq) goto loc_82142610;
	// bl 0x82143ac0
	ctx.lr = 0x821425E0;
	sub_82143AC0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82142610
	if (ctx.cr6.eq) goto loc_82142610;
	// lwz r3,-1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
	// bl 0x82143ae8
	ctx.lr = 0x821425F0;
	sub_82143AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821425b4
	if (ctx.cr6.eq) goto loc_821425B4;
	// lwz r3,-1396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1396);
	// bl 0x82143a98
	ctx.lr = 0x82142600;
	sub_82143A98(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
loc_82142604:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// stw r10,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r10.u32);
loc_82142610:
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

__attribute__((alias("__imp__sub_82142628"))) PPC_WEAK_FUNC(sub_82142628);
PPC_FUNC_IMPL(__imp__sub_82142628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82142630;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821855f0
	ctx.lr = 0x8214263C;
	sub_821855F0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,82
	ctx.r4.s64 = 82;
	// bl 0x821859a0
	ctx.lr = 0x82142650;
	sub_821859A0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823c3b68
	ctx.lr = 0x8214265C;
	sub_823C3B68(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c58b0
	ctx.lr = 0x8214266C;
	sub_823C58B0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r9,-29332
	ctx.r5.s64 = ctx.r9.s64 + -29332;
	// addi r4,r8,-29416
	ctx.r4.s64 = ctx.r8.s64 + -29416;
	// addi r6,r10,-29324
	ctx.r6.s64 = ctx.r10.s64 + -29324;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// addi r3,r7,-29552
	ctx.r3.s64 = ctx.r7.s64 + -29552;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r10,268
	ctx.r10.s64 = 268;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r8,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r8.u32);
	// bl 0x823c34c0
	ctx.lr = 0x821426D4;
	sub_823C34C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// bl 0x823c34c0
	ctx.lr = 0x821426E4;
	sub_823C34C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// bl 0x823c2ff0
	ctx.lr = 0x821426F0;
	sub_823C2FF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x823c35b8
	ctx.lr = 0x82142700;
	sub_823C35B8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,27096(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27096);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,1525
	ctx.r8.s64 = 99942400;
	// stfs f0,1752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1752, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f13,-29288(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29288);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r8,57599
	ctx.r11.u64 = ctx.r8.u64 | 57599;
	// lfs f12,-29292(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29292);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-29296(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -29296);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// lfs f10,-29300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -29300);
	ctx.f10.f64 = double(temp.f32);
	// stw r30,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r30.u32);
	// lfs f0,-29304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29304);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// stfs f13,1756(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1756, temp.u32);
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stfs f12,1760(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1760, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f11,1764(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f10,1768(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// li r7,255
	ctx.r7.s64 = 255;
	// stfs f0,1772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// stw r10,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r10.u32);
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// stw r10,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r10.u32);
	// addi r11,r31,1832
	ctx.r11.s64 = ctx.r31.s64 + 1832;
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// stb r7,1846(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1846, ctx.r7.u8);
	// sth r6,1844(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1844, ctx.r6.u16);
	// stb r29,1847(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1847, ctx.r29.u8);
	// stw r10,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r10.u32);
	// stw r10,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r10.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// stw r30,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r30.u32);
	// stw r30,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r30.u32);
	// stw r30,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stw r30,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
	// stw r30,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r30.u32);
	// stw r30,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// stw r30,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r30.u32);
	// stw r30,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r30.u32);
	// stw r30,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r30.u32);
	// stw r30,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r30.u32);
	// stw r30,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r30.u32);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x821427F0;
	sub_822AA648(ctx, base);
	// lwsync 
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r31,-1428(r5)
	PPC_STORE_U32(ctx.r5.u32 + -1428, ctx.r31.u32);
	// lfs f0,-29308(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -29308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x8214280C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82142824
	if (ctx.cr6.eq) goto loc_82142824;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82183448
	ctx.lr = 0x82142820;
	sub_82183448(ctx, base);
	// b 0x8214282c
	goto loc_8214282C;
loc_82142824:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821845a0
	ctx.lr = 0x8214282C;
	sub_821845A0(ctx, base);
loc_8214282C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214283c
	if (ctx.cr6.eq) goto loc_8214283C;
	// bl 0x821441e8
	ctx.lr = 0x82142838;
	sub_821441E8(ctx, base);
	// b 0x82142840
	goto loc_82142840;
loc_8214283C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82142840:
	// stw r3,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r3.u32);
	// bl 0x8218ca20
	ctx.lr = 0x82142848;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x82142874
	if (!ctx.cr6.eq) goto loc_82142874;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1424);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82142874
	if (!ctx.cr6.eq) goto loc_82142874;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1420);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// blt cr6,0x82142874
	if (ctx.cr6.lt) goto loc_82142874;
	// stw r29,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r29.u32);
loc_82142874:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141b70
	ctx.lr = 0x8214287C;
	sub_82141B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82142888"))) PPC_WEAK_FUNC(sub_82142888);
PPC_FUNC_IMPL(__imp__sub_82142888) {
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
	// bl 0x82141a28
	ctx.lr = 0x821428A8;
	sub_82141A28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821428c4
	if (ctx.cr6.eq) goto loc_821428C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821428C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821428C4:
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

__attribute__((alias("__imp__sub_821428DC"))) PPC_WEAK_FUNC(sub_821428DC);
PPC_FUNC_IMPL(__imp__sub_821428DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821428E0"))) PPC_WEAK_FUNC(sub_821428E0);
PPC_FUNC_IMPL(__imp__sub_821428E0) {
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
	// bl 0x8218ca20
	ctx.lr = 0x821428FC;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x8214292c
	if (!ctx.cr6.eq) goto loc_8214292C;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,15468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82142a40
	if (ctx.cr6.eq) goto loc_82142A40;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// bl 0x82229a70
	ctx.lr = 0x82142924;
	sub_82229A70(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82142a40
	if (ctx.cr6.eq) goto loc_82142A40;
loc_8214292C:
	// bl 0x820ed3d8
	ctx.lr = 0x82142930;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142a40
	if (ctx.cr6.eq) goto loc_82142A40;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142984
	if (ctx.cr6.eq) goto loc_82142984;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821efd08
	ctx.lr = 0x82142950;
	sub_821EFD08(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82142984
	if (ctx.cr6.eq) goto loc_82142984;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142968
	if (ctx.cr6.eq) goto loc_82142968;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82142a40
	if (!ctx.cr6.eq) goto loc_82142A40;
loc_82142968:
	// bl 0x82182e90
	ctx.lr = 0x8214296C;
	sub_82182E90(ctx, base);
	// lwz r11,-776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -776);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821eff10
	ctx.lr = 0x82142980;
	sub_821EFF10(ctx, base);
	// b 0x82142a40
	goto loc_82142A40;
loc_82142984:
	// addi r31,r30,-20
	ctx.r31.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821423e0
	ctx.lr = 0x82142990;
	sub_821423E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142a40
	if (ctx.cr6.eq) goto loc_82142A40;
	// bl 0x8218ca20
	ctx.lr = 0x8214299C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x821429c0
	if (!ctx.cr6.eq) goto loc_821429C0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142a40
	if (ctx.cr6.eq) goto loc_82142A40;
	// bl 0x820cc6e0
	ctx.lr = 0x821429B8;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82142a40
	if (!ctx.cr6.eq) goto loc_82142A40;
loc_821429C0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1984, ctx.r10.u32);
	// lwz r11,-1396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821429e0
	if (ctx.cr6.eq) goto loc_821429E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_821429E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141760
	ctx.lr = 0x821429E8;
	sub_82141760(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82109e00
	ctx.lr = 0x82142A00;
	sub_82109E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140cb8
	ctx.lr = 0x82142A08;
	sub_82140CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142A10;
	sub_82141F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142A18;
	sub_82140DA8(ctx, base);
	// bl 0x8218ca20
	ctx.lr = 0x82142A1C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bne cr6,0x82142a2c
	if (!ctx.cr6.eq) goto loc_82142A2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821636d8
	ctx.lr = 0x82142A2C;
	sub_821636D8(ctx, base);
loc_82142A2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142A40:
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

__attribute__((alias("__imp__sub_82142A58"))) PPC_WEAK_FUNC(sub_82142A58);
PPC_FUNC_IMPL(__imp__sub_82142A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82142A60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-20
	ctx.r29.s64 = ctx.r3.s64 + -20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821415f0
	ctx.lr = 0x82142A74;
	sub_821415F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142a8c
	if (ctx.cr6.eq) goto loc_82142A8C;
	// li r11,101
	ctx.r11.s64 = 101;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142A8C:
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82142b50
	if (!ctx.cr6.eq) goto loc_82142B50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141578
	ctx.lr = 0x82142AA0;
	sub_82141578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142e64
	if (ctx.cr6.eq) goto loc_82142E64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34472
	ctx.r3.u64 = ctx.r3.u64 | 34472;
	// bl 0x8208f870
	ctx.lr = 0x82142AB4;
	sub_8208F870(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34493
	ctx.r3.u64 = ctx.r3.u64 | 34493;
	// bl 0x8208f870
	ctx.lr = 0x82142AC0;
	sub_8208F870(ctx, base);
	// bl 0x8208f948
	ctx.lr = 0x82142AC4;
	sub_8208F948(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x82142AC8;
	sub_821EB440(ctx, base);
	// stw r3,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r3.u32);
	// bl 0x82140860
	ctx.lr = 0x82142AD0;
	sub_82140860(ctx, base);
	// stw r3,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140450
	ctx.lr = 0x82142ADC;
	sub_82140450(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,9852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// bl 0x82142080
	ctx.lr = 0x82142B00;
	sub_82142080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142B08;
	sub_82141F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142B10;
	sub_82140DA8(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r11,-1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142e64
	if (ctx.cr6.eq) goto loc_82142E64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// bl 0x8218ca20
	ctx.lr = 0x82142B2C;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// lwz r3,-1396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1396);
	// bne cr6,0x82142b44
	if (!ctx.cr6.eq) goto loc_82142B44;
	// bl 0x82143ce0
	ctx.lr = 0x82142B3C;
	sub_82143CE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142B44:
	// bl 0x82143d08
	ctx.lr = 0x82142B48;
	sub_82143D08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142B50:
	// lwz r10,1792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82142be4
	if (ctx.cr6.eq) goto loc_82142BE4;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82142be4
	if (ctx.cr6.eq) goto loc_82142BE4;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34472
	ctx.r3.u64 = ctx.r3.u64 | 34472;
	// bl 0x8208f870
	ctx.lr = 0x82142B78;
	sub_8208F870(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34493
	ctx.r3.u64 = ctx.r3.u64 | 34493;
	// bl 0x8208f870
	ctx.lr = 0x82142B84;
	sub_8208F870(ctx, base);
	// bl 0x8208f8e8
	ctx.lr = 0x82142B88;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82142b94
	if (!ctx.cr6.eq) goto loc_82142B94;
	// bl 0x8208f948
	ctx.lr = 0x82142B94;
	sub_8208F948(ctx, base);
loc_82142B94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140450
	ctx.lr = 0x82142B9C;
	sub_82140450(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f13,9852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// bl 0x82142080
	ctx.lr = 0x82142BCC;
	sub_82142080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142BD4;
	sub_82141F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142BDC;
	sub_82140DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142BE4:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bgt cr6,0x82142e64
	if (ctx.cr6.gt) goto loc_82142E64;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82142c9c
	if (ctx.cr6.eq) goto loc_82142C9C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82142C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// bge 0x82142c54
	if (!ctx.cr0.lt) goto loc_82142C54;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
loc_82142C54:
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82142c68
	if (ctx.cr6.eq) goto loc_82142C68;
	// cmpwi cr6,r4,1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1000, ctx.xer);
	// blt cr6,0x82142c6c
	if (ctx.cr6.lt) goto loc_82142C6C;
loc_82142C68:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82142C6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// bl 0x821411f0
	ctx.lr = 0x82142C78;
	sub_821411F0(ctx, base);
	// stw r3,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140cb8
	ctx.lr = 0x82142C84;
	sub_82140CB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142C8C;
	sub_82141F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142C94;
	sub_82140DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142C9C:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82142d3c
	if (ctx.cr6.eq) goto loc_82142D3C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82142CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r7,344(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82142cf4
	if (ctx.cr6.lt) goto loc_82142CF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
loc_82142CF4:
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82142d08
	if (ctx.cr6.eq) goto loc_82142D08;
	// cmpwi cr6,r4,1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1000, ctx.xer);
	// blt cr6,0x82142d0c
	if (ctx.cr6.lt) goto loc_82142D0C;
loc_82142D08:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82142D0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,340(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// bl 0x821411f0
	ctx.lr = 0x82142D18;
	sub_821411F0(ctx, base);
	// stw r3,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140cb8
	ctx.lr = 0x82142D24;
	sub_82140CB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142D2C;
	sub_82141F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142D34;
	sub_82140DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142D3C:
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82142dac
	if (!ctx.cr6.eq) goto loc_82142DAC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82142dac
	if (!ctx.cr6.eq) goto loc_82142DAC;
	// rlwinm r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82142d80
	if (!ctx.cr6.eq) goto loc_82142D80;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82142e64
	if (ctx.cr6.eq) goto loc_82142E64;
loc_82142D80:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,34483
	ctx.r3.u64 = ctx.r3.u64 | 34483;
	// bl 0x8208f870
	ctx.lr = 0x82142D8C;
	sub_8208F870(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141048
	ctx.lr = 0x82142D94;
	sub_82141048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142D9C;
	sub_82141F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142DA4;
	sub_82140DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142DAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141678
	ctx.lr = 0x82142DB4;
	sub_82141678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142de0
	if (ctx.cr6.eq) goto loc_82142DE0;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82142DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142DE0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82142df8
	if (ctx.cr6.eq) goto loc_82142DF8;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x82142e1c
	goto loc_82142E1C;
loc_82142DF8:
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82142e0c
	if (ctx.cr6.eq) goto loc_82142E0C;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// b 0x82142e1c
	goto loc_82142E1C;
loc_82142E0C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142e20
	if (ctx.cr6.eq) goto loc_82142E20;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82142E1C:
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
loc_82142E20:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142080
	ctx.lr = 0x82142E2C;
	sub_82142080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142E34;
	sub_82141F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142E3C;
	sub_82140DA8(ctx, base);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x82142e5c
	if (!ctx.cr6.lt) goto loc_82142E5C;
	// ori r3,r3,34482
	ctx.r3.u64 = ctx.r3.u64 | 34482;
	// bl 0x8208f870
	ctx.lr = 0x82142E54;
	sub_8208F870(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82142E5C:
	// ori r3,r3,34484
	ctx.r3.u64 = ctx.r3.u64 | 34484;
	// bl 0x8208f870
	ctx.lr = 0x82142E64;
	sub_8208F870(ctx, base);
loc_82142E64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82142E6C"))) PPC_WEAK_FUNC(sub_82142E6C);
PPC_FUNC_IMPL(__imp__sub_82142E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142E70"))) PPC_WEAK_FUNC(sub_82142E70);
PPC_FUNC_IMPL(__imp__sub_82142E70) {
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
	// bl 0x82142550
	ctx.lr = 0x82142E88;
	sub_82142550(ctx, base);
	// lwz r3,1824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// bl 0x821456f0
	ctx.lr = 0x82142E90;
	sub_821456F0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82142EA4"))) PPC_WEAK_FUNC(sub_82142EA4);
PPC_FUNC_IMPL(__imp__sub_82142EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142EA8"))) PPC_WEAK_FUNC(sub_82142EA8);
PPC_FUNC_IMPL(__imp__sub_82142EA8) {
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
	// bl 0x8218ca20
	ctx.lr = 0x82142EC4;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x82142f80
	if (ctx.cr6.eq) goto loc_82142F80;
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// blt cr6,0x82142ee0
	if (ctx.cr6.lt) goto loc_82142EE0;
	// cmpwi cr6,r11,2135
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2135, ctx.xer);
	// blt cr6,0x82142ef0
	if (ctx.cr6.lt) goto loc_82142EF0;
loc_82142EE0:
	// cmpwi cr6,r11,1500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1500, ctx.xer);
	// blt cr6,0x82142f80
	if (ctx.cr6.lt) goto loc_82142F80;
	// cmpwi cr6,r11,1502
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1502, ctx.xer);
	// bge cr6,0x82142f80
	if (!ctx.cr6.lt) goto loc_82142F80;
loc_82142EF0:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142f80
	if (ctx.cr6.eq) goto loc_82142F80;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142f80
	if (ctx.cr6.eq) goto loc_82142F80;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// lwz r11,1772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82142f44
	if (ctx.cr6.eq) goto loc_82142F44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82142f80
	if (!ctx.cr6.eq) goto loc_82142F80;
loc_82142F44:
	// bl 0x821ec830
	ctx.lr = 0x82142F48;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82142f80
	if (!ctx.cr6.eq) goto loc_82142F80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82142080
	ctx.lr = 0x82142F5C;
	sub_82142080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141f60
	ctx.lr = 0x82142F64;
	sub_82141F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82140da8
	ctx.lr = 0x82142F6C;
	sub_82140DA8(ctx, base);
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142F80:
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

__attribute__((alias("__imp__sub_82142F98"))) PPC_WEAK_FUNC(sub_82142F98);
PPC_FUNC_IMPL(__imp__sub_82142F98) {
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
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82142ffc
	if (ctx.cr6.eq) goto loc_82142FFC;
	// bl 0x82142290
	ctx.lr = 0x82142FB8;
	sub_82142290(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// stw r3,-10952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10952, ctx.r3.u32);
	// lwz r3,-1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142fe4
	if (ctx.cr6.eq) goto loc_82142FE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142FE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1428, ctx.r11.u32);
	// bl 0x82143900
	ctx.lr = 0x82142FF0;
	sub_82143900(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4772, ctx.r11.u32);
loc_82142FFC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82143010"))) PPC_WEAK_FUNC(sub_82143010);
PPC_FUNC_IMPL(__imp__sub_82143010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82143018;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82163ee8
	ctx.lr = 0x82143024;
	sub_82163EE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,3348
	ctx.r29.s64 = ctx.r3.s64 + 3348;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82143030:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822336c8
	ctx.lr = 0x8214303C;
	sub_822336C8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,3560
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3560, ctx.xer);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// blt cr6,0x82143030
	if (ctx.cr6.lt) goto loc_82143030;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82143064"))) PPC_WEAK_FUNC(sub_82143064);
PPC_FUNC_IMPL(__imp__sub_82143064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143068"))) PPC_WEAK_FUNC(sub_82143068);
PPC_FUNC_IMPL(__imp__sub_82143068) {
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
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lfs f0,26224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26224);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lfs f13,7884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7884);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x821430A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821430c0
	if (ctx.cr6.eq) goto loc_821430C0;
	// li r3,3560
	ctx.r3.s64 = 3560;
	// bl 0x82183448
	ctx.lr = 0x821430BC;
	sub_82183448(ctx, base);
	// b 0x821430c8
	goto loc_821430C8;
loc_821430C0:
	// li r3,223
	ctx.r3.s64 = 223;
	// bl 0x821845a0
	ctx.lr = 0x821430C8;
	sub_821845A0(ctx, base);
loc_821430C8:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r5,3560
	ctx.r5.s64 = 3560;
	// addi r4,r11,-15008
	ctx.r4.s64 = ctx.r11.s64 + -15008;
	// bl 0x82248a40
	ctx.lr = 0x821430DC;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143010
	ctx.lr = 0x821430E4;
	sub_82143010(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82143128"))) PPC_WEAK_FUNC(sub_82143128);
PPC_FUNC_IMPL(__imp__sub_82143128) {
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
	// beq cr6,0x82143150
	if (ctx.cr6.eq) goto loc_82143150;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82143150;
	sub_82183E40(ctx, base);
loc_82143150:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_8214316C"))) PPC_WEAK_FUNC(sub_8214316C);
PPC_FUNC_IMPL(__imp__sub_8214316C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143170"))) PPC_WEAK_FUNC(sub_82143170);
PPC_FUNC_IMPL(__imp__sub_82143170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82143178;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,-29136
	ctx.r8.s64 = ctx.r11.s64 + -29136;
	// addi r7,r10,-29144
	ctx.r7.s64 = ctx.r10.s64 + -29144;
	// addi r6,r9,-29280
	ctx.r6.s64 = ctx.r9.s64 + -29280;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821431cc
	if (ctx.cr6.eq) goto loc_821431CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821431CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821431CC:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821431f4
	if (ctx.cr6.eq) goto loc_821431F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821431F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821431F4:
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// bl 0x823c31a0
	ctx.lr = 0x82143200;
	sub_823C31A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82143208;
	sub_823C52A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x82143210;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82143218;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82143220"))) PPC_WEAK_FUNC(sub_82143220);
PPC_FUNC_IMPL(__imp__sub_82143220) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82143230
	sub_82143230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143228"))) PPC_WEAK_FUNC(sub_82143228);
PPC_FUNC_IMPL(__imp__sub_82143228) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82143230
	sub_82143230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143230"))) PPC_WEAK_FUNC(sub_82143230);
PPC_FUNC_IMPL(__imp__sub_82143230) {
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
	// bl 0x82143170
	ctx.lr = 0x82143250;
	sub_82143170(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214326c
	if (ctx.cr6.eq) goto loc_8214326C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82143268;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8214326C:
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

__attribute__((alias("__imp__sub_82143284"))) PPC_WEAK_FUNC(sub_82143284);
PPC_FUNC_IMPL(__imp__sub_82143284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143288"))) PPC_WEAK_FUNC(sub_82143288);
PPC_FUNC_IMPL(__imp__sub_82143288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82143290;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,280(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821432A0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821432AC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821432B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821432c8
	if (ctx.cr6.eq) goto loc_821432C8;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82183448
	ctx.lr = 0x821432C4;
	sub_82183448(ctx, base);
	// b 0x821432d0
	goto loc_821432D0;
loc_821432C8:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821845a0
	ctx.lr = 0x821432D0;
	sub_821845A0(ctx, base);
loc_821432D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821432e4
	if (ctx.cr6.eq) goto loc_821432E4;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x8210b8a8
	ctx.lr = 0x821432E0;
	sub_8210B8A8(ctx, base);
	// b 0x821432e8
	goto loc_821432E8;
loc_821432E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821432E8:
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821432F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82143308
	if (ctx.cr6.eq) goto loc_82143308;
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82183448
	ctx.lr = 0x82143304;
	sub_82183448(ctx, base);
	// b 0x82143310
	goto loc_82143310;
loc_82143308:
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x821845a0
	ctx.lr = 0x82143310;
	sub_821845A0(ctx, base);
loc_82143310:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82143328
	if (ctx.cr6.eq) goto loc_82143328;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82110860
	ctx.lr = 0x82143324;
	sub_82110860(ctx, base);
	// b 0x8214332c
	goto loc_8214332C;
loc_82143328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214332C:
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-29040
	ctx.r3.s64 = ctx.r11.s64 + -29040;
	// bl 0x821e9128
	ctx.lr = 0x82143340;
	sub_821E9128(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8210ffa0
	ctx.lr = 0x8214335C;
	sub_8210FFA0(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r4,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r4.u32);
	// lwz r11,-780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -780);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x8214339C;
	sub_82109308(ctx, base);
	// lwz r11,-780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -780);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821433B8;
	sub_82109308(ctx, base);
	// lwz r11,-780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821433D4;
	sub_82109308(ctx, base);
	// lwz r11,-780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -780);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82109308
	ctx.lr = 0x821433F0;
	sub_82109308(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-29052
	ctx.r4.s64 = ctx.r11.s64 + -29052;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82106d58
	ctx.lr = 0x82143408;
	sub_82106D58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82143410;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82143418"))) PPC_WEAK_FUNC(sub_82143418);
PPC_FUNC_IMPL(__imp__sub_82143418) {
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
	// bl 0x820ed3d8
	ctx.lr = 0x82143434;
	sub_820ED3D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82143488
	if (ctx.cr6.eq) goto loc_82143488;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82143488
	if (ctx.cr6.eq) goto loc_82143488;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,856(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143488
	if (ctx.cr6.eq) goto loc_82143488;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x82143470;
	sub_82109E00(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82143488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82143488:
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

__attribute__((alias("__imp__sub_821434A0"))) PPC_WEAK_FUNC(sub_821434A0);
PPC_FUNC_IMPL(__imp__sub_821434A0) {
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
	// bl 0x82163ee8
	ctx.lr = 0x821434B8;
	sub_82163EE8(ctx, base);
	// lwz r11,3376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821434dc
	if (!ctx.cr6.eq) goto loc_821434DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821434e0
	if (ctx.cr6.eq) goto loc_821434E0;
loc_821434DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821434E0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821434F4"))) PPC_WEAK_FUNC(sub_821434F4);
PPC_FUNC_IMPL(__imp__sub_821434F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821434F8"))) PPC_WEAK_FUNC(sub_821434F8);
PPC_FUNC_IMPL(__imp__sub_821434F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82143500;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,24999
	ctx.r4.s64 = 24999;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82143528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r27,548
	ctx.r29.s64 = ctx.r27.s64 + 548;
loc_82143530:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a4f8
	ctx.lr = 0x82143540;
	sub_8218A4F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,128
	ctx.r4.s64 = 128;
	// beq cr6,0x8214357c
	if (ctx.cr6.eq) goto loc_8214357C;
	// subf r6,r31,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a1d8
	ctx.lr = 0x82143560;
	sub_8218A1D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x82143530
	if (ctx.cr6.lt) goto loc_82143530;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8214357C:
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,548
	ctx.r3.s64 = ctx.r11.s64 + 548;
	// bl 0x8218a128
	ctx.lr = 0x82143590;
	sub_8218A128(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82143598"))) PPC_WEAK_FUNC(sub_82143598);
PPC_FUNC_IMPL(__imp__sub_82143598) {
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
	// lwz r11,-1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821435e0
	if (!ctx.cr6.eq) goto loc_821435E0;
	// lwz r11,1864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821435ec
	if (ctx.cr6.eq) goto loc_821435EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1856
	ctx.r3.s64 = ctx.r3.s64 + 1856;
	// bl 0x823c32b0
	ctx.lr = 0x821435D8;
	sub_823C32B0(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x821435ec
	if (!ctx.cr6.gt) goto loc_821435EC;
loc_821435E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r11.u32);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
loc_821435EC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82143600"))) PPC_WEAK_FUNC(sub_82143600);
PPC_FUNC_IMPL(__imp__sub_82143600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82143608;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82143684
	if (ctx.cr6.eq) goto loc_82143684;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82143628;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82143638;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x8214364C;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82143658;
	sub_821AD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8210a9b0
	ctx.lr = 0x8214366C;
	sub_8210A9B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82143678;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82143684;
	sub_821AD498(ctx, base);
loc_82143684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8214368C"))) PPC_WEAK_FUNC(sub_8214368C);
PPC_FUNC_IMPL(__imp__sub_8214368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143690"))) PPC_WEAK_FUNC(sub_82143690);
PPC_FUNC_IMPL(__imp__sub_82143690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82143698;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x821436AC;
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
	ctx.lr = 0x821436C0;
	sub_821859A0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823c58b0
	ctx.lr = 0x821436D0;
	sub_823C58B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,10416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10416);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,-29016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29016);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f12,9852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9852);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f11,-29020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29020);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,-29024(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29024);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r4,-29136
	ctx.r10.s64 = ctx.r4.s64 + -29136;
	// lfs f9,-29028(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -29028);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r3,-29144
	ctx.r9.s64 = ctx.r3.s64 + -29144;
	// lfs f8,-29032(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29032);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r11,-29280
	ctx.r8.s64 = ctx.r11.s64 + -29280;
	// stfs f0,1828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1828, temp.u32);
	// stfs f13,1832(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1832, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f12,1836(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1836, temp.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stfs f11,1840(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1840, temp.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stfs f10,1844(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// addi r29,r31,1856
	ctx.r29.s64 = ctx.r31.s64 + 1856;
	// stfs f9,1848(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1848, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f8,1852(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c35b8
	ctx.lr = 0x8214375C;
	sub_823C35B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// bl 0x8215c0c0
	ctx.lr = 0x82143768;
	sub_8215C0C0(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143288
	ctx.lr = 0x82143774;
	sub_82143288(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r7,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r7,30
	ctx.r7.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,2148(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823c31b0
	ctx.lr = 0x821437A4;
	sub_823C31B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f31,2176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2176, temp.u32);
	// stw r30,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// stfs f31,2180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2180, temp.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r4,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821437D8"))) PPC_WEAK_FUNC(sub_821437D8);
PPC_FUNC_IMPL(__imp__sub_821437D8) {
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
	// lwz r11,2164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2164);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143800
	if (ctx.cr6.eq) goto loc_82143800;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82143844
	goto loc_82143844;
loc_82143800:
	// bl 0x82163ee8
	ctx.lr = 0x82143804;
	sub_82163EE8(ctx, base);
	// lwz r10,3376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3376);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82143828
	if (!ctx.cr6.eq) goto loc_82143828;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82143834
	if (ctx.cr6.eq) goto loc_82143834;
loc_82143828:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r10.u32);
	// b 0x82143838
	goto loc_82143838;
loc_82143834:
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
loc_82143838:
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// stw r11,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r11.u32);
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
loc_82143844:
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214385C"))) PPC_WEAK_FUNC(sub_8214385C);
PPC_FUNC_IMPL(__imp__sub_8214385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143860"))) PPC_WEAK_FUNC(sub_82143860);
PPC_FUNC_IMPL(__imp__sub_82143860) {
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
	// lwz r11,2132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821438c8
	if (ctx.cr6.eq) goto loc_821438C8;
	// lwz r11,2140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821438c8
	if (ctx.cr6.eq) goto loc_821438C8;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821434a0
	ctx.lr = 0x8214389C;
	sub_821434A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821438b0
	if (ctx.cr6.eq) goto loc_821438B0;
	// bl 0x821434f8
	ctx.lr = 0x821438AC;
	sub_821434F8(ctx, base);
	// b 0x821438c8
	goto loc_821438C8;
loc_821438B0:
	// lwz r11,2128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821438c4
	if (ctx.cr6.eq) goto loc_821438C4;
	// bl 0x82143598
	ctx.lr = 0x821438C0;
	sub_82143598(ctx, base);
	// b 0x821438c8
	goto loc_821438C8;
loc_821438C4:
	// bl 0x82143600
	ctx.lr = 0x821438C8;
	sub_82143600(ctx, base);
loc_821438C8:
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

__attribute__((alias("__imp__sub_821438E0"))) PPC_WEAK_FUNC(sub_821438E0);
PPC_FUNC_IMPL(__imp__sub_821438E0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-1400(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1400, ctx.r11.u32);
	// stw r10,-10952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10952, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821438FC"))) PPC_WEAK_FUNC(sub_821438FC);
PPC_FUNC_IMPL(__imp__sub_821438FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143900"))) PPC_WEAK_FUNC(sub_82143900);
PPC_FUNC_IMPL(__imp__sub_82143900) {
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
	// lwz r11,-1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1400);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821439c8
	if (ctx.cr6.gt) goto loc_821439C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82143954
	// bdzf 4*cr6+eq,0x8214396c
	// bne cr6,0x8214399c
	if (!ctx.cr6.eq) goto loc_8214399C;
	// bl 0x8208f9b0
	ctx.lr = 0x8214393C;
	sub_8208F9B0(ctx, base);
	// bl 0x8215c638
	ctx.lr = 0x82143940;
	sub_8215C638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82143954:
	// bl 0x8215c6c0
	ctx.lr = 0x82143958;
	sub_8215C6C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8214396C:
	// bl 0x82183078
	ctx.lr = 0x82143970;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8214397C;
	sub_821837D0(ctx, base);
	// bl 0x82085690
	ctx.lr = 0x82143980;
	sub_82085690(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x8214398C;
	sub_82163A30(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9912, ctx.r11.u32);
	// b 0x821439c0
	goto loc_821439C0;
loc_8214399C:
	// bl 0x82183078
	ctx.lr = 0x821439A0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x821439AC;
	sub_821837D0(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82080000
	ctx.lr = 0x821439B4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821439c0
	if (ctx.cr6.eq) goto loc_821439C0;
	// bl 0x8213e2b0
	ctx.lr = 0x821439C0;
	sub_8213E2B0(ctx, base);
loc_821439C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821439C8;
	sub_821837D0(ctx, base);
loc_821439C8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821439DC"))) PPC_WEAK_FUNC(sub_821439DC);
PPC_FUNC_IMPL(__imp__sub_821439DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821439E0"))) PPC_WEAK_FUNC(sub_821439E0);
PPC_FUNC_IMPL(__imp__sub_821439E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821439E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-29004
	ctx.r9.s64 = ctx.r11.s64 + -29004;
	// addi r8,r10,-29012
	ctx.r8.s64 = ctx.r10.s64 + -29012;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82143a2c
	if (ctx.cr6.eq) goto loc_82143A2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82143A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82143A2C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82143a54
	if (ctx.cr6.eq) goto loc_82143A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82143A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82143A54:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82143A60;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82143A68;
	sub_821857F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82143A70"))) PPC_WEAK_FUNC(sub_82143A70);
PPC_FUNC_IMPL(__imp__sub_82143A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143a84
	if (ctx.cr6.eq) goto loc_82143A84;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82143A84:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143A98"))) PPC_WEAK_FUNC(sub_82143A98);
PPC_FUNC_IMPL(__imp__sub_82143A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143ABC"))) PPC_WEAK_FUNC(sub_82143ABC);
PPC_FUNC_IMPL(__imp__sub_82143ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143AC0"))) PPC_WEAK_FUNC(sub_82143AC0);
PPC_FUNC_IMPL(__imp__sub_82143AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82143ae0
	if (ctx.cr6.eq) goto loc_82143AE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82143ae0
	if (ctx.cr6.eq) goto loc_82143AE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82143AE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143AE8"))) PPC_WEAK_FUNC(sub_82143AE8);
PPC_FUNC_IMPL(__imp__sub_82143AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143AFC"))) PPC_WEAK_FUNC(sub_82143AFC);
PPC_FUNC_IMPL(__imp__sub_82143AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143B00"))) PPC_WEAK_FUNC(sub_82143B00);
PPC_FUNC_IMPL(__imp__sub_82143B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B14"))) PPC_WEAK_FUNC(sub_82143B14);
PPC_FUNC_IMPL(__imp__sub_82143B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143B18"))) PPC_WEAK_FUNC(sub_82143B18);
PPC_FUNC_IMPL(__imp__sub_82143B18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82143b2c
	if (ctx.cr6.eq) goto loc_82143B2C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82143B2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143B34"))) PPC_WEAK_FUNC(sub_82143B34);
PPC_FUNC_IMPL(__imp__sub_82143B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143B38"))) PPC_WEAK_FUNC(sub_82143B38);
PPC_FUNC_IMPL(__imp__sub_82143B38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82143c00
	sub_82143C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143B40"))) PPC_WEAK_FUNC(sub_82143B40);
PPC_FUNC_IMPL(__imp__sub_82143B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82143B48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82185740
	ctx.lr = 0x82143B68;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821859a0
	ctx.lr = 0x82143B7C;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// addi r9,r11,-29004
	ctx.r9.s64 = ctx.r11.s64 + -29004;
	// addi r8,r10,-29012
	ctx.r8.s64 = ctx.r10.s64 + -29012;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x8215bd50
	ctx.lr = 0x82143BCC;
	sub_8215BD50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82143bf0
	if (ctx.cr6.eq) goto loc_82143BF0;
	// bl 0x8218f0b0
	ctx.lr = 0x82143BD8;
	sub_8218F0B0(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82143bec
	if (ctx.cr6.lt) goto loc_82143BEC;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// blt cr6,0x82143bf0
	if (ctx.cr6.lt) goto loc_82143BF0;
loc_82143BEC:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82143BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82143BFC"))) PPC_WEAK_FUNC(sub_82143BFC);
PPC_FUNC_IMPL(__imp__sub_82143BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143C00"))) PPC_WEAK_FUNC(sub_82143C00);
PPC_FUNC_IMPL(__imp__sub_82143C00) {
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
	// bl 0x821439e0
	ctx.lr = 0x82143C20;
	sub_821439E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82143c3c
	if (ctx.cr6.eq) goto loc_82143C3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82143C38;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82143C3C:
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

__attribute__((alias("__imp__sub_82143C54"))) PPC_WEAK_FUNC(sub_82143C54);
PPC_FUNC_IMPL(__imp__sub_82143C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143C58"))) PPC_WEAK_FUNC(sub_82143C58);
PPC_FUNC_IMPL(__imp__sub_82143C58) {
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
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143cc8
	if (!ctx.cr6.eq) goto loc_82143CC8;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82106d70
	ctx.lr = 0x82143C84;
	sub_82106D70(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8212eeb0
	ctx.lr = 0x82143C94;
	sub_8212EEB0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
loc_82143CC8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82143CDC"))) PPC_WEAK_FUNC(sub_82143CDC);
PPC_FUNC_IMPL(__imp__sub_82143CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143CE0"))) PPC_WEAK_FUNC(sub_82143CE0);
PPC_FUNC_IMPL(__imp__sub_82143CE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82143c58
	sub_82143C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143CE8"))) PPC_WEAK_FUNC(sub_82143CE8);
PPC_FUNC_IMPL(__imp__sub_82143CE8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82143c58
	sub_82143C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143CF0"))) PPC_WEAK_FUNC(sub_82143CF0);
PPC_FUNC_IMPL(__imp__sub_82143CF0) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82143c58
	sub_82143C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143CF8"))) PPC_WEAK_FUNC(sub_82143CF8);
PPC_FUNC_IMPL(__imp__sub_82143CF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82143c58
	sub_82143C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143D00"))) PPC_WEAK_FUNC(sub_82143D00);
PPC_FUNC_IMPL(__imp__sub_82143D00) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82143c58
	sub_82143C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143D08"))) PPC_WEAK_FUNC(sub_82143D08);
PPC_FUNC_IMPL(__imp__sub_82143D08) {
	PPC_FUNC_PROLOGUE();
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82143c58
	sub_82143C58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143D10"))) PPC_WEAK_FUNC(sub_82143D10);
PPC_FUNC_IMPL(__imp__sub_82143D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82143D18;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143da0
	if (ctx.cr6.eq) goto loc_82143DA0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143da0
	if (!ctx.cr6.eq) goto loc_82143DA0;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x82143D44;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x82143D54;
	sub_821ADD20(ctx, base);
	// lwz r11,-7488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82143D68;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82143D74;
	sub_821AD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8210a9b0
	ctx.lr = 0x82143D88;
	sub_8210A9B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x82143D94;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x82143DA0;
	sub_821AD498(ctx, base);
loc_82143DA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82143DA8"))) PPC_WEAK_FUNC(sub_82143DA8);
PPC_FUNC_IMPL(__imp__sub_82143DA8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82143dd4
	if (ctx.cr6.eq) goto loc_82143DD4;
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
loc_82143DD4:
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82106ec0
	ctx.lr = 0x82143DE4;
	sub_82106EC0(ctx, base);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82143DF8"))) PPC_WEAK_FUNC(sub_82143DF8);
PPC_FUNC_IMPL(__imp__sub_82143DF8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82143e4c
	if (!ctx.cr6.eq) goto loc_82143E4C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143e4c
	if (!ctx.cr6.eq) goto loc_82143E4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82106ec0
	ctx.lr = 0x82143E34;
	sub_82106EC0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143e4c
	if (ctx.cr6.eq) goto loc_82143E4C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143c58
	ctx.lr = 0x82143E4C;
	sub_82143C58(ctx, base);
loc_82143E4C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82143e88
	if (!ctx.cr6.eq) goto loc_82143E88;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143eac
	if (!ctx.cr6.eq) goto loc_82143EAC;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82106ec0
	ctx.lr = 0x82143E74;
	sub_82106EC0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143eac
	if (ctx.cr6.eq) goto loc_82143EAC;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82143ea4
	goto loc_82143EA4;
loc_82143E88:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143eac
	if (!ctx.cr6.eq) goto loc_82143EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143da8
	ctx.lr = 0x82143E98;
	sub_82143DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82143eac
	if (ctx.cr6.eq) goto loc_82143EAC;
	// li r4,2
	ctx.r4.s64 = 2;
loc_82143EA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143c58
	ctx.lr = 0x82143EAC;
	sub_82143C58(ctx, base);
loc_82143EAC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82143EC0"))) PPC_WEAK_FUNC(sub_82143EC0);
PPC_FUNC_IMPL(__imp__sub_82143EC0) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82143f1c
	if (!ctx.cr6.eq) goto loc_82143F1C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143f1c
	if (!ctx.cr6.eq) goto loc_82143F1C;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82106ec0
	ctx.lr = 0x82143EFC;
	sub_82106EC0(ctx, base);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82143f1c
	if (ctx.cr6.eq) goto loc_82143F1C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82143f1c
	if (!ctx.cr6.eq) goto loc_82143F1C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82106d70
	ctx.lr = 0x82143F1C;
	sub_82106D70(ctx, base);
loc_82143F1C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82143F30"))) PPC_WEAK_FUNC(sub_82143F30);
PPC_FUNC_IMPL(__imp__sub_82143F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82143F38;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821441dc
	if (ctx.cr6.gt) goto loc_821441DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82144024
	// bdzf 4*cr6+eq,0x821440e0
	// bdzf 4*cr6+eq,0x82144158
	// bne cr6,0x82144170
	if (!ctx.cr6.eq) goto loc_82144170;
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82183078
	ctx.lr = 0x82143F70;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82143F7C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x820801d8
	ctx.lr = 0x82143F88;
	sub_820801D8(ctx, base);
	// li r3,1248
	ctx.r3.s64 = 1248;
	// bl 0x82080000
	ctx.lr = 0x82143F90;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82143fac
	if (ctx.cr6.eq) goto loc_82143FAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82110860
	ctx.lr = 0x82143FA4;
	sub_82110860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82143fb0
	goto loc_82143FB0;
loc_82143FAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82143FB0:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x82143FC0;
	sub_822AA648(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r11,-28984
	ctx.r5.s64 = ctx.r11.s64 + -28984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a5f0
	ctx.lr = 0x82143FD8;
	sub_8218A5F0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r6,7002
	ctx.r6.s64 = 7002;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8210ffa0
	ctx.lr = 0x82143FF4;
	sub_8210FFA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// blt cr6,0x821440c8
	if (ctx.cr6.lt) goto loc_821440C8;
	// bne cr6,0x821440d0
	if (!ctx.cr6.eq) goto loc_821440D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82144014;
	sub_821830F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214401C;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144024:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821441dc
	if (ctx.cr6.eq) goto loc_821441DC;
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82183078
	ctx.lr = 0x8214403C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82144048;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x820801d8
	ctx.lr = 0x82144054;
	sub_820801D8(ctx, base);
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x82080000
	ctx.lr = 0x8214405C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144070
	if (ctx.cr6.eq) goto loc_82144070;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8210b8a8
	ctx.lr = 0x8214406C;
	sub_8210B8A8(ctx, base);
	// b 0x82144074
	goto loc_82144074;
loc_82144070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82144074:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-28996
	ctx.r4.s64 = ctx.r10.s64 + -28996;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82106d58
	ctx.lr = 0x82144098;
	sub_82106D58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,3
	ctx.r9.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// blt cr6,0x821440c8
	if (ctx.cr6.lt) goto loc_821440C8;
	// bne cr6,0x821440d0
	if (!ctx.cr6.eq) goto loc_821440D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821440B8;
	sub_821830F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821440C0;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821440C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x821440D0;
	sub_821830F8(ctx, base);
loc_821440D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821440D8;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821440E0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821441dc
	if (ctx.cr6.eq) goto loc_821441DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x821440FC;
	sub_82109E00(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82106d70
	ctx.lr = 0x82144104;
	sub_82106D70(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82144144
	if (!ctx.cr6.gt) goto loc_82144144;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82144124:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// stw r7,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r7.u32);
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82144124
	if (ctx.cr6.lt) goto loc_82144124;
loc_82144144:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143df8
	ctx.lr = 0x82144160;
	sub_82143DF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143ec0
	ctx.lr = 0x82144168;
	sub_82143EC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144170:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821441dc
	if (ctx.cr6.lt) goto loc_821441DC;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821441a4
	if (ctx.cr6.eq) goto loc_821441A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821441A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821441A4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821441cc
	if (ctx.cr6.eq) goto loc_821441CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821441CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821441CC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_821441DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821441E4"))) PPC_WEAK_FUNC(sub_821441E4);
PPC_FUNC_IMPL(__imp__sub_821441E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821441E8"))) PPC_WEAK_FUNC(sub_821441E8);
PPC_FUNC_IMPL(__imp__sub_821441E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214423C"))) PPC_WEAK_FUNC(sub_8214423C);
PPC_FUNC_IMPL(__imp__sub_8214423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144240"))) PPC_WEAK_FUNC(sub_82144240);
PPC_FUNC_IMPL(__imp__sub_82144240) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82144338
	if (ctx.cr6.eq) goto loc_82144338;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214428c
	if (ctx.cr6.eq) goto loc_8214428C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82144340
	if (!ctx.cr6.eq) goto loc_82144340;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82144340
	if (!ctx.cr6.eq) goto loc_82144340;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// b 0x82144340
	goto loc_82144340;
loc_8214428C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144340
	if (ctx.cr6.eq) goto loc_82144340;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821442A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144340
	if (ctx.cr6.eq) goto loc_82144340;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821442C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82144310
	if (!ctx.cr6.eq) goto loc_82144310;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821442E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144308
	if (ctx.cr6.eq) goto loc_82144308;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82144310
	goto loc_82144310;
loc_82144308:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82144310:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144330
	if (ctx.cr6.eq) goto loc_82144330;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82144330:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82144340
	goto loc_82144340;
loc_82144338:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82144340:
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

__attribute__((alias("__imp__sub_82144358"))) PPC_WEAK_FUNC(sub_82144358);
PPC_FUNC_IMPL(__imp__sub_82144358) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8214449c
	if (ctx.cr6.gt) goto loc_8214449C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8214449c
	// bdzf 4*cr6+eq,0x8214439c
	// bdzf 4*cr6+eq,0x82144404
	// bne cr6,0x82144454
	if (!ctx.cr6.eq) goto loc_82144454;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82144498
	goto loc_82144498;
loc_8214439C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821443B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214449c
	if (!ctx.cr6.eq) goto loc_8214449C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821443d8
	if (ctx.cr6.eq) goto loc_821443D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821443D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821443D8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// beq cr6,0x8214449c
	if (ctx.cr6.eq) goto loc_8214449C;
	// bl 0x8213f0a8
	ctx.lr = 0x821443F8;
	sub_8213F0A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8213e998
	ctx.lr = 0x82144400;
	sub_8213E998(ctx, base);
	// b 0x8214449c
	goto loc_8214449C;
loc_82144404:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214449c
	if (ctx.cr6.eq) goto loc_8214449C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144440
	if (ctx.cr6.eq) goto loc_82144440;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82144440:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// b 0x8214449c
	goto loc_8214449C;
loc_82144454:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214446c
	if (ctx.cr6.eq) goto loc_8214446C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8214449c
	if (!ctx.cr6.eq) goto loc_8214449C;
loc_8214446C:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmpwi cr6,r11,1310
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1310, ctx.xer);
	// bne cr6,0x82144488
	if (!ctx.cr6.eq) goto loc_82144488;
	// bl 0x821411d0
	ctx.lr = 0x82144484;
	sub_821411D0(ctx, base);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
loc_82144488:
	// bl 0x821421e0
	ctx.lr = 0x8214448C;
	sub_821421E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_82144498:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8214449C:
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

__attribute__((alias("__imp__sub_821444B4"))) PPC_WEAK_FUNC(sub_821444B4);
PPC_FUNC_IMPL(__imp__sub_821444B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821444B8"))) PPC_WEAK_FUNC(sub_821444B8);
PPC_FUNC_IMPL(__imp__sub_821444B8) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821445d0
	if (ctx.cr6.gt) goto loc_821445D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82144508
	// bdzf 4*cr6+eq,0x82144524
	// bne cr6,0x8214459c
	if (!ctx.cr6.eq) goto loc_8214459C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82144508:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82144524:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821445d0
	if (ctx.cr6.eq) goto loc_821445D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144560
	if (ctx.cr6.eq) goto loc_82144560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82144560:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// beq cr6,0x821445d0
	if (ctx.cr6.eq) goto loc_821445D0;
	// bl 0x8213f0a8
	ctx.lr = 0x82144580;
	sub_8213F0A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8213e998
	ctx.lr = 0x82144588;
	sub_8213E998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8214459C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821445b4
	if (ctx.cr6.eq) goto loc_821445B4;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821445d0
	if (!ctx.cr6.eq) goto loc_821445D0;
loc_821445B4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x821421e0
	ctx.lr = 0x821445C0;
	sub_821421E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
loc_821445D0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821445E4"))) PPC_WEAK_FUNC(sub_821445E4);
PPC_FUNC_IMPL(__imp__sub_821445E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821445E8"))) PPC_WEAK_FUNC(sub_821445E8);
PPC_FUNC_IMPL(__imp__sub_821445E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821445F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,-1396(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1396);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82144760
	if (ctx.cr6.eq) goto loc_82144760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143b00
	ctx.lr = 0x82144610;
	sub_82143B00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82144760
	if (ctx.cr6.eq) goto loc_82144760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143ae8
	ctx.lr = 0x82144620;
	sub_82143AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144760
	if (ctx.cr6.eq) goto loc_82144760;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bne cr6,0x8214466c
	if (!ctx.cr6.eq) goto loc_8214466C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143b18
	ctx.lr = 0x82144644;
	sub_82143B18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214465c
	if (!ctx.cr6.eq) goto loc_8214465C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143ce8
	ctx.lr = 0x82144654;
	sub_82143CE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8214465C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8214466C:
	// cmpwi cr6,r31,100
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 100, ctx.xer);
	// bgt cr6,0x821446c4
	if (ctx.cr6.gt) goto loc_821446C4;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8214468c
	if (!ctx.cr6.eq) goto loc_8214468C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143ce0
	ctx.lr = 0x82144684;
	sub_82143CE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8214468C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82144760
	if (ctx.cr6.eq) goto loc_82144760;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x821446b4
	if (ctx.cr6.eq) goto loc_821446B4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x821446b4
	if (ctx.cr6.eq) goto loc_821446B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143cf0
	ctx.lr = 0x821446AC;
	sub_82143CF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821446B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143d00
	ctx.lr = 0x821446BC;
	sub_82143D00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821446C4:
	// cmpwi cr6,r31,1000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1000, ctx.xer);
	// blt cr6,0x821446d4
	if (ctx.cr6.lt) goto loc_821446D4;
	// cmpwi cr6,r31,1136
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1136, ctx.xer);
	// ble cr6,0x82144738
	if (!ctx.cr6.gt) goto loc_82144738;
loc_821446D4:
	// cmpwi cr6,r31,2000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2000, ctx.xer);
	// blt cr6,0x821446e4
	if (ctx.cr6.lt) goto loc_821446E4;
	// cmpwi cr6,r31,2135
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2135, ctx.xer);
	// blt cr6,0x82144738
	if (ctx.cr6.lt) goto loc_82144738;
loc_821446E4:
	// cmpwi cr6,r31,1300
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1300, ctx.xer);
	// blt cr6,0x821446f4
	if (ctx.cr6.lt) goto loc_821446F4;
	// cmpwi cr6,r31,1318
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1318, ctx.xer);
	// ble cr6,0x82144738
	if (!ctx.cr6.gt) goto loc_82144738;
loc_821446F4:
	// cmpwi cr6,r31,1321
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1321, ctx.xer);
	// beq cr6,0x82144738
	if (ctx.cr6.eq) goto loc_82144738;
	// cmpwi cr6,r31,1319
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1319, ctx.xer);
	// beq cr6,0x82144738
	if (ctx.cr6.eq) goto loc_82144738;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82144728
	if (ctx.cr6.eq) goto loc_82144728;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82144728
	if (ctx.cr6.eq) goto loc_82144728;
	// lwz r11,-1396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1396);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144728:
	// lwz r3,-1396(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1396);
	// bl 0x82143ce8
	ctx.lr = 0x82144730;
	sub_82143CE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143b18
	ctx.lr = 0x82144740;
	sub_82143B18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82144758
	if (!ctx.cr6.eq) goto loc_82144758;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143cf8
	ctx.lr = 0x82144750;
	sub_82143CF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144758:
	// lwz r3,-1396(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1396);
	// bl 0x82143d08
	ctx.lr = 0x82144760;
	sub_82143D08(ctx, base);
loc_82144760:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82144768"))) PPC_WEAK_FUNC(sub_82144768);
PPC_FUNC_IMPL(__imp__sub_82144768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82144770;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// lwz r29,380(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82144a20
	if (ctx.cr6.eq) goto loc_82144A20;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821445e8
	ctx.lr = 0x8214479C;
	sub_821445E8(ctx, base);
	// cmpwi cr6,r29,2000
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2000, ctx.xer);
	// blt cr6,0x82144824
	if (ctx.cr6.lt) goto loc_82144824;
	// cmpwi cr6,r29,2135
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2135, ctx.xer);
	// bge cr6,0x82144824
	if (!ctx.cr6.lt) goto loc_82144824;
	// bl 0x8218ca20
	ctx.lr = 0x821447B0;
	sub_8218CA20(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// beq cr6,0x821447d4
	if (ctx.cr6.eq) goto loc_821447D4;
	// bl 0x82140700
	ctx.lr = 0x821447C0;
	sub_82140700(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140650
	ctx.lr = 0x821447CC;
	sub_82140650(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821447D4:
	// bl 0x82140598
	ctx.lr = 0x821447D8;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144800
	if (ctx.cr6.eq) goto loc_82144800;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82144800:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82144a20
	if (!ctx.cr6.eq) goto loc_82144A20;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82144824:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,1000
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1000, ctx.xer);
	// blt cr6,0x82144838
	if (ctx.cr6.lt) goto loc_82144838;
	// cmpwi cr6,r29,1322
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1322, ctx.xer);
	// blt cr6,0x82144848
	if (ctx.cr6.lt) goto loc_82144848;
loc_82144838:
	// cmpwi cr6,r29,1500
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1500, ctx.xer);
	// blt cr6,0x82144a0c
	if (ctx.cr6.lt) goto loc_82144A0C;
	// cmpwi cr6,r29,1502
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1502, ctx.xer);
	// bge cr6,0x82144a0c
	if (!ctx.cr6.lt) goto loc_82144A0C;
loc_82144848:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82144878
	if (!ctx.cr6.eq) goto loc_82144878;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140598
	ctx.lr = 0x8214485C;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82144878
	if (!ctx.cr6.eq) goto loc_82144878;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144878
	if (ctx.cr6.eq) goto loc_82144878;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213ea38
	ctx.lr = 0x82144878;
	sub_8213EA38(ctx, base);
loc_82144878:
	// cmpwi cr6,r29,1001
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1001, ctx.xer);
	// ble cr6,0x82144888
	if (!ctx.cr6.gt) goto loc_82144888;
	// cmpwi cr6,r29,1136
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1136, ctx.xer);
	// blt cr6,0x821448b4
	if (ctx.cr6.lt) goto loc_821448B4;
loc_82144888:
	// cmpwi cr6,r29,1319
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1319, ctx.xer);
	// bgt cr6,0x82144990
	if (ctx.cr6.gt) goto loc_82144990;
	// beq cr6,0x8214494c
	if (ctx.cr6.eq) goto loc_8214494C;
	// cmpwi cr6,r29,1312
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1312, ctx.xer);
	// bgt cr6,0x821448f8
	if (ctx.cr6.gt) goto loc_821448F8;
	// cmpwi cr6,r29,1300
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1300, ctx.xer);
	// bge cr6,0x821448b4
	if (!ctx.cr6.lt) goto loc_821448B4;
	// cmpwi cr6,r29,1000
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1000, ctx.xer);
	// blt cr6,0x82144a0c
	if (ctx.cr6.lt) goto loc_82144A0C;
	// cmpwi cr6,r29,1001
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1001, ctx.xer);
	// bgt cr6,0x82144a0c
	if (ctx.cr6.gt) goto loc_82144A0C;
loc_821448B4:
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140598
	ctx.lr = 0x821448BC;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821448e0
	if (ctx.cr6.eq) goto loc_821448E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x82144a0c
	goto loc_82144A0C;
loc_821448E0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82144a0c
	if (!ctx.cr6.eq) goto loc_82144A0C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// b 0x82144a08
	goto loc_82144A08;
loc_821448F8:
	// cmpwi cr6,r29,1314
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1314, ctx.xer);
	// blt cr6,0x82144a0c
	if (ctx.cr6.lt) goto loc_82144A0C;
	// cmpwi cr6,r29,1318
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1318, ctx.xer);
	// bgt cr6,0x82144a0c
	if (ctx.cr6.gt) goto loc_82144A0C;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140598
	ctx.lr = 0x82144910;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144934
	if (ctx.cr6.eq) goto loc_82144934;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x82144a0c
	goto loc_82144A0C;
loc_82144934:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82144a0c
	if (!ctx.cr6.eq) goto loc_82144A0C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// b 0x82144a08
	goto loc_82144A08;
loc_8214494C:
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140598
	ctx.lr = 0x82144954;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144978
	if (ctx.cr6.eq) goto loc_82144978;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x82144a0c
	goto loc_82144A0C;
loc_82144978:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82144a0c
	if (!ctx.cr6.eq) goto loc_82144A0C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// b 0x82144a08
	goto loc_82144A08;
loc_82144990:
	// cmpwi cr6,r29,1321
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1321, ctx.xer);
	// beq cr6,0x821449c8
	if (ctx.cr6.eq) goto loc_821449C8;
	// cmpwi cr6,r29,1500
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1500, ctx.xer);
	// beq cr6,0x821449b8
	if (ctx.cr6.eq) goto loc_821449B8;
	// cmpwi cr6,r29,1501
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1501, ctx.xer);
	// bne cr6,0x82144a0c
	if (!ctx.cr6.eq) goto loc_82144A0C;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140650
	ctx.lr = 0x821449B4;
	sub_82140650(ctx, base);
	// b 0x82144a0c
	goto loc_82144A0C;
loc_821449B8:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140650
	ctx.lr = 0x821449C4;
	sub_82140650(ctx, base);
	// b 0x82144a0c
	goto loc_82144A0C;
loc_821449C8:
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140598
	ctx.lr = 0x821449D0;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821449f4
	if (ctx.cr6.eq) goto loc_821449F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// b 0x82144a0c
	goto loc_82144A0C;
loc_821449F4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82144a0c
	if (!ctx.cr6.eq) goto loc_82144A0C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_82144A08:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82144A0C:
	// cmpwi cr6,r29,101
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 101, ctx.xer);
	// bne cr6,0x82144a20
	if (!ctx.cr6.eq) goto loc_82144A20;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82144A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82144A28"))) PPC_WEAK_FUNC(sub_82144A28);
PPC_FUNC_IMPL(__imp__sub_82144A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82144A44"))) PPC_WEAK_FUNC(sub_82144A44);
PPC_FUNC_IMPL(__imp__sub_82144A44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144A48"))) PPC_WEAK_FUNC(sub_82144A48);
PPC_FUNC_IMPL(__imp__sub_82144A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144a64
	if (ctx.cr6.eq) goto loc_82144A64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82144A64:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144A6C"))) PPC_WEAK_FUNC(sub_82144A6C);
PPC_FUNC_IMPL(__imp__sub_82144A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144A70"))) PPC_WEAK_FUNC(sub_82144A70);
PPC_FUNC_IMPL(__imp__sub_82144A70) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144ac0
	if (ctx.cr6.eq) goto loc_82144AC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
loc_82144AC0:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_82144ADC"))) PPC_WEAK_FUNC(sub_82144ADC);
PPC_FUNC_IMPL(__imp__sub_82144ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144AE0"))) PPC_WEAK_FUNC(sub_82144AE0);
PPC_FUNC_IMPL(__imp__sub_82144AE0) {
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
	ctx.lr = 0x82144AF0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82144b08
	if (ctx.cr6.eq) goto loc_82144B08;
	// li r3,22240
	ctx.r3.s64 = 22240;
	// bl 0x82183448
	ctx.lr = 0x82144B04;
	sub_82183448(ctx, base);
	// b 0x82144b10
	goto loc_82144B10;
loc_82144B08:
	// li r3,1390
	ctx.r3.s64 = 1390;
	// bl 0x821845a0
	ctx.lr = 0x82144B10;
	sub_821845A0(ctx, base);
loc_82144B10:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144b34
	if (ctx.cr6.eq) goto loc_82144B34;
	// bl 0x821f0228
	ctx.lr = 0x82144B1C;
	sub_821F0228(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82144B34:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144B50"))) PPC_WEAK_FUNC(sub_82144B50);
PPC_FUNC_IMPL(__imp__sub_82144B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82144B58;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82144cc8
	if (ctx.cr6.gt) goto loc_82144CC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82144b9c
	// bdzf 4*cr6+eq,0x82144bf8
	// bne cr6,0x82144c8c
	if (!ctx.cr6.eq) goto loc_82144C8C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x821411b0
	ctx.lr = 0x82144B8C;
	sub_821411B0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144B9C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x82140400
	ctx.lr = 0x82144BA8;
	sub_82140400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144cc8
	if (ctx.cr6.eq) goto loc_82144CC8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82144BB8;
	sub_821EBB58(ctx, base);
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82144BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144BF8:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-784(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144cc8
	if (ctx.cr6.eq) goto loc_82144CC8;
	// lwz r3,-784(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x82144C20;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82144c64
	if (!ctx.cr6.eq) goto loc_82144C64;
	// bl 0x82163ee8
	ctx.lr = 0x82144C2C;
	sub_82163EE8(ctx, base);
	// addi r30,r3,3348
	ctx.r30.s64 = ctx.r3.s64 + 3348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82233678
	ctx.lr = 0x82144C38;
	sub_82233678(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82233688
	ctx.lr = 0x82144C40;
	sub_82233688(ctx, base);
	// lwz r3,-784(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144c64
	if (ctx.cr6.eq) goto loc_82144C64;
	// bl 0x8213e990
	ctx.lr = 0x82144C64;
	sub_8213E990(ctx, base);
loc_82144C64:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144cc8
	if (ctx.cr6.eq) goto loc_82144CC8;
	// bl 0x8213f0a8
	ctx.lr = 0x82144C7C;
	sub_8213F0A8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8213e998
	ctx.lr = 0x82144C84;
	sub_8213E998(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144C8C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82144ca4
	if (ctx.cr6.eq) goto loc_82144CA4;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82144cc8
	if (!ctx.cr6.eq) goto loc_82144CC8;
loc_82144CA4:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821411d0
	ctx.lr = 0x82144CB0;
	sub_821411D0(ctx, base);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821421e0
	ctx.lr = 0x82144CB8;
	sub_821421E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
loc_82144CC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82144CD0"))) PPC_WEAK_FUNC(sub_82144CD0);
PPC_FUNC_IMPL(__imp__sub_82144CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82144CD8;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82144dc4
	if (ctx.cr6.lt) goto loc_82144DC4;
	// beq cr6,0x82144d64
	if (ctx.cr6.eq) goto loc_82144D64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82144de0
	if (!ctx.cr6.lt) goto loc_82144DE0;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144de0
	if (ctx.cr6.eq) goto loc_82144DE0;
	// lwz r3,-784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// bl 0x821ec830
	ctx.lr = 0x82144D20;
	sub_821EC830(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bne cr6,0x82144d48
	if (!ctx.cr6.eq) goto loc_82144D48;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82140650
	ctx.lr = 0x82144D38;
	sub_82140650(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144D48:
	// bl 0x82141b70
	ctx.lr = 0x82144D4C;
	sub_82141B70(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144D64:
	// bl 0x82182e90
	ctx.lr = 0x82144D68;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82144D70;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82144D7C;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82144D84;
	sub_821EBB58(ctx, base);
	// li r10,24999
	ctx.r10.s64 = 24999;
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82144DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82144DBC;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82144DC4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x82140400
	ctx.lr = 0x82144DD0;
	sub_82140400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82144de0
	if (ctx.cr6.eq) goto loc_82144DE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_82144DE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82144DE8"))) PPC_WEAK_FUNC(sub_82144DE8);
PPC_FUNC_IMPL(__imp__sub_82144DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82144e10
	if (ctx.cr6.eq) goto loc_82144E10;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82144e08
	if (ctx.cr6.eq) goto loc_82144E08;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82144e10
	if (!ctx.cr6.eq) goto loc_82144E10;
loc_82144E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82144E10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144E18"))) PPC_WEAK_FUNC(sub_82144E18);
PPC_FUNC_IMPL(__imp__sub_82144E18) {
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
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r31,-772(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82144e50
	if (ctx.cr6.eq) goto loc_82144E50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82144E44;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82144E50;
	sub_82183E40(ctx, base);
loc_82144E50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-772(r30)
	PPC_STORE_U32(ctx.r30.u32 + -772, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82144E70"))) PPC_WEAK_FUNC(sub_82144E70);
PPC_FUNC_IMPL(__imp__sub_82144E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82144E78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144ea0
	if (ctx.cr6.eq) goto loc_82144EA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82144EA0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144ec8
	if (ctx.cr6.eq) goto loc_82144EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82144EC8:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lwz r31,-772(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82144ef8
	if (ctx.cr6.eq) goto loc_82144EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82144EE4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82144EF0;
	sub_82183E40(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-772(r30)
	PPC_STORE_U32(ctx.r30.u32 + -772, ctx.r29.u32);
loc_82144EF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82144F00"))) PPC_WEAK_FUNC(sub_82144F00);
PPC_FUNC_IMPL(__imp__sub_82144F00) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82144f30
	if (!ctx.cr6.eq) goto loc_82144F30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82145024
	goto loc_82145024;
loc_82144F30:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82144fec
	if (ctx.cr6.lt) goto loc_82144FEC;
	// beq cr6,0x82144fa4
	if (ctx.cr6.eq) goto loc_82144FA4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82145024
	if (!ctx.cr6.lt) goto loc_82145024;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145024
	if (ctx.cr6.eq) goto loc_82145024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82144f80
	if (ctx.cr6.eq) goto loc_82144F80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82144F80:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,-772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82144f9c
	if (ctx.cr6.eq) goto loc_82144F9C;
	// bl 0x82144e18
	ctx.lr = 0x82144F9C;
	sub_82144E18(ctx, base);
loc_82144F9C:
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// b 0x82145024
	goto loc_82145024;
loc_82144FA4:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82145024
	if (ctx.cr6.eq) goto loc_82145024;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82145024
	if (ctx.cr6.eq) goto loc_82145024;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq cr6,0x82145024
	if (ctx.cr6.eq) goto loc_82145024;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82145024
	if (ctx.cr6.eq) goto loc_82145024;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82145024
	if (ctx.cr6.eq) goto loc_82145024;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82144FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82145024
	goto loc_82145024;
loc_82144FEC:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x82140598
	ctx.lr = 0x82144FF8;
	sub_82140598(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8214501c
	if (!ctx.cr6.eq) goto loc_8214501C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82145014
	if (ctx.cr6.eq) goto loc_82145014;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213ea38
	ctx.lr = 0x82145014;
	sub_8213EA38(ctx, base);
loc_82145014:
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821405b0
	ctx.lr = 0x8214501C;
	sub_821405B0(ctx, base);
loc_8214501C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82145024:
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

__attribute__((alias("__imp__sub_8214503C"))) PPC_WEAK_FUNC(sub_8214503C);
PPC_FUNC_IMPL(__imp__sub_8214503C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145040"))) PPC_WEAK_FUNC(sub_82145040);
PPC_FUNC_IMPL(__imp__sub_82145040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82145048;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821453a0
	if (ctx.cr6.gt) goto loc_821453A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821450d0
	// bdzf 4*cr6+eq,0x821450e0
	// bdzf 4*cr6+eq,0x821450f0
	// bdzf 4*cr6+eq,0x821451d4
	// bdzf 4*cr6+eq,0x82145210
	// bdzf 4*cr6+eq,0x82145344
	// bne cr6,0x82145364
	if (!ctx.cr6.eq) goto loc_82145364;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x822e6048
	ctx.lr = 0x8214508C;
	sub_822E6048(ctx, base);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821411b0
	ctx.lr = 0x82145094;
	sub_821411B0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821450a4
	if (ctx.cr6.eq) goto loc_821450A4;
	// bl 0x8213f0a8
	ctx.lr = 0x821450A4;
	sub_8213F0A8(ctx, base);
loc_821450A4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821450b8
	if (ctx.cr6.eq) goto loc_821450B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8213ea38
	ctx.lr = 0x821450B8;
	sub_8213EA38(ctx, base);
loc_821450B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821450D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge 0x821453a0
	if (!ctx.cr0.lt) goto loc_821453A0;
loc_821450E0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821450F0:
	// bl 0x82182e90
	ctx.lr = 0x821450F4;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x821450FC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82145108;
	sub_821837D0(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214515c
	if (!ctx.cr6.eq) goto loc_8214515C;
	// lwz r3,-1428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1428);
	// bl 0x822e6048
	ctx.lr = 0x82145128;
	sub_822E6048(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82144ae0
	ctx.lr = 0x82145130;
	sub_82144AE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821f17d0
	ctx.lr = 0x82145144;
	sub_821F17D0(ctx, base);
	// lwz r11,-772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,22188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22188, ctx.r28.u32);
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0b60
	ctx.lr = 0x82145158;
	sub_821F0B60(ctx, base);
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
loc_8214515C:
	// lwz r11,-1428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1428);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x821f07a8
	ctx.lr = 0x82145174;
	sub_821F07A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82145194
	if (ctx.cr6.eq) goto loc_82145194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82145194:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e8f10
	ctx.lr = 0x821451AC;
	sub_821E8F10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821451bc
	if (!ctx.cr6.eq) goto loc_821451BC;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e9500
	ctx.lr = 0x821451BC;
	sub_821E9500(ctx, base);
loc_821451BC:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821451CC;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821451D4:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x821451E4;
	sub_821E90A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821453a0
	if (ctx.cr6.eq) goto loc_821453A0;
	// lwz r11,-792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82109e00
	ctx.lr = 0x82145200;
	sub_82109E00(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82145210:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821453a0
	if (ctx.cr6.eq) goto loc_821453A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214522C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821453a0
	if (ctx.cr6.eq) goto loc_821453A0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82145288
	if (ctx.cr6.eq) goto loc_82145288;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82145270
	if (ctx.cr6.eq) goto loc_82145270;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82145270:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82145288:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x82145310
	if (ctx.cr6.eq) goto loc_82145310;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821452c0
	if (ctx.cr6.eq) goto loc_821452C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821452C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821452C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x82144e18
	ctx.lr = 0x821452D4;
	sub_82144E18(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-792(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -792);
	// bl 0x821e8f58
	ctx.lr = 0x821452E4;
	sub_821E8F58(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821452f4
	if (ctx.cr6.eq) goto loc_821452F4;
	// bl 0x8213e998
	ctx.lr = 0x821452F4;
	sub_8213E998(ctx, base);
loc_821452F4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821453a0
	if (ctx.cr6.eq) goto loc_821453A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213ea38
	ctx.lr = 0x82145308;
	sub_8213EA38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82145310:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x82145334
	if (ctx.cr6.eq) goto loc_82145334;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82145334:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82145344:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82145364:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214537c
	if (ctx.cr6.eq) goto loc_8214537C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821453a0
	if (!ctx.cr6.eq) goto loc_821453A0;
loc_8214537C:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821411d0
	ctx.lr = 0x82145388;
	sub_821411D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821421e0
	ctx.lr = 0x82145398;
	sub_821421E0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_821453A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821453A8"))) PPC_WEAK_FUNC(sub_821453A8);
PPC_FUNC_IMPL(__imp__sub_821453A8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82145624
	if (ctx.cr6.gt) goto loc_82145624;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82145624
	// bdzf 4*cr6+eq,0x82145420
	// bdzf 4*cr6+eq,0x82145624
	// bdzf 4*cr6+eq,0x821454d4
	// bdzf 4*cr6+eq,0x821455c0
	// bdzf 4*cr6+eq,0x821455dc
	// bne cr6,0x82145600
	if (!ctx.cr6.eq) goto loc_82145600;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// bl 0x821411b0
	ctx.lr = 0x821453FC;
	sub_821411B0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x82145624
	if (ctx.cr6.eq) goto loc_82145624;
	// bl 0x8213f0a8
	ctx.lr = 0x8214541C;
	sub_8213F0A8(ctx, base);
	// b 0x82145624
	goto loc_82145624;
loc_82145420:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145624
	if (ctx.cr6.eq) goto loc_82145624;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214548c
	if (ctx.cr6.eq) goto loc_8214548C;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0f78
	ctx.lr = 0x82145468;
	sub_821F0F78(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0f88
	ctx.lr = 0x82145474;
	sub_821F0F88(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0fa0
	ctx.lr = 0x82145480;
	sub_821F0FA0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x82145490
	goto loc_82145490;
loc_8214548C:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82145490:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821454b4
	if (ctx.cr6.eq) goto loc_821454B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821454B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821454B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82145624
	if (!ctx.cr6.eq) goto loc_82145624;
	// bl 0x82144e18
	ctx.lr = 0x821454CC;
	sub_82144E18(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x82145624
	goto loc_82145624;
loc_821454D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821454E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145624
	if (ctx.cr6.eq) goto loc_82145624;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82145504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145578
	if (ctx.cr6.eq) goto loc_82145578;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0f78
	ctx.lr = 0x8214551C;
	sub_821F0F78(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0f88
	ctx.lr = 0x82145528;
	sub_821F0F88(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r3,-772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -772);
	// bl 0x821f0fa0
	ctx.lr = 0x82145534;
	sub_821F0FA0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82163ee8
	ctx.lr = 0x82145544;
	sub_82163EE8(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// sth r10,3348(r3)
	PPC_STORE_U16(ctx.r3.u32 + 3348, ctx.r10.u16);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r8,3352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3352, ctx.r8.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,3356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3356, ctx.r7.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// sth r6,3360(r3)
	PPC_STORE_U16(ctx.r3.u32 + 3360, ctx.r6.u16);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r4,3364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3364, ctx.r4.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,3368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3368, ctx.r11.u32);
	// b 0x82145580
	goto loc_82145580;
loc_82145578:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82145580:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821455a0
	if (ctx.cr6.eq) goto loc_821455A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821455A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821455A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82145624
	if (!ctx.cr6.eq) goto loc_82145624;
	// bl 0x82144e18
	ctx.lr = 0x821455B8;
	sub_82144E18(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x82145624
	goto loc_82145624;
loc_821455C0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821455f4
	if (ctx.cr6.eq) goto loc_821455F4;
	// bl 0x8213e998
	ctx.lr = 0x821455D0;
	sub_8213E998(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82145624
	goto loc_82145624;
loc_821455DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821455f4
	if (ctx.cr6.eq) goto loc_821455F4;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82145624
	if (!ctx.cr6.eq) goto loc_82145624;
loc_821455F4:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x82145624
	goto loc_82145624;
loc_82145600:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821411d0
	ctx.lr = 0x8214560C;
	sub_821411D0(ctx, base);
	// lwz r3,-1428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1428);
	// bl 0x821421e0
	ctx.lr = 0x82145614;
	sub_821421E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82145624:
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

__attribute__((alias("__imp__sub_8214563C"))) PPC_WEAK_FUNC(sub_8214563C);
PPC_FUNC_IMPL(__imp__sub_8214563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145640"))) PPC_WEAK_FUNC(sub_82145640);
PPC_FUNC_IMPL(__imp__sub_82145640) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x821456d4
	if (ctx.cr6.gt) goto loc_821456D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82145690
	// bdzf 4*cr6+eq,0x8214569c
	// bdzf 4*cr6+eq,0x821456a8
	// bdzf 4*cr6+eq,0x821456b4
	// bdzf 4*cr6+eq,0x821456c0
	// bne cr6,0x821456cc
	if (!ctx.cr6.eq) goto loc_821456CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145040
	ctx.lr = 0x8214568C;
	sub_82145040(ctx, base);
	// b 0x821456d4
	goto loc_821456D4;
loc_82145690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144240
	ctx.lr = 0x82145698;
	sub_82144240(ctx, base);
	// b 0x821456d4
	goto loc_821456D4;
loc_8214569C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144358
	ctx.lr = 0x821456A4;
	sub_82144358(ctx, base);
	// b 0x821456d4
	goto loc_821456D4;
loc_821456A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821444b8
	ctx.lr = 0x821456B0;
	sub_821444B8(ctx, base);
	// b 0x821456d4
	goto loc_821456D4;
loc_821456B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821453a8
	ctx.lr = 0x821456BC;
	sub_821453A8(ctx, base);
	// b 0x821456d4
	goto loc_821456D4;
loc_821456C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144b50
	ctx.lr = 0x821456C8;
	sub_82144B50(ctx, base);
	// b 0x821456d4
	goto loc_821456D4;
loc_821456CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144cd0
	ctx.lr = 0x821456D4;
	sub_82144CD0(ctx, base);
loc_821456D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144768
	ctx.lr = 0x821456DC;
	sub_82144768(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821456F0"))) PPC_WEAK_FUNC(sub_821456F0);
PPC_FUNC_IMPL(__imp__sub_821456F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82145704
	if (ctx.cr6.lt) goto loc_82145704;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82144f00
	sub_82144F00(ctx, base);
	return;
loc_82145704:
	// b 0x82145640
	sub_82145640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82145708"))) PPC_WEAK_FUNC(sub_82145708);
PPC_FUNC_IMPL(__imp__sub_82145708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214570C"))) PPC_WEAK_FUNC(sub_8214570C);
PPC_FUNC_IMPL(__imp__sub_8214570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145710"))) PPC_WEAK_FUNC(sub_82145710);
PPC_FUNC_IMPL(__imp__sub_82145710) {
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
	// lwz r3,-1392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82145744
	if (ctx.cr6.eq) goto loc_82145744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82145744:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1392, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82145760"))) PPC_WEAK_FUNC(sub_82145760);
PPC_FUNC_IMPL(__imp__sub_82145760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82098470
	sub_82098470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82145774"))) PPC_WEAK_FUNC(sub_82145774);
PPC_FUNC_IMPL(__imp__sub_82145774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82145778"))) PPC_WEAK_FUNC(sub_82145778);
PPC_FUNC_IMPL(__imp__sub_82145778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82098498
	sub_82098498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214578C"))) PPC_WEAK_FUNC(sub_8214578C);
PPC_FUNC_IMPL(__imp__sub_8214578C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82145790"))) PPC_WEAK_FUNC(sub_82145790);
PPC_FUNC_IMPL(__imp__sub_82145790) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821457d0
	if (ctx.cr6.eq) goto loc_821457D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821457D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821457D0:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821457F8"))) PPC_WEAK_FUNC(sub_821457F8);
PPC_FUNC_IMPL(__imp__sub_821457F8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82145838
	if (ctx.cr0.eq) goto loc_82145838;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,12
	ctx.r8.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r8.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x82145834;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x82145838;
	sub_821EB3E8(ctx, base);
loc_82145838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82145848"))) PPC_WEAK_FUNC(sub_82145848);
PPC_FUNC_IMPL(__imp__sub_82145848) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82080000
	ctx.lr = 0x8214585C;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82145874
	if (ctx.cr0.eq) goto loc_82145874;
	// bl 0x8214a820
	ctx.lr = 0x82145868;
	sub_8214A820(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-1388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1388, ctx.r3.u32);
	// b 0x82145880
	goto loc_82145880;
loc_82145874:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1388, ctx.r11.u32);
loc_82145880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82145890"))) PPC_WEAK_FUNC(sub_82145890);
PPC_FUNC_IMPL(__imp__sub_82145890) {
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
	// lwz r3,-1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821458c4
	if (ctx.cr6.eq) goto loc_821458C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821458C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821458C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1388, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821458E0"))) PPC_WEAK_FUNC(sub_821458E0);
PPC_FUNC_IMPL(__imp__sub_821458E0) {
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
	// bl 0x8214b338
	ctx.lr = 0x821458F8;
	sub_8214B338(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bge cr6,0x82145914
	if (!ctx.cr6.lt) goto loc_82145914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b338
	ctx.lr = 0x82145908;
	sub_8214B338(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82145918
	if (!ctx.cr6.eq) goto loc_82145918;
loc_82145914:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82145918:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214592C"))) PPC_WEAK_FUNC(sub_8214592C);
PPC_FUNC_IMPL(__imp__sub_8214592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145930"))) PPC_WEAK_FUNC(sub_82145930);
PPC_FUNC_IMPL(__imp__sub_82145930) {
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
	// bl 0x823c3d18
	ctx.lr = 0x82145948;
	sub_823C3D18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214597c
	if (ctx.cr0.eq) goto loc_8214597C;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214597c
	if (ctx.cr6.eq) goto loc_8214597C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821458e0
	ctx.lr = 0x82145964;
	sub_821458E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214597c
	if (ctx.cr0.eq) goto loc_8214597C;
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82145980
	if (ctx.cr6.gt) goto loc_82145980;
loc_8214597C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82145980:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82145994"))) PPC_WEAK_FUNC(sub_82145994);
PPC_FUNC_IMPL(__imp__sub_82145994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145998"))) PPC_WEAK_FUNC(sub_82145998);
PPC_FUNC_IMPL(__imp__sub_82145998) {
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
	// li r3,788
	ctx.r3.s64 = 788;
	// bl 0x82080000
	ctx.lr = 0x821459AC;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821459c4
	if (ctx.cr0.eq) goto loc_821459C4;
	// bl 0x8214a4c0
	ctx.lr = 0x821459B8;
	sub_8214A4C0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-1392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1392, ctx.r3.u32);
	// b 0x821459d0
	goto loc_821459D0;
loc_821459C4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1392, ctx.r11.u32);
loc_821459D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821459E0"))) PPC_WEAK_FUNC(sub_821459E0);
PPC_FUNC_IMPL(__imp__sub_821459E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821459E8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82145a10
	if (ctx.cr6.eq) goto loc_82145A10;
	// lwz r27,64(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82145a18
	goto loc_82145A18;
loc_82145A10:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_82145A18:
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82145A20;
	sub_8215BD60(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r28,100(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82182e90
	ctx.lr = 0x82145A34;
	sub_82182E90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82145A3C;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82145A48;
	sub_821837D0(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82145b18
	if (ctx.cr6.eq) goto loc_82145B18;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82145ad8
	if (ctx.cr6.eq) goto loc_82145AD8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82145ab4
	if (ctx.cr6.eq) goto loc_82145AB4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82145a90
	if (ctx.cr6.eq) goto loc_82145A90;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82145b4c
	if (!ctx.cr6.eq) goto loc_82145B4C;
	// li r3,1328
	ctx.r3.s64 = 1328;
	// bl 0x82080000
	ctx.lr = 0x82145A78;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82145b38
	if (ctx.cr0.eq) goto loc_82145B38;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x821537b0
	ctx.lr = 0x82145A8C;
	sub_821537B0(ctx, base);
	// b 0x82145b3c
	goto loc_82145B3C;
loc_82145A90:
	// li r3,1200
	ctx.r3.s64 = 1200;
	// bl 0x82080000
	ctx.lr = 0x82145A98;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82145b38
	if (ctx.cr0.eq) goto loc_82145B38;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x821513a8
	ctx.lr = 0x82145AB0;
	sub_821513A8(ctx, base);
	// b 0x82145b3c
	goto loc_82145B3C;
loc_82145AB4:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// bl 0x82080000
	ctx.lr = 0x82145ABC;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82145b38
	if (ctx.cr0.eq) goto loc_82145B38;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x82150870
	ctx.lr = 0x82145AD4;
	sub_82150870(ctx, base);
	// b 0x82145b3c
	goto loc_82145B3C;
loc_82145AD8:
	// bl 0x8215bd60
	ctx.lr = 0x82145ADC;
	sub_8215BD60(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82145aec
	if (!ctx.cr6.eq) goto loc_82145AEC;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82145AEC:
	// li r3,7520
	ctx.r3.s64 = 7520;
	// bl 0x82080000
	ctx.lr = 0x82145AF4;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82145b38
	if (ctx.cr0.eq) goto loc_82145B38;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8214edb0
	ctx.lr = 0x82145B14;
	sub_8214EDB0(ctx, base);
	// b 0x82145b3c
	goto loc_82145B3C;
loc_82145B18:
	// li r3,1168
	ctx.r3.s64 = 1168;
	// bl 0x82080000
	ctx.lr = 0x82145B20;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82145b38
	if (ctx.cr0.eq) goto loc_82145B38;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// bl 0x8214e190
	ctx.lr = 0x82145B34;
	sub_8214E190(ctx, base);
	// b 0x82145b3c
	goto loc_82145B3C;
loc_82145B38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82145B3C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
loc_82145B4C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82145B54;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82145B5C"))) PPC_WEAK_FUNC(sub_82145B5C);
PPC_FUNC_IMPL(__imp__sub_82145B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145B60"))) PPC_WEAK_FUNC(sub_82145B60);
PPC_FUNC_IMPL(__imp__sub_82145B60) {
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
	// bl 0x82145790
	ctx.lr = 0x82145B78;
	sub_82145790(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x821459e0
	ctx.lr = 0x82145B94;
	sub_821459E0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82145BA8"))) PPC_WEAK_FUNC(sub_82145BA8);
PPC_FUNC_IMPL(__imp__sub_82145BA8) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145c28
	if (ctx.cr6.eq) goto loc_82145C28;
	// bl 0x82145930
	ctx.lr = 0x82145BDC;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82145c28
	if (ctx.cr0.eq) goto loc_82145C28;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82145c10
	if (ctx.cr6.eq) goto loc_82145C10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82145c40
	if (ctx.cr6.eq) goto loc_82145C40;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82145c28
	if (!ctx.cr6.eq) goto loc_82145C28;
loc_82145C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x82145C18;
	sub_82145790(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
loc_82145C28:
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
loc_82145C40:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x82145C5C;
	sub_82145790(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// blt cr6,0x82145c84
	if (ctx.cr6.lt) goto loc_82145C84;
	// bne cr6,0x82145c28
	if (!ctx.cr6.eq) goto loc_82145C28;
	// bl 0x8215bd60
	ctx.lr = 0x82145C7C;
	sub_8215BD60(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82145c8c
	goto loc_82145C8C;
loc_82145C84:
	// bl 0x8215bd60
	ctx.lr = 0x82145C88;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82145C8C:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82145C94;
	sub_8215BD60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x82145C9C;
	sub_82156F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82145CAC;
	sub_821459E0(ctx, base);
	// b 0x82145c28
	goto loc_82145C28;
}

__attribute__((alias("__imp__sub_82145CB0"))) PPC_WEAK_FUNC(sub_82145CB0);
PPC_FUNC_IMPL(__imp__sub_82145CB0) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145d20
	if (ctx.cr6.eq) goto loc_82145D20;
	// bl 0x82145930
	ctx.lr = 0x82145CE4;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82145d20
	if (ctx.cr0.eq) goto loc_82145D20;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82145d18
	if (ctx.cr6.eq) goto loc_82145D18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82145d38
	if (ctx.cr6.eq) goto loc_82145D38;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82145d20
	if (!ctx.cr6.eq) goto loc_82145D20;
loc_82145D18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145b60
	ctx.lr = 0x82145D20;
	sub_82145B60(ctx, base);
loc_82145D20:
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
loc_82145D38:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x82145D54;
	sub_82145790(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
	// beq cr6,0x82145d78
	if (ctx.cr6.eq) goto loc_82145D78;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// li r4,5
	ctx.r4.s64 = 5;
	// bne cr6,0x82145d7c
	if (!ctx.cr6.eq) goto loc_82145D7C;
loc_82145D78:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82145D7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82145D88;
	sub_821459E0(ctx, base);
	// b 0x82145d20
	goto loc_82145D20;
}

__attribute__((alias("__imp__sub_82145D8C"))) PPC_WEAK_FUNC(sub_82145D8C);
PPC_FUNC_IMPL(__imp__sub_82145D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145D90"))) PPC_WEAK_FUNC(sub_82145D90);
PPC_FUNC_IMPL(__imp__sub_82145D90) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145e60
	if (ctx.cr6.eq) goto loc_82145E60;
	// bl 0x82145930
	ctx.lr = 0x82145DC0;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82145e60
	if (ctx.cr0.eq) goto loc_82145E60;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82145e2c
	if (ctx.cr6.eq) goto loc_82145E2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82145e60
	if (!ctx.cr6.eq) goto loc_82145E60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// bl 0x82145790
	ctx.lr = 0x82145E18;
	sub_82145790(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82145E28;
	sub_821459E0(ctx, base);
	// b 0x82145e60
	goto loc_82145E60;
loc_82145E2C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145e40
	if (ctx.cr6.eq) goto loc_82145E40;
	// bl 0x82145710
	ctx.lr = 0x82145E40;
	sub_82145710(ctx, base);
loc_82145E40:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82145e58
	if (ctx.cr0.eq) goto loc_82145E58;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820da248
	ctx.lr = 0x82145E58;
	sub_820DA248(ctx, base);
loc_82145E58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145b60
	ctx.lr = 0x82145E60;
	sub_82145B60(ctx, base);
loc_82145E60:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82145E74"))) PPC_WEAK_FUNC(sub_82145E74);
PPC_FUNC_IMPL(__imp__sub_82145E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82145E78"))) PPC_WEAK_FUNC(sub_82145E78);
PPC_FUNC_IMPL(__imp__sub_82145E78) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145fa4
	if (ctx.cr6.eq) goto loc_82145FA4;
	// bl 0x82145930
	ctx.lr = 0x82145EA8;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82145fa4
	if (ctx.cr0.eq) goto loc_82145FA4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145ec4
	if (ctx.cr6.eq) goto loc_82145EC4;
	// bl 0x82145710
	ctx.lr = 0x82145EC4;
	sub_82145710(ctx, base);
loc_82145EC4:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82145f54
	if (ctx.cr6.eq) goto loc_82145F54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82145f14
	if (ctx.cr6.eq) goto loc_82145F14;
	// ble cr6,0x82145fa4
	if (!ctx.cr6.gt) goto loc_82145FA4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82145fa4
	if (ctx.cr6.gt) goto loc_82145FA4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82145f0c
	if (ctx.cr0.eq) goto loc_82145F0C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820da248
	ctx.lr = 0x82145F0C;
	sub_820DA248(ctx, base);
loc_82145F0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82145f88
	goto loc_82145F88;
loc_82145F14:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// bl 0x82145790
	ctx.lr = 0x82145F40;
	sub_82145790(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// b 0x82145fa4
	goto loc_82145FA4;
loc_82145F54:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82145f6c
	if (ctx.cr0.eq) goto loc_82145F6C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820da248
	ctx.lr = 0x82145F6C;
	sub_820DA248(ctx, base);
loc_82145F6C:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82145fa0
	if (ctx.cr6.eq) goto loc_82145FA0;
loc_82145F88:
	// bl 0x82145790
	ctx.lr = 0x82145F8C;
	sub_82145790(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82145F9C;
	sub_821459E0(ctx, base);
	// b 0x82145fa4
	goto loc_82145FA4;
loc_82145FA0:
	// bl 0x82145b60
	ctx.lr = 0x82145FA4;
	sub_82145B60(ctx, base);
loc_82145FA4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82145FB8"))) PPC_WEAK_FUNC(sub_82145FB8);
PPC_FUNC_IMPL(__imp__sub_82145FB8) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214606c
	if (ctx.cr6.eq) goto loc_8214606C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214604c
	if (ctx.cr6.eq) goto loc_8214604C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82146044
	if (ctx.cr6.eq) goto loc_82146044;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82146090
	if (!ctx.cr6.eq) goto loc_82146090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8208ed40
	ctx.lr = 0x82146008;
	sub_8208ED40(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8214600C;
	sub_8215BD08(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5238
	ctx.lr = 0x82146024;
	sub_820E5238(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146034;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c638
	ctx.lr = 0x82146040;
	sub_8215C638(ctx, base);
	// b 0x82146090
	goto loc_82146090;
loc_82146044:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82146064
	goto loc_82146064;
loc_8214604C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// bl 0x82098510
	ctx.lr = 0x82146058;
	sub_82098510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146090
	if (ctx.cr0.eq) goto loc_82146090;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82146064:
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// b 0x82146090
	goto loc_82146090;
loc_8214606C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82146090
	if (ctx.cr0.eq) goto loc_82146090;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
loc_82146090:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821460A4"))) PPC_WEAK_FUNC(sub_821460A4);
PPC_FUNC_IMPL(__imp__sub_821460A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821460A8"))) PPC_WEAK_FUNC(sub_821460A8);
PPC_FUNC_IMPL(__imp__sub_821460A8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821460E0;
	sub_8215BD60(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821460f4
	if (ctx.cr6.eq) goto loc_821460F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82146104
	if (!ctx.cr6.eq) goto loc_82146104;
loc_821460F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82146104;
	sub_821459E0(ctx, base);
loc_82146104:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82146118"))) PPC_WEAK_FUNC(sub_82146118);
PPC_FUNC_IMPL(__imp__sub_82146118) {
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
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// bl 0x82098510
	ctx.lr = 0x82146138;
	sub_82098510(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146180
	if (ctx.cr0.eq) goto loc_82146180;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82146160
	if (ctx.cr6.eq) goto loc_82146160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82146160:
	// bl 0x8208ed40
	ctx.lr = 0x82146164;
	sub_8208ED40(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82146168;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82146174;
	sub_821837D0(ctx, base);
	// bl 0x82085690
	ctx.lr = 0x82146178;
	sub_82085690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146180;
	sub_821837D0(ctx, base);
loc_82146180:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82146194"))) PPC_WEAK_FUNC(sub_82146194);
PPC_FUNC_IMPL(__imp__sub_82146194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82146198"))) PPC_WEAK_FUNC(sub_82146198);
PPC_FUNC_IMPL(__imp__sub_82146198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821461A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218ca50
	ctx.lr = 0x821461B4;
	sub_8218CA50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28968
	ctx.r11.s64 = ctx.r11.s64 + -28968;
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// lwz r29,-792(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e8f10
	ctx.lr = 0x821461F0;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82146218
	if (!ctx.cr0.eq) goto loc_82146218;
	// bl 0x82183078
	ctx.lr = 0x821461FC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x82146208;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e9d80
	ctx.lr = 0x82146210;
	sub_821E9D80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146218;
	sub_821837D0(ctx, base);
loc_82146218:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x82146228;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82146230;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214623C;
	sub_821837D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82146250
	if (!ctx.cr6.eq) goto loc_82146250;
	// bl 0x82144ae0
	ctx.lr = 0x82146250;
	sub_82144AE0(ctx, base);
loc_82146250:
	// bl 0x82155128
	ctx.lr = 0x82146254;
	sub_82155128(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82146260:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stwu r30,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82146260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82146260;
	// bl 0x82145998
	ctx.lr = 0x82146274;
	sub_82145998(ctx, base);
	// bl 0x82145848
	ctx.lr = 0x82146278;
	sub_82145848(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82080000
	ctx.lr = 0x82146280;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82146294
	if (ctx.cr0.eq) goto loc_82146294;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82154a08
	ctx.lr = 0x82146290;
	sub_82154A08(ctx, base);
	// b 0x82146298
	goto loc_82146298;
loc_82146294:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82146298:
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// li r3,1216
	ctx.r3.s64 = 1216;
	// bl 0x82080000
	ctx.lr = 0x821462A4;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821462b4
	if (ctx.cr0.eq) goto loc_821462B4;
	// bl 0x82154370
	ctx.lr = 0x821462B0;
	sub_82154370(ctx, base);
	// b 0x821462b8
	goto loc_821462B8;
loc_821462B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821462B8:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// lwz r11,-744(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821462e0
	if (ctx.cr6.eq) goto loc_821462E0;
	// bl 0x8215bd08
	ctx.lr = 0x821462D0;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82221060
	ctx.lr = 0x821462E0;
	sub_82221060(ctx, base);
loc_821462E0:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8208f758
	ctx.lr = 0x821462F4;
	sub_8208F758(ctx, base);
	// bl 0x822d6420
	ctx.lr = 0x821462F8;
	sub_822D6420(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8214636c
	if (!ctx.cr0.eq) goto loc_8214636C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82146328
	if (ctx.cr6.eq) goto loc_82146328;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -480, ctx.r29.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146324;
	sub_8215BD60(ctx, base);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
loc_82146328:
	// bl 0x8215bd60
	ctx.lr = 0x8214632C;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82146350
	if (!ctx.cr6.eq) goto loc_82146350;
	// bl 0x8215bd60
	ctx.lr = 0x8214633C;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd20
	ctx.lr = 0x82146340;
	sub_8215CD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146350
	if (ctx.cr0.eq) goto loc_82146350;
	// bl 0x8215bd60
	ctx.lr = 0x8214634C;
	sub_8215BD60(ctx, base);
	// bl 0x8215cd28
	ctx.lr = 0x82146350;
	sub_8215CD28(ctx, base);
loc_82146350:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146360;
	sub_8215BD60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x82146444
	goto loc_82146444;
loc_8214636C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82146408
	if (ctx.cr6.lt) goto loc_82146408;
	// beq cr6,0x821463b8
	if (ctx.cr6.eq) goto loc_821463B8;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x82146444
	if (!ctx.cr6.lt) goto loc_82146444;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x8214638C;
	sub_82221280(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82146390;
	sub_8215BD60(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// bl 0x8215bd60
	ctx.lr = 0x8214639C;
	sub_8215BD60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x821463A4;
	sub_82156F00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82146438
	goto loc_82146438;
loc_821463B8:
	// bl 0x8215bd60
	ctx.lr = 0x821463BC;
	sub_8215BD60(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821463ec
	if (ctx.cr6.eq) goto loc_821463EC;
	// ble cr6,0x821463fc
	if (!ctx.cr6.gt) goto loc_821463FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821463fc
	if (ctx.cr6.gt) goto loc_821463FC;
	// bl 0x8215bd60
	ctx.lr = 0x821463DC;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x821463fc
	goto loc_821463FC;
loc_821463EC:
	// bl 0x8215bd60
	ctx.lr = 0x821463F0;
	sub_8215BD60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_821463FC:
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82146438
	goto loc_82146438;
loc_82146408:
	// bl 0x8215bd60
	ctx.lr = 0x8214640C;
	sub_8215BD60(ctx, base);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146414;
	sub_8215BD60(ctx, base);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// bl 0x82220c70
	ctx.lr = 0x8214641C;
	sub_82220C70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82146428;
	sub_82221280(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8214642C;
	sub_8215BD60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x82146434;
	sub_82156F00(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_82146438:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82146444;
	sub_821459E0(ctx, base);
loc_82146444:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214644C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82146458"))) PPC_WEAK_FUNC(sub_82146458);
PPC_FUNC_IMPL(__imp__sub_82146458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82146460;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-28968
	ctx.r11.s64 = ctx.r11.s64 + -28968;
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// li r29,13
	ctx.r29.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82146480:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821464a0
	if (ctx.cr6.eq) goto loc_821464A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821464A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821464A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r28,12(r30)
	ea = 12 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// bne 0x82146480
	if (!ctx.cr0.eq) goto loc_82146480;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821464cc
	if (ctx.cr6.eq) goto loc_821464CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821464CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821464CC:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821464f0
	if (ctx.cr6.eq) goto loc_821464F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821464F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821464F0:
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// bl 0x82145890
	ctx.lr = 0x821464F8;
	sub_82145890(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214650c
	if (ctx.cr6.eq) goto loc_8214650C;
	// bl 0x82145710
	ctx.lr = 0x8214650C;
	sub_82145710(ctx, base);
loc_8214650C:
	// bl 0x82144e18
	ctx.lr = 0x82146510;
	sub_82144E18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821ebaa8
	ctx.lr = 0x82146518;
	sub_821EBAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218cc18
	ctx.lr = 0x82146520;
	sub_8218CC18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82146528"))) PPC_WEAK_FUNC(sub_82146528);
PPC_FUNC_IMPL(__imp__sub_82146528) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821465dc
	if (ctx.cr6.eq) goto loc_821465DC;
	// bl 0x82145930
	ctx.lr = 0x82146558;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821465dc
	if (ctx.cr0.eq) goto loc_821465DC;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214658c
	if (ctx.cr6.eq) goto loc_8214658C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821465b4
	if (ctx.cr6.eq) goto loc_821465B4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821465dc
	if (!ctx.cr6.eq) goto loc_821465DC;
loc_8214658C:
	// lwz r11,1320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821465c8
	if (ctx.cr6.eq) goto loc_821465C8;
	// bl 0x82145790
	ctx.lr = 0x821465A0;
	sub_82145790(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// b 0x821465dc
	goto loc_821465DC;
loc_821465B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x821465BC;
	sub_82145790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821460a8
	ctx.lr = 0x821465C4;
	sub_821460A8(ctx, base);
	// b 0x821465dc
	goto loc_821465DC;
loc_821465C8:
	// bl 0x82145790
	ctx.lr = 0x821465CC;
	sub_82145790(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x821465DC;
	sub_821459E0(ctx, base);
loc_821465DC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821465F0"))) PPC_WEAK_FUNC(sub_821465F0);
PPC_FUNC_IMPL(__imp__sub_821465F0) {
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
	// bl 0x82146458
	ctx.lr = 0x82146610;
	sub_82146458(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82146624
	if (ctx.cr0.eq) goto loc_82146624;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82146624;
	sub_82183E40(ctx, base);
loc_82146624:
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

__attribute__((alias("__imp__sub_82146640"))) PPC_WEAK_FUNC(sub_82146640);
PPC_FUNC_IMPL(__imp__sub_82146640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82146648;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82146660;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146a88
	if (ctx.cr0.eq) goto loc_82146A88;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214669c
	if (ctx.cr6.eq) goto loc_8214669C;
	// bl 0x820984c0
	ctx.lr = 0x8214667C;
	sub_820984C0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82146680;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8214668C;
	sub_821837D0(ctx, base);
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x820983d8
	ctx.lr = 0x82146694;
	sub_820983D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8214669C;
	sub_821837D0(ctx, base);
loc_8214669C:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// beq cr6,0x821466d4
	if (ctx.cr6.eq) goto loc_821466D4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821466c8
	if (ctx.cr6.eq) goto loc_821466C8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82146a88
	if (!ctx.cr6.eq) goto loc_82146A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146118
	ctx.lr = 0x821466C4;
	sub_82146118(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
loc_821466C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821457f8
	ctx.lr = 0x821466D0;
	sub_821457F8(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
loc_821466D4:
	// li r26,5
	ctx.r26.s64 = 5;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821468fc
	if (!ctx.cr6.gt) goto loc_821468FC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x821468fc
	if (ctx.cr6.gt) goto loc_821468FC;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821468fc
	if (ctx.cr6.eq) goto loc_821468FC;
	// bl 0x82145930
	ctx.lr = 0x82146708;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821468fc
	if (ctx.cr0.eq) goto loc_821468FC;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82146744
	if (ctx.cr6.eq) goto loc_82146744;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214680c
	if (ctx.cr6.eq) goto loc_8214680C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82146798
	if (ctx.cr6.eq) goto loc_82146798;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821468fc
	if (!ctx.cr6.eq) goto loc_821468FC;
loc_82146744:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea3e0
	ctx.lr = 0x82146750;
	sub_821EA3E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146770
	if (ctx.cr0.eq) goto loc_82146770;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82146770
	if (ctx.cr0.eq) goto loc_82146770;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820da248
	ctx.lr = 0x82146770;
	sub_820DA248(ctx, base);
loc_82146770:
	// lwz r3,-1388(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x82146778;
	sub_8214B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214689c
	if (ctx.cr0.eq) goto loc_8214689C;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x8214678C;
	sub_82163A30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// b 0x821468b0
	goto loc_821468B0;
loc_82146798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x821467A0;
	sub_82145790(ctx, base);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// li r29,13
	ctx.r29.s64 = 13;
loc_821467A8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// beq cr6,0x821467d0
	if (ctx.cr6.eq) goto loc_821467D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821467D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821467D0:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821467a8
	if (!ctx.cr0.eq) goto loc_821467A8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821467f4
	if (ctx.cr6.eq) goto loc_821467F4;
	// bl 0x82145710
	ctx.lr = 0x821467F4;
	sub_82145710(ctx, base);
loc_821467F4:
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82146808;
	sub_821459E0(ctx, base);
	// b 0x821468fc
	goto loc_821468FC;
loc_8214680C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82146820
	if (ctx.cr6.eq) goto loc_82146820;
	// bl 0x82145710
	ctx.lr = 0x82146820;
	sub_82145710(ctx, base);
loc_82146820:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214683c
	if (ctx.cr6.eq) goto loc_8214683C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82146874
	if (ctx.cr6.eq) goto loc_82146874;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82146854
	if (!ctx.cr6.eq) goto loc_82146854;
loc_8214683C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x82146844;
	sub_82145790(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_82146848:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821459e0
	ctx.lr = 0x82146854;
	sub_821459E0(ctx, base);
loc_82146854:
	// bl 0x82225508
	ctx.lr = 0x82146858;
	sub_82225508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146864
	if (ctx.cr0.eq) goto loc_82146864;
	// bl 0x82225db8
	ctx.lr = 0x82146864;
	sub_82225DB8(ctx, base);
loc_82146864:
	// bl 0x8215bd60
	ctx.lr = 0x82146868;
	sub_8215BD60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x82146a88
	goto loc_82146A88;
loc_82146874:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214688c
	if (ctx.cr0.eq) goto loc_8214688C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820da248
	ctx.lr = 0x8214688C;
	sub_820DA248(ctx, base);
loc_8214688C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x82146894;
	sub_82145790(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82146848
	goto loc_82146848;
loc_8214689C:
	// bl 0x8215bd60
	ctx.lr = 0x821468A0;
	sub_8215BD60(ctx, base);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821468A8;
	sub_8215BD60(ctx, base);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r26,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
loc_821468B0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821468c4
	if (ctx.cr6.eq) goto loc_821468C4;
	// bl 0x82145710
	ctx.lr = 0x821468C4;
	sub_82145710(ctx, base);
loc_821468C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145790
	ctx.lr = 0x821468CC;
	sub_82145790(ctx, base);
	// bl 0x82225508
	ctx.lr = 0x821468D0;
	sub_82225508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821468dc
	if (ctx.cr0.eq) goto loc_821468DC;
	// bl 0x82225db8
	ctx.lr = 0x821468DC;
	sub_82225DB8(ctx, base);
loc_821468DC:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821468E8;
	sub_8215BD60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x821468F0;
	sub_82156F00(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x821468F4;
	sub_8215BD60(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// bl 0x82220c70
	ctx.lr = 0x821468FC;
	sub_82220C70(ctx, base);
loc_821468FC:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82146a88
	if (ctx.cr6.gt) goto loc_82146A88;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-28944
	ctx.r12.s64 = ctx.r12.s64 + -28944;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// nop 
	// addi r12,r12,26932
	ctx.r12.s64 = ctx.r12.s64 + 26932;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145ba8
	ctx.lr = 0x8214693C;
	sub_82145BA8(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145cb0
	ctx.lr = 0x82146948;
	sub_82145CB0(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145d90
	ctx.lr = 0x82146954;
	sub_82145D90(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145e78
	ctx.lr = 0x82146960;
	sub_82145E78(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146528
	ctx.lr = 0x8214696C;
	sub_82146528(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145fb8
	ctx.lr = 0x82146978;
	sub_82145FB8(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82146a58
	if (ctx.cr6.eq) goto loc_82146A58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82146a24
	if (ctx.cr6.eq) goto loc_82146A24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82146a1c
	if (ctx.cr6.eq) goto loc_82146A1C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821469ac
	if (ctx.cr6.eq) goto loc_821469AC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821469c0
	if (ctx.cr6.eq) goto loc_821469C0;
	// b 0x82146a88
	goto loc_82146A88;
loc_821469AC:
	// bl 0x8215bd60
	ctx.lr = 0x821469B0;
	sub_8215BD60(ctx, base);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821469B8;
	sub_8215BD60(ctx, base);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r26,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
loc_821469C0:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821469C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bd28
	ctx.lr = 0x821469CC;
	sub_8215BD28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r28,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r28.u8);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x821469c4
	if (ctx.cr6.lt) goto loc_821469C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821469F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821469F8;
	sub_8215BD60(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// bl 0x82183078
	ctx.lr = 0x82146A00;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82146A0C;
	sub_821837D0(ctx, base);
	// bl 0x8215c738
	ctx.lr = 0x82146A10;
	sub_8215C738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146A18;
	sub_821837D0(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
loc_82146A1C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82146a84
	goto loc_82146A84;
loc_82146A24:
	// lwz r3,-1388(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1388);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82146a50
	if (ctx.cr6.eq) goto loc_82146A50;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82146a88
	if (!ctx.cr6.eq) goto loc_82146A88;
	// bl 0x8215bd60
	ctx.lr = 0x82146A40;
	sub_8215BD60(ctx, base);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146A48;
	sub_8215BD60(ctx, base);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// b 0x82146a68
	goto loc_82146A68;
loc_82146A50:
	// bl 0x8214a978
	ctx.lr = 0x82146A54;
	sub_8214A978(ctx, base);
	// b 0x82146a88
	goto loc_82146A88;
loc_82146A58:
	// lwz r3,-1388(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x82146A60;
	sub_8214B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82146a70
	if (!ctx.cr0.eq) goto loc_82146A70;
loc_82146A68:
	// stw r26,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
	// b 0x82146a88
	goto loc_82146A88;
loc_82146A70:
	// lwz r3,-1388(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1388);
	// bl 0x8214b0a8
	ctx.lr = 0x82146A78;
	sub_8214B0A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82146a88
	if (ctx.cr0.eq) goto loc_82146A88;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82146A84:
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_82146A88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82146A90"))) PPC_WEAK_FUNC(sub_82146A90);
PPC_FUNC_IMPL(__imp__sub_82146A90) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82146ad0
	if (ctx.cr6.eq) goto loc_82146AD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82146AD0:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82146AF8"))) PPC_WEAK_FUNC(sub_82146AF8);
PPC_FUNC_IMPL(__imp__sub_82146AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82146B00;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218ca50
	ctx.lr = 0x82146B10;
	sub_8218CA50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28932
	ctx.r11.s64 = ctx.r11.s64 + -28932;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// lwz r29,-792(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e8f10
	ctx.lr = 0x82146B48;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82146b70
	if (!ctx.cr0.eq) goto loc_82146B70;
	// bl 0x82183078
	ctx.lr = 0x82146B54;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x82146B60;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e9d80
	ctx.lr = 0x82146B68;
	sub_821E9D80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146B70;
	sub_821837D0(ctx, base);
loc_82146B70:
	// li r10,9
	ctx.r10.s64 = 9;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,-4984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4984, ctx.r9.u32);
loc_82146B88:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stwu r30,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82146b88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82146B88;
	// bl 0x8215bd60
	ctx.lr = 0x82146B9C;
	sub_8215BD60(ctx, base);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146BA4;
	sub_8215BD60(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x82182e90
	ctx.lr = 0x82146BAC;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82146BB4;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146BC0;
	sub_821837D0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82080000
	ctx.lr = 0x82146BC8;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82146bdc
	if (ctx.cr0.eq) goto loc_82146BDC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82154a08
	ctx.lr = 0x82146BD8;
	sub_82154A08(ctx, base);
	// b 0x82146be0
	goto loc_82146BE0;
loc_82146BDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82146BE0:
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// bl 0x82145848
	ctx.lr = 0x82146BE8;
	sub_82145848(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146BF0;
	sub_821837D0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,4639
	ctx.r4.u64 = ctx.r4.u64 | 4639;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8208f758
	ctx.lr = 0x82146C04;
	sub_8208F758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82146C10"))) PPC_WEAK_FUNC(sub_82146C10);
PPC_FUNC_IMPL(__imp__sub_82146C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82146C18;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-28932
	ctx.r11.s64 = ctx.r11.s64 + -28932;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82146C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215bd28
	ctx.lr = 0x82146C3C;
	sub_8215BD28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r28,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r28.u8);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82146c34
	if (ctx.cr6.lt) goto loc_82146C34;
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
	// li r30,9
	ctx.r30.s64 = 9;
loc_82146C54:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82146c74
	if (ctx.cr6.eq) goto loc_82146C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82146C74:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,12(r31)
	ea = 12 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82146c54
	if (!ctx.cr0.eq) goto loc_82146C54;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82146ca0
	if (ctx.cr6.eq) goto loc_82146CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82146CA0:
	// stw r28,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r28.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146CA8;
	sub_8215BD60(ctx, base);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// bl 0x82145890
	ctx.lr = 0x82146CB0;
	sub_82145890(ctx, base);
	// bl 0x82225db8
	ctx.lr = 0x82146CB4;
	sub_82225DB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218cc18
	ctx.lr = 0x82146CBC;
	sub_8218CC18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82146CC4"))) PPC_WEAK_FUNC(sub_82146CC4);
PPC_FUNC_IMPL(__imp__sub_82146CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82146CC8"))) PPC_WEAK_FUNC(sub_82146CC8);
PPC_FUNC_IMPL(__imp__sub_82146CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82146CD0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82146cf4
	if (!ctx.cr6.eq) goto loc_82146CF4;
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_82146CF4:
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82146CFC;
	sub_8215BD60(ctx, base);
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82182e90
	ctx.lr = 0x82146D04;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82146D0C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146D18;
	sub_821837D0(ctx, base);
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x82146d58
	if (!ctx.cr6.eq) goto loc_82146D58;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,33984
	ctx.r3.u64 = ctx.r3.u64 | 33984;
	// bl 0x82080000
	ctx.lr = 0x82146D2C;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82146d44
	if (ctx.cr0.eq) goto loc_82146D44;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x821555f0
	ctx.lr = 0x82146D40;
	sub_821555F0(ctx, base);
	// b 0x82146d48
	goto loc_82146D48;
loc_82146D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82146D48:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
loc_82146D58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82146D60;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82146D68"))) PPC_WEAK_FUNC(sub_82146D68);
PPC_FUNC_IMPL(__imp__sub_82146D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82146D70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82225500
	ctx.lr = 0x82146D84;
	sub_82225500(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x82146D88;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82146d9c
	if (!ctx.cr6.eq) goto loc_82146D9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82146e64
	goto loc_82146E64;
loc_82146D9C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x82146DAC;
	sub_82163A60(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82230de8
	ctx.lr = 0x82146DB4;
	sub_82230DE8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820ef480
	ctx.lr = 0x82146DCC;
	sub_820EF480(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82146DD0;
	sub_82163EE8(ctx, base);
	// addi r5,r3,2296
	ctx.r5.s64 = ctx.r3.s64 + 2296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82232b60
	ctx.lr = 0x82146DE0;
	sub_82232B60(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x82146DE4;
	sub_8215BEC8(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232ac8
	ctx.lr = 0x82146DF0;
	sub_82232AC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822327a8
	ctx.lr = 0x82146E14;
	sub_822327A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231e98
	ctx.lr = 0x82146E24;
	sub_82231E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822327a8
	ctx.lr = 0x82146E48;
	sub_822327A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82231e98
	ctx.lr = 0x82146E58;
	sub_82231E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232530
	ctx.lr = 0x82146E60;
	sub_82232530(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
loc_82146E64:
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82146E70"))) PPC_WEAK_FUNC(sub_82146E70);
PPC_FUNC_IMPL(__imp__sub_82146E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82146E78;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-420(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163a60
	ctx.lr = 0x82146E94;
	sub_82163A60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163a60
	ctx.lr = 0x82146EA0;
	sub_82163A60(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82230de8
	ctx.lr = 0x82146EA8;
	sub_82230DE8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820ef480
	ctx.lr = 0x82146EC0;
	sub_820EF480(ctx, base);
	// bl 0x82163ee8
	ctx.lr = 0x82146EC4;
	sub_82163EE8(ctx, base);
	// addi r5,r3,2296
	ctx.r5.s64 = ctx.r3.s64 + 2296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82232b60
	ctx.lr = 0x82146ED4;
	sub_82232B60(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x82146ED8;
	sub_8215BEC8(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232ac8
	ctx.lr = 0x82146EE4;
	sub_82232AC8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822327a8
	ctx.lr = 0x82146F08;
	sub_822327A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82231e98
	ctx.lr = 0x82146F18;
	sub_82231E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822327a8
	ctx.lr = 0x82146F3C;
	sub_822327A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82231e98
	ctx.lr = 0x82146F4C;
	sub_82231E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232530
	ctx.lr = 0x82146F54;
	sub_82232530(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a0c38
	ctx.lr = 0x82146F64;
	sub_820A0C38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82146F74"))) PPC_WEAK_FUNC(sub_82146F74);
PPC_FUNC_IMPL(__imp__sub_82146F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82146F78"))) PPC_WEAK_FUNC(sub_82146F78);
PPC_FUNC_IMPL(__imp__sub_82146F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82146F80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-8532(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82146fdc
	if (ctx.cr0.eq) goto loc_82146FDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820cc6e0
	ctx.lr = 0x82146FA0;
	sub_820CC6E0(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x82146fdc
	if (!ctx.cr6.eq) goto loc_82146FDC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x82146FB4;
	sub_821EA9B8(ctx, base);
	// li r29,6
	ctx.r29.s64 = 6;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146cc8
	ctx.lr = 0x82146FD8;
	sub_82146CC8(ctx, base);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
loc_82146FDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82146FE4"))) PPC_WEAK_FUNC(sub_82146FE4);
PPC_FUNC_IMPL(__imp__sub_82146FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82146FE8"))) PPC_WEAK_FUNC(sub_82146FE8);
PPC_FUNC_IMPL(__imp__sub_82146FE8) {
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
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82147038
	if (ctx.cr6.eq) goto loc_82147038;
	// bl 0x82145930
	ctx.lr = 0x82147018;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82147038
	if (ctx.cr0.eq) goto loc_82147038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146a90
	ctx.lr = 0x82147028;
	sub_82146A90(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
loc_82147038:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214704C"))) PPC_WEAK_FUNC(sub_8214704C);
PPC_FUNC_IMPL(__imp__sub_8214704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147050"))) PPC_WEAK_FUNC(sub_82147050);
PPC_FUNC_IMPL(__imp__sub_82147050) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821470b0
	if (!ctx.cr6.eq) goto loc_821470B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183078
	ctx.lr = 0x82147084;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82147090;
	sub_821837D0(ctx, base);
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82080000
	ctx.lr = 0x82147098;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821470a8
	if (ctx.cr0.eq) goto loc_821470A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82146198
	ctx.lr = 0x821470A8;
	sub_82146198(ctx, base);
loc_821470A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821470B0;
	sub_821837D0(ctx, base);
loc_821470B0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821470C4"))) PPC_WEAK_FUNC(sub_821470C4);
PPC_FUNC_IMPL(__imp__sub_821470C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821470C8"))) PPC_WEAK_FUNC(sub_821470C8);
PPC_FUNC_IMPL(__imp__sub_821470C8) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82147180
	if (ctx.cr6.eq) goto loc_82147180;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214713c
	if (ctx.cr6.eq) goto loc_8214713C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821471b4
	if (!ctx.cr6.eq) goto loc_821471B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82147114;
	sub_8215BD60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x82147120;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8214712C;
	sub_821837D0(ctx, base);
	// bl 0x8215c738
	ctx.lr = 0x82147130;
	sub_8215C738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82147138;
	sub_821837D0(ctx, base);
	// b 0x821471b4
	goto loc_821471B4;
loc_8214713C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82147178
	if (ctx.cr6.eq) goto loc_82147178;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821471b4
	if (!ctx.cr6.eq) goto loc_821471B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82147164;
	sub_8215BD60(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82147170;
	sub_8215BD60(ctx, base);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// b 0x821471b4
	goto loc_821471B4;
loc_82147178:
	// bl 0x8214a978
	ctx.lr = 0x8214717C;
	sub_8214A978(ctx, base);
	// b 0x821471b4
	goto loc_821471B4;
loc_82147180:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r3,-1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x8214718C;
	sub_8214B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214719c
	if (!ctx.cr0.eq) goto loc_8214719C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821471b0
	goto loc_821471B0;
loc_8214719C:
	// lwz r3,-1388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1388);
	// bl 0x8214b0a8
	ctx.lr = 0x821471A4;
	sub_8214B0A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821471b4
	if (ctx.cr0.eq) goto loc_821471B4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821471B0:
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
loc_821471B4:
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

__attribute__((alias("__imp__sub_821471CC"))) PPC_WEAK_FUNC(sub_821471CC);
PPC_FUNC_IMPL(__imp__sub_821471CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821471D0"))) PPC_WEAK_FUNC(sub_821471D0);
PPC_FUNC_IMPL(__imp__sub_821471D0) {
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
	// bl 0x82146c10
	ctx.lr = 0x821471F0;
	sub_82146C10(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82147204
	if (ctx.cr0.eq) goto loc_82147204;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82147204;
	sub_82183E40(ctx, base);
loc_82147204:
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

__attribute__((alias("__imp__sub_82147220"))) PPC_WEAK_FUNC(sub_82147220);
PPC_FUNC_IMPL(__imp__sub_82147220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82147228;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82098200
	ctx.lr = 0x82147238;
	sub_82098200(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x82147250;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8214725C;
	sub_821837D0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82080000
	ctx.lr = 0x82147264;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214727c
	if (ctx.cr0.eq) goto loc_8214727C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82098b80
	ctx.lr = 0x82147274;
	sub_82098B80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82147280
	goto loc_82147280;
loc_8214727C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82147280:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82080000
	ctx.lr = 0x82147288;
	sub_82080000(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821472a0
	if (ctx.cr0.eq) goto loc_821472A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,7960
	ctx.r11.s64 = ctx.r11.s64 + 7960;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x821472a4
	goto loc_821472A4;
loc_821472A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821472A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x821472AC;
	sub_820EF488(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821472BC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821472C4"))) PPC_WEAK_FUNC(sub_821472C4);
PPC_FUNC_IMPL(__imp__sub_821472C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821472C8"))) PPC_WEAK_FUNC(sub_821472C8);
PPC_FUNC_IMPL(__imp__sub_821472C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821472D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x821472E8;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82147480
	if (ctx.cr0.eq) goto loc_82147480;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82147324
	if (ctx.cr6.eq) goto loc_82147324;
	// bl 0x820984c0
	ctx.lr = 0x82147304;
	sub_820984C0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82147308;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x82147314;
	sub_821837D0(ctx, base);
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x820983d8
	ctx.lr = 0x8214731C;
	sub_820983D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82147324;
	sub_821837D0(ctx, base);
loc_82147324:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x821473dc
	if (ctx.cr6.lt) goto loc_821473DC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x821473dc
	if (ctx.cr6.gt) goto loc_821473DC;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821473dc
	if (ctx.cr6.eq) goto loc_821473DC;
	// bl 0x82145930
	ctx.lr = 0x82147350;
	sub_82145930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821473dc
	if (ctx.cr0.eq) goto loc_821473DC;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214737c
	if (ctx.cr6.eq) goto loc_8214737C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821473dc
	if (!ctx.cr6.eq) goto loc_821473DC;
loc_8214737C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214b0f0
	ctx.lr = 0x82147388;
	sub_8214B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821473a4
	if (ctx.cr0.eq) goto loc_821473A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163a30
	ctx.lr = 0x8214739C;
	sub_82163A30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821473bc
	goto loc_821473BC;
loc_821473A4:
	// bl 0x8215bd60
	ctx.lr = 0x821473A8;
	sub_8215BD60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821473B4;
	sub_8215BD60(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
loc_821473BC:
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146a90
	ctx.lr = 0x821473C8;
	sub_82146A90(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x821473D4;
	sub_8215BD60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82156f00
	ctx.lr = 0x821473DC;
	sub_82156F00(ctx, base);
loc_821473DC:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82147480
	if (ctx.cr6.gt) goto loc_82147480;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8214741c
	// bdzf 4*cr6+eq,0x82147428
	// bdzf 4*cr6+eq,0x82147448
	// bdzf 4*cr6+eq,0x82147454
	// bdzf 4*cr6+eq,0x82147460
	// bdzf 4*cr6+eq,0x8214746c
	// bne cr6,0x82147478
	if (!ctx.cr6.eq) goto loc_82147478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146d68
	ctx.lr = 0x82147418;
	sub_82146D68(ctx, base);
	// b 0x82147480
	goto loc_82147480;
loc_8214741C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146e70
	ctx.lr = 0x82147424;
	sub_82146E70(ctx, base);
	// b 0x82147480
	goto loc_82147480;
loc_82147428:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82147480
	if (!ctx.cr6.eq) goto loc_82147480;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// b 0x82147480
	goto loc_82147480;
loc_82147448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147220
	ctx.lr = 0x82147450;
	sub_82147220(ctx, base);
	// b 0x82147480
	goto loc_82147480;
loc_82147454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146f78
	ctx.lr = 0x8214745C;
	sub_82146F78(ctx, base);
	// b 0x82147480
	goto loc_82147480;
loc_82147460:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146fe8
	ctx.lr = 0x82147468;
	sub_82146FE8(ctx, base);
	// b 0x82147480
	goto loc_82147480;
loc_8214746C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147050
	ctx.lr = 0x82147474;
	sub_82147050(ctx, base);
	// b 0x82147480
	goto loc_82147480;
loc_82147478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821470c8
	ctx.lr = 0x82147480;
	sub_821470C8(ctx, base);
loc_82147480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82147488"))) PPC_WEAK_FUNC(sub_82147488);
PPC_FUNC_IMPL(__imp__sub_82147488) {
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
	ctx.lr = 0x821474A4;
	sub_821EBAA8(ctx, base);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x823c3410
	ctx.lr = 0x821474AC;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x821474B4;
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

__attribute__((alias("__imp__sub_821474C8"))) PPC_WEAK_FUNC(sub_821474C8);
PPC_FUNC_IMPL(__imp__sub_821474C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821474D8"))) PPC_WEAK_FUNC(sub_821474D8);
PPC_FUNC_IMPL(__imp__sub_821474D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821474EC"))) PPC_WEAK_FUNC(sub_821474EC);
PPC_FUNC_IMPL(__imp__sub_821474EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821474F0"))) PPC_WEAK_FUNC(sub_821474F0);
PPC_FUNC_IMPL(__imp__sub_821474F0) {
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214752c
	if (ctx.cr0.eq) goto loc_8214752C;
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82147530
	if (ctx.cr6.gt) goto loc_82147530;
loc_8214752C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82147530:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82147544"))) PPC_WEAK_FUNC(sub_82147544);
PPC_FUNC_IMPL(__imp__sub_82147544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147548"))) PPC_WEAK_FUNC(sub_82147548);
PPC_FUNC_IMPL(__imp__sub_82147548) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mulli r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 * 15;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821475d0
	if (ctx.cr0.lt) goto loc_821475D0;
	// ld r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x821475d0
	if (!ctx.cr6.lt) goto loc_821475D0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 * 15;
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// b 0x82147624
	goto loc_82147624;
loc_821475D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8214760c
	if (!ctx.cr6.gt) goto loc_8214760C;
	// ld r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// cmpldi cr6,r10,45
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 45, ctx.xer);
	// bne cr6,0x82147620
	if (!ctx.cr6.eq) goto loc_82147620;
	// ld r10,640(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 640);
	// ld r9,648(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 648);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x82147608
	if (!ctx.cr6.lt) goto loc_82147608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82147624
	goto loc_82147624;
loc_82147608:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8214760C:
	// bge cr6,0x82147620
	if (!ctx.cr6.lt) goto loc_82147620;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82147624
	if (!ctx.cr6.eq) goto loc_82147624;
loc_82147620:
	// li r3,3
	ctx.r3.s64 = 3;
loc_82147624:
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

__attribute__((alias("__imp__sub_8214763C"))) PPC_WEAK_FUNC(sub_8214763C);
PPC_FUNC_IMPL(__imp__sub_8214763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82147640"))) PPC_WEAK_FUNC(sub_82147640);
PPC_FUNC_IMPL(__imp__sub_82147640) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add. r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x82147698
	if (ctx.cr0.eq) goto loc_82147698;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82147698:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// bl 0x8218a5f0
	ctx.lr = 0x821476B0;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821476C0"))) PPC_WEAK_FUNC(sub_821476C0);
PPC_FUNC_IMPL(__imp__sub_821476C0) {
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
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x82155dc0
	ctx.lr = 0x821476DC;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82147708
	if (!ctx.cr0.eq) goto loc_82147708;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821476f4
	if (ctx.cr6.eq) goto loc_821476F4;
	// bl 0x82154aa8
	ctx.lr = 0x821476F4;
	sub_82154AA8(ctx, base);
loc_821476F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147708:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8214771C"))) PPC_WEAK_FUNC(sub_8214771C);
PPC_FUNC_IMPL(__imp__sub_8214771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

