#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820EF4C8"))) PPC_WEAK_FUNC(sub_820EF4C8);
PPC_FUNC_IMPL(__imp__sub_820EF4C8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4D0"))) PPC_WEAK_FUNC(sub_820EF4D0);
PPC_FUNC_IMPL(__imp__sub_820EF4D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4D8"))) PPC_WEAK_FUNC(sub_820EF4D8);
PPC_FUNC_IMPL(__imp__sub_820EF4D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4E0"))) PPC_WEAK_FUNC(sub_820EF4E0);
PPC_FUNC_IMPL(__imp__sub_820EF4E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4E8"))) PPC_WEAK_FUNC(sub_820EF4E8);
PPC_FUNC_IMPL(__imp__sub_820EF4E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4F0"))) PPC_WEAK_FUNC(sub_820EF4F0);
PPC_FUNC_IMPL(__imp__sub_820EF4F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF4F8"))) PPC_WEAK_FUNC(sub_820EF4F8);
PPC_FUNC_IMPL(__imp__sub_820EF4F8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF500"))) PPC_WEAK_FUNC(sub_820EF500);
PPC_FUNC_IMPL(__imp__sub_820EF500) {
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
	// addi r10,r11,19688
	ctx.r10.s64 = ctx.r11.s64 + 19688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821863b8
	ctx.lr = 0x820EF52C;
	sub_821863B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ef548
	if (ctx.cr6.eq) goto loc_820EF548;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820EF544;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820EF548:
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

__attribute__((alias("__imp__sub_820EF560"))) PPC_WEAK_FUNC(sub_820EF560);
PPC_FUNC_IMPL(__imp__sub_820EF560) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f30,72(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f30,68(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// stfs f30,64(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r30.u32);
	// stfs f30,556(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 556, temp.u32);
	// stw r30,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r30.u32);
	// stfs f30,560(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 560, temp.u32);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82184800
	ctx.lr = 0x820EF5DC;
	sub_82184800(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82184800
	ctx.lr = 0x820EF5EC;
	sub_82184800(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r31,416
	ctx.r8.s64 = ctx.r31.s64 + 416;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// li r5,304
	ctx.r5.s64 = 304;
	// lfs f31,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r8,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r8.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f30,412(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f31,424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f31,420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f31,416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f30,428(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stfs f31,504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f30,508(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f31,512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f30,524(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// stw r7,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r7.u32);
	// stb r30,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r30.u8);
	// stb r30,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r30.u8);
	// stb r30,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r30.u8);
	// stb r30,572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 572, ctx.r30.u8);
	// stb r30,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r30.u8);
	// stb r30,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r30.u8);
	// stb r30,575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 575, ctx.r30.u8);
	// stb r30,576(r31)
	PPC_STORE_U8(ctx.r31.u32 + 576, ctx.r30.u8);
	// stb r30,577(r31)
	PPC_STORE_U8(ctx.r31.u32 + 577, ctx.r30.u8);
	// stb r30,578(r31)
	PPC_STORE_U8(ctx.r31.u32 + 578, ctx.r30.u8);
	// stb r30,579(r31)
	PPC_STORE_U8(ctx.r31.u32 + 579, ctx.r30.u8);
	// stb r30,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r30.u8);
	// stb r30,581(r31)
	PPC_STORE_U8(ctx.r31.u32 + 581, ctx.r30.u8);
	// stb r30,582(r31)
	PPC_STORE_U8(ctx.r31.u32 + 582, ctx.r30.u8);
	// stb r30,583(r31)
	PPC_STORE_U8(ctx.r31.u32 + 583, ctx.r30.u8);
	// stb r30,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r30.u8);
	// bl 0x82184800
	ctx.lr = 0x820EF6CC;
	sub_82184800(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// bl 0x82184800
	ctx.lr = 0x820EF6DC;
	sub_82184800(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stfs f31,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f31,448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f30,460(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f31,468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stfs f31,464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// stfs f30,476(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f30,492(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stb r30,585(r31)
	PPC_STORE_U8(ctx.r31.u32 + 585, ctx.r30.u8);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_820EF754"))) PPC_WEAK_FUNC(sub_820EF754);
PPC_FUNC_IMPL(__imp__sub_820EF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EF758"))) PPC_WEAK_FUNC(sub_820EF758);
PPC_FUNC_IMPL(__imp__sub_820EF758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820EF760;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// clrlwi r9,r4,17
	ctx.r9.u64 = ctx.r4.u32 & 0x7FFF;
	// rlwinm r7,r4,0,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r9.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r30.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r10,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r8.u32);
	// stw r30,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r30.u32);
	// beq cr6,0x820ef7c0
	if (ctx.cr6.eq) goto loc_820EF7C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
loc_820EF7C0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r28,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r28.u32);
	// stw r27,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ef7d8
	if (ctx.cr6.eq) goto loc_820EF7D8;
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
loc_820EF7D8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// beq cr6,0x820ef800
	if (ctx.cr6.eq) goto loc_820EF800;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x820ef840
	if (!ctx.cr6.eq) goto loc_820EF840;
loc_820EF800:
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f13,19700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19700);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x820ef844
	goto loc_820EF844;
loc_820EF840:
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_820EF844:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ef86c
	if (ctx.cr6.eq) goto loc_820EF86C;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82084b50
	ctx.lr = 0x820EF860;
	sub_82084B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820ef4b0
	ctx.lr = 0x820EF86C;
	sub_820EF4B0(ctx, base);
loc_820EF86C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820ef888
	if (ctx.cr6.eq) goto loc_820EF888;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820EF888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EF888:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ef8dc
	if (!ctx.cr6.eq) goto loc_820EF8DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3a78
	ctx.lr = 0x820EF89C;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ef8dc
	if (ctx.cr6.eq) goto loc_820EF8DC;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x820EF8B4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef8dc
	if (ctx.cr6.eq) goto loc_820EF8DC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef8dc
	if (ctx.cr6.eq) goto loc_820EF8DC;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x820fcfb8
	ctx.lr = 0x820EF8DC;
	sub_820FCFB8(ctx, base);
loc_820EF8DC:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820EF8F4"))) PPC_WEAK_FUNC(sub_820EF8F4);
PPC_FUNC_IMPL(__imp__sub_820EF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EF8F8"))) PPC_WEAK_FUNC(sub_820EF8F8);
PPC_FUNC_IMPL(__imp__sub_820EF8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820ef914
	if (ctx.cr6.eq) goto loc_820EF914;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820ef944
	if (!ctx.cr6.eq) goto loc_820EF944;
loc_820EF914:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,13532(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13532);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// blr 
	return;
loc_820EF944:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EF968"))) PPC_WEAK_FUNC(sub_820EF968);
PPC_FUNC_IMPL(__imp__sub_820EF968) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ef9bc
	if (ctx.cr6.eq) goto loc_820EF9BC;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820ef9bc
	if (ctx.cr6.eq) goto loc_820EF9BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7588
	ctx.lr = 0x820EF998;
	sub_820E7588(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820EF9BC:
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

__attribute__((alias("__imp__sub_820EF9D4"))) PPC_WEAK_FUNC(sub_820EF9D4);
PPC_FUNC_IMPL(__imp__sub_820EF9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EF9D8"))) PPC_WEAK_FUNC(sub_820EF9D8);
PPC_FUNC_IMPL(__imp__sub_820EF9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820EF9E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820EFA00;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,19704
	ctx.r10.s64 = ctx.r11.s64 + 19704;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820EFA24"))) PPC_WEAK_FUNC(sub_820EFA24);
PPC_FUNC_IMPL(__imp__sub_820EFA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820EFA28"))) PPC_WEAK_FUNC(sub_820EFA28);
PPC_FUNC_IMPL(__imp__sub_820EFA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820efa4c
	if (!ctx.cr6.eq) goto loc_820EFA4C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_820EFA4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820EFA60"))) PPC_WEAK_FUNC(sub_820EFA60);
PPC_FUNC_IMPL(__imp__sub_820EFA60) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820efa8c
	if (ctx.cr6.eq) goto loc_820EFA8C;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_820EFA8C:
	// lfs f0,404(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,404(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 404, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820efabc
	if (!ctx.cr6.gt) goto loc_820EFABC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820efad8
	goto loc_820EFAD8;
loc_820EFABC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820efadc
	if (!ctx.cr6.lt) goto loc_820EFADC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820EFAD8:
	// stfs f0,404(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 404, temp.u32);
loc_820EFADC:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x821875f8
	ctx.lr = 0x820EFAE8;
	sub_821875F8(ctx, base);
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,18543
	ctx.r4.u64 = ctx.r4.u64 | 18543;
	// bl 0x821882d0
	ctx.lr = 0x820EFAF8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820efccc
	if (ctx.cr6.eq) goto loc_820EFCCC;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820efccc
	if (ctx.cr6.eq) goto loc_820EFCCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f1,3316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x820EFB1C;
	sub_821876F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f1,8964(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8964);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x820EFB2C;
	sub_821876F8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820EFBAC;
	sub_82289C50(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82289c50
	ctx.lr = 0x820EFBBC;
	sub_82289C50(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82289c50
	ctx.lr = 0x820EFBCC;
	sub_82289C50(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// std r5,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r5.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r4.u64);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// std r3,192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 192, ctx.r3.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,200(r11)
	PPC_STORE_U64(ctx.r11.u32 + 200, ctx.r9.u64);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r11,208
	ctx.r5.s64 = ctx.r11.s64 + 208;
	// std r7,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r7.u64);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// std r4,216(r11)
	PPC_STORE_U64(ctx.r11.u32 + 216, ctx.r4.u64);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ld r3,240(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// std r3,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// ld r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// ld r6,256(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// lfs f0,2144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// ld r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 264);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r6,280(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// ld r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 296);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820EFC9C;
	sub_82289C50(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82289c50
	ctx.lr = 0x820EFCAC;
	sub_82289C50(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82289c50
	ctx.lr = 0x820EFCBC;
	sub_82289C50(ctx, base);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// b 0x820efeac
	goto loc_820EFEAC;
loc_820EFCCC:
	// lis r4,21299
	ctx.r4.s64 = 1395851264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19799
	ctx.r4.u64 = ctx.r4.u64 | 19799;
	// bl 0x821882d0
	ctx.lr = 0x820EFCDC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820efef4
	if (ctx.cr6.eq) goto loc_820EFEF4;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820efef4
	if (ctx.cr6.eq) goto loc_820EFEF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f1,3316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x820EFD00;
	sub_821876F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lfs f1,8964(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8964);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821876f8
	ctx.lr = 0x820EFD10;
	sub_821876F8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820EFD90;
	sub_82289C50(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x820EFDA0;
	sub_82289C50(ctx, base);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x820EFDB0;
	sub_82289C50(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// std r5,176(r11)
	PPC_STORE_U64(ctx.r11.u32 + 176, ctx.r5.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r4.u64);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r11,192
	ctx.r10.s64 = ctx.r11.s64 + 192;
	// std r3,192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 192, ctx.r3.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,200(r11)
	PPC_STORE_U64(ctx.r11.u32 + 200, ctx.r9.u64);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r11,208
	ctx.r5.s64 = ctx.r11.s64 + 208;
	// std r7,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r7.u64);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r4,216(r11)
	PPC_STORE_U64(ctx.r11.u32 + 216, ctx.r4.u64);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,240(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 240);
	// std r3,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// ld r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 248);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// ld r6,256(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// lfs f0,2144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// ld r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 264);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// ld r6,280(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 280);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// ld r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 288);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 296);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82289c50
	ctx.lr = 0x820EFE80;
	sub_82289C50(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x820EFE90;
	sub_82289C50(ctx, base);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82289c50
	ctx.lr = 0x820EFEA0;
	sub_82289C50(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
loc_820EFEAC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r5,r11,240
	ctx.r5.s64 = ctx.r11.s64 + 240;
	// std r4,240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 240, ctx.r4.u64);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,248(r11)
	PPC_STORE_U64(ctx.r11.u32 + 248, ctx.r3.u64);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// std r10,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r10.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,264(r11)
	PPC_STORE_U64(ctx.r11.u32 + 264, ctx.r8.u64);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r11,272
	ctx.r5.s64 = ctx.r11.s64 + 272;
	// std r7,272(r11)
	PPC_STORE_U64(ctx.r11.u32 + 272, ctx.r7.u64);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r4.u64);
loc_820EFEF4:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
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

__attribute__((alias("__imp__sub_820EFF10"))) PPC_WEAK_FUNC(sub_820EFF10);
PPC_FUNC_IMPL(__imp__sub_820EFF10) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,82
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 82, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-208
	ctx.r12.s64 = ctx.r12.s64 + -208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820EFF30"))) PPC_WEAK_FUNC(sub_820EFF30);
PPC_FUNC_IMPL(__imp__sub_820EFF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,124(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 124);
	// lwz r16,132(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 132);
	// lwz r16,140(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 140);
	// lwz r16,148(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 148);
	// lwz r16,156(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 156);
	// lwz r16,164(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 164);
	// lwz r16,172(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 172);
	// lwz r16,180(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 180);
	// lwz r16,188(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 188);
	// lwz r16,196(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 196);
	// lwz r16,204(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 204);
	// lwz r16,220(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 220);
	// lwz r16,244(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 244);
	// lwz r16,268(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 268);
	// lwz r16,276(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 276);
	// lwz r16,284(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 284);
	// lwz r16,292(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 292);
	// lwz r16,300(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 300);
	// lwz r16,308(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 308);
	// lwz r16,316(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 316);
	// lwz r16,324(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 324);
	// lwz r16,332(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 332);
	// lwz r16,340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 340);
	// lwz r16,348(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 348);
	// lwz r16,356(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 356);
	// lwz r16,364(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 364);
	// lwz r16,372(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 372);
	// lwz r16,380(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 380);
	// lwz r16,388(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 388);
	// lwz r16,308(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 308);
	// lwz r16,396(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 396);
	// lwz r16,404(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 404);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,412(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 412);
	// lwz r16,420(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 420);
	// lwz r16,428(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 428);
	// lwz r16,436(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 436);
	// lwz r16,444(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 444);
	// lwz r16,452(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 452);
	// lwz r16,460(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 460);
	// lwz r16,468(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 468);
	// lwz r16,476(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 476);
	// lwz r16,484(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 484);
	// lwz r16,492(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 492);
	// lwz r16,500(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 500);
	// lwz r16,508(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 508);
	// lwz r16,516(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 516);
	// lwz r16,524(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 524);
	// lwz r16,532(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 532);
	// lwz r16,540(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 540);
	// lwz r16,548(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 548);
	// lwz r16,556(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 556);
	// lwz r16,564(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 564);
	// lwz r16,572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 572);
	// lwz r16,580(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 580);
	// lwz r16,588(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 588);
	// lwz r16,596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 596);
	// lwz r16,604(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 604);
	// lwz r16,612(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 612);
	// lwz r16,620(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 620);
	// lwz r16,656(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 656);
	// lwz r16,692(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 692);
	// lwz r16,700(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 700);
	// lwz r16,708(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 708);
	// lwz r16,716(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 716);
	// lwz r16,724(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 724);
	// lwz r16,732(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 732);
	// lwz r16,740(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 740);
	// lwz r16,748(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 748);
	// lwz r16,756(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 756);
	// lwz r16,764(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 764);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,772(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 772);
	// lwz r16,780(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 780);
	// lwz r16,788(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 788);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0084"))) PPC_WEAK_FUNC(sub_820F0084);
PPC_FUNC_IMPL(__imp__sub_820F0084) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F008C"))) PPC_WEAK_FUNC(sub_820F008C);
PPC_FUNC_IMPL(__imp__sub_820F008C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0094"))) PPC_WEAK_FUNC(sub_820F0094);
PPC_FUNC_IMPL(__imp__sub_820F0094) {
	PPC_FUNC_PROLOGUE();
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F009C"))) PPC_WEAK_FUNC(sub_820F009C);
PPC_FUNC_IMPL(__imp__sub_820F009C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00A4"))) PPC_WEAK_FUNC(sub_820F00A4);
PPC_FUNC_IMPL(__imp__sub_820F00A4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00AC"))) PPC_WEAK_FUNC(sub_820F00AC);
PPC_FUNC_IMPL(__imp__sub_820F00AC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00B4"))) PPC_WEAK_FUNC(sub_820F00B4);
PPC_FUNC_IMPL(__imp__sub_820F00B4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00BC"))) PPC_WEAK_FUNC(sub_820F00BC);
PPC_FUNC_IMPL(__imp__sub_820F00BC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00C4"))) PPC_WEAK_FUNC(sub_820F00C4);
PPC_FUNC_IMPL(__imp__sub_820F00C4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00CC"))) PPC_WEAK_FUNC(sub_820F00CC);
PPC_FUNC_IMPL(__imp__sub_820F00CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00DC"))) PPC_WEAK_FUNC(sub_820F00DC);
PPC_FUNC_IMPL(__imp__sub_820F00DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F00F4"))) PPC_WEAK_FUNC(sub_820F00F4);
PPC_FUNC_IMPL(__imp__sub_820F00F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// li r9,4
	ctx.r9.s64 = 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F010C"))) PPC_WEAK_FUNC(sub_820F010C);
PPC_FUNC_IMPL(__imp__sub_820F010C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0114"))) PPC_WEAK_FUNC(sub_820F0114);
PPC_FUNC_IMPL(__imp__sub_820F0114) {
	PPC_FUNC_PROLOGUE();
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F011C"))) PPC_WEAK_FUNC(sub_820F011C);
PPC_FUNC_IMPL(__imp__sub_820F011C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0124"))) PPC_WEAK_FUNC(sub_820F0124);
PPC_FUNC_IMPL(__imp__sub_820F0124) {
	PPC_FUNC_PROLOGUE();
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F012C"))) PPC_WEAK_FUNC(sub_820F012C);
PPC_FUNC_IMPL(__imp__sub_820F012C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0134"))) PPC_WEAK_FUNC(sub_820F0134);
PPC_FUNC_IMPL(__imp__sub_820F0134) {
	PPC_FUNC_PROLOGUE();
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F013C"))) PPC_WEAK_FUNC(sub_820F013C);
PPC_FUNC_IMPL(__imp__sub_820F013C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0144"))) PPC_WEAK_FUNC(sub_820F0144);
PPC_FUNC_IMPL(__imp__sub_820F0144) {
	PPC_FUNC_PROLOGUE();
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F014C"))) PPC_WEAK_FUNC(sub_820F014C);
PPC_FUNC_IMPL(__imp__sub_820F014C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0154"))) PPC_WEAK_FUNC(sub_820F0154);
PPC_FUNC_IMPL(__imp__sub_820F0154) {
	PPC_FUNC_PROLOGUE();
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F015C"))) PPC_WEAK_FUNC(sub_820F015C);
PPC_FUNC_IMPL(__imp__sub_820F015C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0164"))) PPC_WEAK_FUNC(sub_820F0164);
PPC_FUNC_IMPL(__imp__sub_820F0164) {
	PPC_FUNC_PROLOGUE();
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F016C"))) PPC_WEAK_FUNC(sub_820F016C);
PPC_FUNC_IMPL(__imp__sub_820F016C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0174"))) PPC_WEAK_FUNC(sub_820F0174);
PPC_FUNC_IMPL(__imp__sub_820F0174) {
	PPC_FUNC_PROLOGUE();
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F017C"))) PPC_WEAK_FUNC(sub_820F017C);
PPC_FUNC_IMPL(__imp__sub_820F017C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0184"))) PPC_WEAK_FUNC(sub_820F0184);
PPC_FUNC_IMPL(__imp__sub_820F0184) {
	PPC_FUNC_PROLOGUE();
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F018C"))) PPC_WEAK_FUNC(sub_820F018C);
PPC_FUNC_IMPL(__imp__sub_820F018C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0194"))) PPC_WEAK_FUNC(sub_820F0194);
PPC_FUNC_IMPL(__imp__sub_820F0194) {
	PPC_FUNC_PROLOGUE();
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F019C"))) PPC_WEAK_FUNC(sub_820F019C);
PPC_FUNC_IMPL(__imp__sub_820F019C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01A4"))) PPC_WEAK_FUNC(sub_820F01A4);
PPC_FUNC_IMPL(__imp__sub_820F01A4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01AC"))) PPC_WEAK_FUNC(sub_820F01AC);
PPC_FUNC_IMPL(__imp__sub_820F01AC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01B4"))) PPC_WEAK_FUNC(sub_820F01B4);
PPC_FUNC_IMPL(__imp__sub_820F01B4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01BC"))) PPC_WEAK_FUNC(sub_820F01BC);
PPC_FUNC_IMPL(__imp__sub_820F01BC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01C4"))) PPC_WEAK_FUNC(sub_820F01C4);
PPC_FUNC_IMPL(__imp__sub_820F01C4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01CC"))) PPC_WEAK_FUNC(sub_820F01CC);
PPC_FUNC_IMPL(__imp__sub_820F01CC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01D4"))) PPC_WEAK_FUNC(sub_820F01D4);
PPC_FUNC_IMPL(__imp__sub_820F01D4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01DC"))) PPC_WEAK_FUNC(sub_820F01DC);
PPC_FUNC_IMPL(__imp__sub_820F01DC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01E4"))) PPC_WEAK_FUNC(sub_820F01E4);
PPC_FUNC_IMPL(__imp__sub_820F01E4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01EC"))) PPC_WEAK_FUNC(sub_820F01EC);
PPC_FUNC_IMPL(__imp__sub_820F01EC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01F4"))) PPC_WEAK_FUNC(sub_820F01F4);
PPC_FUNC_IMPL(__imp__sub_820F01F4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F01FC"))) PPC_WEAK_FUNC(sub_820F01FC);
PPC_FUNC_IMPL(__imp__sub_820F01FC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0204"))) PPC_WEAK_FUNC(sub_820F0204);
PPC_FUNC_IMPL(__imp__sub_820F0204) {
	PPC_FUNC_PROLOGUE();
	// stw r5,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F020C"))) PPC_WEAK_FUNC(sub_820F020C);
PPC_FUNC_IMPL(__imp__sub_820F020C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0214"))) PPC_WEAK_FUNC(sub_820F0214);
PPC_FUNC_IMPL(__imp__sub_820F0214) {
	PPC_FUNC_PROLOGUE();
	// stw r5,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F021C"))) PPC_WEAK_FUNC(sub_820F021C);
PPC_FUNC_IMPL(__imp__sub_820F021C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0224"))) PPC_WEAK_FUNC(sub_820F0224);
PPC_FUNC_IMPL(__imp__sub_820F0224) {
	PPC_FUNC_PROLOGUE();
	// stw r5,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F022C"))) PPC_WEAK_FUNC(sub_820F022C);
PPC_FUNC_IMPL(__imp__sub_820F022C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0234"))) PPC_WEAK_FUNC(sub_820F0234);
PPC_FUNC_IMPL(__imp__sub_820F0234) {
	PPC_FUNC_PROLOGUE();
	// stw r5,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F023C"))) PPC_WEAK_FUNC(sub_820F023C);
PPC_FUNC_IMPL(__imp__sub_820F023C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0244"))) PPC_WEAK_FUNC(sub_820F0244);
PPC_FUNC_IMPL(__imp__sub_820F0244) {
	PPC_FUNC_PROLOGUE();
	// stw r5,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F024C"))) PPC_WEAK_FUNC(sub_820F024C);
PPC_FUNC_IMPL(__imp__sub_820F024C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0254"))) PPC_WEAK_FUNC(sub_820F0254);
PPC_FUNC_IMPL(__imp__sub_820F0254) {
	PPC_FUNC_PROLOGUE();
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F025C"))) PPC_WEAK_FUNC(sub_820F025C);
PPC_FUNC_IMPL(__imp__sub_820F025C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0264"))) PPC_WEAK_FUNC(sub_820F0264);
PPC_FUNC_IMPL(__imp__sub_820F0264) {
	PPC_FUNC_PROLOGUE();
	// stw r5,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F026C"))) PPC_WEAK_FUNC(sub_820F026C);
PPC_FUNC_IMPL(__imp__sub_820F026C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f0288
	if (!ctx.cr6.eq) goto loc_820F0288;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x820f0288
	if (!ctx.cr6.eq) goto loc_820F0288;
	// li r11,5
	ctx.r11.s64 = 5;
loc_820F0288:
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0290"))) PPC_WEAK_FUNC(sub_820F0290);
PPC_FUNC_IMPL(__imp__sub_820F0290) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f02ac
	if (!ctx.cr6.eq) goto loc_820F02AC;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x820f02ac
	if (!ctx.cr6.eq) goto loc_820F02AC;
	// li r11,14
	ctx.r11.s64 = 14;
loc_820F02AC:
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02B4"))) PPC_WEAK_FUNC(sub_820F02B4);
PPC_FUNC_IMPL(__imp__sub_820F02B4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02BC"))) PPC_WEAK_FUNC(sub_820F02BC);
PPC_FUNC_IMPL(__imp__sub_820F02BC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02C4"))) PPC_WEAK_FUNC(sub_820F02C4);
PPC_FUNC_IMPL(__imp__sub_820F02C4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02CC"))) PPC_WEAK_FUNC(sub_820F02CC);
PPC_FUNC_IMPL(__imp__sub_820F02CC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02D4"))) PPC_WEAK_FUNC(sub_820F02D4);
PPC_FUNC_IMPL(__imp__sub_820F02D4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02DC"))) PPC_WEAK_FUNC(sub_820F02DC);
PPC_FUNC_IMPL(__imp__sub_820F02DC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02E4"))) PPC_WEAK_FUNC(sub_820F02E4);
PPC_FUNC_IMPL(__imp__sub_820F02E4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02EC"))) PPC_WEAK_FUNC(sub_820F02EC);
PPC_FUNC_IMPL(__imp__sub_820F02EC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02F4"))) PPC_WEAK_FUNC(sub_820F02F4);
PPC_FUNC_IMPL(__imp__sub_820F02F4) {
	PPC_FUNC_PROLOGUE();
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F02FC"))) PPC_WEAK_FUNC(sub_820F02FC);
PPC_FUNC_IMPL(__imp__sub_820F02FC) {
	PPC_FUNC_PROLOGUE();
	// stw r5,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0304"))) PPC_WEAK_FUNC(sub_820F0304);
PPC_FUNC_IMPL(__imp__sub_820F0304) {
	PPC_FUNC_PROLOGUE();
	// stw r5,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F030C"))) PPC_WEAK_FUNC(sub_820F030C);
PPC_FUNC_IMPL(__imp__sub_820F030C) {
	PPC_FUNC_PROLOGUE();
	// stw r5,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0314"))) PPC_WEAK_FUNC(sub_820F0314);
PPC_FUNC_IMPL(__imp__sub_820F0314) {
	PPC_FUNC_PROLOGUE();
	// stw r5,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F031C"))) PPC_WEAK_FUNC(sub_820F031C);
PPC_FUNC_IMPL(__imp__sub_820F031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0320"))) PPC_WEAK_FUNC(sub_820F0320);
PPC_FUNC_IMPL(__imp__sub_820F0320) {
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
	ctx.lr = 0x820F033C;
	sub_82185698(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r7,r11,19688
	ctx.r7.s64 = ctx.r11.s64 + 19688;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f0,420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f13,428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// bl 0x820ef560
	ctx.lr = 0x820F0390;
	sub_820EF560(ctx, base);
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

__attribute__((alias("__imp__sub_820F03A8"))) PPC_WEAK_FUNC(sub_820F03A8);
PPC_FUNC_IMPL(__imp__sub_820F03A8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x820ef758
	sub_820EF758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F03B0"))) PPC_WEAK_FUNC(sub_820F03B0);
PPC_FUNC_IMPL(__imp__sub_820F03B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820ef758
	sub_820EF758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F03C8"))) PPC_WEAK_FUNC(sub_820F03C8);
PPC_FUNC_IMPL(__imp__sub_820F03C8) {
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
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82184800
	ctx.lr = 0x820F03F0;
	sub_82184800(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820F0410"))) PPC_WEAK_FUNC(sub_820F0410);
PPC_FUNC_IMPL(__imp__sub_820F0410) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F0418;
	sub_82248788(ctx, base);
	// rlwimi r5,r4,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// lis r11,29515
	ctx.r11.s64 = 1934295040;
	// lis r10,29506
	ctx.r10.s64 = 1933705216;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwimi r6,r5,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// ori r30,r11,19801
	ctx.r30.u64 = ctx.r11.u64 | 19801;
	// ori r29,r10,19801
	ctx.r29.u64 = ctx.r10.u64 | 19801;
loc_820F0434:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f04c0
	if (ctx.cr6.eq) goto loc_820F04C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820f0458
	if (ctx.cr6.eq) goto loc_820F0458;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820f0458
	if (ctx.cr6.eq) goto loc_820F0458;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_820F0458:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f04c0
	if (ctx.cr6.eq) goto loc_820F04C0;
	// lwz r28,276(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r5,r11,276
	ctx.r5.s64 = ctx.r11.s64 + 276;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x820f04c0
	if (ctx.cr6.gt) goto loc_820F04C0;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820f04c0
	if (ctx.cr6.lt) goto loc_820F04C0;
loc_820F0490:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820f04d8
	if (ctx.cr6.eq) goto loc_820F04D8;
	// ble cr6,0x820f04b4
	if (!ctx.cr6.gt) goto loc_820F04B4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// b 0x820f04b8
	goto loc_820F04B8;
loc_820F04B4:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_820F04B8:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820f0490
	if (!ctx.cr6.gt) goto loc_820F0490;
loc_820F04C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r31,68
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 68, ctx.xer);
	// blt cr6,0x820f0434
	if (ctx.cr6.lt) goto loc_820F0434;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820F04D8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820f04e4
	if (ctx.cr6.eq) goto loc_820F04E4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_820F04E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F04EC"))) PPC_WEAK_FUNC(sub_820F04EC);
PPC_FUNC_IMPL(__imp__sub_820F04EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F04F0"))) PPC_WEAK_FUNC(sub_820F04F0);
PPC_FUNC_IMPL(__imp__sub_820F04F0) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x820f0410
	ctx.lr = 0x820F0504;
	sub_820F0410(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f0520
	if (!ctx.cr6.eq) goto loc_820F0520;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F0520:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0544"))) PPC_WEAK_FUNC(sub_820F0544);
PPC_FUNC_IMPL(__imp__sub_820F0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0548"))) PPC_WEAK_FUNC(sub_820F0548);
PPC_FUNC_IMPL(__imp__sub_820F0548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f060c
	if (ctx.cr6.eq) goto loc_820F060C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x820f0564
	if (ctx.cr6.gt) goto loc_820F0564;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820F0564:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820f060c
	if (ctx.cr6.eq) goto loc_820F060C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f060c
	if (ctx.cr6.eq) goto loc_820F060C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,65440
	ctx.r8.u64 = ctx.r9.u64 | 65440;
loc_820F05B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,96
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 96, ctx.xer);
	// blt cr6,0x820f05fc
	if (ctx.cr6.lt) goto loc_820F05FC;
	// bne cr6,0x820f05d8
	if (!ctx.cr6.eq) goto loc_820F05D8;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r4,r7,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x820f05e0
	goto loc_820F05E0;
loc_820F05D8:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
loc_820F05E0:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x820f0614
	if (ctx.cr6.eq) goto loc_820F0614;
	// bgt cr6,0x820f060c
	if (ctx.cr6.gt) goto loc_820F060C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x820f0600
	goto loc_820F0600;
loc_820F05FC:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_820F0600:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x820f05b0
	if (!ctx.cr6.gt) goto loc_820F05B0;
loc_820F060C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F0614:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0624"))) PPC_WEAK_FUNC(sub_820F0624);
PPC_FUNC_IMPL(__imp__sub_820F0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0628"))) PPC_WEAK_FUNC(sub_820F0628);
PPC_FUNC_IMPL(__imp__sub_820F0628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F0630;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x820f0410
	ctx.lr = 0x820F0650;
	sub_820F0410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f0660
	if (!ctx.cr6.eq) goto loc_820F0660;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820f0674
	goto loc_820F0674;
loc_820F0660:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_820F0674:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f0548
	ctx.lr = 0x820F068C;
	sub_820F0548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F0694"))) PPC_WEAK_FUNC(sub_820F0694);
PPC_FUNC_IMPL(__imp__sub_820F0694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0698"))) PPC_WEAK_FUNC(sub_820F0698);
PPC_FUNC_IMPL(__imp__sub_820F0698) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x820f0410
	ctx.lr = 0x820F06AC;
	sub_820F0410(ctx, base);
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

__attribute__((alias("__imp__sub_820F06C4"))) PPC_WEAK_FUNC(sub_820F06C4);
PPC_FUNC_IMPL(__imp__sub_820F06C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F06C8"))) PPC_WEAK_FUNC(sub_820F06C8);
PPC_FUNC_IMPL(__imp__sub_820F06C8) {
	PPC_FUNC_PROLOGUE();
	// li r10,17
	ctx.r10.s64 = 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F06D8:
	// lwz r10,-8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f06ec
	if (ctx.cr6.eq) goto loc_820F06EC;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F06EC:
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f0700
	if (ctx.cr6.eq) goto loc_820F0700;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F0700:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f0714
	if (ctx.cr6.eq) goto loc_820F0714;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F0714:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f0728
	if (ctx.cr6.eq) goto loc_820F0728;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F0728:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x820f06d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F06D8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0738"))) PPC_WEAK_FUNC(sub_820F0738);
PPC_FUNC_IMPL(__imp__sub_820F0738) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_820F0740:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f0774
	if (ctx.cr6.eq) goto loc_820F0774;
	// lwz r9,272(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820f0774
	if (!ctx.cr6.gt) goto loc_820F0774;
loc_820F075C:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820f078c
	if (ctx.cr6.eq) goto loc_820F078C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f075c
	if (ctx.cr6.lt) goto loc_820F075C;
loc_820F0774:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r7,68
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 68, ctx.xer);
	// blt cr6,0x820f0740
	if (ctx.cr6.lt) goto loc_820F0740;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F078C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r3,r11,276
	ctx.r3.s64 = ctx.r11.s64 + 276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F079C"))) PPC_WEAK_FUNC(sub_820F079C);
PPC_FUNC_IMPL(__imp__sub_820F079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F07A0"))) PPC_WEAK_FUNC(sub_820F07A0);
PPC_FUNC_IMPL(__imp__sub_820F07A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,29515
	ctx.r8.s64 = 1934295040;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ori r6,r8,19801
	ctx.r6.u64 = ctx.r8.u64 | 19801;
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
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820f0804
	if (ctx.cr6.eq) goto loc_820F0804;
	// lis r6,29506
	ctx.r6.s64 = 1933705216;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// ori r5,r6,19801
	ctx.r5.u64 = ctx.r6.u64 | 19801;
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x820f0804
	if (ctx.cr6.eq) goto loc_820F0804;
	// addi r7,r3,-16
	ctx.r7.s64 = ctx.r3.s64 + -16;
	// b 0x820f0848
	goto loc_820F0848;
loc_820F0804:
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_820F0848:
	// lbz r11,275(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 275);
	// addi r10,r7,272
	ctx.r10.s64 = ctx.r7.s64 + 272;
	// lbz r6,273(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 273);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,274(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 274);
	// lbz r5,272(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 272);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r7,272
	ctx.r11.s64 = ctx.r7.s64 + 272;
loc_820F0884:
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// stb r6,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r6.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r3,11(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r3,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r3.u8);
	// stb r7,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r7.u8);
	// stb r8,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r8.u8);
	// stb r6,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r6.u8);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r4,13(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r4,-6(r1)
	PPC_STORE_U8(ctx.r1.u32 + -6, ctx.r4.u8);
	// stb r7,-7(r1)
	PPC_STORE_U8(ctx.r1.u32 + -7, ctx.r7.u8);
	// stb r8,-8(r1)
	PPC_STORE_U8(ctx.r1.u32 + -8, ctx.r8.u8);
	// stb r3,-5(r1)
	PPC_STORE_U8(ctx.r1.u32 + -5, ctx.r3.u8);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lbz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r3,19(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// stb r5,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r5.u8);
	// stb r8,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r8.u8);
	// stb r3,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r3.u8);
	// stb r4,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r4.u8);
	// lwz r7,-4(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stwu r7,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820f0884
	if (ctx.cr6.lt) goto loc_820F0884;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0938"))) PPC_WEAK_FUNC(sub_820F0938);
PPC_FUNC_IMPL(__imp__sub_820F0938) {
	PPC_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// b 0x82184800
	sub_82184800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F0948"))) PPC_WEAK_FUNC(sub_820F0948);
PPC_FUNC_IMPL(__imp__sub_820F0948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// b 0x82184800
	sub_82184800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F0970"))) PPC_WEAK_FUNC(sub_820F0970);
PPC_FUNC_IMPL(__imp__sub_820F0970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0974"))) PPC_WEAK_FUNC(sub_820F0974);
PPC_FUNC_IMPL(__imp__sub_820F0974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0978"))) PPC_WEAK_FUNC(sub_820F0978);
PPC_FUNC_IMPL(__imp__sub_820F0978) {
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
	// addi r8,r11,19792
	ctx.r8.s64 = ctx.r11.s64 + 19792;
	// addi r7,r10,19784
	ctx.r7.s64 = ctx.r10.s64 + 19784;
	// addi r6,r9,19752
	ctx.r6.s64 = ctx.r9.s64 + 19752;
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
	ctx.lr = 0x820F09C0;
	sub_821883B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x820F09C8;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821863b8
	ctx.lr = 0x820F09D0;
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

__attribute__((alias("__imp__sub_820F09E8"))) PPC_WEAK_FUNC(sub_820F09E8);
PPC_FUNC_IMPL(__imp__sub_820F09E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820f0a24
	if (!ctx.cr6.gt) goto loc_820F0A24;
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
loc_820F0A04:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820f0a24
	if (ctx.cr6.eq) goto loc_820F0A24;
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820f0a04
	if (ctx.cr6.lt) goto loc_820F0A04;
loc_820F0A24:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820f0a64
	if (!ctx.cr6.lt) goto loc_820F0A64;
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// addi r7,r10,18
	ctx.r7.s64 = ctx.r10.s64 + 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_820F0A48:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820f0a48
	if (ctx.cr6.lt) goto loc_820F0A48;
loc_820F0A64:
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0A6C"))) PPC_WEAK_FUNC(sub_820F0A6C);
PPC_FUNC_IMPL(__imp__sub_820F0A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0A70"))) PPC_WEAK_FUNC(sub_820F0A70);
PPC_FUNC_IMPL(__imp__sub_820F0A70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x820f0bb8
	sub_820F0BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F0A78"))) PPC_WEAK_FUNC(sub_820F0A78);
PPC_FUNC_IMPL(__imp__sub_820F0A78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x820f0bb8
	sub_820F0BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F0A80"))) PPC_WEAK_FUNC(sub_820F0A80);
PPC_FUNC_IMPL(__imp__sub_820F0A80) {
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
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F0AAC;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r9,r10,19832
	ctx.r9.s64 = ctx.r10.s64 + 19832;
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820F0ADC;
	sub_82184800(ctx, base);
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

__attribute__((alias("__imp__sub_820F0AF8"))) PPC_WEAK_FUNC(sub_820F0AF8);
PPC_FUNC_IMPL(__imp__sub_820F0AF8) {
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
	ctx.lr = 0x820F0B14;
	sub_82185698(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82185740
	ctx.lr = 0x820F0B24;
	sub_82185740(ctx, base);
	// lis r4,16707
	ctx.r4.s64 = 1094909952;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x82188378
	ctx.lr = 0x820F0B38;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r7,r11,19792
	ctx.r7.s64 = ctx.r11.s64 + 19792;
	// addi r6,r10,19784
	ctx.r6.s64 = ctx.r10.s64 + 19784;
	// addi r5,r9,19752
	ctx.r5.s64 = ctx.r9.s64 + 19752;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r31,-4896(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4896, ctx.r31.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x820F0B84;
	sub_822AA648(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x822aa648
	ctx.lr = 0x820F0B90;
	sub_822AA648(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x822aa648
	ctx.lr = 0x820F0B9C;
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

__attribute__((alias("__imp__sub_820F0BB4"))) PPC_WEAK_FUNC(sub_820F0BB4);
PPC_FUNC_IMPL(__imp__sub_820F0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0BB8"))) PPC_WEAK_FUNC(sub_820F0BB8);
PPC_FUNC_IMPL(__imp__sub_820F0BB8) {
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
	// bl 0x820f0978
	ctx.lr = 0x820F0BD8;
	sub_820F0978(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f0bf4
	if (ctx.cr6.eq) goto loc_820F0BF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F0BF0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F0BF4:
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

__attribute__((alias("__imp__sub_820F0C0C"))) PPC_WEAK_FUNC(sub_820F0C0C);
PPC_FUNC_IMPL(__imp__sub_820F0C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0C10"))) PPC_WEAK_FUNC(sub_820F0C10);
PPC_FUNC_IMPL(__imp__sub_820F0C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x820F0C18;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r20,r3,244
	ctx.r20.s64 = ctx.r3.s64 + 244;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822aa648
	ctx.lr = 0x820F0C34;
	sub_822AA648(ctx, base);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f0c5c
	if (!ctx.cr6.gt) goto loc_820F0C5C;
	// addi r10,r20,-4
	ctx.r10.s64 = ctx.r20.s64 + -4;
loc_820F0C48:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,48(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f0c48
	if (ctx.cr6.lt) goto loc_820F0C48;
loc_820F0C5C:
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820f0c8c
	if (!ctx.cr6.eq) goto loc_820F0C8C;
	// lwz r11,436(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f0c84
	if (!ctx.cr6.eq) goto loc_820F0C84;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r9.u32);
	// stw r8,248(r27)
	PPC_STORE_U32(ctx.r27.u32 + 248, ctx.r8.u32);
loc_820F0C84:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,436(r27)
	PPC_STORE_U32(ctx.r27.u32 + 436, ctx.r11.u32);
loc_820F0C8C:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f0ee0
	if (!ctx.cr6.gt) goto loc_820F0EE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lis r23,256
	ctx.r23.s64 = 16777216;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820F0CA8:
	// lwz r24,0(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r24,13
	ctx.r11.s64 = ctx.r24.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r27
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r9,436(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f0ecc
	if (ctx.cr6.eq) goto loc_820F0ECC;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f0ecc
	if (ctx.cr6.eq) goto loc_820F0ECC;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820f0ecc
	if (ctx.cr6.eq) goto loc_820F0ECC;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f0e00
	if (!ctx.cr6.gt) goto loc_820F0E00;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_820F0CF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820f0dec
	if (ctx.cr6.eq) goto loc_820F0DEC;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f0dec
	if (ctx.cr6.eq) goto loc_820F0DEC;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f0dec
	if (ctx.cr6.eq) goto loc_820F0DEC;
	// lwz r9,432(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// addi r31,r28,368
	ctx.r31.s64 = ctx.r28.s64 + 368;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
loc_820F0D34:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x820f0dec
	if (ctx.cr6.eq) goto loc_820F0DEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x820f0d34
	if (ctx.cr6.lt) goto loc_820F0D34;
	// lwz r30,32(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82190760
	ctx.lr = 0x820F0D60;
	sub_82190760(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x820f0dec
	if (!ctx.cr6.eq) goto loc_820F0DEC;
	// lwzx r9,r29,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
loc_820F0D84:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x820f0da4
	if (ctx.cr6.eq) goto loc_820F0DA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x820f0d84
	if (ctx.cr6.lt) goto loc_820F0D84;
	// b 0x820f0db0
	goto loc_820F0DB0;
loc_820F0DA4:
	// addi r11,r11,46
	ctx.r11.s64 = ctx.r11.s64 + 46;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r10,r28
	PPC_STORE_U64(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u64);
loc_820F0DB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r29,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F0DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r29,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F0DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F0DEC:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f0cf0
	if (ctx.cr6.lt) goto loc_820F0CF0;
loc_820F0E00:
	// lwz r11,440(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 440);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f0ecc
	if (!ctx.cr6.gt) goto loc_820F0ECC;
	// addi r30,r28,368
	ctx.r30.s64 = ctx.r28.s64 + 368;
	// addi r31,r27,444
	ctx.r31.s64 = ctx.r27.s64 + 444;
loc_820F0E18:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
loc_820F0E2C:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r9
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x820f0eb8
	if (ctx.cr6.eq) goto loc_820F0EB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x820f0e2c
	if (ctx.cr6.lt) goto loc_820F0E2C;
	// lwz r11,432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x820f0eb8
	if (ctx.cr6.eq) goto loc_820F0EB8;
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82190760
	ctx.lr = 0x820F0E68;
	sub_82190760(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x820f0eb8
	if (!ctx.cr6.eq) goto loc_820F0EB8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
loc_820F0E8C:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x820f0eac
	if (ctx.cr6.eq) goto loc_820F0EAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x820f0e8c
	if (ctx.cr6.lt) goto loc_820F0E8C;
	// b 0x820f0eb8
	goto loc_820F0EB8;
loc_820F0EAC:
	// addi r11,r11,46
	ctx.r11.s64 = ctx.r11.s64 + 46;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r10,r28
	PPC_STORE_U64(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u64);
loc_820F0EB8:
	// lwz r11,440(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 440);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f0e18
	if (ctx.cr6.lt) goto loc_820F0E18;
loc_820F0ECC:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f0ca8
	if (ctx.cr6.lt) goto loc_820F0CA8;
loc_820F0EE0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_820F0EEC"))) PPC_WEAK_FUNC(sub_820F0EEC);
PPC_FUNC_IMPL(__imp__sub_820F0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0EF0"))) PPC_WEAK_FUNC(sub_820F0EF0);
PPC_FUNC_IMPL(__imp__sub_820F0EF0) {
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
	// lis r4,16707
	ctx.r4.s64 = 1094909952;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820F0F14;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f0f30
	if (ctx.cr6.eq) goto loc_820F0F30;
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
loc_820F0F30:
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

__attribute__((alias("__imp__sub_820F0F44"))) PPC_WEAK_FUNC(sub_820F0F44);
PPC_FUNC_IMPL(__imp__sub_820F0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0F48"))) PPC_WEAK_FUNC(sub_820F0F48);
PPC_FUNC_IMPL(__imp__sub_820F0F48) {
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
	// lis r4,19563
	ctx.r4.s64 = 1282080768;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17260
	ctx.r4.u64 = ctx.r4.u64 | 17260;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F0F6C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r10,r11,19800
	ctx.r10.s64 = ctx.r11.s64 + 19800;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183850
	ctx.lr = 0x820F0F80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f0f98
	if (ctx.cr6.eq) goto loc_820F0F98;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x820F0F94;
	sub_82183448(ctx, base);
	// b 0x820f0fa0
	goto loc_820F0FA0;
loc_820F0F98:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820F0FA0;
	sub_821845A0(ctx, base);
loc_820F0FA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f0fb4
	if (ctx.cr6.eq) goto loc_820F0FB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820F0FB0;
	sub_82188338(ctx, base);
	// b 0x820f0fb8
	goto loc_820F0FB8;
loc_820F0FB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F0FB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0FDC"))) PPC_WEAK_FUNC(sub_820F0FDC);
PPC_FUNC_IMPL(__imp__sub_820F0FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0FE0"))) PPC_WEAK_FUNC(sub_820F0FE0);
PPC_FUNC_IMPL(__imp__sub_820F0FE0) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,19800
	ctx.r10.s64 = ctx.r11.s64 + 19800;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82188590
	ctx.lr = 0x820F1010;
	sub_82188590(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1030
	if (ctx.cr6.eq) goto loc_820F1030;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820F1038;
	sub_821883B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1054
	if (ctx.cr6.eq) goto loc_820F1054;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F1050;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F1054:
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

__attribute__((alias("__imp__sub_820F106C"))) PPC_WEAK_FUNC(sub_820F106C);
PPC_FUNC_IMPL(__imp__sub_820F106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1070"))) PPC_WEAK_FUNC(sub_820F1070);
PPC_FUNC_IMPL(__imp__sub_820F1070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1080"))) PPC_WEAK_FUNC(sub_820F1080);
PPC_FUNC_IMPL(__imp__sub_820F1080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f10a0
	if (ctx.cr6.eq) goto loc_820F10A0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// blr 
	return;
loc_820F10A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F10A8"))) PPC_WEAK_FUNC(sub_820F10A8);
PPC_FUNC_IMPL(__imp__sub_820F10A8) {
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
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,19832
	ctx.r9.s64 = ctx.r11.s64 + 19832;
	// lis r4,16707
	ctx.r4.s64 = 1094909952;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// lwz r11,-9772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820F10E0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f10f0
	if (ctx.cr6.eq) goto loc_820F10F0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f10f4
	goto loc_820F10F4;
loc_820F10F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F10F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f09e8
	ctx.lr = 0x820F10FC;
	sub_820F09E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820F1104;
	sub_821883B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1118"))) PPC_WEAK_FUNC(sub_820F1118);
PPC_FUNC_IMPL(__imp__sub_820F1118) {
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
	// lis r4,16707
	ctx.r4.s64 = 1094909952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820F1144;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1174
	if (ctx.cr6.eq) goto loc_820F1174;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1174
	if (ctx.cr6.eq) goto loc_820F1174;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 + 19;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
loc_820F1174:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1188"))) PPC_WEAK_FUNC(sub_820F1188);
PPC_FUNC_IMPL(__imp__sub_820F1188) {
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
	// lis r4,16707
	ctx.r4.s64 = 1094909952;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// lwz r11,-9772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820F11B0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f11c4
	if (ctx.cr6.eq) goto loc_820F11C4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1200
	if (!ctx.cr6.eq) goto loc_820F1200;
loc_820F11C4:
	// li r3,504
	ctx.r3.s64 = 504;
	// bl 0x82080000
	ctx.lr = 0x820F11CC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f11e4
	if (ctx.cr6.eq) goto loc_820F11E4;
	// bl 0x820f0af8
	ctx.lr = 0x820F11D8;
	sub_820F0AF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// bne cr6,0x820f11e8
	if (!ctx.cr6.eq) goto loc_820F11E8;
loc_820F11E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F11E8:
	// lwz r11,-9772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1214"))) PPC_WEAK_FUNC(sub_820F1214);
PPC_FUNC_IMPL(__imp__sub_820F1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1218"))) PPC_WEAK_FUNC(sub_820F1218);
PPC_FUNC_IMPL(__imp__sub_820F1218) {
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
	// bl 0x820f10a8
	ctx.lr = 0x820F1238;
	sub_820F10A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1254
	if (ctx.cr6.eq) goto loc_820F1254;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F1250;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F1254:
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

__attribute__((alias("__imp__sub_820F126C"))) PPC_WEAK_FUNC(sub_820F126C);
PPC_FUNC_IMPL(__imp__sub_820F126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1270"))) PPC_WEAK_FUNC(sub_820F1270);
PPC_FUNC_IMPL(__imp__sub_820F1270) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820F1298"))) PPC_WEAK_FUNC(sub_820F1298);
PPC_FUNC_IMPL(__imp__sub_820F1298) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
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

__attribute__((alias("__imp__sub_820F12AC"))) PPC_WEAK_FUNC(sub_820F12AC);
PPC_FUNC_IMPL(__imp__sub_820F12AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F12B0"))) PPC_WEAK_FUNC(sub_820F12B0);
PPC_FUNC_IMPL(__imp__sub_820F12B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820F12C4"))) PPC_WEAK_FUNC(sub_820F12C4);
PPC_FUNC_IMPL(__imp__sub_820F12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F12C8"))) PPC_WEAK_FUNC(sub_820F12C8);
PPC_FUNC_IMPL(__imp__sub_820F12C8) {
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
	// addi r30,r3,-1248
	ctx.r30.s64 = ctx.r3.s64 + -1248;
	// lwz r3,724(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1304
	if (ctx.cr6.eq) goto loc_820F1304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1304:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,1972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1972, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,-1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820F1334"))) PPC_WEAK_FUNC(sub_820F1334);
PPC_FUNC_IMPL(__imp__sub_820F1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1338"))) PPC_WEAK_FUNC(sub_820F1338);
PPC_FUNC_IMPL(__imp__sub_820F1338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F1340;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1904(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,20856
	ctx.r6.s64 = ctx.r11.s64 + 20856;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r7,20824
	ctx.r3.s64 = ctx.r7.s64 + 20824;
	// addi r5,r9,20816
	ctx.r5.s64 = ctx.r9.s64 + 20816;
	// addi r4,r8,20808
	ctx.r4.s64 = ctx.r8.s64 + 20808;
	// stw r3,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r3.u32);
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// addi r29,r31,1216
	ctx.r29.s64 = ctx.r31.s64 + 1216;
	// stw r5,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r5.u32);
	// addi r28,r31,1232
	ctx.r28.s64 = ctx.r31.s64 + 1232;
	// stw r4,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r4.u32);
	// addi r27,r31,1248
	ctx.r27.s64 = ctx.r31.s64 + 1248;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f13d4
	if (ctx.cr6.eq) goto loc_820F13D4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f13b0
	if (ctx.cr6.eq) goto loc_820F13B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F13B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F13B0:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f14d0
	if (ctx.cr6.eq) goto loc_820F14D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F13D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f14d0
	goto loc_820F14D0;
loc_820F13D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f13f0
	if (ctx.cr6.eq) goto loc_820F13F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F13F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F13F0:
	// lwz r3,1296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1418
	if (ctx.cr6.eq) goto loc_820F1418;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1418:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r30,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f143c
	if (ctx.cr6.eq) goto loc_820F143C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F143C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F143C:
	// lwz r3,1940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1460
	if (ctx.cr6.eq) goto loc_820F1460;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1460:
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1484
	if (ctx.cr6.eq) goto loc_820F1484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1484:
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r30,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f14a8
	if (ctx.cr6.eq) goto loc_820F14A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F14A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F14A8:
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// stw r30,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f14cc
	if (ctx.cr6.eq) goto loc_820F14CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F14CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F14CC:
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
loc_820F14D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821883b8
	ctx.lr = 0x820F14D8;
	sub_821883B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82185a50
	ctx.lr = 0x820F14E0;
	sub_82185A50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x820F14E8;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef340
	ctx.lr = 0x820F14F0;
	sub_820EF340(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F14F8"))) PPC_WEAK_FUNC(sub_820F14F8);
PPC_FUNC_IMPL(__imp__sub_820F14F8) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82188608
	ctx.lr = 0x820F1514;
	sub_82188608(ctx, base);
	// addi r11,r31,-752
	ctx.r11.s64 = ctx.r31.s64 + -752;
	// addi r11,r31,-768
	ctx.r11.s64 = ctx.r31.s64 + -768;
	// ld r10,-744(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -744);
	// ld r9,-768(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -768);
	// addi r3,r31,-1216
	ctx.r3.s64 = ctx.r31.s64 + -1216;
	// ld r8,-760(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -760);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,-784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -784);
	// std r10,-728(r31)
	PPC_STORE_U64(ctx.r31.u32 + -728, ctx.r10.u64);
	// std r8,-744(r31)
	PPC_STORE_U64(ctx.r31.u32 + -744, ctx.r8.u64);
	// ld r11,-752(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -752);
	// std r9,-752(r31)
	PPC_STORE_U64(ctx.r31.u32 + -752, ctx.r9.u64);
	// std r11,-736(r31)
	PPC_STORE_U64(ctx.r31.u32 + -736, ctx.r11.u64);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r6,-768(r31)
	PPC_STORE_U64(ctx.r31.u32 + -768, ctx.r6.u64);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,-760(r31)
	PPC_STORE_U64(ctx.r31.u32 + -760, ctx.r5.u64);
	// lwz r11,-1216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1216);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1568;
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

__attribute__((alias("__imp__sub_820F157C"))) PPC_WEAK_FUNC(sub_820F157C);
PPC_FUNC_IMPL(__imp__sub_820F157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1580"))) PPC_WEAK_FUNC(sub_820F1580);
PPC_FUNC_IMPL(__imp__sub_820F1580) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f159c
	if (ctx.cr6.eq) goto loc_820F159C;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_820F159C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f15b0
	if (ctx.cr6.eq) goto loc_820F15B0;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_820F15B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F15C0"))) PPC_WEAK_FUNC(sub_820F15C0);
PPC_FUNC_IMPL(__imp__sub_820F15C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f15cc
	if (!ctx.cr6.eq) goto loc_820F15CC;
	// blr 
	return;
loc_820F15CC:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f15e8
	if (!ctx.cr6.eq) goto loc_820F15E8;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820F15E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F15F0"))) PPC_WEAK_FUNC(sub_820F15F0);
PPC_FUNC_IMPL(__imp__sub_820F15F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1640
	if (ctx.cr6.eq) goto loc_820F1640;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f1640
	if (ctx.cr6.eq) goto loc_820F1640;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1620
	if (ctx.cr6.eq) goto loc_820F1620;
loc_820F160C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820f1648
	if (ctx.cr6.eq) goto loc_820F1648;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f160c
	if (!ctx.cr6.eq) goto loc_820F160C;
loc_820F1620:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1640
	if (ctx.cr6.eq) goto loc_820F1640;
loc_820F162C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820f1648
	if (ctx.cr6.eq) goto loc_820F1648;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f162c
	if (!ctx.cr6.eq) goto loc_820F162C;
loc_820F1640:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F1648:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1650"))) PPC_WEAK_FUNC(sub_820F1650);
PPC_FUNC_IMPL(__imp__sub_820F1650) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f169c
	if (ctx.cr6.eq) goto loc_820F169C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1674
	if (ctx.cr6.eq) goto loc_820F1674;
loc_820F1664:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1664
	if (!ctx.cr6.eq) goto loc_820F1664;
loc_820F1674:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820F1680:
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f169c
	if (ctx.cr6.eq) goto loc_820F169C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820f1680
	if (!ctx.cr6.eq) goto loc_820F1680;
	// blr 
	return;
loc_820F169C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F16A4"))) PPC_WEAK_FUNC(sub_820F16A4);
PPC_FUNC_IMPL(__imp__sub_820F16A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F16A8"))) PPC_WEAK_FUNC(sub_820F16A8);
PPC_FUNC_IMPL(__imp__sub_820F16A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f16b4
	if (!ctx.cr6.eq) goto loc_820F16B4;
	// blr 
	return;
loc_820F16B4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820F16B8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f16d8
	if (ctx.cr6.eq) goto loc_820F16D8;
loc_820F16C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f16c8
	if (!ctx.cr6.eq) goto loc_820F16C8;
loc_820F16D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f1704
	if (ctx.cr6.eq) goto loc_820F1704;
loc_820F16E4:
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f1700
	if (ctx.cr6.eq) goto loc_820F1700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820f16e4
	if (!ctx.cr6.eq) goto loc_820F16E4;
	// b 0x820f1704
	goto loc_820F1704;
loc_820F1700:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820F1704:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f171c
	if (ctx.cr6.eq) goto loc_820F171C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x820f16b8
	goto loc_820F16B8;
loc_820F171C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1724"))) PPC_WEAK_FUNC(sub_820F1724);
PPC_FUNC_IMPL(__imp__sub_820F1724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1728"))) PPC_WEAK_FUNC(sub_820F1728);
PPC_FUNC_IMPL(__imp__sub_820F1728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F1730;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-27032
	ctx.r29.s64 = ctx.r11.s64 + -27032;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f17e8
	if (ctx.cr6.eq) goto loc_820F17E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
loc_820F1758:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820f17c4
	if (ctx.cr6.lt) goto loc_820F17C4;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f17a4
	if (ctx.cr6.eq) goto loc_820F17A4;
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r6.u32);
loc_820F17A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r8,r11,53
	ctx.r8.s64 = ctx.r11.s64 + 53;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r6.u32);
loc_820F17C4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x820f1758
	if (!ctx.cr6.eq) goto loc_820F1758;
loc_820F17E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F17F0"))) PPC_WEAK_FUNC(sub_820F17F0);
PPC_FUNC_IMPL(__imp__sub_820F17F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,20368
	ctx.r11.s64 = ctx.r11.s64 + 20368;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1804"))) PPC_WEAK_FUNC(sub_820F1804);
PPC_FUNC_IMPL(__imp__sub_820F1804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1808"))) PPC_WEAK_FUNC(sub_820F1808);
PPC_FUNC_IMPL(__imp__sub_820F1808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1818"))) PPC_WEAK_FUNC(sub_820F1818);
PPC_FUNC_IMPL(__imp__sub_820F1818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1232
	ctx.r3.s64 = ctx.r3.s64 + -1232;
	// b 0x820f1ab8
	sub_820F1AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F1820"))) PPC_WEAK_FUNC(sub_820F1820);
PPC_FUNC_IMPL(__imp__sub_820F1820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1216
	ctx.r3.s64 = ctx.r3.s64 + -1216;
	// b 0x820f1ab8
	sub_820F1AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F1828"))) PPC_WEAK_FUNC(sub_820F1828);
PPC_FUNC_IMPL(__imp__sub_820F1828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1248
	ctx.r3.s64 = ctx.r3.s64 + -1248;
	// b 0x820f1ab8
	sub_820F1AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F1830"))) PPC_WEAK_FUNC(sub_820F1830);
PPC_FUNC_IMPL(__imp__sub_820F1830) {
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
	// addi r10,r11,20776
	ctx.r10.s64 = ctx.r11.s64 + 20776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820F185C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f1878
	if (ctx.cr6.eq) goto loc_820F1878;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F1874;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F1878:
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

__attribute__((alias("__imp__sub_820F1890"))) PPC_WEAK_FUNC(sub_820F1890);
PPC_FUNC_IMPL(__imp__sub_820F1890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82188608
	sub_82188608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F18A0"))) PPC_WEAK_FUNC(sub_820F18A0);
PPC_FUNC_IMPL(__imp__sub_820F18A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F18A4"))) PPC_WEAK_FUNC(sub_820F18A4);
PPC_FUNC_IMPL(__imp__sub_820F18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F18A8"))) PPC_WEAK_FUNC(sub_820F18A8);
PPC_FUNC_IMPL(__imp__sub_820F18A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1904
	if (!ctx.cr6.eq) goto loc_820F1904;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r3,r4,1248
	ctx.r3.s64 = ctx.r4.s64 + 1248;
	// bne cr6,0x820f18e0
	if (!ctx.cr6.eq) goto loc_820F18E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F18E0:
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x820F18EC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f18fc
	if (ctx.cr6.eq) goto loc_820F18FC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f1900
	goto loc_820F1900;
loc_820F18FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F1900:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_820F1904:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1940
	if (!ctx.cr6.eq) goto loc_820F1940;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f1938
	if (ctx.cr6.eq) goto loc_820F1938;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x820F1928;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1938
	if (ctx.cr6.eq) goto loc_820F1938;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f193c
	goto loc_820F193C;
loc_820F1938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F193C:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_820F1940:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1974
	if (!ctx.cr6.eq) goto loc_820F1974;
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,20512
	ctx.r4.u64 = ctx.r4.u64 | 20512;
	// bl 0x821882d0
	ctx.lr = 0x820F195C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f196c
	if (ctx.cr6.eq) goto loc_820F196C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f1970
	goto loc_820F1970;
loc_820F196C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F1970:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820F1974:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f19b4
	if (!ctx.cr6.eq) goto loc_820F19B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bne cr6,0x820f1990
	if (!ctx.cr6.eq) goto loc_820F1990;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F1990:
	// lis r4,26448
	ctx.r4.s64 = 1733296128;
	// ori r4,r4,16708
	ctx.r4.u64 = ctx.r4.u64 | 16708;
	// bl 0x821882d0
	ctx.lr = 0x820F199C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f19ac
	if (ctx.cr6.eq) goto loc_820F19AC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f19b0
	goto loc_820F19B0;
loc_820F19AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F19B0:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_820F19B4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f19e8
	if (!ctx.cr6.eq) goto loc_820F19E8;
	// lis r4,17232
	ctx.r4.s64 = 1129316352;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,21071
	ctx.r4.u64 = ctx.r4.u64 | 21071;
	// bl 0x821882d0
	ctx.lr = 0x820F19D0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f19e0
	if (ctx.cr6.eq) goto loc_820F19E0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f19e4
	goto loc_820F19E4;
loc_820F19E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F19E4:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_820F19E8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1a1c
	if (!ctx.cr6.eq) goto loc_820F1A1C;
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,18758
	ctx.r4.u64 = ctx.r4.u64 | 18758;
	// bl 0x821882d0
	ctx.lr = 0x820F1A04;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1a14
	if (ctx.cr6.eq) goto loc_820F1A14;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f1a18
	goto loc_820F1A18;
loc_820F1A14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F1A18:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_820F1A1C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1a5c
	if (!ctx.cr6.eq) goto loc_820F1A5C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bne cr6,0x820f1a38
	if (!ctx.cr6.eq) goto loc_820F1A38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F1A38:
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// bl 0x821882d0
	ctx.lr = 0x820F1A44;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1a54
	if (ctx.cr6.eq) goto loc_820F1A54;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f1a58
	goto loc_820F1A58;
loc_820F1A54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F1A58:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_820F1A5C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1a9c
	if (!ctx.cr6.eq) goto loc_820F1A9C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bne cr6,0x820f1a78
	if (!ctx.cr6.eq) goto loc_820F1A78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F1A78:
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x820F1A84;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1a94
	if (ctx.cr6.eq) goto loc_820F1A94;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f1a98
	goto loc_820F1A98;
loc_820F1A94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F1A98:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_820F1A9C:
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

__attribute__((alias("__imp__sub_820F1AB4"))) PPC_WEAK_FUNC(sub_820F1AB4);
PPC_FUNC_IMPL(__imp__sub_820F1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AB8"))) PPC_WEAK_FUNC(sub_820F1AB8);
PPC_FUNC_IMPL(__imp__sub_820F1AB8) {
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
	// bl 0x820f1338
	ctx.lr = 0x820F1AD8;
	sub_820F1338(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1af4
	if (ctx.cr6.eq) goto loc_820F1AF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F1AF0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F1AF4:
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

__attribute__((alias("__imp__sub_820F1B0C"))) PPC_WEAK_FUNC(sub_820F1B0C);
PPC_FUNC_IMPL(__imp__sub_820F1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B10"))) PPC_WEAK_FUNC(sub_820F1B10);
PPC_FUNC_IMPL(__imp__sub_820F1B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F1B18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1224, ctx.r30.u32);
	// addi r3,r3,596
	ctx.r3.s64 = ctx.r3.s64 + 596;
	// stw r30,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r30.u32);
	// bl 0x82163ef8
	ctx.lr = 0x820F1B38;
	sub_82163EF8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,1964(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r30.u32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stb r29,584(r31)
	PPC_STORE_U8(ctx.r31.u32 + 584, ctx.r29.u8);
	// stfs f0,1300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// stfs f13,560(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stw r30,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r30.u32);
	// stfs f13,556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// stfs f0,1888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// stw r30,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r30.u32);
	// stfs f0,1896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// stw r30,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r30.u32);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// stw r30,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r30.u32);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// bne cr6,0x820f1bdc
	if (!ctx.cr6.eq) goto loc_820F1BDC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820F1BC0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1bd4
	if (ctx.cr6.eq) goto loc_820F1BD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820F1BD0;
	sub_82188338(ctx, base);
	// b 0x820f1bd8
	goto loc_820F1BD8;
loc_820F1BD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F1BD8:
	// stw r3,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r3.u32);
loc_820F1BDC:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1c0c
	if (!ctx.cr6.eq) goto loc_820F1C0C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82080000
	ctx.lr = 0x820F1BF0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1c04
	if (ctx.cr6.eq) goto loc_820F1C04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820F1C00;
	sub_82188338(ctx, base);
	// b 0x820f1c08
	goto loc_820F1C08;
loc_820F1C04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F1C08:
	// stw r3,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r3.u32);
loc_820F1C0C:
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// addi r3,r31,2012
	ctx.r3.s64 = ctx.r31.s64 + 2012;
	// stw r30,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r30.u32);
	// stb r30,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r30.u8);
	// stb r29,1945(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1945, ctx.r29.u8);
	// stw r30,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x820F1C30;
	sub_822AA648(ctx, base);
	// stw r30,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F1C3C"))) PPC_WEAK_FUNC(sub_820F1C3C);
PPC_FUNC_IMPL(__imp__sub_820F1C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1C40"))) PPC_WEAK_FUNC(sub_820F1C40);
PPC_FUNC_IMPL(__imp__sub_820F1C40) {
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
	// lwz r3,1972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1c74
	if (ctx.cr6.eq) goto loc_820F1C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F1C74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820F1C80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f1c98
	if (ctx.cr6.eq) goto loc_820F1C98;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x820F1C94;
	sub_82183448(ctx, base);
	// b 0x820f1ca0
	goto loc_820F1CA0;
loc_820F1C98:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820F1CA0;
	sub_821845A0(ctx, base);
loc_820F1CA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1cc8
	if (ctx.cr6.eq) goto loc_820F1CC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82188338
	ctx.lr = 0x820F1CB0;
	sub_82188338(ctx, base);
	// stw r3,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820F1CC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1CE4"))) PPC_WEAK_FUNC(sub_820F1CE4);
PPC_FUNC_IMPL(__imp__sub_820F1CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1CE8"))) PPC_WEAK_FUNC(sub_820F1CE8);
PPC_FUNC_IMPL(__imp__sub_820F1CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F1CF0;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-652
	ctx.r3.s64 = ctx.r3.s64 + -652;
	// bl 0x82184800
	ctx.lr = 0x820F1D10;
	sub_82184800(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// bl 0x82184800
	ctx.lr = 0x820F1D20;
	sub_82184800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lfs f31,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// lfs f0,10412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stfs f31,632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stw r11,-1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1152, ctx.r11.u32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// stw r11,-904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -904, ctx.r11.u32);
	// stfs f31,640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stw r11,-900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -900, ctx.r11.u32);
	// stfs f31,-1224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1224, temp.u32);
	// stw r11,-896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -896, ctx.r11.u32);
	// stw r11,-892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -892, ctx.r11.u32);
	// lfs f30,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,-888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -888, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r11,-876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -876, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,-872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -872, ctx.r11.u32);
	// stfs f31,-840(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -840, temp.u32);
	// stfs f31,-844(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -844, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f31,-848(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -848, temp.u32);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// stfs f30,-836(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -836, temp.u32);
	// addi r10,r31,-848
	ctx.r10.s64 = ctx.r31.s64 + -848;
	// stfs f31,-824(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -824, temp.u32);
	// stfs f31,-828(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -828, temp.u32);
	// stfs f31,-832(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -832, temp.u32);
	// stfs f30,-820(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -820, temp.u32);
	// stfs f31,-744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -744, temp.u32);
	// stfs f31,-748(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -748, temp.u32);
	// stfs f31,-752(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -752, temp.u32);
	// stfs f30,-740(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -740, temp.u32);
	// stfs f31,-728(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -728, temp.u32);
	// stfs f31,-732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -732, temp.u32);
	// stfs f31,-736(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -736, temp.u32);
	// stfs f30,-724(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -724, temp.u32);
	// stw r7,-684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -684, ctx.r7.u32);
	// stb r11,-680(r31)
	PPC_STORE_U8(ctx.r31.u32 + -680, ctx.r11.u8);
	// stb r11,-679(r31)
	PPC_STORE_U8(ctx.r31.u32 + -679, ctx.r11.u8);
	// stb r11,-678(r31)
	PPC_STORE_U8(ctx.r31.u32 + -678, ctx.r11.u8);
	// stb r11,-676(r31)
	PPC_STORE_U8(ctx.r31.u32 + -676, ctx.r11.u8);
	// stb r11,-675(r31)
	PPC_STORE_U8(ctx.r31.u32 + -675, ctx.r11.u8);
	// stb r11,-674(r31)
	PPC_STORE_U8(ctx.r31.u32 + -674, ctx.r11.u8);
	// stb r11,-673(r31)
	PPC_STORE_U8(ctx.r31.u32 + -673, ctx.r11.u8);
	// stb r11,-672(r31)
	PPC_STORE_U8(ctx.r31.u32 + -672, ctx.r11.u8);
	// stb r11,-671(r31)
	PPC_STORE_U8(ctx.r31.u32 + -671, ctx.r11.u8);
	// stb r11,-670(r31)
	PPC_STORE_U8(ctx.r31.u32 + -670, ctx.r11.u8);
	// stb r11,-669(r31)
	PPC_STORE_U8(ctx.r31.u32 + -669, ctx.r11.u8);
	// stb r11,-668(r31)
	PPC_STORE_U8(ctx.r31.u32 + -668, ctx.r11.u8);
	// stb r11,-667(r31)
	PPC_STORE_U8(ctx.r31.u32 + -667, ctx.r11.u8);
	// stb r11,-666(r31)
	PPC_STORE_U8(ctx.r31.u32 + -666, ctx.r11.u8);
	// stb r11,-665(r31)
	PPC_STORE_U8(ctx.r31.u32 + -665, ctx.r11.u8);
	// stb r11,696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 696, ctx.r11.u8);
	// stb r6,697(r31)
	PPC_STORE_U8(ctx.r31.u32 + 697, ctx.r6.u8);
	// stw r11,-660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -660, ctx.r11.u32);
	// stb r11,-663(r31)
	PPC_STORE_U8(ctx.r31.u32 + -663, ctx.r11.u8);
	// bl 0x822aa648
	ctx.lr = 0x820F1E20;
	sub_822AA648(ctx, base);
	// li r4,288
	ctx.r4.s64 = 288;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lbz r29,301(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 301);
	// bl 0x822aa648
	ctx.lr = 0x820F1E30;
	sub_822AA648(ctx, base);
	// stb r29,301(r31)
	PPC_STORE_U8(ctx.r31.u32 + 301, ctx.r29.u8);
	// stfs f31,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// addi r3,r31,-1248
	ctx.r3.s64 = ctx.r31.s64 + -1248;
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f30,188(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stfs f31,-792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -792, temp.u32);
	// stfs f31,-796(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -796, temp.u32);
	// stfs f31,-800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -800, temp.u32);
	// stfs f30,-788(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -788, temp.u32);
	// stfs f31,-776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -776, temp.u32);
	// stfs f31,-780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -780, temp.u32);
	// stfs f31,-784(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -784, temp.u32);
	// stfs f30,-772(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -772, temp.u32);
	// stfs f31,-760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -760, temp.u32);
	// stfs f31,-764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -764, temp.u32);
	// stfs f31,-768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -768, temp.u32);
	// stfs f30,-756(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -756, temp.u32);
	// bl 0x820f1c40
	ctx.lr = 0x820F1E80;
	sub_820F1C40(ctx, base);
	// addi r5,r31,-1248
	ctx.r5.s64 = ctx.r31.s64 + -1248;
	// subfic r4,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// lwz r30,20(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f1ebc
	if (ctx.cr6.eq) goto loc_820F1EBC;
loc_820F1E9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f1e9c
	if (!ctx.cr6.eq) goto loc_820F1E9C;
loc_820F1EBC:
	// lwz r30,716(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f1ee8
	if (ctx.cr6.eq) goto loc_820F1EE8;
loc_820F1EC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f1ec8
	if (!ctx.cr6.eq) goto loc_820F1EC8;
loc_820F1EE8:
	// lwz r30,720(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f1f14
	if (ctx.cr6.eq) goto loc_820F1F14;
loc_820F1EF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f1ef4
	if (!ctx.cr6.eq) goto loc_820F1EF4;
loc_820F1F14:
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f1f40
	if (ctx.cr6.eq) goto loc_820F1F40;
loc_820F1F20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f1f20
	if (!ctx.cr6.eq) goto loc_820F1F20;
loc_820F1F40:
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f1f6c
	if (ctx.cr6.eq) goto loc_820F1F6C;
loc_820F1F4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F1F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f1f4c
	if (!ctx.cr6.eq) goto loc_820F1F4C;
loc_820F1F6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F1F7C"))) PPC_WEAK_FUNC(sub_820F1F7C);
PPC_FUNC_IMPL(__imp__sub_820F1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1F80"))) PPC_WEAK_FUNC(sub_820F1F80);
PPC_FUNC_IMPL(__imp__sub_820F1F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F1F88;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f1fbc
	if (ctx.cr6.eq) goto loc_820F1FBC;
	// lwz r30,20(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x82182e90
	ctx.lr = 0x820F1FA4;
	sub_82182E90(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820f1fb4
	if (!ctx.cr6.eq) goto loc_820F1FB4;
	// bl 0x82182e90
	ctx.lr = 0x820F1FB0;
	sub_82182E90(ctx, base);
	// b 0x820f1fb8
	goto loc_820F1FB8;
loc_820F1FB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F1FB8:
	// bl 0x821837d0
	ctx.lr = 0x820F1FBC;
	sub_821837D0(ctx, base);
loc_820F1FBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r28,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r28.u32);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r27,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r27.u32);
	// lfs f0,10412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stfs f31,1880(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1880, temp.u32);
	// stfs f0,1884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1884, temp.u32);
	// stfs f31,1888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// bl 0x82183850
	ctx.lr = 0x820F1FF0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f2008
	if (ctx.cr6.eq) goto loc_820F2008;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x820F2004;
	sub_82183448(ctx, base);
	// b 0x820f2010
	goto loc_820F2010;
loc_820F2008:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820F2010;
	sub_821845A0(ctx, base);
loc_820F2010:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,20776
	ctx.r29.s64 = ctx.r11.s64 + 20776;
	// beq cr6,0x820f2044
	if (ctx.cr6.eq) goto loc_820F2044;
	// lis r4,17784
	ctx.r4.s64 = 1165492224;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// bl 0x82188378
	ctx.lr = 0x820F2034;
	sub_82188378(ctx, base);
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x820f2048
	goto loc_820F2048;
loc_820F2044:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820F2048:
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820F2050;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f2068
	if (ctx.cr6.eq) goto loc_820F2068;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x820F2064;
	sub_82183448(ctx, base);
	// b 0x820f2070
	goto loc_820F2070;
loc_820F2068:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820F2070;
	sub_821845A0(ctx, base);
loc_820F2070:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f209c
	if (ctx.cr6.eq) goto loc_820F209C;
	// lis r4,17784
	ctx.r4.s64 = 1165492224;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// bl 0x82188378
	ctx.lr = 0x820F208C;
	sub_82188378(ctx, base);
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x820f20a0
	goto loc_820F20A0;
loc_820F209C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820F20A0:
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1312
	ctx.r3.s64 = ctx.r31.s64 + 1312;
	// bl 0x82184800
	ctx.lr = 0x820F20B4;
	sub_82184800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,1432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
	// li r5,116
	ctx.r5.s64 = 116;
	// stfs f31,1428(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1428, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,1424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1424, temp.u32);
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1436, temp.u32);
	// stw r27,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r27.u32);
	// bl 0x82184800
	ctx.lr = 0x820F20E0;
	sub_82184800(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stfs f31,1900(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f20f8
	if (ctx.cr6.eq) goto loc_820F20F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1728
	ctx.lr = 0x820F20F8;
	sub_820F1728(ctx, base);
loc_820F20F8:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r28,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r28.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F2114"))) PPC_WEAK_FUNC(sub_820F2114);
PPC_FUNC_IMPL(__imp__sub_820F2114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2118"))) PPC_WEAK_FUNC(sub_820F2118);
PPC_FUNC_IMPL(__imp__sub_820F2118) {
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
	// beq cr6,0x820f2158
	if (ctx.cr6.eq) goto loc_820F2158;
	// lis r4,19801
	ctx.r4.s64 = 1297678336;
	// lwz r3,1972(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// ori r4,r4,21076
	ctx.r4.u64 = ctx.r4.u64 | 21076;
	// bl 0x821882d0
	ctx.lr = 0x820F213C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2158
	if (ctx.cr6.eq) goto loc_820F2158;
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
loc_820F2158:
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

__attribute__((alias("__imp__sub_820F216C"))) PPC_WEAK_FUNC(sub_820F216C);
PPC_FUNC_IMPL(__imp__sub_820F216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2170"))) PPC_WEAK_FUNC(sub_820F2170);
PPC_FUNC_IMPL(__imp__sub_820F2170) {
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
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F219C;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r9,r10,20916
	ctx.r9.s64 = ctx.r10.s64 + 20916;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_820F21DC"))) PPC_WEAK_FUNC(sub_820F21DC);
PPC_FUNC_IMPL(__imp__sub_820F21DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F21E0"))) PPC_WEAK_FUNC(sub_820F21E0);
PPC_FUNC_IMPL(__imp__sub_820F21E0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2254
	if (ctx.cr6.eq) goto loc_820F2254;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f2254
	if (ctx.cr6.eq) goto loc_820F2254;
	// bl 0x820f15f0
	ctx.lr = 0x820F2204;
	sub_820F15F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f2254
	if (!ctx.cr6.eq) goto loc_820F2254;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f2228
	if (ctx.cr6.eq) goto loc_820F2228;
loc_820F2218:
	// lwz r4,36(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f2218
	if (!ctx.cr6.eq) goto loc_820F2218;
loc_820F2228:
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f224c
	if (ctx.cr6.eq) goto loc_820F224C;
loc_820F2238:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f2238
	if (!ctx.cr6.eq) goto loc_820F2238;
loc_820F224C:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
loc_820F2254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2264"))) PPC_WEAK_FUNC(sub_820F2264);
PPC_FUNC_IMPL(__imp__sub_820F2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2268"))) PPC_WEAK_FUNC(sub_820F2268);
PPC_FUNC_IMPL(__imp__sub_820F2268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F2270;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r3,1248
	ctx.r3.s64 = ctx.r3.s64 + 1248;
	// bne cr6,0x820f2290
	if (!ctx.cr6.eq) goto loc_820F2290;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F2290:
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820F229C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f22ac
	if (ctx.cr6.eq) goto loc_820F22AC;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f22b0
	goto loc_820F22B0;
loc_820F22AC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820F22B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef8f8
	ctx.lr = 0x820F22BC;
	sub_820EF8F8(ctx, base);
	// stw r29,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r29.u32);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// lwz r3,1292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// bl 0x821882d0
	ctx.lr = 0x820F22D0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f22f4
	if (ctx.cr6.eq) goto loc_820F22F4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f22f4
	if (ctx.cr6.eq) goto loc_820F22F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F22F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F22F4:
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82084b50
	ctx.lr = 0x820F2304;
	sub_82084B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4b0
	ctx.lr = 0x820F2310;
	sub_820EF4B0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820f233c
	if (ctx.cr6.eq) goto loc_820F233C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r5,348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e6048
	ctx.lr = 0x820F233C;
	sub_822E6048(ctx, base);
loc_820F233C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F2344"))) PPC_WEAK_FUNC(sub_820F2344);
PPC_FUNC_IMPL(__imp__sub_820F2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2348"))) PPC_WEAK_FUNC(sub_820F2348);
PPC_FUNC_IMPL(__imp__sub_820F2348) {
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
	// bl 0x820ef758
	ctx.lr = 0x820F2360;
	sub_820EF758(ctx, base);
	// lwz r11,1936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f2390
	if (!ctx.cr6.eq) goto loc_820F2390;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// bl 0x821882d0
	ctx.lr = 0x820F237C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f23a0
	if (ctx.cr6.eq) goto loc_820F23A0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f23a0
	if (ctx.cr6.eq) goto loc_820F23A0;
loc_820F2390:
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
loc_820F23A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F23B4"))) PPC_WEAK_FUNC(sub_820F23B4);
PPC_FUNC_IMPL(__imp__sub_820F23B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F23B8"))) PPC_WEAK_FUNC(sub_820F23B8);
PPC_FUNC_IMPL(__imp__sub_820F23B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F23C0;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r27,-5056(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5056);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x820F23E4;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f2488
	if (ctx.cr6.eq) goto loc_820F2488;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
loc_820F2408:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ed8c0
	ctx.lr = 0x820F241C;
	sub_820ED8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f2438
	if (ctx.cr6.eq) goto loc_820F2438;
	// stwu r31,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r29.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x820f2408
	if (ctx.cr6.lt) goto loc_820F2408;
loc_820F2438:
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,29344
	ctx.r6.s64 = ctx.r8.s64 + 29344;
	// twllei r30,0
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r5,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r5.u8);
	// lbzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// divw r10,r3,r30
	ctx.r10.s32 = ctx.r3.s32 / ctx.r30.s32;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r4,r30,r6
	ctx.r4.u64 = ctx.r30.u64 & ~ctx.r6.u64;
	// twlgei r4,-1
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820F2488:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F2494"))) PPC_WEAK_FUNC(sub_820F2494);
PPC_FUNC_IMPL(__imp__sub_820F2494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2498"))) PPC_WEAK_FUNC(sub_820F2498);
PPC_FUNC_IMPL(__imp__sub_820F2498) {
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
	// bl 0x820f0320
	ctx.lr = 0x820F24B8;
	sub_820F0320(ctx, base);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82185740
	ctx.lr = 0x820F24C8;
	sub_82185740(ctx, base);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r3,r31,1232
	ctx.r3.s64 = ctx.r31.s64 + 1232;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// bl 0x821859a0
	ctx.lr = 0x820F24E0;
	sub_821859A0(ctx, base);
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// bl 0x82188378
	ctx.lr = 0x820F24F4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r6,r11,20856
	ctx.r6.s64 = ctx.r11.s64 + 20856;
	// addi r5,r9,20816
	ctx.r5.s64 = ctx.r9.s64 + 20816;
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// addi r3,r7,20824
	ctx.r3.s64 = ctx.r7.s64 + 20824;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r4,r8,20808
	ctx.r4.s64 = ctx.r8.s64 + 20808;
	// stw r5,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r3.u32);
	// stw r4,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r11.u32);
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// stw r9,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r9.u32);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// stw r10,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r10.u32);
	// stw r10,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r10.u32);
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
	// stw r31,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r31.u32);
	// bl 0x820f1b10
	ctx.lr = 0x820F2584;
	sub_820F1B10(ctx, base);
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

__attribute__((alias("__imp__sub_820F25A0"))) PPC_WEAK_FUNC(sub_820F25A0);
PPC_FUNC_IMPL(__imp__sub_820F25A0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,20916
	ctx.r9.s64 = ctx.r10.s64 + 20916;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820f25dc
	if (ctx.cr6.eq) goto loc_820F25DC;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_820F25DC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f25f0
	if (ctx.cr6.eq) goto loc_820F25F0;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_820F25F0:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820F260C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f2628
	if (ctx.cr6.eq) goto loc_820F2628;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F2624;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F2628:
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

__attribute__((alias("__imp__sub_820F2640"))) PPC_WEAK_FUNC(sub_820F2640);
PPC_FUNC_IMPL(__imp__sub_820F2640) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2684"))) PPC_WEAK_FUNC(sub_820F2684);
PPC_FUNC_IMPL(__imp__sub_820F2684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2688"))) PPC_WEAK_FUNC(sub_820F2688);
PPC_FUNC_IMPL(__imp__sub_820F2688) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2694"))) PPC_WEAK_FUNC(sub_820F2694);
PPC_FUNC_IMPL(__imp__sub_820F2694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2698"))) PPC_WEAK_FUNC(sub_820F2698);
PPC_FUNC_IMPL(__imp__sub_820F2698) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F26A4"))) PPC_WEAK_FUNC(sub_820F26A4);
PPC_FUNC_IMPL(__imp__sub_820F26A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F26A8"))) PPC_WEAK_FUNC(sub_820F26A8);
PPC_FUNC_IMPL(__imp__sub_820F26A8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F26D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f26ec
	if (ctx.cr6.eq) goto loc_820F26EC;
	// lwz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// b 0x820f26f0
	goto loc_820F26F0;
loc_820F26EC:
	// lwz r3,1280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
loc_820F26F0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f2700
	if (ctx.cr6.eq) goto loc_820F2700;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821932a0
	ctx.lr = 0x820F2700;
	sub_821932A0(ctx, base);
loc_820F2700:
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

__attribute__((alias("__imp__sub_820F2718"))) PPC_WEAK_FUNC(sub_820F2718);
PPC_FUNC_IMPL(__imp__sub_820F2718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f2748
	if (ctx.cr6.lt) goto loc_820F2748;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_820F2748:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820f2770
	if (!ctx.cr6.lt) goto loc_820F2770;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_820F2770:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F27BC"))) PPC_WEAK_FUNC(sub_820F27BC);
PPC_FUNC_IMPL(__imp__sub_820F27BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F27C0"))) PPC_WEAK_FUNC(sub_820F27C0);
PPC_FUNC_IMPL(__imp__sub_820F27C0) {
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
	// lis r4,17985
	ctx.r4.s64 = 1178664960;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17477
	ctx.r4.u64 = ctx.r4.u64 | 17477;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F27E4;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x821859a0
	ctx.lr = 0x820F27F8;
	sub_821859A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,21008
	ctx.r8.s64 = ctx.r11.s64 + 21008;
	// addi r7,r10,21000
	ctx.r7.s64 = ctx.r10.s64 + 21000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2874"))) PPC_WEAK_FUNC(sub_820F2874);
PPC_FUNC_IMPL(__imp__sub_820F2874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2878"))) PPC_WEAK_FUNC(sub_820F2878);
PPC_FUNC_IMPL(__imp__sub_820F2878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x820f2880
	sub_820F2880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F2880"))) PPC_WEAK_FUNC(sub_820F2880);
PPC_FUNC_IMPL(__imp__sub_820F2880) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185a50
	ctx.lr = 0x820F28A4;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820F28AC;
	sub_821883B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f28c8
	if (ctx.cr6.eq) goto loc_820F28C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F28C4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F28C8:
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

__attribute__((alias("__imp__sub_820F28E0"))) PPC_WEAK_FUNC(sub_820F28E0);
PPC_FUNC_IMPL(__imp__sub_820F28E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820f2908
	if (ctx.cr6.eq) goto loc_820F2908;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820f2920
	if (!ctx.cr6.eq) goto loc_820F2920;
loc_820F2908:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x820f2920
	if (!ctx.cr6.gt) goto loc_820F2920;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,6
	ctx.r10.s64 = 6;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
loc_820F2920:
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// or r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2954"))) PPC_WEAK_FUNC(sub_820F2954);
PPC_FUNC_IMPL(__imp__sub_820F2954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2958"))) PPC_WEAK_FUNC(sub_820F2958);
PPC_FUNC_IMPL(__imp__sub_820F2958) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820f29fc
	if (!ctx.cr6.eq) goto loc_820F29FC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820f2988
	if (ctx.cr6.eq) goto loc_820F2988;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x820f29a4
	if (!ctx.cr6.eq) goto loc_820F29A4;
loc_820F2988:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,6
	ctx.r30.s64 = 6;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// divwu r8,r11,r30
	ctx.r8.u32 = ctx.r11.u32 / ctx.r30.u32;
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / ctx.r30.u32;
loc_820F29A4:
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r5,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
loc_820F29FC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2A08"))) PPC_WEAK_FUNC(sub_820F2A08);
PPC_FUNC_IMPL(__imp__sub_820F2A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820F2A10;
	sub_82248778(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x820F2A28;
	sub_821ADDC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x820F2A34;
	sub_821ADD20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc30
	ctx.lr = 0x820F2A40;
	sub_821ADC30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adc58
	ctx.lr = 0x820F2A4C;
	sub_821ADC58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adcd0
	ctx.lr = 0x820F2A58;
	sub_821ADCD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add70
	ctx.lr = 0x820F2A64;
	sub_821ADD70(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x820F2A74;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x820F2A80;
	sub_821AD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad1f8
	ctx.lr = 0x820F2A8C;
	sub_821AD1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad240
	ctx.lr = 0x820F2A98;
	sub_821AD240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ad2d0
	ctx.lr = 0x820F2AA4;
	sub_821AD2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad528
	ctx.lr = 0x820F2AB0;
	sub_821AD528(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad6a0
	ctx.lr = 0x820F2AC0;
	sub_821AD6A0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821b2118
	ctx.lr = 0x820F2AC8;
	sub_821B2118(ctx, base);
	// lbz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 48);
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// lbz r9,50(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 50);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r8,49(r24)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + 49);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x820f2b8c
	if (ctx.cr6.eq) goto loc_820F2B8C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,-19048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// lfs f3,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r8,304(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,352(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,356(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// bl 0x821d1760
	ctx.lr = 0x820F2B4C;
	sub_821D1760(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// bl 0x820dd230
	ctx.lr = 0x820F2B6C;
	sub_820DD230(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821b5ef8
	ctx.lr = 0x820F2B74;
	sub_821B5EF8(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r3,-1736(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2b8c
	if (ctx.cr6.eq) goto loc_820F2B8C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821d16c0
	ctx.lr = 0x820F2B8C;
	sub_821D16C0(ctx, base);
loc_820F2B8C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x820F2B98;
	sub_821AD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x820F2BA4;
	sub_821AD498(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad1f8
	ctx.lr = 0x820F2BB0;
	sub_821AD1F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad240
	ctx.lr = 0x820F2BBC;
	sub_821AD240(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad2d0
	ctx.lr = 0x820F2BC8;
	sub_821AD2D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad528
	ctx.lr = 0x820F2BD4;
	sub_821AD528(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821b1d48
	ctx.lr = 0x820F2BDC;
	sub_821B1D48(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820F2BE4"))) PPC_WEAK_FUNC(sub_820F2BE4);
PPC_FUNC_IMPL(__imp__sub_820F2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2BE8"))) PPC_WEAK_FUNC(sub_820F2BE8);
PPC_FUNC_IMPL(__imp__sub_820F2BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// addi r7,r9,-7560
	ctx.r7.s64 = ctx.r9.s64 + -7560;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,8616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,256(r5)
	PPC_STORE_U32(ctx.r5.u32 + 256, ctx.r9.u32);
	// lfs f11,11492(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11492);
	ctx.f11.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f12,21044(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21044);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f3.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfd f2,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f2.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,264(r5)
	PPC_STORE_U32(ctx.r5.u32 + 264, ctx.r8.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820f2c98
	if (ctx.cr6.eq) goto loc_820F2C98;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
loc_820F2C98:
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2CA4"))) PPC_WEAK_FUNC(sub_820F2CA4);
PPC_FUNC_IMPL(__imp__sub_820F2CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2CA8"))) PPC_WEAK_FUNC(sub_820F2CA8);
PPC_FUNC_IMPL(__imp__sub_820F2CA8) {
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
	// lis r4,17238
	ctx.r4.s64 = 1129709568;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,18754
	ctx.r4.u64 = ctx.r4.u64 | 18754;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F2CCC;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,20968
	ctx.r10.s64 = ctx.r11.s64 + 20968;
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

__attribute__((alias("__imp__sub_820F2CF4"))) PPC_WEAK_FUNC(sub_820F2CF4);
PPC_FUNC_IMPL(__imp__sub_820F2CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2CF8"))) PPC_WEAK_FUNC(sub_820F2CF8);
PPC_FUNC_IMPL(__imp__sub_820F2CF8) {
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
	// addi r10,r11,20968
	ctx.r10.s64 = ctx.r11.s64 + 20968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820F2D24;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f2d40
	if (ctx.cr6.eq) goto loc_820F2D40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F2D3C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F2D40:
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

__attribute__((alias("__imp__sub_820F2D58"))) PPC_WEAK_FUNC(sub_820F2D58);
PPC_FUNC_IMPL(__imp__sub_820F2D58) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-26624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f2e08
	if (ctx.cr6.eq) goto loc_820F2E08;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2e08
	if (ctx.cr6.eq) goto loc_820F2E08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F2D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f2e08
	if (!ctx.cr6.eq) goto loc_820F2E08;
	// bl 0x8215bec8
	ctx.lr = 0x820F2DA8;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820f2dc4
	if (!ctx.cr6.eq) goto loc_820F2DC4;
	// bl 0x8215bec8
	ctx.lr = 0x820F2DB8;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f2e08
	if (!ctx.cr6.eq) goto loc_820F2E08;
loc_820F2DC4:
	// lwz r11,1980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f2e08
	if (ctx.cr6.eq) goto loc_820F2E08;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r4,17238
	ctx.r4.s64 = 1129709568;
	// ori r4,r4,18754
	ctx.r4.u64 = ctx.r4.u64 | 18754;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821882d0
	ctx.lr = 0x820F2DE8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2e08
	if (ctx.cr6.eq) goto loc_820F2E08;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2e08
	if (ctx.cr6.eq) goto loc_820F2E08;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f26a8
	ctx.lr = 0x820F2E08;
	sub_820F26A8(ctx, base);
loc_820F2E08:
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

__attribute__((alias("__imp__sub_820F2E20"))) PPC_WEAK_FUNC(sub_820F2E20);
PPC_FUNC_IMPL(__imp__sub_820F2E20) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f3044
	if (!ctx.cr6.eq) goto loc_820F3044;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2718
	ctx.lr = 0x820F2E50;
	sub_820F2718(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bne cr6,0x820f2e78
	if (!ctx.cr6.eq) goto loc_820F2E78;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820f2e7c
	goto loc_820F2E7C;
loc_820F2E78:
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_820F2E7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f2ef8
	if (ctx.cr6.eq) goto loc_820F2EF8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820f2ea8
	if (!ctx.cr6.eq) goto loc_820F2EA8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x820f2ef0
	goto loc_820F2EF0;
loc_820F2EA8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// ble 0x820f2ed4
	if (!ctx.cr0.gt) goto loc_820F2ED4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x820f2ef0
	goto loc_820F2EF0;
loc_820F2ED4:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_820F2EF0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_820F2EF8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f304c
	if (ctx.cr6.eq) goto loc_820F304C;
	// lbz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 54);
	// li r7,4
	ctx.r7.s64 = 4;
	// lbz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r6,53(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lbz r10,59(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 59);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r6,58(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f7,104(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lbz r4,55(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 55);
	// fcfid f3,f0
	ctx.f3.f64 = double(ctx.f0.s64);
	// lbz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f11,f6
	ctx.f11.f64 = double(float(ctx.f6.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82186cd8
	ctx.lr = 0x820F2FE4;
	sub_82186CD8(ctx, base);
	// lfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fctidz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x820f304c
	goto loc_820F304C;
loc_820F3044:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_820F304C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2a08
	ctx.lr = 0x820F3054;
	sub_820F2A08(ctx, base);
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

__attribute__((alias("__imp__sub_820F306C"))) PPC_WEAK_FUNC(sub_820F306C);
PPC_FUNC_IMPL(__imp__sub_820F306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3070"))) PPC_WEAK_FUNC(sub_820F3070);
PPC_FUNC_IMPL(__imp__sub_820F3070) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f32bc
	if (ctx.cr6.eq) goto loc_820F32BC;
	// bl 0x8215bd60
	ctx.lr = 0x820F3098;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f30c4
	if (ctx.cr6.eq) goto loc_820F30C4;
	// bl 0x82225508
	ctx.lr = 0x820F30A8;
	sub_82225508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f30c4
	if (ctx.cr6.eq) goto loc_820F30C4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// lwz r10,736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f32b4
	if (!ctx.cr6.eq) goto loc_820F32B4;
loc_820F30C4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f30dc
	if (ctx.cr6.eq) goto loc_820F30DC;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x820f2e20
	ctx.lr = 0x820F30D8;
	sub_820F2E20(ctx, base);
	// b 0x820f32bc
	goto loc_820F32BC;
loc_820F30DC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f3108
	if (!ctx.cr6.eq) goto loc_820F3108;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x820f329c
	goto loc_820F329C;
loc_820F3108:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f3120
	if (!ctx.cr6.eq) goto loc_820F3120;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x820f329c
	goto loc_820F329C;
loc_820F3120:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f329c
	if (!ctx.cr6.gt) goto loc_820F329C;
	// lbz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lbz r7,23(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lbz r3,21(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r3,26(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// lbz r7,27(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// li r7,4
	ctx.r7.s64 = 4;
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// fcfid f10,f7
	ctx.f10.f64 = double(ctx.f7.s64);
	// fcfid f9,f6
	ctx.f9.f64 = double(ctx.f6.s64);
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82186cd8
	ctx.lr = 0x820F3234;
	sub_82186CD8(ctx, base);
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fctidz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f5.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// or r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 | ctx.r9.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_820F329C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f32b4
	if (!ctx.cr6.eq) goto loc_820F32B4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820f32bc
	if (ctx.cr6.eq) goto loc_820F32BC;
loc_820F32B4:
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x820f2a08
	ctx.lr = 0x820F32BC;
	sub_820F2A08(ctx, base);
loc_820F32BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_820F32D4"))) PPC_WEAK_FUNC(sub_820F32D4);
PPC_FUNC_IMPL(__imp__sub_820F32D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F32D8"))) PPC_WEAK_FUNC(sub_820F32D8);
PPC_FUNC_IMPL(__imp__sub_820F32D8) {
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
	// li r4,2760
	ctx.r4.s64 = 2760;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// bl 0x822aa648
	ctx.lr = 0x820F32F4;
	sub_822AA648(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4852, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3310"))) PPC_WEAK_FUNC(sub_820F3310);
PPC_FUNC_IMPL(__imp__sub_820F3310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,21176
	ctx.r10.s64 = ctx.r11.s64 + 21176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821883b8
	sub_821883B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3320"))) PPC_WEAK_FUNC(sub_820F3320);
PPC_FUNC_IMPL(__imp__sub_820F3320) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F332C"))) PPC_WEAK_FUNC(sub_820F332C);
PPC_FUNC_IMPL(__imp__sub_820F332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3330"))) PPC_WEAK_FUNC(sub_820F3330);
PPC_FUNC_IMPL(__imp__sub_820F3330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f33b0
	if (ctx.cr6.eq) goto loc_820F33B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820f336c
	if (ctx.cr6.eq) goto loc_820F336C;
	// cmpwi cr6,r4,71
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 71, ctx.xer);
	// bgt cr6,0x820f3384
	if (ctx.cr6.gt) goto loc_820F3384;
	// beq cr6,0x820f33b0
	if (ctx.cr6.eq) goto loc_820F33B0;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bgt cr6,0x820f3374
	if (ctx.cr6.gt) goto loc_820F3374;
	// beq cr6,0x820f33b0
	if (ctx.cr6.eq) goto loc_820F33B0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820f336c
	if (!ctx.cr6.gt) goto loc_820F336C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
loc_820F3368:
	// ble cr6,0x820f33b0
	if (!ctx.cr6.gt) goto loc_820F33B0;
loc_820F336C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F3374:
	// cmpwi cr6,r4,48
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 48, ctx.xer);
	// blt cr6,0x820f336c
	if (ctx.cr6.lt) goto loc_820F336C;
	// cmpwi cr6,r4,55
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 55, ctx.xer);
	// b 0x820f3368
	goto loc_820F3368;
loc_820F3384:
	// cmpwi cr6,r4,110
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 110, ctx.xer);
	// bgt cr6,0x820f33a0
	if (ctx.cr6.gt) goto loc_820F33A0;
	// beq cr6,0x820f33b0
	if (ctx.cr6.eq) goto loc_820F33B0;
	// cmpwi cr6,r4,89
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 89, ctx.xer);
	// blt cr6,0x820f336c
	if (ctx.cr6.lt) goto loc_820F336C;
	// cmpwi cr6,r4,90
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 90, ctx.xer);
	// b 0x820f3368
	goto loc_820F3368;
loc_820F33A0:
	// cmpwi cr6,r4,192
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 192, ctx.xer);
	// blt cr6,0x820f336c
	if (ctx.cr6.lt) goto loc_820F336C;
	// cmpwi cr6,r4,193
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 193, ctx.xer);
	// bgt cr6,0x820f336c
	if (ctx.cr6.gt) goto loc_820F336C;
loc_820F33B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F33B8"))) PPC_WEAK_FUNC(sub_820F33B8);
PPC_FUNC_IMPL(__imp__sub_820F33B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F33C4"))) PPC_WEAK_FUNC(sub_820F33C4);
PPC_FUNC_IMPL(__imp__sub_820F33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F33C8"))) PPC_WEAK_FUNC(sub_820F33C8);
PPC_FUNC_IMPL(__imp__sub_820F33C8) {
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
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x820e7668
	ctx.lr = 0x820F33F4;
	sub_820E7668(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3440
	if (ctx.cr6.eq) goto loc_820F3440;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r11,1936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x820f3440
	if (ctx.cr6.eq) goto loc_820F3440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,868(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f0,924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// lfs f0,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
loc_820F3440:
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

__attribute__((alias("__imp__sub_820F3458"))) PPC_WEAK_FUNC(sub_820F3458);
PPC_FUNC_IMPL(__imp__sub_820F3458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfs f0,8328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r4,100(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,868(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stfs f0,924(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// lfs f0,7948(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,928(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F34C8"))) PPC_WEAK_FUNC(sub_820F34C8);
PPC_FUNC_IMPL(__imp__sub_820F34C8) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820e75b8
	ctx.lr = 0x820F34EC;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_820F3500"))) PPC_WEAK_FUNC(sub_820F3500);
PPC_FUNC_IMPL(__imp__sub_820F3500) {
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
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bl 0x820e75b8
	ctx.lr = 0x820F3530;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_820F3544"))) PPC_WEAK_FUNC(sub_820F3544);
PPC_FUNC_IMPL(__imp__sub_820F3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3548"))) PPC_WEAK_FUNC(sub_820F3548);
PPC_FUNC_IMPL(__imp__sub_820F3548) {
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
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x820e75b8
	ctx.lr = 0x820F3570;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_820F3584"))) PPC_WEAK_FUNC(sub_820F3584);
PPC_FUNC_IMPL(__imp__sub_820F3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3588"))) PPC_WEAK_FUNC(sub_820F3588);
PPC_FUNC_IMPL(__imp__sub_820F3588) {
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
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// or r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x820e75b8
	ctx.lr = 0x820F35B8;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_820F35CC"))) PPC_WEAK_FUNC(sub_820F35CC);
PPC_FUNC_IMPL(__imp__sub_820F35CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F35D0"))) PPC_WEAK_FUNC(sub_820F35D0);
PPC_FUNC_IMPL(__imp__sub_820F35D0) {
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
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r5,3(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x820e75b8
	ctx.lr = 0x820F3604;
	sub_820E75B8(ctx, base);
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

__attribute__((alias("__imp__sub_820F3618"))) PPC_WEAK_FUNC(sub_820F3618);
PPC_FUNC_IMPL(__imp__sub_820F3618) {
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
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f366c
	if (ctx.cr6.eq) goto loc_820F366C;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x822e6048
	ctx.lr = 0x820F366C;
	sub_822E6048(ctx, base);
loc_820F366C:
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

__attribute__((alias("__imp__sub_820F3680"))) PPC_WEAK_FUNC(sub_820F3680);
PPC_FUNC_IMPL(__imp__sub_820F3680) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef480
	ctx.lr = 0x820F369C;
	sub_820EF480(ctx, base);
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

__attribute__((alias("__imp__sub_820F36B0"))) PPC_WEAK_FUNC(sub_820F36B0);
PPC_FUNC_IMPL(__imp__sub_820F36B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F36B8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x820ef4d8
	ctx.lr = 0x820F36DC;
	sub_820EF4D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F36FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F3708"))) PPC_WEAK_FUNC(sub_820F3708);
PPC_FUNC_IMPL(__imp__sub_820F3708) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bl 0x823c1420
	ctx.lr = 0x820F372C;
	sub_823C1420(ctx, base);
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

__attribute__((alias("__imp__sub_820F3740"))) PPC_WEAK_FUNC(sub_820F3740);
PPC_FUNC_IMPL(__imp__sub_820F3740) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3768
	if (ctx.cr6.eq) goto loc_820F3768;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x820977c8
	ctx.lr = 0x820F3768;
	sub_820977C8(ctx, base);
loc_820F3768:
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

__attribute__((alias("__imp__sub_820F377C"))) PPC_WEAK_FUNC(sub_820F377C);
PPC_FUNC_IMPL(__imp__sub_820F377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3780"))) PPC_WEAK_FUNC(sub_820F3780);
PPC_FUNC_IMPL(__imp__sub_820F3780) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f37a8
	if (ctx.cr6.eq) goto loc_820F37A8;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x820977c8
	ctx.lr = 0x820F37A8;
	sub_820977C8(ctx, base);
loc_820F37A8:
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

__attribute__((alias("__imp__sub_820F37BC"))) PPC_WEAK_FUNC(sub_820F37BC);
PPC_FUNC_IMPL(__imp__sub_820F37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F37C0"))) PPC_WEAK_FUNC(sub_820F37C0);
PPC_FUNC_IMPL(__imp__sub_820F37C0) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f37e8
	if (ctx.cr6.eq) goto loc_820F37E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820eff10
	ctx.lr = 0x820F37E8;
	sub_820EFF10(ctx, base);
loc_820F37E8:
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

__attribute__((alias("__imp__sub_820F37FC"))) PPC_WEAK_FUNC(sub_820F37FC);
PPC_FUNC_IMPL(__imp__sub_820F37FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3800"))) PPC_WEAK_FUNC(sub_820F3800);
PPC_FUNC_IMPL(__imp__sub_820F3800) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// bl 0x82080ae8
	ctx.lr = 0x820F3820;
	sub_82080AE8(ctx, base);
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

__attribute__((alias("__imp__sub_820F3834"))) PPC_WEAK_FUNC(sub_820F3834);
PPC_FUNC_IMPL(__imp__sub_820F3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3838"))) PPC_WEAK_FUNC(sub_820F3838);
PPC_FUNC_IMPL(__imp__sub_820F3838) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3858
	if (ctx.cr6.eq) goto loc_820F3858;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ba658
	ctx.lr = 0x820F3858;
	sub_820BA658(ctx, base);
loc_820F3858:
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

__attribute__((alias("__imp__sub_820F386C"))) PPC_WEAK_FUNC(sub_820F386C);
PPC_FUNC_IMPL(__imp__sub_820F386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3870"))) PPC_WEAK_FUNC(sub_820F3870);
PPC_FUNC_IMPL(__imp__sub_820F3870) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f38a4
	if (ctx.cr6.eq) goto loc_820F38A4;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820981d8
	ctx.lr = 0x820F38A4;
	sub_820981D8(ctx, base);
loc_820F38A4:
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

__attribute__((alias("__imp__sub_820F38B8"))) PPC_WEAK_FUNC(sub_820F38B8);
PPC_FUNC_IMPL(__imp__sub_820F38B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

