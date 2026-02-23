#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8208E6FC"))) PPC_WEAK_FUNC(sub_8208E6FC);
PPC_FUNC_IMPL(__imp__sub_8208E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E700"))) PPC_WEAK_FUNC(sub_8208E700);
PPC_FUNC_IMPL(__imp__sub_8208E700) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// beq cr6,0x8208e754
	if (ctx.cr6.eq) goto loc_8208E754;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,2150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2150, ctx.xer);
	// blt cr6,0x8208e720
	if (ctx.cr6.lt) goto loc_8208E720;
	// cmpwi cr6,r11,2153
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2153, ctx.xer);
	// ble cr6,0x8208e754
	if (!ctx.cr6.gt) goto loc_8208E754;
loc_8208E720:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// beq cr6,0x8208e754
	if (ctx.cr6.eq) goto loc_8208E754;
	// cmpwi cr6,r11,2154
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2154, ctx.xer);
	// beq cr6,0x8208e754
	if (ctx.cr6.eq) goto loc_8208E754;
	// cmpwi cr6,r11,2155
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2155, ctx.xer);
	// beq cr6,0x8208e754
	if (ctx.cr6.eq) goto loc_8208E754;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x8208e754
	if (ctx.cr6.eq) goto loc_8208E754;
	// cmpwi cr6,r11,2156
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2156, ctx.xer);
	// beq cr6,0x8208e754
	if (ctx.cr6.eq) goto loc_8208E754;
	// cmpwi cr6,r11,2157
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2157, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8208E754:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208E75C"))) PPC_WEAK_FUNC(sub_8208E75C);
PPC_FUNC_IMPL(__imp__sub_8208E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E760"))) PPC_WEAK_FUNC(sub_8208E760);
PPC_FUNC_IMPL(__imp__sub_8208E760) {
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
	// cmpwi cr6,r3,2700
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2700, ctx.xer);
	// blt cr6,0x8208e788
	if (ctx.cr6.lt) goto loc_8208E788;
	// cmpwi cr6,r3,2799
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2799, ctx.xer);
	// ble cr6,0x8208e790
	if (!ctx.cr6.gt) goto loc_8208E790;
loc_8208E788:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8208e7d4
	goto loc_8208E7D4;
loc_8208E790:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-5056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5056);
	// bl 0x820ed8c0
	ctx.lr = 0x8208E7A8;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8208e7b8
	if (ctx.cr6.eq) goto loc_8208E7B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8208e7d4
	goto loc_8208E7D4;
loc_8208E7B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-5056(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5056);
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x8208E7CC;
	sub_820ED8C0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8208E7D4:
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

__attribute__((alias("__imp__sub_8208E7EC"))) PPC_WEAK_FUNC(sub_8208E7EC);
PPC_FUNC_IMPL(__imp__sub_8208E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E7F0"))) PPC_WEAK_FUNC(sub_8208E7F0);
PPC_FUNC_IMPL(__imp__sub_8208E7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,2050
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2050, ctx.xer);
	// blt cr6,0x8208e814
	if (ctx.cr6.lt) goto loc_8208E814;
	// cmpwi cr6,r11,2051
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2051, ctx.xer);
	// ble cr6,0x8208e80c
	if (!ctx.cr6.gt) goto loc_8208E80C;
	// cmpwi cr6,r11,2089
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2089, ctx.xer);
	// bne cr6,0x8208e814
	if (!ctx.cr6.eq) goto loc_8208E814;
