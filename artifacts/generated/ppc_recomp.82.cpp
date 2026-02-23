#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823713B4"))) PPC_WEAK_FUNC(sub_823713B4);
PPC_FUNC_IMPL(__imp__sub_823713B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823713B8"))) PPC_WEAK_FUNC(sub_823713B8);
PPC_FUNC_IMPL(__imp__sub_823713B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823713C0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpdi cr6,r4,0
	ctx.cr6.compare<int64_t>(ctx.r4.s64, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bge cr6,0x823713dc
	if (!ctx.cr6.lt) goto loc_823713DC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823713DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370dd0
	ctx.lr = 0x823713E8;
	sub_82370DD0(ctx, base);
	// li r11,384
	ctx.r11.s64 = 384;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwimi r11,r3,1,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 1) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82370f80
	ctx.lr = 0x8237140C;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371448
	if (ctx.cr0.eq) goto loc_82371448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d80
	ctx.lr = 0x82371420;
	sub_82370D80(ctx, base);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82371440;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82371448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371450"))) PPC_WEAK_FUNC(sub_82371450);
PPC_FUNC_IMPL(__imp__sub_82371450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371458;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpldi cr6,r4,255
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 255, ctx.xer);
	// bgt cr6,0x82371474
	if (ctx.cr6.gt) goto loc_82371474;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8237149c
	goto loc_8237149C;
loc_82371474:
	// cmpldi cr6,r29,65535
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 65535, ctx.xer);
	// bgt cr6,0x82371484
	if (ctx.cr6.gt) goto loc_82371484;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8237149c
	goto loc_8237149C;
loc_82371484:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r31,3
	ctx.r31.s64 = 3;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x8237149c
	if (!ctx.cr6.gt) goto loc_8237149C;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8237149C:
	// li r4,144
	ctx.r4.s64 = 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r31,1,28,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xE) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370f80
	ctx.lr = 0x823714B0;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823714ec
	if (ctx.cr0.eq) goto loc_823714EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370d80
	ctx.lr = 0x823714C4;
	sub_82370D80(ctx, base);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r5.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82370ef8
	ctx.lr = 0x823714E4;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823714EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823714F4"))) PPC_WEAK_FUNC(sub_823714F4);
