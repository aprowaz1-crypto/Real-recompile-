#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82216FE0"))) PPC_WEAK_FUNC(sub_82216FE0);
PPC_FUNC_IMPL(__imp__sub_82216FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,339
	ctx.r11.s64 = ctx.r5.s64 + 339;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r9,r11,-3
	ctx.r9.s64 = ctx.r11.s64 + -3;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82216FFC"))) PPC_WEAK_FUNC(sub_82216FFC);
PPC_FUNC_IMPL(__imp__sub_82216FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217000"))) PPC_WEAK_FUNC(sub_82217000);
PPC_FUNC_IMPL(__imp__sub_82217000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-2032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217028"))) PPC_WEAK_FUNC(sub_82217028);
PPC_FUNC_IMPL(__imp__sub_82217028) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8208de30
	sub_8208DE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82217030"))) PPC_WEAK_FUNC(sub_82217030);
PPC_FUNC_IMPL(__imp__sub_82217030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// stw r4,1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1728, ctx.r4.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r6,1732(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1732, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217058"))) PPC_WEAK_FUNC(sub_82217058);
PPC_FUNC_IMPL(__imp__sub_82217058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,552(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221706c
	if (ctx.cr6.eq) goto loc_8221706C;
loc_82217064:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8221706C:
	// lbz r11,576(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217064
	if (!ctx.cr6.eq) goto loc_82217064;
	// lbz r11,577(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 577);
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

__attribute__((alias("__imp__sub_82217088"))) PPC_WEAK_FUNC(sub_82217088);
PPC_FUNC_IMPL(__imp__sub_82217088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221709c
	if (!ctx.cr6.eq) goto loc_8221709C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8221709C:
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lwz r9,1728(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822170B4"))) PPC_WEAK_FUNC(sub_822170B4);
PPC_FUNC_IMPL(__imp__sub_822170B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822170B8"))) PPC_WEAK_FUNC(sub_822170B8);
PPC_FUNC_IMPL(__imp__sub_822170B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822170D0"))) PPC_WEAK_FUNC(sub_822170D0);
PPC_FUNC_IMPL(__imp__sub_822170D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822170E8"))) PPC_WEAK_FUNC(sub_822170E8);
PPC_FUNC_IMPL(__imp__sub_822170E8) {
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
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8221a5f0
	ctx.lr = 0x82217100;
	sub_8221A5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209c0d0
	ctx.lr = 0x82217108;
	sub_8209C0D0(ctx, base);
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

__attribute__((alias("__imp__sub_82217130"))) PPC_WEAK_FUNC(sub_82217130);
PPC_FUNC_IMPL(__imp__sub_82217130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221713C"))) PPC_WEAK_FUNC(sub_8221713C);
PPC_FUNC_IMPL(__imp__sub_8221713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217140"))) PPC_WEAK_FUNC(sub_82217140);
PPC_FUNC_IMPL(__imp__sub_82217140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82217168
	if (ctx.cr6.lt) goto loc_82217168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,11196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82217168:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217170"))) PPC_WEAK_FUNC(sub_82217170);
PPC_FUNC_IMPL(__imp__sub_82217170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82217184"))) PPC_WEAK_FUNC(sub_82217184);
PPC_FUNC_IMPL(__imp__sub_82217184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217188"))) PPC_WEAK_FUNC(sub_82217188);
PPC_FUNC_IMPL(__imp__sub_82217188) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217194"))) PPC_WEAK_FUNC(sub_82217194);
PPC_FUNC_IMPL(__imp__sub_82217194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217198"))) PPC_WEAK_FUNC(sub_82217198);
PPC_FUNC_IMPL(__imp__sub_82217198) {
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
	// addi r10,r11,-3204
	ctx.r10.s64 = ctx.r11.s64 + -3204;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x822171C4;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822171e0
	if (ctx.cr6.eq) goto loc_822171E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822171DC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822171E0:
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

__attribute__((alias("__imp__sub_822171F8"))) PPC_WEAK_FUNC(sub_822171F8);
PPC_FUNC_IMPL(__imp__sub_822171F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221729c
	if (ctx.cr6.gt) goto loc_8221729C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82217240
	// bdzf 4*cr6+eq,0x82217258
	// bne cr6,0x8221726c
	if (!ctx.cr6.eq) goto loc_8221726C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820ba658
	ctx.lr = 0x8221723C;
	sub_820BA658(ctx, base);
	// b 0x8221729c
	goto loc_8221729C;
loc_82217240:
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82217298
	goto loc_82217298;
loc_82217258:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82097a50
	ctx.lr = 0x82217268;
	sub_82097A50(ctx, base);
	// b 0x8221729c
	goto loc_8221729C;
loc_8221726C:
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820f03a8
	ctx.lr = 0x82217284;
	sub_820F03A8(ctx, base);
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82217298:
	// bl 0x820f03a8
	ctx.lr = 0x8221729C;
	sub_820F03A8(ctx, base);
loc_8221729C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822172F0"))) PPC_WEAK_FUNC(sub_822172F0);
PPC_FUNC_IMPL(__imp__sub_822172F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822172F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221732c
	if (!ctx.cr6.gt) goto loc_8221732C;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82217314:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x8208f878
	ctx.lr = 0x8221731C;
	sub_8208F878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82217314
	if (ctx.cr6.lt) goto loc_82217314;
loc_8221732C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221735C"))) PPC_WEAK_FUNC(sub_8221735C);
PPC_FUNC_IMPL(__imp__sub_8221735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217360"))) PPC_WEAK_FUNC(sub_82217360);
PPC_FUNC_IMPL(__imp__sub_82217360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// lfs f1,760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217370"))) PPC_WEAK_FUNC(sub_82217370);
PPC_FUNC_IMPL(__imp__sub_82217370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82217398
	if (ctx.cr6.eq) goto loc_82217398;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// stw r9,1384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1384, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1388, ctx.r11.u32);
loc_82217398:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822173B4"))) PPC_WEAK_FUNC(sub_822173B4);
PPC_FUNC_IMPL(__imp__sub_822173B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822173B8"))) PPC_WEAK_FUNC(sub_822173B8);
PPC_FUNC_IMPL(__imp__sub_822173B8) {
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
	// addi r30,r3,372
	ctx.r30.s64 = ctx.r3.s64 + 372;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x822aa648
	ctx.lr = 0x822173E0;
	sub_822AA648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// lwz r4,348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// lwz r3,344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820b8ee0
	ctx.lr = 0x822173F8;
	sub_820B8EE0(ctx, base);
	// lwz r10,540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221741c
	if (!ctx.cr6.eq) goto loc_8221741C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8221741c
	if (ctx.cr6.lt) goto loc_8221741C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
loc_8221741C:
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

__attribute__((alias("__imp__sub_82217434"))) PPC_WEAK_FUNC(sub_82217434);
PPC_FUNC_IMPL(__imp__sub_82217434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217438"))) PPC_WEAK_FUNC(sub_82217438);
PPC_FUNC_IMPL(__imp__sub_82217438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82217440;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r10,1920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1920);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bl 0x82213448
	ctx.lr = 0x82217464;
	sub_82213448(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82217484
	if (ctx.cr6.eq) goto loc_82217484;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82217484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82217484:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r4,116
	ctx.r4.s64 = 116;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// sth r30,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r30.u16);
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// sth r30,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r30.u16);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// std r30,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r30.u64);
	// std r30,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r30.u64);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
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
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f13,316(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f13,364(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82217580;
	sub_822AA648(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r29,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r29.u32);
	// bl 0x820f3a78
	ctx.lr = 0x8221759C;
	sub_820F3A78(ctx, base);
	// stw r3,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r3.u32);
	// stw r29,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r29.u32);
	// stw r29,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r29.u32);
	// stw r29,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r29.u32);
	// stw r29,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r29.u32);
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
	// stw r29,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r29.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x822aa648
	ctx.lr = 0x822175D0;
	sub_822AA648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,549
	ctx.r3.s64 = ctx.r31.s64 + 549;
	// bl 0x822aa648
	ctx.lr = 0x822175DC;
	sub_822AA648(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822175E4"))) PPC_WEAK_FUNC(sub_822175E4);
PPC_FUNC_IMPL(__imp__sub_822175E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822175E8"))) PPC_WEAK_FUNC(sub_822175E8);
PPC_FUNC_IMPL(__imp__sub_822175E8) {
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
	// lwz r10,1572(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1572);
	// lwz r11,1568(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1568);
	// lwz r3,1908(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820a74e8
	ctx.lr = 0x8221760C;
	sub_820A74E8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217630"))) PPC_WEAK_FUNC(sub_82217630);
PPC_FUNC_IMPL(__imp__sub_82217630) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208e820
	ctx.lr = 0x82217650;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221766c
	if (!ctx.cr6.eq) goto loc_8221766C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x82217660;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82217670
	if (ctx.cr6.eq) goto loc_82217670;
loc_8221766C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82217670:
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// bl 0x821882d0
	ctx.lr = 0x82217680;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82217694
	if (ctx.cr6.eq) goto loc_82217694;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221769c
	if (!ctx.cr6.eq) goto loc_8221769C;
loc_82217694:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x822176ac
	goto loc_822176AC;
loc_8221769C:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82217694
	if (!ctx.cr6.eq) goto loc_82217694;
	// bl 0x820b9cf8
	ctx.lr = 0x822176AC;
	sub_820B9CF8(ctx, base);
loc_822176AC:
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

__attribute__((alias("__imp__sub_822176C4"))) PPC_WEAK_FUNC(sub_822176C4);
PPC_FUNC_IMPL(__imp__sub_822176C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822176C8"))) PPC_WEAK_FUNC(sub_822176C8);
PPC_FUNC_IMPL(__imp__sub_822176C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208e820
	ctx.lr = 0x822176E8;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217704
	if (!ctx.cr6.eq) goto loc_82217704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x822176F8;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x82217708
	if (ctx.cr6.eq) goto loc_82217708;
loc_82217704:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82217708:
	// lis r4,17219
	ctx.r4.s64 = 1128464384;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,16975
	ctx.r4.u64 = ctx.r4.u64 | 16975;
	// bl 0x821882d0
	ctx.lr = 0x82217718;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221772c
	if (ctx.cr6.eq) goto loc_8221772C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82217734
	if (!ctx.cr6.eq) goto loc_82217734;
loc_8221772C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82217744
	goto loc_82217744;
loc_82217734:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8221772c
	if (!ctx.cr6.eq) goto loc_8221772C;
	// bl 0x820b9d70
	ctx.lr = 0x82217744;
	sub_820B9D70(ctx, base);
loc_82217744:
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

__attribute__((alias("__imp__sub_8221775C"))) PPC_WEAK_FUNC(sub_8221775C);
PPC_FUNC_IMPL(__imp__sub_8221775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217760"))) PPC_WEAK_FUNC(sub_82217760);
PPC_FUNC_IMPL(__imp__sub_82217760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1908(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,576(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217778"))) PPC_WEAK_FUNC(sub_82217778);
PPC_FUNC_IMPL(__imp__sub_82217778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1908(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217790
	if (!ctx.cr6.eq) goto loc_82217790;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82217790:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822177A0"))) PPC_WEAK_FUNC(sub_822177A0);
PPC_FUNC_IMPL(__imp__sub_822177A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1908(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822177b8
	if (!ctx.cr6.eq) goto loc_822177B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822177B8:
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822177C8"))) PPC_WEAK_FUNC(sub_822177C8);
PPC_FUNC_IMPL(__imp__sub_822177C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1908(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822177e0
	if (!ctx.cr6.eq) goto loc_822177E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_822177E0:
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822177F0"))) PPC_WEAK_FUNC(sub_822177F0);
PPC_FUNC_IMPL(__imp__sub_822177F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1908(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82217804
	if (!ctx.cr6.eq) goto loc_82217804;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82217804:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x820a75f0
	sub_820A75F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221780C"))) PPC_WEAK_FUNC(sub_8221780C);
PPC_FUNC_IMPL(__imp__sub_8221780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217810"))) PPC_WEAK_FUNC(sub_82217810);
PPC_FUNC_IMPL(__imp__sub_82217810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1732(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217824
	if (!ctx.cr6.eq) goto loc_82217824;
loc_8221781C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82217824:
	// lwz r10,1388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221781c
	if (ctx.cr6.eq) goto loc_8221781C;
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// lwz r10,1284(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1284);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217848"))) PPC_WEAK_FUNC(sub_82217848);
PPC_FUNC_IMPL(__imp__sub_82217848) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208dbb0
	ctx.lr = 0x8221786C;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221789c
	if (ctx.cr6.eq) goto loc_8221789C;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221789c
	if (!ctx.cr6.eq) goto loc_8221789C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,-5056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// bl 0x820ed8c0
	ctx.lr = 0x82217898;
	sub_820ED8C0(ctx, base);
	// b 0x822178a0
	goto loc_822178A0;
loc_8221789C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822178A0:
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

__attribute__((alias("__imp__sub_822178B8"))) PPC_WEAK_FUNC(sub_822178B8);
PPC_FUNC_IMPL(__imp__sub_822178B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208dbb0
	ctx.lr = 0x822178DC;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221790c
	if (ctx.cr6.eq) goto loc_8221790C;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221790c
	if (!ctx.cr6.eq) goto loc_8221790C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r3,-5056(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// bl 0x820ed8c0
	ctx.lr = 0x82217908;
	sub_820ED8C0(ctx, base);
	// b 0x82217910
	goto loc_82217910;
loc_8221790C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82217910:
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

__attribute__((alias("__imp__sub_82217928"))) PPC_WEAK_FUNC(sub_82217928);
PPC_FUNC_IMPL(__imp__sub_82217928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,1376(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1376);
	// li r11,1
	ctx.r11.s64 = 1;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82217944"))) PPC_WEAK_FUNC(sub_82217944);
PPC_FUNC_IMPL(__imp__sub_82217944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217948"))) PPC_WEAK_FUNC(sub_82217948);
PPC_FUNC_IMPL(__imp__sub_82217948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82217950;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217a54
	if (ctx.cr6.eq) goto loc_82217A54;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82217a54
	if (ctx.cr6.eq) goto loc_82217A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r3,1908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1908);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x820a62a0
	ctx.lr = 0x82217990;
	sub_820A62A0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x822179c8
	if (ctx.cr6.gt) goto loc_822179C8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822179b4
	// bdzf 4*cr6+eq,0x822179bc
	// bne cr6,0x822179c4
	if (!ctx.cr6.eq) goto loc_822179C4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822179c8
	goto loc_822179C8;
loc_822179B4:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822179c8
	goto loc_822179C8;
loc_822179BC:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x822179c8
	goto loc_822179C8;
loc_822179C4:
	// li r30,3
	ctx.r30.s64 = 3;
loc_822179C8:
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x82217140
	ctx.lr = 0x822179E0;
	sub_82217140(ctx, base);
	// addi r10,r3,-3
	ctx.r10.s64 = ctx.r3.s64 + -3;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// and r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82219918
	ctx.lr = 0x82217A0C;
	sub_82219918(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// bl 0x82219920
	ctx.lr = 0x82217A28;
	sub_82219920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82217a4c
	if (!ctx.cr6.gt) goto loc_82217A4C;
	// bl 0x8218fba8
	ctx.lr = 0x82217A38;
	sub_8218FBA8(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u32 = ctx.r3.u32 / ctx.r31.u32;
	// twllei r31,0
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// b 0x82217a50
	goto loc_82217A50;
loc_82217A4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82217A50:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82217A54:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82217A8C"))) PPC_WEAK_FUNC(sub_82217A8C);
PPC_FUNC_IMPL(__imp__sub_82217A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217A90"))) PPC_WEAK_FUNC(sub_82217A90);
PPC_FUNC_IMPL(__imp__sub_82217A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82217A98;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,-3208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3208);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r29,r10,-5052
	ctx.r29.s64 = ctx.r10.s64 + -5052;
loc_82217AC0:
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// lwz r9,1468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// lwz r8,1468(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1468);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// lwz r10,1956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82217b30
	if (ctx.cr6.eq) goto loc_82217B30;
	// addi r4,r11,416
	ctx.r4.s64 = ctx.r11.s64 + 416;
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// bl 0x821871d8
	ctx.lr = 0x82217B20;
	sub_821871D8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x82217b30
	if (!ctx.cr6.gt) goto loc_82217B30;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82217B30:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82217ac0
	if (ctx.cr6.lt) goto loc_82217AC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82217B50"))) PPC_WEAK_FUNC(sub_82217B50);
PPC_FUNC_IMPL(__imp__sub_82217B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82217B58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82217B74;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r11,-3204
	ctx.r7.s64 = ctx.r11.s64 + -3204;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82217C3C"))) PPC_WEAK_FUNC(sub_82217C3C);
PPC_FUNC_IMPL(__imp__sub_82217C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217C40"))) PPC_WEAK_FUNC(sub_82217C40);
PPC_FUNC_IMPL(__imp__sub_82217C40) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// bl 0x82217b50
	ctx.lr = 0x82217C90;
	sub_82217B50(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,304
	ctx.r10.s64 = ctx.r31.s64 + 304;
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f13,284(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f0,308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f13,316(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f13,332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82217438
	ctx.lr = 0x82217D10;
	sub_82217438(ctx, base);
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

__attribute__((alias("__imp__sub_82217D2C"))) PPC_WEAK_FUNC(sub_82217D2C);
PPC_FUNC_IMPL(__imp__sub_82217D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217D30"))) PPC_WEAK_FUNC(sub_82217D30);
PPC_FUNC_IMPL(__imp__sub_82217D30) {
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
	// bl 0x8209c0d0
	ctx.lr = 0x82217D48;
	sub_8209C0D0(ctx, base);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bge cr6,0x82217d68
	if (!ctx.cr6.lt) goto loc_82217D68;
loc_82217D50:
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
loc_82217D68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217d50
	if (ctx.cr6.eq) goto loc_82217D50;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82217d50
	if (ctx.cr0.eq) goto loc_82217D50;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82217d50
	if (ctx.cr0.eq) goto loc_82217D50;
	// lwz r10,1892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1892);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82217d50
	if (!ctx.cr6.eq) goto loc_82217D50;
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82217d50
	if (ctx.cr6.eq) goto loc_82217D50;
	// lwz r11,1728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82217d50
	if (ctx.cr6.eq) goto loc_82217D50;
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

__attribute__((alias("__imp__sub_82217DD8"))) PPC_WEAK_FUNC(sub_82217DD8);
PPC_FUNC_IMPL(__imp__sub_82217DD8) {
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
	// lwz r11,432(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,432(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// bl 0x82249c38
	ctx.lr = 0x82217E18;
	sub_82249C38(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f9,404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,2140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8964(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8964);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,2136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadds f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82217e54
	if (!ctx.cr6.gt) goto loc_82217E54;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x82217e68
	goto loc_82217E68;
loc_82217E54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82217e68
	if (!ctx.cr6.lt) goto loc_82217E68;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82217E68:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subfic r10,r31,2048
	ctx.xer.ca = ctx.r31.u32 <= 2048;
	ctx.r10.s64 = 2048 - ctx.r31.s64;
	// lfs f13,8272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// clrlwi r8,r9,20
	ctx.r8.u64 = ctx.r9.u32 & 0xFFF;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82217eb8
	if (!ctx.cr6.lt) goto loc_82217EB8;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r11,r31,2048
	ctx.r11.s64 = ctx.r31.s64 + 2048;
	// li r3,1
	ctx.r3.s64 = 1;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82217ebc
	if (ctx.cr6.lt) goto loc_82217EBC;
loc_82217EB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217EBC:
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

__attribute__((alias("__imp__sub_82217ED4"))) PPC_WEAK_FUNC(sub_82217ED4);
PPC_FUNC_IMPL(__imp__sub_82217ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82217ED8"))) PPC_WEAK_FUNC(sub_82217ED8);
PPC_FUNC_IMPL(__imp__sub_82217ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82217EE0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,17229
	ctx.r10.s64 = 1129119744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r27,r10,18758
	ctx.r27.u64 = ctx.r10.u64 | 18758;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217f34
	if (ctx.cr6.eq) goto loc_82217F34;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,1964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x82217F0C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82217f34
	if (ctx.cr6.eq) goto loc_82217F34;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217f34
	if (ctx.cr6.eq) goto loc_82217F34;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82217fa0
	if (!ctx.cr6.eq) goto loc_82217FA0;
loc_82217F34:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
loc_82217F40:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82217f90
	if (ctx.cr6.eq) goto loc_82217F90;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x82217F58;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82217f80
	if (ctx.cr6.eq) goto loc_82217F80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217f80
	if (ctx.cr6.eq) goto loc_82217F80;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82217f90
	if (!ctx.cr6.eq) goto loc_82217F90;
loc_82217F80:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82217fac
	if (ctx.cr6.eq) goto loc_82217FAC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82217F90:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,36
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 36, ctx.xer);
	// blt cr6,0x82217f40
	if (ctx.cr6.lt) goto loc_82217F40;
loc_82217FA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82217FAC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82217FB8"))) PPC_WEAK_FUNC(sub_82217FB8);
PPC_FUNC_IMPL(__imp__sub_82217FB8) {
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
	// bl 0x8208dc50
	ctx.lr = 0x82217FD4;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217ff4
	if (!ctx.cr6.eq) goto loc_82217FF4;
loc_82217FDC:
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
loc_82217FF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82217fdc
	if (ctx.cr6.eq) goto loc_82217FDC;
	// addic. r11,r31,1908
	ctx.xer.ca = ctx.r31.u32 > 4294965387;
	ctx.r11.s64 = ctx.r31.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217fdc
	if (ctx.cr0.eq) goto loc_82217FDC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82217fdc
	if (ctx.cr6.eq) goto loc_82217FDC;
	// bl 0x822144d8
	ctx.lr = 0x82218014;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82217fdc
	if (ctx.cr6.eq) goto loc_82217FDC;
	// lhz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218040"))) PPC_WEAK_FUNC(sub_82218040);
PPC_FUNC_IMPL(__imp__sub_82218040) {
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
	// bl 0x8208dc50
	ctx.lr = 0x8221805C;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221807c
	if (!ctx.cr6.eq) goto loc_8221807C;
loc_82218064:
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
loc_8221807C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82218064
	if (ctx.cr6.eq) goto loc_82218064;
	// addic. r11,r31,1908
	ctx.xer.ca = ctx.r31.u32 > 4294965387;
	ctx.r11.s64 = ctx.r31.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218064
	if (ctx.cr0.eq) goto loc_82218064;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218064
	if (ctx.cr6.eq) goto loc_82218064;
	// bl 0x822144d8
	ctx.lr = 0x8221809C;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218064
	if (ctx.cr6.eq) goto loc_82218064;
	// lhz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822180C4"))) PPC_WEAK_FUNC(sub_822180C4);
PPC_FUNC_IMPL(__imp__sub_822180C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822180C8"))) PPC_WEAK_FUNC(sub_822180C8);
PPC_FUNC_IMPL(__imp__sub_822180C8) {
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
	// bl 0x8208dc50
	ctx.lr = 0x822180E4;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82218104
	if (!ctx.cr6.eq) goto loc_82218104;
loc_822180EC:
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
loc_82218104:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822180ec
	if (ctx.cr6.eq) goto loc_822180EC;
	// addic. r11,r31,1908
	ctx.xer.ca = ctx.r31.u32 > 4294965387;
	ctx.r11.s64 = ctx.r31.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822180ec
	if (ctx.cr0.eq) goto loc_822180EC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822180ec
	if (ctx.cr6.eq) goto loc_822180EC;
	// bl 0x822144d8
	ctx.lr = 0x82218124;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822180ec
	if (ctx.cr6.eq) goto loc_822180EC;
	// lhz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218150"))) PPC_WEAK_FUNC(sub_82218150);
PPC_FUNC_IMPL(__imp__sub_82218150) {
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
	// bl 0x8208dc50
	ctx.lr = 0x8221816C;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221818c
	if (!ctx.cr6.eq) goto loc_8221818C;
loc_82218174:
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
loc_8221818C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82218174
	if (ctx.cr6.eq) goto loc_82218174;
	// addic. r11,r31,1908
	ctx.xer.ca = ctx.r31.u32 > 4294965387;
	ctx.r11.s64 = ctx.r31.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82218174
	if (ctx.cr0.eq) goto loc_82218174;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218174
	if (ctx.cr6.eq) goto loc_82218174;
	// bl 0x822144d8
	ctx.lr = 0x822181AC;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218174
	if (ctx.cr6.eq) goto loc_82218174;
	// lhz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 376);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822181D8"))) PPC_WEAK_FUNC(sub_822181D8);
PPC_FUNC_IMPL(__imp__sub_822181D8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8208dc50
	ctx.lr = 0x822181F4;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82218214
	if (!ctx.cr6.eq) goto loc_82218214;
loc_822181FC:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82218214:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822181fc
	if (ctx.cr6.eq) goto loc_822181FC;
	// addic. r11,r31,1908
	ctx.xer.ca = ctx.r31.u32 > 4294965387;
	ctx.r11.s64 = ctx.r31.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822181fc
	if (ctx.cr0.eq) goto loc_822181FC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822181fc
	if (ctx.cr6.eq) goto loc_822181FC;
	// bl 0x822144d8
	ctx.lr = 0x82218234;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822181fc
	if (ctx.cr6.eq) goto loc_822181FC;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 416);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82218274"))) PPC_WEAK_FUNC(sub_82218274);
PPC_FUNC_IMPL(__imp__sub_82218274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218278"))) PPC_WEAK_FUNC(sub_82218278);
PPC_FUNC_IMPL(__imp__sub_82218278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218280;
	sub_8224878C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8208dc50
	ctx.lr = 0x82218298;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822182ac
	if (!ctx.cr6.eq) goto loc_822182AC;
loc_822182A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822182AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822181d8
	ctx.lr = 0x822182B8;
	sub_822181D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822182a0
	if (!ctx.cr6.eq) goto loc_822182A0;
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822aa648
	ctx.lr = 0x822182CC;
	sub_822AA648(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x820b8ee0
	ctx.lr = 0x822182E0;
	sub_820B8EE0(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,138(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 138);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// li r8,0
	ctx.r8.s64 = 0;
	// subfc r6,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// adde r3,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82218314"))) PPC_WEAK_FUNC(sub_82218314);
PPC_FUNC_IMPL(__imp__sub_82218314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218318"))) PPC_WEAK_FUNC(sub_82218318);
PPC_FUNC_IMPL(__imp__sub_82218318) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221834c
	if (ctx.cr6.eq) goto loc_8221834C;
	// addic. r11,r4,1908
	ctx.xer.ca = ctx.r4.u32 > 4294965387;
	ctx.r11.s64 = ctx.r4.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221834c
	if (ctx.cr0.eq) goto loc_8221834C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221834c
	if (ctx.cr6.eq) goto loc_8221834C;
	// bl 0x822144d8
	ctx.lr = 0x82218344;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82218360
	if (!ctx.cr6.eq) goto loc_82218360;
loc_8221834C:
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
loc_82218360:
	// lbz r11,455(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 455);
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

__attribute__((alias("__imp__sub_8221837C"))) PPC_WEAK_FUNC(sub_8221837C);
PPC_FUNC_IMPL(__imp__sub_8221837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218380"))) PPC_WEAK_FUNC(sub_82218380);
PPC_FUNC_IMPL(__imp__sub_82218380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822183E8"))) PPC_WEAK_FUNC(sub_822183E8);
PPC_FUNC_IMPL(__imp__sub_822183E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82218420
	if (!ctx.cr6.eq) goto loc_82218420;
loc_82218404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
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
loc_82218420:
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218404
	if (ctx.cr6.eq) goto loc_82218404;
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,432(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fneg f2,f9
	ctx.f2.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// bl 0x82249c38
	ctx.lr = 0x8221846C;
	sub_82249C38(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwz r5,1732(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f7,404(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 404);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,2140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822184ac
	if (!ctx.cr6.gt) goto loc_822184AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
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
loc_822184AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822184c8
	if (!ctx.cr6.lt) goto loc_822184C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
loc_822184C8:
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

__attribute__((alias("__imp__sub_822184DC"))) PPC_WEAK_FUNC(sub_822184DC);
PPC_FUNC_IMPL(__imp__sub_822184DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822184E0"))) PPC_WEAK_FUNC(sub_822184E0);
PPC_FUNC_IMPL(__imp__sub_822184E0) {
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
	// beq cr6,0x8221851c
	if (ctx.cr6.eq) goto loc_8221851C;
	// addic. r11,r4,1908
	ctx.xer.ca = ctx.r4.u32 > 4294965387;
	ctx.r11.s64 = ctx.r4.s64 + 1908;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221851c
	if (ctx.cr0.eq) goto loc_8221851C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221851c
	if (ctx.cr6.eq) goto loc_8221851C;
	// bl 0x822144d8
	ctx.lr = 0x8221850C;
	sub_822144D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221851c
	if (ctx.cr6.eq) goto loc_8221851C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,549(r3)
	PPC_STORE_U8(ctx.r3.u32 + 549, ctx.r11.u8);
loc_8221851C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221852C"))) PPC_WEAK_FUNC(sub_8221852C);
PPC_FUNC_IMPL(__imp__sub_8221852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218530"))) PPC_WEAK_FUNC(sub_82218530);
PPC_FUNC_IMPL(__imp__sub_82218530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218538;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82218584
	if (ctx.cr6.eq) goto loc_82218584;
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82218584
	if (ctx.cr6.eq) goto loc_82218584;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82183078
	ctx.lr = 0x82218560;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8221856C;
	sub_821837D0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822171f8
	ctx.lr = 0x82218574;
	sub_822171F8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x822172f0
	ctx.lr = 0x8221857C;
	sub_822172F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82218584;
	sub_821837D0(ctx, base);
loc_82218584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221858C"))) PPC_WEAK_FUNC(sub_8221858C);
PPC_FUNC_IMPL(__imp__sub_8221858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218590"))) PPC_WEAK_FUNC(sub_82218590);
PPC_FUNC_IMPL(__imp__sub_82218590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218598;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,1732(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq cr6,0x822185e0
	if (ctx.cr6.eq) goto loc_822185E0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822185e0
	if (ctx.cr6.eq) goto loc_822185E0;
	// lwz r9,1732(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// lwz r8,1728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1728);
	// stw r8,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r8.u32);
loc_822185E0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,1880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1880);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// lfs f0,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,8272(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// clrlwi r5,r6,20
	ctx.r5.u64 = ctx.r6.u32 & 0xFFF;
	// sth r5,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r5.u16);
	// lwz r9,-4900(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4900);
	// lfs f9,760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 760);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// clrlwi r3,r4,20
	ctx.r3.u64 = ctx.r4.u32 & 0xFFF;
	// sth r3,146(r31)
	PPC_STORE_U16(ctx.r31.u32 + 146, ctx.r3.u16);
	// lbz r9,570(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lbz r8,570(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 570);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lwz r7,432(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,272(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f4,420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,276(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lwz r6,432(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,280(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f2,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,260(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lwz r5,432(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// stw r5,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,432(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,320(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f0,420(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f12,404(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lwz r10,432(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822186fc
	if (ctx.cr6.eq) goto loc_822186FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,7948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f1,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x822186F0;
	sub_821875F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208ea90
	ctx.lr = 0x822186FC;
	sub_8208EA90(ctx, base);
loc_822186FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,568(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 568);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// lbz r8,568(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 568);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// lbz r7,569(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 569);
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// lbz r6,569(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 569);
	// stw r6,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r6.u32);
	// bl 0x82097218
	ctx.lr = 0x82218730;
	sub_82097218(ctx, base);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// addi r29,r31,320
	ctx.r29.s64 = ctx.r31.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82097218
	ctx.lr = 0x82218740;
	sub_82097218(ctx, base);
	// stw r3,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82096e80
	ctx.lr = 0x8221874C;
	sub_82096E80(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82096e80
	ctx.lr = 0x82218758;
	sub_82096E80(ctx, base);
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82097218
	ctx.lr = 0x82218764;
	sub_82097218(ctx, base);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x82097218
	ctx.lr = 0x82218770;
	sub_82097218(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82096e80
	ctx.lr = 0x8221877C;
	sub_82096E80(ctx, base);
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x82096e80
	ctx.lr = 0x82218788;
	sub_82096E80(ctx, base);
	// stw r3,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x821871d8
	ctx.lr = 0x82218798;
	sub_821871D8(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// li r6,768
	ctx.r6.s64 = 768;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82217dd8
	ctx.lr = 0x822187B0;
	sub_82217DD8(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82217dd8
	ctx.lr = 0x822187C8;
	sub_82217DD8(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82097898
	ctx.lr = 0x822187D8;
	sub_82097898(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82217dd8
	ctx.lr = 0x822187F0;
	sub_82217DD8(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82217dd8
	ctx.lr = 0x82218808;
	sub_82217DD8(ctx, base);
	// lwz r5,488(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// addi r30,r31,372
	ctx.r30.s64 = ctx.r31.s64 + 372;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r5.u32);
	// lbz r10,572(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 572);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x82218830;
	sub_822AA648(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,352(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// lwz r4,348(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// lwz r3,344(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// bl 0x820b8ee0
	ctx.lr = 0x82218848;
	sub_820B8EE0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82218850"))) PPC_WEAK_FUNC(sub_82218850);
PPC_FUNC_IMPL(__imp__sub_82218850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82218858;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1732(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1732);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,432(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x821871a0
	ctx.lr = 0x82218878;
	sub_821871A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11196(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822189c8
	if (ctx.cr6.gt) goto loc_822189C8;
	// lwz r3,1732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// bl 0x8208dc50
	ctx.lr = 0x82218890;
	sub_8208DC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822189c8
	if (ctx.cr6.eq) goto loc_822189C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1732(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// bl 0x82218318
	ctx.lr = 0x822188A4;
	sub_82218318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822189c8
	if (!ctx.cr6.eq) goto loc_822189C8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r4,1732(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,9608(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9608);
	// bl 0x82218278
	ctx.lr = 0x822188C0;
	sub_82218278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822189c8
	if (ctx.cr6.eq) goto loc_822189C8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// lfs f31,-3208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3208);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x822188e4
	if (!ctx.cr6.eq) goto loc_822188E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822188E4:
	// bl 0x820970b8
	ctx.lr = 0x822188E8;
	sub_820970B8(ctx, base);
	// addi r11,r31,1248
	ctx.r11.s64 = ctx.r31.s64 + 1248;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820970b8
	ctx.lr = 0x822188F8;
	sub_820970B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822189b4
	if (ctx.cr6.eq) goto loc_822189B4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822189b4
	if (ctx.cr6.eq) goto loc_822189B4;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822189b4
	if (!ctx.cr6.gt) goto loc_822189B4;
loc_82218920:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822189a0
	if (!ctx.cr6.gt) goto loc_822189A0;
	// rlwinm r27,r24,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221893C:
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r29,r9,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r31,r8,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82218988
	if (ctx.cr6.eq) goto loc_82218988;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82218988
	if (ctx.cr6.eq) goto loc_82218988;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x821871a0
	ctx.lr = 0x8221896C;
	sub_821871A0(ctx, base);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82218988
	if (!ctx.cr6.lt) goto loc_82218988;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82218988:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221893c
	if (ctx.cr6.lt) goto loc_8221893C;
loc_822189A0:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82218920
	if (ctx.cr6.lt) goto loc_82218920;
loc_822189B4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9604);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x822189cc
	if (ctx.cr6.lt) goto loc_822189CC;
loc_822189C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822189CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822189D8"))) PPC_WEAK_FUNC(sub_822189D8);
PPC_FUNC_IMPL(__imp__sub_822189D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r6,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218A38"))) PPC_WEAK_FUNC(sub_82218A38);
PPC_FUNC_IMPL(__imp__sub_82218A38) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82218a5c
	if (ctx.cr6.eq) goto loc_82218A5C;
	// bl 0x82218590
	ctx.lr = 0x82218A5C;
	sub_82218590(ctx, base);
loc_82218A5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lwz r9,344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82218a90
	if (!ctx.cr6.eq) goto loc_82218A90;
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82218a90
	if (!ctx.cr6.eq) goto loc_82218A90;
	// lwz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r9,352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82218aa8
	if (ctx.cr6.eq) goto loc_82218AA8;
loc_82218A90:
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// stw r9,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r9.u32);
	// stw r8,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r8.u32);
loc_82218AA8:
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
	// lwz r9,348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// stw r9,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r9.u32);
	// lwz r8,352(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// stw r8,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218AD4"))) PPC_WEAK_FUNC(sub_82218AD4);
PPC_FUNC_IMPL(__imp__sub_82218AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218AD8"))) PPC_WEAK_FUNC(sub_82218AD8);
PPC_FUNC_IMPL(__imp__sub_82218AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82218af4
	if (ctx.cr6.eq) goto loc_82218AF4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82218AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218AFC"))) PPC_WEAK_FUNC(sub_82218AFC);
PPC_FUNC_IMPL(__imp__sub_82218AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218B00"))) PPC_WEAK_FUNC(sub_82218B00);
PPC_FUNC_IMPL(__imp__sub_82218B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82218b20
	if (ctx.cr6.eq) goto loc_82218B20;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82218B20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218B28"))) PPC_WEAK_FUNC(sub_82218B28);
PPC_FUNC_IMPL(__imp__sub_82218B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218B30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82218b6c
	if (!ctx.cr6.gt) goto loc_82218B6C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82218B4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8221ac10
	ctx.lr = 0x82218B58;
	sub_8221AC10(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218b4c
	if (ctx.cr6.lt) goto loc_82218B4C;
loc_82218B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82218B74"))) PPC_WEAK_FUNC(sub_82218B74);
PPC_FUNC_IMPL(__imp__sub_82218B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218B78"))) PPC_WEAK_FUNC(sub_82218B78);
PPC_FUNC_IMPL(__imp__sub_82218B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218B80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82218bc0
	if (!ctx.cr6.gt) goto loc_82218BC0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82218B9C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221b2e8
	ctx.lr = 0x82218BAC;
	sub_8221B2E8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218b9c
	if (ctx.cr6.lt) goto loc_82218B9C;
loc_82218BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82218BC8"))) PPC_WEAK_FUNC(sub_82218BC8);
PPC_FUNC_IMPL(__imp__sub_82218BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82218BD0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82218cc8
	if (ctx.cr6.lt) goto loc_82218CC8;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// bge cr6,0x82218cc8
	if (!ctx.cr6.lt) goto loc_82218CC8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82213a80
	ctx.lr = 0x82218C00;
	sub_82213A80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82213d18
	ctx.lr = 0x82218C10;
	sub_82213D18(ctx, base);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82218cc8
	if (!ctx.cr6.gt) goto loc_82218CC8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82218C24:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82213a48
	ctx.lr = 0x82218C48;
	sub_82213A48(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x8221ac30
	ctx.lr = 0x82218C5C;
	sub_8221AC30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x8221ac70
	ctx.lr = 0x82218C6C;
	sub_8221AC70(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x8221acb0
	ctx.lr = 0x82218C7C;
	sub_8221ACB0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82213a48
	ctx.lr = 0x82218C90;
	sub_82213A48(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x8221acf0
	ctx.lr = 0x82218CA4;
	sub_8221ACF0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// bl 0x8221b160
	ctx.lr = 0x82218CB4;
	sub_8221B160(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82218c24
	if (ctx.cr6.lt) goto loc_82218C24;
loc_82218CC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82218CD0"))) PPC_WEAK_FUNC(sub_82218CD0);
PPC_FUNC_IMPL(__imp__sub_82218CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218CD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82218d18
	if (!ctx.cr6.gt) goto loc_82218D18;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82218CF4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221b2e8
	ctx.lr = 0x82218D04;
	sub_8221B2E8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218cf4
	if (ctx.cr6.lt) goto loc_82218CF4;
loc_82218D18:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82218D28"))) PPC_WEAK_FUNC(sub_82218D28);
PPC_FUNC_IMPL(__imp__sub_82218D28) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82216fc8
	ctx.lr = 0x82218D4C;
	sub_82216FC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82174fd8
	ctx.lr = 0x82218D54;
	sub_82174FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218D68"))) PPC_WEAK_FUNC(sub_82218D68);
PPC_FUNC_IMPL(__imp__sub_82218D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82218D70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// addi r9,r11,-3196
	ctx.r9.s64 = ctx.r11.s64 + -3196;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bgt cr6,0x82218db4
	if (ctx.cr6.gt) goto loc_82218DB4;
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
loc_82218DB4:
	// bl 0x82183850
	ctx.lr = 0x82218DB8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82218dd0
	if (ctx.cr6.eq) goto loc_82218DD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82218DCC;
	sub_82183448(ctx, base);
	// b 0x82218ddc
	goto loc_82218DDC;
loc_82218DD0:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82218DDC;
	sub_821845A0(ctx, base);
loc_82218DDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82218e98
	if (!ctx.cr6.gt) goto loc_82218E98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82218DF4:
	// bl 0x82183850
	ctx.lr = 0x82218DF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82218e10
	if (ctx.cr6.eq) goto loc_82218E10;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82218E0C;
	sub_82183448(ctx, base);
	// b 0x82218e18
	goto loc_82218E18;
loc_82218E10:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82218E18;
	sub_821845A0(ctx, base);
loc_82218E18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218e2c
	if (ctx.cr6.eq) goto loc_82218E2C;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221b028
	ctx.lr = 0x82218E28;
	sub_8221B028(ctx, base);
	// b 0x82218e30
	goto loc_82218E30;
loc_82218E2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82218E30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82218E3C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82218e54
	if (ctx.cr6.eq) goto loc_82218E54;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x82218E50;
	sub_82183448(ctx, base);
	// b 0x82218e5c
	goto loc_82218E5C;
loc_82218E54:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82218E5C;
	sub_821845A0(ctx, base);
loc_82218E5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218e74
	if (ctx.cr6.eq) goto loc_82218E74;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221b230
	ctx.lr = 0x82218E70;
	sub_8221B230(ctx, base);
	// b 0x82218e78
	goto loc_82218E78;
loc_82218E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82218E78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82218df4
	if (ctx.cr6.lt) goto loc_82218DF4;
loc_82218E98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82218EA4"))) PPC_WEAK_FUNC(sub_82218EA4);
PPC_FUNC_IMPL(__imp__sub_82218EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218EA8"))) PPC_WEAK_FUNC(sub_82218EA8);
PPC_FUNC_IMPL(__imp__sub_82218EA8) {
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
	// bl 0x82218b28
	ctx.lr = 0x82218EC0;
	sub_82218B28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218b78
	ctx.lr = 0x82218EC8;
	sub_82218B78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82218EDC"))) PPC_WEAK_FUNC(sub_82218EDC);
PPC_FUNC_IMPL(__imp__sub_82218EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82218EE0"))) PPC_WEAK_FUNC(sub_82218EE0);
PPC_FUNC_IMPL(__imp__sub_82218EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82218EE8;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82218f40
	if (ctx.cr6.eq) goto loc_82218F40;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b170
	ctx.lr = 0x82218F18;
	sub_8221B170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82218f40
	if (ctx.cr6.eq) goto loc_82218F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8221b1d0
	ctx.lr = 0x82218F2C;
	sub_8221B1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8221b1d8
	ctx.lr = 0x82218F38;
	sub_8221B1D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b168
	ctx.lr = 0x82218F40;
	sub_8221B168(ctx, base);
loc_82218F40:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82219208
	if (ctx.cr6.eq) goto loc_82219208;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// bne cr6,0x82218f68
	if (!ctx.cr6.eq) goto loc_82218F68;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82218F68:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// beq cr6,0x82218f8c
	if (ctx.cr6.eq) goto loc_82218F8C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r24,24(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// b 0x82218f90
	goto loc_82218F90;
loc_82218F8C:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_82218F90:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82218fa8
	if (ctx.cr6.eq) goto loc_82218FA8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r23,28(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
loc_82218FA8:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82218fcc
	if (ctx.cr6.eq) goto loc_82218FCC;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221b188
	ctx.lr = 0x82218FC8;
	sub_8221B188(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82218FCC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82219208
	if (!ctx.cr6.gt) goto loc_82219208;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82218FE0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwzx r31,r25,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// beq cr6,0x82219054
	if (ctx.cr6.eq) goto loc_82219054;
	// stw r22,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ac10
	ctx.lr = 0x82219000;
	sub_8221AC10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221aec8
	ctx.lr = 0x82219008;
	sub_8221AEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82219054
	if (ctx.cr6.eq) goto loc_82219054;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82219054
	if (!ctx.cr6.eq) goto loc_82219054;
	// bl 0x8209c0d0
	ctx.lr = 0x82219028;
	sub_8209C0D0(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// ble cr6,0x82219054
	if (!ctx.cr6.gt) goto loc_82219054;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82217088
	ctx.lr = 0x8221904C;
	sub_82217088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82219210
	if (!ctx.cr6.eq) goto loc_82219210;
loc_82219054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ae88
	ctx.lr = 0x8221905C;
	sub_8221AE88(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82219074
	if (ctx.cr6.eq) goto loc_82219074;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82218cd0
	ctx.lr = 0x82219074;
	sub_82218CD0(ctx, base);
loc_82219074:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82219084
	if (!ctx.cr6.eq) goto loc_82219084;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822190e8
	if (ctx.cr6.eq) goto loc_822190E8;
loc_82219084:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822190e4
	if (!ctx.cr6.eq) goto loc_822190E4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822190a0
	if (ctx.cr6.eq) goto loc_822190A0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x822190a4
	goto loc_822190A4;
loc_822190A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_822190A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822190b4
	if (ctx.cr6.eq) goto loc_822190B4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x822190b8
	goto loc_822190B8;
loc_822190B4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_822190B8:
	// cmplw cr6,r21,r26
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x822190d8
	if (ctx.cr6.gt) goto loc_822190D8;
	// blt cr6,0x822190e4
	if (ctx.cr6.lt) goto loc_822190E4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822190d8
	if (ctx.cr6.gt) goto loc_822190D8;
	// blt cr6,0x822190e4
	if (ctx.cr6.lt) goto loc_822190E4;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822190e4
	if (ctx.cr6.lt) goto loc_822190E4;
loc_822190D8:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822184e0
	ctx.lr = 0x822190E4;
	sub_822184E0(ctx, base);
loc_822190E4:
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
loc_822190E8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82219190
	if (ctx.cr6.eq) goto loc_82219190;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82219190
	if (!ctx.cr6.eq) goto loc_82219190;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82218ad8
	ctx.lr = 0x82219104;
	sub_82218AD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82218b00
	ctx.lr = 0x82219110;
	sub_82218B00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221b1a0
	ctx.lr = 0x82219118;
	sub_8221B1A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221914c
	if (ctx.cr6.eq) goto loc_8221914C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221afe8
	ctx.lr = 0x82219128;
	sub_8221AFE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219210
	if (ctx.cr6.eq) goto loc_82219210;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8221914c
	if (ctx.cr6.eq) goto loc_8221914C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221b1e0
	ctx.lr = 0x8221914C;
	sub_8221B1E0(ctx, base);
loc_8221914C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b1b8
	ctx.lr = 0x82219154;
	sub_8221B1B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822191cc
	if (ctx.cr6.eq) goto loc_822191CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221afe8
	ctx.lr = 0x82219164;
	sub_8221AFE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822191b4
	if (!ctx.cr6.eq) goto loc_822191B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221af08
	ctx.lr = 0x82219178;
	sub_8221AF08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b2e8
	ctx.lr = 0x82219184;
	sub_8221B2E8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822191cc
	if (!ctx.cr6.eq) goto loc_822191CC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82219190:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82218fe0
	if (ctx.cr6.lt) goto loc_82218FE0;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x822197e8
	ctx.lr = 0x822191AC;
	sub_822197E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_822191B4:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x822191cc
	if (ctx.cr6.eq) goto loc_822191CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221b1e0
	ctx.lr = 0x822191CC;
	sub_8221B1E0(ctx, base);
loc_822191CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b188
	ctx.lr = 0x822191D4;
	sub_8221B188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82219208
	if (ctx.cr6.eq) goto loc_82219208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221af90
	ctx.lr = 0x822191E4;
	sub_8221AF90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219210
	if (ctx.cr6.eq) goto loc_82219210;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82219208
	if (ctx.cr6.eq) goto loc_82219208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8221b1e0
	ctx.lr = 0x82219208;
	sub_8221B1E0(ctx, base);
loc_82219208:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x822197e8
	ctx.lr = 0x82219210;
	sub_822197E8(ctx, base);
loc_82219210:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82219218"))) PPC_WEAK_FUNC(sub_82219218);
PPC_FUNC_IMPL(__imp__sub_82219218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82219220;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r11,-3196
	ctx.r9.s64 = ctx.r11.s64 + -3196;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822192c0
	if (!ctx.cr6.gt) goto loc_822192C0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8221924C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219270
	if (ctx.cr6.eq) goto loc_82219270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221b0f8
	ctx.lr = 0x82219264;
	sub_8221B0F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82219270;
	sub_82183E40(ctx, base);
loc_82219270:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822192a0
	if (ctx.cr6.eq) goto loc_822192A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221b2f0
	ctx.lr = 0x82219294;
	sub_8221B2F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x822192A0;
	sub_82183E40(ctx, base);
loc_822192A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221924c
	if (ctx.cr6.lt) goto loc_8221924C;
loc_822192C0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822192d4
	if (ctx.cr6.eq) goto loc_822192D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822192D4;
	sub_82183E40(ctx, base);
loc_822192D4:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822192E0"))) PPC_WEAK_FUNC(sub_822192E0);
PPC_FUNC_IMPL(__imp__sub_822192E0) {
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
	// bl 0x82219218
	ctx.lr = 0x82219300;
	sub_82219218(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221931c
	if (ctx.cr6.eq) goto loc_8221931C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82219318;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221931C:
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

__attribute__((alias("__imp__sub_82219334"))) PPC_WEAK_FUNC(sub_82219334);
PPC_FUNC_IMPL(__imp__sub_82219334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219338"))) PPC_WEAK_FUNC(sub_82219338);
PPC_FUNC_IMPL(__imp__sub_82219338) {
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
	ctx.lr = 0x82219350;
	sub_8215BEC8(ctx, base);
	// lbz r11,610(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 610);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x8221b410
	ctx.lr = 0x82219368;
	sub_8221B410(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82174fd8
	ctx.lr = 0x82219370;
	sub_82174FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219384"))) PPC_WEAK_FUNC(sub_82219384);
PPC_FUNC_IMPL(__imp__sub_82219384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219388"))) PPC_WEAK_FUNC(sub_82219388);
PPC_FUNC_IMPL(__imp__sub_82219388) {
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
	// cmplwi cr6,r4,49
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 49, ctx.xer);
	// bgt cr6,0x822195c8
	if (ctx.cr6.gt) goto loc_822195C8;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27708
	ctx.r12.s64 = ctx.r12.s64 + -27708;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-27508(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27508);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27448);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27384(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27384);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27480(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27480);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27416);
	// lwz r17,-27352(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27352);
	// lwz r17,-27320(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27320);
	// lwz r17,-27288(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27288);
	// lwz r17,-27256(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27256);
	// lwz r17,-27224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27224);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x82219494;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82219f58
	ctx.lr = 0x822194A4;
	sub_82219F58(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x822194B0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a008
	ctx.lr = 0x822194C4;
	sub_8221A008(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x822194D0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a100
	ctx.lr = 0x822194E4;
	sub_8221A100(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x822194F0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a218
	ctx.lr = 0x82219504;
	sub_8221A218(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x82219510;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a008
	ctx.lr = 0x82219524;
	sub_8221A008(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x82219530;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a2e8
	ctx.lr = 0x82219544;
	sub_8221A2E8(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x82219550;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a4d8
	ctx.lr = 0x82219564;
	sub_8221A4D8(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x82219570;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a538
	ctx.lr = 0x82219584;
	sub_8221A538(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82080000
	ctx.lr = 0x82219590;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a218
	ctx.lr = 0x822195A4;
	sub_8221A218(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82080000
	ctx.lr = 0x822195B0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195c8
	if (ctx.cr6.eq) goto loc_822195C8;
	// li r5,49
	ctx.r5.s64 = 49;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8221a3d0
	ctx.lr = 0x822195C4;
	sub_8221A3D0(ctx, base);
	// b 0x822195cc
	goto loc_822195CC;
loc_822195C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822195CC:
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

__attribute__((alias("__imp__sub_822195E4"))) PPC_WEAK_FUNC(sub_822195E4);
PPC_FUNC_IMPL(__imp__sub_822195E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822195E8"))) PPC_WEAK_FUNC(sub_822195E8);
PPC_FUNC_IMPL(__imp__sub_822195E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822195F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82219618
	if (ctx.cr6.eq) goto loc_82219618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8221960C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82219618;
	sub_82183E40(ctx, base);
loc_82219618:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82219640
	if (ctx.cr6.eq) goto loc_82219640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82219634;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82219640;
	sub_82183E40(ctx, base);
loc_82219640:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219664
	if (ctx.cr6.eq) goto loc_82219664;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219664:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82219670"))) PPC_WEAK_FUNC(sub_82219670);
PPC_FUNC_IMPL(__imp__sub_82219670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82219678;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r7,r11,-27768
	ctx.r7.s64 = ctx.r11.s64 + -27768;
	// addi r6,r10,24648
	ctx.r6.s64 = ctx.r10.s64 + 24648;
	// addi r5,r9,24648
	ctx.r5.s64 = ctx.r9.s64 + 24648;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r8,24648
	ctx.r4.s64 = ctx.r8.s64 + 24648;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_822196BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822196D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822196e8
	if (!ctx.cr6.eq) goto loc_822196E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x822196bc
	if (ctx.cr6.lt) goto loc_822196BC;
loc_822196E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822196F0"))) PPC_WEAK_FUNC(sub_822196F0);
PPC_FUNC_IMPL(__imp__sub_822196F0) {
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
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// bl 0x8215bec8
	ctx.lr = 0x82219728;
	sub_8215BEC8(ctx, base);
	// lbz r11,610(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 610);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x82183850
	ctx.lr = 0x8221973C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82219754
	if (ctx.cr6.eq) goto loc_82219754;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x82219750;
	sub_82183448(ctx, base);
	// b 0x8221975c
	goto loc_8221975C;
loc_82219754:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8221975C;
	sub_821845A0(ctx, base);
loc_8221975C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221976c
	if (ctx.cr6.eq) goto loc_8221976C;
	// bl 0x8221b9c0
	ctx.lr = 0x82219768;
	sub_8221B9C0(ctx, base);
	// b 0x82219770
	goto loc_82219770;
loc_8221976C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82219770:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82219778;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82219790
	if (ctx.cr6.eq) goto loc_82219790;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8221978C;
	sub_82183448(ctx, base);
	// b 0x82219798
	goto loc_82219798;
loc_82219790:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82219798;
	sub_821845A0(ctx, base);
loc_82219798:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822197a8
	if (ctx.cr6.eq) goto loc_822197A8;
	// bl 0x82174fd8
	ctx.lr = 0x822197A4;
	sub_82174FD8(ctx, base);
	// b 0x822197ac
	goto loc_822197AC;
loc_822197A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822197AC:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209eda0
	ctx.lr = 0x822197BC;
	sub_8209EDA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219670
	ctx.lr = 0x822197C8;
	sub_82219670(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_822197E8"))) PPC_WEAK_FUNC(sub_822197E8);
PPC_FUNC_IMPL(__imp__sub_822197E8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82219824
	if (!ctx.cr6.eq) goto loc_82219824;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82219828
	goto loc_82219828;
loc_82219824:
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_82219828:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8221987c
	if (ctx.cr6.eq) goto loc_8221987C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221985c
	if (ctx.cr6.eq) goto loc_8221985C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221985C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221985C:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209eda0
	ctx.lr = 0x8221986C;
	sub_8209EDA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219670
	ctx.lr = 0x82219878;
	sub_82219670(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_8221987C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822198ec
	if (ctx.cr6.eq) goto loc_822198EC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822198cc
	if (ctx.cr6.eq) goto loc_822198CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822198CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822198CC:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8209eda0
	ctx.lr = 0x822198DC;
	sub_8209EDA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219670
	ctx.lr = 0x822198E8;
	sub_82219670(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_822198EC:
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

__attribute__((alias("__imp__sub_82219904"))) PPC_WEAK_FUNC(sub_82219904);
PPC_FUNC_IMPL(__imp__sub_82219904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219908"))) PPC_WEAK_FUNC(sub_82219908);
PPC_FUNC_IMPL(__imp__sub_82219908) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221ba70
	sub_8221BA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219910"))) PPC_WEAK_FUNC(sub_82219910);
PPC_FUNC_IMPL(__imp__sub_82219910) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221bae8
	sub_8221BAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219918"))) PPC_WEAK_FUNC(sub_82219918);
PPC_FUNC_IMPL(__imp__sub_82219918) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221baf8
	sub_8221BAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219920"))) PPC_WEAK_FUNC(sub_82219920);
PPC_FUNC_IMPL(__imp__sub_82219920) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221bb20
	sub_8221BB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219928"))) PPC_WEAK_FUNC(sub_82219928);
PPC_FUNC_IMPL(__imp__sub_82219928) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221bb50
	sub_8221BB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219930"))) PPC_WEAK_FUNC(sub_82219930);
PPC_FUNC_IMPL(__imp__sub_82219930) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221bb60
	sub_8221BB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219938"))) PPC_WEAK_FUNC(sub_82219938);
PPC_FUNC_IMPL(__imp__sub_82219938) {
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
	ctx.lr = 0x82219950;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82219968
	if (ctx.cr6.eq) goto loc_82219968;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x82219964;
	sub_82183448(ctx, base);
	// b 0x82219970
	goto loc_82219970;
loc_82219968:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82219970;
	sub_821845A0(ctx, base);
loc_82219970:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219984
	if (ctx.cr6.eq) goto loc_82219984;
	// bl 0x8221bae8
	ctx.lr = 0x8221997C;
	sub_8221BAE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82219988
	goto loc_82219988;
loc_82219984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82219988:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822199A4"))) PPC_WEAK_FUNC(sub_822199A4);
PPC_FUNC_IMPL(__imp__sub_822199A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822199A8"))) PPC_WEAK_FUNC(sub_822199A8);
PPC_FUNC_IMPL(__imp__sub_822199A8) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822199e0
	if (ctx.cr6.eq) goto loc_822199E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x822199D4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x822199E0;
	sub_82183E40(ctx, base);
loc_822199E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82219A00"))) PPC_WEAK_FUNC(sub_82219A00);
PPC_FUNC_IMPL(__imp__sub_82219A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221bb70
	sub_8221BB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219A08"))) PPC_WEAK_FUNC(sub_82219A08);
PPC_FUNC_IMPL(__imp__sub_82219A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221bbc0
	sub_8221BBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219A10"))) PPC_WEAK_FUNC(sub_82219A10);
PPC_FUNC_IMPL(__imp__sub_82219A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82174fd8
	sub_82174FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219A18"))) PPC_WEAK_FUNC(sub_82219A18);
PPC_FUNC_IMPL(__imp__sub_82219A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82174fd8
	sub_82174FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82219A20"))) PPC_WEAK_FUNC(sub_82219A20);
PPC_FUNC_IMPL(__imp__sub_82219A20) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221bc10
	ctx.lr = 0x82219A3C;
	sub_8221BC10(ctx, base);
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

__attribute__((alias("__imp__sub_82219A54"))) PPC_WEAK_FUNC(sub_82219A54);
PPC_FUNC_IMPL(__imp__sub_82219A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219A58"))) PPC_WEAK_FUNC(sub_82219A58);
PPC_FUNC_IMPL(__imp__sub_82219A58) {
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
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8221bc10
	ctx.lr = 0x82219A74;
	sub_8221BC10(ctx, base);
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

__attribute__((alias("__imp__sub_82219A8C"))) PPC_WEAK_FUNC(sub_82219A8C);
PPC_FUNC_IMPL(__imp__sub_82219A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219A90"))) PPC_WEAK_FUNC(sub_82219A90);
PPC_FUNC_IMPL(__imp__sub_82219A90) {
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
	ctx.lr = 0x82219AA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82219ac0
	if (ctx.cr6.eq) goto loc_82219AC0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x82219ABC;
	sub_82183448(ctx, base);
	// b 0x82219ac8
	goto loc_82219AC8;
loc_82219AC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82219AC8;
	sub_821845A0(ctx, base);
loc_82219AC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219ad8
	if (ctx.cr6.eq) goto loc_82219AD8;
	// bl 0x82174fd8
	ctx.lr = 0x82219AD4;
	sub_82174FD8(ctx, base);
	// b 0x82219adc
	goto loc_82219ADC;
loc_82219AD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82219ADC:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82219AE4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82219afc
	if (ctx.cr6.eq) goto loc_82219AFC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x82219AF8;
	sub_82183448(ctx, base);
	// b 0x82219b04
	goto loc_82219B04;
loc_82219AFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82219B04;
	sub_821845A0(ctx, base);
loc_82219B04:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219b18
	if (ctx.cr6.eq) goto loc_82219B18;
	// bl 0x82174fd8
	ctx.lr = 0x82219B10;
	sub_82174FD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82219b1c
	goto loc_82219B1C;
loc_82219B18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82219B1C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82219B38"))) PPC_WEAK_FUNC(sub_82219B38);
PPC_FUNC_IMPL(__imp__sub_82219B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82219B40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82219b68
	if (ctx.cr6.eq) goto loc_82219B68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82219B5C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82219B68;
	sub_82183E40(ctx, base);
loc_82219B68:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82219b90
	if (ctx.cr6.eq) goto loc_82219B90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82219B84;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82219B90;
	sub_82183E40(ctx, base);
loc_82219B90:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82219B9C"))) PPC_WEAK_FUNC(sub_82219B9C);
PPC_FUNC_IMPL(__imp__sub_82219B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219BA0"))) PPC_WEAK_FUNC(sub_82219BA0);
PPC_FUNC_IMPL(__imp__sub_82219BA0) {
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
	// bl 0x82217a90
	ctx.lr = 0x82219BC0;
	sub_82217A90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82219bd4
	if (!ctx.cr6.eq) goto loc_82219BD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82219bf4
	goto loc_82219BF4;
loc_82219BD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82217030
	ctx.lr = 0x82219BE0;
	sub_82217030(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x8221a5f0
	ctx.lr = 0x82219BEC;
	sub_8221A5F0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82219BF4:
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

__attribute__((alias("__imp__sub_82219C0C"))) PPC_WEAK_FUNC(sub_82219C0C);
PPC_FUNC_IMPL(__imp__sub_82219C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219C10"))) PPC_WEAK_FUNC(sub_82219C10);
PPC_FUNC_IMPL(__imp__sub_82219C10) {
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
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e820
	ctx.lr = 0x82219C38;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82219c50
	if (!ctx.cr6.eq) goto loc_82219C50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x82219C48;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82219c58
	if (ctx.cr6.eq) goto loc_82219C58;
loc_82219C50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219ba0
	ctx.lr = 0x82219C58;
	sub_82219BA0(ctx, base);
loc_82219C58:
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

__attribute__((alias("__imp__sub_82219C70"))) PPC_WEAK_FUNC(sub_82219C70);
PPC_FUNC_IMPL(__imp__sub_82219C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219C84"))) PPC_WEAK_FUNC(sub_82219C84);
PPC_FUNC_IMPL(__imp__sub_82219C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219C88"))) PPC_WEAK_FUNC(sub_82219C88);
PPC_FUNC_IMPL(__imp__sub_82219C88) {
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
	// bl 0x82217170
	ctx.lr = 0x82219CA4;
	sub_82217170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82219ce4
	if (!ctx.cr6.eq) goto loc_82219CE4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82219cc4
	if (!ctx.cr6.gt) goto loc_82219CC4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82219CC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219ce4
	if (ctx.cr6.eq) goto loc_82219CE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219CE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219CF8"))) PPC_WEAK_FUNC(sub_82219CF8);
PPC_FUNC_IMPL(__imp__sub_82219CF8) {
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
	// bl 0x82183850
	ctx.lr = 0x82219D10;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82219d28
	if (ctx.cr6.eq) goto loc_82219D28;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x82219D24;
	sub_82183448(ctx, base);
	// b 0x82219d30
	goto loc_82219D30;
loc_82219D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82219D30;
	sub_821845A0(ctx, base);
loc_82219D30:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219d68
	if (ctx.cr6.eq) goto loc_82219D68;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3192
	ctx.r9.s64 = ctx.r10.s64 + -3192;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82219D68:
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

__attribute__((alias("__imp__sub_82219D80"))) PPC_WEAK_FUNC(sub_82219D80);
PPC_FUNC_IMPL(__imp__sub_82219D80) {
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
	// bl 0x8221bc60
	ctx.lr = 0x82219DA0;
	sub_8221BC60(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3188
	ctx.r10.s64 = ctx.r11.s64 + -3188;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82219cf8
	ctx.lr = 0x82219DB8;
	sub_82219CF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82219DD8"))) PPC_WEAK_FUNC(sub_82219DD8);
PPC_FUNC_IMPL(__imp__sub_82219DD8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219e0c
	if (ctx.cr6.eq) goto loc_82219E0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,25500
	ctx.r10.s64 = ctx.r11.s64 + 25500;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82183e40
	ctx.lr = 0x82219E0C;
	sub_82183E40(ctx, base);
loc_82219E0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82219cf8
	ctx.lr = 0x82219E24;
	sub_82219CF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219E3C"))) PPC_WEAK_FUNC(sub_82219E3C);
PPC_FUNC_IMPL(__imp__sub_82219E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219E40"))) PPC_WEAK_FUNC(sub_82219E40);
PPC_FUNC_IMPL(__imp__sub_82219E40) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-3188
	ctx.r10.s64 = ctx.r11.s64 + -3188;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82219e88
	if (ctx.cr6.eq) goto loc_82219E88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,25500
	ctx.r10.s64 = ctx.r11.s64 + 25500;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82183e40
	ctx.lr = 0x82219E88;
	sub_82183E40(ctx, base);
loc_82219E88:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8221bc88
	ctx.lr = 0x82219E98;
	sub_8221BC88(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82219eb4
	if (ctx.cr6.eq) goto loc_82219EB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82219EB0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82219EB4:
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

__attribute__((alias("__imp__sub_82219ECC"))) PPC_WEAK_FUNC(sub_82219ECC);
PPC_FUNC_IMPL(__imp__sub_82219ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82219ED0"))) PPC_WEAK_FUNC(sub_82219ED0);
PPC_FUNC_IMPL(__imp__sub_82219ED0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-3164
	ctx.r10.s64 = ctx.r11.s64 + -3164;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82219f14
	if (ctx.cr6.eq) goto loc_82219F14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219F14:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82219f3c
	if (ctx.cr6.eq) goto loc_82219F3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82219F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82219F3C:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82219F58"))) PPC_WEAK_FUNC(sub_82219F58);
PPC_FUNC_IMPL(__imp__sub_82219F58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r5,r6,-3156
	ctx.r5.s64 = ctx.r6.s64 + -3156;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82219FC8"))) PPC_WEAK_FUNC(sub_82219FC8);
PPC_FUNC_IMPL(__imp__sub_82219FC8) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x82219FE4;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8221A004"))) PPC_WEAK_FUNC(sub_8221A004);
PPC_FUNC_IMPL(__imp__sub_8221A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A008"))) PPC_WEAK_FUNC(sub_8221A008);
PPC_FUNC_IMPL(__imp__sub_8221A008) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r10,r6,-3148
	ctx.r10.s64 = ctx.r6.s64 + -3148;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A06C"))) PPC_WEAK_FUNC(sub_8221A06C);
PPC_FUNC_IMPL(__imp__sub_8221A06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A070"))) PPC_WEAK_FUNC(sub_8221A070);
PPC_FUNC_IMPL(__imp__sub_8221A070) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221A08C;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x8221a0b4
	if (!ctx.cr6.eq) goto loc_8221A0B4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8221A0B4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8221a0e4
	if (!ctx.cr6.lt) goto loc_8221A0E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8221A0E4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A100"))) PPC_WEAK_FUNC(sub_8221A100);
PPC_FUNC_IMPL(__imp__sub_8221A100) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r10,r6,-3140
	ctx.r10.s64 = ctx.r6.s64 + -3140;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A164"))) PPC_WEAK_FUNC(sub_8221A164);
PPC_FUNC_IMPL(__imp__sub_8221A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A168"))) PPC_WEAK_FUNC(sub_8221A168);
PPC_FUNC_IMPL(__imp__sub_8221A168) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221A184;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,1328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1328);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8221a1c8
	if (ctx.cr6.eq) goto loc_8221A1C8;
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8221b358
	ctx.lr = 0x8221A1B4;
	sub_8221B358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8221A1C8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bne cr6,0x8221a1e4
	if (!ctx.cr6.eq) goto loc_8221A1E4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8221A1E4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8221a1f8
	if (!ctx.cr6.lt) goto loc_8221A1F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_8221A1F8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A214"))) PPC_WEAK_FUNC(sub_8221A214);
PPC_FUNC_IMPL(__imp__sub_8221A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A218"))) PPC_WEAK_FUNC(sub_8221A218);
PPC_FUNC_IMPL(__imp__sub_8221A218) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r10,r6,-3132
	ctx.r10.s64 = ctx.r6.s64 + -3132;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A27C"))) PPC_WEAK_FUNC(sub_8221A27C);
PPC_FUNC_IMPL(__imp__sub_8221A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A280"))) PPC_WEAK_FUNC(sub_8221A280);
PPC_FUNC_IMPL(__imp__sub_8221A280) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221A29C;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bgt cr6,0x8221a2c4
	if (ctx.cr6.gt) goto loc_8221A2C4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8221A2C4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A2E4"))) PPC_WEAK_FUNC(sub_8221A2E4);
PPC_FUNC_IMPL(__imp__sub_8221A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A2E8"))) PPC_WEAK_FUNC(sub_8221A2E8);
PPC_FUNC_IMPL(__imp__sub_8221A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r10,r6,-3124
	ctx.r10.s64 = ctx.r6.s64 + -3124;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A34C"))) PPC_WEAK_FUNC(sub_8221A34C);
PPC_FUNC_IMPL(__imp__sub_8221A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A350"))) PPC_WEAK_FUNC(sub_8221A350);
PPC_FUNC_IMPL(__imp__sub_8221A350) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221A36C;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8221a3a0
	if (!ctx.cr6.eq) goto loc_8221A3A0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82218850
	ctx.lr = 0x8221A390;
	sub_82218850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221a3a0
	if (ctx.cr6.eq) goto loc_8221A3A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8221A3A0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221a3bc
	if (ctx.cr6.eq) goto loc_8221A3BC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8221A3BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A3D0"))) PPC_WEAK_FUNC(sub_8221A3D0);
PPC_FUNC_IMPL(__imp__sub_8221A3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8221A3D8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-3164
	ctx.r10.s64 = ctx.r11.s64 + -3164;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f0,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r6,-3116
	ctx.r3.s64 = ctx.r6.s64 + -3116;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r28,20(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82219928
	ctx.lr = 0x8221A45C;
	sub_82219928(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82219930
	ctx.lr = 0x8221A46C;
	sub_82219930(ctx, base);
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// ble cr6,0x8221a4a4
	if (!ctx.cr6.gt) goto loc_8221A4A4;
	// bl 0x8218fba8
	ctx.lr = 0x8221A494;
	sub_8218FBA8(ctx, base);
	// divwu r11,r3,r29
	ctx.r11.u32 = ctx.r3.u32 / ctx.r29.u32;
	// twllei r29,0
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// subf r30,r10,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r10.s64;
loc_8221A4A4:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8221A4D8"))) PPC_WEAK_FUNC(sub_8221A4D8);
PPC_FUNC_IMPL(__imp__sub_8221A4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r10,r6,-3108
	ctx.r10.s64 = ctx.r6.s64 + -3108;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A538"))) PPC_WEAK_FUNC(sub_8221A538);
PPC_FUNC_IMPL(__imp__sub_8221A538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-3164
	ctx.r9.s64 = ctx.r10.s64 + -3164;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r10,r6,-3100
	ctx.r10.s64 = ctx.r6.s64 + -3100;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A598"))) PPC_WEAK_FUNC(sub_8221A598);
PPC_FUNC_IMPL(__imp__sub_8221A598) {
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
	// bl 0x82219ed0
	ctx.lr = 0x8221A5B8;
	sub_82219ED0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a5d4
	if (ctx.cr6.eq) goto loc_8221A5D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A5D0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A5D4:
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

__attribute__((alias("__imp__sub_8221A5EC"))) PPC_WEAK_FUNC(sub_8221A5EC);
PPC_FUNC_IMPL(__imp__sub_8221A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A5F0"))) PPC_WEAK_FUNC(sub_8221A5F0);
PPC_FUNC_IMPL(__imp__sub_8221A5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r8,r9,-7560
	ctx.r8.s64 = ctx.r9.s64 + -7560;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221A63C"))) PPC_WEAK_FUNC(sub_8221A63C);
PPC_FUNC_IMPL(__imp__sub_8221A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A640"))) PPC_WEAK_FUNC(sub_8221A640);
PPC_FUNC_IMPL(__imp__sub_8221A640) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221a6b8
	if (ctx.cr6.eq) goto loc_8221A6B8;
	// bl 0x82217360
	ctx.lr = 0x8221A660;
	sub_82217360(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r31,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lfs f0,2136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r8,9612
	ctx.r7.s64 = ctx.r8.s64 + 9612;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,8272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// srawi r4,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 9;
	// rlwinm r11,r4,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1C;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
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
loc_8221A6B8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8221A6D0"))) PPC_WEAK_FUNC(sub_8221A6D0);
PPC_FUNC_IMPL(__imp__sub_8221A6D0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// srawi r10,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 9;
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// b 0x8221a640
	sub_8221A640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221A6E4"))) PPC_WEAK_FUNC(sub_8221A6E4);
PPC_FUNC_IMPL(__imp__sub_8221A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221A6E8"))) PPC_WEAK_FUNC(sub_8221A6E8);
PPC_FUNC_IMPL(__imp__sub_8221A6E8) {
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
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8221a724
	if (ctx.cr6.eq) goto loc_8221A724;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8221a764
	if (!ctx.cr6.eq) goto loc_8221A764;
loc_8221A724:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221a76c
	if (!ctx.cr6.eq) goto loc_8221A76C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lfs f0,11084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11084);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221a760
	if (!ctx.cr6.eq) goto loc_8221A760;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8221A760:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8221A764:
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// b 0x8221a778
	goto loc_8221A778;
loc_8221A76C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8221A778:
	// clrlwi r3,r9,29
	ctx.r3.u64 = ctx.r9.u32 & 0x7;
	// bl 0x8221a640
	ctx.lr = 0x8221A780;
	sub_8221A640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8221b390
	ctx.lr = 0x8221A78C;
	sub_8221B390(ctx, base);
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

__attribute__((alias("__imp__sub_8221A7A0"))) PPC_WEAK_FUNC(sub_8221A7A0);
PPC_FUNC_IMPL(__imp__sub_8221A7A0) {
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
	// addi r10,r11,-3156
	ctx.r10.s64 = ctx.r11.s64 + -3156;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221A7CC;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a7e8
	if (ctx.cr6.eq) goto loc_8221A7E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A7E4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A7E8:
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

__attribute__((alias("__imp__sub_8221A800"))) PPC_WEAK_FUNC(sub_8221A800);
PPC_FUNC_IMPL(__imp__sub_8221A800) {
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
	// addi r10,r11,-3148
	ctx.r10.s64 = ctx.r11.s64 + -3148;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221A82C;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a848
	if (ctx.cr6.eq) goto loc_8221A848;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A844;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A848:
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

__attribute__((alias("__imp__sub_8221A860"))) PPC_WEAK_FUNC(sub_8221A860);
PPC_FUNC_IMPL(__imp__sub_8221A860) {
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
	// addi r10,r11,-3140
	ctx.r10.s64 = ctx.r11.s64 + -3140;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221A88C;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a8a8
	if (ctx.cr6.eq) goto loc_8221A8A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A8A4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A8A8:
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

__attribute__((alias("__imp__sub_8221A8C0"))) PPC_WEAK_FUNC(sub_8221A8C0);
PPC_FUNC_IMPL(__imp__sub_8221A8C0) {
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
	// addi r10,r11,-3132
	ctx.r10.s64 = ctx.r11.s64 + -3132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221A8EC;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a908
	if (ctx.cr6.eq) goto loc_8221A908;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A904;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A908:
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

__attribute__((alias("__imp__sub_8221A920"))) PPC_WEAK_FUNC(sub_8221A920);
PPC_FUNC_IMPL(__imp__sub_8221A920) {
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
	// addi r10,r11,-3124
	ctx.r10.s64 = ctx.r11.s64 + -3124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221A94C;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a968
	if (ctx.cr6.eq) goto loc_8221A968;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A964;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A968:
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

__attribute__((alias("__imp__sub_8221A980"))) PPC_WEAK_FUNC(sub_8221A980);
PPC_FUNC_IMPL(__imp__sub_8221A980) {
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
	// addi r10,r11,-3116
	ctx.r10.s64 = ctx.r11.s64 + -3116;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221A9AC;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221a9c8
	if (ctx.cr6.eq) goto loc_8221A9C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221A9C4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221A9C8:
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

__attribute__((alias("__imp__sub_8221A9E0"))) PPC_WEAK_FUNC(sub_8221A9E0);
PPC_FUNC_IMPL(__imp__sub_8221A9E0) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221A9FC;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x8221aa68
	if (ctx.cr6.lt) goto loc_8221AA68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,34
	ctx.r5.s64 = 34;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bne cr6,0x8221aa40
	if (!ctx.cr6.eq) goto loc_8221AA40;
	// li r5,35
	ctx.r5.s64 = 35;
loc_8221AA40:
	// bl 0x8221b358
	ctx.lr = 0x8221AA44;
	sub_8221B358(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8221AA68:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lfs f0,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AA90"))) PPC_WEAK_FUNC(sub_8221AA90);
PPC_FUNC_IMPL(__imp__sub_8221AA90) {
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
	// addi r10,r11,-3108
	ctx.r10.s64 = ctx.r11.s64 + -3108;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221AABC;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221aad8
	if (ctx.cr6.eq) goto loc_8221AAD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221AAD4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221AAD8:
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

__attribute__((alias("__imp__sub_8221AAF0"))) PPC_WEAK_FUNC(sub_8221AAF0);
PPC_FUNC_IMPL(__imp__sub_8221AAF0) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221AB0C;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 144);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r4,r8,29
	ctx.r4.u64 = ctx.r8.u32 & 0x7;
	// bl 0x8221a6e8
	ctx.lr = 0x8221AB34;
	sub_8221A6E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AB48"))) PPC_WEAK_FUNC(sub_8221AB48);
PPC_FUNC_IMPL(__imp__sub_8221AB48) {
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
	// addi r10,r11,-3100
	ctx.r10.s64 = ctx.r11.s64 + -3100;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82219ed0
	ctx.lr = 0x8221AB74;
	sub_82219ED0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221ab90
	if (ctx.cr6.eq) goto loc_8221AB90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221AB8C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221AB90:
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

__attribute__((alias("__imp__sub_8221ABA8"))) PPC_WEAK_FUNC(sub_8221ABA8);
PPC_FUNC_IMPL(__imp__sub_8221ABA8) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82174fd8
	ctx.lr = 0x8221ABC4;
	sub_82174FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 144);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-2048
	ctx.r8.s64 = ctx.r8.s64 + -2048;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// srawi r6,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 9;
	// clrlwi r4,r6,29
	ctx.r4.u64 = ctx.r6.u32 & 0x7;
	// bl 0x8221a6e8
	ctx.lr = 0x8221ABF8;
	sub_8221A6E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AC0C"))) PPC_WEAK_FUNC(sub_8221AC0C);
PPC_FUNC_IMPL(__imp__sub_8221AC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221AC10"))) PPC_WEAK_FUNC(sub_8221AC10);
PPC_FUNC_IMPL(__imp__sub_8221AC10) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AC30"))) PPC_WEAK_FUNC(sub_8221AC30);
PPC_FUNC_IMPL(__imp__sub_8221AC30) {
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
	// bl 0x8221bfb0
	ctx.lr = 0x8221AC4C;
	sub_8221BFB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8221bce8
	ctx.lr = 0x8221AC5C;
	sub_8221BCE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AC70"))) PPC_WEAK_FUNC(sub_8221AC70);
PPC_FUNC_IMPL(__imp__sub_8221AC70) {
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
	// bl 0x8221c040
	ctx.lr = 0x8221AC8C;
	sub_8221C040(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8221bcf8
	ctx.lr = 0x8221AC9C;
	sub_8221BCF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ACB0"))) PPC_WEAK_FUNC(sub_8221ACB0);
PPC_FUNC_IMPL(__imp__sub_8221ACB0) {
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
	// bl 0x8221c0d0
	ctx.lr = 0x8221ACCC;
	sub_8221C0D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8221bd08
	ctx.lr = 0x8221ACDC;
	sub_8221BD08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221ACF0"))) PPC_WEAK_FUNC(sub_8221ACF0);
PPC_FUNC_IMPL(__imp__sub_8221ACF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221c328
	sub_8221C328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221ACF8"))) PPC_WEAK_FUNC(sub_8221ACF8);
PPC_FUNC_IMPL(__imp__sub_8221ACF8) {
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
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8221bd18
	ctx.lr = 0x8221AD20;
	sub_8221BD18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8221AD28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bd88
	ctx.lr = 0x8221AD30;
	sub_8221BD88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bdd0
	ctx.lr = 0x8221AD3C;
	sub_8221BDD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221ad54
	if (ctx.cr6.eq) goto loc_8221AD54;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bda8
	ctx.lr = 0x8221AD54;
	sub_8221BDA8(ctx, base);
loc_8221AD54:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221adcc
	if (ctx.cr6.eq) goto loc_8221ADCC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bde0
	ctx.lr = 0x8221AD68;
	sub_8221BDE0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x8221adc0
	if (ctx.cr6.eq) goto loc_8221ADC0;
loc_8221AD74:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221add4
	if (ctx.cr6.eq) goto loc_8221ADD4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8221add4
	if (ctx.cr6.gt) goto loc_8221ADD4;
	// bne cr6,0x8221ada8
	if (!ctx.cr6.eq) goto loc_8221ADA8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221add4
	if (ctx.cr6.eq) goto loc_8221ADD4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221add4
	if (ctx.cr6.lt) goto loc_8221ADD4;
loc_8221ADA8:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bde0
	ctx.lr = 0x8221ADB4;
	sub_8221BDE0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8221ad74
	if (!ctx.cr6.eq) goto loc_8221AD74;
loc_8221ADC0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bda8
	ctx.lr = 0x8221ADC8;
	sub_8221BDA8(ctx, base);
	// b 0x8221ad28
	goto loc_8221AD28;
loc_8221ADCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221add8
	goto loc_8221ADD8;
loc_8221ADD4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221ADD8:
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

__attribute__((alias("__imp__sub_8221ADF0"))) PPC_WEAK_FUNC(sub_8221ADF0);
PPC_FUNC_IMPL(__imp__sub_8221ADF0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8221AE10:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bd98
	ctx.lr = 0x8221AE18;
	sub_8221BD98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bdd8
	ctx.lr = 0x8221AE24;
	sub_8221BDD8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8221ae38
	if (ctx.cr6.eq) goto loc_8221AE38;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bda8
	ctx.lr = 0x8221AE38;
	sub_8221BDA8(ctx, base);
loc_8221AE38:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221ae64
	if (ctx.cr6.eq) goto loc_8221AE64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bde0
	ctx.lr = 0x8221AE4C;
	sub_8221BDE0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8221ae6c
	if (!ctx.cr6.eq) goto loc_8221AE6C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bda8
	ctx.lr = 0x8221AE60;
	sub_8221BDA8(ctx, base);
	// b 0x8221ae10
	goto loc_8221AE10;
loc_8221AE64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221ae70
	goto loc_8221AE70;
loc_8221AE6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221AE70:
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

__attribute__((alias("__imp__sub_8221AE88"))) PPC_WEAK_FUNC(sub_8221AE88);
PPC_FUNC_IMPL(__imp__sub_8221AE88) {
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
	// bl 0x8221bdb8
	ctx.lr = 0x8221AEA4;
	sub_8221BDB8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bda8
	ctx.lr = 0x8221AEAC;
	sub_8221BDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221acf8
	ctx.lr = 0x8221AEB4;
	sub_8221ACF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AEC8"))) PPC_WEAK_FUNC(sub_8221AEC8);
PPC_FUNC_IMPL(__imp__sub_8221AEC8) {
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
	// bl 0x8221bdb8
	ctx.lr = 0x8221AEE4;
	sub_8221BDB8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bda8
	ctx.lr = 0x8221AEEC;
	sub_8221BDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221adf0
	ctx.lr = 0x8221AEF4;
	sub_8221ADF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AF08"))) PPC_WEAK_FUNC(sub_8221AF08);
PPC_FUNC_IMPL(__imp__sub_8221AF08) {
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
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221af78
	if (ctx.cr6.eq) goto loc_8221AF78;
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8221af78
	if (ctx.cr6.eq) goto loc_8221AF78;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8221bd30
	ctx.lr = 0x8221AF3C;
	sub_8221BD30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8221af60
	if (ctx.cr6.eq) goto loc_8221AF60;
	// bl 0x8221acf8
	ctx.lr = 0x8221AF4C;
	sub_8221ACF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8221AF60:
	// bl 0x8221adf0
	ctx.lr = 0x8221AF64;
	sub_8221ADF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8221AF78:
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

__attribute__((alias("__imp__sub_8221AF90"))) PPC_WEAK_FUNC(sub_8221AF90);
PPC_FUNC_IMPL(__imp__sub_8221AF90) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221afa8
	if (ctx.cr6.eq) goto loc_8221AFA8;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8221afb0
	goto loc_8221AFB0;
loc_8221AFA8:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8221AFB0:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221afd0
	if (ctx.cr6.eq) goto loc_8221AFD0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8221afd0
	if (ctx.cr6.eq) goto loc_8221AFD0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// b 0x8221bf10
	sub_8221BF10(ctx, base);
	return;
loc_8221AFD0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221AFE4"))) PPC_WEAK_FUNC(sub_8221AFE4);
PPC_FUNC_IMPL(__imp__sub_8221AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221AFE8"))) PPC_WEAK_FUNC(sub_8221AFE8);
PPC_FUNC_IMPL(__imp__sub_8221AFE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221b014
	if (ctx.cr6.eq) goto loc_8221B014;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8221b014
	if (ctx.cr6.eq) goto loc_8221B014;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// b 0x8221bf50
	sub_8221BF50(ctx, base);
	return;
loc_8221B014:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B028"))) PPC_WEAK_FUNC(sub_8221B028);
PPC_FUNC_IMPL(__imp__sub_8221B028) {
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
	ctx.lr = 0x8221B048;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221b060
	if (ctx.cr6.eq) goto loc_8221B060;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8221B05C;
	sub_82183448(ctx, base);
	// b 0x8221b068
	goto loc_8221B068;
loc_8221B060:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8221B068;
	sub_821845A0(ctx, base);
loc_8221B068:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b07c
	if (ctx.cr6.eq) goto loc_8221B07C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221bde8
	ctx.lr = 0x8221B078;
	sub_8221BDE8(ctx, base);
	// b 0x8221b080
	goto loc_8221B080;
loc_8221B07C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B080:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x8221B088;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221b0a0
	if (ctx.cr6.eq) goto loc_8221B0A0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x8221B09C;
	sub_82183448(ctx, base);
	// b 0x8221b0a8
	goto loc_8221B0A8;
loc_8221B0A0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8221B0A8;
	sub_821845A0(ctx, base);
loc_8221B0A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b0b8
	if (ctx.cr6.eq) goto loc_8221B0B8;
	// bl 0x820dca68
	ctx.lr = 0x8221B0B4;
	sub_820DCA68(ctx, base);
	// b 0x8221b0bc
	goto loc_8221B0BC;
loc_8221B0B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B0BC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221B0F8"))) PPC_WEAK_FUNC(sub_8221B0F8);
PPC_FUNC_IMPL(__imp__sub_8221B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221B100;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221b128
	if (ctx.cr6.eq) goto loc_8221B128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221bea8
	ctx.lr = 0x8221B11C;
	sub_8221BEA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221B128;
	sub_82183E40(ctx, base);
loc_8221B128:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221b150
	if (ctx.cr6.eq) goto loc_8221B150;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8221B144;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221B150;
	sub_82183E40(ctx, base);
loc_8221B150:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221B15C"))) PPC_WEAK_FUNC(sub_8221B15C);
PPC_FUNC_IMPL(__imp__sub_8221B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B160"))) PPC_WEAK_FUNC(sub_8221B160);
PPC_FUNC_IMPL(__imp__sub_8221B160) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8221c560
	sub_8221C560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B168"))) PPC_WEAK_FUNC(sub_8221B168);
PPC_FUNC_IMPL(__imp__sub_8221B168) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221cb10
	sub_8221CB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B170"))) PPC_WEAK_FUNC(sub_8221B170);
PPC_FUNC_IMPL(__imp__sub_8221B170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B188"))) PPC_WEAK_FUNC(sub_8221B188);
PPC_FUNC_IMPL(__imp__sub_8221B188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B19C"))) PPC_WEAK_FUNC(sub_8221B19C);
PPC_FUNC_IMPL(__imp__sub_8221B19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B1A0"))) PPC_WEAK_FUNC(sub_8221B1A0);
PPC_FUNC_IMPL(__imp__sub_8221B1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B1B8"))) PPC_WEAK_FUNC(sub_8221B1B8);
PPC_FUNC_IMPL(__imp__sub_8221B1B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B1D0"))) PPC_WEAK_FUNC(sub_8221B1D0);
PPC_FUNC_IMPL(__imp__sub_8221B1D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221c6a0
	sub_8221C6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B1D8"))) PPC_WEAK_FUNC(sub_8221B1D8);
PPC_FUNC_IMPL(__imp__sub_8221B1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221c6b0
	sub_8221C6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B1E0"))) PPC_WEAK_FUNC(sub_8221B1E0);
PPC_FUNC_IMPL(__imp__sub_8221B1E0) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lhz r4,126(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8221c3c8
	ctx.lr = 0x8221B204;
	sub_8221C3C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b218
	if (ctx.cr6.eq) goto loc_8221B218;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221c668
	ctx.lr = 0x8221B218;
	sub_8221C668(ctx, base);
loc_8221B218:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B22C"))) PPC_WEAK_FUNC(sub_8221B22C);
PPC_FUNC_IMPL(__imp__sub_8221B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B230"))) PPC_WEAK_FUNC(sub_8221B230);
PPC_FUNC_IMPL(__imp__sub_8221B230) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183850
	ctx.lr = 0x8221B250;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221b268
	if (ctx.cr6.eq) goto loc_8221B268;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8221B264;
	sub_82183448(ctx, base);
	// b 0x8221b270
	goto loc_8221B270;
loc_8221B268:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8221B270;
	sub_821845A0(ctx, base);
loc_8221B270:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b284
	if (ctx.cr6.eq) goto loc_8221B284;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221c740
	ctx.lr = 0x8221B280;
	sub_8221C740(ctx, base);
	// b 0x8221b288
	goto loc_8221B288;
loc_8221B284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B288:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x8221B290;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221b2a8
	if (ctx.cr6.eq) goto loc_8221B2A8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8221B2A4;
	sub_82183448(ctx, base);
	// b 0x8221b2b0
	goto loc_8221B2B0;
loc_8221B2A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8221B2B0;
	sub_821845A0(ctx, base);
loc_8221B2B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221b2c4
	if (ctx.cr6.eq) goto loc_8221B2C4;
	// bl 0x82174fd8
	ctx.lr = 0x8221B2BC;
	sub_82174FD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221b2c8
	goto loc_8221B2C8;
loc_8221B2C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221B2C8:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221B2E8"))) PPC_WEAK_FUNC(sub_8221B2E8);
PPC_FUNC_IMPL(__imp__sub_8221B2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221c680
	sub_8221C680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B2F0"))) PPC_WEAK_FUNC(sub_8221B2F0);
PPC_FUNC_IMPL(__imp__sub_8221B2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221B2F8;
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
	// beq cr6,0x8221b320
	if (ctx.cr6.eq) goto loc_8221B320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221c9c0
	ctx.lr = 0x8221B314;
	sub_8221C9C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221B320;
	sub_82183E40(ctx, base);
loc_8221B320:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221b348
	if (ctx.cr6.eq) goto loc_8221B348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8221B33C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221B348;
	sub_82183E40(ctx, base);
loc_8221B348:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221B354"))) PPC_WEAK_FUNC(sub_8221B354);
PPC_FUNC_IMPL(__imp__sub_8221B354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B358"))) PPC_WEAK_FUNC(sub_8221B358);
PPC_FUNC_IMPL(__imp__sub_8221B358) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221b448
	ctx.lr = 0x8221B378;
	sub_8221B448(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B390"))) PPC_WEAK_FUNC(sub_8221B390);
PPC_FUNC_IMPL(__imp__sub_8221B390) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8221b404
	if (ctx.cr6.gt) goto loc_8221B404;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221b3cc
	if (ctx.cr6.eq) goto loc_8221B3CC;
	// bdz 0x8221b3c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B3C4;
	// bdz 0x8221b3fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B3FC;
	// bdz 0x8221b3d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B3D4;
	// bdz 0x8221b3f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B3F4;
	// bdz 0x8221b3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B3DC;
	// bdz 0x8221b3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B3E4;
	// b 0x8221b3ec
	goto loc_8221B3EC;
loc_8221B3C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3D4:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3DC:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3E4:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3EC:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3F4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B3FC:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8221b408
	goto loc_8221B408;
loc_8221B404:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8221B408:
	// b 0x820c3610
	sub_820C3610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221B40C"))) PPC_WEAK_FUNC(sub_8221B40C);
PPC_FUNC_IMPL(__imp__sub_8221B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B410"))) PPC_WEAK_FUNC(sub_8221B410);
PPC_FUNC_IMPL(__imp__sub_8221B410) {
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
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B444"))) PPC_WEAK_FUNC(sub_8221B444);
PPC_FUNC_IMPL(__imp__sub_8221B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B448"))) PPC_WEAK_FUNC(sub_8221B448);
PPC_FUNC_IMPL(__imp__sub_8221B448) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x8221b654
	if (ctx.cr6.gt) {
		// ERROR 8221B654
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19348
	ctx.r12.s64 = ctx.r12.s64 + -19348;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8221B46C"))) PPC_WEAK_FUNC(sub_8221B46C);
PPC_FUNC_IMPL(__imp__sub_8221B46C) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-19208(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19208);
	// lwz r17,-19196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19196);
	// lwz r17,-19208(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19208);
	// lwz r17,-19196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19196);
	// lwz r17,-19208(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19208);
	// lwz r17,-19196(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19196);
	// lwz r17,-18864(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18864);
	// lwz r17,-19068(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19068);
	// lwz r17,-18864(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18864);
	// lwz r17,-19068(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19068);
	// lwz r17,-18864(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18864);
	// lwz r17,-19068(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19068);
	// lwz r17,-19184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19184);
	// lwz r17,-19172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19172);
	// lwz r17,-19184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19184);
	// lwz r17,-19172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19172);
	// lwz r17,-19184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19184);
	// lwz r17,-19172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19172);
	// lwz r17,-19160(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19160);
	// lwz r17,-19148(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19148);
	// lwz r17,-19160(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19160);
	// lwz r17,-19148(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19148);
	// lwz r17,-19160(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19160);
	// lwz r17,-19148(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19148);
	// lwz r17,-19136(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19136);
	// lwz r17,-19056(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19056);
	// lwz r17,-19044(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19044);
	// lwz r17,-19032(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19032);
	// lwz r17,-19020(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19020);
	// lwz r17,-19008(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19008);
	// lwz r17,-18996(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18996);
	// lwz r17,-18888(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18888);
	// lwz r17,-18876(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18876);
	// lwz r17,-19068(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19068);
	// lwz r17,-18864(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18864);
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B504"))) PPC_WEAK_FUNC(sub_8221B504);
PPC_FUNC_IMPL(__imp__sub_8221B504) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B510"))) PPC_WEAK_FUNC(sub_8221B510);
PPC_FUNC_IMPL(__imp__sub_8221B510) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,4112
	ctx.r4.u64 = ctx.r4.u64 | 4112;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B51C"))) PPC_WEAK_FUNC(sub_8221B51C);
PPC_FUNC_IMPL(__imp__sub_8221B51C) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,4224
	ctx.r4.u64 = ctx.r4.u64 | 4224;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B528"))) PPC_WEAK_FUNC(sub_8221B528);
PPC_FUNC_IMPL(__imp__sub_8221B528) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,4128
	ctx.r4.u64 = ctx.r4.u64 | 4128;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B534"))) PPC_WEAK_FUNC(sub_8221B534);
PPC_FUNC_IMPL(__imp__sub_8221B534) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,4160
	ctx.r4.u64 = ctx.r4.u64 | 4160;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B540"))) PPC_WEAK_FUNC(sub_8221B540);
PPC_FUNC_IMPL(__imp__sub_8221B540) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r4,r4,2048
	ctx.r4.u64 = ctx.r4.u64 | 2048;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221b654
	if (ctx.cr6.gt) {
		// ERROR 8221B654
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221b4f8
	if (ctx.cr6.eq) {
		// ERROR 8221B4F8
		return;
	}
	// bdz 0x8221b584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B584;
	// bdz 0x8221b504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8221B504;
	// b 0x8221b650
	sub_8221B650(ctx, base);
	return;
loc_8221B584:
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
    loc_8221B504:
        ;
}

__attribute__((alias("__imp__sub_8221B590"))) PPC_WEAK_FUNC(sub_8221B590);
PPC_FUNC_IMPL(__imp__sub_8221B590) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,2112
	ctx.r4.u64 = ctx.r4.u64 | 2112;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B59C"))) PPC_WEAK_FUNC(sub_8221B59C);
PPC_FUNC_IMPL(__imp__sub_8221B59C) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,2080
	ctx.r4.u64 = ctx.r4.u64 | 2080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B5A8"))) PPC_WEAK_FUNC(sub_8221B5A8);
PPC_FUNC_IMPL(__imp__sub_8221B5A8) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,2176
	ctx.r4.u64 = ctx.r4.u64 | 2176;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B5B4"))) PPC_WEAK_FUNC(sub_8221B5B4);
PPC_FUNC_IMPL(__imp__sub_8221B5B4) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,2064
	ctx.r4.u64 = ctx.r4.u64 | 2064;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B5C0"))) PPC_WEAK_FUNC(sub_8221B5C0);
PPC_FUNC_IMPL(__imp__sub_8221B5C0) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,4096
	ctx.r4.u64 = ctx.r4.u64 | 4096;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B5CC"))) PPC_WEAK_FUNC(sub_8221B5CC);
PPC_FUNC_IMPL(__imp__sub_8221B5CC) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221b654
	if (ctx.cr6.gt) {
		// ERROR 8221B654
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221b614
	// bdzf 4*cr6+eq,0x8221b620
	// bne cr6,0x8221b62c
	if (!ctx.cr6.eq) goto loc_8221B62C;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8221B614:
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8221B620:
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8221B62C:
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B638"))) PPC_WEAK_FUNC(sub_8221B638);
PPC_FUNC_IMPL(__imp__sub_8221B638) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,1024
	ctx.r4.u64 = ctx.r4.u64 | 1024;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B644"))) PPC_WEAK_FUNC(sub_8221B644);
PPC_FUNC_IMPL(__imp__sub_8221B644) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B650"))) PPC_WEAK_FUNC(sub_8221B650);
PPC_FUNC_IMPL(__imp__sub_8221B650) {
	PPC_FUNC_PROLOGUE();
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B65C"))) PPC_WEAK_FUNC(sub_8221B65C);
PPC_FUNC_IMPL(__imp__sub_8221B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B660"))) PPC_WEAK_FUNC(sub_8221B660);
PPC_FUNC_IMPL(__imp__sub_8221B660) {
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
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8221b834
	if (ctx.cr6.gt) goto loc_8221B834;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18792
	ctx.r12.s64 = ctx.r12.s64 + -18792;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-18732(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18732);
	// lwz r17,-18724(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18724);
	// lwz r17,-18716(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18716);
	// lwz r17,-18384(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18384);
	// lwz r17,-18392(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18392);
	// lwz r17,-18708(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18708);
	// lwz r17,-18444(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18444);
	// lwz r17,-18700(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18700);
	// lwz r17,-18716(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18716);
	// lwz r17,-18708(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18708);
	// lwz r17,-18436(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18436);
	// lwz r17,-18580(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18580);
	// lwz r17,-18540(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18540);
	// lwz r17,-18692(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18692);
	// lwz r17,-18652(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18652);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8221b834
	goto loc_8221B834;
loc_8221B6DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8221b834
	goto loc_8221B834;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8221b834
	goto loc_8221B834;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8221b834
	goto loc_8221B834;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8221b834
	goto loc_8221B834;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x8221b834
	goto loc_8221B834;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,14563
	ctx.r7.s64 = 954400768;
	// addi r6,r8,29344
	ctx.r6.s64 = ctx.r8.s64 + 29344;
	// ori r5,r7,36409
	ctx.r5.u64 = ctx.r7.u64 | 36409;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r4,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r4.u8);
	// lbzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// mulhw r8,r3,r5
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32)) >> 32;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r7,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r7.s64;
	// b 0x8221b834
	goto loc_8221B834;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r5,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x6;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x8221b834
	goto loc_8221B834;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,26214
	ctx.r7.s64 = 1717960704;
	// addi r6,r8,29344
	ctx.r6.s64 = ctx.r8.s64 + 29344;
	// ori r5,r7,26215
	ctx.r5.u64 = ctx.r7.u64 | 26215;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r3,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r3.u8);
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// mulhw r8,r11,r5
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32)) >> 32;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221b834
	if (ctx.cr6.gt) goto loc_8221B834;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221b6dc
	// bdzf 4*cr6+eq,0x8221b830
	// bne cr6,0x8221b828
	if (!ctx.cr6.eq) goto loc_8221B828;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8221b834
	goto loc_8221B834;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221b830
	if (ctx.cr6.lt) goto loc_8221B830;
	// bne cr6,0x8221b834
	if (!ctx.cr6.eq) goto loc_8221B834;
loc_8221B828:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8221b834
	goto loc_8221B834;
loc_8221B830:
	// li r4,3
	ctx.r4.s64 = 3;
loc_8221B834:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x820c3610
	ctx.lr = 0x8221B83C;
	sub_820C3610(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B850"))) PPC_WEAK_FUNC(sub_8221B850);
PPC_FUNC_IMPL(__imp__sub_8221B850) {
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
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8221b9a8
	if (ctx.cr6.gt) goto loc_8221B9A8;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18300
	ctx.r12.s64 = ctx.r12.s64 + -18300;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-18256(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18256);
	// lwz r17,-18248(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18248);
	// lwz r17,-18240(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18240);
	// lwz r17,-18232(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18232);
	// lwz r17,-18224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18224);
	// lwz r17,-18008(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18008);
	// lwz r17,-18008(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18008);
	// lwz r17,-18008(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18008);
	// lwz r17,-18008(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18008);
	// lwz r17,-18184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18184);
	// lwz r17,-18112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18112);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8221b9a0
	goto loc_8221B9A0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8221b9a0
	goto loc_8221B9A0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8221b9a0
	goto loc_8221B9A0;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8221b9a0
	goto loc_8221B9A0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x8221b9a0
	goto loc_8221B9A0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,21845
	ctx.r7.s64 = 1431633920;
	// addi r6,r8,29344
	ctx.r6.s64 = ctx.r8.s64 + 29344;
	// ori r5,r7,21846
	ctx.r5.u64 = ctx.r7.u64 | 21846;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r4,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r4.u8);
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulhw r11,r11,r5
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// b 0x8221b9a0
	goto loc_8221B9A0;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r8,29344
	ctx.r6.s64 = ctx.r8.s64 + 29344;
	// lis r7,21845
	ctx.r7.s64 = 1431633920;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r5,r7,21846
	ctx.r5.u64 = ctx.r7.u64 | 21846;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r8,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r8.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mulhw r11,r4,r5
	ctx.r11.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
loc_8221B9A0:
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x820c35e0
	ctx.lr = 0x8221B9A8;
	sub_820C35E0(ctx, base);
loc_8221B9A8:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B9BC"))) PPC_WEAK_FUNC(sub_8221B9BC);
PPC_FUNC_IMPL(__imp__sub_8221B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B9C0"))) PPC_WEAK_FUNC(sub_8221B9C0);
PPC_FUNC_IMPL(__imp__sub_8221B9C0) {
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B9FC"))) PPC_WEAK_FUNC(sub_8221B9FC);
PPC_FUNC_IMPL(__imp__sub_8221B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BA00"))) PPC_WEAK_FUNC(sub_8221BA00);
PPC_FUNC_IMPL(__imp__sub_8221BA00) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8221b448
	ctx.lr = 0x8221BA30;
	sub_8221B448(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r3,r30,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221b660
	ctx.lr = 0x8221BA40;
	sub_8221B660(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r3,r30,16,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221b850
	ctx.lr = 0x8221BA50;
	sub_8221B850(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8221BA6C"))) PPC_WEAK_FUNC(sub_8221BA6C);
PPC_FUNC_IMPL(__imp__sub_8221BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BA70"))) PPC_WEAK_FUNC(sub_8221BA70);
PPC_FUNC_IMPL(__imp__sub_8221BA70) {
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
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221bacc
	if (ctx.cr6.eq) goto loc_8221BACC;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214920
	ctx.lr = 0x8221BAB0;
	sub_82214920(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214920
	ctx.lr = 0x8221BAC8;
	sub_82214920(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_8221BACC:
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

__attribute__((alias("__imp__sub_8221BAE4"))) PPC_WEAK_FUNC(sub_8221BAE4);
PPC_FUNC_IMPL(__imp__sub_8221BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BAE8"))) PPC_WEAK_FUNC(sub_8221BAE8);
PPC_FUNC_IMPL(__imp__sub_8221BAE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BAF8"))) PPC_WEAK_FUNC(sub_8221BAF8);
PPC_FUNC_IMPL(__imp__sub_8221BAF8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r10,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BB20"))) PPC_WEAK_FUNC(sub_8221BB20);
PPC_FUNC_IMPL(__imp__sub_8221BB20) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BB4C"))) PPC_WEAK_FUNC(sub_8221BB4C);
PPC_FUNC_IMPL(__imp__sub_8221BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BB50"))) PPC_WEAK_FUNC(sub_8221BB50);
PPC_FUNC_IMPL(__imp__sub_8221BB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BB5C"))) PPC_WEAK_FUNC(sub_8221BB5C);
PPC_FUNC_IMPL(__imp__sub_8221BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BB60"))) PPC_WEAK_FUNC(sub_8221BB60);
PPC_FUNC_IMPL(__imp__sub_8221BB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BB70"))) PPC_WEAK_FUNC(sub_8221BB70);
PPC_FUNC_IMPL(__imp__sub_8221BB70) {
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
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221bbac
	if (ctx.cr6.eq) goto loc_8221BBAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82214920
	ctx.lr = 0x8221BBA8;
	sub_82214920(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8221BBAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BBC0"))) PPC_WEAK_FUNC(sub_8221BBC0);
PPC_FUNC_IMPL(__imp__sub_8221BBC0) {
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
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221bbfc
	if (ctx.cr6.eq) goto loc_8221BBFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82214920
	ctx.lr = 0x8221BBF8;
	sub_82214920(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8221BBFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BC10"))) PPC_WEAK_FUNC(sub_8221BC10);
PPC_FUNC_IMPL(__imp__sub_8221BC10) {
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
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r5,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FFFE;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82248a40
	ctx.lr = 0x8221BC48;
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

__attribute__((alias("__imp__sub_8221BC60"))) PPC_WEAK_FUNC(sub_8221BC60);
PPC_FUNC_IMPL(__imp__sub_8221BC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r10,r11,-3088
	ctx.r10.s64 = ctx.r11.s64 + -3088;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BC84"))) PPC_WEAK_FUNC(sub_8221BC84);
PPC_FUNC_IMPL(__imp__sub_8221BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BC88"))) PPC_WEAK_FUNC(sub_8221BC88);
PPC_FUNC_IMPL(__imp__sub_8221BC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-3088
	ctx.r10.s64 = ctx.r11.s64 + -3088;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BC98"))) PPC_WEAK_FUNC(sub_8221BC98);
PPC_FUNC_IMPL(__imp__sub_8221BC98) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-3088
	ctx.r9.s64 = ctx.r11.s64 + -3088;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8221bcd0
	if (ctx.cr6.eq) goto loc_8221BCD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8221BCCC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8221BCD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BCE4"))) PPC_WEAK_FUNC(sub_8221BCE4);
PPC_FUNC_IMPL(__imp__sub_8221BCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

