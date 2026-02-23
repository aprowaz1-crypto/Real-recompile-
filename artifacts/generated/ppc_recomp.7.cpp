#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820C0668"))) PPC_WEAK_FUNC(sub_820C0668);
PPC_FUNC_IMPL(__imp__sub_820C0668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,1628
	ctx.r3.s64 = ctx.r3.s64 + 1628;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// bl 0x8221bae8
	ctx.lr = 0x820C06A4;
	sub_8221BAE8(ctx, base);
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// stw r30,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r30.u32);
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// stw r30,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r30.u32);
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r30,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r30,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r30,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r30.u32);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// bl 0x820c8c78
	ctx.lr = 0x820C06E8;
	sub_820C8C78(ctx, base);
	// addi r3,r31,2052
	ctx.r3.s64 = ctx.r31.s64 + 2052;
	// bl 0x820d7800
	ctx.lr = 0x820C06F0;
	sub_820D7800(ctx, base);
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// bl 0x820d6588
	ctx.lr = 0x820C06F8;
	sub_820D6588(ctx, base);
	// addi r3,r31,2100
	ctx.r3.s64 = ctx.r31.s64 + 2100;
	// bl 0x820d6588
	ctx.lr = 0x820C0700;
	sub_820D6588(ctx, base);
	// addi r3,r31,2112
	ctx.r3.s64 = ctx.r31.s64 + 2112;
	// bl 0x820d74e8
	ctx.lr = 0x820C0708;
	sub_820D74E8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,1600
	ctx.r4.s64 = 1600;
	// bl 0x822aa648
	ctx.lr = 0x820C0714;
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