PPC_FUNC_IMPL(__imp__sub_823714F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823714F8"))) PPC_WEAK_FUNC(sub_823714F8);
PPC_FUNC_IMPL(__imp__sub_823714F8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370f80
	ctx.lr = 0x82371520;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371544
	if (ctx.cr0.eq) goto loc_82371544;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370ef8
	ctx.lr = 0x8237153C;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82371544:
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

__attribute__((alias("__imp__sub_8237155C"))) PPC_WEAK_FUNC(sub_8237155C);
PPC_FUNC_IMPL(__imp__sub_8237155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371560"))) PPC_WEAK_FUNC(sub_82371560);
PPC_FUNC_IMPL(__imp__sub_82371560) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,184
	ctx.r4.s64 = 184;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370f80
	ctx.lr = 0x82371588;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823715ac
	if (ctx.cr0.eq) goto loc_823715AC;
	// stfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370ef8
	ctx.lr = 0x823715A4;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823715AC:
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

__attribute__((alias("__imp__sub_823715C4"))) PPC_WEAK_FUNC(sub_823715C4);
PPC_FUNC_IMPL(__imp__sub_823715C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823715C8"))) PPC_WEAK_FUNC(sub_823715C8);
PPC_FUNC_IMPL(__imp__sub_823715C8) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,226
	ctx.r4.s64 = 226;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370f80
	ctx.lr = 0x823715EC;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237160c
	if (ctx.cr0.eq) goto loc_8237160C;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82371604;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8237160C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82371620"))) PPC_WEAK_FUNC(sub_82371620);
PPC_FUNC_IMPL(__imp__sub_82371620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371628;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82371644
	if (!ctx.cr6.eq) goto loc_82371644;
loc_8237163C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823716ac
	goto loc_823716AC;
loc_82371644:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823728a8
	ctx.lr = 0x8237164C;
	sub_823728A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bgt cr6,0x82371660
	if (ctx.cr6.gt) goto loc_82371660;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82371678
	goto loc_82371678;
loc_82371660:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r31,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82371678:
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwimi r4,r11,1,28,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xE) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370f80
	ctx.lr = 0x8237168C;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237163c
	if (ctx.cr0.eq) goto loc_8237163C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370ef8
	ctx.lr = 0x823716A4;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823716AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823716B4"))) PPC_WEAK_FUNC(sub_823716B4);
PPC_FUNC_IMPL(__imp__sub_823716B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823716B8"))) PPC_WEAK_FUNC(sub_823716B8);
PPC_FUNC_IMPL(__imp__sub_823716B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823716C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82371740
	if (ctx.cr6.eq) goto loc_82371740;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82371740
	if (ctx.cr6.eq) goto loc_82371740;
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// bgt cr6,0x823716f0
	if (ctx.cr6.gt) goto loc_823716F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82371708
	goto loc_82371708;
loc_823716F0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r31,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82371708:
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwimi r4,r11,1,28,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xE) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370f80
	ctx.lr = 0x8237171C;
	sub_82370F80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371740
	if (ctx.cr0.eq) goto loc_82371740;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370ef8
	ctx.lr = 0x82371734;
	sub_82370EF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82371744
	goto loc_82371744;
loc_82371740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82371744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237174C"))) PPC_WEAK_FUNC(sub_8237174C);
PPC_FUNC_IMPL(__imp__sub_8237174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371750"))) PPC_WEAK_FUNC(sub_82371750);
PPC_FUNC_IMPL(__imp__sub_82371750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82371758;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82370cc0
	ctx.lr = 0x8237177C;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823717f8
	if (ctx.cr0.eq) goto loc_823717F8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r11,31,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x82370d80
	ctx.lr = 0x823717A0;
	sub_82370D80(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823717f8
	if (ctx.cr0.eq) goto loc_823717F8;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// ble cr6,0x823717e8
	if (!ctx.cr6.gt) goto loc_823717E8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x823717f8
	if (ctx.cr6.gt) goto loc_823717F8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x82370cc0
	ctx.lr = 0x823717D8;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823717f8
	if (ctx.cr0.eq) goto loc_823717F8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_823717E8:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// b 0x823717fc
	goto loc_823717FC;
loc_823717F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823717FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82371804"))) PPC_WEAK_FUNC(sub_82371804);
PPC_FUNC_IMPL(__imp__sub_82371804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82371808"))) PPC_WEAK_FUNC(sub_82371808);
PPC_FUNC_IMPL(__imp__sub_82371808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371810;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371830
	if (!ctx.cr6.eq) goto loc_82371830;
loc_82371828:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823718bc
	goto loc_823718BC;
loc_82371830:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371828
	if (ctx.cr6.gt) goto loc_82371828;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371868;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371828
	if (ctx.cr0.eq) goto loc_82371828;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82371828
	if (!ctx.cr6.eq) goto loc_82371828;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82371828
	if (!ctx.cr6.eq) goto loc_82371828;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370cc0
	ctx.lr = 0x8237189C;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371828
	if (ctx.cr0.eq) goto loc_82371828;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_823718BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823718C4"))) PPC_WEAK_FUNC(sub_823718C4);
PPC_FUNC_IMPL(__imp__sub_823718C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823718C8"))) PPC_WEAK_FUNC(sub_823718C8);
PPC_FUNC_IMPL(__imp__sub_823718C8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823718f8
	if (!ctx.cr6.eq) goto loc_823718F8;
loc_823718F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371968
	goto loc_82371968;
loc_823718F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823718f0
	if (ctx.cr6.gt) goto loc_823718F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x82371930;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823718f0
	if (ctx.cr0.eq) goto loc_823718F0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823718f0
	if (!ctx.cr6.eq) goto loc_823718F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823718f0
	if (!ctx.cr6.eq) goto loc_823718F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370cc0
	ctx.lr = 0x82371960;
	sub_82370CC0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82371968:
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

__attribute__((alias("__imp__sub_82371980"))) PPC_WEAK_FUNC(sub_82371980);
PPC_FUNC_IMPL(__imp__sub_82371980) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823719b0
	if (!ctx.cr6.eq) goto loc_823719B0;
loc_823719A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371a30
	goto loc_82371A30;
loc_823719B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823719a8
	if (ctx.cr6.gt) goto loc_823719A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x823719E8;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823719a8
	if (ctx.cr0.eq) goto loc_823719A8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823719a8
	if (!ctx.cr6.eq) goto loc_823719A8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x823719a8
	if (ctx.cr6.gt) goto loc_823719A8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823719a8
	if (ctx.cr6.gt) goto loc_823719A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370cc0
	ctx.lr = 0x82371A28;
	sub_82370CC0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82371A30:
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

__attribute__((alias("__imp__sub_82371A48"))) PPC_WEAK_FUNC(sub_82371A48);
PPC_FUNC_IMPL(__imp__sub_82371A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371A50;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371a70
	if (!ctx.cr6.eq) goto loc_82371A70;
loc_82371A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371b08
	goto loc_82371B08;
loc_82371A70:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371a68
	if (ctx.cr6.gt) goto loc_82371A68;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371AA8;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371a68
	if (ctx.cr0.eq) goto loc_82371A68;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82371a68
	if (!ctx.cr6.eq) goto loc_82371A68;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bgt cr6,0x82371a68
	if (ctx.cr6.gt) goto loc_82371A68;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371a68
	if (ctx.cr6.gt) goto loc_82371A68;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d20
	ctx.lr = 0x82371AF4;
	sub_82370D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371a68
	if (ctx.cr0.eq) goto loc_82371A68;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_82371B08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371B10"))) PPC_WEAK_FUNC(sub_82371B10);
PPC_FUNC_IMPL(__imp__sub_82371B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371B18;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371b38
	if (!ctx.cr6.eq) goto loc_82371B38;
loc_82371B30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371bd0
	goto loc_82371BD0;
loc_82371B38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371b30
	if (ctx.cr6.gt) goto loc_82371B30;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371B70;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371b30
	if (ctx.cr0.eq) goto loc_82371B30;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82371b30
	if (!ctx.cr6.eq) goto loc_82371B30;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bgt cr6,0x82371b30
	if (ctx.cr6.gt) goto loc_82371B30;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371b30
	if (ctx.cr6.gt) goto loc_82371B30;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d20
	ctx.lr = 0x82371BBC;
	sub_82370D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371b30
	if (ctx.cr0.eq) goto loc_82371B30;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_82371BD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371BD8"))) PPC_WEAK_FUNC(sub_82371BD8);
PPC_FUNC_IMPL(__imp__sub_82371BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371BE0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371c00
	if (!ctx.cr6.eq) goto loc_82371C00;
loc_82371BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371c98
	goto loc_82371C98;
loc_82371C00:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371bf8
	if (ctx.cr6.gt) goto loc_82371BF8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371C38;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371bf8
	if (ctx.cr0.eq) goto loc_82371BF8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82371bf8
	if (!ctx.cr6.eq) goto loc_82371BF8;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82371bf8
	if (ctx.cr6.gt) goto loc_82371BF8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371bf8
	if (ctx.cr6.gt) goto loc_82371BF8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d20
	ctx.lr = 0x82371C84;
	sub_82370D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371bf8
	if (ctx.cr0.eq) goto loc_82371BF8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82371C98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371CA0"))) PPC_WEAK_FUNC(sub_82371CA0);
PPC_FUNC_IMPL(__imp__sub_82371CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371CA8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371cc8
	if (!ctx.cr6.eq) goto loc_82371CC8;
loc_82371CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371d60
	goto loc_82371D60;
loc_82371CC8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371cc0
	if (ctx.cr6.gt) goto loc_82371CC0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371D00;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371cc0
	if (ctx.cr0.eq) goto loc_82371CC0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82371cc0
	if (!ctx.cr6.eq) goto loc_82371CC0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x82371cc0
	if (ctx.cr6.gt) goto loc_82371CC0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371cc0
	if (ctx.cr6.gt) goto loc_82371CC0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d20
	ctx.lr = 0x82371D4C;
	sub_82370D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371cc0
	if (ctx.cr0.eq) goto loc_82371CC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82371D60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371D68"))) PPC_WEAK_FUNC(sub_82371D68);
PPC_FUNC_IMPL(__imp__sub_82371D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371D70;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371d90
	if (!ctx.cr6.eq) goto loc_82371D90;
loc_82371D88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371e28
	goto loc_82371E28;
loc_82371D90:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371d88
	if (ctx.cr6.gt) goto loc_82371D88;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371DC8;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371d88
	if (ctx.cr0.eq) goto loc_82371D88;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82371d88
	if (!ctx.cr6.eq) goto loc_82371D88;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bgt cr6,0x82371d88
	if (ctx.cr6.gt) goto loc_82371D88;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371d88
	if (ctx.cr6.gt) goto loc_82371D88;
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d20
	ctx.lr = 0x82371E14;
	sub_82370D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371d88
	if (ctx.cr0.eq) goto loc_82371D88;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_82371E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371E30"))) PPC_WEAK_FUNC(sub_82371E30);
PPC_FUNC_IMPL(__imp__sub_82371E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82371E38;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371e58
	if (!ctx.cr6.eq) goto loc_82371E58;
loc_82371E50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371ef0
	goto loc_82371EF0;
loc_82371E58:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371e50
	if (ctx.cr6.gt) goto loc_82371E50;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// bl 0x82371750
	ctx.lr = 0x82371E90;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371e50
	if (ctx.cr0.eq) goto loc_82371E50;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82371e50
	if (!ctx.cr6.eq) goto loc_82371E50;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bgt cr6,0x82371e50
	if (ctx.cr6.gt) goto loc_82371E50;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371e50
	if (ctx.cr6.gt) goto loc_82371E50;
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370d20
	ctx.lr = 0x82371EDC;
	sub_82370D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371e50
	if (ctx.cr0.eq) goto loc_82371E50;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_82371EF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82371EF8"))) PPC_WEAK_FUNC(sub_82371EF8);
PPC_FUNC_IMPL(__imp__sub_82371EF8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82371f28
	if (!ctx.cr6.eq) goto loc_82371F28;
loc_82371F20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82371fc0
	goto loc_82371FC0;
loc_82371F28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371f20
	if (ctx.cr6.gt) goto loc_82371F20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x82371F60;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371f20
	if (ctx.cr0.eq) goto loc_82371F20;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82371f20
	if (!ctx.cr6.eq) goto loc_82371F20;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x82371f20
	if (ctx.cr6.gt) goto loc_82371F20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82371f20
	if (ctx.cr6.gt) goto loc_82371F20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82370cc0
	ctx.lr = 0x82371FAC;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82371f20
	if (ctx.cr0.eq) goto loc_82371F20;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82371FC0:
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

__attribute__((alias("__imp__sub_82371FD8"))) PPC_WEAK_FUNC(sub_82371FD8);
PPC_FUNC_IMPL(__imp__sub_82371FD8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82372008
	if (!ctx.cr6.eq) goto loc_82372008;
loc_82372000:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823720a0
	goto loc_823720A0;
loc_82372008:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82372000
	if (ctx.cr6.gt) goto loc_82372000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x82372040;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372000
	if (ctx.cr0.eq) goto loc_82372000;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82372000
	if (!ctx.cr6.eq) goto loc_82372000;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bgt cr6,0x82372000
	if (ctx.cr6.gt) goto loc_82372000;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82372000
	if (ctx.cr6.gt) goto loc_82372000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,29640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// bl 0x82370cc0
	ctx.lr = 0x8237208C;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372000
	if (ctx.cr0.eq) goto loc_82372000;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfd f0,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
loc_823720A0:
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

__attribute__((alias("__imp__sub_823720B8"))) PPC_WEAK_FUNC(sub_823720B8);
PPC_FUNC_IMPL(__imp__sub_823720B8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823720e8
	if (!ctx.cr6.eq) goto loc_823720E8;
loc_823720E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82372184
	goto loc_82372184;
loc_823720E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823720e0
	if (ctx.cr6.gt) goto loc_823720E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x82372120;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823720e0
	if (ctx.cr0.eq) goto loc_823720E0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x823720e0
	if (!ctx.cr6.eq) goto loc_823720E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823720e0
	if (!ctx.cr6.eq) goto loc_823720E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823720e0
	if (ctx.cr6.gt) goto loc_823720E0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823585a0
	ctx.lr = 0x82372160;
	sub_823585A0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370cc0
	ctx.lr = 0x82372170;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823720e0
	if (ctx.cr0.eq) goto loc_823720E0;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82372184:
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

__attribute__((alias("__imp__sub_8237219C"))) PPC_WEAK_FUNC(sub_8237219C);
PPC_FUNC_IMPL(__imp__sub_8237219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823721A0"))) PPC_WEAK_FUNC(sub_823721A0);
PPC_FUNC_IMPL(__imp__sub_823721A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823721A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372260
	if (ctx.cr6.eq) goto loc_82372260;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82372260
	if (ctx.cr6.eq) goto loc_82372260;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372260
	if (ctx.cr6.eq) goto loc_82372260;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82372260
	if (ctx.cr6.gt) goto loc_82372260;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x8237220C;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372260
	if (ctx.cr0.eq) goto loc_82372260;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82372260
	if (!ctx.cr6.eq) goto loc_82372260;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82372260
	if (ctx.cr6.lt) goto loc_82372260;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82372260
	if (ctx.cr6.gt) goto loc_82372260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370cc0
	ctx.lr = 0x8237224C;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372260
	if (ctx.cr0.eq) goto loc_82372260;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82372264
	goto loc_82372264;
loc_82372260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82372264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237226C"))) PPC_WEAK_FUNC(sub_8237226C);
PPC_FUNC_IMPL(__imp__sub_8237226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372270"))) PPC_WEAK_FUNC(sub_82372270);
PPC_FUNC_IMPL(__imp__sub_82372270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82372278;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372330
	if (ctx.cr6.eq) goto loc_82372330;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82372330
	if (ctx.cr6.eq) goto loc_82372330;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82372330
	if (ctx.cr6.eq) goto loc_82372330;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82372330
	if (ctx.cr6.gt) goto loc_82372330;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x82371750
	ctx.lr = 0x823722DC;
	sub_82371750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372330
	if (ctx.cr0.eq) goto loc_82372330;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82372330
	if (!ctx.cr6.eq) goto loc_82372330;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82372330
	if (ctx.cr6.lt) goto loc_82372330;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82372330
	if (ctx.cr6.gt) goto loc_82372330;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370cc0
	ctx.lr = 0x8237231C;
	sub_82370CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372330
	if (ctx.cr0.eq) goto loc_82372330;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82372334
	goto loc_82372334;
loc_82372330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82372334:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237233C"))) PPC_WEAK_FUNC(sub_8237233C);
PPC_FUNC_IMPL(__imp__sub_8237233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372340"))) PPC_WEAK_FUNC(sub_82372340);
PPC_FUNC_IMPL(__imp__sub_82372340) {
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
	// addi r11,r11,31888
	ctx.r11.s64 = ctx.r11.s64 + 31888;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82370c70
	ctx.lr = 0x82372364;
	sub_82370C70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372384"))) PPC_WEAK_FUNC(sub_82372384);
PPC_FUNC_IMPL(__imp__sub_82372384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372388"))) PPC_WEAK_FUNC(sub_82372388);
PPC_FUNC_IMPL(__imp__sub_82372388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82372390;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823723b8
	if (!ctx.cr6.eq) goto loc_823723B8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82372400
	if (!ctx.cr6.eq) goto loc_82372400;
loc_823723B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82372404
	goto loc_82372404;
loc_823723B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82372400
	if (ctx.cr6.eq) goto loc_82372400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370c70
	ctx.lr = 0x823723C8;
	sub_82370C70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82370e68
	ctx.lr = 0x823723E0;
	sub_82370E68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372400
	if (ctx.cr0.eq) goto loc_82372400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x823723F8;
	sub_82358508(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// b 0x823723b0
	goto loc_823723B0;
loc_82372400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82372404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237240C"))) PPC_WEAK_FUNC(sub_8237240C);
PPC_FUNC_IMPL(__imp__sub_8237240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372410"))) PPC_WEAK_FUNC(sub_82372410);
PPC_FUNC_IMPL(__imp__sub_82372410) {
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
	// bl 0x82372340
	ctx.lr = 0x82372430;
	sub_82372340(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372440
	if (ctx.cr0.eq) goto loc_82372440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82372440;
	sub_82357128(ctx, base);
loc_82372440:
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

__attribute__((alias("__imp__sub_8237245C"))) PPC_WEAK_FUNC(sub_8237245C);
PPC_FUNC_IMPL(__imp__sub_8237245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372460"))) PPC_WEAK_FUNC(sub_82372460);
PPC_FUNC_IMPL(__imp__sub_82372460) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82372488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8237249C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823724B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823724C4;
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

__attribute__((alias("__imp__sub_823724D8"))) PPC_WEAK_FUNC(sub_823724D8);
PPC_FUNC_IMPL(__imp__sub_823724D8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,31892
	ctx.r10.s64 = ctx.r11.s64 + 31892;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356e70
	ctx.lr = 0x82372500;
	sub_82356E70(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x82372518;
	sub_82370088(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82372534;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82372550;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372460
	ctx.lr = 0x82372558;
	sub_82372460(ctx, base);
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

__attribute__((alias("__imp__sub_82372570"))) PPC_WEAK_FUNC(sub_82372570);
PPC_FUNC_IMPL(__imp__sub_82372570) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,31892
	ctx.r7.s64 = ctx.r11.s64 + 31892;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x823725C0;
	sub_823700D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82356eb8
	ctx.lr = 0x823725C8;
	sub_82356EB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823725DC"))) PPC_WEAK_FUNC(sub_823725DC);
PPC_FUNC_IMPL(__imp__sub_823725DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823725E0"))) PPC_WEAK_FUNC(sub_823725E0);
PPC_FUNC_IMPL(__imp__sub_823725E0) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,31892
	ctx.r7.s64 = ctx.r11.s64 + 31892;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x82372638;
	sub_823700D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82356eb8
	ctx.lr = 0x82372640;
	sub_82356EB8(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82372658
	if (ctx.cr6.eq) goto loc_82372658;
	// bl 0x82357128
	ctx.lr = 0x82372654;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82372658:
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

__attribute__((alias("__imp__sub_82372670"))) PPC_WEAK_FUNC(sub_82372670);
PPC_FUNC_IMPL(__imp__sub_82372670) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x82370360
	sub_82370360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8237267C"))) PPC_WEAK_FUNC(sub_8237267C);
PPC_FUNC_IMPL(__imp__sub_8237267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372680"))) PPC_WEAK_FUNC(sub_82372680);
PPC_FUNC_IMPL(__imp__sub_82372680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// addi r10,r3,75
	ctx.r10.s64 = ctx.r3.s64 + 75;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82372690:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82372690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82372690;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823726A0"))) PPC_WEAK_FUNC(sub_823726A0);
PPC_FUNC_IMPL(__imp__sub_823726A0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823726B0"))) PPC_WEAK_FUNC(sub_823726B0);
PPC_FUNC_IMPL(__imp__sub_823726B0) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x823726D8;
	sub_82357038(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x823726E4;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,75
	ctx.r11.s64 = ctx.r30.s64 + 75;
	// addi r10,r31,75
	ctx.r10.s64 = ctx.r31.s64 + 75;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823726F4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823726f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823726F4;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x82372710;
	sub_82248A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8237272C"))) PPC_WEAK_FUNC(sub_8237272C);
PPC_FUNC_IMPL(__imp__sub_8237272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372730"))) PPC_WEAK_FUNC(sub_82372730);
PPC_FUNC_IMPL(__imp__sub_82372730) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,31892
	ctx.r10.s64 = ctx.r11.s64 + 31892;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356e70
	ctx.lr = 0x82372760;
	sub_82356E70(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x82372778;
	sub_82370088(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82372794;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x823727B0;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372460
	ctx.lr = 0x823727B8;
	sub_82372460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823726b0
	ctx.lr = 0x823727C4;
	sub_823726B0(ctx, base);
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

__attribute__((alias("__imp__sub_823727E0"))) PPC_WEAK_FUNC(sub_823727E0);
PPC_FUNC_IMPL(__imp__sub_823727E0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x823727f4
	if (ctx.cr6.gt) goto loc_823727F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823727F4:
	// cmplwi cr6,r11,194
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 194, ctx.xer);
	// blt cr6,0x8237280c
	if (ctx.cr6.lt) goto loc_8237280C;
	// cmplwi cr6,r11,223
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 223, ctx.xer);
	// bgt cr6,0x8237280c
	if (ctx.cr6.gt) goto loc_8237280C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8237280C:
	// cmplwi cr6,r11,224
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 224, ctx.xer);
	// blt cr6,0x82372824
	if (ctx.cr6.lt) goto loc_82372824;
	// cmplwi cr6,r11,239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 239, ctx.xer);
	// bgt cr6,0x82372824
	if (ctx.cr6.gt) goto loc_82372824;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82372824:
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// blt cr6,0x82372838
	if (ctx.cr6.lt) goto loc_82372838;
	// cmplwi cr6,r11,244
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 244, ctx.xer);
	// li r3,4
	ctx.r3.s64 = 4;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82372838:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372840"))) PPC_WEAK_FUNC(sub_82372840);
PPC_FUNC_IMPL(__imp__sub_82372840) {
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
	// bne cr6,0x8237285c
	if (!ctx.cr6.eq) goto loc_8237285C;
loc_82372854:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82372894
	goto loc_82372894;
loc_8237285C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82372890
	if (ctx.cr0.eq) goto loc_82372890;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82372874:
	// bl 0x823727e0
	ctx.lr = 0x82372878;
	sub_823727E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82372854
	if (ctx.cr0.eq) goto loc_82372854;
	// lbzux r3,r9,r3
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82372874
	if (!ctx.cr0.eq) goto loc_82372874;
loc_82372890:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82372894:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823728A4"))) PPC_WEAK_FUNC(sub_823728A4);
PPC_FUNC_IMPL(__imp__sub_823728A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823728A8"))) PPC_WEAK_FUNC(sub_823728A8);
PPC_FUNC_IMPL(__imp__sub_823728A8) {
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
	// bne cr6,0x823728c4
	if (!ctx.cr6.eq) goto loc_823728C4;
loc_823728BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823728fc
	goto loc_823728FC;
loc_823728C4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823728f8
	if (ctx.cr0.eq) goto loc_823728F8;
loc_823728D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823727e0
	ctx.lr = 0x823728E0;
	sub_823727E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823728bc
	if (ctx.cr0.eq) goto loc_823728BC;
	// lbzux r11,r9,r3
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// extsb. r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823728d8
	if (!ctx.cr0.eq) goto loc_823728D8;
loc_823728F8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_823728FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237290C"))) PPC_WEAK_FUNC(sub_8237290C);
PPC_FUNC_IMPL(__imp__sub_8237290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372910"))) PPC_WEAK_FUNC(sub_82372910);
PPC_FUNC_IMPL(__imp__sub_82372910) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82372960
	if (ctx.cr6.eq) goto loc_82372960;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372960
	if (ctx.cr6.eq) goto loc_82372960;
	// bl 0x823728a8
	ctx.lr = 0x82372934;
	sub_823728A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823728a8
	ctx.lr = 0x82372940;
	sub_823728A8(ctx, base);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82372960
	if (ctx.cr6.gt) goto loc_82372960;
	// bge cr6,0x82372954
	if (!ctx.cr6.lt) goto loc_82372954;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82372964
	goto loc_82372964;
loc_82372954:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82358538
	ctx.lr = 0x8237295C;
	sub_82358538(ctx, base);
	// b 0x82372964
	goto loc_82372964;
loc_82372960:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82372964:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372974"))) PPC_WEAK_FUNC(sub_82372974);
PPC_FUNC_IMPL(__imp__sub_82372974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372978"))) PPC_WEAK_FUNC(sub_82372978);
PPC_FUNC_IMPL(__imp__sub_82372978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82372980;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82372a0c
	if (ctx.cr6.eq) goto loc_82372A0C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82372a0c
	if (ctx.cr6.eq) goto loc_82372A0C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82372a0c
	if (ctx.cr6.eq) goto loc_82372A0C;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823729f0
	if (ctx.cr0.eq) goto loc_823729F0;
loc_823729B8:
	// bl 0x823727e0
	ctx.lr = 0x823729BC;
	sub_823727E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82372a0c
	if (ctx.cr0.eq) goto loc_82372A0C;
	// add r29,r31,r10
	ctx.r29.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823729f0
	if (ctx.cr6.lt) goto loc_823729F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x82358508
	ctx.lr = 0x823729E0;
	sub_82358508(ctx, base);
	// lbzux r3,r30,r31
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823729b8
	if (!ctx.cr0.eq) goto loc_823729B8;
loc_823729F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x82358590
	ctx.lr = 0x82372A00;
	sub_82358590(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82372840
	ctx.lr = 0x82372A08;
	sub_82372840(ctx, base);
	// b 0x82372a10
	goto loc_82372A10;
loc_82372A0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82372A10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82372A18"))) PPC_WEAK_FUNC(sub_82372A18);
PPC_FUNC_IMPL(__imp__sub_82372A18) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31900
	ctx.r11.s64 = ctx.r11.s64 + 31900;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x82372A4C;
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

__attribute__((alias("__imp__sub_82372A64"))) PPC_WEAK_FUNC(sub_82372A64);
PPC_FUNC_IMPL(__imp__sub_82372A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372A68"))) PPC_WEAK_FUNC(sub_82372A68);
PPC_FUNC_IMPL(__imp__sub_82372A68) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82372a9c
	if (ctx.cr6.eq) goto loc_82372A9C;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823585a0
	ctx.lr = 0x82372A94;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82372A9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372AB0"))) PPC_WEAK_FUNC(sub_82372AB0);
PPC_FUNC_IMPL(__imp__sub_82372AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8241dd2c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372AC4"))) PPC_WEAK_FUNC(sub_82372AC4);
PPC_FUNC_IMPL(__imp__sub_82372AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372AC8"))) PPC_WEAK_FUNC(sub_82372AC8);
PPC_FUNC_IMPL(__imp__sub_82372AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8241dd3c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372ADC"))) PPC_WEAK_FUNC(sub_82372ADC);
PPC_FUNC_IMPL(__imp__sub_82372ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82372AE0"))) PPC_WEAK_FUNC(sub_82372AE0);
PPC_FUNC_IMPL(__imp__sub_82372AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,31900
	ctx.r11.s64 = ctx.r11.s64 + 31900;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82372a68
	sub_82372A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82372AF0"))) PPC_WEAK_FUNC(sub_82372AF0);
PPC_FUNC_IMPL(__imp__sub_82372AF0) {
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
	// bl 0x82372a68
	ctx.lr = 0x82372B08;
	sub_82372A68(ctx, base);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8241dd4c
	ctx.lr = 0x82372B14;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82372B34"))) PPC_WEAK_FUNC(sub_82372B34);
PPC_FUNC_IMPL(__imp__sub_82372B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372B38"))) PPC_WEAK_FUNC(sub_82372B38);
PPC_FUNC_IMPL(__imp__sub_82372B38) {
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
	// addi r11,r11,31900
	ctx.r11.s64 = ctx.r11.s64 + 31900;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82372a68
	ctx.lr = 0x82372B64;
	sub_82372A68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82372b74
	if (ctx.cr0.eq) goto loc_82372B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82372B74;
	sub_82357128(ctx, base);
loc_82372B74:
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

__attribute__((alias("__imp__sub_82372B90"))) PPC_WEAK_FUNC(sub_82372B90);
PPC_FUNC_IMPL(__imp__sub_82372B90) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x82371080
	ctx.lr = 0x82372BB8;
	sub_82371080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82372bc8
	if (!ctx.cr0.eq) goto loc_82372BC8;
loc_82372BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82372d34
	goto loc_82372D34;
loc_82372BC8:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82372d30
	if (ctx.cr6.gt) goto loc_82372D30;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,31904
	ctx.r12.s64 = ctx.r12.s64 + 31904;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,11264
	ctx.r12.s64 = ctx.r12.s64 + 11264;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82371010
	ctx.lr = 0x82372C0C;
	sub_82371010(ctx, base);
loc_82372C0C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82372d30
	if (!ctx.cr0.eq) goto loc_82372D30;
	// b 0x82372bc0
	goto loc_82372BC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82371080
	ctx.lr = 0x82372C24;
	sub_82371080(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x823710d8
	ctx.lr = 0x82372C34;
	sub_823710D8(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// bl 0x82371130
	ctx.lr = 0x82372C44;
	sub_82371130(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// bl 0x823711d8
	ctx.lr = 0x82372C54;
	sub_823711D8(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82371258
	ctx.lr = 0x82372C64;
	sub_82371258(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82371320
	ctx.lr = 0x82372C74;
	sub_82371320(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x823713b8
	ctx.lr = 0x82372C84;
	sub_823713B8(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x82371450
	ctx.lr = 0x82372C94;
	sub_82371450(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823714f8
	ctx.lr = 0x82372CA4;
	sub_823714F8(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x82371560
	ctx.lr = 0x82372CB4;
	sub_82371560(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x823715c8
	ctx.lr = 0x82372CC4;
	sub_823715C8(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82371320
	ctx.lr = 0x82372CD4;
	sub_82371320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372bc0
	if (ctx.cr0.eq) goto loc_82372BC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82372d30
	if (!ctx.cr6.gt) goto loc_82372D30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82371620
	ctx.lr = 0x82372CF4;
	sub_82371620(ctx, base);
	// b 0x82372c0c
	goto loc_82372C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82371320
	ctx.lr = 0x82372D04;
	sub_82371320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372bc0
	if (ctx.cr0.eq) goto loc_82372BC0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82372d30
	if (ctx.cr6.eq) goto loc_82372D30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823716b8
	ctx.lr = 0x82372D24;
	sub_823716B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82372d34
	if (ctx.cr0.eq) goto loc_82372D34;
loc_82372D30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82372D34:
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

__attribute__((alias("__imp__sub_82372D4C"))) PPC_WEAK_FUNC(sub_82372D4C);
PPC_FUNC_IMPL(__imp__sub_82372D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372D50"))) PPC_WEAK_FUNC(sub_82372D50);
PPC_FUNC_IMPL(__imp__sub_82372D50) {
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
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32032
	ctx.r10.s64 = ctx.r10.s64 + 32032;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x82372D8C;
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

__attribute__((alias("__imp__sub_82372DA4"))) PPC_WEAK_FUNC(sub_82372DA4);
PPC_FUNC_IMPL(__imp__sub_82372DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372DA8"))) PPC_WEAK_FUNC(sub_82372DA8);
PPC_FUNC_IMPL(__imp__sub_82372DA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82372df8
	if (ctx.cr6.eq) goto loc_82372DF8;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82372de4
	if (ctx.cr6.eq) goto loc_82372DE4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82372df8
	if (!ctx.cr6.eq) goto loc_82372DF8;
loc_82372DE4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82372df8
	if (ctx.cr6.eq) goto loc_82372DF8;
	// bl 0x82357240
	ctx.lr = 0x82372DF4;
	sub_82357240(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82372DF8:
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823585a0
	ctx.lr = 0x82372E0C;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_82372E24"))) PPC_WEAK_FUNC(sub_82372E24);
PPC_FUNC_IMPL(__imp__sub_82372E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82372E28"))) PPC_WEAK_FUNC(sub_82372E28);
PPC_FUNC_IMPL(__imp__sub_82372E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82372E30;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82372da8
	ctx.lr = 0x82372E40;
	sub_82372DA8(ctx, base);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823718c8
	ctx.lr = 0x82372E50;
	sub_823718C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82372e60
	if (!ctx.cr0.eq) goto loc_82372E60;
loc_82372E58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82373078
	goto loc_82373078;
loc_82372E60:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82373074
	if (ctx.cr6.gt) goto loc_82373074;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32000
	ctx.r12.s64 = ctx.r12.s64 + 32000;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,11928
	ctx.r12.s64 = ctx.r12.s64 + 11928;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371808
	ctx.lr = 0x82372EA4;
	sub_82371808(ctx, base);
loc_82372EA4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373074
	if (!ctx.cr0.eq) goto loc_82373074;
	// b 0x82372e58
	goto loc_82372E58;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823718c8
	ctx.lr = 0x82372EBC;
	sub_823718C8(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371980
	ctx.lr = 0x82372ECC;
	sub_82371980(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371a48
	ctx.lr = 0x82372EDC;
	sub_82371A48(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371b10
	ctx.lr = 0x82372EEC;
	sub_82371B10(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371bd8
	ctx.lr = 0x82372EFC;
	sub_82371BD8(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371ca0
	ctx.lr = 0x82372F0C;
	sub_82371CA0(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371d68
	ctx.lr = 0x82372F1C;
	sub_82371D68(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371e30
	ctx.lr = 0x82372F2C;
	sub_82371E30(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371ef8
	ctx.lr = 0x82372F3C;
	sub_82371EF8(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82371fd8
	ctx.lr = 0x82372F4C;
	sub_82371FD8(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823720b8
	ctx.lr = 0x82372F5C;
	sub_823720B8(ctx, base);
	// b 0x82372ea4
	goto loc_82372EA4;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371ca0
	ctx.lr = 0x82372F70;
	sub_82371CA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372e58
	if (ctx.cr0.eq) goto loc_82372E58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237306c
	if (!ctx.cr6.gt) goto loc_8237306C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823570e0
	ctx.lr = 0x82372F8C;
	sub_823570E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82357208
	ctx.lr = 0x82372F9C;
	sub_82357208(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82372FA8;
	sub_823570E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82372e58
	if (ctx.cr6.eq) goto loc_82372E58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823585a0
	ctx.lr = 0x82372FC0;
	sub_823585A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x823721a0
	ctx.lr = 0x82372FD4;
	sub_823721A0(ctx, base);
	// b 0x82373044
	goto loc_82373044;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82371ca0
	ctx.lr = 0x82372FE8;
	sub_82371CA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82372e58
	if (ctx.cr0.eq) goto loc_82372E58;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8237306c
	if (!ctx.cr6.gt) goto loc_8237306C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823570e0
	ctx.lr = 0x82373004;
	sub_823570E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82357208
	ctx.lr = 0x82373010;
	sub_82357208(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237301C;
	sub_823570E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82372e58
	if (ctx.cr6.eq) goto loc_82372E58;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x82373030;
	sub_823585A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82372270
	ctx.lr = 0x82373044;
	sub_82372270(ctx, base);
loc_82373044:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8237306c
	if (!ctx.cr0.eq) goto loc_8237306C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373064
	if (ctx.cr6.eq) goto loc_82373064;
	// bl 0x82357240
	ctx.lr = 0x82373060;
	sub_82357240(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82373064:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82372e58
	goto loc_82372E58;
loc_8237306C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82373074:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82373078:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82373080"))) PPC_WEAK_FUNC(sub_82373080);
PPC_FUNC_IMPL(__imp__sub_82373080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82373088;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82372da8
	ctx.lr = 0x82373098;
	sub_82372DA8(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82373218
	if (ctx.cr6.gt) goto loc_82373218;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32016
	ctx.r12.s64 = ctx.r12.s64 + 32016;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,12504
	ctx.r12.s64 = ctx.r12.s64 + 12504;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82373214
	goto loc_82373214;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// b 0x82373218
	goto loc_82373218;
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// b 0x82373218
	goto loc_82373218;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// b 0x82373218
	goto loc_82373218;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x82373218
	goto loc_82373218;
	// lfd f0,8(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// stfd f0,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f0.u64);
	// b 0x82373218
	goto loc_82373218;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82373218
	goto loc_82373218;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237320c
	if (ctx.cr6.eq) goto loc_8237320C;
	// bl 0x823728a8
	ctx.lr = 0x82373140;
	sub_823728A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823570e0
	ctx.lr = 0x8237314C;
	sub_823570E0(ctx, base);
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x8237315C;
	sub_82357208(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82373168;
	sub_823570E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8237317c
	if (!ctx.cr6.eq) goto loc_8237317C;
loc_82373174:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237321c
	goto loc_8237321C;
loc_8237317C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x82373184;
	sub_823585A0(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82372978
	ctx.lr = 0x82373198;
	sub_82372978(ctx, base);
	// b 0x82373200
	goto loc_82373200;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237320c
	if (ctx.cr6.eq) goto loc_8237320C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237320c
	if (ctx.cr6.eq) goto loc_8237320C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823570e0
	ctx.lr = 0x823731BC;
	sub_823570E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82357208
	ctx.lr = 0x823731C8;
	sub_82357208(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823731D4;
	sub_823570E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373174
	if (ctx.cr6.eq) goto loc_82373174;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x823585a0
	ctx.lr = 0x823731E8;
	sub_823585A0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82358508
	ctx.lr = 0x82373200;
	sub_82358508(ctx, base);
loc_82373200:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82373218
	goto loc_82373218;
loc_8237320C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82373214:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82373218:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237321C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82373224"))) PPC_WEAK_FUNC(sub_82373224);
PPC_FUNC_IMPL(__imp__sub_82373224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373228"))) PPC_WEAK_FUNC(sub_82373228);
PPC_FUNC_IMPL(__imp__sub_82373228) {
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
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32032
	ctx.r10.s64 = ctx.r10.s64 + 32032;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823585a0
	ctx.lr = 0x8237326C;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82373080
	ctx.lr = 0x82373278;
	sub_82373080(ctx, base);
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

__attribute__((alias("__imp__sub_82373294"))) PPC_WEAK_FUNC(sub_82373294);
PPC_FUNC_IMPL(__imp__sub_82373294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373298"))) PPC_WEAK_FUNC(sub_82373298);
PPC_FUNC_IMPL(__imp__sub_82373298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,32032
	ctx.r11.s64 = ctx.r11.s64 + 32032;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82372da8
	sub_82372DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823732A8"))) PPC_WEAK_FUNC(sub_823732A8);
PPC_FUNC_IMPL(__imp__sub_823732A8) {
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
	// bl 0x82372da8
	ctx.lr = 0x823732C8;
	sub_82372DA8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82373080
	ctx.lr = 0x823732DC;
	sub_82373080(ctx, base);
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

__attribute__((alias("__imp__sub_823732F4"))) PPC_WEAK_FUNC(sub_823732F4);
PPC_FUNC_IMPL(__imp__sub_823732F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823732F8"))) PPC_WEAK_FUNC(sub_823732F8);
PPC_FUNC_IMPL(__imp__sub_823732F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82372da8
	ctx.lr = 0x82373318;
	sub_82372DA8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x823728a8
	ctx.lr = 0x8237332C;
	sub_823728A8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82373080
	ctx.lr = 0x8237333C;
	sub_82373080(ctx, base);
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

__attribute__((alias("__imp__sub_82373354"))) PPC_WEAK_FUNC(sub_82373354);
PPC_FUNC_IMPL(__imp__sub_82373354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373358"))) PPC_WEAK_FUNC(sub_82373358);
PPC_FUNC_IMPL(__imp__sub_82373358) {
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
	// addi r11,r11,32032
	ctx.r11.s64 = ctx.r11.s64 + 32032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82372da8
	ctx.lr = 0x82373384;
	sub_82372DA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373394
	if (ctx.cr0.eq) goto loc_82373394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82373394;
	sub_82357128(ctx, base);
loc_82373394:
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

__attribute__((alias("__imp__sub_823733B0"))) PPC_WEAK_FUNC(sub_823733B0);
PPC_FUNC_IMPL(__imp__sub_823733B0) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32032
	ctx.r10.s64 = ctx.r10.s64 + 32032;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823733F4;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823732a8
	ctx.lr = 0x82373400;
	sub_823732A8(ctx, base);
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

__attribute__((alias("__imp__sub_8237341C"))) PPC_WEAK_FUNC(sub_8237341C);
PPC_FUNC_IMPL(__imp__sub_8237341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373420"))) PPC_WEAK_FUNC(sub_82373420);
PPC_FUNC_IMPL(__imp__sub_82373420) {
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
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r11,r11,32036
	ctx.r11.s64 = ctx.r11.s64 + 32036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8237c078
	ctx.lr = 0x82373448;
	sub_8237C078(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8237e850
	ctx.lr = 0x82373450;
	sub_8237E850(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82387f30
	ctx.lr = 0x82373458;
	sub_82387F30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237346C"))) PPC_WEAK_FUNC(sub_8237346C);
PPC_FUNC_IMPL(__imp__sub_8237346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373470"))) PPC_WEAK_FUNC(sub_82373470);
PPC_FUNC_IMPL(__imp__sub_82373470) {
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
	// lwz r3,-4872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823734ac
	if (ctx.cr6.eq) goto loc_823734AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823734A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4872, ctx.r11.u32);
loc_823734AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823734C0"))) PPC_WEAK_FUNC(sub_823734C0);
PPC_FUNC_IMPL(__imp__sub_823734C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4872(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823734CC"))) PPC_WEAK_FUNC(sub_823734CC);
PPC_FUNC_IMPL(__imp__sub_823734CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823734D0"))) PPC_WEAK_FUNC(sub_823734D0);
PPC_FUNC_IMPL(__imp__sub_823734D0) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82387ec8
	ctx.lr = 0x823734EC;
	sub_82387EC8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8237bd58
	ctx.lr = 0x823734F4;
	sub_8237BD58(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8237bea8
	ctx.lr = 0x823734FC;
	sub_8237BEA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237351C"))) PPC_WEAK_FUNC(sub_8237351C);
PPC_FUNC_IMPL(__imp__sub_8237351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373520"))) PPC_WEAK_FUNC(sub_82373520);
PPC_FUNC_IMPL(__imp__sub_82373520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82373560
	if (ctx.cr6.gt) goto loc_82373560;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32040
	ctx.r12.s64 = ctx.r12.s64 + 32040;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,13656
	ctx.r12.s64 = ctx.r12.s64 + 13656;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82373558:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82373560:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x82373594
	if (ctx.cr6.gt) goto loc_82373594;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x82373558
	if (!ctx.cr6.lt) goto loc_82373558;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823735a4
	if (!ctx.cr6.gt) goto loc_823735A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82373558
	if (!ctx.cr6.gt) goto loc_82373558;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x823735a4
	if (!ctx.cr6.gt) goto loc_823735A4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// b 0x823735a0
	goto loc_823735A0;
loc_82373594:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x823735a4
	if (ctx.cr6.lt) goto loc_823735A4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
loc_823735A0:
	// ble cr6,0x82373558
	if (!ctx.cr6.gt) goto loc_82373558;
loc_823735A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823735AC"))) PPC_WEAK_FUNC(sub_823735AC);
PPC_FUNC_IMPL(__imp__sub_823735AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823735B0"))) PPC_WEAK_FUNC(sub_823735B0);
PPC_FUNC_IMPL(__imp__sub_823735B0) {
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
	// addi r11,r11,32036
	ctx.r11.s64 = ctx.r11.s64 + 32036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82387ee8
	ctx.lr = 0x823735D8;
	sub_82387EE8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8237bdb8
	ctx.lr = 0x823735E0;
	sub_8237BDB8(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8237c018
	ctx.lr = 0x823735E8;
	sub_8237C018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823734d0
	ctx.lr = 0x823735F0;
	sub_823734D0(ctx, base);
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

__attribute__((alias("__imp__sub_82373608"))) PPC_WEAK_FUNC(sub_82373608);
PPC_FUNC_IMPL(__imp__sub_82373608) {
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
	// bl 0x82373420
	ctx.lr = 0x82373628;
	sub_82373420(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373638
	if (ctx.cr0.eq) goto loc_82373638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82373638;
	sub_82357128(ctx, base);
loc_82373638:
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

__attribute__((alias("__imp__sub_82373654"))) PPC_WEAK_FUNC(sub_82373654);
PPC_FUNC_IMPL(__imp__sub_82373654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373658"))) PPC_WEAK_FUNC(sub_82373658);
PPC_FUNC_IMPL(__imp__sub_82373658) {
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
	// lwz r3,-4872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823736b0
	if (!ctx.cr6.eq) goto loc_823736B0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823570e0
	ctx.lr = 0x82373680;
	sub_823570E0(ctx, base);
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x823570f0
	ctx.lr = 0x82373688;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8237369c
	if (ctx.cr0.eq) goto loc_8237369C;
	// bl 0x823735b0
	ctx.lr = 0x82373694;
	sub_823735B0(ctx, base);
	// stw r3,-4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4872, ctx.r3.u32);
	// b 0x823736a4
	goto loc_823736A4;
loc_8237369C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4872, ctx.r11.u32);
loc_823736A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823736AC;
	sub_823570E0(ctx, base);
	// lwz r3,-4872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4872);
loc_823736B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823736C4"))) PPC_WEAK_FUNC(sub_823736C4);
PPC_FUNC_IMPL(__imp__sub_823736C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823736C8"))) PPC_WEAK_FUNC(sub_823736C8);
PPC_FUNC_IMPL(__imp__sub_823736C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823736e8
	if (ctx.cr6.eq) goto loc_823736E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
loc_823736DC:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_823736E8:
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82373700
	if (ctx.cr6.eq) goto loc_82373700;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-23
	ctx.r11.s64 = ctx.r11.s64 + -23;
	// b 0x823736dc
	goto loc_823736DC;
loc_82373700:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82373520
	sub_82373520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82373708"))) PPC_WEAK_FUNC(sub_82373708);
PPC_FUNC_IMPL(__imp__sub_82373708) {
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
	// lwz r3,-4868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373744
	if (ctx.cr6.eq) goto loc_82373744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237373C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4868, ctx.r11.u32);
loc_82373744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373758"))) PPC_WEAK_FUNC(sub_82373758);
PPC_FUNC_IMPL(__imp__sub_82373758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4868(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373764"))) PPC_WEAK_FUNC(sub_82373764);
PPC_FUNC_IMPL(__imp__sub_82373764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373768"))) PPC_WEAK_FUNC(sub_82373768);
PPC_FUNC_IMPL(__imp__sub_82373768) {
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823737c8
	if (!ctx.cr6.lt) goto loc_823737C8;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823737c8
	if (ctx.cr6.eq) goto loc_823737C8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823737bc
	if (!ctx.cr6.lt) goto loc_823737BC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358520
	ctx.lr = 0x823737BC;
	sub_82358520(ctx, base);
loc_823737BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823737C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823737DC"))) PPC_WEAK_FUNC(sub_823737DC);
PPC_FUNC_IMPL(__imp__sub_823737DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823737E0"))) PPC_WEAK_FUNC(sub_823737E0);
PPC_FUNC_IMPL(__imp__sub_823737E0) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r11,r11,32064
	ctx.r11.s64 = ctx.r11.s64 + 32064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823826f8
	ctx.lr = 0x82373808;
	sub_823826F8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823826f8
	ctx.lr = 0x82373810;
	sub_823826F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373824"))) PPC_WEAK_FUNC(sub_82373824);
PPC_FUNC_IMPL(__imp__sub_82373824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373828"))) PPC_WEAK_FUNC(sub_82373828);
PPC_FUNC_IMPL(__imp__sub_82373828) {
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
	// lwz r3,-4868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823738c0
	if (!ctx.cr6.eq) goto loc_823738C0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823570e0
	ctx.lr = 0x82373850;
	sub_823570E0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x823570f0
	ctx.lr = 0x82373858;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823738b0
	if (ctx.cr0.eq) goto loc_823738B0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,32064
	ctx.r8.s64 = ctx.r10.s64 + 32064;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r3,-4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4868, ctx.r3.u32);
	// b 0x823738b4
	goto loc_823738B4;
loc_823738B0:
	// stw r11,-4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4868, ctx.r11.u32);
loc_823738B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823738BC;
	sub_823570E0(ctx, base);
	// lwz r3,-4868(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4868);
loc_823738C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823738D4"))) PPC_WEAK_FUNC(sub_823738D4);
PPC_FUNC_IMPL(__imp__sub_823738D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823738D8"))) PPC_WEAK_FUNC(sub_823738D8);
PPC_FUNC_IMPL(__imp__sub_823738D8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823738fc
	if (!ctx.cr6.eq) goto loc_823738FC;
loc_823738F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237394c
	goto loc_8237394C;
loc_823738FC:
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823738f4
	if (ctx.cr6.eq) goto loc_823738F4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82373914:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82373934
	if (ctx.cr6.eq) goto loc_82373934;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82373914
	if (ctx.cr6.lt) goto loc_82373914;
	// b 0x82373940
	goto loc_82373940;
loc_82373934:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82373768
	ctx.lr = 0x82373940;
	sub_82373768(ctx, base);
loc_82373940:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x823738f4
	if (!ctx.cr6.gt) goto loc_823738F4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237394C:
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

__attribute__((alias("__imp__sub_82373964"))) PPC_WEAK_FUNC(sub_82373964);
PPC_FUNC_IMPL(__imp__sub_82373964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373968"))) PPC_WEAK_FUNC(sub_82373968);
PPC_FUNC_IMPL(__imp__sub_82373968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82373970;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823739cc
	if (ctx.cr6.eq) goto loc_823739CC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373994:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823739B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823739cc
	if (!ctx.cr0.eq) goto loc_823739CC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373994
	if (ctx.cr6.lt) goto loc_82373994;
loc_823739CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823739D8"))) PPC_WEAK_FUNC(sub_823739D8);
PPC_FUNC_IMPL(__imp__sub_823739D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823739E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82373a2c
	if (ctx.cr6.eq) goto loc_82373A2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823739FC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373a2c
	if (!ctx.cr0.eq) goto loc_82373A2C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823739fc
	if (ctx.cr6.lt) goto loc_823739FC;
loc_82373A2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82373A38"))) PPC_WEAK_FUNC(sub_82373A38);
PPC_FUNC_IMPL(__imp__sub_82373A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82373A40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373a94
	if (ctx.cr6.eq) goto loc_82373A94;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373A60:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373a94
	if (!ctx.cr0.eq) goto loc_82373A94;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373a60
	if (ctx.cr6.lt) goto loc_82373A60;
loc_82373A94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82373AA0"))) PPC_WEAK_FUNC(sub_82373AA0);
PPC_FUNC_IMPL(__imp__sub_82373AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82373AA8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373afc
	if (ctx.cr6.eq) goto loc_82373AFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373AC8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373afc
	if (!ctx.cr0.eq) goto loc_82373AFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373ac8
	if (ctx.cr6.lt) goto loc_82373AC8;
loc_82373AFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82373B08"))) PPC_WEAK_FUNC(sub_82373B08);
PPC_FUNC_IMPL(__imp__sub_82373B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82373B10;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373b6c
	if (ctx.cr6.eq) goto loc_82373B6C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373B34:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373b6c
	if (!ctx.cr0.eq) goto loc_82373B6C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373b34
	if (ctx.cr6.lt) goto loc_82373B34;
loc_82373B6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82373B78"))) PPC_WEAK_FUNC(sub_82373B78);
PPC_FUNC_IMPL(__imp__sub_82373B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82373B80;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373bdc
	if (ctx.cr6.eq) goto loc_82373BDC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373BA4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373bdc
	if (!ctx.cr0.eq) goto loc_82373BDC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373ba4
	if (ctx.cr6.lt) goto loc_82373BA4;
loc_82373BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82373BE8"))) PPC_WEAK_FUNC(sub_82373BE8);
PPC_FUNC_IMPL(__imp__sub_82373BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82373BF0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373c44
	if (ctx.cr6.eq) goto loc_82373C44;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373C10:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373c44
	if (!ctx.cr0.eq) goto loc_82373C44;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373c10
	if (ctx.cr6.lt) goto loc_82373C10;
loc_82373C44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82373C50"))) PPC_WEAK_FUNC(sub_82373C50);
PPC_FUNC_IMPL(__imp__sub_82373C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82373C58;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82373cac
	if (ctx.cr6.eq) goto loc_82373CAC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82373C78:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373cac
	if (!ctx.cr0.eq) goto loc_82373CAC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82373c78
	if (ctx.cr6.lt) goto loc_82373C78;
loc_82373CAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82373CB8"))) PPC_WEAK_FUNC(sub_82373CB8);
PPC_FUNC_IMPL(__imp__sub_82373CB8) {
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
	// bl 0x823737e0
	ctx.lr = 0x82373CD8;
	sub_823737E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373ce8
	if (ctx.cr0.eq) goto loc_82373CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82373CE8;
	sub_82357128(ctx, base);
loc_82373CE8:
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

__attribute__((alias("__imp__sub_82373D04"))) PPC_WEAK_FUNC(sub_82373D04);
PPC_FUNC_IMPL(__imp__sub_82373D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373D08"))) PPC_WEAK_FUNC(sub_82373D08);
PPC_FUNC_IMPL(__imp__sub_82373D08) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82373d28
	if (!ctx.cr6.eq) goto loc_82373D28;
loc_82373D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82373d70
	goto loc_82373D70;
loc_82373D28:
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82373d5c
	if (ctx.cr6.eq) goto loc_82373D5C;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82373D40:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82373d20
	if (ctx.cr6.eq) goto loc_82373D20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82373d40
	if (ctx.cr6.lt) goto loc_82373D40;
loc_82373D5C:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82377360
	ctx.lr = 0x82373D68;
	sub_82377360(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82373D70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373D80"))) PPC_WEAK_FUNC(sub_82373D80);
PPC_FUNC_IMPL(__imp__sub_82373D80) {
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
	// lwz r3,-4864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82373dbc
	if (ctx.cr6.eq) goto loc_82373DBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82373DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4864, ctx.r11.u32);
loc_82373DBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373DD0"))) PPC_WEAK_FUNC(sub_82373DD0);
PPC_FUNC_IMPL(__imp__sub_82373DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373DDC"))) PPC_WEAK_FUNC(sub_82373DDC);
PPC_FUNC_IMPL(__imp__sub_82373DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373DE0"))) PPC_WEAK_FUNC(sub_82373DE0);
PPC_FUNC_IMPL(__imp__sub_82373DE0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82373df8
	if (ctx.cr6.eq) goto loc_82373DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82373DF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82373E00"))) PPC_WEAK_FUNC(sub_82373E00);
PPC_FUNC_IMPL(__imp__sub_82373E00) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,32100
	ctx.r11.s64 = ctx.r11.s64 + 32100;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82381388
	ctx.lr = 0x82373E30;
	sub_82381388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82373e40
	if (ctx.cr0.eq) goto loc_82373E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82373E40;
	sub_82357128(ctx, base);
loc_82373E40:
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

__attribute__((alias("__imp__sub_82373E5C"))) PPC_WEAK_FUNC(sub_82373E5C);
PPC_FUNC_IMPL(__imp__sub_82373E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373E60"))) PPC_WEAK_FUNC(sub_82373E60);
PPC_FUNC_IMPL(__imp__sub_82373E60) {
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
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// lwz r3,-4864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82373ecc
	if (!ctx.cr6.eq) goto loc_82373ECC;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823570e0
	ctx.lr = 0x82373E8C;
	sub_823570E0(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x82373E94;
	sub_823570F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82373eb8
	if (ctx.cr0.eq) goto loc_82373EB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,32100
	ctx.r11.s64 = ctx.r11.s64 + 32100;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x823815b8
	ctx.lr = 0x82373EB0;
	sub_823815B8(ctx, base);
	// stw r30,-4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4864, ctx.r30.u32);
	// b 0x82373ec0
	goto loc_82373EC0;
loc_82373EB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4864, ctx.r11.u32);
loc_82373EC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82373EC8;
	sub_823570E0(ctx, base);
	// lwz r3,-4864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4864);
loc_82373ECC:
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

__attribute__((alias("__imp__sub_82373EE4"))) PPC_WEAK_FUNC(sub_82373EE4);
PPC_FUNC_IMPL(__imp__sub_82373EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373EE8"))) PPC_WEAK_FUNC(sub_82373EE8);
PPC_FUNC_IMPL(__imp__sub_82373EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82373EF0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82373EFC;
	sub_823734C0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82373f1c
	if (ctx.cr6.eq) goto loc_82373F1C;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x82373f1c
	if (ctx.cr6.eq) goto loc_82373F1C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82373f98
	goto loc_82373F98;
loc_82373F1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237be30
	ctx.lr = 0x82373F30;
	sub_8237BE30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82380748
	ctx.lr = 0x82373F38;
	sub_82380748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82373f8c
	if (ctx.cr0.eq) goto loc_82373F8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a43c8
	ctx.lr = 0x82373F48;
	sub_823A43C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235acc0
	ctx.lr = 0x82373F54;
	sub_8235ACC0(ctx, base);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r10,32104
	ctx.r8.s64 = ctx.r10.s64 + 32104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15840
	ctx.r4.s64 = ctx.r11.s64 + 15840;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x82381760
	ctx.lr = 0x82373F7C;
	sub_82381760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82373f8c
	if (!ctx.cr0.eq) goto loc_82373F8C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82373F8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e850
	ctx.lr = 0x82373F94;
	sub_8237E850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82373F98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82373FA0"))) PPC_WEAK_FUNC(sub_82373FA0);
PPC_FUNC_IMPL(__imp__sub_82373FA0) {
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
	// bl 0x823734c0
	ctx.lr = 0x82373FB0;
	sub_823734C0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82373FCC"))) PPC_WEAK_FUNC(sub_82373FCC);
PPC_FUNC_IMPL(__imp__sub_82373FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82373FD0"))) PPC_WEAK_FUNC(sub_82373FD0);
PPC_FUNC_IMPL(__imp__sub_82373FD0) {
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
	// bl 0x823734c0
	ctx.lr = 0x82373FE0;
	sub_823734C0(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82374008
	if (ctx.cr6.eq) goto loc_82374008;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// bl 0x823734c0
	ctx.lr = 0x82374000;
	sub_823734C0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82374008:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374018"))) PPC_WEAK_FUNC(sub_82374018);
PPC_FUNC_IMPL(__imp__sub_82374018) {
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
	// bl 0x823734c0
	ctx.lr = 0x82374030;
	sub_823734C0(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x823734c0
	ctx.lr = 0x8237403C;
	sub_823734C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82381490
	ctx.lr = 0x82374050;
	sub_82381490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82374060
	if (ctx.cr0.eq) goto loc_82374060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82381698
	ctx.lr = 0x82374060;
	sub_82381698(ctx, base);
loc_82374060:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374074"))) PPC_WEAK_FUNC(sub_82374074);
PPC_FUNC_IMPL(__imp__sub_82374074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374078"))) PPC_WEAK_FUNC(sub_82374078);
PPC_FUNC_IMPL(__imp__sub_82374078) {
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
	// bl 0x823734c0
	ctx.lr = 0x82374094;
	sub_823734C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82388110
	ctx.lr = 0x823740A4;
	sub_82388110(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x823741bc
	if (ctx.cr6.gt) goto loc_823741BC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32112
	ctx.r12.s64 = ctx.r12.s64 + 32112;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,16600
	ctx.r12.s64 = ctx.r12.s64 + 16600;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387fa8
	ctx.lr = 0x823740E0;
	sub_82387FA8(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// bl 0x823734c0
	ctx.lr = 0x823740E8;
	sub_823734C0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_823740EC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823741bc
	goto loc_823741BC;
	// bl 0x823734c0
	ctx.lr = 0x823740F8;
	sub_823734C0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823740ec
	goto loc_823740EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82373fd0
	ctx.lr = 0x82374108;
	sub_82373FD0(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388048
	ctx.lr = 0x82374114;
	sub_82388048(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// bl 0x823734c0
	ctx.lr = 0x8237411C;
	sub_823734C0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x823740ec
	goto loc_823740EC;
	// bl 0x823734c0
	ctx.lr = 0x82374128;
	sub_823734C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x823740ec
	goto loc_823740EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82373fd0
	ctx.lr = 0x82374138;
	sub_82373FD0(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388070
	ctx.lr = 0x82374144;
	sub_82388070(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388098
	ctx.lr = 0x82374150;
	sub_82388098(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82373fd0
	ctx.lr = 0x8237415C;
	sub_82373FD0(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// bl 0x823734c0
	ctx.lr = 0x82374164;
	sub_823734C0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x823740ec
	goto loc_823740EC;
	// bl 0x823734c0
	ctx.lr = 0x82374170;
	sub_823734C0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x823740ec
	goto loc_823740EC;
	// bl 0x823734c0
	ctx.lr = 0x8237417C;
	sub_823734C0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x823740ec
	goto loc_823740EC;
	// bl 0x823734c0
	ctx.lr = 0x82374188;
	sub_823734C0(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x823740ec
	goto loc_823740EC;
	// bl 0x823734c0
	ctx.lr = 0x82374194;
	sub_823734C0(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x823740ec
	goto loc_823740EC;
	// bl 0x823734c0
	ctx.lr = 0x823741A0;
	sub_823734C0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x823740ec
	goto loc_823740EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823880d0
	ctx.lr = 0x823741B0;
	sub_823880D0(ctx, base);
	// b 0x823741bc
	goto loc_823741BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82374018
	ctx.lr = 0x823741BC;
	sub_82374018(ctx, base);
loc_823741BC:
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

__attribute__((alias("__imp__sub_823741D4"))) PPC_WEAK_FUNC(sub_823741D4);
PPC_FUNC_IMPL(__imp__sub_823741D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823741D8"))) PPC_WEAK_FUNC(sub_823741D8);
PPC_FUNC_IMPL(__imp__sub_823741D8) {
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
	// lwz r3,-4860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4860);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374214
	if (ctx.cr6.eq) goto loc_82374214;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237420C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4860, ctx.r11.u32);
loc_82374214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374228"))) PPC_WEAK_FUNC(sub_82374228);
PPC_FUNC_IMPL(__imp__sub_82374228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4860(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374234"))) PPC_WEAK_FUNC(sub_82374234);
PPC_FUNC_IMPL(__imp__sub_82374234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374238"))) PPC_WEAK_FUNC(sub_82374238);
PPC_FUNC_IMPL(__imp__sub_82374238) {
	PPC_FUNC_PROLOGUE();
	// stw r4,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374240"))) PPC_WEAK_FUNC(sub_82374240);
PPC_FUNC_IMPL(__imp__sub_82374240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,740(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374248"))) PPC_WEAK_FUNC(sub_82374248);
PPC_FUNC_IMPL(__imp__sub_82374248) {
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
	// bl 0x823763b0
	ctx.lr = 0x82374268;
	sub_823763B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82374280
	if (ctx.cr0.eq) goto loc_82374280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823768a8
	ctx.lr = 0x8237427C;
	sub_823768A8(ctx, base);
	// b 0x82374284
	goto loc_82374284;
loc_82374280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374284:
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

__attribute__((alias("__imp__sub_8237429C"))) PPC_WEAK_FUNC(sub_8237429C);
PPC_FUNC_IMPL(__imp__sub_8237429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823742A0"))) PPC_WEAK_FUNC(sub_823742A0);
PPC_FUNC_IMPL(__imp__sub_823742A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,732(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823742A8"))) PPC_WEAK_FUNC(sub_823742A8);
PPC_FUNC_IMPL(__imp__sub_823742A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823742B0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x823742BC;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x823742C4;
	sub_823763B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r31,100
	ctx.r28.s64 = ctx.r31.s64 + 100;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x823742e0
	if (ctx.cr6.eq) goto loc_823742E0;
loc_823742D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82374364
	goto loc_82374364;
loc_823742E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823742fc
	if (ctx.cr6.eq) goto loc_823742FC;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x823742d8
	if (!ctx.cr6.eq) goto loc_823742D8;
loc_823742FC:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r29,776(r30)
	PPC_STORE_U32(ctx.r30.u32 + 776, ctx.r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82374360
	if (!ctx.cr6.gt) goto loc_82374360;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
loc_82374324:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82378270
	ctx.lr = 0x82374330;
	sub_82378270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8237433c
	if (!ctx.cr0.eq) goto loc_8237433C;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8237433C:
	// bl 0x82388298
	ctx.lr = 0x82374340;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8237434c
	if (ctx.cr0.eq) goto loc_8237434C;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8237434C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82374324
	if (ctx.cr6.lt) goto loc_82374324;
loc_82374360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374364:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8237436C"))) PPC_WEAK_FUNC(sub_8237436C);
PPC_FUNC_IMPL(__imp__sub_8237436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374370"))) PPC_WEAK_FUNC(sub_82374370);
PPC_FUNC_IMPL(__imp__sub_82374370) {
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
	// bl 0x823734c0
	ctx.lr = 0x82374380;
	sub_823734C0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82374398
	if (ctx.cr6.eq) goto loc_82374398;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823743c8
	goto loc_823743C8;
loc_82374398:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823743bc
	if (ctx.cr6.eq) goto loc_823743BC;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x823743c8
	goto loc_823743C8;
loc_823743BC:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_823743C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823743D8"))) PPC_WEAK_FUNC(sub_823743D8);
PPC_FUNC_IMPL(__imp__sub_823743D8) {
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
	// bl 0x823734c0
	ctx.lr = 0x823743EC;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x823743F4;
	sub_823763B0(ctx, base);
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmpwi cr6,r11,-30000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -30000, ctx.xer);
	// bgt cr6,0x8237446c
	if (ctx.cr6.gt) goto loc_8237446C;
	// beq cr6,0x82374464
	if (ctx.cr6.eq) goto loc_82374464;
	// addi r11,r11,30010
	ctx.r11.s64 = ctx.r11.s64 + 30010;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x823744cc
	if (ctx.cr6.gt) goto loc_823744CC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32136
	ctx.r12.s64 = ctx.r12.s64 + 32136;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,17464
	ctx.r12.s64 = ctx.r12.s64 + 17464;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82374438:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237443C:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82374440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82374454:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8237443c
	goto loc_8237443C;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8237443c
	goto loc_8237443C;
loc_82374464:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8237443c
	goto loc_8237443C;
loc_8237446C:
	// cmpwi cr6,r11,-10008
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10008, ctx.xer);
	// beq cr6,0x823744c0
	if (ctx.cr6.eq) goto loc_823744C0;
	// cmpwi cr6,r11,-10007
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10007, ctx.xer);
	// beq cr6,0x823744b4
	if (ctx.cr6.eq) goto loc_823744B4;
	// cmpwi cr6,r11,-10005
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10005, ctx.xer);
	// beq cr6,0x823744ac
	if (ctx.cr6.eq) goto loc_823744AC;
	// cmpwi cr6,r11,-10003
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10003, ctx.xer);
	// beq cr6,0x82374464
	if (ctx.cr6.eq) goto loc_82374464;
	// cmpwi cr6,r11,-10002
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10002, ctx.xer);
	// beq cr6,0x82374438
	if (ctx.cr6.eq) goto loc_82374438;
	// cmpwi cr6,r11,-10001
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10001, ctx.xer);
	// beq cr6,0x82374454
	if (ctx.cr6.eq) goto loc_82374454;
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bne cr6,0x823744cc
	if (!ctx.cr6.eq) goto loc_823744CC;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8237443c
	goto loc_8237443C;
loc_823744AC:
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x8237443c
	goto loc_8237443C;
loc_823744B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab1b0
	ctx.lr = 0x823744BC;
	sub_823AB1B0(ctx, base);
	// b 0x823744c4
	goto loc_823744C4;
loc_823744C0:
	// li r3,12
	ctx.r3.s64 = 12;
loc_823744C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237443c
	if (!ctx.cr6.eq) goto loc_8237443C;
loc_823744CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82374440
	goto loc_82374440;
}

__attribute__((alias("__imp__sub_823744D4"))) PPC_WEAK_FUNC(sub_823744D4);
PPC_FUNC_IMPL(__imp__sub_823744D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823744D8"))) PPC_WEAK_FUNC(sub_823744D8);
PPC_FUNC_IMPL(__imp__sub_823744D8) {
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
	// bl 0x823763b0
	ctx.lr = 0x823744E8;
	sub_823763B0(ctx, base);
	// lhz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823744FC"))) PPC_WEAK_FUNC(sub_823744FC);
PPC_FUNC_IMPL(__imp__sub_823744FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374500"))) PPC_WEAK_FUNC(sub_82374500);
PPC_FUNC_IMPL(__imp__sub_82374500) {
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
	// bl 0x823763b0
	ctx.lr = 0x82374518;
	sub_823763B0(ctx, base);
	// sth r31,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r31.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374530"))) PPC_WEAK_FUNC(sub_82374530);
PPC_FUNC_IMPL(__imp__sub_82374530) {
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
	// bl 0x823763b0
	ctx.lr = 0x82374548;
	sub_823763B0(ctx, base);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823745b8
	if (ctx.cr6.eq) goto loc_823745B8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x823745b8
	if (ctx.cr6.eq) goto loc_823745B8;
	// lhz r10,766(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 766);
	// lwz r9,748(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	// sth r10,208(r3)
	PPC_STORE_U16(ctx.r3.u32 + 208, ctx.r10.u16);
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
	// lwz r10,772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374598
	if (ctx.cr6.eq) goto loc_82374598;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x82374598
	if (ctx.cr6.eq) goto loc_82374598;
	// lhz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 764);
	// li r8,60
	ctx.r8.s64 = 60;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// b 0x8237459c
	goto loc_8237459C;
loc_82374598:
	// lhz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 764);
loc_8237459C:
	// sth r10,210(r11)
	PPC_STORE_U16(ctx.r11.u32 + 210, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// lwz r10,752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// b 0x823745bc
	goto loc_823745BC;
loc_823745B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823745BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823745D0"))) PPC_WEAK_FUNC(sub_823745D0);
PPC_FUNC_IMPL(__imp__sub_823745D0) {
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
	// bl 0x823763b0
	ctx.lr = 0x823745E8;
	sub_823763B0(ctx, base);
	// sth r31,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r31.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374600"))) PPC_WEAK_FUNC(sub_82374600);
PPC_FUNC_IMPL(__imp__sub_82374600) {
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
	// bl 0x823763b0
	ctx.lr = 0x82374620;
	sub_823763B0(ctx, base);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82374640"))) PPC_WEAK_FUNC(sub_82374640);
PPC_FUNC_IMPL(__imp__sub_82374640) {
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
	// bl 0x823734c0
	ctx.lr = 0x82374650;
	sub_823734C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374668"))) PPC_WEAK_FUNC(sub_82374668);
PPC_FUNC_IMPL(__imp__sub_82374668) {
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
	// bl 0x823734c0
	ctx.lr = 0x82374678;
	sub_823734C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374690"))) PPC_WEAK_FUNC(sub_82374690);
PPC_FUNC_IMPL(__imp__sub_82374690) {
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
	// bl 0x823734c0
	ctx.lr = 0x823746A8;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x823746B0;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r30,14
	ctx.r30.s64 = 14;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823746d0
	if (ctx.cr6.lt) goto loc_823746D0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x823746d0
	if (ctx.cr6.eq) goto loc_823746D0;
	// bl 0x82377428
	ctx.lr = 0x823746CC;
	sub_82377428(ctx, base);
	// b 0x823746d4
	goto loc_823746D4;
loc_823746D0:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_823746D4:
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

__attribute__((alias("__imp__sub_823746F0"))) PPC_WEAK_FUNC(sub_823746F0);
PPC_FUNC_IMPL(__imp__sub_823746F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823746F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82374704;
	sub_823734C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x8237470C;
	sub_823763B0(ctx, base);
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// blt cr6,0x82374764
	if (ctx.cr6.lt) goto loc_82374764;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x82374730
	if (!ctx.cr6.gt) goto loc_82374730;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// beq cr6,0x82374730
	if (ctx.cr6.eq) goto loc_82374730;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// b 0x82374740
	goto loc_82374740;
loc_82374730:
	// bl 0x82377580
	ctx.lr = 0x82374734;
	sub_82377580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82374764
	if (!ctx.cr0.eq) goto loc_82374764;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_82374740:
	// bne cr6,0x82374764
	if (!ctx.cr6.eq) goto loc_82374764;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374764
	if (ctx.cr6.eq) goto loc_82374764;
	// bl 0x82357128
	ctx.lr = 0x8237475C;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r11.u32);
loc_82374764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8237476C"))) PPC_WEAK_FUNC(sub_8237476C);
PPC_FUNC_IMPL(__imp__sub_8237476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374770"))) PPC_WEAK_FUNC(sub_82374770);
PPC_FUNC_IMPL(__imp__sub_82374770) {
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
	// bl 0x823763b0
	ctx.lr = 0x82374784;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823747c8
	if (!ctx.cr6.eq) goto loc_823747C8;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823747c8
	if (!ctx.cr6.eq) goto loc_823747C8;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// bl 0x82378270
	ctx.lr = 0x823747A8;
	sub_82378270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823747c8
	if (ctx.cr0.eq) goto loc_823747C8;
	// bl 0x823882e8
	ctx.lr = 0x823747B4;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823747c8
	if (!ctx.cr0.eq) goto loc_823747C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378eb0
	ctx.lr = 0x823747C4;
	sub_82378EB0(ctx, base);
	// b 0x823747cc
	goto loc_823747CC;
loc_823747C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823747CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823747E0"))) PPC_WEAK_FUNC(sub_823747E0);
PPC_FUNC_IMPL(__imp__sub_823747E0) {
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
	// bl 0x823763b0
	ctx.lr = 0x823747F4;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82374838
	if (!ctx.cr6.eq) goto loc_82374838;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374838
	if (!ctx.cr6.eq) goto loc_82374838;
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// bl 0x82378270
	ctx.lr = 0x82374818;
	sub_82378270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82374838
	if (ctx.cr0.eq) goto loc_82374838;
	// bl 0x823882e8
	ctx.lr = 0x82374824;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82374838
	if (ctx.cr0.eq) goto loc_82374838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82378fc8
	ctx.lr = 0x82374834;
	sub_82378FC8(ctx, base);
	// b 0x8237483c
	goto loc_8237483C;
loc_82374838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237483C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374850"))) PPC_WEAK_FUNC(sub_82374850);
PPC_FUNC_IMPL(__imp__sub_82374850) {
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
	// bl 0x823763b0
	ctx.lr = 0x82374860;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82374874
	if (ctx.cr6.eq) goto loc_82374874;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82374894
	if (!ctx.cr6.eq) goto loc_82374894;
loc_82374874:
	// lbz r4,92(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// bl 0x82378270
	ctx.lr = 0x8237487C;
	sub_82378270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82374894
	if (ctx.cr0.eq) goto loc_82374894;
	// bl 0x823882e8
	ctx.lr = 0x82374888;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82374898
	if (!ctx.cr0.eq) goto loc_82374898;
loc_82374894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374898:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823748A8"))) PPC_WEAK_FUNC(sub_823748A8);
PPC_FUNC_IMPL(__imp__sub_823748A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823748B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x823763b0
	ctx.lr = 0x823748C4;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823748d8
	if (ctx.cr6.eq) goto loc_823748D8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823748e8
	if (!ctx.cr6.eq) goto loc_823748E8;
loc_823748D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823792d8
	ctx.lr = 0x823748E4;
	sub_823792D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823748E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823748F4"))) PPC_WEAK_FUNC(sub_823748F4);
PPC_FUNC_IMPL(__imp__sub_823748F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823748F8"))) PPC_WEAK_FUNC(sub_823748F8);
PPC_FUNC_IMPL(__imp__sub_823748F8) {
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82374958
	if (!ctx.cr6.lt) goto loc_82374958;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82374958
	if (ctx.cr6.eq) goto loc_82374958;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8237494c
	if (!ctx.cr6.lt) goto loc_8237494C;
	// mulli r10,r4,258
	ctx.r10.s64 = ctx.r4.s64 * 258;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,258
	ctx.r4.s64 = ctx.r3.s64 + 258;
	// mulli r5,r11,258
	ctx.r5.s64 = ctx.r11.s64 * 258;
	// bl 0x82358520
	ctx.lr = 0x8237494C;
	sub_82358520(ctx, base);
loc_8237494C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82374958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8237496C"))) PPC_WEAK_FUNC(sub_8237496C);
PPC_FUNC_IMPL(__imp__sub_8237496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374970"))) PPC_WEAK_FUNC(sub_82374970);
PPC_FUNC_IMPL(__imp__sub_82374970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82374978;
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
	// bne cr6,0x82374990
	if (!ctx.cr6.eq) goto loc_82374990;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82374990:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823749a4
	if (!ctx.cr0.eq) goto loc_823749A4;
loc_8237499C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82374a1c
	goto loc_82374A1C;
loc_823749A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823749AC;
	sub_823570E0(ctx, base);
	// mulli r29,r28,258
	ctx.r29.s64 = ctx.r28.s64 * 258;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x823749BC;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823749C8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8237499c
	if (ctx.cr6.eq) goto loc_8237499C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823749DC;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82374a10
	if (ctx.cr6.eq) goto loc_82374A10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r5,r11,258
	ctx.r5.s64 = ctx.r11.s64 * 258;
	// bl 0x82358508
	ctx.lr = 0x823749F8;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374a10
	if (ctx.cr6.eq) goto loc_82374A10;
	// bl 0x82357240
	ctx.lr = 0x82374A08;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82374A10:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82374A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82374A24"))) PPC_WEAK_FUNC(sub_82374A24);
PPC_FUNC_IMPL(__imp__sub_82374A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374A28"))) PPC_WEAK_FUNC(sub_82374A28);
PPC_FUNC_IMPL(__imp__sub_82374A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82374A30;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82374A3C;
	sub_823734C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82374A44;
	sub_823734C0(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stw r27,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r27.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82374a64
	if (ctx.cr6.eq) goto loc_82374A64;
loc_82374A5C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82374aa4
	goto loc_82374AA4;
loc_82374A64:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,720
	ctx.r4.s64 = 720;
	// stw r29,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x823585a0
	ctx.lr = 0x82374A78;
	sub_823585A0(ctx, base);
	// stw r29,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r29.u32);
	// stw r29,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r29.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82374a94
	if (ctx.cr6.eq) goto loc_82374A94;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82374a5c
	if (!ctx.cr6.eq) goto loc_82374A5C;
loc_82374A94:
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
loc_82374AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82374AAC"))) PPC_WEAK_FUNC(sub_82374AAC);
PPC_FUNC_IMPL(__imp__sub_82374AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374AB0"))) PPC_WEAK_FUNC(sub_82374AB0);
PPC_FUNC_IMPL(__imp__sub_82374AB0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r4,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r4.u32);
	// stw r6,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r6.u32);
	// stw r7,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r7.u32);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// stw r8,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r8.u32);
	// sth r5,764(r3)
	PPC_STORE_U16(ctx.r3.u32 + 764, ctx.r5.u16);
	// ble cr6,0x82374ad8
	if (!ctx.cr6.gt) goto loc_82374AD8;
	// li r11,34
	ctx.r11.s64 = 34;
	// sth r11,764(r3)
	PPC_STORE_U16(ctx.r3.u32 + 764, ctx.r11.u16);
loc_82374AD8:
	// lhz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 764);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82374aec
	if (!ctx.cr6.lt) goto loc_82374AEC;
	// li r11,20
	ctx.r11.s64 = 20;
	// sth r11,764(r3)
	PPC_STORE_U16(ctx.r3.u32 + 764, ctx.r11.u16);
loc_82374AEC:
	// sth r9,766(r3)
	PPC_STORE_U16(ctx.r3.u32 + 766, ctx.r9.u16);
	// b 0x82374530
	sub_82374530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82374AF4"))) PPC_WEAK_FUNC(sub_82374AF4);
PPC_FUNC_IMPL(__imp__sub_82374AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374AF8"))) PPC_WEAK_FUNC(sub_82374AF8);
PPC_FUNC_IMPL(__imp__sub_82374AF8) {
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
	// clrlwi. r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r4,780(r3)
	PPC_STORE_U16(ctx.r3.u32 + 780, ctx.r4.u16);
	// bne 0x82374b1c
	if (!ctx.cr0.eq) goto loc_82374B1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,780(r3)
	PPC_STORE_U16(ctx.r3.u32 + 780, ctx.r11.u16);
loc_82374B1C:
	// lhz r31,780(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 780);
	// bl 0x823763b0
	ctx.lr = 0x82374B24;
	sub_823763B0(ctx, base);
	// sth r31,66(r3)
	PPC_STORE_U16(ctx.r3.u32 + 66, ctx.r31.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82374B3C"))) PPC_WEAK_FUNC(sub_82374B3C);
PPC_FUNC_IMPL(__imp__sub_82374B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82374B40"))) PPC_WEAK_FUNC(sub_82374B40);
PPC_FUNC_IMPL(__imp__sub_82374B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82374B48;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x823763b0
	ctx.lr = 0x82374B58;
	sub_823763B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82374B5C:
	// lwz r26,796(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82374bf4
	if (ctx.cr6.eq) goto loc_82374BF4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82374B70:
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// add. r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82374c30
	if (ctx.cr0.eq) goto loc_82374C30;
	// addi r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 3;
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82379140
	ctx.lr = 0x82374B90;
	sub_82379140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82374ba0
	if (!ctx.cr0.lt) goto loc_82374BA0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82374be4
	goto loc_82374BE4;
loc_82374BA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82374c20
	if (!ctx.cr6.eq) goto loc_82374C20;
	// lwz r11,136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82374bd0
	if (!ctx.cr6.eq) goto loc_82374BD0;
	// lwz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82374bd0
	if (ctx.cr6.eq) goto loc_82374BD0;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_82374BD0:
	// lhz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 56);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82374c20
	if (ctx.cr6.lt) goto loc_82374C20;
loc_82374BE4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,258
	ctx.r29.s64 = ctx.r29.s64 + 258;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82374b70
	if (ctx.cr6.lt) goto loc_82374B70;
loc_82374BF4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823790c0
	ctx.lr = 0x82374BFC;
	sub_823790C0(ctx, base);
	// lwz r11,784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// or r31,r3,r25
	ctx.r31.u64 = ctx.r3.u64 | ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82374c14
	if (ctx.cr6.eq) goto loc_82374C14;
	// bl 0x82373dd0
	ctx.lr = 0x82374C10;
	sub_82373DD0(ctx, base);
	// bl 0x82374078
	ctx.lr = 0x82374C14;
	sub_82374078(ctx, base);
loc_82374C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82374C18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82374C20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,788
	ctx.r3.s64 = ctx.r30.s64 + 788;
	// bl 0x823748f8
	ctx.lr = 0x82374C2C;
	sub_823748F8(ctx, base);
	// b 0x82374b5c
	goto loc_82374B5C;
loc_82374C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82374c18
	goto loc_82374C18;
}

__attribute__((alias("__imp__sub_82374C38"))) PPC_WEAK_FUNC(sub_82374C38);
PPC_FUNC_IMPL(__imp__sub_82374C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82374C40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82374C4C;
	sub_823734C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82374C54;
	sub_823763B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82378cd8
	ctx.lr = 0x82374C5C;
	sub_82378CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82374c90
	if (!ctx.cr0.eq) goto loc_82374C90;
	// bl 0x823734c0
	ctx.lr = 0x82374C68;
	sub_823734C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823743d8
	ctx.lr = 0x82374C78;
	sub_823743D8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374c98
	if (!ctx.cr6.eq) goto loc_82374C98;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x82374c98
	goto loc_82374C98;
loc_82374C90:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82374C98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82374CA0"))) PPC_WEAK_FUNC(sub_82374CA0);
PPC_FUNC_IMPL(__imp__sub_82374CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82374CA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82374CB4;
	sub_823734C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82374CBC;
	sub_823763B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82378de0
	ctx.lr = 0x82374CC4;
	sub_82378DE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82374cf8
	if (!ctx.cr0.eq) goto loc_82374CF8;
	// bl 0x823734c0
	ctx.lr = 0x82374CD0;
	sub_823734C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823743d8
	ctx.lr = 0x82374CE0;
	sub_823743D8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374d00
	if (!ctx.cr6.eq) goto loc_82374D00;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// b 0x82374d00
	goto loc_82374D00;
loc_82374CF8:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82374D00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82374D08"))) PPC_WEAK_FUNC(sub_82374D08);
PPC_FUNC_IMPL(__imp__sub_82374D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82374D10;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82374D1C;
	sub_823734C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// bl 0x823763b0
	ctx.lr = 0x82374D28;
	sub_823763B0(ctx, base);
	// lwz r10,108(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// li r4,720
	ctx.r4.s64 = 720;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// bl 0x823585a0
	ctx.lr = 0x82374D48;
	sub_823585A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,116(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32148
	ctx.r4.s64 = ctx.r11.s64 + 32148;
	// bl 0x82248910
	ctx.lr = 0x82374D5C;
	sub_82248910(ctx, base);
	// lwz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r8,104(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// rlwinm r9,r27,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFFFF000;
	// mulli r10,r11,8993
	ctx.r10.s64 = ctx.r11.s64 * 8993;
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// mulli r11,r8,11603
	ctx.r11.s64 = ctx.r8.s64 * 11603;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,24834
	ctx.r29.s64 = ctx.r11.s64 + 24834;
	// beq cr6,0x82374d94
	if (ctx.cr6.eq) goto loc_82374D94;
	// bl 0x82357128
	ctx.lr = 0x82374D90;
	sub_82357128(ctx, base);
	// stw r25,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r25.u32);
loc_82374D94:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82374D9C;
	sub_823570E0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82374DA8;
	sub_82357208(ctx, base);
	// stw r3,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82374DB4;
	sub_823570E0(ctx, base);
	// lwz r7,736(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82374ddc
	if (!ctx.cr6.eq) goto loc_82374DDC;
	// bl 0x823734c0
	ctx.lr = 0x82374DC4;
	sub_823734C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823743d8
	ctx.lr = 0x82374DD4;
	sub_823743D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82374ee4
	goto loc_82374EE4;
loc_82374DDC:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82376770
	ctx.lr = 0x82374DF4;
	sub_82376770(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82374DFC;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82374eac
	if (ctx.cr6.eq) goto loc_82374EAC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82374eac
	if (ctx.cr6.eq) goto loc_82374EAC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82374e20
	if (ctx.cr6.eq) goto loc_82374E20;
	// stw r11,188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 188, ctx.r11.u32);
loc_82374E20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374530
	ctx.lr = 0x82374E28;
	sub_82374530(ctx, base);
	// lhz r29,780(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 780);
	// bl 0x823763b0
	ctx.lr = 0x82374E30;
	sub_823763B0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// sth r29,66(r3)
	PPC_STORE_U16(ctx.r3.u32 + 66, ctx.r29.u16);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// sth r11,60(r28)
	PPC_STORE_U16(ctx.r28.u32 + 60, ctx.r11.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82377e00
	ctx.lr = 0x82374E58;
	sub_82377E00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82374ea0
	if (!ctx.cr0.eq) goto loc_82374EA0;
	// bl 0x823734c0
	ctx.lr = 0x82374E64;
	sub_823734C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823743d8
	ctx.lr = 0x82374E74;
	sub_823743D8(ctx, base);
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374e88
	if (!ctx.cr6.eq) goto loc_82374E88;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
loc_82374E88:
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374ee8
	if (ctx.cr6.eq) goto loc_82374EE8;
	// bl 0x82357128
	ctx.lr = 0x82374E98;
	sub_82357128(ctx, base);
	// stw r25,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r25.u32);
	// b 0x82374ee8
	goto loc_82374EE8;
loc_82374EA0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// b 0x82374ee8
	goto loc_82374EE8;
loc_82374EAC:
	// bl 0x823734c0
	ctx.lr = 0x82374EB0;
	sub_823734C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823743d8
	ctx.lr = 0x82374EC0;
	sub_823743D8(ctx, base);
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82374ed4
	if (ctx.cr6.eq) goto loc_82374ED4;
	// bl 0x82357128
	ctx.lr = 0x82374ED0;
	sub_82357128(ctx, base);
	// stw r25,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r25.u32);
loc_82374ED4:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82374ee8
	if (!ctx.cr6.eq) goto loc_82374EE8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82374EE4:
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
loc_82374EE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82374EF0"))) PPC_WEAK_FUNC(sub_82374EF0);
PPC_FUNC_IMPL(__imp__sub_82374EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82374EF8;
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
	// bgt cr6,0x82374f30
	if (ctx.cr6.gt) goto loc_82374F30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82374970
	ctx.lr = 0x82374F20;
	sub_82374970(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82374f30
	if (!ctx.cr0.eq) goto loc_82374F30;
loc_82374F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82374f60
	goto loc_82374F60;
loc_82374F30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82374f28
	if (ctx.cr6.eq) goto loc_82374F28;
	// mulli r11,r30,258
	ctx.r11.s64 = ctx.r30.s64 * 258;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x82374F50;
	sub_82248A40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82374F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82374F68"))) PPC_WEAK_FUNC(sub_82374F68);
PPC_FUNC_IMPL(__imp__sub_82374F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82374F70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32164
	ctx.r11.s64 = ctx.r11.s64 + 32164;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r30.u32);
	// stw r10,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, ctx.r10.u32);
	// addi r29,r3,812
	ctx.r29.s64 = ctx.r3.s64 + 812;
	// stw r30,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r30.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82374FB0;
	sub_823A86F8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r4,720
	ctx.r4.s64 = 720;
	// bl 0x823585a0
	ctx.lr = 0x82374FC0;
	sub_823585A0(ctx, base);
	// li r11,30000
	ctx.r11.s64 = 30000;
	// li r10,15000
	ctx.r10.s64 = 15000;
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// addi r3,r31,748
	ctx.r3.s64 = ctx.r31.s64 + 748;
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r10,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r10.u32);
	// bl 0x823585a0
	ctx.lr = 0x82374FE4;
	sub_823585A0(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r30.u32);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// sth r10,764(r31)
	PPC_STORE_U16(ctx.r31.u32 + 764, ctx.r10.u16);
	// stw r9,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r8.u32);
	// li r10,2000
	ctx.r10.s64 = 2000;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// li r8,60
	ctx.r8.s64 = 60;
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
	// sth r9,766(r31)
	PPC_STORE_U16(ctx.r31.u32 + 766, ctx.r9.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r8.u32);
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// sth r11,780(r31)
	PPC_STORE_U16(ctx.r31.u32 + 780, ctx.r11.u16);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82375038;
	sub_823A86F8(ctx, base);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82375048"))) PPC_WEAK_FUNC(sub_82375048);
PPC_FUNC_IMPL(__imp__sub_82375048) {
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
	// addi r30,r3,788
	ctx.r30.s64 = ctx.r3.s64 + 788;
	// addi r11,r11,32164
	ctx.r11.s64 = ctx.r11.s64 + 32164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823826f8
	ctx.lr = 0x82375078;
	sub_823826F8(ctx, base);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82375090
	if (ctx.cr6.eq) goto loc_82375090;
	// bl 0x82357128
	ctx.lr = 0x82375088;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
loc_82375090:
	// addi r3,r31,812
	ctx.r3.s64 = ctx.r31.s64 + 812;
	// bl 0x823ab568
	ctx.lr = 0x82375098;
	sub_823AB568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823826f8
	ctx.lr = 0x823750A0;
	sub_823826F8(ctx, base);
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

__attribute__((alias("__imp__sub_823750B8"))) PPC_WEAK_FUNC(sub_823750B8);
PPC_FUNC_IMPL(__imp__sub_823750B8) {
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
	// lwz r3,-4860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4860);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82375110
	if (!ctx.cr6.eq) goto loc_82375110;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823570e0
	ctx.lr = 0x823750E0;
	sub_823570E0(ctx, base);
	// li r3,828
	ctx.r3.s64 = 828;
	// bl 0x823570f0
	ctx.lr = 0x823750E8;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823750fc
	if (ctx.cr0.eq) goto loc_823750FC;
	// bl 0x82374f68
	ctx.lr = 0x823750F4;
	sub_82374F68(ctx, base);
	// stw r3,-4860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4860, ctx.r3.u32);
	// b 0x82375104
	goto loc_82375104;
loc_823750FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4860, ctx.r11.u32);
loc_82375104:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237510C;
	sub_823570E0(ctx, base);
	// lwz r3,-4860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4860);
loc_82375110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82375124"))) PPC_WEAK_FUNC(sub_82375124);
PPC_FUNC_IMPL(__imp__sub_82375124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375128"))) PPC_WEAK_FUNC(sub_82375128);
PPC_FUNC_IMPL(__imp__sub_82375128) {
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
	// bl 0x823734c0
	ctx.lr = 0x82375144;
	sub_823734C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x8237514C;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82375230
	if (ctx.cr6.eq) goto loc_82375230;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82375244
	if (!ctx.cr6.eq) goto loc_82375244;
	// li r9,3
	ctx.r9.s64 = 3;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lhz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// addi r11,r11,18024
	ctx.r11.s64 = ctx.r11.s64 + 18024;
	// addi r10,r10,17984
	ctx.r10.s64 = ctx.r10.s64 + 17984;
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r7,740(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r6,60
	ctx.r6.s64 = 60;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwz r7,772(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// lfs f0,11492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11492);
	ctx.f0.f64 = double(temp.f32);
	// mulli r11,r7,34
	ctx.r11.s64 = ctx.r7.s64 * 34;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f13,-4108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4108);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// divwu r10,r11,r6
	ctx.r10.u32 = ctx.r11.u32 / ctx.r6.u32;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x823751f8
	if (!ctx.cr6.lt) goto loc_823751F8;
	// li r11,6
	ctx.r11.s64 = 6;
loc_823751F8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82375204
	if (!ctx.cr6.lt) goto loc_82375204;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82375204:
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// sth r11,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,780(r31)
	PPC_STORE_U16(ctx.r31.u32 + 780, ctx.r10.u16);
	// bne 0x82375220
	if (!ctx.cr0.eq) goto loc_82375220;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,780(r31)
	PPC_STORE_U16(ctx.r31.u32 + 780, ctx.r11.u16);
loc_82375220:
	// lhz r31,780(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 780);
	// bl 0x823763b0
	ctx.lr = 0x82375228;
	sub_823763B0(ctx, base);
	// sth r31,66(r3)
	PPC_STORE_U16(ctx.r3.u32 + 66, ctx.r31.u16);
	// b 0x82375244
	goto loc_82375244;
loc_82375230:
	// bl 0x823734c0
	ctx.lr = 0x82375234;
	sub_823734C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823743d8
	ctx.lr = 0x82375244;
	sub_823743D8(ctx, base);
loc_82375244:
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

__attribute__((alias("__imp__sub_8237525C"))) PPC_WEAK_FUNC(sub_8237525C);
PPC_FUNC_IMPL(__imp__sub_8237525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375260"))) PPC_WEAK_FUNC(sub_82375260);
PPC_FUNC_IMPL(__imp__sub_82375260) {
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
	// bl 0x823734c0
	ctx.lr = 0x8237527C;
	sub_823734C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82375284;
	sub_823763B0(ctx, base);
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x823752ac
	if (!ctx.cr6.eq) goto loc_823752AC;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// addi r3,r31,788
	ctx.r3.s64 = ctx.r31.s64 + 788;
	// lwz r10,744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x823826f8
	ctx.lr = 0x823752A8;
	sub_823826F8(ctx, base);
	// b 0x823752c8
	goto loc_823752C8;
loc_823752AC:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x823752c8
	if (!ctx.cr6.eq) goto loc_823752C8;
	// bl 0x823734c0
	ctx.lr = 0x823752B8;
	sub_823734C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823743d8
	ctx.lr = 0x823752C8;
	sub_823743D8(ctx, base);
loc_823752C8:
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

__attribute__((alias("__imp__sub_823752E0"))) PPC_WEAK_FUNC(sub_823752E0);
PPC_FUNC_IMPL(__imp__sub_823752E0) {
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
	// bl 0x823734c0
	ctx.lr = 0x823752FC;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82375304;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82375330
	if (!ctx.cr6.eq) goto loc_82375330;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82373758
	ctx.lr = 0x8237531C;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237532C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8237534c
	goto loc_8237534C;
loc_82375330:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8237534c
	if (!ctx.cr6.eq) goto loc_8237534C;
	// bl 0x823734c0
	ctx.lr = 0x8237533C;
	sub_823734C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823743d8
	ctx.lr = 0x8237534C;
	sub_823743D8(ctx, base);
loc_8237534C:
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

__attribute__((alias("__imp__sub_82375364"))) PPC_WEAK_FUNC(sub_82375364);
PPC_FUNC_IMPL(__imp__sub_82375364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375368"))) PPC_WEAK_FUNC(sub_82375368);
PPC_FUNC_IMPL(__imp__sub_82375368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82375370;
	sub_82248780(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x823734c0
	ctx.lr = 0x82375388;
	sub_823734C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82375390;
	sub_823763B0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x823753a8
	if (ctx.cr6.eq) goto loc_823753A8;
loc_823753A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237545c
	goto loc_8237545C;
loc_823753A8:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823753a0
	if (!ctx.cr6.eq) goto loc_823753A0;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823753a0
	if (!ctx.cr6.eq) goto loc_823753A0;
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r27,101
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 101, ctx.xer);
	// blt cr6,0x823753d8
	if (ctx.cr6.lt) goto loc_823753D8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x823753a0
	if (ctx.cr6.gt) goto loc_823753A0;
loc_823753D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// bl 0x82378270
	ctx.lr = 0x823753E4;
	sub_82378270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82375400
	if (ctx.cr0.eq) goto loc_82375400;
	// bl 0x823882e8
	ctx.lr = 0x823753F0;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82375400
	if (!ctx.cr0.eq) goto loc_82375400;
	// cmplwi cr6,r27,101
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 101, ctx.xer);
	// blt cr6,0x823753a0
	if (ctx.cr6.lt) goto loc_823753A0;
loc_82375400:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82377f20
	ctx.lr = 0x82375414;
	sub_82377F20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823753a0
	if (ctx.cr0.eq) goto loc_823753A0;
	// li r4,258
	ctx.r4.s64 = 258;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82375428;
	sub_823585A0(ctx, base);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// bl 0x82358508
	ctx.lr = 0x82375444;
	sub_82358508(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,788
	ctx.r3.s64 = ctx.r26.s64 + 788;
	// bl 0x82374ef0
	ctx.lr = 0x82375450;
	sub_82374EF0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_8237545C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82375464"))) PPC_WEAK_FUNC(sub_82375464);
PPC_FUNC_IMPL(__imp__sub_82375464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375468"))) PPC_WEAK_FUNC(sub_82375468);
PPC_FUNC_IMPL(__imp__sub_82375468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237547c
	if (!ctx.cr6.eq) goto loc_8237547C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237547C:
	// b 0x82374b40
	sub_82374B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82375480"))) PPC_WEAK_FUNC(sub_82375480);
PPC_FUNC_IMPL(__imp__sub_82375480) {
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
	// bl 0x82375048
	ctx.lr = 0x823754A0;
	sub_82375048(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823754b0
	if (ctx.cr0.eq) goto loc_823754B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x823754B0;
	sub_82357128(ctx, base);
loc_823754B0:
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

__attribute__((alias("__imp__sub_823754CC"))) PPC_WEAK_FUNC(sub_823754CC);
PPC_FUNC_IMPL(__imp__sub_823754CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823754D0"))) PPC_WEAK_FUNC(sub_823754D0);
PPC_FUNC_IMPL(__imp__sub_823754D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823754D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x823754E4;
	sub_823734C0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823755e4
	if (!ctx.cr6.eq) goto loc_823755E4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823755e4
	if (ctx.cr6.eq) goto loc_823755E4;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82375534
	if (ctx.cr6.eq) goto loc_82375534;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x823755c4
	if (!ctx.cr6.gt) goto loc_823755C4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x823755e4
	if (!ctx.cr6.gt) goto loc_823755E4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x823755c4
	if (!ctx.cr6.eq) goto loc_823755C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// b 0x823755e8
	goto loc_823755E8;
loc_82375534:
	// bl 0x823734c0
	ctx.lr = 0x82375538;
	sub_823734C0(ctx, base);
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82375580
	if (ctx.cr6.eq) goto loc_82375580;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82375560:
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823755d8
	if (ctx.cr6.eq) goto loc_823755D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82375560
	if (ctx.cr6.lt) goto loc_82375560;
loc_82375580:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82375584:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823755c4
	if (ctx.cr6.eq) goto loc_823755C4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82373758
	ctx.lr = 0x823755AC;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823755C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823755C4:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x823755e8
	goto loc_823755E8;
loc_823755D8:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82375584
	goto loc_82375584;
loc_823755E4:
	// li r3,2
	ctx.r3.s64 = 2;
loc_823755E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823755F0"))) PPC_WEAK_FUNC(sub_823755F0);
PPC_FUNC_IMPL(__imp__sub_823755F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823755F8;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82375604;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x8237560C;
	sub_823763B0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82375668
	if (ctx.cr6.eq) goto loc_82375668;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82375634:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82375644
	if (!ctx.cr6.gt) goto loc_82375644;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x8237564c
	goto loc_8237564C;
loc_82375644:
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_8237564C:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823758b0
	if (ctx.cr6.eq) goto loc_823758B0;
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82375634
	if (ctx.cr6.lt) goto loc_82375634;
loc_82375668:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82375700
	if (!ctx.cr6.eq) goto loc_82375700;
	// lwz r8,48(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823756ac
	if (ctx.cr6.eq) goto loc_823756AC;
	// lwz r9,44(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237568C:
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823756f4
	if (ctx.cr6.eq) goto loc_823756F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8237568c
	if (ctx.cr6.lt) goto loc_8237568C;
loc_823756AC:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_823756B0:
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x82224948
	ctx.lr = 0x823756C0;
	sub_82224948(ctx, base);
	// bl 0x82373758
	ctx.lr = 0x823756C4;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823756DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r11.u32);
	// bl 0x823743d8
	ctx.lr = 0x823756F0;
	sub_823743D8(ctx, base);
	// b 0x823758b0
	goto loc_823758B0;
loc_823756F4:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x823756b0
	goto loc_823756B0;
loc_82375700:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823758b0
	if (ctx.cr0.eq) goto loc_823758B0;
	// addi r26,r22,12
	ctx.r26.s64 = ctx.r22.s64 + 12;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8237571C:
	// lwz r8,48(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82375754
	if (ctx.cr6.eq) goto loc_82375754;
	// lwz r9,44(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82375734:
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823758b8
	if (ctx.cr6.eq) goto loc_823758B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82375734
	if (ctx.cr6.lt) goto loc_82375734;
loc_82375754:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82375758:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82378270
	ctx.lr = 0x82375764;
	sub_82378270(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82375894
	if (ctx.cr0.eq) goto loc_82375894;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823757a4
	if (!ctx.cr6.gt) goto loc_823757A4;
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82375784:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82375894
	if (ctx.cr6.eq) goto loc_82375894;
	// lwz r8,24(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82375784
	if (ctx.cr6.lt) goto loc_82375784;
loc_823757A4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823757b8
	if (ctx.cr6.eq) goto loc_823757B8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823757fc
	if (!ctx.cr6.eq) goto loc_823757FC;
loc_823757B8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823757c8
	if (ctx.cr6.eq) goto loc_823757C8;
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
loc_823757C8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x82224948
	ctx.lr = 0x823757D8;
	sub_82224948(ctx, base);
	// bl 0x82373758
	ctx.lr = 0x823757DC;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823757F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823743d8
	ctx.lr = 0x823757FC;
	sub_823743D8(ctx, base);
loc_823757FC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82375894
	if (!ctx.cr6.eq) goto loc_82375894;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// li r31,6
	ctx.r31.s64 = 6;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82375838
	if (ctx.cr6.eq) goto loc_82375838;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// li r31,5
	ctx.r31.s64 = 5;
	// bl 0x82224948
	ctx.lr = 0x82375830;
	sub_82224948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82375838:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375894
	if (!ctx.cr6.eq) goto loc_82375894;
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// bl 0x82373758
	ctx.lr = 0x8237584C;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823743d8
	ctx.lr = 0x8237586C;
	sub_823743D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823882e8
	ctx.lr = 0x82375874;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82375894
	if (!ctx.cr0.eq) goto loc_82375894;
	// bl 0x82373758
	ctx.lr = 0x82375880;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82375894:
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237571c
	if (ctx.cr6.lt) goto loc_8237571C;
loc_823758B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823758B8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82375758
	goto loc_82375758;
}

__attribute__((alias("__imp__sub_823758C4"))) PPC_WEAK_FUNC(sub_823758C4);
PPC_FUNC_IMPL(__imp__sub_823758C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823758C8"))) PPC_WEAK_FUNC(sub_823758C8);
PPC_FUNC_IMPL(__imp__sub_823758C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823758D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823734c0
	ctx.lr = 0x823758EC;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x823758F4;
	sub_823763B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82375908
	if (ctx.cr6.eq) goto loc_82375908;
loc_82375900:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82375978
	goto loc_82375978;
loc_82375908:
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82375900
	if (!ctx.cr6.eq) goto loc_82375900;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8237594c
	if (ctx.cr6.eq) goto loc_8237594C;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82375930:
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82375980
	if (ctx.cr6.eq) goto loc_82375980;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82375930
	if (ctx.cr6.lt) goto loc_82375930;
loc_8237594C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82375950:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// beq cr6,0x82375900
	if (ctx.cr6.eq) goto loc_82375900;
	// lwz r11,776(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375900
	if (!ctx.cr6.eq) goto loc_82375900;
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82376978
	ctx.lr = 0x82375978;
	sub_82376978(ctx, base);
loc_82375978:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82375980:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82375950
	goto loc_82375950;
}

__attribute__((alias("__imp__sub_82375990"))) PPC_WEAK_FUNC(sub_82375990);
PPC_FUNC_IMPL(__imp__sub_82375990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82375998;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823734c0
	ctx.lr = 0x823759A8;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x823759B0;
	sub_823763B0(ctx, base);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x823759f0
	if (ctx.cr6.eq) goto loc_823759F0;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823759D4:
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82375a04
	if (ctx.cr6.eq) goto loc_82375A04;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823759d4
	if (ctx.cr6.lt) goto loc_823759D4;
loc_823759F0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823759F4:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82375a14
	if (ctx.cr6.lt) goto loc_82375A14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82375a28
	goto loc_82375A28;
loc_82375A04:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823759f4
	goto loc_823759F4;
loc_82375A14:
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82375A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82375A30"))) PPC_WEAK_FUNC(sub_82375A30);
PPC_FUNC_IMPL(__imp__sub_82375A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82375A38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823734c0
	ctx.lr = 0x82375A48;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82375A50;
	sub_823763B0(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82375a68
	if (ctx.cr6.eq) goto loc_82375A68;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82375ab4
	if (!ctx.cr6.eq) goto loc_82375AB4;
loc_82375A68:
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82375a9c
	if (ctx.cr6.eq) goto loc_82375A9C;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82375A80:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82375ac0
	if (ctx.cr6.eq) goto loc_82375AC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82375a80
	if (ctx.cr6.lt) goto loc_82375A80;
loc_82375A9C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82375AA0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82378270
	ctx.lr = 0x82375AA8;
	sub_82378270(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823881e0
	ctx.lr = 0x82375AB0;
	sub_823881E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82375AB4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82375AC0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82375aa0
	goto loc_82375AA0;
}

__attribute__((alias("__imp__sub_82375AD0"))) PPC_WEAK_FUNC(sub_82375AD0);
PPC_FUNC_IMPL(__imp__sub_82375AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82375AD8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x823763b0
	ctx.lr = 0x82375AE4;
	sub_823763B0(ctx, base);
	// lwz r31,140(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r29,136(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x823734c0
	ctx.lr = 0x82375AF0;
	sub_823734C0(ctx, base);
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bne cr6,0x82375ba0
	if (!ctx.cr6.eq) goto loc_82375BA0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82375ba0
	if (!ctx.cr6.eq) goto loc_82375BA0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82375ba0
	if (ctx.cr0.eq) goto loc_82375BA0;
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
loc_82375B20:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375b90
	if (!ctx.cr6.eq) goto loc_82375B90;
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82375b60
	if (ctx.cr6.eq) goto loc_82375B60;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
loc_82375B40:
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82375ba8
	if (ctx.cr6.eq) goto loc_82375BA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82375b40
	if (ctx.cr6.lt) goto loc_82375B40;
loc_82375B60:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82375B64:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r4,253
	ctx.r4.s64 = 253;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823758c8
	ctx.lr = 0x82375B7C;
	sub_823758C8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82375b90
	if (!ctx.cr6.eq) goto loc_82375B90;
	// lwz r11,808(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,808(r27)
	PPC_STORE_U32(ctx.r27.u32 + 808, ctx.r11.u32);
loc_82375B90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82375b20
	if (ctx.cr6.lt) goto loc_82375B20;
loc_82375BA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82375BA8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82375b64
	goto loc_82375B64;
}

__attribute__((alias("__imp__sub_82375BB4"))) PPC_WEAK_FUNC(sub_82375BB4);
PPC_FUNC_IMPL(__imp__sub_82375BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82375BB8"))) PPC_WEAK_FUNC(sub_82375BB8);
PPC_FUNC_IMPL(__imp__sub_82375BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x82375BC0;
	sub_82248758(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823734c0
	ctx.lr = 0x82375BCC;
	sub_823734C0(ctx, base);
	// addi r20,r3,4
	ctx.r20.s64 = ctx.r3.s64 + 4;
	// bl 0x823734c0
	ctx.lr = 0x82375BD4;
	sub_823734C0(ctx, base);
	// lwz r31,8(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
	// bl 0x823763b0
	ctx.lr = 0x82375BE0;
	sub_823763B0(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,16(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// clrlwi r24,r9,24
	ctx.r24.u64 = ctx.r9.u32 & 0xFF;
	// add r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x82375c6c
	if (ctx.cr6.gt) goto loc_82375C6C;
	// beq cr6,0x82375c60
	if (ctx.cr6.eq) goto loc_82375C60;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82375c54
	if (ctx.cr6.eq) goto loc_82375C54;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82375c48
	if (ctx.cr6.eq) goto loc_82375C48;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// beq cr6,0x82375c3c
	if (ctx.cr6.eq) goto loc_82375C3C;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x82375ca4
	if (!ctx.cr6.eq) goto loc_82375CA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82375260
	ctx.lr = 0x82375C38;
	sub_82375260(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C3C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374c38
	ctx.lr = 0x82375C44;
	sub_82374C38(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C48:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82375128
	ctx.lr = 0x82375C50;
	sub_82375128(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374d08
	ctx.lr = 0x82375C5C;
	sub_82374D08(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374ca0
	ctx.lr = 0x82375C68;
	sub_82374CA0(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C6C:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// beq cr6,0x82375c9c
	if (ctx.cr6.eq) goto loc_82375C9C;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// beq cr6,0x82375c90
	if (ctx.cr6.eq) goto loc_82375C90;
	// cmpwi cr6,r31,14
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 14, ctx.xer);
	// bne cr6,0x82375ca4
	if (!ctx.cr6.eq) goto loc_82375CA4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823746f0
	ctx.lr = 0x82375C8C;
	sub_823746F0(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C90:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374690
	ctx.lr = 0x82375C98;
	sub_82374690(ctx, base);
	// b 0x82375ca4
	goto loc_82375CA4;
loc_82375C9C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823752e0
	ctx.lr = 0x82375CA4;
	sub_823752E0(ctx, base);
loc_82375CA4:
	// lwz r22,8(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// li r21,1
	ctx.r21.s64 = 1;
	// li r19,-1
	ctx.r19.s64 = -1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82375f9c
	if (ctx.cr6.eq) goto loc_82375F9C;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// beq cr6,0x82375f9c
	if (ctx.cr6.eq) goto loc_82375F9C;
	// cmpwi cr6,r22,15
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 15, ctx.xer);
	// beq cr6,0x82375f9c
	if (ctx.cr6.eq) goto loc_82375F9C;
	// lwz r11,768(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375ce0
	if (ctx.cr6.eq) goto loc_82375CE0;
	// lwz r11,588(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375d18
	if (!ctx.cr6.eq) goto loc_82375D18;
loc_82375CE0:
	// lwz r11,784(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375cf4
	if (!ctx.cr6.eq) goto loc_82375CF4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82374b40
	ctx.lr = 0x82375CF4;
	sub_82374B40(ctx, base);
loc_82375CF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8237bc80
	ctx.lr = 0x82375D00;
	sub_8237BC80(ctx, base);
	// lwz r11,784(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 784);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375d18
	if (ctx.cr6.eq) goto loc_82375D18;
	// bl 0x82373dd0
	ctx.lr = 0x82375D14;
	sub_82373DD0(ctx, base);
	// bl 0x82374078
	ctx.lr = 0x82375D18;
	sub_82374078(ctx, base);
loc_82375D18:
	// bl 0x823763b0
	ctx.lr = 0x82375D1C;
	sub_823763B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,768(r26)
	PPC_STORE_U32(ctx.r26.u32 + 768, ctx.r23.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r23,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r23.u32);
	// bl 0x82375ad0
	ctx.lr = 0x82375D30;
	sub_82375AD0(ctx, base);
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 7, ctx.xer);
	// bne cr6,0x82375f9c
	if (!ctx.cr6.eq) goto loc_82375F9C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82375f9c
	if (ctx.cr6.eq) goto loc_82375F9C;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82375D48:
	// mulli r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 * 24;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375f88
	if (!ctx.cr6.eq) goto loc_82375F88;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82378270
	ctx.lr = 0x82375D64;
	sub_82378270(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82375d70
	if (!ctx.cr0.eq) goto loc_82375D70;
	// stw r21,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r21.u32);
loc_82375D70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388298
	ctx.lr = 0x82375D78;
	sub_82388298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82375dd4
	if (ctx.cr0.eq) goto loc_82375DD4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882e8
	ctx.lr = 0x82375D88;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82375da4
	if (ctx.cr0.eq) goto loc_82375DA4;
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// lhz r10,48(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 48);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82375db4
	if (ctx.cr6.eq) goto loc_82375DB4;
loc_82375DA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882e8
	ctx.lr = 0x82375DAC;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82375db8
	if (!ctx.cr0.eq) goto loc_82375DB8;
loc_82375DB4:
	// stw r21,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r21.u32);
loc_82375DB8:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82375dd4
	if (ctx.cr6.eq) goto loc_82375DD4;
	// lwz r11,40(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82375dd4
	if (!ctx.cr6.eq) goto loc_82375DD4;
	// stw r21,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r21.u32);
loc_82375DD4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82388288
	ctx.lr = 0x82375DDC;
	sub_82388288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82375df0
	if (ctx.cr0.eq) goto loc_82375DF0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82375DF0:
	// lwz r8,48(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82375e28
	if (ctx.cr6.eq) goto loc_82375E28;
	// lwz r9,44(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82375E08:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82375e4c
	if (ctx.cr6.eq) goto loc_82375E4C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82375e08
	if (ctx.cr6.lt) goto loc_82375E08;
loc_82375E28:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82375E2C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375e58
	if (!ctx.cr6.eq) goto loc_82375E58;
	// stw r21,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r21.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882e8
	ctx.lr = 0x82375E44;
	sub_823882E8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// b 0x82375ef8
	goto loc_82375EF8;
loc_82375E4C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82375e2c
	goto loc_82375E2C;
loc_82375E58:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375e90
	if (!ctx.cr6.eq) goto loc_82375E90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882e8
	ctx.lr = 0x82375E6C;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82375e90
	if (ctx.cr0.eq) goto loc_82375E90;
	// stw r21,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r21.u32);
	// bl 0x82373758
	ctx.lr = 0x82375E7C;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82375E90:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375ef8
	if (ctx.cr6.eq) goto loc_82375EF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823882e8
	ctx.lr = 0x82375EA4;
	sub_823882E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82375ef8
	if (!ctx.cr0.eq) goto loc_82375EF8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82375ebc
	if (!ctx.cr6.eq) goto loc_82375EBC;
	// stw r21,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r21.u32);
loc_82375EBC:
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82375ed8
	if (ctx.cr6.eq) goto loc_82375ED8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82375fc4
	if (!ctx.cr6.eq) goto loc_82375FC4;
loc_82375ED8:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82375EDC:
	// bl 0x82373758
	ctx.lr = 0x82375EE0;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82375EEC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82375EF8:
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823881e0
	ctx.lr = 0x82375F04;
	sub_823881E0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82375f48
	if (!ctx.cr6.eq) goto loc_82375F48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82375f48
	if (ctx.cr6.eq) goto loc_82375F48;
	// stw r21,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r21.u32);
	// lwz r11,732(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 732);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,732(r26)
	PPC_STORE_U32(ctx.r26.u32 + 732, ctx.r11.u32);
	// bl 0x82373758
	ctx.lr = 0x82375F34;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,732(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 732);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82375F48:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375f88
	if (ctx.cr6.eq) goto loc_82375F88;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82375f88
	if (!ctx.cr6.eq) goto loc_82375F88;
	// stw r23,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r23.u32);
	// lwz r11,732(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 732);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,732(r26)
	PPC_STORE_U32(ctx.r26.u32 + 732, ctx.r11.u32);
	// bl 0x82373758
	ctx.lr = 0x82375F74;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,732(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 732);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82375F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82375F88:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82375d48
	if (ctx.cr6.lt) goto loc_82375D48;
loc_82375F9C:
	// lwz r11,776(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375fe8
	if (ctx.cr6.eq) goto loc_82375FE8;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// bne cr6,0x82375fe8
	if (!ctx.cr6.eq) goto loc_82375FE8;
	// lhz r11,48(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 48);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bge cr6,0x82375fe0
	if (!ctx.cr6.lt) goto loc_82375FE0;
	// stw r21,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r21.u32);
	// b 0x82375fe8
	goto loc_82375FE8;
loc_82375FC4:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82375edc
	if (ctx.cr6.eq) goto loc_82375EDC;
	// bl 0x82373758
	ctx.lr = 0x82375FD0;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82375eec
	goto loc_82375EEC;
loc_82375FE0:
	// stw r23,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r23.u32);
	// stw r23,776(r26)
	PPC_STORE_U32(ctx.r26.u32 + 776, ctx.r23.u32);
loc_82375FE8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x82376010
	if (ctx.cr6.lt) goto loc_82376010;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// ble cr6,0x82376018
	if (!ctx.cr6.gt) goto loc_82376018;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// beq cr6,0x82376018
	if (ctx.cr6.eq) goto loc_82376018;
	// cmpwi cr6,r22,12
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 12, ctx.xer);
	// ble cr6,0x82376010
	if (!ctx.cr6.gt) goto loc_82376010;
	// cmpwi cr6,r22,16
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 16, ctx.xer);
	// ble cr6,0x82376018
	if (!ctx.cr6.gt) goto loc_82376018;
loc_82376010:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823755f0
	ctx.lr = 0x82376018;
	sub_823755F0(ctx, base);
loc_82376018:
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x823761fc
	if (!ctx.cr6.eq) goto loc_823761FC;
	// lwz r8,48(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r7,16(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237605c
	if (ctx.cr6.eq) goto loc_8237605C;
	// lwz r9,44(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8237603C:
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82376094
	if (ctx.cr6.eq) goto loc_82376094;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8237603c
	if (ctx.cr6.lt) goto loc_8237603C;
loc_8237605C:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82376060:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82376108
	if (ctx.cr6.eq) goto loc_82376108;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// beq cr6,0x823760fc
	if (ctx.cr6.eq) goto loc_823760FC;
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 7, ctx.xer);
	// beq cr6,0x823760ac
	if (ctx.cr6.eq) goto loc_823760AC;
	// cmpwi cr6,r22,10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 10, ctx.xer);
	// beq cr6,0x823760a0
	if (ctx.cr6.eq) goto loc_823760A0;
	// cmpwi cr6,r22,14
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 14, ctx.xer);
	// bne cr6,0x82376124
	if (!ctx.cr6.eq) goto loc_82376124;
	// bl 0x823734c0
	ctx.lr = 0x8237608C;
	sub_823734C0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82376110
	goto loc_82376110;
loc_82376094:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82376060
	goto loc_82376060;
loc_823760A0:
	// bl 0x823734c0
	ctx.lr = 0x823760A4;
	sub_823734C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82376110
	goto loc_82376110;
loc_823760AC:
	// lwz r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823760bc
	if (!ctx.cr6.eq) goto loc_823760BC;
	// stw r21,36(r20)
	PPC_STORE_U32(ctx.r20.u32 + 36, ctx.r21.u32);
loc_823760BC:
	// lwz r11,152(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 152);
	// cmpwi cr6,r11,-30010
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -30010, ctx.xer);
	// beq cr6,0x823760d0
	if (ctx.cr6.eq) goto loc_823760D0;
	// cmpwi cr6,r11,-30005
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -30005, ctx.xer);
	// bne cr6,0x82376124
	if (!ctx.cr6.eq) goto loc_82376124;
loc_823760D0:
	// bl 0x82373758
	ctx.lr = 0x823760D4;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823760EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x823734c0
	ctx.lr = 0x823760F0;
	sub_823734C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8237611c
	goto loc_8237611C;
loc_823760FC:
	// bl 0x823734c0
	ctx.lr = 0x82376100;
	sub_823734C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82376110
	goto loc_82376110;
loc_82376108:
	// bl 0x823734c0
	ctx.lr = 0x8237610C;
	sub_823734C0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
loc_82376110:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823743d8
	ctx.lr = 0x8237611C;
	sub_823743D8(ctx, base);
loc_8237611C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823743d8
	ctx.lr = 0x82376124;
	sub_823743D8(ctx, base);
loc_82376124:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// lwz r11,152(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 152);
	// cmpwi cr6,r11,-10003
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10003, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82376178
	if (ctx.cr6.eq) goto loc_82376178;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82376148:
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82376168
	if (!ctx.cr6.eq) goto loc_82376168;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823761a8
	if (!ctx.cr6.eq) goto loc_823761A8;
loc_82376168:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82376148
	if (ctx.cr6.lt) goto loc_82376148;
loc_82376178:
	// lwz r11,824(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823761a8
	if (!ctx.cr6.eq) goto loc_823761A8;
	// bl 0x82373758
	ctx.lr = 0x82376188;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823761A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r21,824(r26)
	PPC_STORE_U32(ctx.r26.u32 + 824, ctx.r21.u32);
	// b 0x823762a4
	goto loc_823762A4;
loc_823761A8:
	// addi r31,r26,812
	ctx.r31.s64 = ctx.r26.s64 + 812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x823761B4;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x823761d0
	if (!ctx.cr0.eq) goto loc_823761D0;
	// bl 0x823a86f8
	ctx.lr = 0x823761C4;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x823761CC;
	sub_8237D130(ctx, base);
	// b 0x823762a4
	goto loc_823762A4;
loc_823761D0:
	// bl 0x8237d218
	ctx.lr = 0x823761D4;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823762a4
	if (!ctx.cr6.gt) goto loc_823762A4;
	// stw r21,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r21.u32);
	// bl 0x823763b0
	ctx.lr = 0x823761EC;
	sub_823763B0(ctx, base);
	// bl 0x8237a7b8
	ctx.lr = 0x823761F0;
	sub_8237A7B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823761F8;
	sub_823A86F8(ctx, base);
	// b 0x823762a4
	goto loc_823762A4;
loc_823761FC:
	// addi r31,r26,812
	ctx.r31.s64 = ctx.r26.s64 + 812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x82376208;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82376218
	if (ctx.cr0.eq) goto loc_82376218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82376218;
	sub_823A86F8(ctx, base);
loc_82376218:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82376244
	if (ctx.cr6.eq) goto loc_82376244;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// bne cr6,0x82376244
	if (!ctx.cr6.eq) goto loc_82376244;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82376240
	if (ctx.cr6.eq) goto loc_82376240;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82376244
	if (!ctx.cr6.eq) goto loc_82376244;
loc_82376240:
	// stw r23,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r23.u32);
loc_82376244:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// bne cr6,0x82376270
	if (!ctx.cr6.eq) goto loc_82376270;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// lwz r11,744(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 744);
	// stw r11,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82376270:
	// cmpwi cr6,r22,7
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 7, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// cmpwi cr6,r18,8
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 8, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823762a4
	if (!ctx.cr6.eq) goto loc_823762A4;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// bl 0x82373758
	ctx.lr = 0x82376294;
	sub_82373758(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823762A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823762A4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_823762AC"))) PPC_WEAK_FUNC(sub_823762AC);
PPC_FUNC_IMPL(__imp__sub_823762AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823762B0"))) PPC_WEAK_FUNC(sub_823762B0);
PPC_FUNC_IMPL(__imp__sub_823762B0) {
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
	// bl 0x823887b0
	ctx.lr = 0x823762C8;
	sub_823887B0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82388510
	ctx.lr = 0x823762D0;
	sub_82388510(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82388868
	ctx.lr = 0x823762D8;
	sub_82388868(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82388510
	ctx.lr = 0x823762E0;
	sub_82388510(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82388680
	ctx.lr = 0x823762E8;
	sub_82388680(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82388680
	ctx.lr = 0x823762F0;
	sub_82388680(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82388730
	ctx.lr = 0x823762F8;
	sub_82388730(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82388730
	ctx.lr = 0x82376300;
	sub_82388730(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x82388978
	ctx.lr = 0x82376308;
	sub_82388978(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82388978
	ctx.lr = 0x82376310;
	sub_82388978(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82388978
	ctx.lr = 0x82376318;
	sub_82388978(ctx, base);
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

__attribute__((alias("__imp__sub_82376330"))) PPC_WEAK_FUNC(sub_82376330);
PPC_FUNC_IMPL(__imp__sub_82376330) {
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
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// bl 0x823887d8
	ctx.lr = 0x8237634C;
	sub_823887D8(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823887d8
	ctx.lr = 0x82376354;
	sub_823887D8(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x823887d8
	ctx.lr = 0x8237635C;
	sub_823887D8(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x823887d8
	ctx.lr = 0x82376364;
	sub_823887D8(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x823887d8
	ctx.lr = 0x8237636C;
	sub_823887D8(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823887d8
	ctx.lr = 0x82376374;
	sub_823887D8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x823887d8
	ctx.lr = 0x8237637C;
	sub_823887D8(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823887d8
	ctx.lr = 0x82376384;
	sub_823887D8(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x823887d8
	ctx.lr = 0x8237638C;
	sub_823887D8(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823887d8
	ctx.lr = 0x82376394;
	sub_823887D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823887d8
	ctx.lr = 0x8237639C;
	sub_823887D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823763B0"))) PPC_WEAK_FUNC(sub_823763B0);
PPC_FUNC_IMPL(__imp__sub_823763B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,-4856(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823763BC"))) PPC_WEAK_FUNC(sub_823763BC);
PPC_FUNC_IMPL(__imp__sub_823763BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823763C0"))) PPC_WEAK_FUNC(sub_823763C0);
PPC_FUNC_IMPL(__imp__sub_823763C0) {
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
	// li r11,15000
	ctx.r11.s64 = 15000;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// sth r30,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r30.u16);
	// sth r30,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r30.u16);
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// sth r30,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r30.u16);
	// sth r30,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r30.u16);
	// sth r30,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r30.u16);
	// sth r30,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r30.u16);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
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
	// bl 0x823a86f8
	ctx.lr = 0x82376440;
	sub_823A86F8(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// sth r30,208(r31)
	PPC_STORE_U16(ctx.r31.u32 + 208, ctx.r30.u16);
	// sth r30,210(r31)
	PPC_STORE_U16(ctx.r31.u32 + 210, ctx.r30.u16);
	// bl 0x823a86f8
	ctx.lr = 0x82376470;
	sub_823A86F8(ctx, base);
	// sth r30,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r30.u16);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376488;
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
	ctx.lr = 0x8237649C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823764B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x823585a0
	ctx.lr = 0x823764C0;
	sub_823585A0(ctx, base);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823764DC"))) PPC_WEAK_FUNC(sub_823764DC);
PPC_FUNC_IMPL(__imp__sub_823764DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823764E0"))) PPC_WEAK_FUNC(sub_823764E0);
PPC_FUNC_IMPL(__imp__sub_823764E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,50(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 50);
	// lhz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// rotlwi r11,r11,15
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 15);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823764F4"))) PPC_WEAK_FUNC(sub_823764F4);
PPC_FUNC_IMPL(__imp__sub_823764F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823764F8"))) PPC_WEAK_FUNC(sub_823764F8);
PPC_FUNC_IMPL(__imp__sub_823764F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82376500;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// bne 0x8237651c
	if (!ctx.cr0.eq) goto loc_8237651C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8237651C:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8237652c
	if (!ctx.cr6.lt) goto loc_8237652C;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
loc_8237652C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82376548
	if (!ctx.cr0.eq) goto loc_82376548;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82376548:
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// subf r30,r5,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r5.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r30,r30,-2048
	ctx.r30.s64 = ctx.r30.s64 + -2048;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x823765a8
	if (!ctx.cr0.eq) goto loc_823765A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823765A8:
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823765C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r30,r30,-2048
	ctx.r30.s64 = ctx.r30.s64 + -2048;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823765E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// addi r30,r30,-6144
	ctx.r30.s64 = ctx.r30.s64 + -6144;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,5260
	ctx.r11.s64 = ctx.r11.s64 * 5260;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82376620
	if (!ctx.cr0.eq) goto loc_82376620;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82376620:
	// lwz r9,464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r30,r30,-1280
	ctx.r30.s64 = ctx.r30.s64 + -1280;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// li r5,1280
	ctx.r5.s64 = 1280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r30,r30,-1280
	ctx.r30.s64 = ctx.r30.s64 + -1280;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// li r5,1280
	ctx.r5.s64 = 1280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r30,r30,-1280
	ctx.r30.s64 = ctx.r30.s64 + -1280;
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// li r5,1280
	ctx.r5.s64 = 1280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823766A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r10,5260
	ctx.r5.s64 = ctx.r10.s64 * 5260;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823766c0
	if (ctx.cr6.lt) goto loc_823766C0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823766C0:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823766D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823766E4"))) PPC_WEAK_FUNC(sub_823766E4);
PPC_FUNC_IMPL(__imp__sub_823766E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823766E8"))) PPC_WEAK_FUNC(sub_823766E8);
PPC_FUNC_IMPL(__imp__sub_823766E8) {
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
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r31,r3,400
	ctx.r31.s64 = ctx.r3.s64 + 400;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82376754
	if (ctx.cr6.lt) goto loc_82376754;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237674C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82376758
	goto loc_82376758;
loc_82376754:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82376758:
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

__attribute__((alias("__imp__sub_82376770"))) PPC_WEAK_FUNC(sub_82376770);
PPC_FUNC_IMPL(__imp__sub_82376770) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823767a4
	if (ctx.cr6.eq) goto loc_823767A4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823767a4
	if (ctx.cr6.eq) goto loc_823767A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8237688c
	goto loc_8237688C;
loc_823767A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// bne cr6,0x823767c4
	if (!ctx.cr6.eq) goto loc_823767C4;
	// li r11,15000
	ctx.r11.s64 = 15000;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_823767C4:
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823767D4;
	sub_823A86F8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// sth r30,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r30.u16);
	// sth r30,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r30.u16);
	// sth r30,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r30.u16);
	// bl 0x823a86f8
	ctx.lr = 0x823767EC;
	sub_823A86F8(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82376804
	if (!ctx.cr6.eq) goto loc_82376804;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8237681c
	if (ctx.cr6.eq) goto loc_8237681C;
loc_82376804:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_8237681C:
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x823a86f8
	ctx.lr = 0x82376824;
	sub_823A86F8(ctx, base);
	// sth r30,592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 592, ctx.r30.u16);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237683C;
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
	ctx.lr = 0x82376850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82376864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x823585a0
	ctx.lr = 0x82376874;
	sub_823585A0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x823585a0
	ctx.lr = 0x82376880;
	sub_823585A0(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r11.u8);
loc_8237688C:
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

__attribute__((alias("__imp__sub_823768A4"))) PPC_WEAK_FUNC(sub_823768A4);
PPC_FUNC_IMPL(__imp__sub_823768A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823768A8"))) PPC_WEAK_FUNC(sub_823768A8);
PPC_FUNC_IMPL(__imp__sub_823768A8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r5,592(r3)
	PPC_STORE_U16(ctx.r3.u32 + 592, ctx.r5.u16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823768cc
	if (!ctx.cr6.eq) goto loc_823768CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82376904
	goto loc_82376904;
loc_823768CC:
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82376900
	if (!ctx.cr6.eq) goto loc_82376900;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82376900
	if (!ctx.cr6.eq) goto loc_82376900;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// lhz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// lbz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 92);
	// bl 0x823889c0
	ctx.lr = 0x823768F4;
	sub_823889C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82376904
	if (!ctx.cr0.eq) goto loc_82376904;
loc_82376900:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82376904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376914"))) PPC_WEAK_FUNC(sub_82376914);
PPC_FUNC_IMPL(__imp__sub_82376914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376918"))) PPC_WEAK_FUNC(sub_82376918);
PPC_FUNC_IMPL(__imp__sub_82376918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82376920;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,512(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82376960
	if (ctx.cr6.eq) goto loc_82376960;
	// addi r30,r3,496
	ctx.r30.s64 = ctx.r3.s64 + 496;
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
loc_8237693C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388a48
	ctx.lr = 0x82376948;
	sub_82388A48(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8237696c
	if (ctx.cr6.eq) goto loc_8237696C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8237693c
	if (ctx.cr6.lt) goto loc_8237693C;
loc_82376960:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82376964:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8237696C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82376964
	goto loc_82376964;
}

__attribute__((alias("__imp__sub_82376974"))) PPC_WEAK_FUNC(sub_82376974);
PPC_FUNC_IMPL(__imp__sub_82376974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376978"))) PPC_WEAK_FUNC(sub_82376978);
PPC_FUNC_IMPL(__imp__sub_82376978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82376980;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,448
	ctx.r29.s64 = ctx.r3.s64 + 448;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82388a90
	ctx.lr = 0x82376998;
	sub_82388A90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823769fc
	if (ctx.cr0.eq) goto loc_823769FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823769fc
	if (ctx.cr6.eq) goto loc_823769FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823769fc
	if (ctx.cr6.eq) goto loc_823769FC;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823769d0
	if (!ctx.cr6.gt) goto loc_823769D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
loc_823769D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388928
	ctx.lr = 0x823769DC;
	sub_82388928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82358508
	ctx.lr = 0x823769EC;
	sub_82358508(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82376a00
	goto loc_82376A00;
loc_823769FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82376A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82376A08"))) PPC_WEAK_FUNC(sub_82376A08);
PPC_FUNC_IMPL(__imp__sub_82376A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82376a48
	if (ctx.cr6.gt) {
		sub_82376A48(ctx, base);
		return;
	}
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32184
	ctx.r12.s64 = ctx.r12.s64 + 32184;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// nop 
	// addi r12,r12,27200
	ctx.r12.s64 = ctx.r12.s64 + 27200;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82376A40"))) PPC_WEAK_FUNC(sub_82376A40);
PPC_FUNC_IMPL(__imp__sub_82376A40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376A48"))) PPC_WEAK_FUNC(sub_82376A48);
PPC_FUNC_IMPL(__imp__sub_82376A48) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376A50"))) PPC_WEAK_FUNC(sub_82376A50);
PPC_FUNC_IMPL(__imp__sub_82376A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82376a98
	if (ctx.cr6.eq) goto loc_82376A98;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82376aa4
	if (!ctx.cr6.eq) goto loc_82376AA4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82376a78
	if (!ctx.cr6.eq) goto loc_82376A78;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82376aa4
	if (ctx.cr6.eq) goto loc_82376AA4;
loc_82376A78:
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// stw r8,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r8.u32);
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// b 0x82376aa4
	goto loc_82376AA4;
loc_82376A98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
loc_82376AA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376AAC"))) PPC_WEAK_FUNC(sub_82376AAC);
PPC_FUNC_IMPL(__imp__sub_82376AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376AB0"))) PPC_WEAK_FUNC(sub_82376AB0);
PPC_FUNC_IMPL(__imp__sub_82376AB0) {
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
	// addi r30,r3,156
	ctx.r30.s64 = ctx.r3.s64 + 156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82376AD4;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82376ba8
	if (ctx.cr0.eq) goto loc_82376BA8;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82376b10
	if (!ctx.cr6.eq) goto loc_82376B10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x82376AF0;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
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
	// b 0x82376b5c
	goto loc_82376B5C;
loc_82376B10:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82376b38
	if (!ctx.cr6.eq) goto loc_82376B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82376B24;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82376b38
	if (ctx.cr0.eq) goto loc_82376B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x82376B34;
	sub_8237D170(ctx, base);
	// b 0x82376ba8
	goto loc_82376BA8;
loc_82376B38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x82376B40;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
loc_82376B5C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82376ba8
	if (ctx.cr6.lt) goto loc_82376BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x82376B6C;
	sub_8237D170(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82376b84
	if (!ctx.cr6.eq) goto loc_82376B84;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82376ba0
	if (ctx.cr6.eq) goto loc_82376BA0;
loc_82376B84:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82376BA0:
	// li r11,-10003
	ctx.r11.s64 = -10003;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82376BA8:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82376BC4"))) PPC_WEAK_FUNC(sub_82376BC4);
PPC_FUNC_IMPL(__imp__sub_82376BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376BC8"))) PPC_WEAK_FUNC(sub_82376BC8);
PPC_FUNC_IMPL(__imp__sub_82376BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82376BD0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823894c8
	ctx.lr = 0x82376BEC;
	sub_823894C8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823894f0
	ctx.lr = 0x82376BFC;
	sub_823894F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// bl 0x823893e0
	ctx.lr = 0x82376C08;
	sub_823893E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,480
	ctx.r3.s64 = ctx.r30.s64 + 480;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,6
	ctx.r6.s64 = ctx.r31.s64 + 6;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82388cd8
	ctx.lr = 0x82376C20;
	sub_82388CD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82376C2C;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82376C38"))) PPC_WEAK_FUNC(sub_82376C38);
PPC_FUNC_IMPL(__imp__sub_82376C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82376C40;
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
	// bl 0x823897c0
	ctx.lr = 0x82376C5C;
	sub_823897C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389720
	ctx.lr = 0x82376C6C;
	sub_82389720(ctx, base);
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376ca4
	if (ctx.cr0.eq) goto loc_82376CA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823893e0
	ctx.lr = 0x82376C8C;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,47
	ctx.r11.s64 = ctx.r11.s64 + 47;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sthx r10,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
loc_82376CA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82376CB0;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82376CBC"))) PPC_WEAK_FUNC(sub_82376CBC);
PPC_FUNC_IMPL(__imp__sub_82376CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376CC0"))) PPC_WEAK_FUNC(sub_82376CC0);
PPC_FUNC_IMPL(__imp__sub_82376CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82376CC8;
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
	// bl 0x82389730
	ctx.lr = 0x82376CE4;
	sub_82389730(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823897b0
	ctx.lr = 0x82376CF4;
	sub_823897B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823893e0
	ctx.lr = 0x82376CFC;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82376d10
	if (!ctx.cr6.eq) goto loc_82376D10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82376d20
	goto loc_82376D20;
loc_82376D10:
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,70(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_82376D20:
	// sth r11,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82376D30;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82376D3C"))) PPC_WEAK_FUNC(sub_82376D3C);
PPC_FUNC_IMPL(__imp__sub_82376D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376D40"))) PPC_WEAK_FUNC(sub_82376D40);
PPC_FUNC_IMPL(__imp__sub_82376D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82376D48;
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
	// bl 0x82389758
	ctx.lr = 0x82376D64;
	sub_82389758(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389720
	ctx.lr = 0x82376D74;
	sub_82389720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823893e0
	ctx.lr = 0x82376D7C;
	sub_823893E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82376d90
	if (!ctx.cr6.eq) goto loc_82376D90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82376da0
	goto loc_82376DA0;
loc_82376D90:
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,74(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_82376DA0:
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82376DB0;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82376DBC"))) PPC_WEAK_FUNC(sub_82376DBC);
PPC_FUNC_IMPL(__imp__sub_82376DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376DC0"))) PPC_WEAK_FUNC(sub_82376DC0);
PPC_FUNC_IMPL(__imp__sub_82376DC0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82389788
	ctx.lr = 0x82376DE4;
	sub_82389788(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823897b0
	ctx.lr = 0x82376DF4;
	sub_823897B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r31,85(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82389828
	ctx.lr = 0x82376E00;
	sub_82389828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82376E1C"))) PPC_WEAK_FUNC(sub_82376E1C);
PPC_FUNC_IMPL(__imp__sub_82376E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376E20"))) PPC_WEAK_FUNC(sub_82376E20);
PPC_FUNC_IMPL(__imp__sub_82376E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82376E28;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x823766e8
	ctx.lr = 0x82376E44;
	sub_823766E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82376e78
	if (ctx.cr0.eq) goto loc_82376E78;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82376e5c
	if (!ctx.cr6.eq) goto loc_82376E5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82376E5C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x82388898
	ctx.lr = 0x82376E70;
	sub_82388898(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82376e7c
	goto loc_82376E7C;
loc_82376E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82376E7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82376E84"))) PPC_WEAK_FUNC(sub_82376E84);
PPC_FUNC_IMPL(__imp__sub_82376E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82376E88"))) PPC_WEAK_FUNC(sub_82376E88);
PPC_FUNC_IMPL(__imp__sub_82376E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82376eb0
	if (!ctx.cr6.eq) goto loc_82376EB0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82376eb0
	if (ctx.cr6.eq) goto loc_82376EB0;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82376eb4
	if (ctx.cr6.eq) goto loc_82376EB4;
loc_82376EB0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82376EB4:
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82376eec
	if (!ctx.cr6.eq) goto loc_82376EEC;
	// lhz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// lhz r8,66(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 66);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r8
	ctx.r7.s32 = ctx.r9.s32 / ctx.r8.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twllei r8,0
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r11,-1
	// bne 0x82376ef8
	if (!ctx.cr0.eq) goto loc_82376EF8;
loc_82376EEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82376EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82376F00"))) PPC_WEAK_FUNC(sub_82376F00);
PPC_FUNC_IMPL(__imp__sub_82376F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82376F08;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82377068
	if (ctx.cr6.eq) goto loc_82377068;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823770a8
	if (!ctx.cr6.eq) goto loc_823770A8;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82376f6c
	if (ctx.cr0.eq) goto loc_82376F6C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82376F50:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82376f60
	if (ctx.cr6.eq) goto loc_82376F60;
	// slw r10,r30,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_82376F60:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82376f50
	if (ctx.cr6.lt) goto loc_82376F50;
loc_82376F6C:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823770a8
	if (!ctx.cr6.eq) goto loc_823770A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389788
	ctx.lr = 0x82376F80;
	sub_82389788(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r29,101(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// bl 0x82357358
	ctx.lr = 0x82376F8C;
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
	ctx.lr = 0x82376FA4;
	sub_82376E20(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82376fbc
	if (!ctx.cr6.eq) goto loc_82376FBC;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82376fd8
	if (ctx.cr6.eq) goto loc_82376FD8;
loc_82376FBC:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r8,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r8.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82376FD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389530
	ctx.lr = 0x82376FE0;
	sub_82389530(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// bl 0x82357358
	ctx.lr = 0x82376FEC;
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
	ctx.lr = 0x82377004;
	sub_82376E20(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82377054
	if (ctx.cr0.eq) goto loc_82377054;
	// addi r10,r31,94
	ctx.r10.s64 = ctx.r31.s64 + 94;
loc_8237701C:
	// lbz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82377034
	if (!ctx.cr6.eq) goto loc_82377034;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// b 0x82377038
	goto loc_82377038;
loc_82377034:
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
loc_82377038:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8237701c
	if (ctx.cr6.lt) goto loc_8237701C;
loc_82377054:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82389828
	ctx.lr = 0x8237705C;
	sub_82389828(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82389828
	ctx.lr = 0x82377064;
	sub_82389828(ctx, base);
	// b 0x823770a8
	goto loc_823770A8;
loc_82377068:
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8237707c
	if (!ctx.cr6.eq) goto loc_8237707C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82377094
	if (ctx.cr6.eq) goto loc_82377094;
loc_8237707C:
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
loc_82377094:
	// addi r31,r31,156
	ctx.r31.s64 = ctx.r31.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823770A0;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x823770A8;
	sub_8237D130(ctx, base);
loc_823770A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823770B4"))) PPC_WEAK_FUNC(sub_823770B4);
PPC_FUNC_IMPL(__imp__sub_823770B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823770B8"))) PPC_WEAK_FUNC(sub_823770B8);
PPC_FUNC_IMPL(__imp__sub_823770B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823770C0;
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
	// bne cr6,0x823770d8
	if (!ctx.cr6.eq) goto loc_823770D8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823770D8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823770ec
	if (!ctx.cr0.eq) goto loc_823770EC;
loc_823770E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82377164
	goto loc_82377164;
loc_823770EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823770F4;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82377104;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82377110;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823770e4
	if (ctx.cr6.eq) goto loc_823770E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82377124;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82377158
	if (ctx.cr6.eq) goto loc_82377158;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x82377140;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82377158
	if (ctx.cr6.eq) goto loc_82377158;
	// bl 0x82357240
	ctx.lr = 0x82377150;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82377158:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82377164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8237716C"))) PPC_WEAK_FUNC(sub_8237716C);
PPC_FUNC_IMPL(__imp__sub_8237716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82377170"))) PPC_WEAK_FUNC(sub_82377170);
PPC_FUNC_IMPL(__imp__sub_82377170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82377178;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x823771AC;
	sub_823A86F8(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x823a86f8
	ctx.lr = 0x823771B4;
	sub_823A86F8(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x823a86f8
	ctx.lr = 0x823771BC;
	sub_823A86F8(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x823762b0
	ctx.lr = 0x823771C4;
	sub_823762B0(ctx, base);
	// stw r28,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r28.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// bl 0x823763c0
	ctx.lr = 0x823771E0;
	sub_823763C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823771EC"))) PPC_WEAK_FUNC(sub_823771EC);
PPC_FUNC_IMPL(__imp__sub_823771EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823771F0"))) PPC_WEAK_FUNC(sub_823771F0);
PPC_FUNC_IMPL(__imp__sub_823771F0) {
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
	// addi r3,r3,568
	ctx.r3.s64 = ctx.r3.s64 + 568;
	// bl 0x823826f8
	ctx.lr = 0x8237720C;
	sub_823826F8(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x82376330
	ctx.lr = 0x82377214;
	sub_82376330(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x823ab568
	ctx.lr = 0x8237721C;
	sub_823AB568(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x823ab568
	ctx.lr = 0x82377224;
	sub_823AB568(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x823ab568
	ctx.lr = 0x8237722C;
	sub_823AB568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823826f8
	ctx.lr = 0x82377234;
	sub_823826F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82377248"))) PPC_WEAK_FUNC(sub_82377248);
PPC_FUNC_IMPL(__imp__sub_82377248) {
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
	// lwz r3,-4856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823772a0
	if (!ctx.cr6.eq) goto loc_823772A0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823570e0
	ctx.lr = 0x82377270;
	sub_823570E0(ctx, base);
	// li r3,664
	ctx.r3.s64 = 664;
	// bl 0x823570f0
	ctx.lr = 0x82377278;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8237728c
	if (ctx.cr0.eq) goto loc_8237728C;
	// bl 0x82377170
	ctx.lr = 0x82377284;
	sub_82377170(ctx, base);
	// stw r3,-4856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4856, ctx.r3.u32);
	// b 0x82377294
	goto loc_82377294;
loc_8237728C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4856, ctx.r11.u32);
loc_82377294:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8237729C;
	sub_823570E0(ctx, base);
	// lwz r3,-4856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4856);
loc_823772A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823772B4"))) PPC_WEAK_FUNC(sub_823772B4);
PPC_FUNC_IMPL(__imp__sub_823772B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