loc_8208E80C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8208E814:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208E81C"))) PPC_WEAK_FUNC(sub_8208E81C);
PPC_FUNC_IMPL(__imp__sub_8208E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E820"))) PPC_WEAK_FUNC(sub_8208E820);
PPC_FUNC_IMPL(__imp__sub_8208E820) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,664(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208E828"))) PPC_WEAK_FUNC(sub_8208E828);
PPC_FUNC_IMPL(__imp__sub_8208E828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208e844
	if (!ctx.cr6.eq) goto loc_8208E844;
	// lwz r11,664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8208E844:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208E84C"))) PPC_WEAK_FUNC(sub_8208E84C);
PPC_FUNC_IMPL(__imp__sub_8208E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E850"))) PPC_WEAK_FUNC(sub_8208E850);
PPC_FUNC_IMPL(__imp__sub_8208E850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8208e86c
	if (!ctx.cr6.eq) goto loc_8208E86C;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8208E86C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208E874"))) PPC_WEAK_FUNC(sub_8208E874);
PPC_FUNC_IMPL(__imp__sub_8208E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E878"))) PPC_WEAK_FUNC(sub_8208E878);
PPC_FUNC_IMPL(__imp__sub_8208E878) {
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
	ctx.lr = 0x8208E894;
	sub_82185698(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82185740
	ctx.lr = 0x8208E8A4;
	sub_82185740(ctx, base);
	// lis r4,17227
	ctx.r4.s64 = 1128988672;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,31087
	ctx.r4.u64 = ctx.r4.u64 | 31087;
	// bl 0x82188378
	ctx.lr = 0x8208E8B8;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r31.u32);
	// addi r7,r10,7932
	ctx.r7.s64 = ctx.r10.s64 + 7932;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r8,r11,7940
	ctx.r8.s64 = ctx.r11.s64 + 7940;
	// addi r6,r9,7900
	ctx.r6.s64 = ctx.r9.s64 + 7900;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,-20120
	ctx.r8.s64 = ctx.r11.s64 + -20120;
loc_8208E8F4:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8208E900:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// bdnz 0x8208e900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208E900;
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// cmpwi cr6,r9,81
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 81, ctx.xer);
	// blt cr6,0x8208e8f4
	if (ctx.cr6.lt) goto loc_8208E8F4;
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

__attribute__((alias("__imp__sub_8208E938"))) PPC_WEAK_FUNC(sub_8208E938);
PPC_FUNC_IMPL(__imp__sub_8208E938) {
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
	// bl 0x8208e308
	ctx.lr = 0x8208E958;
	sub_8208E308(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208e974
	if (ctx.cr6.eq) goto loc_8208E974;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8208E970;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8208E974:
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

__attribute__((alias("__imp__sub_8208E98C"))) PPC_WEAK_FUNC(sub_8208E98C);
PPC_FUNC_IMPL(__imp__sub_8208E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208E990"))) PPC_WEAK_FUNC(sub_8208E990);
PPC_FUNC_IMPL(__imp__sub_8208E990) {
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
	ctx.lr = 0x8208E9A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8208e9b8
	if (ctx.cr6.eq) goto loc_8208E9B8;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x8208E9B4;
	sub_82183448(ctx, base);
	// b 0x8208e9c0
	goto loc_8208E9C0;
loc_8208E9B8:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8208E9C0;
	sub_821845A0(ctx, base);
loc_8208E9C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208e9d8
	if (ctx.cr6.eq) goto loc_8208E9D8;
	// bl 0x8208e878
	ctx.lr = 0x8208E9CC;
	sub_8208E878(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// bne cr6,0x8208e9dc
	if (!ctx.cr6.eq) goto loc_8208E9DC;
loc_8208E9D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8208E9DC:
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
	ctx.lr = 0x8208E9F8;
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

__attribute__((alias("__imp__sub_8208EA08"))) PPC_WEAK_FUNC(sub_8208EA08);
PPC_FUNC_IMPL(__imp__sub_8208EA08) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,17227
	ctx.r4.s64 = 1128988672;
	// ori r4,r4,31087
	ctx.r4.u64 = ctx.r4.u64 | 31087;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x8208EA2C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208ea80
	if (ctx.cr6.eq) goto loc_8208EA80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208ea80
	if (ctx.cr6.eq) goto loc_8208EA80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-20120
	ctx.r8.s64 = ctx.r11.s64 + -20120;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_8208EA54:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8208EA60:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// bdnz 0x8208ea60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208EA60;
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// cmpwi cr6,r9,81
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 81, ctx.xer);
	// blt cr6,0x8208ea54
	if (ctx.cr6.lt) goto loc_8208EA54;
loc_8208EA80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208EA90"))) PPC_WEAK_FUNC(sub_8208EA90);
PPC_FUNC_IMPL(__imp__sub_8208EA90) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208e480
	ctx.lr = 0x8208EAB0;
	sub_8208E480(ctx, base);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f12,f1,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmadds f2,f12,f2,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f8.f64));
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f12,f10,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f3,f12,f9,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f3.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f5,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfs f31,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f7,f13,f7,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f2.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f11,f31,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f3,f0,f8,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f2,f11,f1,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f1,f11,f4,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f13,f12,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f11,f9,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8208EB7C"))) PPC_WEAK_FUNC(sub_8208EB7C);
PPC_FUNC_IMPL(__imp__sub_8208EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208EB80"))) PPC_WEAK_FUNC(sub_8208EB80);
PPC_FUNC_IMPL(__imp__sub_8208EB80) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,570(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 570);
	// lfs f9,556(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,7956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7956);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bne cr6,0x8208ebb8
	if (!ctx.cr6.eq) goto loc_8208EBB8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3692);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_8208EBB8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8208ebc8
	if (!ctx.cr6.eq) goto loc_8208EBC8;
	// lfs f0,420(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
loc_8208EBC8:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r10,188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lfs f13,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8208ebe4
	if (!ctx.cr6.gt) goto loc_8208EBE4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8208EBE4:
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lfs f11,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8208ec04
	if (!ctx.cr6.lt) goto loc_8208EC04;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8208EC04:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8208ec1c
	if (!ctx.cr6.lt) goto loc_8208EC1C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8208EC1C:
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,2050
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2050, ctx.xer);
	// beq cr6,0x8208ecb4
	if (ctx.cr6.eq) goto loc_8208ECB4;
	// cmpwi cr6,r11,2051
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2051, ctx.xer);
	// beq cr6,0x8208ecb4
	if (ctx.cr6.eq) goto loc_8208ECB4;
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x8208ec54
	if (!ctx.cr6.gt) goto loc_8208EC54;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8208ec54
	if (!ctx.cr6.gt) goto loc_8208EC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7952);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8208ec6c
	if (ctx.cr6.lt) goto loc_8208EC6C;
loc_8208EC54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208EC6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,7948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x8208EC8C;
	sub_8208EA90(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x8208ecb8
	if (ctx.cr6.lt) goto loc_8208ECB8;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208ECB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8208ECB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8208ECCC"))) PPC_WEAK_FUNC(sub_8208ECCC);
PPC_FUNC_IMPL(__imp__sub_8208ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208ECD0"))) PPC_WEAK_FUNC(sub_8208ECD0);
PPC_FUNC_IMPL(__imp__sub_8208ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8208eb80
	ctx.lr = 0x8208ECE8;
	sub_8208EB80(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8208ed24
	if (ctx.cr6.eq) goto loc_8208ED24;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,2050
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2050, ctx.xer);
	// blt cr6,0x8208ed0c
	if (ctx.cr6.lt) goto loc_8208ED0C;
	// cmpwi cr6,r11,2051
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2051, ctx.xer);
	// ble cr6,0x8208ed24
	if (!ctx.cr6.gt) goto loc_8208ED24;
	// cmpwi cr6,r11,2089
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2089, ctx.xer);
	// beq cr6,0x8208ed24
	if (ctx.cr6.eq) goto loc_8208ED24;
loc_8208ED0C:
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
loc_8208ED24:
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

__attribute__((alias("__imp__sub_8208ED3C"))) PPC_WEAK_FUNC(sub_8208ED3C);
PPC_FUNC_IMPL(__imp__sub_8208ED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208ED40"))) PPC_WEAK_FUNC(sub_8208ED40);
PPC_FUNC_IMPL(__imp__sub_8208ED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,-9764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208ed74
	if (ctx.cr6.eq) goto loc_8208ED74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208ED74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208ED74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208ED90"))) PPC_WEAK_FUNC(sub_8208ED90);
PPC_FUNC_IMPL(__imp__sub_8208ED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// b 0x82098470
	sub_82098470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208ED9C"))) PPC_WEAK_FUNC(sub_8208ED9C);
PPC_FUNC_IMPL(__imp__sub_8208ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208EDA0"))) PPC_WEAK_FUNC(sub_8208EDA0);
PPC_FUNC_IMPL(__imp__sub_8208EDA0) {
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
	ctx.lr = 0x8208EDB0;
	sub_8215BEC8(ctx, base);
	// lbz r11,93(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 93);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8208edd0
	if (!ctx.cr6.eq) goto loc_8208EDD0;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208EDD0:
	// bl 0x8215bec8
	ctx.lr = 0x8208EDD4;
	sub_8215BEC8(ctx, base);
	// lbz r11,93(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 93);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8208edf4
	if (!ctx.cr6.eq) goto loc_8208EDF4;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208EDF4:
	// bl 0x8215bec8
	ctx.lr = 0x8208EDF8;
	sub_8215BEC8(ctx, base);
	// lbz r11,93(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 93);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8208ee18
	if (!ctx.cr6.eq) goto loc_8208EE18;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208EE18:
	// bl 0x8215bec8
	ctx.lr = 0x8208EE1C;
	sub_8215BEC8(ctx, base);
	// lbz r11,94(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 94);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208EE40"))) PPC_WEAK_FUNC(sub_8208EE40);
PPC_FUNC_IMPL(__imp__sub_8208EE40) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,7964
	ctx.r10.s64 = ctx.r11.s64 + 7964;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8208EE68;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8208ee9c
	if (ctx.cr6.eq) goto loc_8208EE9C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8208ee9c
	if (ctx.cr6.eq) goto loc_8208EE9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8208ee9c
	if (ctx.cr6.eq) goto loc_8208EE9C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8208ee9c
	if (ctx.cr6.eq) goto loc_8208EE9C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8208ee9c
	if (ctx.cr6.eq) goto loc_8208EE9C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8208eea8
	if (!ctx.cr6.eq) goto loc_8208EEA8;
loc_8208EE9C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5328
	ctx.lr = 0x8208EEA8;
	sub_820E5328(ctx, base);
loc_8208EEA8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
	// lwz r3,-9764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208eedc
	if (ctx.cr6.eq) goto loc_8208EEDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208EEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208EEDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-9764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9764, ctx.r11.u32);
	// bl 0x8218cc18
	ctx.lr = 0x8208EEEC;
	sub_8218CC18(ctx, base);
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

__attribute__((alias("__imp__sub_8208EF04"))) PPC_WEAK_FUNC(sub_8208EF04);
PPC_FUNC_IMPL(__imp__sub_8208EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208EF08"))) PPC_WEAK_FUNC(sub_8208EF08);
PPC_FUNC_IMPL(__imp__sub_8208EF08) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad910
	ctx.lr = 0x8208EF30;
	sub_821AD910(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x8208ef48
	if (!ctx.cr6.eq) goto loc_8208EF48;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// beq cr6,0x8208ef58
	if (ctx.cr6.eq) goto loc_8208EF58;
loc_8208EF48:
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad8c8
	ctx.lr = 0x8208EF58;
	sub_821AD8C8(ctx, base);
loc_8208EF58:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-9764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9764);
	// bl 0x82098498
	ctx.lr = 0x8208EF64;
	sub_82098498(ctx, base);
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

__attribute__((alias("__imp__sub_8208EF78"))) PPC_WEAK_FUNC(sub_8208EF78);
PPC_FUNC_IMPL(__imp__sub_8208EF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8208EF80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x820984c0
	ctx.lr = 0x8208EF94;
	sub_820984C0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8208EF98;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8208EFA4;
	sub_821837D0(ctx, base);
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x820983d8
	ctx.lr = 0x8208EFAC;
	sub_820983D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8208EFB4;
	sub_821837D0(ctx, base);
	// lwz r3,-9764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9764);
	// bl 0x82098510
	ctx.lr = 0x8208EFBC;
	sub_82098510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8208f074
	if (ctx.cr6.eq) goto loc_8208F074;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208eda0
	ctx.lr = 0x8208EFCC;
	sub_8208EDA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208eff0
	if (ctx.cr6.eq) goto loc_8208EFF0;
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
	ctx.lr = 0x8208EFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8208EFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8208EFF8;
	sub_821837D0(ctx, base);
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8208f08c
	if (ctx.cr6.gt) goto loc_8208F08C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8208f02c
	// bdzf 4*cr6+eq,0x8208f044
	// bdzf 4*cr6+eq,0x8208f050
	// bdzf 4*cr6+eq,0x8208f05c
	// bne cr6,0x8208f068
	if (!ctx.cr6.eq) goto loc_8208F068;
	// bl 0x82098688
	ctx.lr = 0x8208F024;
	sub_82098688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F02C:
	// bl 0x8215bec8
	ctx.lr = 0x8208F030;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82085690
	ctx.lr = 0x8208F03C;
	sub_82085690(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F044:
	// bl 0x8215c9e0
	ctx.lr = 0x8208F048;
	sub_8215C9E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F050:
	// bl 0x8215c880
	ctx.lr = 0x8208F054;
	sub_8215C880(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F05C:
	// bl 0x8215cbf8
	ctx.lr = 0x8208F060;
	sub_8215CBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F068:
	// bl 0x8215cb20
	ctx.lr = 0x8208F06C;
	sub_8215CB20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F074:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-4972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8208f08c
	if (!ctx.cr6.gt) goto loc_8208F08C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-4972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4972, ctx.r11.u32);
loc_8208F08C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8208F094"))) PPC_WEAK_FUNC(sub_8208F094);
PPC_FUNC_IMPL(__imp__sub_8208F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F098"))) PPC_WEAK_FUNC(sub_8208F098);
PPC_FUNC_IMPL(__imp__sub_8208F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8208F0A0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8208F0B0;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8208f0f4
	if (ctx.cr6.eq) goto loc_8208F0F4;
	// bl 0x82225508
	ctx.lr = 0x8208F0C0;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8208f0f4
	if (ctx.cr6.eq) goto loc_8208F0F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-740(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -740);
	// bl 0x82227100
	ctx.lr = 0x8208F0E8;
	sub_82227100(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8208f1ec
	if (!ctx.cr6.eq) goto loc_8208F1EC;
loc_8208F0F4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8208f118
	if (!ctx.cr6.eq) goto loc_8208F118;
	// cmplwi cr6,r31,22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 22, ctx.xer);
	// bne cr6,0x8208f118
	if (!ctx.cr6.eq) goto loc_8208F118;
loc_8208F10C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F118:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// beq cr6,0x8208f1e8
	if (ctx.cr6.eq) goto loc_8208F1E8;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// beq cr6,0x8208f1e8
	if (ctx.cr6.eq) goto loc_8208F1E8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lbz r11,-4932(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4932);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8208f14c
	if (!ctx.cr6.eq) goto loc_8208F14C;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// bne cr6,0x8208f14c
	if (!ctx.cr6.eq) goto loc_8208F14C;
loc_8208F140:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F14C:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x8208f168
	if (ctx.cr6.lt) goto loc_8208F168;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4936, ctx.r11.u32);
	// b 0x8208f178
	goto loc_8208F178;
loc_8208F168:
	// lwz r11,-4980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8208f178
	if (!ctx.cr6.eq) goto loc_8208F178;
	// bl 0x820eccb8
	ctx.lr = 0x8208F178;
	sub_820ECCB8(ctx, base);
loc_8208F178:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8208f140
	if (ctx.cr6.gt) goto loc_8208F140;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x8208f1e8
	if (ctx.cr6.eq) goto loc_8208F1E8;
	// lwz r11,-4980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8208f1e8
	if (ctx.cr6.eq) goto loc_8208F1E8;
	// cmplwi cr6,r31,22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 22, ctx.xer);
	// beq cr6,0x8208f10c
	if (ctx.cr6.eq) goto loc_8208F10C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8208f1cc
	if (ctx.cr6.eq) goto loc_8208F1CC;
	// cmplwi cr6,r31,29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 29, ctx.xer);
	// beq cr6,0x8208f1cc
	if (ctx.cr6.eq) goto loc_8208F1CC;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x8208f1cc
	if (ctx.cr6.eq) goto loc_8208F1CC;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8208f1cc
	if (ctx.cr6.eq) goto loc_8208F1CC;
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// bne cr6,0x8208f140
	if (!ctx.cr6.eq) goto loc_8208F140;
loc_8208F1CC:
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bne cr6,0x8208f1e8
	if (!ctx.cr6.eq) goto loc_8208F1E8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-5008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8208f1ec
	if (!ctx.cr6.eq) goto loc_8208F1EC;
loc_8208F1E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8208F1EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8208F1F4"))) PPC_WEAK_FUNC(sub_8208F1F4);
PPC_FUNC_IMPL(__imp__sub_8208F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F1F8"))) PPC_WEAK_FUNC(sub_8208F1F8);
PPC_FUNC_IMPL(__imp__sub_8208F1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8208F210;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8208f228
	if (ctx.cr6.eq) goto loc_8208F228;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x8208F224;
	sub_82183448(ctx, base);
	// b 0x8208f230
	goto loc_8208F230;
loc_8208F228:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8208F230;
	sub_821845A0(ctx, base);
loc_8208F230:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f254
	if (ctx.cr6.eq) goto loc_8208F254;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82098918
	ctx.lr = 0x8208F240;
	sub_82098918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208F254:
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

__attribute__((alias("__imp__sub_8208F26C"))) PPC_WEAK_FUNC(sub_8208F26C);
PPC_FUNC_IMPL(__imp__sub_8208F26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F270"))) PPC_WEAK_FUNC(sub_8208F270);
PPC_FUNC_IMPL(__imp__sub_8208F270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8208F278;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,7988
	ctx.r5.s64 = ctx.r11.s64 + 7988;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218cb30
	ctx.lr = 0x8208F290;
	sub_8218CB30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,7964
	ctx.r9.s64 = ctx.r10.s64 + 7964;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x8215c0c8
	ctx.lr = 0x8208F2A0;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8208F2A8;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82098200
	ctx.lr = 0x8208F2B0;
	sub_82098200(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82183850
	ctx.lr = 0x8208F2C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8208f2e0
	if (ctx.cr6.eq) goto loc_8208F2E0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8208F2DC;
	sub_82183448(ctx, base);
	// b 0x8208f2e8
	goto loc_8208F2E8;
loc_8208F2E0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8208F2E8;
	sub_821845A0(ctx, base);
loc_8208F2E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f300
	if (ctx.cr6.eq) goto loc_8208F300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82098b80
	ctx.lr = 0x8208F2F8;
	sub_82098B80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8208f304
	goto loc_8208F304;
loc_8208F300:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8208F304:
	// bl 0x82183850
	ctx.lr = 0x8208F308;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8208f320
	if (ctx.cr6.eq) goto loc_8208F320;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8208F31C;
	sub_82183448(ctx, base);
	// b 0x8208f328
	goto loc_8208F328;
loc_8208F320:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8208F328;
	sub_821845A0(ctx, base);
loc_8208F328:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f344
	if (ctx.cr6.eq) goto loc_8208F344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,7960
	ctx.r10.s64 = ctx.r11.s64 + 7960;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8208f348
	goto loc_8208F348;
loc_8208F344:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8208F348:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef488
	ctx.lr = 0x8208F350;
	sub_820EF488(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8208F354;
	sub_8215BEC8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8208F360;
	sub_8215BEC8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stb r30,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r30.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r28.u32);
	// bl 0x82182e90
	ctx.lr = 0x8208F374;
	sub_82182E90(ctx, base);
	// bl 0x821837d0
	ctx.lr = 0x8208F378;
	sub_821837D0(ctx, base);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// sth r30,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r30.u16);
	// li r4,120
	ctx.r4.s64 = 120;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x822aa648
	ctx.lr = 0x8208F390;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8208F39C"))) PPC_WEAK_FUNC(sub_8208F39C);
PPC_FUNC_IMPL(__imp__sub_8208F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F3A0"))) PPC_WEAK_FUNC(sub_8208F3A0);
PPC_FUNC_IMPL(__imp__sub_8208F3A0) {
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
	// bl 0x8208ee40
	ctx.lr = 0x8208F3C0;
	sub_8208EE40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208f3dc
	if (ctx.cr6.eq) goto loc_8208F3DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8208F3D8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8208F3DC:
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

__attribute__((alias("__imp__sub_8208F3F4"))) PPC_WEAK_FUNC(sub_8208F3F4);
PPC_FUNC_IMPL(__imp__sub_8208F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F3F8"))) PPC_WEAK_FUNC(sub_8208F3F8);
PPC_FUNC_IMPL(__imp__sub_8208F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8208F400;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8208f5e8
	if (ctx.cr6.eq) goto loc_8208F5E8;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// bne cr6,0x8208f5e8
	if (!ctx.cr6.eq) goto loc_8208F5E8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x8208F42C;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f644
	if (!ctx.cr6.eq) goto loc_8208F644;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r24,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lfs f31,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,-5052
	ctx.r26.s64 = ctx.r11.s64 + -5052;
	// lwz r28,-4900(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4900);
loc_8208F47C:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r31,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
	// stfsx f31,r31,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// beq cr6,0x8208f51c
	if (ctx.cr6.eq) goto loc_8208F51C;
	// lwz r11,596(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208f51c
	if (ctx.cr6.eq) goto loc_8208F51C;
	// lwz r11,612(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208f51c
	if (ctx.cr6.eq) goto loc_8208F51C;
	// lwz r11,1240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8208f51c
	if (ctx.cr6.eq) goto loc_8208F51C;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mulli r9,r9,208
	ctx.r9.s64 = ctx.r9.s64 * 208;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8208F4E0:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8208f4e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208F4E0;
	// lwz r11,432(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 432);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x8208ea90
	ctx.lr = 0x8208F510;
	sub_8208EA90(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// stwx r27,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
loc_8208F51C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8208f47c
	if (ctx.cr6.lt) goto loc_8208F47C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_8208F530:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8208f570
	if (!ctx.cr6.gt) goto loc_8208F570;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8208F570:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x8208f530
	if (ctx.cr6.lt) goto loc_8208F530;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// sth r24,68(r23)
	PPC_STORE_U16(ctx.r23.u32 + 68, ctx.r24.u16);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8208F58C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8208f5cc
	if (ctx.cr6.eq) goto loc_8208F5CC;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// addi r3,r11,1232
	ctx.r3.s64 = ctx.r11.s64 + 1232;
	// lwz r11,1232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8208F5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r8,r31,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// slw r9,r29,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r30.u8 & 0x3F));
	// stw r29,2028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2028, ctx.r29.u32);
	// lhz r7,68(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 68);
	// or r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 | ctx.r7.u64;
	// sth r6,68(r23)
	PPC_STORE_U16(ctx.r23.u32 + 68, ctx.r6.u16);
loc_8208F5CC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8208f58c
	if (!ctx.cr0.eq) goto loc_8208F58C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8208F5E8:
	// cmplwi cr6,r4,23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23, ctx.xer);
	// bne cr6,0x8208f644
	if (!ctx.cr6.eq) goto loc_8208F644;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x8208F5FC;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f644
	if (!ctx.cr6.eq) goto loc_8208F644;
	// lhz r10,68(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 68);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-5052
	ctx.r11.s64 = ctx.r11.s64 + -5052;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8208f628
	if (ctx.cr6.eq) goto loc_8208F628;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r24,2028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2028, ctx.r24.u32);
loc_8208F628:
	// lhz r10,68(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 68);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8208f640
	if (ctx.cr6.eq) goto loc_8208F640;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r24,2028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2028, ctx.r24.u32);
loc_8208F640:
	// sth r24,68(r23)
	PPC_STORE_U16(ctx.r23.u32 + 68, ctx.r24.u16);
loc_8208F644:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8208F654"))) PPC_WEAK_FUNC(sub_8208F654);
PPC_FUNC_IMPL(__imp__sub_8208F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F658"))) PPC_WEAK_FUNC(sub_8208F658);
PPC_FUNC_IMPL(__imp__sub_8208F658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820f3a78
	ctx.lr = 0x8208F670;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f694
	if (!ctx.cr6.eq) goto loc_8208F694;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208F694:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114e30
	ctx.lr = 0x8208F6A0;
	sub_82114E30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208F6B4"))) PPC_WEAK_FUNC(sub_8208F6B4);
PPC_FUNC_IMPL(__imp__sub_8208F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F6B8"))) PPC_WEAK_FUNC(sub_8208F6B8);
PPC_FUNC_IMPL(__imp__sub_8208F6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820f3a78
	ctx.lr = 0x8208F6D0;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f6ec
	if (!ctx.cr6.eq) goto loc_8208F6EC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208F6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114ea0
	ctx.lr = 0x8208F6F4;
	sub_82114EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208F708"))) PPC_WEAK_FUNC(sub_8208F708);
PPC_FUNC_IMPL(__imp__sub_8208F708) {
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
	// bl 0x820f3a78
	ctx.lr = 0x8208F728;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8208f73c
	if (ctx.cr6.eq) goto loc_8208F73C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114f20
	ctx.lr = 0x8208F73C;
	sub_82114F20(ctx, base);
loc_8208F73C:
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

__attribute__((alias("__imp__sub_8208F754"))) PPC_WEAK_FUNC(sub_8208F754);
PPC_FUNC_IMPL(__imp__sub_8208F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F758"))) PPC_WEAK_FUNC(sub_8208F758);
PPC_FUNC_IMPL(__imp__sub_8208F758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8208F760;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820f3a78
	ctx.lr = 0x8208F774;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f784
	if (!ctx.cr6.eq) goto loc_8208F784;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F784:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8208f7a0
	if (ctx.cr6.eq) goto loc_8208F7A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821142d8
	ctx.lr = 0x8208F798;
	sub_821142D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8208F7A0:
	// bl 0x82114310
	ctx.lr = 0x8208F7A4;
	sub_82114310(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8208F7AC"))) PPC_WEAK_FUNC(sub_8208F7AC);
PPC_FUNC_IMPL(__imp__sub_8208F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F7B0"))) PPC_WEAK_FUNC(sub_8208F7B0);
PPC_FUNC_IMPL(__imp__sub_8208F7B0) {
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
	// bl 0x820f3a78
	ctx.lr = 0x8208F7C0;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f7d8
	if (!ctx.cr6.eq) goto loc_8208F7D8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208F7D8:
	// bl 0x82114ce8
	ctx.lr = 0x8208F7DC;
	sub_82114CE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208F7EC"))) PPC_WEAK_FUNC(sub_8208F7EC);
PPC_FUNC_IMPL(__imp__sub_8208F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F7F0"))) PPC_WEAK_FUNC(sub_8208F7F0);
PPC_FUNC_IMPL(__imp__sub_8208F7F0) {
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
	// bl 0x820f3a78
	ctx.lr = 0x8208F800;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f818
	if (!ctx.cr6.eq) goto loc_8208F818;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208F818:
	// bl 0x82114d40
	ctx.lr = 0x8208F81C;
	sub_82114D40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208F82C"))) PPC_WEAK_FUNC(sub_8208F82C);
PPC_FUNC_IMPL(__imp__sub_8208F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F830"))) PPC_WEAK_FUNC(sub_8208F830);
PPC_FUNC_IMPL(__imp__sub_8208F830) {
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
	// bl 0x820f3a78
	ctx.lr = 0x8208F840;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8208f858
	if (!ctx.cr6.eq) goto loc_8208F858;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208F858:
	// bl 0x82114d98
	ctx.lr = 0x8208F85C;
	sub_82114D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208F86C"))) PPC_WEAK_FUNC(sub_8208F86C);
PPC_FUNC_IMPL(__imp__sub_8208F86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F870"))) PPC_WEAK_FUNC(sub_8208F870);
PPC_FUNC_IMPL(__imp__sub_8208F870) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82181108
	sub_82181108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208F878"))) PPC_WEAK_FUNC(sub_8208F878);
PPC_FUNC_IMPL(__imp__sub_8208F878) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82181238
	sub_82181238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208F880"))) PPC_WEAK_FUNC(sub_8208F880);
PPC_FUNC_IMPL(__imp__sub_8208F880) {
	PPC_FUNC_PROLOGUE();
	// lis r3,1
	ctx.r3.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,34556
	ctx.r3.u64 = ctx.r3.u64 | 34556;
	// b 0x82181238
	sub_82181238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208F890"))) PPC_WEAK_FUNC(sub_8208F890);
PPC_FUNC_IMPL(__imp__sub_8208F890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82181040
	ctx.lr = 0x8208F8A8;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f8cc
	if (ctx.cr6.eq) goto loc_8208F8CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82181060
	ctx.lr = 0x8208F8B8;
	sub_82181060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208F8CC:
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

__attribute__((alias("__imp__sub_8208F8E4"))) PPC_WEAK_FUNC(sub_8208F8E4);
PPC_FUNC_IMPL(__imp__sub_8208F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F8E8"))) PPC_WEAK_FUNC(sub_8208F8E8);
PPC_FUNC_IMPL(__imp__sub_8208F8E8) {
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
	// bl 0x82181040
	ctx.lr = 0x8208F8F8;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f934
	if (ctx.cr6.eq) goto loc_8208F934;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82181050
	ctx.lr = 0x8208F910;
	sub_82181050(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f934
	if (ctx.cr6.eq) goto loc_8208F934;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182460
	ctx.lr = 0x8208F924;
	sub_82182460(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208F934:
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

__attribute__((alias("__imp__sub_8208F948"))) PPC_WEAK_FUNC(sub_8208F948);
PPC_FUNC_IMPL(__imp__sub_8208F948) {
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
	// bl 0x82181040
	ctx.lr = 0x8208F958;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f998
	if (ctx.cr6.eq) goto loc_8208F998;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82181050
	ctx.lr = 0x8208F970;
	sub_82181050(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208f998
	if (ctx.cr6.eq) goto loc_8208F998;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821822c0
	ctx.lr = 0x8208F988;
	sub_821822C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208F998:
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

__attribute__((alias("__imp__sub_8208F9AC"))) PPC_WEAK_FUNC(sub_8208F9AC);
PPC_FUNC_IMPL(__imp__sub_8208F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208F9B0"))) PPC_WEAK_FUNC(sub_8208F9B0);
PPC_FUNC_IMPL(__imp__sub_8208F9B0) {
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
	// bl 0x82181040
	ctx.lr = 0x8208F9C0;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208fa00
	if (ctx.cr6.eq) goto loc_8208FA00;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82181050
	ctx.lr = 0x8208F9D8;
	sub_82181050(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8208fa00
	if (ctx.cr6.eq) goto loc_8208FA00;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182240
	ctx.lr = 0x8208F9F0;
	sub_82182240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8208FA00:
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

__attribute__((alias("__imp__sub_8208FA14"))) PPC_WEAK_FUNC(sub_8208FA14);
PPC_FUNC_IMPL(__imp__sub_8208FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208FA18"))) PPC_WEAK_FUNC(sub_8208FA18);
PPC_FUNC_IMPL(__imp__sub_8208FA18) {
	PPC_FUNC_PROLOGUE();
	// li r6,25144
	ctx.r6.s64 = 25144;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8208FA20:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8208FA28:
	// li r9,22
	ctx.r9.s64 = 22;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8208FA34:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r8.u32);
	// bdnz 0x8208fa34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8208FA34;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,440
	ctx.r10.s64 = ctx.r10.s64 + 440;
	// bne 0x8208fa28
	if (!ctx.cr0.eq) goto loc_8208FA28;
	// addi r6,r6,22
	ctx.r6.s64 = ctx.r6.s64 + 22;
	// cmpwi cr6,r6,25584
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 25584, ctx.xer);
	// blt cr6,0x8208fa20
	if (ctx.cr6.lt) goto loc_8208FA20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FA64"))) PPC_WEAK_FUNC(sub_8208FA64);
PPC_FUNC_IMPL(__imp__sub_8208FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208FA68"))) PPC_WEAK_FUNC(sub_8208FA68);
PPC_FUNC_IMPL(__imp__sub_8208FA68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10
	ctx.r11.s64 = ctx.r4.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r5,1272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1272, ctx.r5.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r6,1276(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1276, ctx.r6.u32);
	// lwzx r4,r11,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r7,1280(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1280, ctx.r7.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r8,1284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1284, ctx.r8.u32);
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r9,1288(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1288, ctx.r9.u32);
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8208FAB8"))) PPC_WEAK_FUNC(sub_8208FAB8);
PPC_FUNC_IMPL(__imp__sub_8208FAB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FABC"))) PPC_WEAK_FUNC(sub_8208FABC);
PPC_FUNC_IMPL(__imp__sub_8208FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208FAC0"))) PPC_WEAK_FUNC(sub_8208FAC0);
PPC_FUNC_IMPL(__imp__sub_8208FAC0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,10
	ctx.r11.s64 = ctx.r4.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208fadc
	if (ctx.cr6.eq) goto loc_8208FADC;
	// lwz r3,1248(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1248);
	// blr 
	return;
loc_8208FADC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FAE4"))) PPC_WEAK_FUNC(sub_8208FAE4);
PPC_FUNC_IMPL(__imp__sub_8208FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208FAE8"))) PPC_WEAK_FUNC(sub_8208FAE8);
PPC_FUNC_IMPL(__imp__sub_8208FAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8208fb04
	if (ctx.cr6.eq) goto loc_8208FB04;
	// addi r10,r4,40
	ctx.r10.s64 = ctx.r4.s64 + 40;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8208FB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FB0C"))) PPC_WEAK_FUNC(sub_8208FB0C);
PPC_FUNC_IMPL(__imp__sub_8208FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208FB10"))) PPC_WEAK_FUNC(sub_8208FB10);
PPC_FUNC_IMPL(__imp__sub_8208FB10) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FB20"))) PPC_WEAK_FUNC(sub_8208FB20);
PPC_FUNC_IMPL(__imp__sub_8208FB20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,84
	ctx.r11.s64 = ctx.r4.s64 + 84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FB30"))) PPC_WEAK_FUNC(sub_8208FB30);
PPC_FUNC_IMPL(__imp__sub_8208FB30) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// blt cr6,0x8208fb60
	if (ctx.cr6.lt) goto loc_8208FB60;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// ori r10,r11,26215
	ctx.r10.u64 = ctx.r11.u64 | 26215;
	// mulhw r9,r5,r10
	ctx.r9.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_8208FB60:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,680
	ctx.r9.s64 = ctx.r11.s64 + 680;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,35028
	ctx.r7.u64 = ctx.r8.u64 | 35028;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FB98"))) PPC_WEAK_FUNC(sub_8208FB98);
PPC_FUNC_IMPL(__imp__sub_8208FB98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1216
	ctx.r3.s64 = ctx.r3.s64 + -1216;
	// b 0x8208fff0
	sub_8208FFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8208FBA0"))) PPC_WEAK_FUNC(sub_8208FBA0);
PPC_FUNC_IMPL(__imp__sub_8208FBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8208FBB8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8208fbe0
	if (ctx.cr6.eq) goto loc_8208FBE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8208FBCC;
	sub_8218AB00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8208FBE0:
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

__attribute__((alias("__imp__sub_8208FBF8"))) PPC_WEAK_FUNC(sub_8208FBF8);
PPC_FUNC_IMPL(__imp__sub_8208FBF8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// ld r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r7,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r7.u64);
	// ld r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r6,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// ld r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r5,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r5.u64);
	// ld r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// ld r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r10,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r10.u64);
	// ld r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r9,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r9.u64);
	// ld r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r8,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r8.u64);
	// ld r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r7,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// ld r6,96(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r6,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r6.u64);
	// ld r5,104(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r5,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r5.u64);
	// ld r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r11,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// ld r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r10,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r10.u64);
	// ld r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 128);
	// std r9,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r9.u64);
	// ld r8,136(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
	// std r8,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r8.u64);
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
	// ld r10,160(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 160);
	// std r10,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r10.u64);
	// ld r9,168(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// std r9,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r9.u64);
	// ld r8,176(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 176);
	// std r8,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r8.u64);
	// ld r7,184(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 184);
	// std r7,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r7.u64);
	// ld r6,192(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 192);
	// std r6,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r6.u64);
	// ld r5,200(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 200);
	// std r5,200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 200, ctx.r5.u64);
	// ld r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// std r11,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r11.u64);
	// ld r10,216(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 216);
	// std r10,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.r10.u64);
	// ld r9,224(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 224);
	// std r9,224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 224, ctx.r9.u64);
	// ld r8,232(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 232);
	// std r8,232(r3)
	PPC_STORE_U64(ctx.r3.u32 + 232, ctx.r8.u64);
	// ld r7,240(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 240);
	// std r7,240(r3)
	PPC_STORE_U64(ctx.r3.u32 + 240, ctx.r7.u64);
	// ld r6,248(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 248);
	// std r6,248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 248, ctx.r6.u64);
	// ld r5,256(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 256);
	// std r5,256(r3)
	PPC_STORE_U64(ctx.r3.u32 + 256, ctx.r5.u64);
	// ld r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 264);
	// std r11,264(r3)
	PPC_STORE_U64(ctx.r3.u32 + 264, ctx.r11.u64);
	// ld r10,272(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 272);
	// std r10,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, ctx.r10.u64);
	// ld r9,280(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 280);
	// std r9,280(r3)
	PPC_STORE_U64(ctx.r3.u32 + 280, ctx.r9.u64);
	// ld r8,288(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 288);
	// std r8,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, ctx.r8.u64);
	// ld r7,296(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 296);
	// std r7,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r7.u64);
	// ld r6,304(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 304);
	// std r6,304(r3)
	PPC_STORE_U64(ctx.r3.u32 + 304, ctx.r6.u64);
	// ld r5,312(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 312);
	// std r5,312(r3)
	PPC_STORE_U64(ctx.r3.u32 + 312, ctx.r5.u64);
	// ld r11,320(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 320);
	// std r11,320(r3)
	PPC_STORE_U64(ctx.r3.u32 + 320, ctx.r11.u64);
	// ld r10,328(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 328);
	// std r10,328(r3)
	PPC_STORE_U64(ctx.r3.u32 + 328, ctx.r10.u64);
	// ld r9,336(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 336);
	// std r9,336(r3)
	PPC_STORE_U64(ctx.r3.u32 + 336, ctx.r9.u64);
	// ld r8,344(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 344);
	// std r8,344(r3)
	PPC_STORE_U64(ctx.r3.u32 + 344, ctx.r8.u64);
	// ld r7,352(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 352);
	// std r7,352(r3)
	PPC_STORE_U64(ctx.r3.u32 + 352, ctx.r7.u64);
	// ld r6,360(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 360);
	// std r6,360(r3)
	PPC_STORE_U64(ctx.r3.u32 + 360, ctx.r6.u64);
	// ld r5,368(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 368);
	// std r5,368(r3)
	PPC_STORE_U64(ctx.r3.u32 + 368, ctx.r5.u64);
	// ld r11,376(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 376);
	// std r11,376(r3)
	PPC_STORE_U64(ctx.r3.u32 + 376, ctx.r11.u64);
	// ld r10,384(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 384);
	// std r10,384(r3)
	PPC_STORE_U64(ctx.r3.u32 + 384, ctx.r10.u64);
	// ld r9,392(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 392);
	// std r9,392(r3)
	PPC_STORE_U64(ctx.r3.u32 + 392, ctx.r9.u64);
	// ld r8,400(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 400);
	// std r8,400(r3)
	PPC_STORE_U64(ctx.r3.u32 + 400, ctx.r8.u64);
	// ld r7,408(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 408);
	// std r7,408(r3)
	PPC_STORE_U64(ctx.r3.u32 + 408, ctx.r7.u64);
	// ld r6,416(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 416);
	// std r6,416(r3)
	PPC_STORE_U64(ctx.r3.u32 + 416, ctx.r6.u64);
	// ld r5,424(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 424);
	// std r5,424(r3)
	PPC_STORE_U64(ctx.r3.u32 + 424, ctx.r5.u64);
	// ld r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 432);
	// std r11,432(r3)
	PPC_STORE_U64(ctx.r3.u32 + 432, ctx.r11.u64);
	// ld r10,440(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 440);
	// std r10,440(r3)
	PPC_STORE_U64(ctx.r3.u32 + 440, ctx.r10.u64);
	// ld r9,448(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 448);
	// std r9,448(r3)
	PPC_STORE_U64(ctx.r3.u32 + 448, ctx.r9.u64);
	// ld r8,456(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 456);
	// std r8,456(r3)
	PPC_STORE_U64(ctx.r3.u32 + 456, ctx.r8.u64);
	// ld r7,464(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 464);
	// std r7,464(r3)
	PPC_STORE_U64(ctx.r3.u32 + 464, ctx.r7.u64);
	// ld r6,472(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 472);
	// std r6,472(r3)
	PPC_STORE_U64(ctx.r3.u32 + 472, ctx.r6.u64);
	// ld r5,480(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 480);
	// std r5,480(r3)
	PPC_STORE_U64(ctx.r3.u32 + 480, ctx.r5.u64);
	// ld r11,488(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 488);
	// std r11,488(r3)
	PPC_STORE_U64(ctx.r3.u32 + 488, ctx.r11.u64);
	// ld r10,496(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 496);
	// std r10,496(r3)
	PPC_STORE_U64(ctx.r3.u32 + 496, ctx.r10.u64);
	// ld r9,504(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 504);
	// std r9,504(r3)
	PPC_STORE_U64(ctx.r3.u32 + 504, ctx.r9.u64);
	// ld r8,512(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 512);
	// std r8,512(r3)
	PPC_STORE_U64(ctx.r3.u32 + 512, ctx.r8.u64);
	// ld r7,520(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 520);
	// std r7,520(r3)
	PPC_STORE_U64(ctx.r3.u32 + 520, ctx.r7.u64);
	// ld r6,528(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 528);
	// std r6,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r6.u64);
	// ld r5,536(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 536);
	// std r5,536(r3)
	PPC_STORE_U64(ctx.r3.u32 + 536, ctx.r5.u64);
	// ld r11,544(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 544);
	// std r11,544(r3)
	PPC_STORE_U64(ctx.r3.u32 + 544, ctx.r11.u64);
	// ld r10,552(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 552);
	// std r10,552(r3)
	PPC_STORE_U64(ctx.r3.u32 + 552, ctx.r10.u64);
	// ld r9,560(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 560);
	// std r9,560(r3)
	PPC_STORE_U64(ctx.r3.u32 + 560, ctx.r9.u64);
	// ld r8,568(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 568);
	// std r8,568(r3)
	PPC_STORE_U64(ctx.r3.u32 + 568, ctx.r8.u64);
	// ld r7,576(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 576);
	// std r7,576(r3)
	PPC_STORE_U64(ctx.r3.u32 + 576, ctx.r7.u64);
	// ld r6,584(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 584);
	// std r6,584(r3)
	PPC_STORE_U64(ctx.r3.u32 + 584, ctx.r6.u64);
	// ld r5,592(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 592);
	// std r5,592(r3)
	PPC_STORE_U64(ctx.r3.u32 + 592, ctx.r5.u64);
	// ld r11,600(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 600);
	// std r11,600(r3)
	PPC_STORE_U64(ctx.r3.u32 + 600, ctx.r11.u64);
	// ld r10,608(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 608);
	// std r10,608(r3)
	PPC_STORE_U64(ctx.r3.u32 + 608, ctx.r10.u64);
	// ld r9,616(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 616);
	// std r9,616(r3)
	PPC_STORE_U64(ctx.r3.u32 + 616, ctx.r9.u64);
	// ld r8,624(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 624);
	// std r8,624(r3)
	PPC_STORE_U64(ctx.r3.u32 + 624, ctx.r8.u64);
	// ld r7,632(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 632);
	// std r7,632(r3)
	PPC_STORE_U64(ctx.r3.u32 + 632, ctx.r7.u64);
	// ld r6,640(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 640);
	// std r6,640(r3)
	PPC_STORE_U64(ctx.r3.u32 + 640, ctx.r6.u64);
	// ld r5,648(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 648);
	// std r5,648(r3)
	PPC_STORE_U64(ctx.r3.u32 + 648, ctx.r5.u64);
	// ld r11,656(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 656);
	// std r11,656(r3)
	PPC_STORE_U64(ctx.r3.u32 + 656, ctx.r11.u64);
	// ld r10,664(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 664);
	// std r10,664(r3)
	PPC_STORE_U64(ctx.r3.u32 + 664, ctx.r10.u64);
	// ld r9,672(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 672);
	// std r9,672(r3)
	PPC_STORE_U64(ctx.r3.u32 + 672, ctx.r9.u64);
	// ld r8,680(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 680);
	// std r8,680(r3)
	PPC_STORE_U64(ctx.r3.u32 + 680, ctx.r8.u64);
	// ld r7,688(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 688);
	// std r7,688(r3)
	PPC_STORE_U64(ctx.r3.u32 + 688, ctx.r7.u64);
	// ld r6,696(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 696);
	// std r6,696(r3)
	PPC_STORE_U64(ctx.r3.u32 + 696, ctx.r6.u64);
	// ld r5,704(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 704);
	// std r5,704(r3)
	PPC_STORE_U64(ctx.r3.u32 + 704, ctx.r5.u64);
	// ld r11,712(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 712);
	// std r11,712(r3)
	PPC_STORE_U64(ctx.r3.u32 + 712, ctx.r11.u64);
	// ld r10,720(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 720);
	// std r10,720(r3)
	PPC_STORE_U64(ctx.r3.u32 + 720, ctx.r10.u64);
	// ld r9,728(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 728);
	// std r9,728(r3)
	PPC_STORE_U64(ctx.r3.u32 + 728, ctx.r9.u64);
	// ld r8,736(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 736);
	// std r8,736(r3)
	PPC_STORE_U64(ctx.r3.u32 + 736, ctx.r8.u64);
	// ld r7,744(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 744);
	// std r7,744(r3)
	PPC_STORE_U64(ctx.r3.u32 + 744, ctx.r7.u64);
	// ld r6,752(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 752);
	// std r6,752(r3)
	PPC_STORE_U64(ctx.r3.u32 + 752, ctx.r6.u64);
	// ld r5,760(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 760);
	// std r5,760(r3)
	PPC_STORE_U64(ctx.r3.u32 + 760, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8208FF04"))) PPC_WEAK_FUNC(sub_8208FF04);
PPC_FUNC_IMPL(__imp__sub_8208FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8208FF08"))) PPC_WEAK_FUNC(sub_8208FF08);
PPC_FUNC_IMPL(__imp__sub_8208FF08) {
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
	// bl 0x820f0320
	ctx.lr = 0x8208FF28;
	sub_820F0320(ctx, base);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x82188378
	ctx.lr = 0x8208FF3C;
	sub_82188378(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r7,8012
	ctx.r4.s64 = ctx.r7.s64 + 8012;
	// stfs f0,1296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// addi r5,r8,8044
	ctx.r5.s64 = ctx.r8.s64 + 8044;
	// stw r11,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r11.u32);
	// lfs f13,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r4.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// stw r11,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// stw r11,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r11.u32);
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// stw r11,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r11.u32);
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
	// stw r11,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r11.u32);
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// sth r10,1292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1292, ctx.r10.u16);
	// sth r11,1294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1294, ctx.r11.u16);
	// stfs f0,1320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1320, temp.u32);
	// stfs f0,1316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stfs f0,1312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1312, temp.u32);
	// stfs f13,1324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1324, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82163ef8
	ctx.lr = 0x8208FFC8;
	sub_82163EF8(ctx, base);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82163ef8
	ctx.lr = 0x8208FFD4;
	sub_82163EF8(ctx, base);
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

__attribute__((alias("__imp__sub_8208FFF0"))) PPC_WEAK_FUNC(sub_8208FFF0);
PPC_FUNC_IMPL(__imp__sub_8208FFF0) {
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
	// addi r9,r11,8044
	ctx.r9.s64 = ctx.r11.s64 + 8044;
	// addi r8,r10,8012
	ctx.r8.s64 = ctx.r10.s64 + 8012;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,1216
	ctx.r3.s64 = ctx.r3.s64 + 1216;
	// stw r8,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821883b8
	ctx.lr = 0x8209002C;
	sub_821883B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef340
	ctx.lr = 0x82090034;
	sub_820EF340(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82090050
	if (ctx.cr6.eq) goto loc_82090050;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8209004C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82090050:
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

__attribute__((alias("__imp__sub_82090068"))) PPC_WEAK_FUNC(sub_82090068);
PPC_FUNC_IMPL(__imp__sub_82090068) {
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
	// lhz r11,1294(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1294);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820900b0
	if (ctx.cr6.eq) goto loc_820900B0;
	// ld r10,1312(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1312);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ld r8,1320(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1320);
	// addi r7,r3,1312
	ctx.r7.s64 = ctx.r3.s64 + 1312;
	// sth r9,1294(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1294, ctx.r9.u16);
	// std r10,416(r3)
	PPC_STORE_U64(ctx.r3.u32 + 416, ctx.r10.u64);
	// std r8,424(r3)
	PPC_STORE_U64(ctx.r3.u32 + 424, ctx.r8.u64);
loc_820900B0:
	// lhz r11,1294(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1294);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820900d4
	if (ctx.cr6.eq) goto loc_820900D4;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lfs f0,1296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// sth r11,1294(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1294, ctx.r11.u16);
loc_820900D4:
	// lwz r10,1272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82090160
	if (ctx.cr6.eq) goto loc_82090160;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,1276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r11,95
	ctx.r8.s64 = ctx.r11.s64 + 95;
	// lwz r7,1280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// stw r7,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r7.u32);
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r4,1284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// bl 0x820ef8f8
	ctx.lr = 0x82090114;
	sub_820EF8F8(ctx, base);
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82090140
	if (ctx.cr6.eq) goto loc_82090140;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,48(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// b 0x8209014c
	goto loc_8209014C;
loc_82090140:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
loc_8209014C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r30.u32);
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
loc_82090160:
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

__attribute__((alias("__imp__sub_82090178"))) PPC_WEAK_FUNC(sub_82090178);
PPC_FUNC_IMPL(__imp__sub_82090178) {
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
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82090220
	if (ctx.cr6.eq) goto loc_82090220;
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820901c4
	if (ctx.cr6.eq) goto loc_820901C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820901C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820901C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// bl 0x821b02c8
	ctx.lr = 0x820901D4;
	sub_821B02C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821aff78
	ctx.lr = 0x820901E0;
	sub_821AFF78(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r3,-19048(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x820901F0;
	sub_821A3138(ctx, base);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8209020C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,44(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82090220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82090220:
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

__attribute__((alias("__imp__sub_82090238"))) PPC_WEAK_FUNC(sub_82090238);
PPC_FUNC_IMPL(__imp__sub_82090238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82090240;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,21205
	ctx.r4.s64 = 21205;
	// lwz r21,4(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82090258;
	sub_8218A810(ctx, base);
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lis r9,3276
	ctx.r9.s64 = 214695936;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r25,r11,43690
	ctx.r25.u64 = ctx.r11.u64 | 43690;
	// li r23,-1
	ctx.r23.s64 = -1;
	// ori r24,r10,21845
	ctx.r24.u64 = ctx.r10.u64 | 21845;
	// ori r22,r9,52428
	ctx.r22.u64 = ctx.r9.u64 | 52428;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82090434
	if (ctx.cr6.eq) goto loc_82090434;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x8209028C;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090434
	if (ctx.cr6.eq) goto loc_82090434;
	// li r4,21205
	ctx.r4.s64 = 21205;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x820902A0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820902b8
	if (ctx.cr6.eq) goto loc_820902B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820902B4;
	sub_8218AC78(ctx, base);
	// b 0x820902bc
	goto loc_820902BC;
loc_820902B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820902BC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82080d68
	ctx.lr = 0x820902C4;
	sub_82080D68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,21205
	ctx.r4.s64 = 21205;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x820902D4;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820902f0
	if (ctx.cr6.eq) goto loc_820902F0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ad90
	ctx.lr = 0x820902F0;
	sub_8218AD90(ctx, base);
loc_820902F0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82080000
	ctx.lr = 0x820902F8;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090320
	if (ctx.cr6.eq) goto loc_82090320;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x8209030C;
	sub_822AA648(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// b 0x82090324
	goto loc_82090324;
loc_82090320:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82090324:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x82090334;
	sub_821847A8(ctx, base);
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82090384
	if (!ctx.cr6.gt) goto loc_82090384;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8209035c
	if (ctx.cr6.gt) goto loc_8209035C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82090360
	goto loc_82090360;
loc_8209035C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82090360:
	// bl 0x82080d68
	ctx.lr = 0x82090364;
	sub_82080D68(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82090380;
	sub_821847A8(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82090384:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x820903d0
	if (!ctx.cr6.gt) goto loc_820903D0;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x820903a8
	if (ctx.cr6.gt) goto loc_820903A8;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820903ac
	goto loc_820903AC;
loc_820903A8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820903AC:
	// bl 0x82080d68
	ctx.lr = 0x820903B0;
	sub_82080D68(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x820903CC;
	sub_821847A8(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_820903D0:
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82090414
	if (!ctx.cr6.gt) goto loc_82090414;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x820903f4
	if (ctx.cr6.gt) goto loc_820903F4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820903f8
	goto loc_820903F8;
loc_820903F4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820903F8:
	// bl 0x82080d68
	ctx.lr = 0x820903FC;
	sub_82080D68(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x82090414;
	sub_821847A8(ctx, base);
loc_82090414:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ori r10,r11,40164
	ctx.r10.u64 = ctx.r11.u64 | 40164;
	// stwx r29,r21,r10
	PPC_STORE_U32(ctx.r21.u32 + ctx.r10.u32, ctx.r29.u32);
	// beq cr6,0x82090434
	if (ctx.cr6.eq) goto loc_82090434;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x82090434;
	sub_82183E40(ctx, base);
loc_82090434:
	// li r4,21206
	ctx.r4.s64 = 21206;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82090440;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820905fc
	if (ctx.cr6.eq) goto loc_820905FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82090454;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820905fc
	if (ctx.cr6.eq) goto loc_820905FC;
	// li r4,21206
	ctx.r4.s64 = 21206;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82090468;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82090480
	if (ctx.cr6.eq) goto loc_82090480;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x8209047C;
	sub_8218AC78(ctx, base);
	// b 0x82090484
	goto loc_82090484;
loc_82090480:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82090484:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82080d68
	ctx.lr = 0x8209048C;
	sub_82080D68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,21206
	ctx.r4.s64 = 21206;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x8209049C;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820904b8
	if (ctx.cr6.eq) goto loc_820904B8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ad90
	ctx.lr = 0x820904B8;
	sub_8218AD90(ctx, base);
loc_820904B8:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82080000
	ctx.lr = 0x820904C0;
	sub_82080000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820904e8
	if (ctx.cr6.eq) goto loc_820904E8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x820904D4;
	sub_822AA648(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// b 0x820904ec
	goto loc_820904EC;
loc_820904E8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_820904EC:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821847a8
	ctx.lr = 0x820904FC;
	sub_821847A8(ctx, base);
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8209054c
	if (!ctx.cr6.gt) goto loc_8209054C;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82090524
	if (ctx.cr6.gt) goto loc_82090524;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82090528
	goto loc_82090528;
loc_82090524:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82090528:
	// bl 0x82080d68
	ctx.lr = 0x8209052C;
	sub_82080D68(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82090548;
	sub_821847A8(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_8209054C:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82090598
	if (!ctx.cr6.gt) goto loc_82090598;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82090570
	if (ctx.cr6.gt) goto loc_82090570;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82090574
	goto loc_82090574;
loc_82090570:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82090574:
	// bl 0x82080d68
	ctx.lr = 0x82090578;
	sub_82080D68(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82090594;
	sub_821847A8(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82090598:
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x820905dc
	if (!ctx.cr6.gt) goto loc_820905DC;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x820905bc
	if (ctx.cr6.gt) goto loc_820905BC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820905c0
	goto loc_820905C0;
loc_820905BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_820905C0:
	// bl 0x82080d68
	ctx.lr = 0x820905C4;
	sub_82080D68(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821847a8
	ctx.lr = 0x820905DC;
	sub_821847A8(ctx, base);
loc_820905DC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ori r10,r11,40168
	ctx.r10.u64 = ctx.r11.u64 | 40168;
	// stwx r29,r21,r10
	PPC_STORE_U32(ctx.r21.u32 + ctx.r10.u32, ctx.r29.u32);
	// beq cr6,0x820905fc
	if (ctx.cr6.eq) goto loc_820905FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x820905FC;
	sub_82183E40(ctx, base);
loc_820905FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82090604"))) PPC_WEAK_FUNC(sub_82090604);
PPC_FUNC_IMPL(__imp__sub_82090604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090608"))) PPC_WEAK_FUNC(sub_82090608);
PPC_FUNC_IMPL(__imp__sub_82090608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82090610;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-19760
	ctx.r31.s64 = ctx.r11.s64 + -19760;
	// lwz r11,-19696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19696);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820906b8
	if (!ctx.cr6.eq) goto loc_820906B8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,8160(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8160);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8064);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8164(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-19696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19696, ctx.r11.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_820906B8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x820906C4;
	sub_821A2548(ctx, base);
	// addis r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r30,r30,-26976
	ctx.r30.s64 = ctx.r30.s64 + -26976;
	// bl 0x82268330
	ctx.lr = 0x820906DC;
	sub_82268330(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82269510
	ctx.lr = 0x820906F4;
	sub_82269510(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r11,r10,760
	ctx.r11.s64 = ctx.r10.s64 + 760;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82090708:
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stfs f0,-8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,8(r28)
	// bl 0x821b0b98
	ctx.lr = 0x82090730;
	sub_821B0B98(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82090708
	if (ctx.cr6.lt) goto loc_82090708;
	// addis r31,r27,2
	ctx.r31.s64 = ctx.r27.s64 + 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r31,r31,-26972
	ctx.r31.s64 = ctx.r31.s64 + -26972;
	// bl 0x82268408
	ctx.lr = 0x82090760;
	sub_82268408(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82269560
	ctx.lr = 0x82090778;
	sub_82269560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822684b8
	ctx.lr = 0x820907A0;
	sub_822684B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820907A8"))) PPC_WEAK_FUNC(sub_820907A8);
PPC_FUNC_IMPL(__imp__sub_820907A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x820907B0;
	sub_82248750(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// bl 0x8215c078
	ctx.lr = 0x820907BC;
	sub_8215C078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820907C4;
	sub_82183078(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820907D0;
	sub_821837D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x820907DC;
	sub_821A2548(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r21,r15,580
	ctx.r21.s64 = ctx.r15.s64 + 580;
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
	// li r16,-1
	ctx.r16.s64 = -1;
	// ori r18,r10,65535
	ctx.r18.u64 = ctx.r10.u64 | 65535;
loc_820907F8:
	// lwz r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// lwzx r10,r17,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82090b40
	if (ctx.cr6.eq) goto loc_82090B40;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82090820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r20,r21,-4
	ctx.r20.s64 = ctx.r21.s64 + -4;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r31,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r31.u32);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82090844
	if (!ctx.cr6.gt) goto loc_82090844;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82090844:
	// bl 0x82183850
	ctx.lr = 0x82090848;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82090860
	if (ctx.cr6.eq) goto loc_82090860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8209085C;
	sub_82183448(ctx, base);
	// b 0x8209086c
	goto loc_8209086C;
loc_82090860:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209086C;
	sub_821845A0(ctx, base);
loc_8209086C:
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82090880
	if (!ctx.cr6.gt) goto loc_82090880;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_82090880:
	// bl 0x82183850
	ctx.lr = 0x82090884;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209089c
	if (ctx.cr6.eq) goto loc_8209089C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82090898;
	sub_82183448(ctx, base);
	// b 0x820908a8
	goto loc_820908A8;
loc_8209089C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820908A8;
	sub_821845A0(ctx, base);
loc_820908A8:
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820908bc
	if (!ctx.cr6.gt) goto loc_820908BC;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_820908BC:
	// bl 0x82183850
	ctx.lr = 0x820908C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820908d8
	if (ctx.cr6.eq) goto loc_820908D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820908D4;
	sub_82183448(ctx, base);
	// b 0x820908e4
	goto loc_820908E4;
loc_820908D8:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820908E4;
	sub_821845A0(ctx, base);
loc_820908E4:
	// addi r25,r21,4
	ctx.r25.s64 = ctx.r21.s64 + 4;
	// stw r3,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x820908fc
	if (!ctx.cr6.gt) goto loc_820908FC;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_820908FC:
	// bl 0x82183850
	ctx.lr = 0x82090900;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82090918
	if (ctx.cr6.eq) goto loc_82090918;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82090914;
	sub_82183448(ctx, base);
	// b 0x82090924
	goto loc_82090924;
loc_82090918:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82090924;
	sub_821845A0(ctx, base);
loc_82090924:
	// addi r23,r21,8
	ctx.r23.s64 = ctx.r21.s64 + 8;
	// stw r3,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r3.u32);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8209093c
	if (!ctx.cr6.gt) goto loc_8209093C;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_8209093C:
	// bl 0x82183850
	ctx.lr = 0x82090940;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82090958
	if (ctx.cr6.eq) goto loc_82090958;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82090954;
	sub_82183448(ctx, base);
	// b 0x82090964
	goto loc_82090964;
loc_82090958:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82090964;
	sub_821845A0(ctx, base);
loc_82090964:
	// stw r3,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r3.u32);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82090974;
	sub_822AA648(ctx, base);
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// ble cr6,0x82090984
	if (!ctx.cr6.gt) goto loc_82090984;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82090984:
	// bl 0x82183850
	ctx.lr = 0x82090988;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820909a0
	if (ctx.cr6.eq) goto loc_820909A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x8209099C;
	sub_82183448(ctx, base);
	// b 0x820909ac
	goto loc_820909AC;
loc_820909A0:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820909AC;
	sub_821845A0(ctx, base);
loc_820909AC:
	// stw r3,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x820909B8;
	sub_822AA648(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82090b40
	if (!ctx.cr6.gt) goto loc_82090B40;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_820909CC:
	// lwz r11,20(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20);
	// addi r31,r20,-4
	ctx.r31.s64 = ctx.r20.s64 + -4;
	// li r30,2
	ctx.r30.s64 = 2;
	// add r27,r26,r11
	ctx.r27.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mulli r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 * 28;
loc_820909E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r14,4(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268330
	ctx.lr = 0x820909F8;
	sub_82268330(ctx, base);
	// stwx r3,r28,r14
	PPC_STORE_U32(ctx.r28.u32 + ctx.r14.u32, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82269510
	ctx.lr = 0x82090A14;
	sub_82269510(ctx, base);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x822683f8
	ctx.lr = 0x82090A20;
	sub_822683F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820909e4
	if (!ctx.cr0.eq) goto loc_820909E4;
	// lwz r9,152(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// ble cr6,0x82090a64
	if (!ctx.cr6.gt) goto loc_82090A64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r11,12
	ctx.r11.s64 = 12;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82090A4C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82090a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82090A4C;
loc_82090A64:
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82268408
	ctx.lr = 0x82090A80;
	sub_82268408(ctx, base);
	// stwx r3,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82269560
	ctx.lr = 0x82090A9C;
	sub_82269560(ctx, base);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82090b1c
	if (!ctx.cr6.gt) goto loc_82090B1C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82090AB4:
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x82090ad4
	if (ctx.cr6.eq) goto loc_82090AD4;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r18,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r18.u16);
loc_82090AD4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82090b08
	if (ctx.cr6.eq) goto loc_82090B08;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82090AF4:
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lhzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r4,2(r9)
	// bdnz 0x82090af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82090AF4;
loc_82090B08:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82090ab4
	if (ctx.cr6.lt) goto loc_82090AB4;
loc_82090B1C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x822684b8
	ctx.lr = 0x82090B28;
	sub_822684B8(ctx, base);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,180
	ctx.r26.s64 = ctx.r26.s64 + 180;
	// stwx r30,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x820909cc
	if (!ctx.cr0.eq) goto loc_820909CC;
loc_82090B40:
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// addi r21,r21,28
	ctx.r21.s64 = ctx.r21.s64 + 28;
	// cmpwi cr6,r17,240
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 240, ctx.xer);
	// blt cr6,0x820907f8
	if (ctx.cr6.lt) goto loc_820907F8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821837d0
	ctx.lr = 0x82090B58;
	sub_821837D0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82090B60"))) PPC_WEAK_FUNC(sub_82090B60);
PPC_FUNC_IMPL(__imp__sub_82090B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82090B68;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r25,r3,592
	ctx.r25.s64 = ctx.r3.s64 + 592;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82090B7C:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82090cb0
	if (ctx.cr6.eq) goto loc_82090CB0;
	// lwzx r11,r24,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82090cb0
	if (ctx.cr6.eq) goto loc_82090CB0;
	// lwz r11,-8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// addi r28,r25,-16
	ctx.r28.s64 = ctx.r25.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82090bf4
	if (ctx.cr6.eq) goto loc_82090BF4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82090bdc
	if (!ctx.cr6.gt) goto loc_82090BDC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82090BB8:
	// lwz r11,-8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x821a8b20
	ctx.lr = 0x82090BC8;
	sub_821A8B20(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82090bb8
	if (ctx.cr6.lt) goto loc_82090BB8;
loc_82090BDC:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090bf0
	if (ctx.cr6.eq) goto loc_82090BF0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82090BF0;
	sub_82183E40(ctx, base);
loc_82090BF0:
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
loc_82090BF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82090c60
	if (ctx.cr6.eq) goto loc_82090C60;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82090C08:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82090c40
	if (!ctx.cr6.gt) goto loc_82090C40;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82090C1C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x821a8a80
	ctx.lr = 0x82090C2C;
	sub_821A8A80(ctx, base);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82090c1c
	if (ctx.cr6.lt) goto loc_82090C1C;
loc_82090C40:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090c54
	if (ctx.cr6.eq) goto loc_82090C54;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82090C54;
	sub_82183E40(ctx, base);
loc_82090C54:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stwu r26,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r29.u32 = ea;
	// bne 0x82090c08
	if (!ctx.cr0.eq) goto loc_82090C08;
loc_82090C60:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82090c98
	if (ctx.cr6.eq) goto loc_82090C98;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82090C78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090c8c
	if (ctx.cr6.eq) goto loc_82090C8C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82090C8C;
	sub_82183E40(ctx, base);
loc_82090C8C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r26,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r31.u32 = ea;
	// bne 0x82090c78
	if (!ctx.cr0.eq) goto loc_82090C78;
loc_82090C98:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090cac
	if (ctx.cr6.eq) goto loc_82090CAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82090CAC;
	sub_82183E40(ctx, base);
loc_82090CAC:
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
loc_82090CB0:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// cmpwi cr6,r24,240
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 240, ctx.xer);
	// blt cr6,0x82090b7c
	if (ctx.cr6.lt) goto loc_82090B7C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82090CC8"))) PPC_WEAK_FUNC(sub_82090CC8);
PPC_FUNC_IMPL(__imp__sub_82090CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82090CD0;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r21,r30,536
	ctx.r21.s64 = ctx.r30.s64 + 536;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82090CE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r22,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r22.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82090e1c
	if (ctx.cr6.eq) goto loc_82090E1C;
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82090d10
	if (ctx.cr6.eq) goto loc_82090D10;
	// lwz r10,512(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82090e1c
	if (ctx.cr6.eq) goto loc_82090E1C;
loc_82090D10:
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r10,508(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// addi r25,r30,592
	ctx.r25.s64 = ctx.r30.s64 + 592;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r24,r9,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82090D30:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82090dc8
	if (ctx.cr6.eq) goto loc_82090DC8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r25,-16
	ctx.r28.s64 = ctx.r25.s64 + -16;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82090dc8
	if (!ctx.cr6.gt) goto loc_82090DC8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82090D58:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82090db4
	if (ctx.cr6.lt) goto loc_82090DB4;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r27,5
	ctx.r10.s64 = ctx.r27.s64 + 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r29,r9,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82269510
	ctx.lr = 0x82090D88;
	sub_82269510(ctx, base);
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r7,532(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r27,516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 516, ctx.r27.u32);
	// beq cr6,0x82090db4
	if (ctx.cr6.eq) goto loc_82090DB4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82090db4
	if (ctx.cr6.lt) goto loc_82090DB4;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x822683f8
	ctx.lr = 0x82090DB4;
	sub_822683F8(ctx, base);
loc_82090DB4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82090d58
	if (ctx.cr6.lt) goto loc_82090D58;
loc_82090DC8:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// cmpwi cr6,r23,240
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 240, ctx.xer);
	// blt cr6,0x82090d30
	if (ctx.cr6.lt) goto loc_82090D30;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// stw r22,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r22.u32);
	// addi r11,r11,-26924
	ctx.r11.s64 = ctx.r11.s64 + -26924;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82090e18
	if (ctx.cr6.eq) goto loc_82090E18;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82090e1c
	if (!ctx.cr6.eq) goto loc_82090E1C;
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82090e1c
	if (!ctx.cr6.eq) goto loc_82090E1C;
	// stw r22,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r22.u32);
	// b 0x82090e1c
	goto loc_82090E1C;
loc_82090E18:
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_82090E1C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82090E24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82090E34"))) PPC_WEAK_FUNC(sub_82090E34);
PPC_FUNC_IMPL(__imp__sub_82090E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82090E38"))) PPC_WEAK_FUNC(sub_82090E38);
PPC_FUNC_IMPL(__imp__sub_82090E38) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82090ee0
	if (!ctx.cr6.eq) goto loc_82090EE0;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82090ee0
	if (!ctx.cr6.eq) goto loc_82090EE0;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// li r30,52
	ctx.r30.s64 = 52;
loc_82090E6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82090ed4
	if (ctx.cr6.eq) goto loc_82090ED4;
	// bl 0x82090068
	ctx.lr = 0x82090E7C;
	sub_82090068(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// addi r9,r11,95
	ctx.r9.s64 = ctx.r11.s64 + 95;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r6,r11,95
	ctx.r6.s64 = ctx.r11.s64 + 95;
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r3,388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// stw r11,388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 388, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,344(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// stw r9,1248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1248, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,348(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 348);
	// stw r7,1252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1252, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,352(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 352);
	// stw r5,1256(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1256, ctx.r5.u32);
loc_82090ED4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82090e6c
	if (!ctx.cr0.eq) goto loc_82090E6C;
loc_82090EE0:
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

__attribute__((alias("__imp__sub_82090EF8"))) PPC_WEAK_FUNC(sub_82090EF8);
PPC_FUNC_IMPL(__imp__sub_82090EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82090F00;
	sub_82248760(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82091030
	if (!ctx.cr6.gt) goto loc_82091030;
	// li r19,12
	ctx.r19.s64 = 12;
	// addi r23,r4,104
	ctx.r23.s64 = ctx.r4.s64 + 104;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r10,-8
	ctx.r27.s64 = ctx.r10.s64 + -8;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// li r20,32
	ctx.r20.s64 = 32;
	// li r21,48
	ctx.r21.s64 = 48;
	// li r22,16
	ctx.r22.s64 = 16;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r26,8
	ctx.r26.s64 = 8;
loc_82090F54:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r31,-12
	ctx.r10.s64 = ctx.r31.s64 + -12;
	// lbzu r11,8(r27)
	ea = 8 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lvx128 v0,r11,r20
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v63,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r19,r8
	temp.u32 = ctx.r19.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v60,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// lvlx128 v59,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v58,v61,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// lvx128 v13,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v57,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v56,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vspltw128 v7,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x55));
	// vspltw128 v8,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// vspltw128 v55,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0x55));
	// vspltw128 v6,v56,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xAA));
	// vspltw128 v10,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vspltw128 v9,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vmulfp128 v5,v55,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v7,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v6,v13,v5
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v9,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v54,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v53,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v52,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v51,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw128 v50,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw128 v49,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// stvewx128 v53,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r10,r25
	ea = (ctx.r10.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r10,r26
	ea = (ctx.r10.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r31,r25
	ea = (ctx.r31.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r31,r26
	ea = (ctx.r31.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,8(r30)
	// bl 0x821b0b98
	ctx.lr = 0x82091014;
	sub_821B0B98(ctx, base);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82090f54
	if (ctx.cr6.lt) goto loc_82090F54;
loc_82091030:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_82091038"))) PPC_WEAK_FUNC(sub_82091038);
PPC_FUNC_IMPL(__imp__sub_82091038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82091040;
	sub_82248760(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r30,108(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8209123c
	if (!ctx.cr6.gt) goto loc_8209123C;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r18,r4,104
	ctx.r18.s64 = ctx.r4.s64 + 104;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r19,12
	ctx.r19.s64 = 12;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r23,32
	ctx.r23.s64 = 32;
	// li r24,48
	ctx.r24.s64 = 48;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r22,8
	ctx.r22.s64 = 8;
loc_820910B0:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// vor128 v58,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// vor128 v59,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v60,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// vor128 v61,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lvrx128 v63,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r19,r9
	temp.u32 = ctx.r19.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v56,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v54,v57,v57,4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 12));
	// vor128 v63,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vor128 v62,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// beq cr6,0x82091164
	if (ctx.cr6.eq) goto loc_82091164;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v53,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v9,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// vspltw128 v6,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v8,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v5,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// lvx128 v0,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v53,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v8,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v6,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v5,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v59,v13,v51
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vmulfp128 v58,v0,v51
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v51.f32)));
loc_82091164:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820911d4
	if (ctx.cr6.eq) goto loc_820911D4;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v50,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v9,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v49,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// lvx128 v0,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v50,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v6,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v9,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v61,v13,v48
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vmulfp128 v60,v0,v48
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v48.f32)));
loc_820911D4:
	// vaddfp128 v47,v58,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v60.f32)));
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// vaddfp128 v46,v59,v61
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// vspltw128 v45,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// vspltw128 v44,v47,1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xAA));
	// vspltw128 v43,v47,2
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0x55));
	// vspltw128 v42,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// vspltw128 v41,v46,1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xAA));
	// vspltw128 v40,v46,2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0x55));
	// stvewx128 v45,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r22
	ea = (ctx.r11.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r31,r21
	ea = (ctx.r31.u32 + ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r31,r22
	ea = (ctx.r31.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,8(r28)
	// bl 0x821b0b98
	ctx.lr = 0x82091220;
	sub_821B0B98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820910b0
	if (ctx.cr6.lt) goto loc_820910B0;
loc_8209123C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_82091254"))) PPC_WEAK_FUNC(sub_82091254);
PPC_FUNC_IMPL(__imp__sub_82091254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091258"))) PPC_WEAK_FUNC(sub_82091258);
PPC_FUNC_IMPL(__imp__sub_82091258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82091260;
	sub_82248760(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r30,108(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820914ec
	if (!ctx.cr6.gt) goto loc_820914EC;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r19,12
	ctx.r19.s64 = 12;
	// addi r18,r4,104
	ctx.r18.s64 = ctx.r4.s64 + 104;
	// addi r31,r6,12
	ctx.r31.s64 = ctx.r6.s64 + 12;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r25,32
	ctx.r25.s64 = 32;
	// li r26,48
	ctx.r26.s64 = 48;
	// li r27,16
	ctx.r27.s64 = 16;
	// li r20,4
	ctx.r20.s64 = 4;
	// li r21,8
	ctx.r21.s64 = 8;
loc_820912D4:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// vor128 v56,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// vor128 v57,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// vor128 v58,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v59,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// vor128 v60,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// vor128 v61,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lvrx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r19,r10
	temp.u32 = ctx.r19.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v54,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// lvlx128 v53,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v52,v55,v55,4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 12));
	// vor128 v63,v62,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vor128 v62,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// beq cr6,0x82091394
	if (ctx.cr6.eq) goto loc_82091394;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v51,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v9,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// vspltw128 v6,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v8,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v5,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v49,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// lvx128 v0,r11,r25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v51,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v9,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v8,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v6,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v5,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v57,v13,v49
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vmulfp128 v56,v0,v49
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v49.f32)));
loc_82091394:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82091404
	if (ctx.cr6.eq) goto loc_82091404;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v48,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v9,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v47,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// lvx128 v0,r11,r25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v48,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v6,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v9,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v59,v13,v46
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vmulfp128 v58,v0,v46
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v46.f32)));
loc_82091404:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82091478
	if (ctx.cr6.eq) goto loc_82091478;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v45,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// fsubs f13,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v9,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v0,r11,r25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v45,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v43,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// vmaddfp v0,v8,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v6,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v9,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v60,v0,v43
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vmulfp128 v61,v13,v43
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v43.f32)));
loc_82091478:
	// vaddfp128 v42,v56,v58
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v42.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v58.f32)));
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// vaddfp128 v41,v57,v59
	simde_mm_store_ps(ctx.v41.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v59.f32)));
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// vaddfp128 v40,v42,v60
	simde_mm_store_ps(ctx.v40.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v39,v41,v61
	simde_mm_store_ps(ctx.v39.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v38,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vspltw128 v37,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// vspltw128 v36,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// vspltw128 v35,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// vspltw128 v34,v39,1
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xAA));
	// vspltw128 v33,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0x55));
	// stvewx128 v38,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v35,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r31,r20
	ea = (ctx.r31.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v33,r31,r21
	ea = (ctx.r31.u32 + ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v33.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,8(r28)
	// bl 0x821b0b98
	ctx.lr = 0x820914CC;
	sub_821B0B98(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820912d4
	if (ctx.cr6.lt) goto loc_820912D4;
loc_820914EC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_82091504"))) PPC_WEAK_FUNC(sub_82091504);
PPC_FUNC_IMPL(__imp__sub_82091504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091508"))) PPC_WEAK_FUNC(sub_82091508);
PPC_FUNC_IMPL(__imp__sub_82091508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82091510;
	sub_82248760(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r31,108(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82091824
	if (!ctx.cr6.gt) goto loc_82091824;
	// addi r24,r11,-4
	ctx.r24.s64 = ctx.r11.s64 + -4;
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r19,12
	ctx.r19.s64 = 12;
	// addi r18,r4,104
	ctx.r18.s64 = ctx.r4.s64 + 104;
	// addi r30,r6,12
	ctx.r30.s64 = ctx.r6.s64 + 12;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r27,32
	ctx.r27.s64 = 32;
	// li r28,48
	ctx.r28.s64 = 48;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r20,4
	ctx.r20.s64 = 4;
	// li r21,8
	ctx.r21.s64 = 8;
loc_82091584:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// vor128 v54,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// vor128 v55,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// vor128 v56,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v57,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// vor128 v58,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// vor128 v59,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// vor128 v60,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// vor128 v61,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lvrx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r19,r10
	temp.u32 = ctx.r19.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi128 v52,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// lvlx128 v51,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v50,v53,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// vor128 v63,v62,v52
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v62,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// beq cr6,0x82091650
	if (ctx.cr6.eq) goto loc_82091650;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v49,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v10,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vspltw128 v7,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v9,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// vspltw128 v5,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v6,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v47,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// lvx128 v0,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v8,v49,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v10,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v9,v13,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v7,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v6,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v5,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v55,v13,v47
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmulfp128 v54,v0,v47
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v47.f32)));
loc_82091650:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820916c0
	if (ctx.cr6.eq) goto loc_820916C0;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v46,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v9,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v45,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v44,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// lvx128 v0,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v46,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v6,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v9,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v57,v13,v44
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v56,v0,v44
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v44.f32)));
loc_820916C0:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82091730
	if (ctx.cr6.eq) goto loc_82091730;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v43,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vspltw128 v9,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v41,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// lvx128 v0,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v43,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v6,v13,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v9,v12,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v59,v13,v41
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmulfp128 v58,v0,v41
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v41.f32)));
loc_82091730:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820917a8
	if (ctx.cr6.eq) goto loc_820917A8;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// vspltw128 v40,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v5,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// fsubs f12,f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v6,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vspltw128 v10,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v9,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lvx128 v0,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v7,v40,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v5,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r11,r29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsubs f11,f12,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// vmaddfp v11,v6,v13,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fsubs f10,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v39,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v38,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// vmaddfp v13,v9,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v61,v13,v38
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmulfp128 v60,v0,v38
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v38.f32)));
loc_820917A8:
	// vaddfp128 v37,v54,v56
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v37.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v56.f32)));
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// vaddfp128 v36,v55,v57
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v57.f32)));
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// vaddfp128 v35,v37,v58
	simde_mm_store_ps(ctx.v35.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v34,v36,v59
	simde_mm_store_ps(ctx.v34.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vaddfp128 v33,v35,v60
	simde_mm_store_ps(ctx.v33.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v32,v34,v61
	simde_mm_store_ps(ctx.v32.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v63,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// vspltw128 v62,v33,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xAA));
	// vspltw128 v61,v33,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0x55));
	// vspltw128 v60,v32,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0xFF));
	// vspltw128 v59,v32,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0xAA));
	// vspltw128 v58,v32,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), 0x55));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r20
	ea = (ctx.r11.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r11,r21
	ea = (ctx.r11.u32 + ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r30,r20
	ea = (ctx.r30.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r30,r21
	ea = (ctx.r30.u32 + ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,4(r24)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f2,8(r24)
	// bl 0x821b0b98
	ctx.lr = 0x82091804;
	sub_821B0B98(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82091584
	if (ctx.cr6.lt) goto loc_82091584;
loc_82091824:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_8209183C"))) PPC_WEAK_FUNC(sub_8209183C);
PPC_FUNC_IMPL(__imp__sub_8209183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091840"))) PPC_WEAK_FUNC(sub_82091840);
PPC_FUNC_IMPL(__imp__sub_82091840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82091848;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,25144
	ctx.r22.s64 = 25144;
loc_82091858:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r26,r11,r23
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820918f4
	if (ctx.cr6.eq) goto loc_820918F4;
	// addi r25,r23,80
	ctx.r25.s64 = ctx.r23.s64 + 80;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82091874:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820918e4
	if (ctx.cr6.eq) goto loc_820918E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820918e4
	if (!ctx.cr6.gt) goto loc_820918E4;
loc_820918A8:
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820918C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821b0218
	ctx.lr = 0x820918CC;
	sub_821B0218(ctx, base);
	// add r9,r28,r31
	ctx.r9.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// stwx r3,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r3.u32);
	// blt cr6,0x820918a8
	if (ctx.cr6.lt) goto loc_820918A8;
loc_820918E4:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,80
	ctx.r25.s64 = ctx.r25.s64 + 80;
	// addi r28,r28,440
	ctx.r28.s64 = ctx.r28.s64 + 440;
	// bne 0x82091874
	if (!ctx.cr0.eq) goto loc_82091874;
loc_820918F4:
	// addi r22,r22,22
	ctx.r22.s64 = ctx.r22.s64 + 22;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r22,25584
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 25584, ctx.xer);
	// blt cr6,0x82091858
	if (ctx.cr6.lt) goto loc_82091858;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8209190C"))) PPC_WEAK_FUNC(sub_8209190C);
PPC_FUNC_IMPL(__imp__sub_8209190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091910"))) PPC_WEAK_FUNC(sub_82091910);
PPC_FUNC_IMPL(__imp__sub_82091910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82091918;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,25584
	ctx.r28.s64 = 25584;
	// li r27,160
	ctx.r27.s64 = 160;
	// addi r25,r3,96
	ctx.r25.s64 = ctx.r3.s64 + 96;
loc_82091930:
	// lwzx r29,r25,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82091bb8
	if (ctx.cr6.eq) goto loc_82091BB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,512(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82091bb8
	if (ctx.cr6.lt) goto loc_82091BB8;
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82091980
	if (!ctx.cr6.eq) goto loc_82091980;
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// rlwinm r5,r3,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r4,184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82091980;
	sub_82087AB0(ctx, base);
loc_82091980:
	// addi r7,r28,-25144
	ctx.r7.s64 = ctx.r28.s64 + -25144;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82091988:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82091a24
	if (!ctx.cr6.gt) goto loc_82091A24;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82091998:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r11,r11,24704
	ctx.r11.s64 = ctx.r11.s64 + 24704;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82091a18
	if (ctx.cr6.eq) goto loc_82091A18;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,572(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r4,r11,-25584
	ctx.r4.s64 = ctx.r11.s64 + -25584;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r4,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r4,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r4.u64);
	// ld r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r3,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r3.u64);
	// ld r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// ld r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r4,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r4.u64);
	// ld r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r3,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r3.u64);
loc_82091A18:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x82091998
	if (!ctx.cr0.eq) goto loc_82091998;
loc_82091A24:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,440
	ctx.r7.s64 = ctx.r7.s64 + 440;
	// bne 0x82091988
	if (!ctx.cr0.eq) goto loc_82091988;
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82091bb8
	if (!ctx.cr6.eq) goto loc_82091BB8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82091bb8
	if (ctx.cr6.eq) goto loc_82091BB8;
	// lwzx r31,r27,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82091bb8
	if (ctx.cr6.eq) goto loc_82091BB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82091b9c
	if (!ctx.cr6.gt) goto loc_82091B9C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82091A78:
	// add r11,r28,r7
	ctx.r11.u64 = ctx.r28.u64 + ctx.r7.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82091b8c
	if (ctx.cr6.eq) goto loc_82091B8C;
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r4,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r4.u64);
	// ld r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r6,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r6.u64);
	// ld r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r5,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r5.u64);
	// ld r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r4,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r4.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r11.u64);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r6,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r6.u64);
	// ld r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// ld r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r4,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r4.u64);
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
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r10,184(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// ld r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r4,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r4.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
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
loc_82091B8C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// bne 0x82091a78
	if (!ctx.cr0.eq) goto loc_82091A78;
loc_82091B9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82091BB8:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,1408
	ctx.r26.s64 = ctx.r26.s64 + 1408;
	// addi r28,r28,22
	ctx.r28.s64 = ctx.r28.s64 + 22;
	// cmpwi cr6,r27,240
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 240, ctx.xer);
	// blt cr6,0x82091930
	if (ctx.cr6.lt) goto loc_82091930;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82091BD4"))) PPC_WEAK_FUNC(sub_82091BD4);
PPC_FUNC_IMPL(__imp__sub_82091BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82091BD8"))) PPC_WEAK_FUNC(sub_82091BD8);
PPC_FUNC_IMPL(__imp__sub_82091BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82091BE0;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r24,r3,336
	ctx.r24.s64 = ctx.r3.s64 + 336;
	// ori r26,r10,26832
	ctx.r26.u64 = ctx.r10.u64 | 26832;
	// ori r27,r9,30928
	ctx.r27.u64 = ctx.r9.u64 | 30928;
	// addi r25,r11,8068
	ctx.r25.s64 = ctx.r11.s64 + 8068;
loc_82091C0C:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r23,32
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 32, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82091ccc
	if (ctx.cr6.eq) goto loc_82091CCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r11,r9,1408
	ctx.r11.s64 = ctx.r9.s64 * 1408;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,2256
	ctx.r28.s64 = ctx.r11.s64 + 2256;
	// bne cr6,0x82091c64
	if (!ctx.cr6.eq) goto loc_82091C64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r22,176(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r5,r3,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82091C64;
	sub_82087AB0(ctx, base);
loc_82091C64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + ctx.r26.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82091C84;
	sub_82087AB0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82091C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82091ccc
	if (ctx.cr6.eq) goto loc_82091CCC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// li r5,64
	ctx.r5.s64 = 64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r3,r8,r27
	ctx.r3.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82091CCC;
	sub_82087AB0(ctx, base);
loc_82091CCC:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// blt cr6,0x82091c0c
	if (ctx.cr6.lt) goto loc_82091C0C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82091CE8"))) PPC_WEAK_FUNC(sub_82091CE8);
PPC_FUNC_IMPL(__imp__sub_82091CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-5052
	ctx.r10.s64 = ctx.r11.s64 + -5052;
loc_82091CF4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82091d18
	if (ctx.cr6.eq) goto loc_82091D18;
	// lwz r8,1956(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82091d18
	if (!ctx.cr6.eq) goto loc_82091D18;
	// lbz r11,570(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 570);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82091d30
	if (ctx.cr6.eq) goto loc_82091D30;
loc_82091D18:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,36
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 36, ctx.xer);
	// blt cr6,0x82091cf4
	if (ctx.cr6.lt) goto loc_82091CF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82091D30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82091D38"))) PPC_WEAK_FUNC(sub_82091D38);
PPC_FUNC_IMPL(__imp__sub_82091D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82091D40;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,20000
	ctx.r11.s64 = 20000;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,20040
	ctx.r10.s64 = 20040;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,20080
	ctx.r9.s64 = 20080;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r20,-32178
	ctx.r20.s64 = -2108817408;
loc_82091D78:
	// lwzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r23,0
	ctx.r23.s64 = 0;
loc_82091D80:
	// add r11,r21,r23
	ctx.r11.u64 = ctx.r21.u64 + ctx.r23.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x82091dc0
	if (!ctx.cr6.eq) goto loc_82091DC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82091D9C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82091db8
	if (ctx.cr6.eq) goto loc_82091DB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82091DB0;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82091dc0
	if (!ctx.cr6.eq) goto loc_82091DC0;
loc_82091DB8:
	// addi r11,r23,20040
	ctx.r11.s64 = ctx.r23.s64 + 20040;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
loc_82091DC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82091DCC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82091fd0
	if (ctx.cr6.eq) goto loc_82091FD0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82091DE0;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82091fd0
	if (ctx.cr6.eq) goto loc_82091FD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82091DF4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82091e10
	if (ctx.cr6.eq) goto loc_82091E10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82091E08;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82091e14
	goto loc_82091E14;
loc_82091E10:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82091E14:
	// bl 0x82182e90
	ctx.lr = 0x82091E18;
	sub_82182E90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82091E20;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82091E2C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82091E30;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82091E3C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82091E44;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82091E48;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82091e60
	if (ctx.cr6.eq) goto loc_82091E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x82091E5C;
	sub_82183448(ctx, base);
	// b 0x82091e6c
	goto loc_82091E6C;
loc_82091E60:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82091E6C;
	sub_821845A0(ctx, base);
loc_82091E6C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82091e84
	if (ctx.cr6.lt) goto loc_82091E84;
	// bne cr6,0x82091e8c
	if (!ctx.cr6.eq) goto loc_82091E8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82091e88
	goto loc_82091E88;
loc_82091E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82091E88:
	// bl 0x821830f8
	ctx.lr = 0x82091E8C;
	sub_821830F8(ctx, base);
loc_82091E8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82091E94;
	sub_821837D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82091EA0;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82091ebc
	if (ctx.cr6.eq) goto loc_82091EBC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ad90
	ctx.lr = 0x82091EBC;
	sub_8218AD90(ctx, base);
loc_82091EBC:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x821b02c8
	ctx.lr = 0x82091ED4;
	sub_821B02C8(ctx, base);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821affd8
	ctx.lr = 0x82091EE0;
	sub_821AFFD8(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82091EF4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82091f10
	if (ctx.cr6.eq) goto loc_82091F10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82091F08;
	sub_8218AC78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82091f14
	goto loc_82091F14;
loc_82091F10:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82091F14:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82091F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821aff78
	ctx.lr = 0x82091F34;
	sub_821AFF78(ctx, base);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r3,-19048(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x82091F44;
	sub_821A3138(ctx, base);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r31,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82091F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82091f8c
	if (ctx.cr6.eq) goto loc_82091F8C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82091F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82091F8C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82091FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82091FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82091fd0
	if (ctx.cr6.eq) goto loc_82091FD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82183e40
	ctx.lr = 0x82091FD0;
	sub_82183E40(ctx, base);
loc_82091FD0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 20, ctx.xer);
	// blt cr6,0x82091d80
	if (ctx.cr6.lt) goto loc_82091D80;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82091d78
	if (ctx.cr6.lt) goto loc_82091D78;
	// li r4,20200
	ctx.r4.s64 = 20200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82091FFC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82092148
	if (ctx.cr6.eq) goto loc_82092148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82092010;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092148
	if (ctx.cr6.eq) goto loc_82092148;
	// li r4,20200
	ctx.r4.s64 = 20200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x82092024;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82092040
	if (ctx.cr6.eq) goto loc_82092040;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82092038;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82092044
	goto loc_82092044;
loc_82092040:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82092044:
	// bl 0x82182e90
	ctx.lr = 0x82092048;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82092050;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209205C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82092060;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x8209206C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82092074;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82092078;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82092090
	if (ctx.cr6.eq) goto loc_82092090;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8209208C;
	sub_82183448(ctx, base);
	// b 0x8209209c
	goto loc_8209209C;
loc_82092090:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8209209C;
	sub_821845A0(ctx, base);
loc_8209209C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,20200
	ctx.r4.s64 = 20200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x820920AC;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820920c8
	if (ctx.cr6.eq) goto loc_820920C8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ad90
	ctx.lr = 0x820920C8;
	sub_8218AD90(ctx, base);
loc_820920C8:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x820920dc
	if (ctx.cr6.lt) goto loc_820920DC;
	// bne cr6,0x820920e4
	if (!ctx.cr6.eq) goto loc_820920E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820920e0
	goto loc_820920E0;
loc_820920DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820920E0:
	// bl 0x821830f8
	ctx.lr = 0x820920E4;
	sub_821830F8(ctx, base);
loc_820920E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x820920EC;
	sub_821837D0(ctx, base);
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209210c
	if (ctx.cr6.eq) goto loc_8209210C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209210C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 464, ctx.r11.u32);
	// bl 0x821affd8
	ctx.lr = 0x82092118;
	sub_821AFFD8(ctx, base);
	// stw r3,464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 464, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82092134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82092148
	if (ctx.cr6.eq) goto loc_82092148;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82092148;
	sub_82183E40(ctx, base);
loc_82092148:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8209214C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82090178
	ctx.lr = 0x82092158;
	sub_82090178(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x8209214c
	if (ctx.cr6.lt) goto loc_8209214C;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8209216C"))) PPC_WEAK_FUNC(sub_8209216C);
PPC_FUNC_IMPL(__imp__sub_8209216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092170"))) PPC_WEAK_FUNC(sub_82092170);
PPC_FUNC_IMPL(__imp__sub_82092170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x820907a8
	ctx.lr = 0x82092188;
	sub_820907A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82090608
	ctx.lr = 0x82092190;
	sub_82090608(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820921AC"))) PPC_WEAK_FUNC(sub_820921AC);
PPC_FUNC_IMPL(__imp__sub_820921AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820921B0"))) PPC_WEAK_FUNC(sub_820921B0);
PPC_FUNC_IMPL(__imp__sub_820921B0) {
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
	// addi r30,r31,536
	ctx.r30.s64 = ctx.r31.s64 + 536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x820921D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r11,-8196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8196);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r6,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r6.u32);
	// lwz r11,-8196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8196);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r5,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r5.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82090e38
	ctx.lr = 0x8209220C;
	sub_82090E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82092214;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82092234"))) PPC_WEAK_FUNC(sub_82092234);
PPC_FUNC_IMPL(__imp__sub_82092234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092238"))) PPC_WEAK_FUNC(sub_82092238);
PPC_FUNC_IMPL(__imp__sub_82092238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82092240;
	sub_82248760(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820924dc
	if (ctx.cr6.eq) goto loc_820924DC;
	// addi r20,r31,536
	ctx.r20.s64 = ctx.r31.s64 + 536;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82092260;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820922d0
	if (!ctx.cr6.eq) goto loc_820922D0;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820922d0
	if (!ctx.cr6.eq) goto loc_820922D0;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// li r29,20
	ctx.r29.s64 = 20;
loc_82092288:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209229c
	if (ctx.cr6.eq) goto loc_8209229C;
	// addi r3,r11,1216
	ctx.r3.s64 = ctx.r11.s64 + 1216;
	// bl 0x82188608
	ctx.lr = 0x8209229C;
	sub_82188608(ctx, base);
loc_8209229C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82092288
	if (!ctx.cr0.eq) goto loc_82092288;
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// li r29,32
	ctx.r29.s64 = 32;
loc_820922B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820922c4
	if (ctx.cr6.eq) goto loc_820922C4;
	// addi r3,r11,1216
	ctx.r3.s64 = ctx.r11.s64 + 1216;
	// bl 0x82188608
	ctx.lr = 0x820922C4;
	sub_82188608(ctx, base);
loc_820922C4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820922b0
	if (!ctx.cr0.eq) goto loc_820922B0;
loc_820922D0:
	// addis r21,r31,2
	ctx.r21.s64 = ctx.r31.s64 + 131072;
	// addi r21,r21,-26924
	ctx.r21.s64 = ctx.r21.s64 + -26924;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820924cc
	if (ctx.cr6.lt) goto loc_820924CC;
	// beq cr6,0x820922f8
	if (ctx.cr6.eq) goto loc_820922F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82092300
	if (!ctx.cr6.lt) goto loc_82092300;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820922fc
	goto loc_820922FC;
loc_820922F8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_820922FC:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82092300:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820924cc
	if (ctx.cr6.eq) goto loc_820924CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091910
	ctx.lr = 0x82092314;
	sub_82091910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091bd8
	ctx.lr = 0x8209231C;
	sub_82091BD8(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r23,r31,576
	ctx.r23.s64 = ctx.r31.s64 + 576;
	// addi r27,r11,-19680
	ctx.r27.s64 = ctx.r11.s64 + -19680;
loc_82092330:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r24,r22,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8209249c
	if (ctx.cr6.eq) goto loc_8209249C;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8209249c
	if (!ctx.cr6.gt) goto loc_8209249C;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,3
	ctx.r30.s64 = 3;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8209235C:
	// lwz r3,188(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 188);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,92(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82092410
	if (!ctx.cr6.gt) goto loc_82092410;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
loc_82092390:
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,572(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r19,r11,16
	ctx.r19.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r11,-32
	ctx.r18.s64 = ctx.r11.s64 + -32;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r10,-64
	ctx.r7.s64 = ctx.r10.s64 + -64;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// ld r6,-64(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -64);
	// std r6,-32(r11)
	PPC_STORE_U64(ctx.r11.u32 + -32, ctx.r6.u64);
	// ld r7,-56(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + -56);
	// std r7,-24(r11)
	PPC_STORE_U64(ctx.r11.u32 + -24, ctx.r7.u64);
	// ld r6,-48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -48);
	// std r6,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r6.u64);
	// ld r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + -40);
	// std r7,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r7.u64);
	// ld r6,-32(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -32);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r7,-24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// ld r6,-16(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r6,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r6.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r19)
	PPC_STORE_U64(ctx.r19.u32 + 8, ctx.r10.u64);
	// bne 0x82092390
	if (!ctx.cr0.eq) goto loc_82092390;
loc_82092410:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// lwzx r6,r9,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82092488
	if (ctx.cr6.eq) goto loc_82092488;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82092488
	if (ctx.cr6.gt) goto loc_82092488;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8209245c
	// bdzf 4*cr6+eq,0x8209246c
	// bne cr6,0x8209247c
	if (!ctx.cr6.eq) goto loc_8209247C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82090ef8
	ctx.lr = 0x82092458;
	sub_82090EF8(ctx, base);
	// b 0x82092488
	goto loc_82092488;
loc_8209245C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091038
	ctx.lr = 0x82092468;
	sub_82091038(ctx, base);
	// b 0x82092488
	goto loc_82092488;
loc_8209246C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091258
	ctx.lr = 0x82092478;
	sub_82091258(ctx, base);
	// b 0x82092488
	goto loc_82092488;
loc_8209247C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82091508
	ctx.lr = 0x82092488;
	sub_82091508(ctx, base);
loc_82092488:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,180
	ctx.r28.s64 = ctx.r28.s64 + 180;
	// addi r30,r30,45
	ctx.r30.s64 = ctx.r30.s64 + 45;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8209235c
	if (!ctx.cr0.eq) goto loc_8209235C;
loc_8209249C:
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
	// addi r29,r29,22
	ctx.r29.s64 = ctx.r29.s64 + 22;
	// cmpwi cr6,r22,240
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 240, ctx.xer);
	// blt cr6,0x82092330
	if (ctx.cr6.lt) goto loc_82092330;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x82095028
	ctx.lr = 0x820924B8;
	sub_82095028(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820924cc
	if (!ctx.cr6.eq) goto loc_820924CC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_820924CC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x820924D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r20)
	PPC_STORE_U32(ctx.r20.u32 + 28, ctx.r11.u32);
loc_820924DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_820924E4"))) PPC_WEAK_FUNC(sub_820924E4);
PPC_FUNC_IMPL(__imp__sub_820924E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820924E8"))) PPC_WEAK_FUNC(sub_820924E8);
PPC_FUNC_IMPL(__imp__sub_820924E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,3272
	ctx.r4.s64 = ctx.r10.s64 + 3272;
	// lwz r3,-7484(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7484);
	// bl 0x821adf18
	ctx.lr = 0x82092514;
	sub_821ADF18(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r8,8760
	ctx.r5.s64 = ctx.r8.s64 + 8760;
	// lwz r3,-8196(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8196);
	// addi r4,r4,8624
	ctx.r4.s64 = ctx.r4.s64 + 8624;
	// bl 0x821ac0b8
	ctx.lr = 0x82092538;
	sub_821AC0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209254C"))) PPC_WEAK_FUNC(sub_8209254C);
PPC_FUNC_IMPL(__imp__sub_8209254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092550"))) PPC_WEAK_FUNC(sub_82092550);
PPC_FUNC_IMPL(__imp__sub_82092550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82092558;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,38560
	ctx.r10.u64 = ctx.r11.u64 | 38560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x821a8a80
	ctx.lr = 0x82092574;
	sub_821A8A80(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,38564
	ctx.r8.u64 = ctx.r9.u64 | 38564;
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x821a8b20
	ctx.lr = 0x82092588;
	sub_821A8B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82090b60
	ctx.lr = 0x82092590;
	sub_82090B60(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82092598:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8209259C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r29,r26,r28
	ctx.r29.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820925e4
	if (ctx.cr6.eq) goto loc_820925E4;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820925dc
	if (ctx.cr6.eq) goto loc_820925DC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820925dc
	if (ctx.cr6.eq) goto loc_820925DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820925DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820925DC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
loc_820925E4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82092628
	if (ctx.cr6.eq) goto loc_82092628;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82092620
	if (ctx.cr6.eq) goto loc_82092620;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092620
	if (ctx.cr6.eq) goto loc_82092620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82092620:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
loc_82092628:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x8209259c
	if (ctx.cr6.lt) goto loc_8209259C;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// cmpwi cr6,r26,60
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 60, ctx.xer);
	// blt cr6,0x82092598
	if (ctx.cr6.lt) goto loc_82092598;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// li r29,52
	ctx.r29.s64 = 52;
loc_82092648:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092668
	if (ctx.cr6.eq) goto loc_82092668;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82092668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82092668:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// bne 0x82092648
	if (!ctx.cr0.eq) goto loc_82092648;
	// addi r31,r30,252
	ctx.r31.s64 = ctx.r30.s64 + 252;
	// li r29,52
	ctx.r29.s64 = 52;
loc_8209267C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209269c
	if (ctx.cr6.eq) goto loc_8209269C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209269C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209269C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r31.u32 = ea;
	// bne 0x8209267c
	if (!ctx.cr0.eq) goto loc_8209267C;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820926c8
	if (ctx.cr6.eq) goto loc_820926C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820926C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820926C8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r27,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820926e0
	if (ctx.cr6.eq) goto loc_820926E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820926E0;
	sub_82183E40(ctx, base);
loc_820926E0:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820926f8
	if (ctx.cr6.eq) goto loc_820926F8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820926F8;
	sub_82183E40(ctx, base);
loc_820926F8:
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092710
	if (ctx.cr6.eq) goto loc_82092710;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092710;
	sub_82183E40(ctx, base);
loc_82092710:
	// lwz r3,468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// stw r27,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092728
	if (ctx.cr6.eq) goto loc_82092728;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092728;
	sub_82183E40(ctx, base);
loc_82092728:
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stw r27,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092740
	if (ctx.cr6.eq) goto loc_82092740;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092740;
	sub_82183E40(ctx, base);
loc_82092740:
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r27,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092758
	if (ctx.cr6.eq) goto loc_82092758;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092758;
	sub_82183E40(ctx, base);
loc_82092758:
	// lwz r3,480(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// stw r27,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092770
	if (ctx.cr6.eq) goto loc_82092770;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092770;
	sub_82183E40(ctx, base);
loc_82092770:
	// addis r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 131072;
	// stw r27,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r27.u32);
	// addi r28,r28,-25372
	ctx.r28.s64 = ctx.r28.s64 + -25372;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820927dc
	if (ctx.cr6.eq) goto loc_820927DC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209279c
	if (ctx.cr6.eq) goto loc_8209279C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209279C;
	sub_82183E40(ctx, base);
loc_8209279C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820927b4
	if (ctx.cr6.eq) goto loc_820927B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820927B4;
	sub_82183E40(ctx, base);
loc_820927B4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820927cc
	if (ctx.cr6.eq) goto loc_820927CC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820927CC;
	sub_82183E40(ctx, base);
loc_820927CC:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820927DC;
	sub_82183E40(ctx, base);
loc_820927DC:
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r29,r29,-25368
	ctx.r29.s64 = ctx.r29.s64 + -25368;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82092848
	if (ctx.cr6.eq) goto loc_82092848;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092808
	if (ctx.cr6.eq) goto loc_82092808;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092808;
	sub_82183E40(ctx, base);
loc_82092808:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092820
	if (ctx.cr6.eq) goto loc_82092820;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092820;
	sub_82183E40(ctx, base);
loc_82092820:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092838
	if (ctx.cr6.eq) goto loc_82092838;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82092838;
	sub_82183E40(ctx, base);
loc_82092838:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82092848;
	sub_82183E40(ctx, base);
loc_82092848:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209286c
	if (ctx.cr6.eq) goto loc_8209286C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209286C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209286C:
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// addi r29,r29,-30508
	ctx.r29.s64 = ctx.r29.s64 + -30508;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209288c
	if (ctx.cr6.eq) goto loc_8209288C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8209288C;
	sub_82183E40(ctx, base);
loc_8209288C:
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r31,r31,-30512
	ctx.r31.s64 = ctx.r31.s64 + -30512;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820928ac
	if (ctx.cr6.eq) goto loc_820928AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820928AC;
	sub_82183E40(ctx, base);
loc_820928AC:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820928C0"))) PPC_WEAK_FUNC(sub_820928C0);
PPC_FUNC_IMPL(__imp__sub_820928C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820928C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82092550
	ctx.lr = 0x820928D4;
	sub_82092550(ctx, base);
	// addis r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 131072;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r31,-25376
	ctx.r31.s64 = ctx.r31.s64 + -25376;
loc_820928E0:
	// addi r31,r31,-768
	ctx.r31.s64 = ctx.r31.s64 + -768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0d28
	ctx.lr = 0x820928EC;
	sub_821B0D28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820928e0
	if (!ctx.cr0.lt) goto loc_820928E0;
	// lwz r11,564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 564);
	// addi r31,r29,536
	ctx.r31.s64 = ctx.r29.s64 + 536;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82092914
	if (ctx.cr6.eq) goto loc_82092914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82092910;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82092914:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82092924
	if (ctx.cr6.eq) goto loc_82092924;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82092924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8209292C"))) PPC_WEAK_FUNC(sub_8209292C);
PPC_FUNC_IMPL(__imp__sub_8209292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82092930"))) PPC_WEAK_FUNC(sub_82092930);
PPC_FUNC_IMPL(__imp__sub_82092930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-7468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7468);
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
	// bge cr6,0x82092994
	if (!ctx.cr6.lt) goto loc_82092994;
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
	// bne cr6,0x82092994
	if (!ctx.cr6.eq) goto loc_82092994;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82092994:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820929A0"))) PPC_WEAK_FUNC(sub_820929A0);
PPC_FUNC_IMPL(__imp__sub_820929A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820929A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r3,r3,536
	ctx.r3.s64 = ctx.r3.s64 + 536;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x82092A30;
	sub_82081590(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// addis r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 131072;
	// ori r9,r11,35024
	ctx.r9.u64 = ctx.r11.u64 | 35024;
	// ori r8,r10,35028
	ctx.r8.u64 = ctx.r10.u64 | 35028;
	// addi r7,r7,-30504
	ctx.r7.s64 = ctx.r7.s64 + -30504;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// ori r11,r6,38564
	ctx.r11.u64 = ctx.r6.u64 | 38564;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// ori r4,r5,38560
	ctx.r4.u64 = ctx.r5.u64 | 38560;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r3,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
loc_82092A94:
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
	// bdnz 0x82092a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092A94;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r11,r11,-26952
	ctx.r11.s64 = ctx.r11.s64 + -26952;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// ori r7,r9,38596
	ctx.r7.u64 = ctx.r9.u64 | 38596;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r8,r10,38592
	ctx.r8.u64 = ctx.r10.u64 | 38592;
	// ori r9,r4,38608
	ctx.r9.u64 = ctx.r4.u64 | 38608;
	// rlwinm r3,r6,0,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r5,-26936
	ctx.r5.s64 = ctx.r5.s64 + -26936;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// ori r3,r10,38612
	ctx.r3.u64 = ctx.r10.u64 | 38612;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// sthx r30,r31,r8
	PPC_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u16);
	// addi r28,r28,-26912
	ctx.r28.s64 = ctx.r28.s64 + -26912;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
loc_82092B38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b1008
	ctx.lr = 0x82092B40;
	sub_821B1008(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,768
	ctx.r28.s64 = ctx.r28.s64 + 768;
	// bge 0x82092b38
	if (!ctx.cr0.lt) goto loc_82092B38;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,40160
	ctx.r8.u64 = ctx.r11.u64 | 40160;
	// ori r7,r10,40164
	ctx.r7.u64 = ctx.r10.u64 | 40164;
	// ori r6,r9,40168
	ctx.r6.u64 = ctx.r9.u64 | 40168;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82092B7C;
	sub_822AA648(ctx, base);
	// li r4,1680
	ctx.r4.s64 = 1680;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x822aa648
	ctx.lr = 0x82092B88;
	sub_822AA648(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822aa648
	ctx.lr = 0x82092B94;
	sub_822AA648(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822aa648
	ctx.lr = 0x82092BA0;
	sub_822AA648(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x822aa648
	ctx.lr = 0x82092BAC;
	sub_822AA648(ctx, base);
	// stw r31,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r31.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r4,3520
	ctx.r4.s64 = 3520;
	// addi r3,r3,-30496
	ctx.r3.s64 = ctx.r3.s64 + -30496;
	// bl 0x822aa648
	ctx.lr = 0x82092BC4;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82092BD0"))) PPC_WEAK_FUNC(sub_82092BD0);
PPC_FUNC_IMPL(__imp__sub_82092BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82092BD8;
	sub_82248770(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8215c078
	ctx.lr = 0x82092BE4;
	sub_8215C078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82092BEC;
	sub_82183078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82092BF8;
	sub_821837D0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821b02c8
	ctx.lr = 0x82092C00;
	sub_821B02C8(ctx, base);
	// li r4,21000
	ctx.r4.s64 = 21000;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x82092C14;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82093188
	if (ctx.cr6.eq) goto loc_82093188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82092C28;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093188
	if (ctx.cr6.eq) goto loc_82093188;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82092C38;
	sub_82080000(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092c4c
	if (ctx.cr6.eq) goto loc_82092C4C;
	// bl 0x821a1580
	ctx.lr = 0x82092C48;
	sub_821A1580(ctx, base);
	// b 0x82092c50
	goto loc_82092C50;
loc_82092C4C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82092C50:
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// bl 0x82182e90
	ctx.lr = 0x82092C58;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82092C60;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82092C6C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82092C70;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82092C7C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82092C84;
	sub_821830F8(ctx, base);
	// li r4,21000
	ctx.r4.s64 = 21000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a810
	ctx.lr = 0x82092C90;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82092cac
	if (ctx.cr6.eq) goto loc_82092CAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218ae98
	ctx.lr = 0x82092CA4;
	sub_8218AE98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82092cb0
	goto loc_82092CB0;
loc_82092CAC:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82092CB0:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82092cc4
	if (ctx.cr6.lt) goto loc_82092CC4;
	// bne cr6,0x82092ccc
	if (!ctx.cr6.eq) goto loc_82092CCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82092cc8
	goto loc_82092CC8;
loc_82092CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82092CC8:
	// bl 0x821830f8
	ctx.lr = 0x82092CCC;
	sub_821830F8(ctx, base);
loc_82092CCC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82092CD4;
	sub_821837D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1448
	ctx.lr = 0x82092CE0;
	sub_821A1448(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x82092CEC;
	sub_821A2CE8(ctx, base);
	// bl 0x821b1108
	ctx.lr = 0x82092CF0;
	sub_821B1108(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821b10f8
	ctx.lr = 0x82092CFC;
	sub_821B10F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1eb0
	ctx.lr = 0x82092D10;
	sub_821A1EB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b10f8
	ctx.lr = 0x82092D18;
	sub_821B10F8(ctx, base);
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x82092D20;
	sub_821A2D30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82092D2C;
	sub_82183E40(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a11e8
	ctx.lr = 0x82092D34;
	sub_821A11E8(ctx, base);
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82080d68
	ctx.lr = 0x82092D3C;
	sub_82080D68(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82080d68
	ctx.lr = 0x82092D48;
	sub_82080D68(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,18944
	ctx.r3.u64 = ctx.r3.u64 | 18944;
	// bl 0x82080d68
	ctx.lr = 0x82092D58;
	sub_82080D68(ctx, base);
	// stw r3,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208fa18
	ctx.lr = 0x82092D64;
	sub_8208FA18(ctx, base);
	// li r4,240
	ctx.r4.s64 = 240;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x822aa648
	ctx.lr = 0x82092D70;
	sub_822AA648(ctx, base);
	// li r4,240
	ctx.r4.s64 = 240;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822aa648
	ctx.lr = 0x82092D7C;
	sub_822AA648(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// ori r4,r4,18944
	ctx.r4.u64 = ctx.r4.u64 | 18944;
	// bl 0x822aa648
	ctx.lr = 0x82092D8C;
	sub_822AA648(ctx, base);
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x82092D94;
	sub_821A2CE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82091d38
	ctx.lr = 0x82092D9C;
	sub_82091D38(ctx, base);
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x82092DA4;
	sub_821A2D30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82090238
	ctx.lr = 0x82092DAC;
	sub_82090238(ctx, base);
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x82092DB4;
	sub_821A2CE8(ctx, base);
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82080d68
	ctx.lr = 0x82092DBC;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092df8
	if (ctx.cr6.eq) goto loc_82092DF8;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82092DD0:
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
	// stwu r23,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82092dd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092DD0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82092dfc
	goto loc_82092DFC;
loc_82092DF8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82092DFC:
	// addis r24,r30,2
	ctx.r24.s64 = ctx.r30.s64 + 131072;
	// li r3,160
	ctx.r3.s64 = 160;
	// addi r24,r24,-30512
	ctx.r24.s64 = ctx.r24.s64 + -30512;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// bl 0x82080d68
	ctx.lr = 0x82092E10;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82092e4c
	if (ctx.cr6.eq) goto loc_82092E4C;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82092E24:
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
	// stwu r23,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82092e24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82092E24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82092e50
	goto loc_82092E50;
loc_82092E4C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82092E50:
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// addi r27,r27,-30508
	ctx.r27.s64 = ctx.r27.s64 + -30508;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x82092E64;
	sub_821A2D30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r28,r11,8136
	ctx.r28.s64 = ctx.r11.s64 + 8136;
loc_82092E70:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82092E74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82248910
	ctx.lr = 0x82092E84;
	sub_82248910(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8218a540
	ctx.lr = 0x82092E90;
	sub_8218A540(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x821a1790
	ctx.lr = 0x82092EA0;
	sub_821A1790(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// blt cr6,0x82092e74
	if (ctx.cr6.lt) goto loc_82092E74;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpwi cr6,r29,60
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 60, ctx.xer);
	// blt cr6,0x82092e70
	if (ctx.cr6.lt) goto loc_82092E70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r28,r11,8124
	ctx.r28.s64 = ctx.r11.s64 + 8124;
loc_82092EE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82248910
	ctx.lr = 0x82092EF8;
	sub_82248910(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8218a540
	ctx.lr = 0x82092F04;
	sub_8218A540(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x821a1790
	ctx.lr = 0x82092F14;
	sub_821A1790(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blt cr6,0x82092ee8
	if (ctx.cr6.lt) goto loc_82092EE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,8112
	ctx.r4.s64 = ctx.r11.s64 + 8112;
	// bl 0x8218a540
	ctx.lr = 0x82092F4C;
	sub_8218A540(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x821a1790
	ctx.lr = 0x82092F5C;
	sub_821A1790(ctx, base);
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-7468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7468);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82092fbc
	if (!ctx.cr6.lt) goto loc_82092FBC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82092fbc
	if (!ctx.cr6.eq) goto loc_82092FBC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82092fc0
	goto loc_82092FC0;
loc_82092FBC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82092FC0:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82092ff4
	if (ctx.cr6.eq) goto loc_82092FF4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a1790
	ctx.lr = 0x82092FDC;
	sub_821A1790(ctx, base);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-30504
	ctx.r11.s64 = ctx.r11.s64 + -30504;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82092FF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r28,r11,8100
	ctx.r28.s64 = ctx.r11.s64 + 8100;
loc_82093004:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r29,r25,97
	ctx.r29.s64 = ctx.r25.s64 + 97;
loc_8209300C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82248910
	ctx.lr = 0x82093020;
	sub_82248910(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8218a540
	ctx.lr = 0x8209302C;
	sub_8218A540(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x821a1790
	ctx.lr = 0x8209303C;
	sub_821A1790(ctx, base);
	// lwz r11,-7468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7468);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82093098
	if (!ctx.cr6.lt) goto loc_82093098;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82093098
	if (!ctx.cr6.eq) goto loc_82093098;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8209309c
	goto loc_8209309C;
loc_82093098:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8209309C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820930d8
	if (ctx.cr6.eq) goto loc_820930D8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1790
	ctx.lr = 0x820930B8;
	sub_821A1790(ctx, base);
	// add r10,r26,r31
	ctx.r10.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
loc_820930D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x8209300c
	if (ctx.cr6.lt) goto loc_8209300C;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r26,60
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 60, ctx.xer);
	// blt cr6,0x82093004
	if (ctx.cr6.lt) goto loc_82093004;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r10,-19776
	ctx.r5.s64 = ctx.r10.s64 + -19776;
	// lwz r4,-19020(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// bl 0x821a7758
	ctx.lr = 0x8209310C;
	sub_821A7758(ctx, base);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// addi r9,r9,-26952
	ctx.r9.s64 = ctx.r9.s64 + -26952;
	// addi r31,r11,-18272
	ctx.r31.s64 = ctx.r11.s64 + -18272;
	// lwz r11,-18256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18256);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// bne cr6,0x82093158
	if (!ctx.cr6.eq) goto loc_82093158;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,-18256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18256, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,8076
	ctx.r4.s64 = ctx.r9.s64 + 8076;
	// bl 0x8218a540
	ctx.lr = 0x82093158;
	sub_8218A540(ctx, base);
loc_82093158:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r10,r11,38588
	ctx.r10.u64 = ctx.r11.u64 | 38588;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x821a3950
	ctx.lr = 0x8209316C;
	sub_821A3950(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lhz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r6,r8,38592
	ctx.r6.u64 = ctx.r8.u64 | 38592;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// sthx r5,r30,r6
	PPC_STORE_U16(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u16);
loc_82093188:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821837d0
	ctx.lr = 0x82093190;
	sub_821837D0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82093198"))) PPC_WEAK_FUNC(sub_82093198);
PPC_FUNC_IMPL(__imp__sub_82093198) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r3.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// b 0x82092bd0
	sub_82092BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820931AC"))) PPC_WEAK_FUNC(sub_820931AC);
PPC_FUNC_IMPL(__imp__sub_820931AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820931B0"))) PPC_WEAK_FUNC(sub_820931B0);
PPC_FUNC_IMPL(__imp__sub_820931B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8220);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820931ec
	if (!ctx.cr6.gt) goto loc_820931EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820931ec
	if (!ctx.cr6.lt) goto loc_820931EC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820931ec
	if (!ctx.cr6.gt) goto loc_820931EC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_820931EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820931F4"))) PPC_WEAK_FUNC(sub_820931F4);
PPC_FUNC_IMPL(__imp__sub_820931F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820931F8"))) PPC_WEAK_FUNC(sub_820931F8);
PPC_FUNC_IMPL(__imp__sub_820931F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,105
	ctx.r11.s64 = ctx.r4.s64 + 105;
	// addi r10,r4,125
	ctx.r10.s64 = ctx.r4.s64 + 125;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfsx f2,r8,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82093214"))) PPC_WEAK_FUNC(sub_82093214);
PPC_FUNC_IMPL(__imp__sub_82093214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093218"))) PPC_WEAK_FUNC(sub_82093218);
PPC_FUNC_IMPL(__imp__sub_82093218) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82187a50
	ctx.lr = 0x82093244;
	sub_82187A50(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f8,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f31,20(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// std r9,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r9.u64);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_820932B0"))) PPC_WEAK_FUNC(sub_820932B0);
PPC_FUNC_IMPL(__imp__sub_820932B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820932B8;
	sub_82248780(ctx, base);
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
	// lis r8,-32185
	ctx.r8.s64 = -2109276160;
	// addi r7,r11,8240
	ctx.r7.s64 = ctx.r11.s64 + 8240;
	// addi r6,r10,8232
	ctx.r6.s64 = ctx.r10.s64 + 8232;
	// addi r5,r9,8224
	ctx.r5.s64 = ctx.r9.s64 + 8224;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,-18252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18252, ctx.r26.u32);
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// li r29,52
	ctx.r29.s64 = 52;
loc_82093304:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093324
	if (ctx.cr6.eq) goto loc_82093324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82093324:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// bne 0x82093304
	if (!ctx.cr0.eq) goto loc_82093304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821857f0
	ctx.lr = 0x82093338;
	sub_821857F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82185a50
	ctx.lr = 0x82093340;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x82093348;
	sub_821883B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82093350"))) PPC_WEAK_FUNC(sub_82093350);
PPC_FUNC_IMPL(__imp__sub_82093350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-19792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093364
	if (ctx.cr6.eq) goto loc_82093364;
	// b 0x8208fac0
	sub_8208FAC0(ctx, base);
	return;
loc_82093364:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209336C"))) PPC_WEAK_FUNC(sub_8209336C);
PPC_FUNC_IMPL(__imp__sub_8209336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093370"))) PPC_WEAK_FUNC(sub_82093370);
PPC_FUNC_IMPL(__imp__sub_82093370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-19792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x8208fa68
	sub_8208FA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82093388"))) PPC_WEAK_FUNC(sub_82093388);
PPC_FUNC_IMPL(__imp__sub_82093388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8209338C"))) PPC_WEAK_FUNC(sub_8209338C);
PPC_FUNC_IMPL(__imp__sub_8209338C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093390"))) PPC_WEAK_FUNC(sub_82093390);
PPC_FUNC_IMPL(__imp__sub_82093390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-18252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8209b880
	sub_8209B880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820933D4"))) PPC_WEAK_FUNC(sub_820933D4);
PPC_FUNC_IMPL(__imp__sub_820933D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820933D8"))) PPC_WEAK_FUNC(sub_820933D8);
PPC_FUNC_IMPL(__imp__sub_820933D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-18252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8209b880
	sub_8209B880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8209341C"))) PPC_WEAK_FUNC(sub_8209341C);
PPC_FUNC_IMPL(__imp__sub_8209341C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82093420"))) PPC_WEAK_FUNC(sub_82093420);
PPC_FUNC_IMPL(__imp__sub_82093420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820939e8
	sub_820939E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82093428"))) PPC_WEAK_FUNC(sub_82093428);
PPC_FUNC_IMPL(__imp__sub_82093428) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x820939e8
	sub_820939E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82093430"))) PPC_WEAK_FUNC(sub_82093430);
PPC_FUNC_IMPL(__imp__sub_82093430) {
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
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x82093448;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093464
	if (ctx.cr6.eq) goto loc_82093464;
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
loc_82093464:
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

__attribute__((alias("__imp__sub_82093478"))) PPC_WEAK_FUNC(sub_82093478);
PPC_FUNC_IMPL(__imp__sub_82093478) {
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
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x82093490;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820934ac
	if (ctx.cr6.eq) goto loc_820934AC;
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
loc_820934AC:
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

__attribute__((alias("__imp__sub_820934C0"))) PPC_WEAK_FUNC(sub_820934C0);
PPC_FUNC_IMPL(__imp__sub_820934C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820934C8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,16707
	ctx.r4.s64 = 1094909952;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20563
	ctx.r4.u64 = ctx.r4.u64 | 20563;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820934E0;
	sub_82188378(ctx, base);
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,8276
	ctx.r9.s64 = ctx.r11.s64 + 8276;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r10,r10,29604
	ctx.r10.s64 = ctx.r10.s64 + 29604;
loc_82093500:
	// stwu r10,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82093500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82093500;
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r30,-32185
	ctx.r30.s64 = -2109276160;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// li r29,0
	ctx.r29.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,-18248(r30)
	PPC_STORE_U32(ctx.r30.u32 + -18248, ctx.r31.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
loc_82093530:
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stwu r29,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82093530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82093530;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6176
	ctx.r3.s64 = ctx.r31.s64 + 6176;
	// bl 0x82184800
	ctx.lr = 0x8209355C;
	sub_82184800(ctx, base);
	// lwz r11,-18248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,6432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6432, ctx.r29.u32);
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82093574"))) PPC_WEAK_FUNC(sub_82093574);
PPC_FUNC_IMPL(__imp__sub_82093574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093578"))) PPC_WEAK_FUNC(sub_82093578);
PPC_FUNC_IMPL(__imp__sub_82093578) {
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
	// bl 0x82183850
	ctx.lr = 0x82093594;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820935ac
	if (ctx.cr6.eq) goto loc_820935AC;
	// li r3,1328
	ctx.r3.s64 = 1328;
	// bl 0x82183448
	ctx.lr = 0x820935A8;
	sub_82183448(ctx, base);
	// b 0x820935b4
	goto loc_820935B4;
loc_820935AC:
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x821845a0
	ctx.lr = 0x820935B4;
	sub_821845A0(ctx, base);
loc_820935B4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820935cc
	if (ctx.cr6.eq) goto loc_820935CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8208ff08
	ctx.lr = 0x820935C4;
	sub_8208FF08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x820935d0
	goto loc_820935D0;
loc_820935CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820935D0:
	// bl 0x82183850
	ctx.lr = 0x820935D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820935ec
	if (ctx.cr6.eq) goto loc_820935EC;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82183448
	ctx.lr = 0x820935E8;
	sub_82183448(ctx, base);
	// b 0x820935f4
	goto loc_820935F4;
loc_820935EC:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821845a0
	ctx.lr = 0x820935F4;
	sub_821845A0(ctx, base);
loc_820935F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209360c
	if (ctx.cr6.eq) goto loc_8209360C;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x820e7cb0
	ctx.lr = 0x82093604;
	sub_820E7CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82093610
	goto loc_82093610;
loc_8209360C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82093610:
	// lwz r11,1216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1216);
	// addi r31,r30,1216
	ctx.r31.s64 = ctx.r30.s64 + 1216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x8209362C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82093644
	if (ctx.cr6.eq) goto loc_82093644;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82183448
	ctx.lr = 0x82093640;
	sub_82183448(ctx, base);
	// b 0x8209364c
	goto loc_8209364C;
loc_82093644:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821845a0
	ctx.lr = 0x8209364C;
	sub_821845A0(ctx, base);
loc_8209364C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093668
	if (ctx.cr6.eq) goto loc_82093668;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820e8058
	ctx.lr = 0x82093660;
	sub_820E8058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8209366c
	goto loc_8209366C;
loc_82093668:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8209366C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x82093684;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8209369c
	if (ctx.cr6.eq) goto loc_8209369C;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82183448
	ctx.lr = 0x82093698;
	sub_82183448(ctx, base);
	// b 0x820936a4
	goto loc_820936A4;
loc_8209369C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821845a0
	ctx.lr = 0x820936A4;
	sub_821845A0(ctx, base);
loc_820936A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820936c4
	if (ctx.cr6.eq) goto loc_820936C4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,-5064(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5064);
	// bl 0x820e86d0
	ctx.lr = 0x820936BC;
	sub_820E86D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820936c8
	goto loc_820936C8;
loc_820936C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820936C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820936DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x820936E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820936f8
	if (ctx.cr6.eq) goto loc_820936F8;
	// li r3,2384
	ctx.r3.s64 = 2384;
	// bl 0x82183448
	ctx.lr = 0x820936F4;
	sub_82183448(ctx, base);
	// b 0x82093700
	goto loc_82093700;
loc_820936F8:
	// li r3,149
	ctx.r3.s64 = 149;
	// bl 0x821845a0
	ctx.lr = 0x82093700;
	sub_821845A0(ctx, base);
loc_82093700:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093720
	if (ctx.cr6.eq) goto loc_82093720;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ec368
	ctx.lr = 0x82093718;
	sub_820EC368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82093724
	goto loc_82093724;
loc_82093720:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82093724:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x8209373C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82093754
	if (ctx.cr6.eq) goto loc_82093754;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82183448
	ctx.lr = 0x82093750;
	sub_82183448(ctx, base);
	// b 0x8209375c
	goto loc_8209375C;
loc_82093754:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8209375C;
	sub_821845A0(ctx, base);
loc_8209375C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093774
	if (ctx.cr6.eq) goto loc_82093774;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209c6c8
	ctx.lr = 0x8209376C;
	sub_8209C6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82093778
	goto loc_82093778;
loc_82093774:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82093778:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209378C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_820937A8"))) PPC_WEAK_FUNC(sub_820937A8);
PPC_FUNC_IMPL(__imp__sub_820937A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820937B0;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r25,-19792(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820939e0
	if (ctx.cr6.eq) goto loc_820939E0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820939e0
	if (ctx.cr6.eq) goto loc_820939E0;
	// bl 0x8215c078
	ctx.lr = 0x820937D8;
	sub_8215C078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x820937E0;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x820937EC;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208fb10
	ctx.lr = 0x820937F8;
	sub_8208FB10(ctx, base);
	// li r22,14001
	ctx.r22.s64 = 14001;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820938a8
	if (ctx.cr6.eq) goto loc_820938A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r29,r25,40
	ctx.r29.s64 = ctx.r25.s64 + 40;
	// addi r28,r24,64
	ctx.r28.s64 = ctx.r24.s64 + 64;
loc_82093818:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82093890
	if (ctx.cr6.eq) goto loc_82093890;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8209383c
	if (ctx.cr6.eq) goto loc_8209383C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82093844
	if (!ctx.cr6.eq) goto loc_82093844;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8209383C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82093890
	if (ctx.cr6.eq) goto loc_82093890;
loc_82093844:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208fb10
	ctx.lr = 0x82093850;
	sub_8208FB10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82093578
	ctx.lr = 0x82093860;
	sub_82093578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,1216
	ctx.r3.s64 = ctx.r3.s64 + 1216;
	// bne cr6,0x82093874
	if (!ctx.cr6.eq) goto loc_82093874;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82093874:
	// bl 0x82093430
	ctx.lr = 0x82093878;
	sub_82093430(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r22,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r22.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// stb r23,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r23.u8);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82093890:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x82093818
	if (ctx.cr6.lt) goto loc_82093818;
loc_820938A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208fb20
	ctx.lr = 0x820938B4;
	sub_8208FB20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820939d0
	if (ctx.cr6.eq) goto loc_820939D0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r25,120
	ctx.r27.s64 = ctx.r25.s64 + 120;
loc_820938C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208fb20
	ctx.lr = 0x820938D0;
	sub_8208FB20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820939c0
	if (ctx.cr6.eq) goto loc_820939C0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// bl 0x8208fb20
	ctx.lr = 0x820938E8;
	sub_8208FB20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82093578
	ctx.lr = 0x820938F8;
	sub_82093578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,1216
	ctx.r3.s64 = ctx.r3.s64 + 1216;
	// bne cr6,0x8209390c
	if (!ctx.cr6.eq) goto loc_8209390C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8209390C:
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x82093918;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82093928
	if (ctx.cr6.eq) goto loc_82093928;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8209392c
	goto loc_8209392C;
loc_82093928:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8209392C:
	// bl 0x82183850
	ctx.lr = 0x82093930;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82093948
	if (ctx.cr6.eq) goto loc_82093948;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x82093944;
	sub_82183448(ctx, base);
	// b 0x82093950
	goto loc_82093950;
loc_82093948:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82093950;
	sub_821845A0(ctx, base);
loc_82093950:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209396c
	if (ctx.cr6.eq) goto loc_8209396C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x820ef9d8
	ctx.lr = 0x82093964;
	sub_820EF9D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82093970
	goto loc_82093970;
loc_8209396C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82093970:
	// lwz r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// addi r30,r31,1216
	ctx.r30.s64 = ctx.r31.s64 + 1216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82093988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x82093998;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820939a8
	if (ctx.cr6.eq) goto loc_820939A8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820939ac
	goto loc_820939AC;
loc_820939A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820939AC:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r29,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r29.u32);
	// stw r22,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r22.u32);
	// stb r23,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r23.u8);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_820939C0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x820938c4
	if (ctx.cr6.lt) goto loc_820938C4;
loc_820939D0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091840
	ctx.lr = 0x820939D8;
	sub_82091840(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x820939E0;
	sub_821837D0(ctx, base);
loc_820939E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820939E8"))) PPC_WEAK_FUNC(sub_820939E8);
PPC_FUNC_IMPL(__imp__sub_820939E8) {
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
	// bl 0x820932b0
	ctx.lr = 0x82093A08;
	sub_820932B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82093a24
	if (ctx.cr6.eq) goto loc_82093A24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82093A20;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82093A24:
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

__attribute__((alias("__imp__sub_82093A3C"))) PPC_WEAK_FUNC(sub_82093A3C);
PPC_FUNC_IMPL(__imp__sub_82093A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093A40"))) PPC_WEAK_FUNC(sub_82093A40);
PPC_FUNC_IMPL(__imp__sub_82093A40) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8215bd60
	ctx.lr = 0x82093A64;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82093a7c
	if (ctx.cr6.eq) goto loc_82093A7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82093aa0
	goto loc_82093AA0;
loc_82093A7C:
	// addi r11,r30,105
	ctx.r11.s64 = ctx.r30.s64 + 105;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8218f888
	ctx.lr = 0x82093A8C;
	sub_8218F888(ctx, base);
	// addi r9,r30,125
	ctx.r9.s64 = ctx.r30.s64 + 125;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f1,f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f31.f64));
loc_82093AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82093ABC"))) PPC_WEAK_FUNC(sub_82093ABC);
PPC_FUNC_IMPL(__imp__sub_82093ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093AC0"))) PPC_WEAK_FUNC(sub_82093AC0);
PPC_FUNC_IMPL(__imp__sub_82093AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82093AC8;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8224991c
	ctx.lr = 0x82093AD0;
	sub_8224991C(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82093c3c
	if (ctx.cr6.eq) goto loc_82093C3C;
	// ld r9,176(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 184);
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// ld r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// ld r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// ld r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 208);
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// ld r8,216(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 216);
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// ld r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 224);
	// std r7,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r7.u64);
	// ld r6,232(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 232);
	// std r6,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r6.u64);
	// bl 0x82289c50
	ctx.lr = 0x82093B5C;
	sub_82289C50(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82093c3c
	if (!ctx.cr6.gt) goto loc_82093C3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f25.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lfs f27,8316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8316);
	ctx.f27.f64 = double(temp.f32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lfs f29,8312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8312);
	ctx.f29.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f26,7884(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7884);
	ctx.f26.f64 = double(temp.f32);
loc_82093B98:
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// fmuls f30,f25,f0
	ctx.f30.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fsubs f28,f26,f0
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
loc_82093BA8:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// beq cr6,0x82093bd0
	if (ctx.cr6.eq) goto loc_82093BD0;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82093BD0:
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x82093BE4;
	sub_8208EA90(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82093c20
	if (ctx.cr6.lt) goto loc_82093C20;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bgt cr6,0x82093c20
	if (ctx.cr6.gt) goto loc_82093C20;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x82093c20
	if (ctx.cr6.lt) goto loc_82093C20;
	// stbx r26,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r26.u8);
loc_82093C20:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82093ba8
	if (ctx.cr6.lt) goto loc_82093BA8;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x82093b98
	if (!ctx.cr0.eq) goto loc_82093B98;
loc_82093C3C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249968
	ctx.lr = 0x82093C48;
	sub_82249968(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82093C4C"))) PPC_WEAK_FUNC(sub_82093C4C);
PPC_FUNC_IMPL(__imp__sub_82093C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82093C50"))) PPC_WEAK_FUNC(sub_82093C50);
PPC_FUNC_IMPL(__imp__sub_82093C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82093cec
	if (ctx.cr6.eq) goto loc_82093CEC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82093cec
	if (ctx.cr6.eq) goto loc_82093CEC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// lfs f0,8208(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8320(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8320);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r9,8208
	ctx.r11.s64 = ctx.r9.s64 + 8208;
	// lfs f12,84(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82093cb4
	if (!ctx.cr6.lt) goto loc_82093CB4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82093cc8
	goto loc_82093CC8;
loc_82093CB4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82093cc8
	if (!ctx.cr6.gt) goto loc_82093CC8;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82093CC8:
	// fmuls f12,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8216);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_82093CEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82093CF8"))) PPC_WEAK_FUNC(sub_82093CF8);
PPC_FUNC_IMPL(__imp__sub_82093CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82093D00;
	sub_82248778(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249914
	ctx.lr = 0x82093D08;
	sub_82249914(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r28,-18252(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18252);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82093d50
	if (!ctx.cr6.eq) goto loc_82093D50;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249960
	ctx.lr = 0x82093D4C;
	sub_82249960(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82093D50:
	// ld r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// ld r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 184);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// ld r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// lfs f0,8168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8168);
	ctx.f0.f64 = double(temp.f32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// ld r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 208);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// ld r8,216(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 216);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// ld r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 224);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 232);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82289c50
	ctx.lr = 0x82093DD0;
	sub_82289C50(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// bl 0x82093c50
	ctx.lr = 0x82093DE4;
	sub_82093C50(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82093f44
	if (!ctx.cr6.gt) goto loc_82093F44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// subf r24,r31,r27
	ctx.r24.s64 = ctx.r27.s64 - ctx.r31.s64;
	// lfs f23,8332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8332);
	ctx.f23.f64 = double(temp.f32);
	// subf r28,r31,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r31.s64;
	// lfs f26,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,8328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	ctx.f24.f64 = double(temp.f32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lfs f31,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f25,8324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8324);
	ctx.f25.f64 = double(temp.f32);
loc_82093E2C:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// oris r29,r8,32768
	ctx.r29.u64 = ctx.r8.u64 | 2147483648;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82093E68;
	sub_8208EA90(ctx, base);
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f24
	ctx.cr6.compare(ctx.f12.f64, ctx.f24.f64);
	// blt cr6,0x82093f34
	if (ctx.cr6.lt) goto loc_82093F34;
	// fdivs f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// lfsx f11,r24,r31
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f8,f28
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f10,f8,f27
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// bgt cr6,0x82093f34
	if (ctx.cr6.gt) goto loc_82093F34;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82093f34
	if (ctx.cr6.lt) goto loc_82093F34;
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82093f34
	if (ctx.cr6.lt) goto loc_82093F34;
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82093f34
	if (ctx.cr6.gt) goto loc_82093F34;
	// clrlwi r10,r29,1
	ctx.r10.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwx r27,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r27.u32);
loc_82093EE0:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmadds f10,f11,f30,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x82093f10
	if (ctx.cr6.lt) goto loc_82093F10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82093ee0
	if (ctx.cr6.lt) goto loc_82093EE0;
	// b 0x82093f14
	goto loc_82093F14;
loc_82093F10:
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
loc_82093F14:
	// fmadds f0,f30,f23,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f23.f64 + ctx.f29.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82093f2c
	if (!ctx.cr6.lt) goto loc_82093F2C;
	// rlwimi r11,r26,29,1,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 29) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// b 0x82093f30
	goto loc_82093F30;
loc_82093F2C:
	// rlwimi r11,r26,30,1,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 30) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
loc_82093F30:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82093F34:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82093e2c
	if (!ctx.cr0.eq) goto loc_82093E2C;
loc_82093F44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82249960
	ctx.lr = 0x82093F54;
	sub_82249960(ctx, base);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82093F58"))) PPC_WEAK_FUNC(sub_82093F58);
PPC_FUNC_IMPL(__imp__sub_82093F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-18248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18248);
	// addi r5,r11,6176
	ctx.r5.s64 = ctx.r11.s64 + 6176;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r3,6432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6432);
	// b 0x82093ac0
	sub_82093AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82093F70"))) PPC_WEAK_FUNC(sub_82093F70);
PPC_FUNC_IMPL(__imp__sub_82093F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82093F78;
	sub_82248768(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249924
	ctx.lr = 0x82093F80;
	sub_82249924(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// li r10,18
	ctx.r10.s64 = 18;
	// lis r6,-32190
	ctx.r6.s64 = -2109603840;
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f30,408(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// addi r11,r3,308
	ctx.r11.s64 = ctx.r3.s64 + 308;
	// stfs f0,580(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stw r22,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r22.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r5,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r5.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r22,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r22.u32);
	// stw r22,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r22.u32);
	// stw r22,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r22.u32);
	// stw r22,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r22.u32);
	// stw r22,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r22.u32);
	// stw r9,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r9.u32);
	// lfs f13,792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 792);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,796(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 796, temp.u32);
loc_82093FE8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82093fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82093FE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,392(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,388(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// stfs f0,384(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f27,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f27.f64 = double(temp.f32);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// lfs f28,8272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8272);
	ctx.f28.f64 = double(temp.f32);
	// addi r20,r3,420
	ctx.r20.s64 = ctx.r3.s64 + 420;
	// lfs f29,2136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2136);
	ctx.f29.f64 = double(temp.f32);
	// ori r21,r7,32896
	ctx.r21.u64 = ctx.r7.u64 | 32896;
	// stfs f30,396(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// addi r23,r11,8176
	ctx.r23.s64 = ctx.r11.s64 + 8176;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82094040:
	// lwz r27,-356(r20)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r20.u32 + -356);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82094214
	if (ctx.cr6.eq) goto loc_82094214;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209e2d0
	ctx.lr = 0x82094054;
	sub_8209E2D0(ctx, base);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r25,20(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82094214
	if (!ctx.cr6.gt) goto loc_82094214;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_82094068:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// add. r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82094200
	if (ctx.cr0.eq) goto loc_82094200;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82094200
	if (ctx.cr6.eq) goto loc_82094200;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82187220
	ctx.lr = 0x82094088;
	sub_82187220(ctx, base);
	// fadds f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmpwi cr6,r24,20
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 20, ctx.xer);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r29,r9,27,25,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7F;
	// rlwimi r10,r29,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bge cr6,0x82094130
	if (!ctx.cr6.lt) goto loc_82094130;
	// bl 0x8215bd60
	ctx.lr = 0x820940C0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820940d4
	if (ctx.cr6.eq) goto loc_820940D4;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x820940e8
	goto loc_820940E8;
loc_820940D4:
	// lfs f31,0(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8218f888
	ctx.lr = 0x820940DC;
	sub_8218F888(ctx, base);
	// lfs f0,80(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f31,f1,f13,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f31.f64));
loc_820940E8:
	// rlwinm r4,r29,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82187a50
	ctx.lr = 0x820940F8;
	sub_82187A50(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f9,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f31,20(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f7,40(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// b 0x82094144
	goto loc_82094144;
loc_82094130:
	// rlwinm r4,r29,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82187a50
	ctx.lr = 0x82094140;
	sub_82187A50(ctx, base);
	// stfs f30,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_82094144:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// std r11,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r11.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r10,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r10.u64);
	// stfs f30,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82187220
	ctx.lr = 0x82094164;
	sub_82187220(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// ld r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// ld r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r5.u64);
	// std r4,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r4.u64);
	// blt cr6,0x82094200
	if (ctx.cr6.lt) goto loc_82094200;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82094200
	if (!ctx.cr6.gt) goto loc_82094200;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f9,f11,f27
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82094200:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,160
	ctx.r26.s64 = ctx.r26.s64 + 160;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82094068
	if (ctx.cr6.lt) goto loc_82094068;
loc_82094214:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmpwi cr6,r24,52
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 52, ctx.xer);
	// blt cr6,0x82094040
	if (ctx.cr6.lt) goto loc_82094040;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82094264
	if (ctx.cr6.eq) goto loc_82094264;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-18252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82094264
	if (ctx.cr6.eq) goto loc_82094264;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094264
	if (ctx.cr6.eq) goto loc_82094264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82094264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82094264:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82249970
	ctx.lr = 0x82094270;
	sub_82249970(ctx, base);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82094274"))) PPC_WEAK_FUNC(sub_82094274);
PPC_FUNC_IMPL(__imp__sub_82094274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094278"))) PPC_WEAK_FUNC(sub_82094278);
PPC_FUNC_IMPL(__imp__sub_82094278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82094280;
	sub_8224877C(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8224991c
	ctx.lr = 0x82094288;
	sub_8224991C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209447c
	if (ctx.cr6.eq) goto loc_8209447C;
	// ld r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 176);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// ld r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 184);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// ld r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// lfs f0,8168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8168);
	ctx.f0.f64 = double(temp.f32);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// ld r9,208(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 208);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// ld r8,216(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 216);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// ld r7,224(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 224);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 232);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82289c50
	ctx.lr = 0x82094324;
	sub_82289C50(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lwz r11,-5000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5000);
	// lfs f26,796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 796);
	ctx.f26.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82094348
	if (ctx.cr6.eq) goto loc_82094348;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
loc_82094348:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r27,r31,64
	ctx.r27.s64 = ctx.r31.s64 + 64;
	// lfs f27,8340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8340);
	ctx.f27.f64 = double(temp.f32);
	// li r26,52
	ctx.r26.s64 = 52;
	// lfs f30,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f30.f64 = double(temp.f32);
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// lfs f31,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,8324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8324);
	ctx.f25.f64 = double(temp.f32);
loc_82094374:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82094470
	if (ctx.cr6.eq) goto loc_82094470;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82094470
	if (!ctx.cr6.gt) goto loc_82094470;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82094394:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// add. r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82094464
	if (ctx.cr0.eq) goto loc_82094464;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82094464
	if (ctx.cr6.eq) goto loc_82094464;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r6,r7,r25
	ctx.r6.u64 = ctx.r7.u64 | ctx.r25.u64;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820943E8;
	sub_8208EA90(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82094464
	if (ctx.cr6.lt) goto loc_82094464;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f9,f29
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f11,f9,f28
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// blt cr6,0x82094464
	if (ctx.cr6.lt) goto loc_82094464;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82094464
	if (ctx.cr6.gt) goto loc_82094464;
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82094464
	if (ctx.cr6.lt) goto loc_82094464;
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82094464
	if (ctx.cr6.gt) goto loc_82094464;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82094464:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bne 0x82094394
	if (!ctx.cr0.eq) goto loc_82094394;
loc_82094470:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82094374
	if (!ctx.cr0.eq) goto loc_82094374;
loc_8209447C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82249968
	ctx.lr = 0x82094488;
	sub_82249968(ctx, base);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8209448C"))) PPC_WEAK_FUNC(sub_8209448C);
PPC_FUNC_IMPL(__imp__sub_8209448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094490"))) PPC_WEAK_FUNC(sub_82094490);
PPC_FUNC_IMPL(__imp__sub_82094490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82094498;
	sub_8224875C(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82094678
	if (!ctx.cr6.gt) goto loc_82094678;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// addi r22,r11,8176
	ctx.r22.s64 = ctx.r11.s64 + 8176;
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
loc_820944D0:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r24,r19,r11
	ctx.r24.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lbz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// bl 0x8209e618
	ctx.lr = 0x820944EC;
	sub_8209E618(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r18
	PPC_STORE_U32(ctx.r9.u32 + ctx.r18.u32, ctx.r3.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82094518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82094664
	if (!ctx.cr6.gt) goto loc_82094664;
	// extsb r20,r31
	ctx.r20.s64 = ctx.r31.s8;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_8209453C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r11,r27,r10
	ctx.r11.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stb r20,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r20.u8);
	// stb r23,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r23.u8);
	// stb r23,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r23.u8);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// lwz r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f31,12(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x820945BC;
	sub_821875F8(ctx, base);
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ld r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// std r3,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82187220
	ctx.lr = 0x820945E4;
	sub_82187220(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// ld r5,8(r22)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// ld r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// std r3,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r3.u64);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8209453c
	if (ctx.cr6.lt) goto loc_8209453C;
loc_82094664:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820944d0
	if (ctx.cr6.lt) goto loc_820944D0;
loc_82094678:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82094684"))) PPC_WEAK_FUNC(sub_82094684);
PPC_FUNC_IMPL(__imp__sub_82094684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094688"))) PPC_WEAK_FUNC(sub_82094688);
PPC_FUNC_IMPL(__imp__sub_82094688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82094690;
	sub_82248774(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820947e0
	if (ctx.cr6.eq) goto loc_820947E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// addi r24,r3,64
	ctx.r24.s64 = ctx.r3.s64 + 64;
	// li r23,52
	ctx.r23.s64 = 52;
	// lfs f30,8272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f30.f64 = double(temp.f32);
	// ori r25,r9,32896
	ctx.r25.u64 = ctx.r9.u64 | 32896;
	// lfs f31,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f31.f64 = double(temp.f32);
loc_820946CC:
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820947cc
	if (ctx.cr6.eq) goto loc_820947CC;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820947cc
	if (!ctx.cr6.gt) goto loc_820947CC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820946EC:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// add. r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x820947b8
	if (ctx.cr0.eq) goto loc_820947B8;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820947b8
	if (ctx.cr6.eq) goto loc_820947B8;
	// addi r30,r28,384
	ctx.r30.s64 = ctx.r28.s64 + 384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82187220
	ctx.lr = 0x82094710;
	sub_82187220(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r8,r9,27,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7F;
	// rlwimi r10,r8,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r4,r8,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f1,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82093218
	ctx.lr = 0x8209474C;
	sub_82093218(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82187220
	ctx.lr = 0x82094758;
	sub_82187220(ctx, base);
	// stfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// ld r7,392(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 392);
	// ld r5,384(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 384);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// std r10,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r10.u64);
loc_820947B8:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820946ec
	if (ctx.cr6.lt) goto loc_820946EC;
loc_820947CC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x820946cc
	if (!ctx.cr0.eq) goto loc_820946CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,400(r28)
	PPC_STORE_U32(ctx.r28.u32 + 400, ctx.r11.u32);
loc_820947E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820947F0"))) PPC_WEAK_FUNC(sub_820947F0);
PPC_FUNC_IMPL(__imp__sub_820947F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17203
	ctx.r4.s64 = 1127415808;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17476
	ctx.r4.u64 = ctx.r4.u64 | 17476;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x82094824;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x821859a0
	ctx.lr = 0x82094838;
	sub_821859A0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82185740
	ctx.lr = 0x82094848;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r7,8232
	ctx.r4.s64 = ctx.r7.s64 + 8232;
	// lfs f0,8168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8168);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r6,8224
	ctx.r3.s64 = ctx.r6.s64 + 8224;
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// addi r5,r8,8240
	ctx.r5.s64 = ctx.r8.s64 + 8240;
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f30,580(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// li r4,208
	ctx.r4.s64 = 208;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x820948D8;
	sub_822AA648(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// addi r10,r31,308
	ctx.r10.s64 = ctx.r31.s64 + 308;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820948EC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820948ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820948EC;
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f30,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f30,388(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// addi r11,r31,496
	ctx.r11.s64 = ctx.r31.s64 + 496;
	// stfs f30,384(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82094910:
	// stfs f31,-76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -76, temp.u32);
	// stfsu f31,4(r11)
	// bdnz 0x82094910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82094910;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,-18244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18244, ctx.r30.u32);
	// stw r31,-18252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18252, ctx.r31.u32);
	// bl 0x82093f70
	ctx.lr = 0x82094934;
	sub_82093F70(ctx, base);
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8209495C"))) PPC_WEAK_FUNC(sub_8209495C);
PPC_FUNC_IMPL(__imp__sub_8209495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094960"))) PPC_WEAK_FUNC(sub_82094960);
PPC_FUNC_IMPL(__imp__sub_82094960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r8,r11,-14444
	ctx.r8.s64 = ctx.r11.s64 + -14444;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82094984:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82094984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82094984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094990"))) PPC_WEAK_FUNC(sub_82094990);
PPC_FUNC_IMPL(__imp__sub_82094990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82094998;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82094a04
	if (ctx.cr6.eq) goto loc_82094A04;
	// li r31,0
	ctx.r31.s64 = 0;
	// ble cr6,0x820949e0
	if (!ctx.cr6.gt) goto loc_820949E0;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
loc_820949B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820949cc
	if (!ctx.cr6.eq) goto loc_820949CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209e760
	ctx.lr = 0x820949CC;
	sub_8209E760(ctx, base);
loc_820949CC:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820949b8
	if (ctx.cr6.lt) goto loc_820949B8;
loc_820949E0:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820949F4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820949f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820949F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_82094A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82094A0C"))) PPC_WEAK_FUNC(sub_82094A0C);
PPC_FUNC_IMPL(__imp__sub_82094A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094A10"))) PPC_WEAK_FUNC(sub_82094A10);
PPC_FUNC_IMPL(__imp__sub_82094A10) {
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
	ctx.lr = 0x82094A20;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82094a38
	if (ctx.cr6.eq) goto loc_82094A38;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82094A34;
	sub_82183448(ctx, base);
	// b 0x82094a40
	goto loc_82094A40;
loc_82094A38:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82094A40;
	sub_821845A0(ctx, base);
loc_82094A40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094a64
	if (ctx.cr6.eq) goto loc_82094A64;
	// bl 0x8209ebe0
	ctx.lr = 0x82094A4C;
	sub_8209EBE0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8972(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82094A64:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094A80"))) PPC_WEAK_FUNC(sub_82094A80);
PPC_FUNC_IMPL(__imp__sub_82094A80) {
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
	ctx.lr = 0x82094A90;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82094aa8
	if (ctx.cr6.eq) goto loc_82094AA8;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x82183448
	ctx.lr = 0x82094AA4;
	sub_82183448(ctx, base);
	// b 0x82094ab0
	goto loc_82094AB0;
loc_82094AA8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821845a0
	ctx.lr = 0x82094AB0;
	sub_821845A0(ctx, base);
loc_82094AB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094ad4
	if (ctx.cr6.eq) goto loc_82094AD4;
	// bl 0x8209eda8
	ctx.lr = 0x82094ABC;
	sub_8209EDA8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82094AD4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094AF0"))) PPC_WEAK_FUNC(sub_82094AF0);
PPC_FUNC_IMPL(__imp__sub_82094AF0) {
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
	ctx.lr = 0x82094B00;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82094b18
	if (ctx.cr6.eq) goto loc_82094B18;
	// bl 0x82183448
	ctx.lr = 0x82094B14;
	sub_82183448(ctx, base);
	// b 0x82094b1c
	goto loc_82094B1C;
loc_82094B18:
	// bl 0x821845a0
	ctx.lr = 0x82094B1C;
	sub_821845A0(ctx, base);
loc_82094B1C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094b40
	if (ctx.cr6.eq) goto loc_82094B40;
	// bl 0x8209eda0
	ctx.lr = 0x82094B28;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8964(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82094B40:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8964, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094B5C"))) PPC_WEAK_FUNC(sub_82094B5C);
PPC_FUNC_IMPL(__imp__sub_82094B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094B60"))) PPC_WEAK_FUNC(sub_82094B60);
PPC_FUNC_IMPL(__imp__sub_82094B60) {
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
	ctx.lr = 0x82094B70;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82094b88
	if (ctx.cr6.eq) goto loc_82094B88;
	// li r3,388
	ctx.r3.s64 = 388;
	// bl 0x82183448
	ctx.lr = 0x82094B84;
	sub_82183448(ctx, base);
	// b 0x82094b90
	goto loc_82094B90;
loc_82094B88:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x821845a0
	ctx.lr = 0x82094B90;
	sub_821845A0(ctx, base);
loc_82094B90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094bb4
	if (ctx.cr6.eq) goto loc_82094BB4;
	// bl 0x820a1050
	ctx.lr = 0x82094B9C;
	sub_820A1050(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8960(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8960, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82094BB4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094BD0"))) PPC_WEAK_FUNC(sub_82094BD0);
PPC_FUNC_IMPL(__imp__sub_82094BD0) {
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
	ctx.lr = 0x82094BE0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82094bf8
	if (ctx.cr6.eq) goto loc_82094BF8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x82094BF4;
	sub_82183448(ctx, base);
	// b 0x82094c00
	goto loc_82094C00;
loc_82094BF8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82094C00;
	sub_821845A0(ctx, base);
loc_82094C00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094c24
	if (ctx.cr6.eq) goto loc_82094C24;
	// bl 0x820a20d0
	ctx.lr = 0x82094C0C;
	sub_820A20D0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8952(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8952, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82094C24:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8952, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094C40"))) PPC_WEAK_FUNC(sub_82094C40);
PPC_FUNC_IMPL(__imp__sub_82094C40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82094af0
	ctx.lr = 0x82094C58;
	sub_82094AF0(ctx, base);
	// bl 0x82094a10
	ctx.lr = 0x82094C5C;
	sub_82094A10(ctx, base);
	// bl 0x82094a80
	ctx.lr = 0x82094C60;
	sub_82094A80(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209f1f0
	ctx.lr = 0x82094C70;
	sub_8209F1F0(ctx, base);
	// bl 0x82094bd0
	ctx.lr = 0x82094C74;
	sub_82094BD0(ctx, base);
	// bl 0x82094b60
	ctx.lr = 0x82094C78;
	sub_82094B60(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,-8960(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8960);
	// bl 0x820a0b98
	ctx.lr = 0x82094C88;
	sub_820A0B98(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r8,-4704
	ctx.r7.s64 = ctx.r8.s64 + -4704;
	// lwz r11,-8972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8972);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82094ccc
	if (!ctx.cr6.lt) goto loc_82094CCC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stdx r7,r8,r9
	PPC_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_82094CCC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-4704
	ctx.r9.s64 = ctx.r10.s64 + -4704;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82094d10
	if (!ctx.cr6.lt) goto loc_82094D10;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stdx r7,r8,r9
	PPC_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_82094D10:
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

__attribute__((alias("__imp__sub_82094D24"))) PPC_WEAK_FUNC(sub_82094D24);
PPC_FUNC_IMPL(__imp__sub_82094D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D28"))) PPC_WEAK_FUNC(sub_82094D28);
PPC_FUNC_IMPL(__imp__sub_82094D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// b 0x821601a0
	sub_821601A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094D34"))) PPC_WEAK_FUNC(sub_82094D34);
PPC_FUNC_IMPL(__imp__sub_82094D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D38"))) PPC_WEAK_FUNC(sub_82094D38);
PPC_FUNC_IMPL(__imp__sub_82094D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// b 0x8215ff30
	sub_8215FF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094D44"))) PPC_WEAK_FUNC(sub_82094D44);
PPC_FUNC_IMPL(__imp__sub_82094D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D48"))) PPC_WEAK_FUNC(sub_82094D48);
PPC_FUNC_IMPL(__imp__sub_82094D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// b 0x82160340
	sub_82160340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094D54"))) PPC_WEAK_FUNC(sub_82094D54);
PPC_FUNC_IMPL(__imp__sub_82094D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D58"))) PPC_WEAK_FUNC(sub_82094D58);
PPC_FUNC_IMPL(__imp__sub_82094D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// b 0x8209f910
	sub_8209F910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094D64"))) PPC_WEAK_FUNC(sub_82094D64);
PPC_FUNC_IMPL(__imp__sub_82094D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D68"))) PPC_WEAK_FUNC(sub_82094D68);
PPC_FUNC_IMPL(__imp__sub_82094D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// b 0x820a0888
	sub_820A0888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094D74"))) PPC_WEAK_FUNC(sub_82094D74);
PPC_FUNC_IMPL(__imp__sub_82094D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094D78"))) PPC_WEAK_FUNC(sub_82094D78);
PPC_FUNC_IMPL(__imp__sub_82094D78) {
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
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// bl 0x820a0f30
	ctx.lr = 0x82094D90;
	sub_820A0F30(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r3,-8968(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// bl 0x8209f508
	ctx.lr = 0x82094D9C;
	sub_8209F508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094DAC"))) PPC_WEAK_FUNC(sub_82094DAC);
PPC_FUNC_IMPL(__imp__sub_82094DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094DB0"))) PPC_WEAK_FUNC(sub_82094DB0);
PPC_FUNC_IMPL(__imp__sub_82094DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// b 0x820a0650
	sub_820A0650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094DBC"))) PPC_WEAK_FUNC(sub_82094DBC);
PPC_FUNC_IMPL(__imp__sub_82094DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094DC0"))) PPC_WEAK_FUNC(sub_82094DC0);
PPC_FUNC_IMPL(__imp__sub_82094DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// b 0x8209f860
	sub_8209F860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094DCC"))) PPC_WEAK_FUNC(sub_82094DCC);
PPC_FUNC_IMPL(__imp__sub_82094DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094DD0"))) PPC_WEAK_FUNC(sub_82094DD0);
PPC_FUNC_IMPL(__imp__sub_82094DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// b 0x820a0d58
	sub_820A0D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094DDC"))) PPC_WEAK_FUNC(sub_82094DDC);
PPC_FUNC_IMPL(__imp__sub_82094DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094DE0"))) PPC_WEAK_FUNC(sub_82094DE0);
PPC_FUNC_IMPL(__imp__sub_82094DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// b 0x820a0750
	sub_820A0750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82094DEC"))) PPC_WEAK_FUNC(sub_82094DEC);
PPC_FUNC_IMPL(__imp__sub_82094DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094DF0"))) PPC_WEAK_FUNC(sub_82094DF0);
PPC_FUNC_IMPL(__imp__sub_82094DF0) {
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
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094e10
	if (ctx.cr6.eq) goto loc_82094E10;
	// bl 0x820a0958
	ctx.lr = 0x82094E10;
	sub_820A0958(ctx, base);
loc_82094E10:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82094e24
	if (ctx.cr6.eq) goto loc_82094E24;
	// bl 0x8209f598
	ctx.lr = 0x82094E24;
	sub_8209F598(ctx, base);
loc_82094E24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094E34"))) PPC_WEAK_FUNC(sub_82094E34);
PPC_FUNC_IMPL(__imp__sub_82094E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82094E38"))) PPC_WEAK_FUNC(sub_82094E38);
PPC_FUNC_IMPL(__imp__sub_82094E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82094E54:
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82094e74
	if (!ctx.cr6.eq) goto loc_82094E74;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82094e8c
	if (ctx.cr6.eq) goto loc_82094E8C;
loc_82094E74:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82094e54
	if (ctx.cr6.lt) goto loc_82094E54;
	// blr 
	return;
loc_82094E8C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82094ed0
	if (!ctx.cr6.lt) goto loc_82094ED0;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_82094EA0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82094ea0
	if (ctx.cr6.lt) goto loc_82094EA0;
loc_82094ED0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82094EE0"))) PPC_WEAK_FUNC(sub_82094EE0);
PPC_FUNC_IMPL(__imp__sub_82094EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82094EE8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// addi r10,r11,-4704
	ctx.r10.s64 = ctx.r11.s64 + -4704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,-8972(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8972);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094e38
	ctx.lr = 0x82094F14;
	sub_82094E38(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,-4704
	ctx.r8.s64 = ctx.r9.s64 + -4704;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82094e38
	ctx.lr = 0x82094F30;
	sub_82094E38(ctx, base);
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// lwz r31,-8960(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8960);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82094f54
	if (ctx.cr6.eq) goto loc_82094F54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a11e8
	ctx.lr = 0x82094F48;
	sub_820A11E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82094F54;
	sub_82183E40(ctx, base);
loc_82094F54:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8960, ctx.r11.u32);
	// lwz r30,-8952(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8952);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82094f80
	if (ctx.cr6.eq) goto loc_82094F80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a25f0
	ctx.lr = 0x82094F74;
	sub_820A25F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82094F80;
	sub_82183E40(ctx, base);
loc_82094F80:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8952, ctx.r11.u32);
	// lwz r31,-8968(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8968);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82094fac
	if (ctx.cr6.eq) goto loc_82094FAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209f638
	ctx.lr = 0x82094FA0;
	sub_8209F638(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82094FAC;
	sub_82183E40(ctx, base);
loc_82094FAC:
	// lwz r31,-8972(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8972);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8968(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8968, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82094fd4
	if (ctx.cr6.eq) goto loc_82094FD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eb88
	ctx.lr = 0x82094FC8;
	sub_8209EB88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82094FD4;
	sub_82183E40(ctx, base);
loc_82094FD4:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8972(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8972, ctx.r11.u32);
	// lwz r31,-8964(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8964);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82095000
	if (ctx.cr6.eq) goto loc_82095000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82094FF4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82095000;
	sub_82183E40(ctx, base);
loc_82095000:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8964(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8964, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82095010"))) PPC_WEAK_FUNC(sub_82095010);
PPC_FUNC_IMPL(__imp__sub_82095010) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-9952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9952);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,-9952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82095024"))) PPC_WEAK_FUNC(sub_82095024);
PPC_FUNC_IMPL(__imp__sub_82095024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095028"))) PPC_WEAK_FUNC(sub_82095028);
PPC_FUNC_IMPL(__imp__sub_82095028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82095030;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,-9952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9952);
	// xori r31,r11,1
	ctx.r31.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82093f58
	ctx.lr = 0x82095048;
	sub_82093F58(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,808
	ctx.r30.s64 = ctx.r11.s64 + 808;
	// ori r9,r10,16396
	ctx.r9.u64 = ctx.r10.u64 | 16396;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mullw r29,r31,r9
	ctx.r29.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r26,r11,40960
	ctx.r26.u64 = ctx.r11.u64 | 40960;
loc_82095074:
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// lwzx r5,r29,r24
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lfs f1,408(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 408);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r9,-24564
	ctx.r8.s64 = ctx.r9.s64 + -24564;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lwzx r9,r29,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r3,r5,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x82093cf8
	ctx.lr = 0x820950B0;
	sub_82093CF8(ctx, base);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// addi r28,r28,8192
	ctx.r28.s64 = ctx.r28.s64 + 8192;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82095074
	if (ctx.cr6.lt) goto loc_82095074;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820950CC"))) PPC_WEAK_FUNC(sub_820950CC);
PPC_FUNC_IMPL(__imp__sub_820950CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820950D0"))) PPC_WEAK_FUNC(sub_820950D0);
PPC_FUNC_IMPL(__imp__sub_820950D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820950D8;
	sub_82248788(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r11,r8,808
	ctx.r11.s64 = ctx.r8.s64 + 808;
	// lwz r10,-9952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9952);
	// ori r6,r7,16396
	ctx.r6.u64 = ctx.r7.u64 | 16396;
	// lwz r9,-464(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -464);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r30,r10,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r6,r3,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// addi r10,r7,-24564
	ctx.r10.s64 = ctx.r7.s64 + -24564;
	// lwzx r30,r30,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r4,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r31,r6
	ctx.r29.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x821a8ec8
	ctx.lr = 0x82095150;
	sub_821A8EC8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820951d0
	if (!ctx.cr6.gt) goto loc_820951D0;
	// subf r28,r31,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_8209515C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000000;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820951c0
	if (!ctx.cr6.eq) goto loc_820951C0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfsx f1,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// srawi r10,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// rlwinm r4,r10,0,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// bl 0x82093218
	ctx.lr = 0x8209518C;
	sub_82093218(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82082318
	ctx.lr = 0x82095194;
	sub_82082318(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,74
	ctx.r4.s64 = 74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b16b8
	ctx.lr = 0x820951A8;
	sub_821B16B8(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a89e8
	ctx.lr = 0x820951C0;
	sub_821A89E8(ctx, base);
loc_820951C0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209515c
	if (!ctx.cr0.eq) goto loc_8209515C;
loc_820951D0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820951D8"))) PPC_WEAK_FUNC(sub_820951D8);
PPC_FUNC_IMPL(__imp__sub_820951D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820951E0;
	sub_82248780(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8209532c
	if (!ctx.cr6.gt) goto loc_8209532C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f10,8272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lfs f11,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f11.f64 = double(temp.f32);
	// ori r8,r5,16396
	ctx.r8.u64 = ctx.r5.u64 | 16396;
	// lfs f12,8612(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8612);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8608(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8608);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// addi r5,r11,808
	ctx.r5.s64 = ctx.r11.s64 + 808;
loc_82095238:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// lwz r11,-9952(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -9952);
	// add r7,r27,r10
	ctx.r7.u64 = ctx.r27.u64 + ctx.r10.u64;
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lbz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82095318
	if (!ctx.cr6.gt) goto loc_82095318;
	// rlwinm r28,r10,9,0,22
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
loc_82095284:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,-9952(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -9952);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwzx r9,r9,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lfs f9,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,-9952(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -9952);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// fmsubs f5,f6,f13,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f12.f64));
	// lwzx r10,r9,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// fadds f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f2.u64);
	// lhz r9,-58(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -58);
	// rlwinm r9,r9,19,1,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7F000000;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82095284
	if (ctx.cr6.lt) goto loc_82095284;
loc_82095318:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82095238
	if (ctx.cr6.lt) goto loc_82095238;
loc_8209532C:
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82095330"))) PPC_WEAK_FUNC(sub_82095330);
PPC_FUNC_IMPL(__imp__sub_82095330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82095338;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -464);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820954f4
	if (ctx.cr6.eq) goto loc_820954F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820804f8
	ctx.lr = 0x82095368;
	sub_820804F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f31,8164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8164);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,8064(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8064);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7948(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,8620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820953A8;
	sub_820804F8(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f13,8160(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8160);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,8060(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fdivs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fdivs f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820953F4;
	sub_82289C50(ctx, base);
	// mulli r11,r30,864
	ctx.r11.s64 = ctx.r30.s64 * 864;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r11,r31,592
	ctx.r11.s64 = ctx.r31.s64 + 592;
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lis r5,-32185
	ctx.r5.s64 = -2109276160;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lwz r27,-19792(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19792);
	// std r3,608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 608, ctx.r3.u64);
	// std r10,592(r31)
	PPC_STORE_U64(ctx.r31.u32 + 592, ctx.r10.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r9,600(r31)
	PPC_STORE_U64(ctx.r31.u32 + 600, ctx.r9.u64);
	// std r8,616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 616, ctx.r8.u64);
	// std r29,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r29.u64);
	// std r7,632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 632, ctx.r7.u64);
	// std r28,640(r31)
	PPC_STORE_U64(ctx.r31.u32 + 640, ctx.r28.u64);
	// std r6,648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 648, ctx.r6.u64);
	// bl 0x8208fae8
	ctx.lr = 0x82095468;
	sub_8208FAE8(ctx, base);
	// lwz r5,1428(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x820804f8
	ctx.lr = 0x82095478;
	sub_820804F8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ori r5,r5,35024
	ctx.r5.u64 = ctx.r5.u64 | 35024;
	// ld r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r3,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r3.u64);
	// std r30,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r30.u64);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// std r29,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r29.u64);
	// std r7,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r7.u64);
	// lwzx r11,r27,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r5,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r4.u32);
loc_820954F4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82095500"))) PPC_WEAK_FUNC(sub_82095500);
PPC_FUNC_IMPL(__imp__sub_82095500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82095508;
	sub_82248784(ctx, base);
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
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r11,8640
	ctx.r8.s64 = ctx.r11.s64 + 8640;
	// addi r7,r10,8632
	ctx.r7.s64 = ctx.r10.s64 + 8632;
	// addi r6,r9,8624
	ctx.r6.s64 = ctx.r9.s64 + 8624;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// addi r31,r3,1432
	ctx.r31.s64 = ctx.r3.s64 + 1432;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
loc_82095544:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095558
	if (ctx.cr6.eq) goto loc_82095558;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82095558;
	sub_82183E40(ctx, base);
loc_82095558:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095570
	if (ctx.cr6.eq) goto loc_82095570;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82095570;
	sub_82183E40(ctx, base);
loc_82095570:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r3,-464(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095588
	if (ctx.cr6.eq) goto loc_82095588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82160960
	ctx.lr = 0x82095588;
	sub_82160960(ctx, base);
loc_82095588:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x82095544
	if (ctx.cr6.lt) goto loc_82095544;
	// addi r3,r28,17920
	ctx.r3.s64 = ctx.r28.s64 + 17920;
	// bl 0x821b0d28
	ctx.lr = 0x820955A0;
	sub_821B0D28(ctx, base);
	// addi r11,r28,17872
	ctx.r11.s64 = ctx.r28.s64 + 17872;
	// li r30,19
	ctx.r30.s64 = 19;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_820955AC:
	// addi r31,r31,-864
	ctx.r31.s64 = ctx.r31.s64 + -864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0d28
	ctx.lr = 0x820955B8;
	sub_821B0D28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820955ac
	if (!ctx.cr0.lt) goto loc_820955AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820932b0
	ctx.lr = 0x820955C8;
	sub_820932B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820955D0"))) PPC_WEAK_FUNC(sub_820955D0);
PPC_FUNC_IMPL(__imp__sub_820955D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820956a8
	sub_820956A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820955D8"))) PPC_WEAK_FUNC(sub_820955D8);
PPC_FUNC_IMPL(__imp__sub_820955D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x820956a8
	sub_820956A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820955E0"))) PPC_WEAK_FUNC(sub_820955E0);
PPC_FUNC_IMPL(__imp__sub_820955E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820955E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,-48
	ctx.r29.s64 = ctx.r3.s64 + -48;
	// bl 0x82091ce8
	ctx.lr = 0x820955F8;
	sub_82091CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82095608
	if (!ctx.cr6.eq) goto loc_82095608;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82095608:
	// stw r11,296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 296, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82094688
	ctx.lr = 0x82095614;
	sub_82094688(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// li r30,52
	ctx.r30.s64 = 52;
loc_8209561C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209563c
	if (ctx.cr6.eq) goto loc_8209563C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209563C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209563C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8209561c
	if (!ctx.cr0.eq) goto loc_8209561C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82095650"))) PPC_WEAK_FUNC(sub_82095650);
PPC_FUNC_IMPL(__imp__sub_82095650) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r10,8352
	ctx.r30.s64 = ctx.r10.s64 + 8352;
	// lwz r31,-19020(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19020);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a8180
	ctx.lr = 0x82095680;
	sub_821A8180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// bl 0x821a8180
	ctx.lr = 0x8209568C;
	sub_821A8180(ctx, base);
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

__attribute__((alias("__imp__sub_820956A4"))) PPC_WEAK_FUNC(sub_820956A4);
PPC_FUNC_IMPL(__imp__sub_820956A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820956A8"))) PPC_WEAK_FUNC(sub_820956A8);
PPC_FUNC_IMPL(__imp__sub_820956A8) {
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
	// bl 0x82095500
	ctx.lr = 0x820956C8;
	sub_82095500(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820956e4
	if (ctx.cr6.eq) goto loc_820956E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820956E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820956E4:
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

__attribute__((alias("__imp__sub_820956FC"))) PPC_WEAK_FUNC(sub_820956FC);
PPC_FUNC_IMPL(__imp__sub_820956FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82095700"))) PPC_WEAK_FUNC(sub_82095700);
PPC_FUNC_IMPL(__imp__sub_82095700) {
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
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,4
	ctx.r31.s64 = 4;
	// lwz r4,-19792(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// bl 0x8208fb30
	ctx.lr = 0x8209572C;
	sub_8208FB30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82092930
	ctx.lr = 0x82095734;
	sub_82092930(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,-7460(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7460);
	// and r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 & ctx.r31.u64;
	// bl 0x821af640
	ctx.lr = 0x82095750;
	sub_821AF640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bne cr6,0x82095760
	if (!ctx.cr6.eq) goto loc_82095760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82095760:
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

__attribute__((alias("__imp__sub_82095778"))) PPC_WEAK_FUNC(sub_82095778);
PPC_FUNC_IMPL(__imp__sub_82095778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82095780;
	sub_82248764(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lis r23,-32178
	ctx.r23.s64 = -2108817408;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r21,-19792(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19792);
	// lwz r22,-7460(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7460);
	// bl 0x820a27b0
	ctx.lr = 0x820957AC;
	sub_820A27B0(ctx, base);
	// lwz r3,-7460(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7460);
	// bl 0x821af140
	ctx.lr = 0x820957B4;
	sub_821AF140(ctx, base);
	// lwz r11,-7460(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7460);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821aefa8
	ctx.lr = 0x820957C4;
	sub_821AEFA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,17908(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17908);
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f31,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82095904
	if (ctx.cr6.eq) goto loc_82095904;
	// addi r30,r31,17920
	ctx.r30.s64 = ctx.r31.s64 + 17920;
	// lwz r29,-19048(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19048);
	// li r5,768
	ctx.r5.s64 = 768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821847a8
	ctx.lr = 0x820957F8;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82095904
	if (ctx.cr6.eq) goto loc_82095904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2a60
	ctx.lr = 0x82095808;
	sub_821A2A60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095904
	if (ctx.cr6.eq) goto loc_82095904;
	// ld r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 240);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// ld r7,248(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 248);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// ld r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// ld r29,264(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 264);
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
	// ld r27,272(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 272);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// ld r20,280(r3)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// addi r10,r3,240
	ctx.r10.s64 = ctx.r3.s64 + 240;
	// ld r19,288(r3)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r3.u32 + 288);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 296);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// lfs f0,2148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r29,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r29.u64);
	// std r27,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r27.u64);
	// std r20,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r20.u64);
	// std r19,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r19.u64);
	// std r11,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r11.u64);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82082318
	ctx.lr = 0x8209588C;
	sub_82082318(ctx, base);
	// addi r29,r25,16
	ctx.r29.s64 = ctx.r25.s64 + 16;
	// subf r27,r25,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r25.s64;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82095898:
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820958B4;
	sub_8208EA90(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r8,r27,r29
	ctx.r8.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// bne 0x82095898
	if (!ctx.cr0.eq) goto loc_82095898;
	// ld r10,168(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 168);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ld r11,160(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 160);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820958F4;
	sub_8208EA90(ctx, base);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r9.u64);
	// std r8,168(r30)
	PPC_STORE_U64(ctx.r30.u32 + 168, ctx.r8.u64);
loc_82095904:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r6,17890(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17890);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,17872(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17872);
	// addi r29,r11,8592
	ctx.r29.s64 = ctx.r11.s64 + 8592;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821b16b8
	ctx.lr = 0x82095920;
	sub_821B16B8(ctx, base);
	// addi r28,r30,256
	ctx.r28.s64 = ctx.r30.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r6,17892(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17892);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lhz r4,17874(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17874);
	// bl 0x821b16b8
	ctx.lr = 0x82095938;
	sub_821B16B8(ctx, base);
	// addi r27,r30,272
	ctx.r27.s64 = ctx.r30.s64 + 272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r6,17894(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17894);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r4,17876(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17876);
	// bl 0x821b16b8
	ctx.lr = 0x82095950;
	sub_821B16B8(ctx, base);
	// addi r26,r30,80
	ctx.r26.s64 = ctx.r30.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r6,17896(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17896);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lhz r4,17878(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17878);
	// bl 0x821b16b8
	ctx.lr = 0x82095968;
	sub_821B16B8(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r6,17898(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17898);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,17880(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17880);
	// bl 0x821b16b8
	ctx.lr = 0x82095980;
	sub_821B16B8(ctx, base);
	// lwz r3,-19048(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -19048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820959c8
	if (ctx.cr6.eq) goto loc_820959C8;
	// bl 0x821a2a60
	ctx.lr = 0x82095990;
	sub_821A2A60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820959c8
	if (ctx.cr6.eq) goto loc_820959C8;
	// ld r10,592(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 592);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r8,600(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 600);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17906(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17906);
	// lhz r4,17888(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17888);
	// addi r7,r11,592
	ctx.r7.s64 = ctx.r11.s64 + 592;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// bl 0x821b16b8
	ctx.lr = 0x820959C8;
	sub_821B16B8(ctx, base);
loc_820959C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r6,17890(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17890);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r4,17872(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17872);
	// bl 0x821a90a8
	ctx.lr = 0x820959DC;
	sub_821A90A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17892(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17892);
	// lhz r4,17874(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17874);
	// bl 0x821a90a8
	ctx.lr = 0x820959F0;
	sub_821A90A8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17894(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17894);
	// lhz r4,17876(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17876);
	// bl 0x821a90a8
	ctx.lr = 0x82095A04;
	sub_821A90A8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17896(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17896);
	// lhz r4,17878(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17878);
	// bl 0x821a90a8
	ctx.lr = 0x82095A18;
	sub_821A90A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17898(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17898);
	// lhz r4,17880(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17880);
	// bl 0x821a90a8
	ctx.lr = 0x82095A2C;
	sub_821A90A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lhz r6,17900(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17900);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lhz r4,17882(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17882);
	// lfs f13,8324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8324);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x82095A80;
	sub_821B16B8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17900(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17900);
	// lhz r4,17882(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17882);
	// bl 0x821a90a8
	ctx.lr = 0x82095A94;
	sub_821A90A8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17902(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17902);
	// lhz r4,17884(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17884);
	// bl 0x821b16b8
	ctx.lr = 0x82095AA8;
	sub_821B16B8(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17902(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17902);
	// lhz r4,17884(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17884);
	// bl 0x821a90a8
	ctx.lr = 0x82095ABC;
	sub_821A90A8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17904(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17904);
	// lhz r4,17886(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17886);
	// bl 0x821b16b8
	ctx.lr = 0x82095AD0;
	sub_821B16B8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r6,17904(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17904);
	// lhz r4,17886(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 17886);
	// bl 0x821a90a8
	ctx.lr = 0x82095AE4;
	sub_821A90A8(ctx, base);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,-464(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -464);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82095b30
	if (ctx.cr6.eq) goto loc_82095B30;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82095B00:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82095b20
	if (ctx.cr6.eq) goto loc_82095B20;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821609d0
	ctx.lr = 0x82095B20;
	sub_821609D0(ctx, base);
loc_82095B20:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 80, ctx.xer);
	// blt cr6,0x82095b00
	if (ctx.cr6.lt) goto loc_82095B00;
loc_82095B30:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,38608
	ctx.r10.u64 = ctx.r11.u64 | 38608;
	// lwzx r9,r21,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82095b88
	if (ctx.cr6.eq) goto loc_82095B88;
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// ori r8,r10,38600
	ctx.r8.u64 = ctx.r10.u64 | 38600;
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lwz r7,352(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// ldx r11,r21,r8
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + ctx.r8.u32);
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// bl 0x821a8e50
	ctx.lr = 0x82095B80;
	sub_821A8E50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82095b8c
	goto loc_82095B8C;
loc_82095B88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82095B8C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821afba0
	ctx.lr = 0x82095B94;
	sub_821AFBA0(ctx, base);
	// lwz r3,-7460(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7460);
	// bl 0x821af640
	ctx.lr = 0x82095B9C;
	sub_821AF640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82095c34
	if (ctx.cr6.eq) goto loc_82095C34;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x82095bbc
	if (!ctx.cr6.eq) goto loc_82095BBC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82095BBC:
	// lis r4,21328
	ctx.r4.s64 = 1397751808;
	// ori r4,r4,17491
	ctx.r4.u64 = ctx.r4.u64 | 17491;
	// bl 0x821882d0
	ctx.lr = 0x82095BC8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095cdc
	if (ctx.cr6.eq) goto loc_82095CDC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82095cdc
	if (ctx.cr6.eq) goto loc_82095CDC;
	// lwz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// ld r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// std r6,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x82095C10;
	sub_821A8E50(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad648
	ctx.lr = 0x82095C24;
	sub_821AD648(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821ad6a0
	ctx.lr = 0x82095C34;
	sub_821AD6A0(ctx, base);
loc_82095C34:
	// addis r9,r21,2
	ctx.r9.s64 = ctx.r21.s64 + 131072;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r9,-30504
	ctx.r9.s64 = ctx.r9.s64 + -30504;
	// lwz r11,-7468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7468);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82095cdc
	if (!ctx.cr6.lt) goto loc_82095CDC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82095cdc
	if (!ctx.cr6.eq) goto loc_82095CDC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82095cdc
	if (ctx.cr6.eq) goto loc_82095CDC;
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r7.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r6.u64);
	// bl 0x821a8e50
	ctx.lr = 0x82095CDC;
	sub_821A8E50(ctx, base);
loc_82095CDC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82095CE8"))) PPC_WEAK_FUNC(sub_82095CE8);
PPC_FUNC_IMPL(__imp__sub_82095CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x82095CF0;
	sub_82248754(ctx, base);
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// bl 0x820947f0
	ctx.lr = 0x82095D08;
	sub_820947F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r27,592
	ctx.r29.s64 = ctx.r27.s64 + 592;
	// addi r8,r11,8640
	ctx.r8.s64 = ctx.r11.s64 + 8640;
	// addi r7,r10,8632
	ctx.r7.s64 = ctx.r10.s64 + 8632;
	// addi r6,r9,8624
	ctx.r6.s64 = ctx.r9.s64 + 8624;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stw r7,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r7.u32);
	// li r30,19
	ctx.r30.s64 = 19;
	// stw r6,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r6.u32);
	// addi r31,r29,844
	ctx.r31.s64 = ctx.r29.s64 + 844;
	// li r19,0
	ctx.r19.s64 = 0;
loc_82095D3C:
	// addi r3,r31,-780
	ctx.r3.s64 = ctx.r31.s64 + -780;
	// bl 0x821b1008
	ctx.lr = 0x82095D44;
	sub_821B1008(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r19,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r19.u32);
	// addi r31,r31,864
	ctx.r31.s64 = ctx.r31.s64 + 864;
	// bge 0x82095d3c
	if (!ctx.cr0.lt) goto loc_82095D3C;
	// addi r3,r27,17920
	ctx.r3.s64 = ctx.r27.s64 + 17920;
	// bl 0x821b1008
	ctx.lr = 0x82095D74;
	sub_821B1008(ctx, base);
	// lis r16,-32185
	ctx.r16.s64 = -2109276160;
	// li r4,17280
	ctx.r4.s64 = 17280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r22,-19792(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + -19792);
	// bl 0x822aa648
	ctx.lr = 0x82095D88;
	sub_822AA648(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r27,252(r22)
	PPC_STORE_U32(ctx.r22.u32 + 252, ctx.r27.u32);
	// ori r10,r11,40164
	ctx.r10.u64 = ctx.r11.u64 | 40164;
	// lwzx r4,r22,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82095da8
	if (ctx.cr6.eq) goto loc_82095DA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82094490
	ctx.lr = 0x82095DA8;
	sub_82094490(ctx, base);
loc_82095DA8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8209bd50
	ctx.lr = 0x82095DB0;
	sub_8209BD50(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r11,-9792
	ctx.r30.s64 = ctx.r11.s64 + -9792;
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82095de4
	if (!ctx.cr6.eq) goto loc_82095DE4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,8816
	ctx.r4.s64 = ctx.r10.s64 + 8816;
	// bl 0x8218a540
	ctx.lr = 0x82095DE4;
	sub_8218A540(ctx, base);
loc_82095DE4:
	// li r17,1
	ctx.r17.s64 = 1;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82095e30
	if (ctx.cr6.eq) goto loc_82095E30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16020(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16020);
	// bl 0x821a15e8
	ctx.lr = 0x82095DFC;
	sub_821A15E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095e30
	if (ctx.cr6.eq) goto loc_82095E30;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16020(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16020);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1790
	ctx.lr = 0x82095E14;
	sub_821A1790(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ori r8,r11,38600
	ctx.r8.u64 = ctx.r11.u64 | 38600;
	// ori r7,r10,38608
	ctx.r7.u64 = ctx.r10.u64 | 38608;
	// stdx r9,r22,r8
	PPC_STORE_U64(ctx.r22.u32 + ctx.r8.u32, ctx.r9.u64);
	// stwx r17,r22,r7
	PPC_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r17.u32);
loc_82095E30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// addi r30,r11,8352
	ctx.r30.s64 = ctx.r11.s64 + 8352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,-19020(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19020);
	// bl 0x821a78b0
	ctx.lr = 0x82095E4C;
	sub_821A78B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r8,r9,38568
	ctx.r8.u64 = ctx.r9.u64 | 38568;
	// addi r5,r30,120
	ctx.r5.s64 = ctx.r30.s64 + 120;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stdx r7,r22,r8
	PPC_STORE_U64(ctx.r22.u32 + ctx.r8.u32, ctx.r7.u64);
	// lwz r4,-19020(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19020);
	// bl 0x821a78b0
	ctx.lr = 0x82095E70;
	sub_821A78B0(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ori r4,r6,38576
	ctx.r4.u64 = ctx.r6.u64 | 38576;
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r20,r10,-9808
	ctx.r20.s64 = ctx.r10.s64 + -9808;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stdx r5,r22,r4
	PPC_STORE_U64(ctx.r22.u32 + ctx.r4.u32, ctx.r5.u64);
	// bne cr6,0x82095eb4
	if (!ctx.cr6.eq) goto loc_82095EB4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r4,r10,8800
	ctx.r4.s64 = ctx.r10.s64 + 8800;
	// bl 0x8218a540
	ctx.lr = 0x82095EB0;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095EB4:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r21,r10,-9824
	ctx.r21.s64 = ctx.r10.s64 + -9824;
	// bne cr6,0x82095ee4
	if (!ctx.cr6.eq) goto loc_82095EE4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r10,8788
	ctx.r4.s64 = ctx.r10.s64 + 8788;
	// bl 0x8218a540
	ctx.lr = 0x82095EE0;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095EE4:
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r23,r10,-9840
	ctx.r23.s64 = ctx.r10.s64 + -9840;
	// bne cr6,0x82095f14
	if (!ctx.cr6.eq) goto loc_82095F14;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r10,8772
	ctx.r4.s64 = ctx.r10.s64 + 8772;
	// bl 0x8218a540
	ctx.lr = 0x82095F10;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095F14:
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r24,r10,-9856
	ctx.r24.s64 = ctx.r10.s64 + -9856;
	// bne cr6,0x82095f44
	if (!ctx.cr6.eq) goto loc_82095F44;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r10,8756
	ctx.r4.s64 = ctx.r10.s64 + 8756;
	// bl 0x8218a540
	ctx.lr = 0x82095F40;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095F44:
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r25,r10,-9872
	ctx.r25.s64 = ctx.r10.s64 + -9872;
	// bne cr6,0x82095f74
	if (!ctx.cr6.eq) goto loc_82095F74;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r10,8740
	ctx.r4.s64 = ctx.r10.s64 + 8740;
	// bl 0x8218a540
	ctx.lr = 0x82095F70;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095F74:
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r26,r10,-9888
	ctx.r26.s64 = ctx.r10.s64 + -9888;
	// bne cr6,0x82095fa4
	if (!ctx.cr6.eq) goto loc_82095FA4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// bl 0x8218a540
	ctx.lr = 0x82095FA0;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095FA4:
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r10,-9904
	ctx.r28.s64 = ctx.r10.s64 + -9904;
	// bne cr6,0x82095fd4
	if (!ctx.cr6.eq) goto loc_82095FD4;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,8708
	ctx.r4.s64 = ctx.r10.s64 + 8708;
	// bl 0x8218a540
	ctx.lr = 0x82095FD0;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82095FD4:
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r10,-9920
	ctx.r29.s64 = ctx.r10.s64 + -9920;
	// bne cr6,0x82096004
	if (!ctx.cr6.eq) goto loc_82096004;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,8692
	ctx.r4.s64 = ctx.r10.s64 + 8692;
	// bl 0x8218a540
	ctx.lr = 0x82096000;
	sub_8218A540(ctx, base);
	// lwz r11,-9776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9776);
loc_82096004:
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r10,-9936
	ctx.r30.s64 = ctx.r10.s64 + -9936;
	// bne cr6,0x82096030
	if (!ctx.cr6.eq) goto loc_82096030;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9776, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,8680
	ctx.r4.s64 = ctx.r10.s64 + 8680;
	// bl 0x8218a540
	ctx.lr = 0x82096030;
	sub_8218A540(ctx, base);
loc_82096030:
	// addis r31,r22,2
	ctx.r31.s64 = ctx.r22.s64 + 131072;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r31,r31,-26952
	ctx.r31.s64 = ctx.r31.s64 + -26952;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x8209604C;
	sub_821A3950(ctx, base);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x82096064;
	sub_821A3950(ctx, base);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x8209607C;
	sub_821A3950(ctx, base);
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x82096094;
	sub_821A3950(ctx, base);
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x820960AC;
	sub_821A3950(ctx, base);
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x820960C4;
	sub_821A3950(ctx, base);
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x820960DC;
	sub_821A3950(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x820960F4;
	sub_821A3950(ctx, base);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821a3950
	ctx.lr = 0x8209610C;
	sub_821A3950(ctx, base);
	// lhz r9,16(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 16);
	// sth r9,17872(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17872, ctx.r9.u16);
	// lhz r8,16(r23)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r23.u32 + 16);
	// sth r8,17874(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17874, ctx.r8.u16);
	// lhz r7,16(r24)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r24.u32 + 16);
	// sth r7,17876(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17876, ctx.r7.u16);
	// lhz r6,16(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 16);
	// sth r6,17878(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17878, ctx.r6.u16);
	// lhz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 16);
	// sth r5,17880(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17880, ctx.r5.u16);
	// lhz r4,16(r20)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r20.u32 + 16);
	// sth r4,17882(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17882, ctx.r4.u16);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// sth r11,17884(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17884, ctx.r11.u16);
	// lhz r10,16(r15)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r15.u32 + 16);
	// sth r10,17886(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17886, ctx.r10.u16);
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// sth r9,17888(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17888, ctx.r9.u16);
	// lhz r8,18(r21)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r21.u32 + 18);
	// sth r8,17890(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17890, ctx.r8.u16);
	// lhz r7,18(r23)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r23.u32 + 18);
	// sth r7,17892(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17892, ctx.r7.u16);
	// lhz r6,18(r24)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r24.u32 + 18);
	// sth r6,17894(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17894, ctx.r6.u16);
	// lhz r5,18(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18);
	// sth r5,17896(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17896, ctx.r5.u16);
	// lhz r4,18(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 18);
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,808
	ctx.r31.s64 = ctx.r11.s64 + 808;
	// ori r30,r10,16396
	ctx.r30.u64 = ctx.r10.u64 | 16396;
	// sth r4,17898(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17898, ctx.r4.u16);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lhz r8,18(r20)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r20.u32 + 18);
	// li r4,80
	ctx.r4.s64 = 80;
	// sth r8,17900(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17900, ctx.r8.u16);
	// lhz r7,18(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 18);
	// sth r7,17902(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17902, ctx.r7.u16);
	// lhz r6,18(r15)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r15.u32 + 18);
	// sth r6,17904(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17904, ctx.r6.u16);
	// lhz r5,18(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// sth r5,17906(r27)
	PPC_STORE_U16(ctx.r27.u32 + 17906, ctx.r5.u16);
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// bl 0x822aa648
	ctx.lr = 0x820961C8;
	sub_822AA648(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x820961CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820961e4
	if (ctx.cr6.eq) goto loc_820961E4;
	// li r3,6448
	ctx.r3.s64 = 6448;
	// bl 0x82183448
	ctx.lr = 0x820961E0;
	sub_82183448(ctx, base);
	// b 0x820961ec
	goto loc_820961EC;
loc_820961E4:
	// li r3,403
	ctx.r3.s64 = 403;
	// bl 0x821845a0
	ctx.lr = 0x820961EC;
	sub_821845A0(ctx, base);
loc_820961EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096200
	if (ctx.cr6.eq) goto loc_82096200;
	// bl 0x820934c0
	ctx.lr = 0x820961F8;
	sub_820934C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82096204
	goto loc_82096204;
loc_82096200:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82096204:
	// lwz r10,1248(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1248);
	// addi r3,r18,1248
	ctx.r3.s64 = ctx.r18.s64 + 1248;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82096218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,40168
	ctx.r6.u64 = ctx.r8.u64 | 40168;
	// ori r20,r7,40960
	ctx.r20.u64 = ctx.r7.u64 | 40960;
	// lis r21,-32178
	ctx.r21.s64 = -2108817408;
	// lwzx r3,r22,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820964a4
	if (ctx.cr6.eq) goto loc_820964A4;
	// bl 0x820951d8
	ctx.lr = 0x8209623C;
	sub_820951D8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r10,r11,-24564
	ctx.r10.s64 = ctx.r11.s64 + -24564;
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822aa648
	ctx.lr = 0x82096258;
	sub_822AA648(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,-9952(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// ori r22,r11,32768
	ctx.r22.u64 = ctx.r11.u64 | 32768;
loc_82096270:
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// add r25,r9,r23
	ctx.r25.u64 = ctx.r9.u64 + ctx.r23.u64;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r6,r7,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82096310
	if (!ctx.cr6.gt) goto loc_82096310;
loc_82096294:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820931b0
	ctx.lr = 0x8209629C;
	sub_820931B0(ctx, base);
	// lwz r10,-9952(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mulli r11,r10,20483
	ctx.r11.s64 = ctx.r10.s64 * 20483;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r9,r9,-24564
	ctx.r9.s64 = ctx.r9.s64 + -24564;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 536870912;
	// bne cr6,0x820962d0
	if (!ctx.cr6.eq) goto loc_820962D0;
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
loc_820962D0:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820962f0
	if (ctx.cr6.eq) goto loc_820962F0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_820962F0:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r7,r8,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82096294
	if (ctx.cr6.lt) goto loc_82096294;
loc_82096310:
	// addi r23,r23,8192
	ctx.r23.s64 = ctx.r23.s64 + 8192;
	// addi r26,r26,512
	ctx.r26.s64 = ctx.r26.s64 + 512;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r22
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82096270
	if (ctx.cr6.lt) goto loc_82096270;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822aa648
	ctx.lr = 0x82096334;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// lfs f30,8676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8676);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,8672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8672);
	ctx.f31.f64 = double(temp.f32);
loc_82096348:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820931f8
	ctx.lr = 0x8209635C;
	sub_820931F8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// blt cr6,0x82096348
	if (ctx.cr6.lt) goto loc_82096348;
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_82096380:
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820963dc
	if (!ctx.cr6.gt) goto loc_820963DC;
	// rlwinm r24,r25,9,0,22
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 9) & 0xFFFFFE00;
loc_82096394:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82093a40
	ctx.lr = 0x820963A0;
	sub_82093A40(ctx, base);
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r7,r29,r24
	ctx.r7.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfsx f1,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// mullw r4,r11,r30
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82096394
	if (ctx.cr6.lt) goto loc_82096394;
loc_820963DC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r25,20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 20, ctx.xer);
	// blt cr6,0x82096380
	if (ctx.cr6.lt) goto loc_82096380;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-19048(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19048);
	// lwz r23,-464(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -464);
	// bl 0x821a2ce8
	ctx.lr = 0x820963FC;
	sub_821A2CE8(ctx, base);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// addi r29,r27,1428
	ctx.r29.s64 = ctx.r27.s64 + 1428;
	// li r24,64
	ctx.r24.s64 = 64;
loc_82096408:
	// lwz r3,-19048(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19048);
	// bl 0x821a3138
	ctx.lr = 0x82096410;
	sub_821A3138(ctx, base);
	// addi r25,r29,-836
	ctx.r25.s64 = ctx.r29.s64 + -836;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820804f8
	ctx.lr = 0x8209641C;
	sub_820804F8(ctx, base);
	// stw r17,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r17.u32);
	// bl 0x82183850
	ctx.lr = 0x82096424;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8209643c
	if (ctx.cr6.eq) goto loc_8209643C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x82096438;
	sub_82183448(ctx, base);
	// b 0x82096444
	goto loc_82096444;
loc_8209643C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82096444;
	sub_821845A0(ctx, base);
loc_82096444:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r19.u32);
	// bl 0x82183850
	ctx.lr = 0x82096450;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82096468
	if (ctx.cr6.eq) goto loc_82096468;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x82096464;
	sub_82183448(ctx, base);
	// b 0x82096470
	goto loc_82096470;
loc_82096468:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82096470;
	sub_821845A0(ctx, base);
loc_82096470:
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r24,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r24.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r24,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82160950
	ctx.lr = 0x8209648C;
	sub_82160950(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,864
	ctx.r29.s64 = ctx.r29.s64 + 864;
	// cmpwi cr6,r26,20
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 20, ctx.xer);
	// blt cr6,0x82096408
	if (ctx.cr6.lt) goto loc_82096408;
	// lwz r3,-19048(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x820964A4;
	sub_821A2D30(ctx, base);
loc_820964A4:
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820937a8
	ctx.lr = 0x820964C0;
	sub_820937A8(ctx, base);
	// lwz r3,-19048(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x820964C8;
	sub_821A2CE8(ctx, base);
	// lwz r3,-19792(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + -19792);
	// bl 0x82092170
	ctx.lr = 0x820964D0;
	sub_82092170(ctx, base);
	// lwz r3,-19048(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x820964D8;
	sub_821A2D30(ctx, base);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,-444(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -444);
	// bl 0x82161148
	ctx.lr = 0x820964E8;
	sub_82161148(ctx, base);
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// stw r3,280(r27)
	PPC_STORE_U32(ctx.r27.u32 + 280, ctx.r3.u32);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 800, ctx.r17.u32);
	// bl 0x8215bd60
	ctx.lr = 0x820964FC;
	sub_8215BD60(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82096510
	if (ctx.cr6.eq) goto loc_82096510;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 800, ctx.r19.u32);
loc_82096510:
	// stw r17,17908(r27)
	PPC_STORE_U32(ctx.r27.u32 + 17908, ctx.r17.u32);
	// lwz r11,-9952(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9952);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8209655c
	if (ctx.cr6.eq) goto loc_8209655C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82248a40
	ctx.lr = 0x82096544;
	sub_82248A40(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// ori r11,r11,40972
	ctx.r11.u64 = ctx.r11.u64 | 40972;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x8209655C;
	sub_82248A40(ctx, base);
loc_8209655C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r19,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r19.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_82096574"))) PPC_WEAK_FUNC(sub_82096574);
PPC_FUNC_IMPL(__imp__sub_82096574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096578"))) PPC_WEAK_FUNC(sub_82096578);
PPC_FUNC_IMPL(__imp__sub_82096578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x82096580;
	sub_82248758(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r4,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r22,-19792(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19792);
	// ori r7,r9,35024
	ctx.r7.u64 = ctx.r9.u64 | 35024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r22,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r7.u32);
	// ldx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r6.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x821a8e50
	ctx.lr = 0x820965D4;
	sub_821A8E50(ctx, base);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r31,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r20,r31,13,0,18
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0xFFFFE000;
	// addi r23,r11,584
	ctx.r23.s64 = ctx.r11.s64 + 584;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r25,r31,11,0,20
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// subf r16,r31,r8
	ctx.r16.s64 = ctx.r8.s64 - ctx.r31.s64;
	// li r17,0
	ctx.r17.s64 = 0;
	// ori r24,r10,16396
	ctx.r24.u64 = ctx.r10.u64 | 16396;
	// lis r19,-32182
	ctx.r19.s64 = -2109079552;
	// addi r31,r11,808
	ctx.r31.s64 = ctx.r11.s64 + 808;
loc_82096618:
	// lwz r11,508(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 508);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8209663c
	if (ctx.cr6.eq) goto loc_8209663C;
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82096640
	goto loc_82096640;
loc_8209663C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82096640:
	// li r7,28
	ctx.r7.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a88d0
	ctx.lr = 0x82096654;
	sub_821A88D0(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821a8968
	ctx.lr = 0x82096664;
	sub_821A8968(ctx, base);
	// lwz r11,-9952(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -9952);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lwzx r9,r5,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r21.u32);
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r30,r6,r20
	ctx.r30.u64 = ctx.r6.u64 + ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r7,r8,-24564
	ctx.r7.s64 = ctx.r8.s64 + -24564;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// add r27,r10,r7
	ctx.r27.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x8209674c
	if (!ctx.cr6.gt) goto loc_8209674C;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
loc_820966B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82096734
	if (!ctx.cr6.eq) goto loc_82096734;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82096734
	if (!ctx.cr6.eq) goto loc_82096734;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// srawi r10,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// rlwinm r4,r10,0,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// bl 0x82093218
	ctx.lr = 0x820966E8;
	sub_82093218(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82082318
	ctx.lr = 0x820966F0;
	sub_82082318(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,74
	ctx.r4.s64 = 74;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821b16b8
	ctx.lr = 0x82096704;
	sub_821B16B8(ctx, base);
	// addi r11,r18,21
	ctx.r11.s64 = ctx.r18.s64 + 21;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r7,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r22.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// bl 0x821a89e8
	ctx.lr = 0x82096734;
	sub_821A89E8(ctx, base);
loc_82096734:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x820966b0
	if (!ctx.cr0.eq) goto loc_820966B0;
loc_8209674C:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,20
	ctx.r18.s64 = ctx.r18.s64 + 20;
	// addi r16,r16,140
	ctx.r16.s64 = ctx.r16.s64 + 140;
	// addi r23,r23,560
	ctx.r23.s64 = ctx.r23.s64 + 560;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// blt cr6,0x82096618
	if (ctx.cr6.lt) goto loc_82096618;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_8209676C"))) PPC_WEAK_FUNC(sub_8209676C);
PPC_FUNC_IMPL(__imp__sub_8209676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096770"))) PPC_WEAK_FUNC(sub_82096770);
PPC_FUNC_IMPL(__imp__sub_82096770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82096778;
	sub_82248770(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32185
	ctx.r31.s64 = -2109276160;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// ori r9,r11,38584
	ctx.r9.u64 = ctx.r11.u64 | 38584;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lwz r29,-19792(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19792);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r30,-7488(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7488);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,-7460(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7460);
	// ldx r7,r29,r9
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r9.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// bl 0x821adc30
	ctx.lr = 0x820967B0;
	sub_821ADC30(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821adc58
	ctx.lr = 0x820967BC;
	sub_821ADC58(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820967CC;
	sub_821AD1F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad240
	ctx.lr = 0x820967D8;
	sub_821AD240(ctx, base);
	// lis r26,-32185
	ctx.r26.s64 = -2109276160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,-18244(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18244);
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r28,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821af640
	ctx.lr = 0x820967F0;
	sub_821AF640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82096830
	if (ctx.cr6.eq) goto loc_82096830;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,8884
	ctx.r5.s64 = ctx.r10.s64 + 8884;
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r6,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r6.u32);
	// b 0x82096858
	goto loc_82096858;
loc_82096830:
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r25.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,8872
	ctx.r5.s64 = ctx.r10.s64 + 8872;
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
loc_82096858:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x821a8c78
	ctx.lr = 0x82096860;
	sub_821A8C78(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r9,r11,38576
	ctx.r9.u64 = ctx.r11.u64 | 38576;
	// rlwinm r8,r10,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ldx r7,r29,r9
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r9.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// bl 0x821a8848
	ctx.lr = 0x82096898;
	sub_821A8848(ctx, base);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8209689C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82096578
	ctx.lr = 0x820968A8;
	sub_82096578(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x8209689c
	if (ctx.cr6.lt) goto loc_8209689C;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
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
	ctx.lr = 0x820968DC;
	sub_821A8DC0(ctx, base);
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// lwz r11,800(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820968fc
	if (!ctx.cr6.eq) goto loc_820968FC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-5000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82096a3c
	if (ctx.cr6.eq) goto loc_82096A3C;
loc_820968FC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,-18244(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -18244);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r8,r10,38568
	ctx.r8.u64 = ctx.r10.u64 | 38568;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r9,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ldx r5,r29,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r8.u32);
	// subfe r29,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// bl 0x821a8848
	ctx.lr = 0x82096940;
	sub_821A8848(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r11,-19792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19792);
	// li r7,16
	ctx.r7.s64 = 16;
	// ori r8,r9,38560
	ctx.r8.u64 = ctx.r9.u64 | 38560;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x821a88d0
	ctx.lr = 0x82096964;
	sub_821A88D0(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r11,-19792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19792);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// ori r6,r7,38564
	ctx.r6.u64 = ctx.r7.u64 | 38564;
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x821a8968
	ctx.lr = 0x8209697C;
	sub_821A8968(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821af640
	ctx.lr = 0x82096984;
	sub_821AF640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// beq cr6,0x820969c0
	if (ctx.cr6.eq) goto loc_820969C0;
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r25.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,8848
	ctx.r5.s64 = ctx.r10.s64 + 8848;
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// lwz r8,384(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r4,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r4.u32);
	// b 0x820969e8
	goto loc_820969E8;
loc_820969C0:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r11,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// addi r5,r10,8832
	ctx.r5.s64 = ctx.r10.s64 + 8832;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
loc_820969E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821a8c78
	ctx.lr = 0x820969F0;
	sub_821A8C78(ctx, base);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_820969F4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82095330
	ctx.lr = 0x82096A00;
	sub_82095330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820950d0
	ctx.lr = 0x82096A08;
	sub_820950D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// blt cr6,0x820969f4
	if (ctx.cr6.lt) goto loc_820969F4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x821a8dc0
	ctx.lr = 0x82096A3C;
	sub_821A8DC0(ctx, base);
loc_82096A3C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x82096A48;
	sub_821AD1F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad240
	ctx.lr = 0x82096A54;
	sub_821AD240(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x821a88d0
	ctx.lr = 0x82096A6C;
	sub_821A88D0(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82096A74"))) PPC_WEAK_FUNC(sub_82096A74);
PPC_FUNC_IMPL(__imp__sub_82096A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096A78"))) PPC_WEAK_FUNC(sub_82096A78);
PPC_FUNC_IMPL(__imp__sub_82096A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82096A80;
	sub_8224876C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// bl 0x821a2a18
	ctx.lr = 0x82096A94;
	sub_821A2A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82096ca0
	if (!ctx.cr6.eq) goto loc_82096CA0;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82096ca0
	if (ctx.cr6.eq) goto loc_82096CA0;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r21,-19792(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19792);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820924e8
	ctx.lr = 0x82096AB8;
	sub_820924E8(ctx, base);
	// lwz r10,524(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82096ca0
	if (ctx.cr6.eq) goto loc_82096CA0;
	// addi r28,r30,-32
	ctx.r28.s64 = ctx.r30.s64 + -32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82094278
	ctx.lr = 0x82096AD0;
	sub_82094278(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82095778
	ctx.lr = 0x82096AD8;
	sub_82095778(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-19048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// bl 0x821a29d0
	ctx.lr = 0x82096AE8;
	sub_821A29D0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82096AF8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82096af8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82096AF8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82082318
	ctx.lr = 0x82096B0C;
	sub_82082318(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,54
	ctx.r4.s64 = 54;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b16b8
	ctx.lr = 0x82096B20;
	sub_821B16B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ade68
	ctx.lr = 0x82096B28;
	sub_821ADE68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x82096B34;
	sub_821ADC30(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x82096B40;
	sub_821ADC58(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adca8
	ctx.lr = 0x82096B4C;
	sub_821ADCA8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x82096B58;
	sub_821ADCD0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add70
	ctx.lr = 0x82096B64;
	sub_821ADD70(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x82096B74;
	sub_821AD6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x82096B80;
	sub_821AD288(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x82096B8C;
	sub_821AD1F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x82096B98;
	sub_821AD240(ctx, base);
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x82096BA4;
	sub_821AD528(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x82096BB0;
	sub_821AD2D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,190
	ctx.r4.s64 = 190;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821b16b8
	ctx.lr = 0x82096BDC;
	sub_821B16B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,190
	ctx.r4.s64 = 190;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a90a8
	ctx.lr = 0x82096BF0;
	sub_821A90A8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// li r29,20
	ctx.r29.s64 = 20;
loc_82096BF8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096c18
	if (ctx.cr6.eq) goto loc_82096C18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82096C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82096C18:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82096bf8
	if (!ctx.cr0.eq) goto loc_82096BF8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,40168
	ctx.r10.u64 = ctx.r11.u64 | 40168;
	// lwzx r9,r21,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82096c40
	if (ctx.cr6.eq) goto loc_82096C40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82096770
	ctx.lr = 0x82096C40;
	sub_82096770(ctx, base);
loc_82096C40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6f8
	ctx.lr = 0x82096C4C;
	sub_821AD6F8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x82096C58;
	sub_821AD288(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x82096C64;
	sub_821AD1F8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x82096C70;
	sub_821AD240(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x82096C7C;
	sub_821AD528(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x82096C88;
	sub_821AD2D0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-7460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096ca0
	if (ctx.cr6.eq) goto loc_82096CA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821afba0
	ctx.lr = 0x82096CA0;
	sub_821AFBA0(ctx, base);
loc_82096CA0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82096CA8"))) PPC_WEAK_FUNC(sub_82096CA8);
PPC_FUNC_IMPL(__imp__sub_82096CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82096cf8
	if (ctx.cr6.eq) goto loc_82096CF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82096CDC;
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
loc_82096CF8:
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

__attribute__((alias("__imp__sub_82096D14"))) PPC_WEAK_FUNC(sub_82096D14);
PPC_FUNC_IMPL(__imp__sub_82096D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096D18"))) PPC_WEAK_FUNC(sub_82096D18);
PPC_FUNC_IMPL(__imp__sub_82096D18) {
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
	// addi r10,r11,8904
	ctx.r10.s64 = ctx.r11.s64 + 8904;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x82096D44;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82096d60
	if (ctx.cr6.eq) goto loc_82096D60;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82096D5C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82096D60:
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

__attribute__((alias("__imp__sub_82096D78"))) PPC_WEAK_FUNC(sub_82096D78);
PPC_FUNC_IMPL(__imp__sub_82096D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82096D90;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82096da8
	if (ctx.cr6.eq) goto loc_82096DA8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x82096DA4;
	sub_82183448(ctx, base);
	// b 0x82096db0
	goto loc_82096DB0;
loc_82096DA8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82096DB0;
	sub_821845A0(ctx, base);
loc_82096DB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096dc8
	if (ctx.cr6.eq) goto loc_82096DC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x82096DC0;
	sub_82188338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82096dcc
	goto loc_82096DCC;
loc_82096DC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82096DCC:
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

__attribute__((alias("__imp__sub_82096DE8"))) PPC_WEAK_FUNC(sub_82096DE8);
PPC_FUNC_IMPL(__imp__sub_82096DE8) {
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
	ctx.lr = 0x82096E04;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82096e1c
	if (ctx.cr6.eq) goto loc_82096E1C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x82096E18;
	sub_82183448(ctx, base);
	// b 0x82096e24
	goto loc_82096E24;
loc_82096E1C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x82096E24;
	sub_821845A0(ctx, base);
loc_82096E24:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82096e54
	if (ctx.cr6.eq) goto loc_82096E54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x82096E38;
	sub_82188338(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,8904
	ctx.r9.s64 = ctx.r11.s64 + 8904;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x82096e5c
	goto loc_82096E5C;
loc_82096E54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82096E5C:
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

__attribute__((alias("__imp__sub_82096E78"))) PPC_WEAK_FUNC(sub_82096E78);
PPC_FUNC_IMPL(__imp__sub_82096E78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82188498
	sub_82188498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82096E7C"))) PPC_WEAK_FUNC(sub_82096E7C);
PPC_FUNC_IMPL(__imp__sub_82096E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096E80"))) PPC_WEAK_FUNC(sub_82096E80);
PPC_FUNC_IMPL(__imp__sub_82096E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x82096eb0
	if (ctx.cr6.gt) goto loc_82096EB0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82096ea8
	if (ctx.cr6.gt) goto loc_82096EA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82096EA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82096EB0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,3
	ctx.r3.s64 = 3;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82096EC4"))) PPC_WEAK_FUNC(sub_82096EC4);
PPC_FUNC_IMPL(__imp__sub_82096EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096EC8"))) PPC_WEAK_FUNC(sub_82096EC8);
PPC_FUNC_IMPL(__imp__sub_82096EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82096ef0
	if (!ctx.cr6.gt) goto loc_82096EF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_82096EF0:
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
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82096F14"))) PPC_WEAK_FUNC(sub_82096F14);
PPC_FUNC_IMPL(__imp__sub_82096F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82096F18"))) PPC_WEAK_FUNC(sub_82096F18);
PPC_FUNC_IMPL(__imp__sub_82096F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f1,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// lfs f31,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f30,f1,f10,f9
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fmadds f3,f1,f8,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fmadds f2,f1,f7,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f2.f64));
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,-40(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f10,-80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f8,-76(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f7,-72(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f6,-64(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f5,-60(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fnmadds f1,f31,f6,f30
	ctx.f1.f64 = double(float(-(ctx.f31.f64 * ctx.f6.f64 + ctx.f30.f64)));
	// stfs f4,-56(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fnmadds f13,f31,f5,f3
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f5.f64 + ctx.f3.f64)));
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// fnmadds f12,f31,f4,f2
	ctx.f12.f64 = double(float(-(ctx.f31.f64 * ctx.f4.f64 + ctx.f2.f64)));
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f9,-20(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r4.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// std r7,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82097024"))) PPC_WEAK_FUNC(sub_82097024);
PPC_FUNC_IMPL(__imp__sub_82097024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097028"))) PPC_WEAK_FUNC(sub_82097028);
PPC_FUNC_IMPL(__imp__sub_82097028) {
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
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// bl 0x821882d0
	ctx.lr = 0x82097040;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209705c
	if (ctx.cr6.eq) goto loc_8209705C;
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
loc_8209705C:
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

__attribute__((alias("__imp__sub_82097070"))) PPC_WEAK_FUNC(sub_82097070);
PPC_FUNC_IMPL(__imp__sub_82097070) {
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
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x82097088;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820970a4
	if (ctx.cr6.eq) goto loc_820970A4;
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
loc_820970A4:
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

__attribute__((alias("__imp__sub_820970B8"))) PPC_WEAK_FUNC(sub_820970B8);
PPC_FUNC_IMPL(__imp__sub_820970B8) {
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
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820970D0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820970ec
	if (ctx.cr6.eq) goto loc_820970EC;
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
loc_820970EC:
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

__attribute__((alias("__imp__sub_82097100"))) PPC_WEAK_FUNC(sub_82097100);
PPC_FUNC_IMPL(__imp__sub_82097100) {
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
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x8209711C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097138
	if (ctx.cr6.eq) goto loc_82097138;
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
loc_82097138:
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

__attribute__((alias("__imp__sub_8209714C"))) PPC_WEAK_FUNC(sub_8209714C);
PPC_FUNC_IMPL(__imp__sub_8209714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097150"))) PPC_WEAK_FUNC(sub_82097150);
PPC_FUNC_IMPL(__imp__sub_82097150) {
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
	// addi r30,r3,1448
	ctx.r30.s64 = ctx.r3.s64 + 1448;
	// bl 0x8208e820
	ctx.lr = 0x82097170;
	sub_8208E820(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,1448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r8,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// bl 0x8208e5d8
	ctx.lr = 0x82097190;
	sub_8208E5D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,1448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r6,r4,30,1,1
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r6.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r11,r6,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// bl 0x8208e0b0
	ctx.lr = 0x820971B4;
	sub_8208E0B0(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// lwz r10,1448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// lis r12,-3089
	ctx.r12.s64 = -202440704;
	// subfe r7,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r8,1452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// ori r12,r12,32511
	ctx.r12.u64 = ctx.r12.u64 | 32511;
	// rlwimi r10,r7,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// and r5,r10,r12
	ctx.r5.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r5.u32);
	// lwz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// rlwimi r4,r3,7,24,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 7) & 0x80) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r6,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r6.u32);
	// rlwinm r11,r4,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8209720C"))) PPC_WEAK_FUNC(sub_8209720C);
PPC_FUNC_IMPL(__imp__sub_8209720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097210"))) PPC_WEAK_FUNC(sub_82097210);
PPC_FUNC_IMPL(__imp__sub_82097210) {
	PPC_FUNC_PROLOGUE();
	// b 0x82097150
	sub_82097150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82097214"))) PPC_WEAK_FUNC(sub_82097214);
PPC_FUNC_IMPL(__imp__sub_82097214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097218"))) PPC_WEAK_FUNC(sub_82097218);
PPC_FUNC_IMPL(__imp__sub_82097218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x82097234
	if (ctx.cr6.lt) goto loc_82097234;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// b 0x82097238
	goto loc_82097238;
loc_82097234:
	// fneg f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82097238:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x8209724c
	if (ctx.cr6.lt) goto loc_8209724C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82097250
	goto loc_82097250;
loc_8209724C:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82097250:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82097270
	if (!ctx.cr6.gt) goto loc_82097270;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x82097268
	if (ctx.cr6.gt) goto loc_82097268;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82097268:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82097270:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82097284"))) PPC_WEAK_FUNC(sub_82097284);
PPC_FUNC_IMPL(__imp__sub_82097284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82097288"))) PPC_WEAK_FUNC(sub_82097288);
PPC_FUNC_IMPL(__imp__sub_82097288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820972e4
	if (!ctx.cr6.eq) goto loc_820972E4;
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x820972B8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820972cc
	if (ctx.cr6.eq) goto loc_820972CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820972e4
	if (!ctx.cr6.eq) goto loc_820972E4;
loc_820972CC:
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
loc_820972E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820a6050
	ctx.lr = 0x820972EC;
	sub_820A6050(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82097308"))) PPC_WEAK_FUNC(sub_82097308);
PPC_FUNC_IMPL(__imp__sub_82097308) {
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
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209735c
	if (!ctx.cr6.eq) goto loc_8209735C;
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x82097340;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097354
	if (ctx.cr6.eq) goto loc_82097354;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209735c
	if (!ctx.cr6.eq) goto loc_8209735C;
loc_82097354:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82097370
	goto loc_82097370;
loc_8209735C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820a6050
	ctx.lr = 0x82097364;
	sub_820A6050(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r3,r11
	PPC_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u16);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82097370:
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

__attribute__((alias("__imp__sub_82097388"))) PPC_WEAK_FUNC(sub_82097388);
PPC_FUNC_IMPL(__imp__sub_82097388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820973a8
	if (ctx.cr6.lt) goto loc_820973A8;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x820973ac
	goto loc_820973AC;
loc_820973A8:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820973AC:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820973bc
	if (!ctx.cr6.lt) goto loc_820973BC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820973BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x820973e8
	if (ctx.cr6.gt) goto loc_820973E8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820973e8
	if (ctx.cr6.gt) goto loc_820973E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,570(r3)
	PPC_STORE_U8(ctx.r3.u32 + 570, ctx.r10.u8);
	// lfs f1,8956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8956);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820973E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f1,420(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,570(r3)
	PPC_STORE_U8(ctx.r3.u32 + 570, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820973F8"))) PPC_WEAK_FUNC(sub_820973F8);
PPC_FUNC_IMPL(__imp__sub_820973F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82097400;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// bl 0x821882d0
	ctx.lr = 0x82097430;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097440
	if (ctx.cr6.eq) goto loc_82097440;
	// lwz r25,24(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097444
	goto loc_82097444;
loc_82097440:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82097444:
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x82097454;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097464
	if (ctx.cr6.eq) goto loc_82097464;
	// lwz r27,24(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097468
	goto loc_82097468;
loc_82097464:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82097468:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820f03a8
	ctx.lr = 0x82097488;
	sub_820F03A8(ctx, base);
	// stw r31,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f03a8
	ctx.lr = 0x820974A4;
	sub_820F03A8(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r26,r30,1248
	ctx.r26.s64 = ctx.r30.s64 + 1248;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x820974BC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820974cc
	if (ctx.cr6.eq) goto loc_820974CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820974d0
	goto loc_820974D0;
loc_820974CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820974D0:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r24,r31,1248
	ctx.r24.s64 = ctx.r31.s64 + 1248;
	// addi r29,r10,-7560
	ctx.r29.s64 = ctx.r10.s64 + -7560;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 876, temp.u32);
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,880(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 880, temp.u32);
	// bl 0x821882d0
	ctx.lr = 0x820974FC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209750c
	if (ctx.cr6.eq) goto loc_8209750C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097510
	goto loc_82097510;
loc_8209750C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82097510:
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,1600
	ctx.r4.s64 = ctx.r30.s64 + 1600;
	// stfs f0,876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 876, temp.u32);
	// addi r3,r31,1748
	ctx.r3.s64 = ctx.r31.s64 + 1748;
	// lfs f0,60(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r5,116
	ctx.r5.s64 = 116;
	// stfs f0,880(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 880, temp.u32);
	// lwz r11,1936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stfs f31,2116(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// stfs f31,2152(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// stfs f31,2116(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2116, temp.u32);
	// stfs f31,2152(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2152, temp.u32);
	// lwz r11,1284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// bl 0x82248a40
	ctx.lr = 0x82097550;
	sub_82248A40(ctx, base);
	// lwz r10,1284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// addi r4,r31,1600
	ctx.r4.s64 = ctx.r31.s64 + 1600;
	// addi r3,r30,1748
	ctx.r3.s64 = ctx.r30.s64 + 1748;
	// li r5,116
	ctx.r5.s64 = 116;
	// stw r10,1736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1736, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x82097568;
	sub_82248A40(ctx, base);
	// lwz r6,1284(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// lwz r7,1284(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r27,456
	ctx.r11.s64 = ctx.r27.s64 + 456;
	// addi r8,r30,1871
	ctx.r8.s64 = ctx.r30.s64 + 1871;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r6,1740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1740, ctx.r6.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r7,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r7.u32);
loc_8209758C:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8209758c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209758C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r30,1863
	ctx.r10.s64 = ctx.r30.s64 + 1863;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820975A8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x820975a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820975A8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r25,456
	ctx.r11.s64 = ctx.r25.s64 + 456;
	// addi r9,r31,1871
	ctx.r9.s64 = ctx.r31.s64 + 1871;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820975C8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x820975c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820975C8;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r31,1863
	ctx.r10.s64 = ctx.r31.s64 + 1863;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820975E4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x820975e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820975E4;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x82097600;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097610
	if (ctx.cr6.eq) goto loc_82097610;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097614
	goto loc_82097614;
loc_82097610:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82097614:
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x82097624;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097634
	if (ctx.cr6.eq) goto loc_82097634;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097638
	goto loc_82097638;
loc_82097634:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82097638:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f21e0
	ctx.lr = 0x82097640;
	sub_820F21E0(ctx, base);
	// addi r29,r30,596
	ctx.r29.s64 = ctx.r30.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef488
	ctx.lr = 0x82097650;
	sub_820EF488(ctx, base);
	// addi r28,r31,596
	ctx.r28.s64 = ctx.r31.s64 + 596;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef488
	ctx.lr = 0x82097660;
	sub_820EF488(ctx, base);
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x82097670;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097680
	if (ctx.cr6.eq) goto loc_82097680;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82097684
	goto loc_82097684;
loc_82097680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82097684:
	// bl 0x820f0948
	ctx.lr = 0x82097688;
	sub_820F0948(ctx, base);
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x82097698;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820976a8
	if (ctx.cr6.eq) goto loc_820976A8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820976ac
	goto loc_820976AC;
loc_820976A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820976AC:
	// bl 0x820f0948
	ctx.lr = 0x820976B0;
	sub_820F0948(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ef490
	ctx.lr = 0x820976BC;
	sub_820EF490(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ef490
	ctx.lr = 0x820976C8;
	sub_820EF490(ctx, base);
	// addi r5,r31,1216
	ctx.r5.s64 = ctx.r31.s64 + 1216;
	// addi r4,r30,1216
	ctx.r4.s64 = ctx.r30.s64 + 1216;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82185510
	ctx.lr = 0x820976D8;
	sub_82185510(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820976E4"))) PPC_WEAK_FUNC(sub_820976E4);
PPC_FUNC_IMPL(__imp__sub_820976E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820976E8"))) PPC_WEAK_FUNC(sub_820976E8);
PPC_FUNC_IMPL(__imp__sub_820976E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820976F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,26450
	ctx.r4.s64 = 1733427200;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x8209770C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r9,r11,8968
	ctx.r9.s64 = ctx.r11.s64 + 8968;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82097734:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82097734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82097734;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r28,r11,-31936
	ctx.r28.s64 = ctx.r11.s64 + -31936;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82097750:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209776C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r8,r28,24
	ctx.r8.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82097750
	if (ctx.cr6.lt) goto loc_82097750;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,21071
	ctx.r4.s64 = 1380909056;
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// lwz r11,-8856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8856);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821882d0
	ctx.lr = 0x82097798;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820977b4
	if (ctx.cr6.eq) goto loc_820977B4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820977B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820977C8"))) PPC_WEAK_FUNC(sub_820977C8);
PPC_FUNC_IMPL(__imp__sub_820977C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820977D0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,26450
	ctx.r4.s64 = 1733427200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x821882d0
	ctx.lr = 0x820977F0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82097804
	if (ctx.cr6.eq) goto loc_82097804;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82097860
	if (!ctx.cr6.eq) goto loc_82097860;
loc_82097804:
	// bl 0x82182e90
	ctx.lr = 0x82097808;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82097810;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8209781C;
	sub_821837D0(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82080000
	ctx.lr = 0x82097824;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209783c
	if (ctx.cr6.eq) goto loc_8209783C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820976e8
	ctx.lr = 0x82097834;
	sub_820976E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82097840
	goto loc_82097840;
loc_8209783C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82097840:
	// lwz r3,1972(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82097858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82097860;
	sub_821837D0(ctx, base);
loc_82097860:
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// blt cr6,0x8209787c
	if (ctx.cr6.lt) goto loc_8209787C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8209787C:
	// stb r27,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r27.u8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,344(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82097894"))) PPC_WEAK_FUNC(sub_82097894);
PPC_FUNC_IMPL(__imp__sub_82097894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