__attribute__((alias("__imp__sub_820C0730"))) PPC_WEAK_FUNC(sub_820C0730);
PPC_FUNC_IMPL(__imp__sub_820C0730) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r9,1604(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C075C"))) PPC_WEAK_FUNC(sub_820C075C);
PPC_FUNC_IMPL(__imp__sub_820C075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0760"))) PPC_WEAK_FUNC(sub_820C0760);
PPC_FUNC_IMPL(__imp__sub_820C0760) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x820c0770
	if (!ctx.cr6.lt) goto loc_820C0770;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820c077c
	goto loc_820C077C;
loc_820C0770:
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// ble cr6,0x820c077c
	if (!ctx.cr6.gt) goto loc_820C077C;
	// li r4,100
	ctx.r4.s64 = 100;
loc_820C077C:
	// lwz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820c07b4
	if (!ctx.cr6.gt) goto loc_820C07B4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C0798:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x820c07bc
	if (!ctx.cr6.gt) goto loc_820C07BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820c0798
	if (ctx.cr6.lt) goto loc_820C0798;
loc_820C07B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C07BC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C07D0"))) PPC_WEAK_FUNC(sub_820C07D0);
PPC_FUNC_IMPL(__imp__sub_820C07D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r9,1612(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mulli r11,r7,84
	ctx.r11.s64 = ctx.r7.s64 * 84;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C07F4"))) PPC_WEAK_FUNC(sub_820C07F4);
PPC_FUNC_IMPL(__imp__sub_820C07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C07F8"))) PPC_WEAK_FUNC(sub_820C07F8);
PPC_FUNC_IMPL(__imp__sub_820C07F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// li r9,500
	ctx.r9.s64 = 500;
	// divw. r11,r4,r9
	ctx.r11.s32 = ctx.r4.s32 / ctx.r9.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge 0x820c0834
	if (!ctx.cr0.lt) goto loc_820C0834;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c084c
	goto loc_820C084C;
loc_820C0834:
	// lwz r10,1692(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820c084c
	if (!ctx.cr6.gt) goto loc_820C084C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820C084C:
	// lwz r10,1692(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0878"))) PPC_WEAK_FUNC(sub_820C0878);
PPC_FUNC_IMPL(__imp__sub_820C0878) {
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
	// bl 0x8218a810
	ctx.lr = 0x820C0890;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c08b8
	if (ctx.cr6.eq) goto loc_820C08B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218abc0
	ctx.lr = 0x820C08A4;
	sub_8218ABC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C08B8:
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

__attribute__((alias("__imp__sub_820C08D0"))) PPC_WEAK_FUNC(sub_820C08D0);
PPC_FUNC_IMPL(__imp__sub_820C08D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// b 0x820cafb8
	sub_820CAFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C08F0"))) PPC_WEAK_FUNC(sub_820C08F0);
PPC_FUNC_IMPL(__imp__sub_820C08F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C08F4"))) PPC_WEAK_FUNC(sub_820C08F4);
PPC_FUNC_IMPL(__imp__sub_820C08F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C08F8"))) PPC_WEAK_FUNC(sub_820C08F8);
PPC_FUNC_IMPL(__imp__sub_820C08F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2052
	ctx.r3.s64 = ctx.r11.s64 + 2052;
	// b 0x820d8010
	sub_820D8010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0918"))) PPC_WEAK_FUNC(sub_820C0918);
PPC_FUNC_IMPL(__imp__sub_820C0918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C091C"))) PPC_WEAK_FUNC(sub_820C091C);
PPC_FUNC_IMPL(__imp__sub_820C091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0920"))) PPC_WEAK_FUNC(sub_820C0920);
PPC_FUNC_IMPL(__imp__sub_820C0920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// b 0x820d6468
	sub_820D6468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0940"))) PPC_WEAK_FUNC(sub_820C0940);
PPC_FUNC_IMPL(__imp__sub_820C0940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0944"))) PPC_WEAK_FUNC(sub_820C0944);
PPC_FUNC_IMPL(__imp__sub_820C0944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0948"))) PPC_WEAK_FUNC(sub_820C0948);
PPC_FUNC_IMPL(__imp__sub_820C0948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2100
	ctx.r3.s64 = ctx.r11.s64 + 2100;
	// b 0x820d7680
	sub_820D7680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0968"))) PPC_WEAK_FUNC(sub_820C0968);
PPC_FUNC_IMPL(__imp__sub_820C0968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C096C"))) PPC_WEAK_FUNC(sub_820C096C);
PPC_FUNC_IMPL(__imp__sub_820C096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0970"))) PPC_WEAK_FUNC(sub_820C0970);
PPC_FUNC_IMPL(__imp__sub_820C0970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// b 0x820d7390
	sub_820D7390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0990"))) PPC_WEAK_FUNC(sub_820C0990);
PPC_FUNC_IMPL(__imp__sub_820C0990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0994"))) PPC_WEAK_FUNC(sub_820C0994);
PPC_FUNC_IMPL(__imp__sub_820C0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0998"))) PPC_WEAK_FUNC(sub_820C0998);
PPC_FUNC_IMPL(__imp__sub_820C0998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1628
	ctx.r3.s64 = ctx.r11.s64 + 1628;
	// b 0x820d8980
	sub_820D8980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C09B8"))) PPC_WEAK_FUNC(sub_820C09B8);
PPC_FUNC_IMPL(__imp__sub_820C09B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C09BC"))) PPC_WEAK_FUNC(sub_820C09BC);
PPC_FUNC_IMPL(__imp__sub_820C09BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C09C0"))) PPC_WEAK_FUNC(sub_820C09C0);
PPC_FUNC_IMPL(__imp__sub_820C09C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820C09C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1600
	ctx.r4.s64 = 1600;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822aa648
	ctx.lr = 0x820C09DC;
	sub_822AA648(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,1692(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0a10
	if (ctx.cr6.eq) goto loc_820C0A10;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0a00
	if (ctx.cr6.eq) goto loc_820C0A00;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0A00;
	sub_82183E40(ctx, base);
loc_820C0A00:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0A10;
	sub_82183E40(ctx, base);
loc_820C0A10:
	// lwz r29,1688(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// stw r31,1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1692, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0a5c
	if (ctx.cr6.eq) goto loc_820C0A5C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0a34
	if (ctx.cr6.eq) goto loc_820C0A34;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0A34;
	sub_82183E40(ctx, base);
loc_820C0A34:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0a4c
	if (ctx.cr6.eq) goto loc_820C0A4C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0A4C;
	sub_82183E40(ctx, base);
loc_820C0A4C:
	// stw r31,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0A5C;
	sub_82183E40(ctx, base);
loc_820C0A5C:
	// lwz r29,1684(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// stw r31,1688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1688, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0a90
	if (ctx.cr6.eq) goto loc_820C0A90;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0a80
	if (ctx.cr6.eq) goto loc_820C0A80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0A80;
	sub_82183E40(ctx, base);
loc_820C0A80:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0A90;
	sub_82183E40(ctx, base);
loc_820C0A90:
	// lwz r3,1680(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	// stw r31,1684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1684, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0aa8
	if (ctx.cr6.eq) goto loc_820C0AA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820C0AA8;
	sub_82183E40(ctx, base);
loc_820C0AA8:
	// lwz r29,1676(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r31,1680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1680, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0adc
	if (ctx.cr6.eq) goto loc_820C0ADC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0acc
	if (ctx.cr6.eq) goto loc_820C0ACC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0ACC;
	sub_82183E40(ctx, base);
loc_820C0ACC:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0ADC;
	sub_82183E40(ctx, base);
loc_820C0ADC:
	// lwz r29,1672(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// stw r31,1676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1676, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0b10
	if (ctx.cr6.eq) goto loc_820C0B10;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0b00
	if (ctx.cr6.eq) goto loc_820C0B00;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0B00;
	sub_82183E40(ctx, base);
loc_820C0B00:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0B10;
	sub_82183E40(ctx, base);
loc_820C0B10:
	// lwz r29,1668(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// stw r31,1672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1672, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0b44
	if (ctx.cr6.eq) goto loc_820C0B44;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0b34
	if (ctx.cr6.eq) goto loc_820C0B34;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0B34;
	sub_82183E40(ctx, base);
loc_820C0B34:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0B44;
	sub_82183E40(ctx, base);
loc_820C0B44:
	// lwz r29,1664(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r31,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0b78
	if (ctx.cr6.eq) goto loc_820C0B78;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0b68
	if (ctx.cr6.eq) goto loc_820C0B68;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0B68;
	sub_82183E40(ctx, base);
loc_820C0B68:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0B78;
	sub_82183E40(ctx, base);
loc_820C0B78:
	// lwz r29,1660(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r31,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0bac
	if (ctx.cr6.eq) goto loc_820C0BAC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0b9c
	if (ctx.cr6.eq) goto loc_820C0B9C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0B9C;
	sub_82183E40(ctx, base);
loc_820C0B9C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0BAC;
	sub_82183E40(ctx, base);
loc_820C0BAC:
	// lwz r29,1652(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r31,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0be0
	if (ctx.cr6.eq) goto loc_820C0BE0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0bd0
	if (ctx.cr6.eq) goto loc_820C0BD0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0BD0;
	sub_82183E40(ctx, base);
loc_820C0BD0:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0BE0;
	sub_82183E40(ctx, base);
loc_820C0BE0:
	// lwz r29,1656(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stw r31,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0c14
	if (ctx.cr6.eq) goto loc_820C0C14;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0c04
	if (ctx.cr6.eq) goto loc_820C0C04;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0C04;
	sub_82183E40(ctx, base);
loc_820C0C04:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0C14;
	sub_82183E40(ctx, base);
loc_820C0C14:
	// lwz r29,1648(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// stw r31,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0c48
	if (ctx.cr6.eq) goto loc_820C0C48;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0c38
	if (ctx.cr6.eq) goto loc_820C0C38;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0C38;
	sub_82183E40(ctx, base);
loc_820C0C38:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0C48;
	sub_82183E40(ctx, base);
loc_820C0C48:
	// lwz r29,1644(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// stw r31,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0c7c
	if (ctx.cr6.eq) goto loc_820C0C7C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0c6c
	if (ctx.cr6.eq) goto loc_820C0C6C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0C6C;
	sub_82183E40(ctx, base);
loc_820C0C6C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0C7C;
	sub_82183E40(ctx, base);
loc_820C0C7C:
	// lwz r29,1640(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r31,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0cb0
	if (ctx.cr6.eq) goto loc_820C0CB0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0ca0
	if (ctx.cr6.eq) goto loc_820C0CA0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0CA0;
	sub_82183E40(ctx, base);
loc_820C0CA0:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0CB0;
	sub_82183E40(ctx, base);
loc_820C0CB0:
	// lwz r29,1636(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// stw r31,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0ce4
	if (ctx.cr6.eq) goto loc_820C0CE4;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0cd4
	if (ctx.cr6.eq) goto loc_820C0CD4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0CD4;
	sub_82183E40(ctx, base);
loc_820C0CD4:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0CE4;
	sub_82183E40(ctx, base);
loc_820C0CE4:
	// lwz r29,1624(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r31,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0d18
	if (ctx.cr6.eq) goto loc_820C0D18;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0d08
	if (ctx.cr6.eq) goto loc_820C0D08;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0D08;
	sub_82183E40(ctx, base);
loc_820C0D08:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0D18;
	sub_82183E40(ctx, base);
loc_820C0D18:
	// lwz r29,1616(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r31,1624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1624, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0d4c
	if (ctx.cr6.eq) goto loc_820C0D4C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0d3c
	if (ctx.cr6.eq) goto loc_820C0D3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0D3C;
	sub_82183E40(ctx, base);
loc_820C0D3C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0D4C;
	sub_82183E40(ctx, base);
loc_820C0D4C:
	// lwz r29,1612(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r31,1616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1616, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0d80
	if (ctx.cr6.eq) goto loc_820C0D80;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0d70
	if (ctx.cr6.eq) goto loc_820C0D70;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0D70;
	sub_82183E40(ctx, base);
loc_820C0D70:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0D80;
	sub_82183E40(ctx, base);
loc_820C0D80:
	// lwz r29,1608(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r31,1612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1612, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0db4
	if (ctx.cr6.eq) goto loc_820C0DB4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0da4
	if (ctx.cr6.eq) goto loc_820C0DA4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0DA4;
	sub_82183E40(ctx, base);
loc_820C0DA4:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0DB4;
	sub_82183E40(ctx, base);
loc_820C0DB4:
	// lwz r29,1604(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r31,1608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1608, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0de8
	if (ctx.cr6.eq) goto loc_820C0DE8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0dd8
	if (ctx.cr6.eq) goto loc_820C0DD8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0DD8;
	sub_82183E40(ctx, base);
loc_820C0DD8:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0DE8;
	sub_82183E40(ctx, base);
loc_820C0DE8:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,1604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1604, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820c0e1c
	if (ctx.cr6.eq) goto loc_820C0E1C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0e0c
	if (ctx.cr6.eq) goto loc_820C0E0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820C0E0C;
	sub_82183E40(ctx, base);
loc_820C0E0C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820C0E1C;
	sub_82183E40(ctx, base);
loc_820C0E1C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820C0E28"))) PPC_WEAK_FUNC(sub_820C0E28);
PPC_FUNC_IMPL(__imp__sub_820C0E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x820C0E30;
	sub_82248764(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r21,-8540(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820c09c0
	ctx.lr = 0x820C0E4C;
	sub_820C09C0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x820C0E50;
	sub_82183078(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x820C0E5C;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218aa18
	ctx.lr = 0x820C0E70;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C0E7C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c0e9c
	if (ctx.cr6.eq) goto loc_820C0E9C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C0E94;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c0ea0
	goto loc_820C0EA0;
loc_820C0E9C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C0EA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C0EAC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c0ec8
	if (ctx.cr6.eq) goto loc_820C0EC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C0EC0;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c0ecc
	goto loc_820C0ECC;
loc_820C0EC8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C0ECC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C0ED8;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C0EDC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c0ef4
	if (ctx.cr6.eq) goto loc_820C0EF4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C0EF0;
	sub_82183448(ctx, base);
	// b 0x820c0efc
	goto loc_820C0EFC;
loc_820C0EF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C0EFC;
	sub_821845A0(ctx, base);
loc_820C0EFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0f18
	if (ctx.cr6.eq) goto loc_820C0F18;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c0f1c
	goto loc_820C0F1C;
loc_820C0F18:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C0F1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C0F24;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C0F30;
	sub_820D8C68(ctx, base);
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// li r20,-1
	ctx.r20.s64 = -1;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r24,r11,52428
	ctx.r24.u64 = ctx.r11.u64 | 52428;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820c0fd8
	if (!ctx.cr6.gt) goto loc_820C0FD8;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x820c0f60
	if (ctx.cr6.gt) goto loc_820C0F60;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820c0f64
	goto loc_820C0F64;
loc_820C0F60:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_820C0F64:
	// bl 0x82080d68
	ctx.lr = 0x820C0F68;
	sub_82080D68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c0fd8
	if (!ctx.cr6.gt) goto loc_820C0FD8;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_820C0F80:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x820d8c68
	ctx.lr = 0x820C0F90;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C0F9C;
	sub_820D8CB8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C0FA8;
	sub_820D8C68(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C0FB4;
	sub_820D8CB8(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C0FC0;
	sub_820D8CB8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820c0f80
	if (ctx.cr6.lt) goto loc_820C0F80;
loc_820C0FD8:
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r30,r21,4
	ctx.r30.s64 = ctx.r21.s64 + 4;
loc_820C0FE4:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x820C0FF4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1020
	if (ctx.cr6.eq) goto loc_820C1020;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1008;
	sub_8218AB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1020
	if (ctx.cr6.eq) goto loc_820C1020;
	// li r5,400
	ctx.r5.s64 = 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x820C1020;
	sub_821847A8(ctx, base);
loc_820C1020:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r30,r30,400
	ctx.r30.s64 = ctx.r30.s64 + 400;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x820c0fe4
	if (ctx.cr6.lt) goto loc_820C0FE4;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C103C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1058
	if (ctx.cr6.eq) goto loc_820C1058;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1050;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c105c
	goto loc_820C105C;
loc_820C1058:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C105C:
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1068;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1084
	if (ctx.cr6.eq) goto loc_820C1084;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C107C;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1088
	goto loc_820C1088;
loc_820C1084:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1088:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C1094;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1098;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c10b0
	if (ctx.cr6.eq) goto loc_820C10B0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C10AC;
	sub_82183448(ctx, base);
	// b 0x820c10b8
	goto loc_820C10B8;
loc_820C10B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C10B8;
	sub_821845A0(ctx, base);
loc_820C10B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c10d4
	if (ctx.cr6.eq) goto loc_820C10D4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c10d8
	goto loc_820C10D8;
loc_820C10D4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C10D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C10E0;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C10EC;
	sub_820D8C68(ctx, base);
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820c1110
	if (ctx.cr6.gt) goto loc_820C1110;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x820c1114
	goto loc_820C1114;
loc_820C1110:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C1114:
	// bl 0x82183850
	ctx.lr = 0x820C1118;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c1130
	if (ctx.cr6.eq) goto loc_820C1130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C112C;
	sub_82183448(ctx, base);
	// b 0x820c113c
	goto loc_820C113C;
loc_820C1130:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C113C;
	sub_821845A0(ctx, base);
loc_820C113C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c122c
	if (!ctx.cr6.gt) goto loc_820C122C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1154:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C115C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfsx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C116C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1180;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1194;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C11A8;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,16(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C11BC;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C11D0;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C11E4;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// bl 0x820d8c68
	ctx.lr = 0x820C11F8;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C120C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// stfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c1154
	if (ctx.cr6.lt) goto loc_820C1154;
loc_820C122C:
	// stw r30,1604(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1604, ctx.r30.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C123C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1258
	if (ctx.cr6.eq) goto loc_820C1258;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1250;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c125c
	goto loc_820C125C;
loc_820C1258:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C125C:
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1268;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1284
	if (ctx.cr6.eq) goto loc_820C1284;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C127C;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1288
	goto loc_820C1288;
loc_820C1284:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C1294;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1298;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c12b0
	if (ctx.cr6.eq) goto loc_820C12B0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C12AC;
	sub_82183448(ctx, base);
	// b 0x820c12b8
	goto loc_820C12B8;
loc_820C12B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C12B8;
	sub_821845A0(ctx, base);
loc_820C12B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c12d4
	if (ctx.cr6.eq) goto loc_820C12D4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c12d8
	goto loc_820C12D8;
loc_820C12D4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C12D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C12E0;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C12EC;
	sub_820D8C68(ctx, base);
	// lis r11,819
	ctx.r11.s64 = 53673984;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r10,r11,13107
	ctx.r10.u64 = ctx.r11.u64 | 13107;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820c1310
	if (ctx.cr6.gt) goto loc_820C1310;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x820c1314
	goto loc_820C1314;
loc_820C1310:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C1314:
	// bl 0x82183850
	ctx.lr = 0x820C1318;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c1330
	if (ctx.cr6.eq) goto loc_820C1330;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C132C;
	sub_82183448(ctx, base);
	// b 0x820c133c
	goto loc_820C133C;
loc_820C1330:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C133C;
	sub_821845A0(ctx, base);
loc_820C133C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c14f4
	if (!ctx.cr6.gt) goto loc_820C14F4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C135C;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C136C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1380;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1394;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C13A8;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,16(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C13BC;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C13D0;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C13E4;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C13F8;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C140C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1420;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1434;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,44(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1448;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C145C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,52(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1470;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1484;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1498;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C14AC;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C14C0;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,72(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C14D4;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// stfs f1,76(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 76, temp.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820c1354
	if (ctx.cr6.lt) goto loc_820C1354;
loc_820C14F4:
	// stw r30,1608(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1608, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1504;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1520
	if (ctx.cr6.eq) goto loc_820C1520;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1518;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c1524
	goto loc_820C1524;
loc_820C1520:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1524:
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1530;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c154c
	if (ctx.cr6.eq) goto loc_820C154C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C1544;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1550
	goto loc_820C1550;
loc_820C154C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1550:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C155C;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1560;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c1578
	if (ctx.cr6.eq) goto loc_820C1578;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C1574;
	sub_82183448(ctx, base);
	// b 0x820c1580
	goto loc_820C1580;
loc_820C1578:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1580;
	sub_821845A0(ctx, base);
loc_820C1580:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c159c
	if (ctx.cr6.eq) goto loc_820C159C;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c15a0
	goto loc_820C15A0;
loc_820C159C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C15A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C15A8;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C15B4;
	sub_820D8C68(ctx, base);
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mulli r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 * 84;
	// ori r10,r11,12483
	ctx.r10.u64 = ctx.r11.u64 | 12483;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820c15d0
	if (!ctx.cr6.gt) goto loc_820C15D0;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C15D0:
	// bl 0x82183850
	ctx.lr = 0x820C15D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c15ec
	if (ctx.cr6.eq) goto loc_820C15EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C15E8;
	sub_82183448(ctx, base);
	// b 0x820c15f8
	goto loc_820C15F8;
loc_820C15EC:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C15F8;
	sub_821845A0(ctx, base);
loc_820C15F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c17c4
	if (!ctx.cr6.gt) goto loc_820C17C4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1610:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C1618;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1628;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C163C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1650;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1664;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,16(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1678;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C168C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C16A0;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C16B4;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C16C8;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C16DC;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C16F0;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,44(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1704;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1718;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,52(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C172C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1740;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1754;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1768;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C177C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,72(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1790;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,76(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 76, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C17A4;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// stfs f1,80(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 80, temp.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820c1610
	if (ctx.cr6.lt) goto loc_820C1610;
loc_820C17C4:
	// stw r30,1612(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1612, ctx.r30.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C17D4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c17f0
	if (ctx.cr6.eq) goto loc_820C17F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C17E8;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c17f4
	goto loc_820C17F4;
loc_820C17F0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C17F4:
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1800;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c181c
	if (ctx.cr6.eq) goto loc_820C181C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C1814;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1820
	goto loc_820C1820;
loc_820C181C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1820:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C182C;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1830;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c1848
	if (ctx.cr6.eq) goto loc_820C1848;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C1844;
	sub_82183448(ctx, base);
	// b 0x820c1850
	goto loc_820C1850;
loc_820C1848:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1850;
	sub_821845A0(ctx, base);
loc_820C1850:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c186c
	if (ctx.cr6.eq) goto loc_820C186C;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c1870
	goto loc_820C1870;
loc_820C186C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C1870:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1878;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1884;
	sub_820D8C68(ctx, base);
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r26,r11,43690
	ctx.r26.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x820c18a8
	if (ctx.cr6.gt) goto loc_820C18A8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x820c18ac
	goto loc_820C18AC;
loc_820C18A8:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C18AC:
	// bl 0x82183850
	ctx.lr = 0x820C18B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c18c8
	if (ctx.cr6.eq) goto loc_820C18C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C18C4;
	sub_82183448(ctx, base);
	// b 0x820c18d4
	goto loc_820C18D4;
loc_820C18C8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C18D4;
	sub_821845A0(ctx, base);
loc_820C18D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c1974
	if (!ctx.cr6.gt) goto loc_820C1974;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C18EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C18F4;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1904;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1918;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C192C;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1940;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,16(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1954;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stfs f1,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c18ec
	if (ctx.cr6.lt) goto loc_820C18EC;
loc_820C1974:
	// stw r30,1616(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1616, ctx.r30.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1984;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c19a0
	if (ctx.cr6.eq) goto loc_820C19A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1998;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c19a4
	goto loc_820C19A4;
loc_820C19A0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C19A4:
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C19B0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c19cc
	if (ctx.cr6.eq) goto loc_820C19CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C19C4;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c19d0
	goto loc_820C19D0;
loc_820C19CC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C19D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C19DC;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C19E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c19f8
	if (ctx.cr6.eq) goto loc_820C19F8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C19F4;
	sub_82183448(ctx, base);
	// b 0x820c1a00
	goto loc_820C1A00;
loc_820C19F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1A00;
	sub_821845A0(ctx, base);
loc_820C1A00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1a1c
	if (ctx.cr6.eq) goto loc_820C1A1C;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c1a20
	goto loc_820C1A20;
loc_820C1A1C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1A20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1A28;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1A34;
	sub_820D8C68(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x820c1a50
	if (!ctx.cr6.gt) goto loc_820C1A50;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C1A50:
	// bl 0x82183850
	ctx.lr = 0x820C1A54;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c1a6c
	if (ctx.cr6.eq) goto loc_820C1A6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C1A68;
	sub_82183448(ctx, base);
	// b 0x820c1a78
	goto loc_820C1A78;
loc_820C1A6C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C1A78;
	sub_821845A0(ctx, base);
loc_820C1A78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c1ab4
	if (!ctx.cr6.gt) goto loc_820C1AB4;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820C1A90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C1A98;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsx f1,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820c1a90
	if (ctx.cr6.lt) goto loc_820C1A90;
loc_820C1AB4:
	// stw r31,1620(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1620, ctx.r31.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1AC4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1ae0
	if (ctx.cr6.eq) goto loc_820C1AE0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1AD8;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c1ae4
	goto loc_820C1AE4;
loc_820C1AE0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1AE4:
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1AF0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1b0c
	if (ctx.cr6.eq) goto loc_820C1B0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C1B04;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1b10
	goto loc_820C1B10;
loc_820C1B0C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1B10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C1B1C;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1B20;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c1b38
	if (ctx.cr6.eq) goto loc_820C1B38;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C1B34;
	sub_82183448(ctx, base);
	// b 0x820c1b40
	goto loc_820C1B40;
loc_820C1B38:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1B40;
	sub_821845A0(ctx, base);
loc_820C1B40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1b5c
	if (ctx.cr6.eq) goto loc_820C1B5C;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c1b60
	goto loc_820C1B60;
loc_820C1B5C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C1B60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1B68;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1B74;
	sub_820D8C68(ctx, base);
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mulli r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 * 28;
	// ori r27,r11,37449
	ctx.r27.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x820c1b90
	if (!ctx.cr6.gt) goto loc_820C1B90;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C1B90:
	// bl 0x82183850
	ctx.lr = 0x820C1B94;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c1bac
	if (ctx.cr6.eq) goto loc_820C1BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C1BA8;
	sub_82183448(ctx, base);
	// b 0x820c1bb8
	goto loc_820C1BB8;
loc_820C1BAC:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C1BB8;
	sub_821845A0(ctx, base);
loc_820C1BB8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c1c58
	if (!ctx.cr6.gt) goto loc_820C1C58;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1BD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C1BD8;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1BE8;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1BFC;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1C10;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1C24;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f1,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// bl 0x820d8cb8
	ctx.lr = 0x820C1C38;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stfs f1,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c1bd0
	if (ctx.cr6.lt) goto loc_820C1BD0;
loc_820C1C58:
	// stw r30,1624(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1624, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1C68;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1c84
	if (ctx.cr6.eq) goto loc_820C1C84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1C7C;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c1c88
	goto loc_820C1C88;
loc_820C1C84:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1C88:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1C94;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1ca8
	if (ctx.cr6.eq) goto loc_820C1CA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C1CA8;
	sub_8218ABC0(ctx, base);
loc_820C1CA8:
	// bl 0x82183850
	ctx.lr = 0x820C1CAC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c1cc4
	if (ctx.cr6.eq) goto loc_820C1CC4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x820C1CC0;
	sub_82183448(ctx, base);
	// b 0x820c1ccc
	goto loc_820C1CCC;
loc_820C1CC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1CCC;
	sub_821845A0(ctx, base);
loc_820C1CCC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1ce4
	if (ctx.cr6.eq) goto loc_820C1CE4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// b 0x820c1ce8
	goto loc_820C1CE8;
loc_820C1CE4:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C1CE8:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x820C1CF8;
	sub_821847A8(ctx, base);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r25,r11,21845
	ctx.r25.u64 = ctx.r11.u64 | 21845;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820c1d6c
	if (ctx.cr6.eq) goto loc_820C1D6C;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x820c1d28
	if (ctx.cr6.gt) goto loc_820C1D28;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820c1d2c
	goto loc_820C1D2C;
loc_820C1D28:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_820C1D2C:
	// bl 0x82183850
	ctx.lr = 0x820C1D30;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c1d48
	if (ctx.cr6.eq) goto loc_820C1D48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x820C1D44;
	sub_82183448(ctx, base);
	// b 0x820c1d54
	goto loc_820C1D54;
loc_820C1D48:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C1D54;
	sub_821845A0(ctx, base);
loc_820C1D54:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x820C1D6C;
	sub_821847A8(ctx, base);
loc_820C1D6C:
	// stw r30,1636(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1636, ctx.r30.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1D7C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1d98
	if (ctx.cr6.eq) goto loc_820C1D98;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1D90;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c1d9c
	goto loc_820C1D9C;
loc_820C1D98:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1D9C:
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1DA8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1dc4
	if (ctx.cr6.eq) goto loc_820C1DC4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C1DBC;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1dc8
	goto loc_820C1DC8;
loc_820C1DC4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1DC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C1DD4;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1DD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c1df0
	if (ctx.cr6.eq) goto loc_820C1DF0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C1DEC;
	sub_82183448(ctx, base);
	// b 0x820c1df8
	goto loc_820C1DF8;
loc_820C1DF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1DF8;
	sub_821845A0(ctx, base);
loc_820C1DF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1e14
	if (ctx.cr6.eq) goto loc_820C1E14;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c1e18
	goto loc_820C1E18;
loc_820C1E14:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C1E18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1E20;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1E2C;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mulli r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 * 28;
	// ble cr6,0x820c1e40
	if (!ctx.cr6.gt) goto loc_820C1E40;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C1E40:
	// bl 0x82183850
	ctx.lr = 0x820C1E44;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c1e5c
	if (ctx.cr6.eq) goto loc_820C1E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C1E58;
	sub_82183448(ctx, base);
	// b 0x820c1e68
	goto loc_820C1E68;
loc_820C1E5C:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C1E68;
	sub_821845A0(ctx, base);
loc_820C1E68:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c1f1c
	if (!ctx.cr6.gt) goto loc_820C1F1C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1E80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1E88;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1E98;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1EAC;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1EC0;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1ED4;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1EE8;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1EFC;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// stw r3,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820c1e80
	if (ctx.cr6.lt) goto loc_820C1E80;
loc_820C1F1C:
	// stw r30,1640(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1640, ctx.r30.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1F2C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1f48
	if (ctx.cr6.eq) goto loc_820C1F48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C1F40;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c1f4c
	goto loc_820C1F4C;
loc_820C1F48:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C1F4C:
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C1F58;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c1f74
	if (ctx.cr6.eq) goto loc_820C1F74;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C1F6C;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c1f78
	goto loc_820C1F78;
loc_820C1F74:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C1F78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C1F84;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C1F88;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c1fa0
	if (ctx.cr6.eq) goto loc_820C1FA0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C1F9C;
	sub_82183448(ctx, base);
	// b 0x820c1fa8
	goto loc_820C1FA8;
loc_820C1FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C1FA8;
	sub_821845A0(ctx, base);
loc_820C1FA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c1fc4
	if (ctx.cr6.eq) goto loc_820C1FC4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c1fc8
	goto loc_820C1FC8;
loc_820C1FC4:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820C1FC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1FD0;
	sub_820D8C68(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C1FDC;
	sub_820D8C68(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x820c1ff8
	if (ctx.cr6.gt) goto loc_820C1FF8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x820c1ffc
	goto loc_820C1FFC;
loc_820C1FF8:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C1FFC:
	// bl 0x82183850
	ctx.lr = 0x820C2000;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2018
	if (ctx.cr6.eq) goto loc_820C2018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2014;
	sub_82183448(ctx, base);
	// b 0x820c2024
	goto loc_820C2024;
loc_820C2018:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2024;
	sub_821845A0(ctx, base);
loc_820C2024:
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c20c4
	if (!ctx.cr6.gt) goto loc_820C20C4;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C203C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2044;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2054;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2068;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C207C;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2090;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C20A4;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stw r3,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r3.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c203c
	if (ctx.cr6.lt) goto loc_820C203C;
loc_820C20C4:
	// stw r29,1644(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1644, ctx.r29.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C20D4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c20f0
	if (ctx.cr6.eq) goto loc_820C20F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C20E8;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820c20f4
	goto loc_820C20F4;
loc_820C20F0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C20F4:
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2100;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c211c
	if (ctx.cr6.eq) goto loc_820C211C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2114;
	sub_8218ABC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2120
	goto loc_820C2120;
loc_820C211C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2120:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2130;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2134;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c214c
	if (ctx.cr6.eq) goto loc_820C214C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x820C2148;
	sub_82183448(ctx, base);
	// b 0x820c2154
	goto loc_820C2154;
loc_820C214C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C2154;
	sub_821845A0(ctx, base);
loc_820C2154:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c216c
	if (ctx.cr6.eq) goto loc_820C216C;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// b 0x820c2170
	goto loc_820C2170;
loc_820C216C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2170:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// rlwinm r11,r31,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820c2190
	if (!ctx.cr6.gt) goto loc_820C2190;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C2190:
	// bl 0x82183850
	ctx.lr = 0x820C2194;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c21ac
	if (ctx.cr6.eq) goto loc_820C21AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C21A8;
	sub_82183448(ctx, base);
	// b 0x820c21b8
	goto loc_820C21B8;
loc_820C21AC:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C21B8;
	sub_821845A0(ctx, base);
loc_820C21B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c22a8
	if (!ctx.cr6.gt) goto loc_820C22A8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C21D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C21D8;
	sub_820D8C28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// sthx r3,r31,r11
	PPC_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8bf8
	ctx.lr = 0x820C21E8;
	sub_820D8BF8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8bf8
	ctx.lr = 0x820C21FC;
	sub_820D8BF8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r3,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8bf8
	ctx.lr = 0x820C2210;
	sub_820D8BF8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r3,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8bf8
	ctx.lr = 0x820C2224;
	sub_820D8BF8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r3,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8bf8
	ctx.lr = 0x820C2238;
	sub_820D8BF8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r3,6(r6)
	PPC_STORE_U8(ctx.r6.u32 + 6, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8bf8
	ctx.lr = 0x820C224C;
	sub_820D8BF8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stb r3,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r3.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2260;
	sub_820D8C68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C2274;
	sub_820D8C28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sth r3,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C2288;
	sub_820D8C28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// sth r3,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r3.u16);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c21d0
	if (ctx.cr6.lt) goto loc_820C21D0;
loc_820C22A8:
	// stw r30,1648(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1648, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C22B8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c22d4
	if (ctx.cr6.eq) goto loc_820C22D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C22CC;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c22d8
	goto loc_820C22D8;
loc_820C22D4:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C22D8:
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C22E4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2300
	if (ctx.cr6.eq) goto loc_820C2300;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C22F8;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2304
	goto loc_820C2304;
loc_820C2300:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2304:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2310;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2314;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c232c
	if (ctx.cr6.eq) goto loc_820C232C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C2328;
	sub_82183448(ctx, base);
	// b 0x820c2334
	goto loc_820C2334;
loc_820C232C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C2334;
	sub_821845A0(ctx, base);
loc_820C2334:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2350
	if (ctx.cr6.eq) goto loc_820C2350;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c2354
	goto loc_820C2354;
loc_820C2350:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C235C;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2368;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bgt cr6,0x820c2384
	if (ctx.cr6.gt) goto loc_820C2384;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820c2388
	goto loc_820C2388;
loc_820C2384:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C2388:
	// bl 0x82183850
	ctx.lr = 0x820C238C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c23a4
	if (ctx.cr6.eq) goto loc_820C23A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C23A0;
	sub_82183448(ctx, base);
	// b 0x820c23b0
	goto loc_820C23B0;
loc_820C23A4:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C23B0;
	sub_821845A0(ctx, base);
loc_820C23B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c2450
	if (!ctx.cr6.gt) goto loc_820C2450;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C23C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C23D0;
	sub_820D8C28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sthx r3,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C23E0;
	sub_820D8C28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r3,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C23F4;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2408;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C241C;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2430;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c23c8
	if (ctx.cr6.lt) goto loc_820C23C8;
loc_820C2450:
	// stw r30,1652(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1652, ctx.r30.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2460;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c247c
	if (ctx.cr6.eq) goto loc_820C247C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C2474;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2480
	goto loc_820C2480;
loc_820C247C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2480:
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C248C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c24a8
	if (ctx.cr6.eq) goto loc_820C24A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C24A0;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c24ac
	goto loc_820C24AC;
loc_820C24A8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C24AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C24B8;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C24BC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c24d4
	if (ctx.cr6.eq) goto loc_820C24D4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C24D0;
	sub_82183448(ctx, base);
	// b 0x820c24dc
	goto loc_820C24DC;
loc_820C24D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C24DC;
	sub_821845A0(ctx, base);
loc_820C24DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c24f8
	if (ctx.cr6.eq) goto loc_820C24F8;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c24fc
	goto loc_820C24FC;
loc_820C24F8:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C24FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2504;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2510;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bgt cr6,0x820c252c
	if (ctx.cr6.gt) goto loc_820C252C;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820c2530
	goto loc_820C2530;
loc_820C252C:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C2530:
	// bl 0x82183850
	ctx.lr = 0x820C2534;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c254c
	if (ctx.cr6.eq) goto loc_820C254C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2548;
	sub_82183448(ctx, base);
	// b 0x820c2558
	goto loc_820C2558;
loc_820C254C:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2558;
	sub_821845A0(ctx, base);
loc_820C2558:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c25d0
	if (!ctx.cr6.gt) goto loc_820C25D0;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2570:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C2578;
	sub_820D8C28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sthx r3,r31,r11
	PPC_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C2588;
	sub_820D8C28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sth r3,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C259C;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C25B0;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820c2570
	if (ctx.cr6.lt) goto loc_820C2570;
loc_820C25D0:
	// stw r30,1656(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1656, ctx.r30.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C25E0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c25fc
	if (ctx.cr6.eq) goto loc_820C25FC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C25F4;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2600
	goto loc_820C2600;
loc_820C25FC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2600:
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C260C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2628
	if (ctx.cr6.eq) goto loc_820C2628;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2620;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c262c
	goto loc_820C262C;
loc_820C2628:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C262C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2638;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C263C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c2654
	if (ctx.cr6.eq) goto loc_820C2654;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C2650;
	sub_82183448(ctx, base);
	// b 0x820c265c
	goto loc_820C265C;
loc_820C2654:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C265C;
	sub_821845A0(ctx, base);
loc_820C265C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2678
	if (ctx.cr6.eq) goto loc_820C2678;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c267c
	goto loc_820C267C;
loc_820C2678:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C267C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2684;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2690;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820c26a4
	if (!ctx.cr6.gt) goto loc_820C26A4;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C26A4:
	// bl 0x82183850
	ctx.lr = 0x820C26A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c26c0
	if (ctx.cr6.eq) goto loc_820C26C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C26BC;
	sub_82183448(ctx, base);
	// b 0x820c26cc
	goto loc_820C26CC;
loc_820C26C0:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C26CC;
	sub_821845A0(ctx, base);
loc_820C26CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c2708
	if (!ctx.cr6.gt) goto loc_820C2708;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820C26E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C26EC;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820c26e4
	if (ctx.cr6.lt) goto loc_820C26E4;
loc_820C2708:
	// stw r31,1660(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1660, ctx.r31.u32);
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2718;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2734
	if (ctx.cr6.eq) goto loc_820C2734;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C272C;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2738
	goto loc_820C2738;
loc_820C2734:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2738:
	// li r4,23
	ctx.r4.s64 = 23;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2744;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2760
	if (ctx.cr6.eq) goto loc_820C2760;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2758;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2764
	goto loc_820C2764;
loc_820C2760:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2764:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2770;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2774;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c278c
	if (ctx.cr6.eq) goto loc_820C278C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C2788;
	sub_82183448(ctx, base);
	// b 0x820c2794
	goto loc_820C2794;
loc_820C278C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C2794;
	sub_821845A0(ctx, base);
loc_820C2794:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c27b0
	if (ctx.cr6.eq) goto loc_820C27B0;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c27b4
	goto loc_820C27B4;
loc_820C27B0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C27B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C27BC;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C27C8;
	sub_820D8C68(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// ble cr6,0x820c2868
	if (!ctx.cr6.gt) goto loc_820C2868;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r30,r3,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x820c27f0
	if (!ctx.cr6.gt) goto loc_820C27F0;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C27F0:
	// bl 0x82183850
	ctx.lr = 0x820C27F4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c280c
	if (ctx.cr6.eq) goto loc_820C280C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2808;
	sub_82183448(ctx, base);
	// b 0x820c2818
	goto loc_820C2818;
loc_820C280C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2818;
	sub_821845A0(ctx, base);
loc_820C2818:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c2868
	if (!ctx.cr6.gt) goto loc_820C2868;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2830:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2838;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2848;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c2830
	if (ctx.cr6.lt) goto loc_820C2830;
loc_820C2868:
	// stw r31,1664(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1664, ctx.r31.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2878;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2894
	if (ctx.cr6.eq) goto loc_820C2894;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C288C;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2898
	goto loc_820C2898;
loc_820C2894:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2898:
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C28A4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c28c0
	if (ctx.cr6.eq) goto loc_820C28C0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C28B8;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c28c4
	goto loc_820C28C4;
loc_820C28C0:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C28C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C28D0;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C28D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c28ec
	if (ctx.cr6.eq) goto loc_820C28EC;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C28E8;
	sub_82183448(ctx, base);
	// b 0x820c28f4
	goto loc_820C28F4;
loc_820C28EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C28F4;
	sub_821845A0(ctx, base);
loc_820C28F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2910
	if (ctx.cr6.eq) goto loc_820C2910;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c2914
	goto loc_820C2914;
loc_820C2910:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2914:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C291C;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2928;
	sub_820D8C68(ctx, base);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// ble cr6,0x820c29c0
	if (!ctx.cr6.gt) goto loc_820C29C0;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r30,r3,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x820c2948
	if (!ctx.cr6.gt) goto loc_820C2948;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C2948:
	// bl 0x82183850
	ctx.lr = 0x820C294C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2964
	if (ctx.cr6.eq) goto loc_820C2964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2960;
	sub_82183448(ctx, base);
	// b 0x820c2970
	goto loc_820C2970;
loc_820C2964:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2970;
	sub_821845A0(ctx, base);
loc_820C2970:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c29c0
	if (!ctx.cr6.gt) goto loc_820C29C0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2988:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2990;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C29A0;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c2988
	if (ctx.cr6.lt) goto loc_820C2988;
loc_820C29C0:
	// stw r31,1668(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1668, ctx.r31.u32);
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C29D0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c29ec
	if (ctx.cr6.eq) goto loc_820C29EC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C29E4;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c29f0
	goto loc_820C29F0;
loc_820C29EC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C29F0:
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C29FC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2a18
	if (ctx.cr6.eq) goto loc_820C2A18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2A10;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2a1c
	goto loc_820C2A1C;
loc_820C2A18:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2A1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2A28;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2A2C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c2a44
	if (ctx.cr6.eq) goto loc_820C2A44;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C2A40;
	sub_82183448(ctx, base);
	// b 0x820c2a4c
	goto loc_820C2A4C;
loc_820C2A44:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C2A4C;
	sub_821845A0(ctx, base);
loc_820C2A4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2a68
	if (ctx.cr6.eq) goto loc_820C2A68;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c2a6c
	goto loc_820C2A6C;
loc_820C2A68:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2A6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2A74;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2A80;
	sub_820D8C68(ctx, base);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// ble cr6,0x820c2b18
	if (!ctx.cr6.gt) goto loc_820C2B18;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r30,r3,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x820c2aa0
	if (!ctx.cr6.gt) goto loc_820C2AA0;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C2AA0:
	// bl 0x82183850
	ctx.lr = 0x820C2AA4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2abc
	if (ctx.cr6.eq) goto loc_820C2ABC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2AB8;
	sub_82183448(ctx, base);
	// b 0x820c2ac8
	goto loc_820C2AC8;
loc_820C2ABC:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2AC8;
	sub_821845A0(ctx, base);
loc_820C2AC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c2b18
	if (!ctx.cr6.gt) goto loc_820C2B18;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2AE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2AE8;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2AF8;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c2ae0
	if (ctx.cr6.lt) goto loc_820C2AE0;
loc_820C2B18:
	// stw r31,1672(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1672, ctx.r31.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2B28;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2b44
	if (ctx.cr6.eq) goto loc_820C2B44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C2B3C;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2b48
	goto loc_820C2B48;
loc_820C2B44:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2B48:
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2B54;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2b70
	if (ctx.cr6.eq) goto loc_820C2B70;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2B68;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2b74
	goto loc_820C2B74;
loc_820C2B70:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2B74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2B80;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2B84;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c2b9c
	if (ctx.cr6.eq) goto loc_820C2B9C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C2B98;
	sub_82183448(ctx, base);
	// b 0x820c2ba4
	goto loc_820C2BA4;
loc_820C2B9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C2BA4;
	sub_821845A0(ctx, base);
loc_820C2BA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2bc0
	if (ctx.cr6.eq) goto loc_820C2BC0;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c2bc4
	goto loc_820C2BC4;
loc_820C2BC0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2BC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2BCC;
	sub_820D8C68(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2BD8;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// rlwinm r31,r3,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x820c2bec
	if (!ctx.cr6.gt) goto loc_820C2BEC;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820C2BEC:
	// bl 0x82183850
	ctx.lr = 0x820C2BF0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2c08
	if (ctx.cr6.eq) goto loc_820C2C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2C04;
	sub_82183448(ctx, base);
	// b 0x820c2c14
	goto loc_820C2C14;
loc_820C2C08:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2C14;
	sub_821845A0(ctx, base);
loc_820C2C14:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c2c64
	if (!ctx.cr6.gt) goto loc_820C2C64;
loc_820C2C28:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_820C2C30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c28
	ctx.lr = 0x820C2C38;
	sub_820D8C28(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// sthx r3,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u16);
	// blt cr6,0x820c2c30
	if (ctx.cr6.lt) goto loc_820C2C30;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820c2c28
	if (ctx.cr6.lt) goto loc_820C2C28;
loc_820C2C64:
	// stw r30,1676(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1676, ctx.r30.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2C74;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2c90
	if (ctx.cr6.eq) goto loc_820C2C90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C2C88;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2c94
	goto loc_820C2C94;
loc_820C2C90:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2C94:
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2CA0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2cbc
	if (ctx.cr6.eq) goto loc_820C2CBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2CB4;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2cc0
	goto loc_820C2CC0;
loc_820C2CBC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2CC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2CCC;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2CD0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c2ce8
	if (ctx.cr6.eq) goto loc_820C2CE8;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x820C2CE4;
	sub_82183448(ctx, base);
	// b 0x820c2cf0
	goto loc_820C2CF0;
loc_820C2CE8:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x820C2CF0;
	sub_821845A0(ctx, base);
loc_820C2CF0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2d08
	if (ctx.cr6.eq) goto loc_820C2D08;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// b 0x820c2d0c
	goto loc_820C2D0C;
loc_820C2D08:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2D0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2D14;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2D20;
	sub_820D8C68(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8d08
	ctx.lr = 0x820C2D2C;
	sub_820D8D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x821847a8
	ctx.lr = 0x820C2D3C;
	sub_821847A8(ctx, base);
	// stw r31,1680(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1680, ctx.r31.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2D4C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2d68
	if (ctx.cr6.eq) goto loc_820C2D68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C2D60;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2d6c
	goto loc_820C2D6C;
loc_820C2D68:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2D6C:
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2D78;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2d94
	if (ctx.cr6.eq) goto loc_820C2D94;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2D8C;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2d98
	goto loc_820C2D98;
loc_820C2D94:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2D98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2DA4;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2DA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c2dc0
	if (ctx.cr6.eq) goto loc_820C2DC0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C2DBC;
	sub_82183448(ctx, base);
	// b 0x820c2dc8
	goto loc_820C2DC8;
loc_820C2DC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C2DC8;
	sub_821845A0(ctx, base);
loc_820C2DC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2de4
	if (ctx.cr6.eq) goto loc_820C2DE4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c2de8
	goto loc_820C2DE8;
loc_820C2DE4:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2DE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2DF0;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2DFC;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820c2e10
	if (!ctx.cr6.gt) goto loc_820C2E10;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C2E10:
	// bl 0x82183850
	ctx.lr = 0x820C2E14;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2e2c
	if (ctx.cr6.eq) goto loc_820C2E2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2E28;
	sub_82183448(ctx, base);
	// b 0x820c2e38
	goto loc_820C2E38;
loc_820C2E2C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2E38;
	sub_821845A0(ctx, base);
loc_820C2E38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c2e74
	if (!ctx.cr6.gt) goto loc_820C2E74;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820C2E50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2E58;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820c2e50
	if (ctx.cr6.lt) goto loc_820C2E50;
loc_820C2E74:
	// stw r31,1684(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1684, ctx.r31.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2E84;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2ea0
	if (ctx.cr6.eq) goto loc_820C2EA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C2E98;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c2ea4
	goto loc_820C2EA4;
loc_820C2EA0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2EA4:
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C2EB0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c2ecc
	if (ctx.cr6.eq) goto loc_820C2ECC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C2EC4;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c2ed0
	goto loc_820C2ED0;
loc_820C2ECC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C2ED0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C2EDC;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C2EE0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c2ef8
	if (ctx.cr6.eq) goto loc_820C2EF8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x820C2EF4;
	sub_82183448(ctx, base);
	// b 0x820c2f00
	goto loc_820C2F00;
loc_820C2EF8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820C2F00;
	sub_821845A0(ctx, base);
loc_820C2F00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2f28
	if (ctx.cr6.eq) goto loc_820C2F28;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r23,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r23.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r23.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// b 0x820c2f2c
	goto loc_820C2F2C;
loc_820C2F28:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C2F2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2F34;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2F40;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820c2f54
	if (!ctx.cr6.gt) goto loc_820C2F54;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C2F54:
	// bl 0x82183850
	ctx.lr = 0x820C2F58;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2f70
	if (ctx.cr6.eq) goto loc_820C2F70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2F6C;
	sub_82183448(ctx, base);
	// b 0x820c2f7c
	goto loc_820C2F7C;
loc_820C2F70:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2F7C;
	sub_821845A0(ctx, base);
loc_820C2F7C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820c2f94
	if (!ctx.cr6.gt) goto loc_820C2F94;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C2F94:
	// bl 0x82183850
	ctx.lr = 0x820C2F98;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c2fb0
	if (ctx.cr6.eq) goto loc_820C2FB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C2FAC;
	sub_82183448(ctx, base);
	// b 0x820c2fbc
	goto loc_820C2FBC;
loc_820C2FB0:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C2FBC;
	sub_821845A0(ctx, base);
loc_820C2FBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c3008
	if (!ctx.cr6.gt) goto loc_820C3008;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C2FD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2FDC;
	sub_820D8C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C2FEC;
	sub_820D8C68(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c2fd4
	if (ctx.cr6.lt) goto loc_820C2FD4;
loc_820C3008:
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C3014;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c3030
	if (ctx.cr6.eq) goto loc_820C3030;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C3028;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820c3034
	goto loc_820C3034;
loc_820C3030:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C3034:
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C3040;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c305c
	if (ctx.cr6.eq) goto loc_820C305C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C3054;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c3060
	goto loc_820C3060;
loc_820C305C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C3060:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C306C;
	sub_820D8BE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C3074;
	sub_820D8C68(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C3080;
	sub_820D8C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwinm r29,r3,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x820c3098
	if (!ctx.cr6.gt) goto loc_820C3098;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_820C3098:
	// bl 0x82183850
	ctx.lr = 0x820C309C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c30b4
	if (ctx.cr6.eq) goto loc_820C30B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x820C30B0;
	sub_82183448(ctx, base);
	// b 0x820c30c0
	goto loc_820C30C0;
loc_820C30B4:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C30C0;
	sub_821845A0(ctx, base);
loc_820C30C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c30f0
	if (ctx.cr6.eq) goto loc_820C30F0;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820c30e8
	if (ctx.cr0.lt) goto loc_820C30E8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820C30DC:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stwu r23,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820c30dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C30DC;
loc_820C30E8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820c30f4
	goto loc_820C30F4;
loc_820C30F0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_820C30F4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820c3144
	if (!ctx.cr6.gt) goto loc_820C3144;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_820C310C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C3114;
	sub_820D8C68(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C3124;
	sub_820D8C68(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c310c
	if (ctx.cr6.lt) goto loc_820C310C;
loc_820C3144:
	// stw r31,1688(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1688, ctx.r31.u32);
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C3154;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c3170
	if (ctx.cr6.eq) goto loc_820C3170;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218ab00
	ctx.lr = 0x820C3168;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820c3174
	goto loc_820C3174;
loc_820C3170:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C3174:
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a810
	ctx.lr = 0x820C3180;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820c319c
	if (ctx.cr6.eq) goto loc_820C319C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218abc0
	ctx.lr = 0x820C3194;
	sub_8218ABC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820c31a0
	goto loc_820C31A0;
loc_820C319C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_820C31A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8be0
	ctx.lr = 0x820C31AC;
	sub_820D8BE0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820C31B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c31c8
	if (ctx.cr6.eq) goto loc_820C31C8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x820C31C4;
	sub_82183448(ctx, base);
	// b 0x820c31d0
	goto loc_820C31D0;
loc_820C31C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820C31D0;
	sub_821845A0(ctx, base);
loc_820C31D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c31ec
	if (ctx.cr6.eq) goto loc_820C31EC;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// b 0x820c31f0
	goto loc_820C31F0;
loc_820C31EC:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C31F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C31F8;
	sub_820D8C68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c68
	ctx.lr = 0x820C3204;
	sub_820D8C68(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820c3218
	if (!ctx.cr6.gt) goto loc_820C3218;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_820C3218:
	// bl 0x82183850
	ctx.lr = 0x820C321C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820c3234
	if (ctx.cr6.eq) goto loc_820C3234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820C3230;
	sub_82183448(ctx, base);
	// b 0x820c3240
	goto loc_820C3240;
loc_820C3234:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820C3240;
	sub_821845A0(ctx, base);
loc_820C3240:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c327c
	if (!ctx.cr6.gt) goto loc_820C327C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820C3258:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8cb8
	ctx.lr = 0x820C3260;
	sub_820D8CB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfsx f1,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820c3258
	if (ctx.cr6.lt) goto loc_820C3258;
loc_820C327C:
	// stw r31,1692(r21)
	PPC_STORE_U32(ctx.r21.u32 + 1692, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a7f0
	ctx.lr = 0x820C3288;
	sub_8218A7F0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821837d0
	ctx.lr = 0x820C3290;
	sub_821837D0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_820C3298"))) PPC_WEAK_FUNC(sub_820C3298);
PPC_FUNC_IMPL(__imp__sub_820C3298) {
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
	// bl 0x820c09c0
	ctx.lr = 0x820C32B0;
	sub_820C09C0(ctx, base);
	// addi r3,r31,2112
	ctx.r3.s64 = ctx.r31.s64 + 2112;
	// bl 0x820d7380
	ctx.lr = 0x820C32B8;
	sub_820D7380(ctx, base);
	// addi r3,r31,2100
	ctx.r3.s64 = ctx.r31.s64 + 2100;
	// bl 0x820d6408
	ctx.lr = 0x820C32C0;
	sub_820D6408(ctx, base);
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// bl 0x820d6408
	ctx.lr = 0x820C32C8;
	sub_820D6408(ctx, base);
	// addi r3,r31,2052
	ctx.r3.s64 = ctx.r31.s64 + 2052;
	// bl 0x820d7da8
	ctx.lr = 0x820C32D0;
	sub_820D7DA8(ctx, base);
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// bl 0x820ca070
	ctx.lr = 0x820C32D8;
	sub_820CA070(ctx, base);
	// addi r3,r31,1628
	ctx.r3.s64 = ctx.r31.s64 + 1628;
	// bl 0x820d88f0
	ctx.lr = 0x820C32E0;
	sub_820D88F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C32F4"))) PPC_WEAK_FUNC(sub_820C32F4);
PPC_FUNC_IMPL(__imp__sub_820C32F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C32F8"))) PPC_WEAK_FUNC(sub_820C32F8);
PPC_FUNC_IMPL(__imp__sub_820C32F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-8540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,1636(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3324"))) PPC_WEAK_FUNC(sub_820C3324);
PPC_FUNC_IMPL(__imp__sub_820C3324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3328"))) PPC_WEAK_FUNC(sub_820C3328);
PPC_FUNC_IMPL(__imp__sub_820C3328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c3340
	if (!ctx.cr6.eq) goto loc_820C3340;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C3340:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3350"))) PPC_WEAK_FUNC(sub_820C3350);
PPC_FUNC_IMPL(__imp__sub_820C3350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c33b0
	if (ctx.cr6.eq) goto loc_820C33B0;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820c33b0
	if (!ctx.cr6.eq) goto loc_820C33B0;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r11,-8540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8616(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,1636(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
loc_820C33B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C33BC"))) PPC_WEAK_FUNC(sub_820C33BC);
PPC_FUNC_IMPL(__imp__sub_820C33BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C33C0"))) PPC_WEAK_FUNC(sub_820C33C0);
PPC_FUNC_IMPL(__imp__sub_820C33C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,1924(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,1008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c33f0
	if (ctx.cr6.eq) goto loc_820C33F0;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x820c33f0
	if (ctx.cr6.gt) goto loc_820C33F0;
loc_820C33DC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820c33fc
	if (ctx.cr6.eq) goto loc_820C33FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x820c33dc
	if (!ctx.cr6.gt) goto loc_820C33DC;
loc_820C33F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820C33FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c33f0
	if (ctx.cr6.eq) goto loc_820C33F0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c33f0
	if (!ctx.cr6.eq) goto loc_820C33F0;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-8540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8616(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,1636(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3454"))) PPC_WEAK_FUNC(sub_820C3454);
PPC_FUNC_IMPL(__imp__sub_820C3454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3458"))) PPC_WEAK_FUNC(sub_820C3458);
PPC_FUNC_IMPL(__imp__sub_820C3458) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x820c3484
	if (ctx.cr6.lt) goto loc_820C3484;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,5
	ctx.xer.ca = ctx.r4.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r4.s64;
	// subfze. r11,r10
	// beq 0x820c3544
	if (ctx.cr0.eq) goto loc_820C3544;
	// addi r11,r3,-128
	ctx.r11.s64 = ctx.r3.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3484:
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x820c34b4
	if (ctx.cr6.lt) goto loc_820C34B4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r4.s64;
	// subfze. r11,r10
	// beq 0x820c3544
	if (ctx.cr0.eq) goto loc_820C3544;
	// addi r11,r3,-64
	ctx.r11.s64 = ctx.r3.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C34B4:
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// blt cr6,0x820c34e4
	if (ctx.cr6.lt) goto loc_820C34E4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,3
	ctx.xer.ca = ctx.r4.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r4.s64;
	// subfze. r11,r10
	// beq 0x820c3544
	if (ctx.cr0.eq) goto loc_820C3544;
	// addi r11,r3,-32
	ctx.r11.s64 = ctx.r3.s64 + -32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C34E4:
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// blt cr6,0x820c3514
	if (ctx.cr6.lt) goto loc_820C3514;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,2
	ctx.xer.ca = ctx.r4.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r4.s64;
	// subfze. r11,r10
	// beq 0x820c3544
	if (ctx.cr0.eq) goto loc_820C3544;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3514:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x820c3544
	if (ctx.cr6.lt) goto loc_820C3544;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r4.s64;
	// subfze. r11,r10
	// beq 0x820c3544
	if (ctx.cr0.eq) goto loc_820C3544;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3544:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C354C"))) PPC_WEAK_FUNC(sub_820C354C);
PPC_FUNC_IMPL(__imp__sub_820C354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3550"))) PPC_WEAK_FUNC(sub_820C3550);
PPC_FUNC_IMPL(__imp__sub_820C3550) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c3570
	if (ctx.cr6.lt) goto loc_820C3570;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3570:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c3590
	if (ctx.cr6.lt) goto loc_820C3590;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3590:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3598"))) PPC_WEAK_FUNC(sub_820C3598);
PPC_FUNC_IMPL(__imp__sub_820C3598) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c35b8
	if (ctx.cr6.lt) goto loc_820C35B8;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C35B8:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c35d8
	if (ctx.cr6.lt) goto loc_820C35D8;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C35D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C35E0"))) PPC_WEAK_FUNC(sub_820C35E0);
PPC_FUNC_IMPL(__imp__sub_820C35E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c35f4
	if (!ctx.cr6.eq) goto loc_820C35F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_820C35F4:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,5,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xE0;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C360C"))) PPC_WEAK_FUNC(sub_820C360C);
PPC_FUNC_IMPL(__imp__sub_820C360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3610"))) PPC_WEAK_FUNC(sub_820C3610);
PPC_FUNC_IMPL(__imp__sub_820C3610) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c3624
	if (!ctx.cr6.eq) goto loc_820C3624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// blr 
	return;
loc_820C3624:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C363C"))) PPC_WEAK_FUNC(sub_820C363C);
PPC_FUNC_IMPL(__imp__sub_820C363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3640"))) PPC_WEAK_FUNC(sub_820C3640);
PPC_FUNC_IMPL(__imp__sub_820C3640) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// sth r11,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r11.u16);
	// sth r11,70(r3)
	PPC_STORE_U16(ctx.r3.u32 + 70, ctx.r11.u16);
	// sth r11,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r11.u16);
	// sth r11,74(r3)
	PPC_STORE_U16(ctx.r3.u32 + 74, ctx.r11.u16);
	// sth r11,76(r3)
	PPC_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// std r11,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C36A4"))) PPC_WEAK_FUNC(sub_820C36A4);
PPC_FUNC_IMPL(__imp__sub_820C36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C36A8"))) PPC_WEAK_FUNC(sub_820C36A8);
PPC_FUNC_IMPL(__imp__sub_820C36A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820c36c0
	if (ctx.cr6.eq) goto loc_820C36C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C36C0:
	// lhz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 54);
	// lhz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C36D8"))) PPC_WEAK_FUNC(sub_820C36D8);
PPC_FUNC_IMPL(__imp__sub_820C36D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c36ec
	if (ctx.cr6.lt) goto loc_820C36EC;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_820C36EC:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c36fc
	if (ctx.cr6.lt) goto loc_820C36FC;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_820C36FC:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c370c
	if (ctx.cr6.lt) goto loc_820C370C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_820C370C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c371c
	if (ctx.cr6.lt) goto loc_820C371C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_820C371C:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3730"))) PPC_WEAK_FUNC(sub_820C3730);
PPC_FUNC_IMPL(__imp__sub_820C3730) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c3750
	if (ctx.cr6.lt) goto loc_820C3750;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3750:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c3770
	if (ctx.cr6.lt) goto loc_820C3770;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_820C3770:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3778"))) PPC_WEAK_FUNC(sub_820C3778);
PPC_FUNC_IMPL(__imp__sub_820C3778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c37a0
	if (ctx.cr6.eq) goto loc_820C37A0;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820c37a0
	if (ctx.cr6.eq) goto loc_820C37A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C37A0:
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c37c0
	if (ctx.cr6.lt) goto loc_820C37C0;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x820c37e4
	goto loc_820C37E4;
loc_820C37C0:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c37e0
	if (ctx.cr6.lt) goto loc_820C37E0;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x820c37e4
	goto loc_820C37E4;
loc_820C37E0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820C37E4:
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c3804
	if (ctx.cr6.lt) goto loc_820C3804;
	// addi r10,r11,-128
	ctx.r10.s64 = ctx.r11.s64 + -128;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x820c3828
	goto loc_820C3828;
loc_820C3804:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c3824
	if (ctx.cr6.lt) goto loc_820C3824;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x820c3828
	goto loc_820C3828;
loc_820C3824:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820C3828:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c3894
	if (ctx.cr6.eq) goto loc_820C3894;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c385c
	if (ctx.cr6.lt) goto loc_820C385C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c3880
	goto loc_820C3880;
loc_820C385C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c387c
	if (ctx.cr6.lt) goto loc_820C387C;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c3880
	goto loc_820C3880;
loc_820C387C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C3880:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820C3894:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C389C"))) PPC_WEAK_FUNC(sub_820C389C);
PPC_FUNC_IMPL(__imp__sub_820C389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C38A0"))) PPC_WEAK_FUNC(sub_820C38A0);
PPC_FUNC_IMPL(__imp__sub_820C38A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c38c8
	if (ctx.cr6.eq) goto loc_820C38C8;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820c38c8
	if (ctx.cr6.eq) goto loc_820C38C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C38C8:
	// lbz r11,49(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c38e8
	if (ctx.cr6.lt) goto loc_820C38E8;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x820c390c
	goto loc_820C390C;
loc_820C38E8:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c3908
	if (ctx.cr6.lt) goto loc_820C3908;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// b 0x820c390c
	goto loc_820C390C;
loc_820C3908:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820C390C:
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c392c
	if (ctx.cr6.lt) goto loc_820C392C;
	// addi r10,r11,-128
	ctx.r10.s64 = ctx.r11.s64 + -128;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x820c3950
	goto loc_820C3950;
loc_820C392C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c394c
	if (ctx.cr6.lt) goto loc_820C394C;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x820c3950
	goto loc_820C3950;
loc_820C394C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820C3950:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c39bc
	if (ctx.cr6.eq) goto loc_820C39BC;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c3984
	if (ctx.cr6.lt) goto loc_820C3984;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c39a8
	goto loc_820C39A8;
loc_820C3984:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c39a4
	if (ctx.cr6.lt) goto loc_820C39A4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c39a8
	goto loc_820C39A8;
loc_820C39A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C39A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820C39BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C39C4"))) PPC_WEAK_FUNC(sub_820C39C4);
PPC_FUNC_IMPL(__imp__sub_820C39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C39C8"))) PPC_WEAK_FUNC(sub_820C39C8);
PPC_FUNC_IMPL(__imp__sub_820C39C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c39ec
	if (ctx.cr6.eq) goto loc_820C39EC;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820C39EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C39F4"))) PPC_WEAK_FUNC(sub_820C39F4);
PPC_FUNC_IMPL(__imp__sub_820C39F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C39F8"))) PPC_WEAK_FUNC(sub_820C39F8);
PPC_FUNC_IMPL(__imp__sub_820C39F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3a1c
	if (ctx.cr6.eq) goto loc_820C3A1C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820C3A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3A24"))) PPC_WEAK_FUNC(sub_820C3A24);
PPC_FUNC_IMPL(__imp__sub_820C3A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3A28"))) PPC_WEAK_FUNC(sub_820C3A28);
PPC_FUNC_IMPL(__imp__sub_820C3A28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c3a54
	if (ctx.cr6.lt) goto loc_820C3A54;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820C3A54:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c3a80
	if (ctx.cr6.lt) goto loc_820C3A80;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820C3A80:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3A94"))) PPC_WEAK_FUNC(sub_820C3A94);
PPC_FUNC_IMPL(__imp__sub_820C3A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3A98"))) PPC_WEAK_FUNC(sub_820C3A98);
PPC_FUNC_IMPL(__imp__sub_820C3A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3AA4"))) PPC_WEAK_FUNC(sub_820C3AA4);
PPC_FUNC_IMPL(__imp__sub_820C3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3AA8"))) PPC_WEAK_FUNC(sub_820C3AA8);
PPC_FUNC_IMPL(__imp__sub_820C3AA8) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C3ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c3af0
	if (ctx.cr6.eq) goto loc_820C3AF0;
	// lwz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C3AF0:
	// lwz r3,1280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3B08"))) PPC_WEAK_FUNC(sub_820C3B08);
PPC_FUNC_IMPL(__imp__sub_820C3B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820C3B34;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82185740
	ctx.lr = 0x820C3B44;
	sub_82185740(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r9,13592
	ctx.r7.s64 = ctx.r9.s64 + 13592;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r6,r8,13584
	ctx.r6.s64 = ctx.r8.s64 + 13584;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// sth r11,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r11.u16);
	// sth r11,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r11.u16);
	// sth r11,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// sth r11,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3BE0"))) PPC_WEAK_FUNC(sub_820C3BE0);
PPC_FUNC_IMPL(__imp__sub_820C3BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187220
	ctx.lr = 0x820C3C2C;
	sub_82187220(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82187200
	ctx.lr = 0x820C3C38;
	sub_82187200(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,13660(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13660);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// ble cr6,0x820c3c5c
	if (!ctx.cr6.gt) goto loc_820C3C5C;
	// li r10,5
	ctx.r10.s64 = 5;
loc_820C3C5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// lfs f0,2136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f0,8272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// clrlwi r11,r8,20
	ctx.r11.u64 = ctx.r8.u32 & 0xFFF;
	// bne cr6,0x820c3cac
	if (!ctx.cr6.eq) goto loc_820C3CAC;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7F;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C3CAC:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820c3cd4
	if (!ctx.cr6.eq) goto loc_820C3CD4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,26,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3F;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C3CD4:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820c3cfc
	if (!ctx.cr6.eq) goto loc_820C3CFC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r11,r11,25,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1F;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C3CFC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820c3d24
	if (!ctx.cr6.eq) goto loc_820C3D24;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// rlwinm r11,r11,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C3D24:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820c3d4c
	if (!ctx.cr6.eq) goto loc_820C3D4C;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C3D4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_820C3D64"))) PPC_WEAK_FUNC(sub_820C3D64);
PPC_FUNC_IMPL(__imp__sub_820C3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3D68"))) PPC_WEAK_FUNC(sub_820C3D68);
PPC_FUNC_IMPL(__imp__sub_820C3D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820C3D70;
	sub_82248788(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8218e938
	ctx.lr = 0x820C3D98;
	sub_8218E938(ctx, base);
	// clrlwi r28,r29,31
	ctx.r28.u64 = ctx.r29.u32 & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820c3e34
	if (ctx.cr6.eq) goto loc_820C3E34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C3DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C3DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r10,0,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C3E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,3,28,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x820c3eb8
	goto loc_820C3EB8;
loc_820C3E34:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C3E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C3E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r10,0,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C3E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,3,28,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_820C3EB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C3EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// subfe r5,r6,r3
	temp.u8 = (~ctx.r6.u32 + ctx.r3.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r7,r5,1,30,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x820c41f0
	if (ctx.cr6.eq) goto loc_820C41F0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C3EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,6,25,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x40) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C3F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r8,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C3F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,7,24,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x80) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C3F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r6,r4,5,26,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C3FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,11,20,20
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x800) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C3FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r8,13,18,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 13) & 0x2000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C4000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,10,21,21
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C402C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r6,r4,12,19,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfe r7,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r7,14,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 14) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820C4070;
	sub_8215BD60(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820c41e8
	if (ctx.cr6.eq) goto loc_820C41E8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C40AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C40C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C40E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C411C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C418C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C41A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c41d0
	if (!ctx.cr6.eq) goto loc_820C41D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C41C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820c41d4
	if (ctx.cr6.eq) goto loc_820C41D4;
loc_820C41D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C41D4:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r8,15,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 15) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// b 0x820c4508
	goto loc_820C4508;
loc_820C41E8:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x820c44f0
	goto loc_820C44F0;
loc_820C41F0:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C41FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,6,25,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x40) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C4228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r8,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C4254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,7,24,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x80) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C4280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r6,r4,5,26,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C42AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,11,20,20
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x800) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,52(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C42D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r8,13,18,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 13) & 0x2000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C4304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r10,10,21,21
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C4330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r6,r4,12,19,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C435C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfe r7,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r7,14,17,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 14) & 0x4000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820C4374;
	sub_8215BD60(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820c44ec
	if (ctx.cr6.eq) goto loc_820C44EC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C43B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C43CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C43E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C443C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C44AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c44d4
	if (!ctx.cr6.eq) goto loc_820C44D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C44C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820c44d8
	if (ctx.cr6.eq) goto loc_820C44D8;
loc_820C44D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C44D8:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r8,15,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 15) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// b 0x820c4508
	goto loc_820C4508;
loc_820C44EC:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
loc_820C44F0:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C44F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfe r7,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r7,15,16,16
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 15) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
loc_820C4508:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r6,8,23,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x100) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x820C454C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r4,17
	ctx.r4.s64 = 17;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r10,r8,9,22,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 9) & 0x200) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFDFF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,644(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 644);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C457C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,644(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 644);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C4598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bge cr6,0x820c45bc
	if (!ctx.cr6.lt) goto loc_820C45BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C45B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fneg f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820C45BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C45D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,644(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 644);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C45F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x820c4614
	if (!ctx.cr6.lt) goto loc_820C4614;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fneg f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820C4614:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f29,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x820c462c
	if (ctx.cr6.eq) goto loc_820C462C;
	// fmuls f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
loc_820C462C:
	// fneg f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820c3be0
	ctx.lr = 0x820C4638;
	sub_820C3BE0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stb r3,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r3.u8);
	// lwz r11,-4940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4940);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x820c4658
	if (!ctx.cr6.eq) goto loc_820C4658;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFC000;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_820C4658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r8,644(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 644);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C468C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bge cr6,0x820c46b0
	if (!ctx.cr6.lt) goto loc_820C46B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C46AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fneg f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820C46B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C46C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,644(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 644);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C46E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x820c4708
	if (!ctx.cr6.lt) goto loc_820C4708;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C4704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fneg f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820C4708:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820c4718
	if (ctx.cr6.eq) goto loc_820C4718;
	// fmuls f30,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
loc_820C4718:
	// fneg f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820c3be0
	ctx.lr = 0x820C4724;
	sub_820C3BE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_820C4744"))) PPC_WEAK_FUNC(sub_820C4744);
PPC_FUNC_IMPL(__imp__sub_820C4744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4748"))) PPC_WEAK_FUNC(sub_820C4748);
PPC_FUNC_IMPL(__imp__sub_820C4748) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c475c
	if (ctx.cr6.lt) goto loc_820C475C;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// blr 
	return;
loc_820C475C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c4770
	if (ctx.cr6.lt) goto loc_820C4770;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_820C4770:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c4784
	if (ctx.cr6.lt) goto loc_820C4784;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
loc_820C4784:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c4798
	if (ctx.cr6.lt) goto loc_820C4798;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
loc_820C4798:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x820c47ac
	if (ctx.cr6.lt) goto loc_820C47AC;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// blr 
	return;
loc_820C47AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C47B4"))) PPC_WEAK_FUNC(sub_820C47B4);
PPC_FUNC_IMPL(__imp__sub_820C47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C47B8"))) PPC_WEAK_FUNC(sub_820C47B8);
PPC_FUNC_IMPL(__imp__sub_820C47B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c47cc
	if (!ctx.cr6.eq) goto loc_820C47CC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820C47CC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// lfs f13,404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,8272(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9860(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9860);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fctidz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,20,0,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFF00000;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f3,-16(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmadds f0,f1,f12,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// rlwinm r3,r11,23,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4860"))) PPC_WEAK_FUNC(sub_820C4860);
PPC_FUNC_IMPL(__imp__sub_820C4860) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-28368
	ctx.r10.s64 = ctx.r11.s64 + -28368;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x820c4898
	if (!ctx.cr6.eq) goto loc_820C4898;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C4898:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
loc_820C48BC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x820c4b50
	if (ctx.cr6.eq) goto loc_820C4B50;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x820c4978
	if (ctx.cr6.gt) goto loc_820C4978;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820c48f8
	if (!ctx.cr6.eq) goto loc_820C48F8;
	// lhz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 72);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C48F8:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820c4918
	if (!ctx.cr6.eq) goto loc_820C4918;
	// lhz r11,54(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 54);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4918:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x820c4938
	if (!ctx.cr6.eq) goto loc_820C4938;
	// lhz r11,68(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 68);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4938:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x820c4958
	if (!ctx.cr6.eq) goto loc_820C4958;
	// lhz r11,70(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 70);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4958:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x820c4964
	if (!ctx.cr6.eq) goto loc_820C4964;
	// lhz r11,50(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 50);
loc_820C4964:
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4978:
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// bne cr6,0x820c4a10
	if (!ctx.cr6.eq) goto loc_820C4A10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820c49d8
	if (!ctx.cr6.eq) goto loc_820C49D8;
	// lbz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 48);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c499c
	if (ctx.cr6.lt) goto loc_820C499C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// b 0x820c49ac
	goto loc_820C49AC;
loc_820C499C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c49c0
	if (ctx.cr6.lt) goto loc_820C49C0;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_820C49AC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4b4c
	if (!ctx.cr6.eq) goto loc_820C4B4C;
loc_820C49C0:
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
	// bl 0x820c3550
	ctx.lr = 0x820C49C8;
	sub_820C3550(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x820c4a78
	goto loc_820C4A78;
loc_820C49D8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820c49fc
	if (!ctx.cr6.eq) goto loc_820C49FC;
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
	// bl 0x820c3550
	ctx.lr = 0x820C49F8;
	sub_820C3550(ctx, base);
	// b 0x820c4a68
	goto loc_820C4A68;
loc_820C49FC:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x820c4a70
	if (!ctx.cr6.eq) goto loc_820C4A70;
	// addi r3,r8,48
	ctx.r3.s64 = ctx.r8.s64 + 48;
	// bl 0x820c3550
	ctx.lr = 0x820C4A0C;
	sub_820C3550(ctx, base);
	// b 0x820c4a68
	goto loc_820C4A68;
loc_820C4A10:
	// cmplwi cr6,r10,41
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 41, ctx.xer);
	// bne cr6,0x820c4a98
	if (!ctx.cr6.eq) goto loc_820C4A98;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820c4a48
	if (!ctx.cr6.eq) goto loc_820C4A48;
	// addi r3,r8,48
	ctx.r3.s64 = ctx.r8.s64 + 48;
	// bl 0x820c3598
	ctx.lr = 0x820C4A28;
	sub_820C3598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4b4c
	if (!ctx.cr6.eq) goto loc_820C4B4C;
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
	// bl 0x820c3598
	ctx.lr = 0x820C4A38;
	sub_820C3598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x820c4a78
	goto loc_820C4A78;
loc_820C4A48:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820c4a88
	if (!ctx.cr6.eq) goto loc_820C4A88;
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
loc_820C4A64:
	// bl 0x820c3598
	ctx.lr = 0x820C4A68;
	sub_820C3598(ctx, base);
loc_820C4A68:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820C4A70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c4b4c
	if (ctx.cr6.eq) goto loc_820C4B4C;
loc_820C4A78:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bge cr6,0x820c4b50
	if (!ctx.cr6.lt) goto loc_820C4B50;
	// b 0x820c48bc
	goto loc_820C48BC;
loc_820C4A88:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x820c4a70
	if (!ctx.cr6.eq) goto loc_820C4A70;
	// addi r3,r8,48
	ctx.r3.s64 = ctx.r8.s64 + 48;
	// b 0x820c4a64
	goto loc_820C4A64;
loc_820C4A98:
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// bne cr6,0x820c4b30
	if (!ctx.cr6.eq) goto loc_820C4B30;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820c4ac0
	if (!ctx.cr6.eq) goto loc_820C4AC0;
	// lhz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 72);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4AC0:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820c4adc
	if (!ctx.cr6.eq) goto loc_820C4ADC;
	// lhz r11,54(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 54);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4ADC:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x820c4af8
	if (!ctx.cr6.eq) goto loc_820C4AF8;
	// lhz r11,68(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 68);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4AF8:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x820c4b14
	if (!ctx.cr6.eq) goto loc_820C4B14;
	// lhz r11,70(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 70);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4B14:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x820c4b20
	if (!ctx.cr6.eq) goto loc_820C4B20;
	// lhz r11,50(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 50);
loc_820C4B20:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4a70
	goto loc_820C4A70;
loc_820C4B30:
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x820c4b4c
	if (!ctx.cr6.eq) goto loc_820C4B4C;
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c4b4c
	if (!ctx.cr6.eq) goto loc_820C4B4C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x820c4a78
	goto loc_820C4A78;
loc_820C4B4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C4B50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4B60"))) PPC_WEAK_FUNC(sub_820C4B60);
PPC_FUNC_IMPL(__imp__sub_820C4B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-28368
	ctx.r10.s64 = ctx.r11.s64 + -28368;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x820c4b88
	if (!ctx.cr6.eq) goto loc_820C4B88;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C4B88:
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
loc_820C4BAC:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820c4bec
	if (ctx.cr6.eq) goto loc_820C4BEC;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x820c4bf4
	if (ctx.cr6.gt) goto loc_820C4BF4;
	// lhz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r10,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820C4BD8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c4c3c
	if (ctx.cr6.eq) goto loc_820C4C3C;
loc_820C4BE0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x820c4bac
	if (ctx.cr6.lt) goto loc_820C4BAC;
loc_820C4BEC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_820C4BF4:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x820c4c3c
	if (ctx.cr6.eq) goto loc_820C4C3C;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x820c4c3c
	if (ctx.cr6.eq) goto loc_820C4C3C;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x820c4c20
	if (!ctx.cr6.eq) goto loc_820C4C20;
	// lhz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4bd8
	goto loc_820C4BD8;
loc_820C4C20:
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820c4c3c
	if (!ctx.cr6.eq) goto loc_820C4C3C;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c4c3c
	if (!ctx.cr6.eq) goto loc_820C4C3C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x820c4be0
	goto loc_820C4BE0;
loc_820C4C3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4C44"))) PPC_WEAK_FUNC(sub_820C4C44);
PPC_FUNC_IMPL(__imp__sub_820C4C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4C48"))) PPC_WEAK_FUNC(sub_820C4C48);
PPC_FUNC_IMPL(__imp__sub_820C4C48) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-28368
	ctx.r10.s64 = ctx.r11.s64 + -28368;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x820c4c80
	if (!ctx.cr6.eq) goto loc_820C4C80;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C4C80:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
loc_820C4CA8:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820c4d64
	if (ctx.cr6.eq) goto loc_820C4D64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x820c4cd4
	if (ctx.cr6.gt) goto loc_820C4CD4;
	// lhz r10,54(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 54);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// and r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 & ctx.r6.u64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4cec
	goto loc_820C4CEC;
loc_820C4CD4:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x820c4d14
	if (!ctx.cr6.eq) goto loc_820C4D14;
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
	// bl 0x820c3550
	ctx.lr = 0x820C4CE4;
	sub_820C3550(ctx, base);
loc_820C4CE4:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820C4CEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c4d60
	if (ctx.cr6.eq) goto loc_820C4D60;
loc_820C4CF4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x820c4ca8
	if (ctx.cr6.lt) goto loc_820C4CA8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C4D14:
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x820c4d28
	if (!ctx.cr6.eq) goto loc_820C4D28;
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
	// bl 0x820c3598
	ctx.lr = 0x820C4D24;
	sub_820C3598(ctx, base);
	// b 0x820c4ce4
	goto loc_820C4CE4;
loc_820C4D28:
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x820c4d44
	if (!ctx.cr6.eq) goto loc_820C4D44;
	// lhz r11,54(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 54);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r3,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4cec
	goto loc_820C4CEC;
loc_820C4D44:
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820c4d60
	if (!ctx.cr6.eq) goto loc_820C4D60;
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c4d60
	if (!ctx.cr6.eq) goto loc_820C4D60;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x820c4cf4
	goto loc_820C4CF4;
loc_820C4D60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C4D64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4D74"))) PPC_WEAK_FUNC(sub_820C4D74);
PPC_FUNC_IMPL(__imp__sub_820C4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4D78"))) PPC_WEAK_FUNC(sub_820C4D78);
PPC_FUNC_IMPL(__imp__sub_820C4D78) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,-28368
	ctx.r10.s64 = ctx.r11.s64 + -28368;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x820c4db0
	if (!ctx.cr6.eq) goto loc_820C4DB0;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C4DB0:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
loc_820C4DD8:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820c4e94
	if (ctx.cr6.eq) goto loc_820C4E94;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x820c4e04
	if (ctx.cr6.gt) goto loc_820C4E04;
	// lhz r10,50(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 50);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// and r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 & ctx.r6.u64;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4e1c
	goto loc_820C4E1C;
loc_820C4E04:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x820c4e44
	if (!ctx.cr6.eq) goto loc_820C4E44;
	// addi r3,r8,48
	ctx.r3.s64 = ctx.r8.s64 + 48;
	// bl 0x820c3550
	ctx.lr = 0x820C4E14;
	sub_820C3550(ctx, base);
loc_820C4E14:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820C4E1C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c4e90
	if (ctx.cr6.eq) goto loc_820C4E90;
loc_820C4E24:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x820c4dd8
	if (ctx.cr6.lt) goto loc_820C4DD8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C4E44:
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x820c4e58
	if (!ctx.cr6.eq) goto loc_820C4E58;
	// addi r3,r8,48
	ctx.r3.s64 = ctx.r8.s64 + 48;
	// bl 0x820c3598
	ctx.lr = 0x820C4E54;
	sub_820C3598(ctx, base);
	// b 0x820c4e14
	goto loc_820C4E14;
loc_820C4E58:
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x820c4e74
	if (!ctx.cr6.eq) goto loc_820C4E74;
	// lhz r11,50(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 50);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r3,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820c4e1c
	goto loc_820C4E1C;
loc_820C4E74:
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820c4e90
	if (!ctx.cr6.eq) goto loc_820C4E90;
	// lwz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c4e90
	if (!ctx.cr6.eq) goto loc_820C4E90;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x820c4e24
	goto loc_820C4E24;
loc_820C4E90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C4E94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C4EA4"))) PPC_WEAK_FUNC(sub_820C4EA4);
PPC_FUNC_IMPL(__imp__sub_820C4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4EA8"))) PPC_WEAK_FUNC(sub_820C4EA8);
PPC_FUNC_IMPL(__imp__sub_820C4EA8) {
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
	ctx.lr = 0x820C4EC0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820c4ed8
	if (ctx.cr6.eq) goto loc_820C4ED8;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82183448
	ctx.lr = 0x820C4ED4;
	sub_82183448(ctx, base);
	// b 0x820c4ee0
	goto loc_820C4EE0;
loc_820C4ED8:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x820C4EE0;
	sub_821845A0(ctx, base);
loc_820C4EE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4f04
	if (ctx.cr6.eq) goto loc_820C4F04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820c3b08
	ctx.lr = 0x820C4EF0;
	sub_820C3B08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C4F04:
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

__attribute__((alias("__imp__sub_820C4F1C"))) PPC_WEAK_FUNC(sub_820C4F1C);
PPC_FUNC_IMPL(__imp__sub_820C4F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4F20"))) PPC_WEAK_FUNC(sub_820C4F20);
PPC_FUNC_IMPL(__imp__sub_820C4F20) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820c3d68
	sub_820C3D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4F28"))) PPC_WEAK_FUNC(sub_820C4F28);
PPC_FUNC_IMPL(__imp__sub_820C4F28) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C4F44;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5034
	if (ctx.cr6.eq) goto loc_820C5034;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820c4ff0
	if (!ctx.cr6.eq) goto loc_820C4FF0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4f84
	if (ctx.cr6.eq) goto loc_820C4F84;
loc_820C4F6C:
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
loc_820C4F84:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4fa8
	if (ctx.cr6.eq) goto loc_820C4FA8;
loc_820C4F90:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C4FA8:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4fcc
	if (ctx.cr6.eq) goto loc_820C4FCC;
loc_820C4FB4:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C4FCC:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5034
	if (ctx.cr6.eq) goto loc_820C5034;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C4FF0:
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r3,53(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// bl 0x820c3458
	ctx.lr = 0x820C4FFC;
	sub_820C3458(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5034
	if (ctx.cr6.eq) goto loc_820C5034;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820c4f6c
	if (ctx.cr6.eq) goto loc_820C4F6C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820c4f90
	if (ctx.cr6.eq) goto loc_820C4F90;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820c4fb4
	if (ctx.cr6.eq) goto loc_820C4FB4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// beq cr6,0x820c5038
	if (ctx.cr6.eq) goto loc_820C5038;
loc_820C5034:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C5038:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C504C"))) PPC_WEAK_FUNC(sub_820C504C);
PPC_FUNC_IMPL(__imp__sub_820C504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5050"))) PPC_WEAK_FUNC(sub_820C5050);
PPC_FUNC_IMPL(__imp__sub_820C5050) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C505C"))) PPC_WEAK_FUNC(sub_820C505C);
PPC_FUNC_IMPL(__imp__sub_820C505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5060"))) PPC_WEAK_FUNC(sub_820C5060);
PPC_FUNC_IMPL(__imp__sub_820C5060) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820c4d78
	sub_820C4D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5068"))) PPC_WEAK_FUNC(sub_820C5068);
PPC_FUNC_IMPL(__imp__sub_820C5068) {
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
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C5084;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c50a4
	if (!ctx.cr6.eq) goto loc_820C50A4;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C5098;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x820c50a8
	if (ctx.cr6.eq) goto loc_820C50A8;
loc_820C50A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820C50A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C50BC"))) PPC_WEAK_FUNC(sub_820C50BC);
PPC_FUNC_IMPL(__imp__sub_820C50BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C50C0"))) PPC_WEAK_FUNC(sub_820C50C0);
PPC_FUNC_IMPL(__imp__sub_820C50C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C50CC"))) PPC_WEAK_FUNC(sub_820C50CC);
PPC_FUNC_IMPL(__imp__sub_820C50CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C50D0"))) PPC_WEAK_FUNC(sub_820C50D0);
PPC_FUNC_IMPL(__imp__sub_820C50D0) {
	PPC_FUNC_PROLOGUE();
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x820c4c48
	sub_820C4C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C50D8"))) PPC_WEAK_FUNC(sub_820C50D8);
PPC_FUNC_IMPL(__imp__sub_820C50D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820c50e8
	if (!ctx.cr6.eq) goto loc_820C50E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820C50E8:
	// rlwinm r11,r4,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0xE0000000;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,-4900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f0,9860(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9860);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 760);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,11880(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11880);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f12,2140(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2136);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820c5148
	if (!ctx.cr6.gt) goto loc_820C5148;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// b 0x820c515c
	goto loc_820C515C;
loc_820C5148:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820c515c
	if (!ctx.cr6.lt) goto loc_820C515C;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_820C515C:
	// fadds f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// rlwinm r3,r10,23,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5180"))) PPC_WEAK_FUNC(sub_820C5180);
PPC_FUNC_IMPL(__imp__sub_820C5180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c51b8
	if (ctx.cr6.lt) goto loc_820C51B8;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x820c51dc
	goto loc_820C51DC;
loc_820C51B8:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c51d8
	if (ctx.cr6.lt) goto loc_820C51D8;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// b 0x820c51dc
	goto loc_820C51DC;
loc_820C51D8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820C51DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c47b8
	ctx.lr = 0x820C51E4;
	sub_820C47B8(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x820c520c
	if (ctx.cr6.lt) goto loc_820C520C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c47b8
	ctx.lr = 0x820C51F4;
	sub_820C47B8(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bgt cr6,0x820c520c
	if (ctx.cr6.gt) goto loc_820C520C;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x820c5240
	goto loc_820C5240;
loc_820C520C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c47b8
	ctx.lr = 0x820C5214;
	sub_820C47B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x820c523c
	if (ctx.cr6.lt) goto loc_820C523C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c47b8
	ctx.lr = 0x820C5224;
	sub_820C47B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x820c523c
	if (ctx.cr6.gt) goto loc_820C523C;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x820c5240
	goto loc_820C5240;
loc_820C523C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C5240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5258"))) PPC_WEAK_FUNC(sub_820C5258);
PPC_FUNC_IMPL(__imp__sub_820C5258) {
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
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C5274;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5294
	if (ctx.cr6.eq) goto loc_820C5294;
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
loc_820C5294:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c52a8
	if (ctx.cr6.lt) goto loc_820C52A8;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820c52e8
	goto loc_820C52E8;
loc_820C52A8:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c52b8
	if (ctx.cr6.lt) goto loc_820C52B8;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820c52e8
	goto loc_820C52E8;
loc_820C52B8:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c52c8
	if (ctx.cr6.lt) goto loc_820C52C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820c52e8
	goto loc_820C52E8;
loc_820C52C8:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c52d8
	if (ctx.cr6.lt) goto loc_820C52D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820c52e8
	goto loc_820C52E8;
loc_820C52D8:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
loc_820C52E8:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5304"))) PPC_WEAK_FUNC(sub_820C5304);
PPC_FUNC_IMPL(__imp__sub_820C5304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5308"))) PPC_WEAK_FUNC(sub_820C5308);
PPC_FUNC_IMPL(__imp__sub_820C5308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820C5310;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f13,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lfs f12,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// blt cr6,0x820c535c
	if (ctx.cr6.lt) goto loc_820C535C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// b 0x820c53b0
	goto loc_820C53B0;
loc_820C535C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c5370
	if (ctx.cr6.lt) goto loc_820C5370;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x820c53b0
	goto loc_820C53B0;
loc_820C5370:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c5384
	if (ctx.cr6.lt) goto loc_820C5384;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820c53b0
	goto loc_820C53B0;
loc_820C5384:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c5398
	if (ctx.cr6.lt) goto loc_820C5398;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x820c53b0
	goto loc_820C53B0;
loc_820C5398:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x820c53ac
	if (ctx.cr6.lt) goto loc_820C53AC;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x820c53b0
	goto loc_820C53B0;
loc_820C53AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C53B0:
	// rlwinm r4,r11,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82187a50
	ctx.lr = 0x820C53BC;
	sub_82187A50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820C53C8;
	sub_8208EA90(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c53dc
	if (ctx.cr6.lt) goto loc_820C53DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820c541c
	goto loc_820C541C;
loc_820C53DC:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c53ec
	if (ctx.cr6.lt) goto loc_820C53EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820c541c
	goto loc_820C541C;
loc_820C53EC:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c53fc
	if (ctx.cr6.lt) goto loc_820C53FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820c541c
	goto loc_820C541C;
loc_820C53FC:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c540c
	if (ctx.cr6.lt) goto loc_820C540C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820c541c
	goto loc_820C541C;
loc_820C540C:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
loc_820C541C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820C545C"))) PPC_WEAK_FUNC(sub_820C545C);
PPC_FUNC_IMPL(__imp__sub_820C545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5460"))) PPC_WEAK_FUNC(sub_820C5460);
PPC_FUNC_IMPL(__imp__sub_820C5460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820C5468;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C5480;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c555c
	if (!ctx.cr6.eq) goto loc_820C555C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820c4748
	ctx.lr = 0x820C54B8;
	sub_820C4748(ctx, base);
	// rlwinm r4,r3,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82187a50
	ctx.lr = 0x820C54C4;
	sub_82187A50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820C54D0;
	sub_8208EA90(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c54e4
	if (ctx.cr6.lt) goto loc_820C54E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820c5524
	goto loc_820C5524;
loc_820C54E4:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c54f4
	if (ctx.cr6.lt) goto loc_820C54F4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820c5524
	goto loc_820C5524;
loc_820C54F4:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c5504
	if (ctx.cr6.lt) goto loc_820C5504;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820c5524
	goto loc_820C5524;
loc_820C5504:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c5514
	if (ctx.cr6.lt) goto loc_820C5514;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820c5524
	goto loc_820C5524;
loc_820C5514:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
loc_820C5524:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820C555C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820C5564"))) PPC_WEAK_FUNC(sub_820C5564);
PPC_FUNC_IMPL(__imp__sub_820C5564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5568"))) PPC_WEAK_FUNC(sub_820C5568);
PPC_FUNC_IMPL(__imp__sub_820C5568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820C5570;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C5588;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5664
	if (ctx.cr6.eq) goto loc_820C5664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820c4748
	ctx.lr = 0x820C55C0;
	sub_820C4748(ctx, base);
	// rlwinm r4,r3,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82187a50
	ctx.lr = 0x820C55CC;
	sub_82187A50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820C55D8;
	sub_8208EA90(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c55ec
	if (ctx.cr6.lt) goto loc_820C55EC;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820c562c
	goto loc_820C562C;
loc_820C55EC:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c55fc
	if (ctx.cr6.lt) goto loc_820C55FC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820c562c
	goto loc_820C562C;
loc_820C55FC:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c560c
	if (ctx.cr6.lt) goto loc_820C560C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820c562c
	goto loc_820C562C;
loc_820C560C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c561c
	if (ctx.cr6.lt) goto loc_820C561C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820c562c
	goto loc_820C562C;
loc_820C561C:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
loc_820C562C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,9048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820C5664:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820C566C"))) PPC_WEAK_FUNC(sub_820C566C);
PPC_FUNC_IMPL(__imp__sub_820C566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5670"))) PPC_WEAK_FUNC(sub_820C5670);
PPC_FUNC_IMPL(__imp__sub_820C5670) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwz r10,-4900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4900);
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
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
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f29,760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x820c5700
	if (!ctx.cr6.lt) goto loc_820C5700;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x820c5700
	if (!ctx.cr6.lt) goto loc_820C5700;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x820c5700
	if (!ctx.cr6.lt) goto loc_820C5700;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x820c5700
	if (!ctx.cr6.lt) goto loc_820C5700;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820c57c8
	goto loc_820C57C8;
loc_820C5700:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5308
	ctx.lr = 0x820C5710;
	sub_820C5308(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82187220
	ctx.lr = 0x820C5734;
	sub_82187220(ctx, base);
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
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
	// ble cr6,0x820c5758
	if (!ctx.cr6.gt) goto loc_820C5758;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820c576c
	goto loc_820C576C;
loc_820C5758:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820c576c
	if (!ctx.cr6.lt) goto loc_820C576C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820C576C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// fadds f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f0,8272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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
	// clrlwi r11,r7,20
	ctx.r11.u64 = ctx.r7.u32 & 0xFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// blt cr6,0x820c57bc
	if (ctx.cr6.lt) goto loc_820C57BC;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
loc_820C57BC:
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
loc_820C57C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_820C57E8"))) PPC_WEAK_FUNC(sub_820C57E8);
PPC_FUNC_IMPL(__imp__sub_820C57E8) {
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
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x820c4c48
	ctx.lr = 0x820C57FC;
	sub_820C4C48(ctx, base);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5814"))) PPC_WEAK_FUNC(sub_820C5814);
PPC_FUNC_IMPL(__imp__sub_820C5814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5818"))) PPC_WEAK_FUNC(sub_820C5818);
PPC_FUNC_IMPL(__imp__sub_820C5818) {
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
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C5834;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5850
	if (!ctx.cr6.eq) goto loc_820C5850;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C5850:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5860;
	sub_820C4860(ctx, base);
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

__attribute__((alias("__imp__sub_820C587C"))) PPC_WEAK_FUNC(sub_820C587C);
PPC_FUNC_IMPL(__imp__sub_820C587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5880"))) PPC_WEAK_FUNC(sub_820C5880);
PPC_FUNC_IMPL(__imp__sub_820C5880) {
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
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C589C;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c58c0
	if (!ctx.cr6.eq) goto loc_820C58C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C58C0:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c58d4
	if (ctx.cr6.lt) goto loc_820C58D4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820c5914
	goto loc_820C5914;
loc_820C58D4:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c58e4
	if (ctx.cr6.lt) goto loc_820C58E4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820c5914
	goto loc_820C5914;
loc_820C58E4:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x820c58f4
	if (ctx.cr6.lt) goto loc_820C58F4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820c5914
	goto loc_820C5914;
loc_820C58F4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820c5904
	if (ctx.cr6.lt) goto loc_820C5904;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820c5914
	goto loc_820C5914;
loc_820C5904:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
loc_820C5914:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-28260
	ctx.r8.s64 = ctx.r10.s64 + -28260;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5938"))) PPC_WEAK_FUNC(sub_820C5938);
PPC_FUNC_IMPL(__imp__sub_820C5938) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5944"))) PPC_WEAK_FUNC(sub_820C5944);
PPC_FUNC_IMPL(__imp__sub_820C5944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5948"))) PPC_WEAK_FUNC(sub_820C5948);
PPC_FUNC_IMPL(__imp__sub_820C5948) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5954"))) PPC_WEAK_FUNC(sub_820C5954);
PPC_FUNC_IMPL(__imp__sub_820C5954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5958"))) PPC_WEAK_FUNC(sub_820C5958);
PPC_FUNC_IMPL(__imp__sub_820C5958) {
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
	// bl 0x820c5180
	ctx.lr = 0x820C5970;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c598c
	if (!ctx.cr6.eq) goto loc_820C598C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C598C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C599C;
	sub_820C4860(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C59B0"))) PPC_WEAK_FUNC(sub_820C59B0);
PPC_FUNC_IMPL(__imp__sub_820C59B0) {
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
	// bl 0x820c5180
	ctx.lr = 0x820C59C8;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c59e4
	if (!ctx.cr6.eq) goto loc_820C59E4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C59E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C59F4;
	sub_820C4860(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5A08"))) PPC_WEAK_FUNC(sub_820C5A08);
PPC_FUNC_IMPL(__imp__sub_820C5A08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c5a1c
	if (ctx.cr6.lt) goto loc_820C5A1C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// b 0x820c5a2c
	goto loc_820C5A2C;
loc_820C5A1C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c5a40
	if (ctx.cr6.lt) goto loc_820C5A40;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_820C5A2C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820c5a48
	if (ctx.cr6.eq) goto loc_820C5A48;
loc_820C5A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C5A48:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5A54"))) PPC_WEAK_FUNC(sub_820C5A54);
PPC_FUNC_IMPL(__imp__sub_820C5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5A58"))) PPC_WEAK_FUNC(sub_820C5A58);
PPC_FUNC_IMPL(__imp__sub_820C5A58) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c5a6c
	if (ctx.cr6.lt) goto loc_820C5A6C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// b 0x820c5a7c
	goto loc_820C5A7C;
loc_820C5A6C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c5a90
	if (ctx.cr6.lt) goto loc_820C5A90;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_820C5A7C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820c5a98
	if (ctx.cr6.eq) goto loc_820C5A98;
loc_820C5A90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C5A98:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5AA4"))) PPC_WEAK_FUNC(sub_820C5AA4);
PPC_FUNC_IMPL(__imp__sub_820C5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5AA8"))) PPC_WEAK_FUNC(sub_820C5AA8);
PPC_FUNC_IMPL(__imp__sub_820C5AA8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5AB4"))) PPC_WEAK_FUNC(sub_820C5AB4);
PPC_FUNC_IMPL(__imp__sub_820C5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5AB8"))) PPC_WEAK_FUNC(sub_820C5AB8);
PPC_FUNC_IMPL(__imp__sub_820C5AB8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5AC4"))) PPC_WEAK_FUNC(sub_820C5AC4);
PPC_FUNC_IMPL(__imp__sub_820C5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5AC8"))) PPC_WEAK_FUNC(sub_820C5AC8);
PPC_FUNC_IMPL(__imp__sub_820C5AC8) {
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
	// bl 0x820c5180
	ctx.lr = 0x820C5AE0;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5afc
	if (!ctx.cr6.eq) goto loc_820C5AFC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C5AFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5B0C;
	sub_820C4860(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5B20"))) PPC_WEAK_FUNC(sub_820C5B20);
PPC_FUNC_IMPL(__imp__sub_820C5B20) {
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
	// bl 0x820c5180
	ctx.lr = 0x820C5B38;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5b54
	if (!ctx.cr6.eq) goto loc_820C5B54;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820C5B54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5B64;
	sub_820C4860(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5B78"))) PPC_WEAK_FUNC(sub_820C5B78);
PPC_FUNC_IMPL(__imp__sub_820C5B78) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c5b8c
	if (ctx.cr6.lt) goto loc_820C5B8C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// b 0x820c5b9c
	goto loc_820C5B9C;
loc_820C5B8C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c5bb0
	if (ctx.cr6.lt) goto loc_820C5BB0;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_820C5B9C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820c5bb8
	if (ctx.cr6.eq) goto loc_820C5BB8;
loc_820C5BB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C5BB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5BC4"))) PPC_WEAK_FUNC(sub_820C5BC4);
PPC_FUNC_IMPL(__imp__sub_820C5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5BC8"))) PPC_WEAK_FUNC(sub_820C5BC8);
PPC_FUNC_IMPL(__imp__sub_820C5BC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x820c5bdc
	if (ctx.cr6.lt) goto loc_820C5BDC;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// b 0x820c5bec
	goto loc_820C5BEC;
loc_820C5BDC:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x820c5c00
	if (ctx.cr6.lt) goto loc_820C5C00;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_820C5BEC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820c5c08
	if (ctx.cr6.eq) goto loc_820C5C08;
loc_820C5C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C5C08:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5C14"))) PPC_WEAK_FUNC(sub_820C5C14);
PPC_FUNC_IMPL(__imp__sub_820C5C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5C18"))) PPC_WEAK_FUNC(sub_820C5C18);
PPC_FUNC_IMPL(__imp__sub_820C5C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5C3C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5c58
	if (ctx.cr6.eq) goto loc_820C5C58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5C54;
	sub_820C4860(ctx, base);
	// b 0x820c5c5c
	goto loc_820C5C5C;
loc_820C5C58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5C5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5C74"))) PPC_WEAK_FUNC(sub_820C5C74);
PPC_FUNC_IMPL(__imp__sub_820C5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5C78"))) PPC_WEAK_FUNC(sub_820C5C78);
PPC_FUNC_IMPL(__imp__sub_820C5C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5C9C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5cb8
	if (ctx.cr6.eq) goto loc_820C5CB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5CB4;
	sub_820C4860(ctx, base);
	// b 0x820c5cbc
	goto loc_820C5CBC;
loc_820C5CB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5CBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5CD4"))) PPC_WEAK_FUNC(sub_820C5CD4);
PPC_FUNC_IMPL(__imp__sub_820C5CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5CD8"))) PPC_WEAK_FUNC(sub_820C5CD8);
PPC_FUNC_IMPL(__imp__sub_820C5CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5CFC;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5d28
	if (ctx.cr6.eq) goto loc_820C5D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5180
	ctx.lr = 0x820C5D0C;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5d2c
	if (ctx.cr6.eq) goto loc_820C5D2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5D24;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C5D28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5D44"))) PPC_WEAK_FUNC(sub_820C5D44);
PPC_FUNC_IMPL(__imp__sub_820C5D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5D48"))) PPC_WEAK_FUNC(sub_820C5D48);
PPC_FUNC_IMPL(__imp__sub_820C5D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5D6C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5d98
	if (ctx.cr6.eq) goto loc_820C5D98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5180
	ctx.lr = 0x820C5D7C;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5d9c
	if (ctx.cr6.eq) goto loc_820C5D9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5D94;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C5D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5DB4"))) PPC_WEAK_FUNC(sub_820C5DB4);
PPC_FUNC_IMPL(__imp__sub_820C5DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5DB8"))) PPC_WEAK_FUNC(sub_820C5DB8);
PPC_FUNC_IMPL(__imp__sub_820C5DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5DDC;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5e08
	if (ctx.cr6.eq) goto loc_820C5E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3a28
	ctx.lr = 0x820C5DEC;
	sub_820C3A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5e0c
	if (ctx.cr6.eq) goto loc_820C5E0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5E04;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C5E08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5E24"))) PPC_WEAK_FUNC(sub_820C5E24);
PPC_FUNC_IMPL(__imp__sub_820C5E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5E28"))) PPC_WEAK_FUNC(sub_820C5E28);
PPC_FUNC_IMPL(__imp__sub_820C5E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5E4C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5e78
	if (ctx.cr6.eq) goto loc_820C5E78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3a28
	ctx.lr = 0x820C5E5C;
	sub_820C3A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5e7c
	if (ctx.cr6.eq) goto loc_820C5E7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5E74;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C5E78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5E94"))) PPC_WEAK_FUNC(sub_820C5E94);
PPC_FUNC_IMPL(__imp__sub_820C5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5E98"))) PPC_WEAK_FUNC(sub_820C5E98);
PPC_FUNC_IMPL(__imp__sub_820C5E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5EBC;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5ed8
	if (ctx.cr6.eq) goto loc_820C5ED8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5ED4;
	sub_820C4860(ctx, base);
	// b 0x820c5edc
	goto loc_820C5EDC;
loc_820C5ED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5EDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5EF4"))) PPC_WEAK_FUNC(sub_820C5EF4);
PPC_FUNC_IMPL(__imp__sub_820C5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5EF8"))) PPC_WEAK_FUNC(sub_820C5EF8);
PPC_FUNC_IMPL(__imp__sub_820C5EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5F1C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5f38
	if (ctx.cr6.eq) goto loc_820C5F38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5F34;
	sub_820C4860(ctx, base);
	// b 0x820c5f3c
	goto loc_820C5F3C;
loc_820C5F38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5F54"))) PPC_WEAK_FUNC(sub_820C5F54);
PPC_FUNC_IMPL(__imp__sub_820C5F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5F58"))) PPC_WEAK_FUNC(sub_820C5F58);
PPC_FUNC_IMPL(__imp__sub_820C5F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5F7C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5fa8
	if (ctx.cr6.eq) goto loc_820C5FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5180
	ctx.lr = 0x820C5F8C;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c5fac
	if (ctx.cr6.eq) goto loc_820C5FAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C5FA4;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C5FA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C5FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5FC4"))) PPC_WEAK_FUNC(sub_820C5FC4);
PPC_FUNC_IMPL(__imp__sub_820C5FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5FC8"))) PPC_WEAK_FUNC(sub_820C5FC8);
PPC_FUNC_IMPL(__imp__sub_820C5FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C5FEC;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6018
	if (ctx.cr6.eq) goto loc_820C6018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5180
	ctx.lr = 0x820C5FFC;
	sub_820C5180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c601c
	if (ctx.cr6.eq) goto loc_820C601C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6014;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C6018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C601C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6034"))) PPC_WEAK_FUNC(sub_820C6034);
PPC_FUNC_IMPL(__imp__sub_820C6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6038"))) PPC_WEAK_FUNC(sub_820C6038);
PPC_FUNC_IMPL(__imp__sub_820C6038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C605C;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6088
	if (ctx.cr6.eq) goto loc_820C6088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3a28
	ctx.lr = 0x820C606C;
	sub_820C3A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c608c
	if (ctx.cr6.eq) goto loc_820C608C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6084;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C6088:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C608C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C60A4"))) PPC_WEAK_FUNC(sub_820C60A4);
PPC_FUNC_IMPL(__imp__sub_820C60A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C60A8"))) PPC_WEAK_FUNC(sub_820C60A8);
PPC_FUNC_IMPL(__imp__sub_820C60A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8208de68
	ctx.lr = 0x820C60CC;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c60f8
	if (ctx.cr6.eq) goto loc_820C60F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3a28
	ctx.lr = 0x820C60DC;
	sub_820C3A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c60fc
	if (ctx.cr6.eq) goto loc_820C60FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C60F4;
	sub_820C4860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820C60F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C60FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6114"))) PPC_WEAK_FUNC(sub_820C6114);
PPC_FUNC_IMPL(__imp__sub_820C6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6118"))) PPC_WEAK_FUNC(sub_820C6118);
PPC_FUNC_IMPL(__imp__sub_820C6118) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820c6148
	if (ctx.cr6.eq) goto loc_820C6148;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820c6160
	if (!ctx.cr6.eq) goto loc_820C6160;
loc_820C6148:
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
loc_820C6160:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C616C;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6184
	if (ctx.cr6.eq) goto loc_820C6184;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6184;
	sub_820C4860(ctx, base);
loc_820C6184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6198"))) PPC_WEAK_FUNC(sub_820C6198);
PPC_FUNC_IMPL(__imp__sub_820C6198) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820c61c8
	if (ctx.cr6.eq) goto loc_820C61C8;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820c61e0
	if (!ctx.cr6.eq) goto loc_820C61E0;
loc_820C61C8:
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
loc_820C61E0:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C61EC;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6204
	if (ctx.cr6.eq) goto loc_820C6204;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6204;
	sub_820C4860(ctx, base);
loc_820C6204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6218"))) PPC_WEAK_FUNC(sub_820C6218);
PPC_FUNC_IMPL(__imp__sub_820C6218) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820c6248
	if (ctx.cr6.eq) goto loc_820C6248;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820c6260
	if (!ctx.cr6.eq) goto loc_820C6260;
loc_820C6248:
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
loc_820C6260:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C626C;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6284
	if (ctx.cr6.eq) goto loc_820C6284;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6284;
	sub_820C4860(ctx, base);
loc_820C6284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6298"))) PPC_WEAK_FUNC(sub_820C6298);
PPC_FUNC_IMPL(__imp__sub_820C6298) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820c62c8
	if (ctx.cr6.eq) goto loc_820C62C8;
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820c62e0
	if (!ctx.cr6.eq) goto loc_820C62E0;
loc_820C62C8:
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
loc_820C62E0:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C62EC;
	sub_820C4C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6304
	if (ctx.cr6.eq) goto loc_820C6304;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6304;
	sub_820C4860(ctx, base);
loc_820C6304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6318"))) PPC_WEAK_FUNC(sub_820C6318);
PPC_FUNC_IMPL(__imp__sub_820C6318) {
	PPC_FUNC_PROLOGUE();
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x820c4c48
	sub_820C4C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6320"))) PPC_WEAK_FUNC(sub_820C6320);
PPC_FUNC_IMPL(__imp__sub_820C6320) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C632C"))) PPC_WEAK_FUNC(sub_820C632C);
PPC_FUNC_IMPL(__imp__sub_820C632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6330"))) PPC_WEAK_FUNC(sub_820C6330);
PPC_FUNC_IMPL(__imp__sub_820C6330) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4860
	ctx.lr = 0x820C6350;
	sub_820C4860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c6370
	if (!ctx.cr6.eq) goto loc_820C6370;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4b60
	ctx.lr = 0x820C6364;
	sub_820C4B60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x820c6374
	if (ctx.cr6.eq) goto loc_820C6374;
loc_820C6370:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820C6374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6388"))) PPC_WEAK_FUNC(sub_820C6388);
PPC_FUNC_IMPL(__imp__sub_820C6388) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6394"))) PPC_WEAK_FUNC(sub_820C6394);
PPC_FUNC_IMPL(__imp__sub_820C6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6398"))) PPC_WEAK_FUNC(sub_820C6398);
PPC_FUNC_IMPL(__imp__sub_820C6398) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C63A4"))) PPC_WEAK_FUNC(sub_820C63A4);
PPC_FUNC_IMPL(__imp__sub_820C63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C63A8"))) PPC_WEAK_FUNC(sub_820C63A8);
PPC_FUNC_IMPL(__imp__sub_820C63A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C63B4"))) PPC_WEAK_FUNC(sub_820C63B4);
PPC_FUNC_IMPL(__imp__sub_820C63B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C63B8"))) PPC_WEAK_FUNC(sub_820C63B8);
PPC_FUNC_IMPL(__imp__sub_820C63B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C63C4"))) PPC_WEAK_FUNC(sub_820C63C4);
PPC_FUNC_IMPL(__imp__sub_820C63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C63C8"))) PPC_WEAK_FUNC(sub_820C63C8);
PPC_FUNC_IMPL(__imp__sub_820C63C8) {
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
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c4c48
	ctx.lr = 0x820C63E4;
	sub_820C4C48(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x820c6410
	if (!ctx.cr6.lt) goto loc_820C6410;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x820c6410
	if (!ctx.cr6.lt) goto loc_820C6410;
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
loc_820C6410:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6420
	if (ctx.cr6.eq) goto loc_820C6420;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_820C6420:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6434"))) PPC_WEAK_FUNC(sub_820C6434);
PPC_FUNC_IMPL(__imp__sub_820C6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6438"))) PPC_WEAK_FUNC(sub_820C6438);
PPC_FUNC_IMPL(__imp__sub_820C6438) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x820c4b60
	sub_820C4B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6440"))) PPC_WEAK_FUNC(sub_820C6440);
PPC_FUNC_IMPL(__imp__sub_820C6440) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x820c4860
	sub_820C4860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C644C"))) PPC_WEAK_FUNC(sub_820C644C);
PPC_FUNC_IMPL(__imp__sub_820C644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6450"))) PPC_WEAK_FUNC(sub_820C6450);
PPC_FUNC_IMPL(__imp__sub_820C6450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820C6458;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,-32
	ctx.r29.s64 = ctx.r3.s64 + -32;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// sth r10,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C64C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c64e8
	if (ctx.cr6.eq) goto loc_820C64E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x820c6568
	goto loc_820C6568;
loc_820C64E8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x820c3aa8
	ctx.lr = 0x820C64F0;
	sub_820C3AA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x820C64F8;
	sub_8215BEC8(ctx, base);
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lbz r10,640(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 640);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820C650C;
	sub_8215BD60(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820c6544
	if (ctx.cr6.eq) goto loc_820C6544;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,1992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1992);
	// bl 0x8216bfb8
	ctx.lr = 0x820C6524;
	sub_8216BFB8(ctx, base);
	// bl 0x8215bd28
	ctx.lr = 0x820C6528;
	sub_8215BD28(ctx, base);
	// lbz r4,43(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 43);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x820c6544
	if (!ctx.cr6.lt) goto loc_820C6544;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-740(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// bl 0x82225bc8
	ctx.lr = 0x820C6540;
	sub_82225BC8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_820C6544:
	// lwz r27,100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x820c3aa8
	ctx.lr = 0x820C6550;
	sub_820C3AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x820c3d68
	ctx.lr = 0x820C6560;
	sub_820C3D68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
loc_820C6568:
	// lhz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// sth r8,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r8.u16);
	// lwz r4,124(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lbz r3,53(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// bl 0x820c3458
	ctx.lr = 0x820C6588;
	sub_820C3458(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// beq cr6,0x820c6598
	if (ctx.cr6.eq) goto loc_820C6598;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_820C6598:
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c50d8
	ctx.lr = 0x820C65A4;
	sub_820C50D8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c65c4
	if (ctx.cr6.eq) goto loc_820C65C4;
	// bl 0x822144e8
	ctx.lr = 0x820C65C4;
	sub_822144E8(ctx, base);
loc_820C65C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820C65CC"))) PPC_WEAK_FUNC(sub_820C65CC);
PPC_FUNC_IMPL(__imp__sub_820C65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C65D0"))) PPC_WEAK_FUNC(sub_820C65D0);
PPC_FUNC_IMPL(__imp__sub_820C65D0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C65FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c6610
	if (ctx.cr6.eq) goto loc_820C6610;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c6614
	goto loc_820C6614;
loc_820C6610:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C6614:
	// lhz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c6698
	if (!ctx.cr6.eq) goto loc_820C6698;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c6698
	if (!ctx.cr6.eq) goto loc_820C6698;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C6644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c6698
	if (!ctx.cr6.eq) goto loc_820C6698;
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x820c6660
	if (!ctx.cr6.eq) goto loc_820C6660;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C6660:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c66d0
	if (!ctx.cr6.eq) goto loc_820C66D0;
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r11,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C6694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820c66cc
	goto loc_820C66CC;
loc_820C6698:
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// sth r11,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// bl 0x820c50d8
	ctx.lr = 0x820C66AC;
	sub_820C50D8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C66C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
loc_820C66CC:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_820C66D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C66E4"))) PPC_WEAK_FUNC(sub_820C66E4);
PPC_FUNC_IMPL(__imp__sub_820C66E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C66E8"))) PPC_WEAK_FUNC(sub_820C66E8);
PPC_FUNC_IMPL(__imp__sub_820C66E8) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c6724
	if (ctx.cr6.eq) goto loc_820C6724;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c6724
	if (ctx.cr6.eq) goto loc_820C6724;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820c6724
	if (ctx.cr6.eq) goto loc_820C6724;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x820c6728
	if (!ctx.cr6.eq) goto loc_820C6728;
loc_820C6724:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820C6728:
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r3,53(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// bl 0x820c3458
	ctx.lr = 0x820C6738;
	sub_820C3458(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,-1
	ctx.r4.s64 = -1;
	// beq cr6,0x820c6748
	if (ctx.cr6.eq) goto loc_820C6748;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
loc_820C6748:
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// sth r8,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r8.u16);
	// bl 0x820c50d8
	ctx.lr = 0x820C6768;
	sub_820C50D8(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6780"))) PPC_WEAK_FUNC(sub_820C6780);
PPC_FUNC_IMPL(__imp__sub_820C6780) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x820c6790
	if (ctx.cr6.lt) goto loc_820C6790;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// blt cr6,0x820c6798
	if (ctx.cr6.lt) goto loc_820C6798;
loc_820C6790:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C6798:
	// mulli r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 * 11;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C67B0"))) PPC_WEAK_FUNC(sub_820C67B0);
PPC_FUNC_IMPL(__imp__sub_820C67B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26576
	ctx.r12.s64 = ctx.r12.s64 + 26576;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C67D0"))) PPC_WEAK_FUNC(sub_820C67D0);
PPC_FUNC_IMPL(__imp__sub_820C67D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26672(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26672);
	// lwz r16,26756(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26756);
	// lwz r16,26788(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26788);
	// lwz r16,26820(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26820);
	// lwz r16,26844(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26844);
	// lwz r16,26920(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26920);
	// lwz r16,26996(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26996);
	// lwz r16,27204(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27204);
	// lwz r16,27020(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27020);
	// lwz r16,27096(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27096);
	// lwz r16,27128(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27128);
	// lwz r16,27204(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27204);
	// lwz r16,27228(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27228);
	// lwz r16,27304(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27304);
	// lwz r16,27328(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27328);
	// lwz r16,27360(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27360);
	// lwz r16,27384(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27384);
	// lwz r16,27416(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27416);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27368(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27368);
	// lwz r16,27432(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27432);
	// lwz r16,27456(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27456);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26708
	ctx.r12.s64 = ctx.r12.s64 + 26708;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C6854"))) PPC_WEAK_FUNC(sub_820C6854);
PPC_FUNC_IMPL(__imp__sub_820C6854) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6884"))) PPC_WEAK_FUNC(sub_820C6884);
PPC_FUNC_IMPL(__imp__sub_820C6884) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820c689c
	if (ctx.cr6.eq) goto loc_820C689C;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x820c6b54
	if (!ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
loc_820C689C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C68A4"))) PPC_WEAK_FUNC(sub_820C68A4);
PPC_FUNC_IMPL(__imp__sub_820C68A4) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820c689c
	if (ctx.cr6.eq) {
		// ERROR 820C689C
		return;
	}
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x820c6b54
	if (!ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C68C4"))) PPC_WEAK_FUNC(sub_820C68C4);
PPC_FUNC_IMPL(__imp__sub_820C68C4) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x820c6b54
	if (ctx.cr6.lt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C68DC"))) PPC_WEAK_FUNC(sub_820C68DC);
PPC_FUNC_IMPL(__imp__sub_820C68DC) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26880
	ctx.r12.s64 = ctx.r12.s64 + 26880;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C6900"))) PPC_WEAK_FUNC(sub_820C6900);
PPC_FUNC_IMPL(__imp__sub_820C6900) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,26956
	ctx.r12.s64 = ctx.r12.s64 + 26956;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C694C"))) PPC_WEAK_FUNC(sub_820C694C);
PPC_FUNC_IMPL(__imp__sub_820C694C) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x820c6b54
	if (ctx.cr6.lt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C698C"))) PPC_WEAK_FUNC(sub_820C698C);
PPC_FUNC_IMPL(__imp__sub_820C698C) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27056
	ctx.r12.s64 = ctx.r12.s64 + 27056;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C69B0"))) PPC_WEAK_FUNC(sub_820C69B0);
PPC_FUNC_IMPL(__imp__sub_820C69B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x820c687c
	if (ctx.cr6.eq) {
		// ERROR 820C687C
		return;
	}
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x820c6b54
	if (!ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C69F8"))) PPC_WEAK_FUNC(sub_820C69F8);
PPC_FUNC_IMPL(__imp__sub_820C69F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27164
	ctx.r12.s64 = ctx.r12.s64 + 27164;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C6A1C"))) PPC_WEAK_FUNC(sub_820C6A1C);
PPC_FUNC_IMPL(__imp__sub_820C6A1C) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820c6b54
	if (!ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6A5C"))) PPC_WEAK_FUNC(sub_820C6A5C);
PPC_FUNC_IMPL(__imp__sub_820C6A5C) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27264
	ctx.r12.s64 = ctx.r12.s64 + 27264;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C6A80"))) PPC_WEAK_FUNC(sub_820C6A80);
PPC_FUNC_IMPL(__imp__sub_820C6A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,27476(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 27476);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// lwz r16,26748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 26748);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x820c6b54
	if (ctx.cr6.lt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6AC0"))) PPC_WEAK_FUNC(sub_820C6AC0);
PPC_FUNC_IMPL(__imp__sub_820C6AC0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820c687c
	if (ctx.cr6.eq) {
		// ERROR 820C687C
		return;
	}
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x820c6b54
	if (!ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6AE0"))) PPC_WEAK_FUNC(sub_820C6AE0);
PPC_FUNC_IMPL(__imp__sub_820C6AE0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820c687c
	if (ctx.cr6.eq) {
		// ERROR 820C687C
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bne cr6,0x820c6b54
	if (!ctx.cr6.eq) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6AF8"))) PPC_WEAK_FUNC(sub_820C6AF8);
PPC_FUNC_IMPL(__imp__sub_820C6AF8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820c687c
	if (ctx.cr6.eq) {
		// ERROR 820C687C
		return;
	}
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// ble cr6,0x820c6b54
	if (!ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6B18"))) PPC_WEAK_FUNC(sub_820C6B18);
PPC_FUNC_IMPL(__imp__sub_820C6B18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x820c6b54
	if (!ctx.cr6.eq) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6B28"))) PPC_WEAK_FUNC(sub_820C6B28);
PPC_FUNC_IMPL(__imp__sub_820C6B28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// blt cr6,0x820c6b54
	if (ctx.cr6.lt) {
		// ERROR 820C6B54
		return;
	}
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bgt cr6,0x820c6b54
	if (ctx.cr6.gt) {
		// ERROR 820C6B54
		return;
	}
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6B40"))) PPC_WEAK_FUNC(sub_820C6B40);
PPC_FUNC_IMPL(__imp__sub_820C6B40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x820c6b54
	if (ctx.cr6.lt) goto loc_820C6B54;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_820C6B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6B5C"))) PPC_WEAK_FUNC(sub_820C6B5C);
PPC_FUNC_IMPL(__imp__sub_820C6B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6B60"))) PPC_WEAK_FUNC(sub_820C6B60);
PPC_FUNC_IMPL(__imp__sub_820C6B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6BC8"))) PPC_WEAK_FUNC(sub_820C6BC8);
PPC_FUNC_IMPL(__imp__sub_820C6BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820C6BD0;
	sub_8224878C(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f5,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f4,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,12(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lfs f2,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lfs f1,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// lfs f13,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// lfs f12,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lfs f11,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r5.u32);
	// lfs f10,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r4,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r4.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lfs f9,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f8,48(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f7,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f6,52(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f5,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,56(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lfs f3,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f2,60(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lfs f1,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lfs f13,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f11,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,72(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r8.u32);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820C6D3C"))) PPC_WEAK_FUNC(sub_820C6D3C);
PPC_FUNC_IMPL(__imp__sub_820C6D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6D40"))) PPC_WEAK_FUNC(sub_820C6D40);
PPC_FUNC_IMPL(__imp__sub_820C6D40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21, ctx.xer);
	// bgt cr6,0x820c6f44
	if (ctx.cr6.gt) {
		sub_820C6F44(ctx, base);
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28000
	ctx.r12.s64 = ctx.r12.s64 + 28000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C6D60"))) PPC_WEAK_FUNC(sub_820C6D60);
PPC_FUNC_IMPL(__imp__sub_820C6D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r16,28088(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28088);
	// lwz r16,28096(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28096);
	// lwz r16,28104(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28104);
	// lwz r16,28132(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28132);
	// lwz r16,28140(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28140);
	// lwz r16,28148(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28148);
	// lwz r16,28176(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28176);
	// lwz r16,28204(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28204);
	// lwz r16,28232(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28232);
	// lwz r16,28260(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28260);
	// lwz r16,28288(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28288);
	// lwz r16,28316(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28316);
	// lwz r16,28344(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28344);
	// lwz r16,28352(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28352);
	// lwz r16,28360(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28360);
	// lwz r16,28368(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28368);
	// lwz r16,28376(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28376);
	// lwz r16,28384(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28384);
	// lwz r16,28392(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28392);
	// lwz r16,28400(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28400);
	// lwz r16,28428(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28428);
	// lwz r16,28456(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 28456);
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6DC0"))) PPC_WEAK_FUNC(sub_820C6DC0);
PPC_FUNC_IMPL(__imp__sub_820C6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6DC8"))) PPC_WEAK_FUNC(sub_820C6DC8);
PPC_FUNC_IMPL(__imp__sub_820C6DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6DE4"))) PPC_WEAK_FUNC(sub_820C6DE4);
PPC_FUNC_IMPL(__imp__sub_820C6DE4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6DEC"))) PPC_WEAK_FUNC(sub_820C6DEC);
PPC_FUNC_IMPL(__imp__sub_820C6DEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6DF4"))) PPC_WEAK_FUNC(sub_820C6DF4);
PPC_FUNC_IMPL(__imp__sub_820C6DF4) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E10"))) PPC_WEAK_FUNC(sub_820C6E10);
PPC_FUNC_IMPL(__imp__sub_820C6E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E2C"))) PPC_WEAK_FUNC(sub_820C6E2C);
PPC_FUNC_IMPL(__imp__sub_820C6E2C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E48"))) PPC_WEAK_FUNC(sub_820C6E48);
PPC_FUNC_IMPL(__imp__sub_820C6E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E64"))) PPC_WEAK_FUNC(sub_820C6E64);
PPC_FUNC_IMPL(__imp__sub_820C6E64) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E80"))) PPC_WEAK_FUNC(sub_820C6E80);
PPC_FUNC_IMPL(__imp__sub_820C6E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6E9C"))) PPC_WEAK_FUNC(sub_820C6E9C);
PPC_FUNC_IMPL(__imp__sub_820C6E9C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6EB8"))) PPC_WEAK_FUNC(sub_820C6EB8);
PPC_FUNC_IMPL(__imp__sub_820C6EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6EC0"))) PPC_WEAK_FUNC(sub_820C6EC0);
PPC_FUNC_IMPL(__imp__sub_820C6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6EC8"))) PPC_WEAK_FUNC(sub_820C6EC8);
PPC_FUNC_IMPL(__imp__sub_820C6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6ED0"))) PPC_WEAK_FUNC(sub_820C6ED0);
PPC_FUNC_IMPL(__imp__sub_820C6ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6ED8"))) PPC_WEAK_FUNC(sub_820C6ED8);
PPC_FUNC_IMPL(__imp__sub_820C6ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6EE0"))) PPC_WEAK_FUNC(sub_820C6EE0);
PPC_FUNC_IMPL(__imp__sub_820C6EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6EE8"))) PPC_WEAK_FUNC(sub_820C6EE8);
PPC_FUNC_IMPL(__imp__sub_820C6EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6EF0"))) PPC_WEAK_FUNC(sub_820C6EF0);
PPC_FUNC_IMPL(__imp__sub_820C6EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6F0C"))) PPC_WEAK_FUNC(sub_820C6F0C);
PPC_FUNC_IMPL(__imp__sub_820C6F0C) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6F28"))) PPC_WEAK_FUNC(sub_820C6F28);
PPC_FUNC_IMPL(__imp__sub_820C6F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6F44"))) PPC_WEAK_FUNC(sub_820C6F44);
PPC_FUNC_IMPL(__imp__sub_820C6F44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C6F50"))) PPC_WEAK_FUNC(sub_820C6F50);
PPC_FUNC_IMPL(__imp__sub_820C6F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820C6F68:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stwu r10,88(r11)
	ea = 88 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820c6f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C6F68;
	// stfs f0,968(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// stw r10,984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 984, ctx.r10.u32);
	// stfs f0,972(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// stw r10,988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 988, ctx.r10.u32);
	// stfs f0,976(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// stw r10,992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 992, ctx.r10.u32);
	// stfs f0,980(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// stw r10,996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 996, ctx.r10.u32);
	// stfs f0,1016(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1016, temp.u32);
	// stw r10,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r10.u32);
	// stfs f0,1020(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1020, temp.u32);
	// stw r10,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r10.u32);
	// stfs f0,1024(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1024, temp.u32);
	// stw r10,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r10.u32);
	// stfs f0,1028(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1028, temp.u32);
	// stw r10,1012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1012, ctx.r10.u32);
	// stfs f0,1032(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1032, temp.u32);
	// stw r10,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r10.u32);
	// stfs f0,1036(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1036, temp.u32);
	// stw r10,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r10.u32);
	// stfs f0,1040(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1040, temp.u32);
	// stw r10,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r10.u32);
	// stfs f0,1064(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1064, temp.u32);
	// stw r10,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r10.u32);
	// stfs f0,1068(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1068, temp.u32);
	// stw r10,1060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1060, ctx.r10.u32);
	// stfs f0,1072(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1072, temp.u32);
	// stw r10,1092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1092, ctx.r10.u32);
	// stfs f0,1076(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1076, temp.u32);
	// stw r10,1096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1096, ctx.r10.u32);
	// stfs f0,1080(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1080, temp.u32);
	// stfs f0,1084(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1084, temp.u32);
	// stfs f0,1088(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1088, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C704C"))) PPC_WEAK_FUNC(sub_820C704C);
PPC_FUNC_IMPL(__imp__sub_820C704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7050"))) PPC_WEAK_FUNC(sub_820C7050);
PPC_FUNC_IMPL(__imp__sub_820C7050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1032(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,1040(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7070"))) PPC_WEAK_FUNC(sub_820C7070);
PPC_FUNC_IMPL(__imp__sub_820C7070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1020(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,1016(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7090"))) PPC_WEAK_FUNC(sub_820C7090);
PPC_FUNC_IMPL(__imp__sub_820C7090) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r3,200
	ctx.r9.s64 = ctx.r3.s64 + 200;
loc_820C709C:
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c70c8
	if (ctx.cr6.lt) goto loc_820C70C8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c70c8
	if (ctx.cr6.gt) goto loc_820C70C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c70c8
	if (ctx.cr6.eq) goto loc_820C70C8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x820c70c8
	if (ctx.cr6.eq) goto loc_820C70C8;
	// lwz r11,-88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C70C8:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c70f4
	if (ctx.cr6.lt) goto loc_820C70F4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c70f4
	if (ctx.cr6.gt) goto loc_820C70F4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c70f4
	if (ctx.cr6.eq) goto loc_820C70F4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x820c70f4
	if (ctx.cr6.eq) goto loc_820C70F4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C70F4:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x820c711c
	if (ctx.cr6.lt) goto loc_820C711C;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x820c711c
	if (ctx.cr6.gt) goto loc_820C711C;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x820c711c
	if (ctx.cr6.eq) goto loc_820C711C;
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// beq cr6,0x820c711c
	if (ctx.cr6.eq) goto loc_820C711C;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C711C:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c7148
	if (ctx.cr6.lt) goto loc_820C7148;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c7148
	if (ctx.cr6.gt) goto loc_820C7148;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c7148
	if (ctx.cr6.eq) goto loc_820C7148;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x820c7148
	if (ctx.cr6.eq) goto loc_820C7148;
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C7148:
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c7174
	if (ctx.cr6.lt) goto loc_820C7174;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c7174
	if (ctx.cr6.gt) goto loc_820C7174;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c7174
	if (ctx.cr6.eq) goto loc_820C7174;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x820c7174
	if (ctx.cr6.eq) goto loc_820C7174;
	// lwz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C7174:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r9,r9,440
	ctx.r9.s64 = ctx.r9.s64 + 440;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x820c709c
	if (ctx.cr6.lt) goto loc_820C709C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7190"))) PPC_WEAK_FUNC(sub_820C7190);
PPC_FUNC_IMPL(__imp__sub_820C7190) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r9,r3,200
	ctx.r9.s64 = ctx.r3.s64 + 200;
loc_820C719C:
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c71c8
	if (ctx.cr6.lt) goto loc_820C71C8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c71c8
	if (ctx.cr6.gt) goto loc_820C71C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c71c8
	if (ctx.cr6.eq) goto loc_820C71C8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820c71c8
	if (ctx.cr6.eq) goto loc_820C71C8;
	// lwz r11,-88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C71C8:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c71f4
	if (ctx.cr6.lt) goto loc_820C71F4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c71f4
	if (ctx.cr6.gt) goto loc_820C71F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c71f4
	if (ctx.cr6.eq) goto loc_820C71F4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820c71f4
	if (ctx.cr6.eq) goto loc_820C71F4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C71F4:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x820c721c
	if (ctx.cr6.lt) goto loc_820C721C;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bgt cr6,0x820c721c
	if (ctx.cr6.gt) goto loc_820C721C;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x820c721c
	if (ctx.cr6.eq) goto loc_820C721C;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x820c721c
	if (ctx.cr6.eq) goto loc_820C721C;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C721C:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c7248
	if (ctx.cr6.lt) goto loc_820C7248;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c7248
	if (ctx.cr6.gt) goto loc_820C7248;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c7248
	if (ctx.cr6.eq) goto loc_820C7248;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820c7248
	if (ctx.cr6.eq) goto loc_820C7248;
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C7248:
	// addi r11,r8,2
	ctx.r11.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c7274
	if (ctx.cr6.lt) goto loc_820C7274;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820c7274
	if (ctx.cr6.gt) goto loc_820C7274;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c7274
	if (ctx.cr6.eq) goto loc_820C7274;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820c7274
	if (ctx.cr6.eq) goto loc_820C7274;
	// lwz r11,264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820C7274:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r9,r9,440
	ctx.r9.s64 = ctx.r9.s64 + 440;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x820c719c
	if (ctx.cr6.lt) goto loc_820C719C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7290"))) PPC_WEAK_FUNC(sub_820C7290);
PPC_FUNC_IMPL(__imp__sub_820C7290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820C72A8:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stwu r10,88(r11)
	ea = 88 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820c72a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C72A8;
	// stfs f0,968(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// stw r10,984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 984, ctx.r10.u32);
	// stfs f0,972(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// stw r10,988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 988, ctx.r10.u32);
	// stfs f0,976(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// stw r10,992(r3)
	PPC_STORE_U32(ctx.r3.u32 + 992, ctx.r10.u32);
	// stfs f0,980(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// stw r10,996(r3)
	PPC_STORE_U32(ctx.r3.u32 + 996, ctx.r10.u32);
	// stfs f0,1016(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1016, temp.u32);
	// stw r10,1000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1000, ctx.r10.u32);
	// stfs f0,1020(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1020, temp.u32);
	// stw r10,1004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1004, ctx.r10.u32);
	// stfs f0,1024(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1024, temp.u32);
	// stw r10,1008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1008, ctx.r10.u32);
	// stfs f0,1028(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1028, temp.u32);
	// stw r10,1012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1012, ctx.r10.u32);
	// stfs f0,1032(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1032, temp.u32);
	// stw r10,1044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1044, ctx.r10.u32);
	// stfs f0,1036(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1036, temp.u32);
	// stw r10,1048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1048, ctx.r10.u32);
	// stfs f0,1040(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1040, temp.u32);
	// stw r10,1052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1052, ctx.r10.u32);
	// b 0x820c6f50
	sub_820C6F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7360"))) PPC_WEAK_FUNC(sub_820C7360);
PPC_FUNC_IMPL(__imp__sub_820C7360) {
	PPC_FUNC_PROLOGUE();
	// li r11,16
	ctx.r11.s64 = 16;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x820c748c
	if (ctx.cr6.gt) {
		// ERROR 820C748C
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29572
	ctx.r12.s64 = ctx.r12.s64 + 29572;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C7384"))) PPC_WEAK_FUNC(sub_820C7384);
PPC_FUNC_IMPL(__imp__sub_820C7384) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,29640(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29640);
	// lwz r16,29652(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29652);
	// lwz r16,29664(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29664);
	// lwz r16,29676(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29676);
	// lwz r16,29688(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29688);
	// lwz r16,29700(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29700);
	// lwz r16,29712(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29712);
	// lwz r16,29724(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29724);
	// lwz r16,29736(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29736);
	// lwz r16,29748(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29748);
	// lwz r16,29760(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29760);
	// lwz r16,29772(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29772);
	// lwz r16,29784(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29784);
	// lwz r16,29796(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29796);
	// lwz r16,29808(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29808);
	// lwz r16,29820(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29820);
	// lwz r16,29832(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29832);
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C73D4"))) PPC_WEAK_FUNC(sub_820C73D4);
PPC_FUNC_IMPL(__imp__sub_820C73D4) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C73E0"))) PPC_WEAK_FUNC(sub_820C73E0);
PPC_FUNC_IMPL(__imp__sub_820C73E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C73EC"))) PPC_WEAK_FUNC(sub_820C73EC);
PPC_FUNC_IMPL(__imp__sub_820C73EC) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C73F8"))) PPC_WEAK_FUNC(sub_820C73F8);
PPC_FUNC_IMPL(__imp__sub_820C73F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7404"))) PPC_WEAK_FUNC(sub_820C7404);
PPC_FUNC_IMPL(__imp__sub_820C7404) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7410"))) PPC_WEAK_FUNC(sub_820C7410);
PPC_FUNC_IMPL(__imp__sub_820C7410) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C741C"))) PPC_WEAK_FUNC(sub_820C741C);
PPC_FUNC_IMPL(__imp__sub_820C741C) {
	PPC_FUNC_PROLOGUE();
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7428"))) PPC_WEAK_FUNC(sub_820C7428);
PPC_FUNC_IMPL(__imp__sub_820C7428) {
	PPC_FUNC_PROLOGUE();
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7434"))) PPC_WEAK_FUNC(sub_820C7434);
PPC_FUNC_IMPL(__imp__sub_820C7434) {
	PPC_FUNC_PROLOGUE();
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7440"))) PPC_WEAK_FUNC(sub_820C7440);
PPC_FUNC_IMPL(__imp__sub_820C7440) {
	PPC_FUNC_PROLOGUE();
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C744C"))) PPC_WEAK_FUNC(sub_820C744C);
PPC_FUNC_IMPL(__imp__sub_820C744C) {
	PPC_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7458"))) PPC_WEAK_FUNC(sub_820C7458);
PPC_FUNC_IMPL(__imp__sub_820C7458) {
	PPC_FUNC_PROLOGUE();
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7464"))) PPC_WEAK_FUNC(sub_820C7464);
PPC_FUNC_IMPL(__imp__sub_820C7464) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7470"))) PPC_WEAK_FUNC(sub_820C7470);
PPC_FUNC_IMPL(__imp__sub_820C7470) {
	PPC_FUNC_PROLOGUE();
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C747C"))) PPC_WEAK_FUNC(sub_820C747C);
PPC_FUNC_IMPL(__imp__sub_820C747C) {
	PPC_FUNC_PROLOGUE();
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7488"))) PPC_WEAK_FUNC(sub_820C7488);
PPC_FUNC_IMPL(__imp__sub_820C7488) {
	PPC_FUNC_PROLOGUE();
	// li r11,15
	ctx.r11.s64 = 15;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7494"))) PPC_WEAK_FUNC(sub_820C7494);
PPC_FUNC_IMPL(__imp__sub_820C7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7498"))) PPC_WEAK_FUNC(sub_820C7498);
PPC_FUNC_IMPL(__imp__sub_820C7498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// bgt cr6,0x820c75bc
	if (ctx.cr6.gt) {
		// ERROR 820C75BC
		return;
	}
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29888
	ctx.r12.s64 = ctx.r12.s64 + 29888;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820C74C0"))) PPC_WEAK_FUNC(sub_820C74C0);
PPC_FUNC_IMPL(__imp__sub_820C74C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,30140(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30140);
	// lwz r16,29956(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29956);
	// lwz r16,29968(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29968);
	// lwz r16,29980(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29980);
	// lwz r16,29992(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 29992);
	// lwz r16,30004(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30004);
	// lwz r16,30016(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30016);
	// lwz r16,30028(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30028);
	// lwz r16,30040(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30040);
	// lwz r16,30052(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30052);
	// lwz r16,30064(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30064);
	// lwz r16,30076(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30076);
	// lwz r16,30088(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30088);
	// lwz r16,30100(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30100);
	// lwz r16,30112(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30112);
	// lwz r16,30124(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30124);
	// lwz r16,30136(r12)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r12.u32 + 30136);
	// li r11,30238
	ctx.r11.s64 = 30238;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C7510"))) PPC_WEAK_FUNC(sub_820C7510);
PPC_FUNC_IMPL(__imp__sub_820C7510) {
	PPC_FUNC_PROLOGUE();
	// li r11,30239
	ctx.r11.s64 = 30239;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

