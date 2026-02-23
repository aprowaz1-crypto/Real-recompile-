#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8210F8D0"))) PPC_WEAK_FUNC(sub_8210F8D0);
PPC_FUNC_IMPL(__imp__sub_8210F8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8210F8D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,4096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4096, ctx.r5.u32);
	// rlwinm r29,r5,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821847a8
	ctx.lr = 0x8210F8F4;
	sub_821847A8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,2048
	ctx.r4.s64 = ctx.r30.s64 + 2048;
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// bl 0x821847a8
	ctx.lr = 0x8210F904;
	sub_821847A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8210F90C"))) PPC_WEAK_FUNC(sub_8210F90C);
PPC_FUNC_IMPL(__imp__sub_8210F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F910"))) PPC_WEAK_FUNC(sub_8210F910);
PPC_FUNC_IMPL(__imp__sub_8210F910) {
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
	// li r10,128
	ctx.r10.s64 = 128;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,2044
	ctx.r11.s64 = ctx.r3.s64 + 2044;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
loc_8210F940:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f13,16(r11)
	// bdnz 0x8210f940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210F940;
	// addi r3,r31,4100
	ctx.r3.s64 = ctx.r31.s64 + 4100;
	// bl 0x8210efe0
	ctx.lr = 0x8210F95C;
	sub_8210EFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210f840
	ctx.lr = 0x8210F964;
	sub_8210F840(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8210F978"))) PPC_WEAK_FUNC(sub_8210F978);
PPC_FUNC_IMPL(__imp__sub_8210F978) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r30.u8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210f010
	ctx.lr = 0x8210F9B4;
	sub_8210F010(ctx, base);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8210F9D4"))) PPC_WEAK_FUNC(sub_8210F9D4);
PPC_FUNC_IMPL(__imp__sub_8210F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210F9D8"))) PPC_WEAK_FUNC(sub_8210F9D8);
PPC_FUNC_IMPL(__imp__sub_8210F9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8210F9E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210efe0
	ctx.lr = 0x8210F9F4;
	sub_8210EFE0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210f010
	ctx.lr = 0x8210FA18;
	sub_8210F010(ctx, base);
	// stb r30,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8210FA2C"))) PPC_WEAK_FUNC(sub_8210FA2C);
PPC_FUNC_IMPL(__imp__sub_8210FA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FA30"))) PPC_WEAK_FUNC(sub_8210FA30);
PPC_FUNC_IMPL(__imp__sub_8210FA30) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,1(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82102470
	ctx.lr = 0x8210FA5C;
	sub_82102470(ctx, base);
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

__attribute__((alias("__imp__sub_8210FA70"))) PPC_WEAK_FUNC(sub_8210FA70);
PPC_FUNC_IMPL(__imp__sub_8210FA70) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82102470
	ctx.lr = 0x8210FA9C;
	sub_82102470(ctx, base);
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

__attribute__((alias("__imp__sub_8210FAB0"))) PPC_WEAK_FUNC(sub_8210FAB0);
PPC_FUNC_IMPL(__imp__sub_8210FAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,7948(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mulli r10,r6,176
	ctx.r10.s64 = ctx.r6.s64 * 176;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,576
	ctx.r10.s64 = ctx.r11.s64 + 576;
	// stfs f11,580(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 580, temp.u32);
	// stfs f11,636(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 636, temp.u32);
	// stfs f0,640(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210FAFC"))) PPC_WEAK_FUNC(sub_8210FAFC);
PPC_FUNC_IMPL(__imp__sub_8210FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FB00"))) PPC_WEAK_FUNC(sub_8210FB00);
PPC_FUNC_IMPL(__imp__sub_8210FB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfs f13,8328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f13.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfs f0,7948(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mulli r10,r4,176
	ctx.r10.s64 = ctx.r4.s64 * 176;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,576
	ctx.r10.s64 = ctx.r11.s64 + 576;
	// stfs f0,640(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 640, temp.u32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,580(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 580, temp.u32);
	// stfs f9,636(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 636, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210FB60"))) PPC_WEAK_FUNC(sub_8210FB60);
PPC_FUNC_IMPL(__imp__sub_8210FB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,740(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210fbf4
	if (ctx.cr6.eq) goto loc_8210FBF4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,740(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// lfs f0,580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8210fbdc
	if (ctx.cr6.gt) goto loc_8210FBDC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,596
	ctx.r10.s64 = ctx.r11.s64 + 596;
	// stfs f13,596(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 596, temp.u32);
	// stfs f13,632(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 632, temp.u32);
	// blr 
	return;
loc_8210FBDC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,632(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 632, temp.u32);
loc_8210FBF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210FBFC"))) PPC_WEAK_FUNC(sub_8210FBFC);
PPC_FUNC_IMPL(__imp__sub_8210FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FC00"))) PPC_WEAK_FUNC(sub_8210FC00);
PPC_FUNC_IMPL(__imp__sub_8210FC00) {
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
	// lis r4,16724
	ctx.r4.s64 = 1096024064;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21587
	ctx.r4.u64 = ctx.r4.u64 | 21587;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x8210FC2C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,27000
	ctx.r10.s64 = ctx.r11.s64 + 27000;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8210FC5C"))) PPC_WEAK_FUNC(sub_8210FC5C);
PPC_FUNC_IMPL(__imp__sub_8210FC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FC60"))) PPC_WEAK_FUNC(sub_8210FC60);
PPC_FUNC_IMPL(__imp__sub_8210FC60) {
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
	// addi r10,r11,27000
	ctx.r10.s64 = ctx.r11.s64 + 27000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x8210FC8C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210fca8
	if (ctx.cr6.eq) goto loc_8210FCA8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8210FCA4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210FCA8:
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

__attribute__((alias("__imp__sub_8210FCC0"))) PPC_WEAK_FUNC(sub_8210FCC0);
PPC_FUNC_IMPL(__imp__sub_8210FCC0) {
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
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8210fd54
	if (!ctx.cr6.gt) goto loc_8210FD54;
loc_8210FCE4:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8210fd00
	if (ctx.cr6.eq) goto loc_8210FD00;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8210fd00
	if (ctx.cr6.eq) goto loc_8210FD00;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x8210fd44
	goto loc_8210FD44;
loc_8210FD00:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bgt cr6,0x8210fd28
	if (ctx.cr6.gt) goto loc_8210FD28;
	// beq cr6,0x8210fd74
	if (ctx.cr6.eq) goto loc_8210FD74;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8210fd68
	if (ctx.cr6.eq) goto loc_8210FD68;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8210fd38
	if (!ctx.cr6.eq) goto loc_8210FD38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8210fda8
	goto loc_8210FDA8;
loc_8210FD28:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8210fda0
	if (ctx.cr6.eq) goto loc_8210FDA0;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x8210fd80
	if (ctx.cr6.eq) goto loc_8210FD80;
loc_8210FD38:
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// ble 0x8210fd54
	if (!ctx.cr0.gt) goto loc_8210FD54;
loc_8210FD44:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8210fce4
	if (ctx.cr6.gt) goto loc_8210FCE4;
loc_8210FD54:
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
loc_8210FD68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x8210fda8
	goto loc_8210FDA8;
loc_8210FD74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x8210fda8
	goto loc_8210FDA8;
loc_8210FD80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x8210fdac
	goto loc_8210FDAC;
loc_8210FDA0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_8210FDA8:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210FDAC:
	// bctrl 
	ctx.lr = 0x8210FDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8210FDC4"))) PPC_WEAK_FUNC(sub_8210FDC4);
PPC_FUNC_IMPL(__imp__sub_8210FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FDC8"))) PPC_WEAK_FUNC(sub_8210FDC8);
PPC_FUNC_IMPL(__imp__sub_8210FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8210FDD0;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// add r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 + ctx.r7.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lis r5,-32178
	ctx.r5.s64 = -2108817408;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// frsp f0,f8
	ctx.f0.f64 = double(float(ctx.f8.f64));
	// lwz r11,-1736(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -1736);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f10,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// fadds f11,f1,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fadds f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmuls f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f5,f9,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fctiwz f2,f6
	ctx.f2.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f4,f8
	ctx.f4.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f1,f5
	ctx.f1.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f1,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f1.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8210fea4
	if (!ctx.cr6.lt) goto loc_8210FEA4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8210feb0
	goto loc_8210FEB0;
loc_8210FEA4:
	// cmpwi cr6,r31,1280
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1280, ctx.xer);
	// ble cr6,0x8210feb0
	if (!ctx.cr6.gt) goto loc_8210FEB0;
	// li r31,1280
	ctx.r31.s64 = 1280;
loc_8210FEB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8210fec0
	if (!ctx.cr6.lt) goto loc_8210FEC0;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8210fecc
	goto loc_8210FECC;
loc_8210FEC0:
	// cmpwi cr6,r28,1280
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1280, ctx.xer);
	// ble cr6,0x8210fecc
	if (!ctx.cr6.gt) goto loc_8210FECC;
	// li r28,1280
	ctx.r28.s64 = 1280;
loc_8210FECC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8210fedc
	if (!ctx.cr6.lt) goto loc_8210FEDC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8210fee8
	goto loc_8210FEE8;
loc_8210FEDC:
	// cmpwi cr6,r30,720
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 720, ctx.xer);
	// ble cr6,0x8210fee8
	if (!ctx.cr6.gt) goto loc_8210FEE8;
	// li r30,720
	ctx.r30.s64 = 720;
loc_8210FEE8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8210fef8
	if (!ctx.cr6.lt) goto loc_8210FEF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8210ff04
	goto loc_8210FF04;
loc_8210FEF8:
	// cmpwi cr6,r29,720
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 720, ctx.xer);
	// ble cr6,0x8210ff04
	if (!ctx.cr6.gt) goto loc_8210FF04;
	// li r29,720
	ctx.r29.s64 = 720;
loc_8210FF04:
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-7488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7488);
	// bl 0x821ad7d0
	ctx.lr = 0x8210FF14;
	sub_821AD7D0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,-7488(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7488);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ad818
	ctx.lr = 0x8210FF2C;
	sub_821AD818(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8210FF34"))) PPC_WEAK_FUNC(sub_8210FF34);
PPC_FUNC_IMPL(__imp__sub_8210FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FF38"))) PPC_WEAK_FUNC(sub_8210FF38);
PPC_FUNC_IMPL(__imp__sub_8210FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// b 0x821ad7d0
	sub_821AD7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210FF48"))) PPC_WEAK_FUNC(sub_8210FF48);
PPC_FUNC_IMPL(__imp__sub_8210FF48) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x8210FF64;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822aa648
	ctx.lr = 0x8210FF70;
	sub_822AA648(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8210FF9C"))) PPC_WEAK_FUNC(sub_8210FF9C);
PPC_FUNC_IMPL(__imp__sub_8210FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8210FFA0"))) PPC_WEAK_FUNC(sub_8210FFA0);
PPC_FUNC_IMPL(__imp__sub_8210FFA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r7,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r7.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8210FFB8"))) PPC_WEAK_FUNC(sub_8210FFB8);
PPC_FUNC_IMPL(__imp__sub_8210FFB8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8210ffc8
	if (!ctx.cr6.lt) goto loc_8210FFC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210FFC8:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8210FFD8"))) PPC_WEAK_FUNC(sub_8210FFD8);
PPC_FUNC_IMPL(__imp__sub_8210FFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8210FFE0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82110044
	if (ctx.cr6.lt) goto loc_82110044;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bge cr6,0x82110044
	if (!ctx.cr6.lt) goto loc_82110044;
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r31,172
	ctx.r30.s64 = ctx.r31.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210ff48
	ctx.lr = 0x82110018;
	sub_8210FF48(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211003c
	if (ctx.cr6.eq) goto loc_8211003C;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a1d8
	ctx.lr = 0x82110034;
	sub_8218A1D8(ctx, base);
	// std r27,204(r31)
	PPC_STORE_U64(ctx.r31.u32 + 204, ctx.r27.u64);
	// stw r26,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r26.u32);
loc_8211003C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1244, ctx.r11.u32);
loc_82110044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8211004C"))) PPC_WEAK_FUNC(sub_8211004C);
PPC_FUNC_IMPL(__imp__sub_8211004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82110050"))) PPC_WEAK_FUNC(sub_82110050);
PPC_FUNC_IMPL(__imp__sub_82110050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82110058;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821100c0
	if (ctx.cr6.eq) goto loc_821100C0;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,336
	ctx.r11.s64 = ctx.r10.s64 * 336;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8211009c
	if (ctx.cr0.lt) goto loc_8211009C;
loc_82110088:
	// addi r30,r30,-336
	ctx.r30.s64 = ctx.r30.s64 + -336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x82110094;
	sub_821B1DC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82110088
	if (!ctx.cr0.lt) goto loc_82110088;
loc_8211009C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821100b4
	if (ctx.cr6.eq) goto loc_821100B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x821100B4;
	sub_82183E40(ctx, base);
loc_821100B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821100C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1dc0
	ctx.lr = 0x821100C8;
	sub_821B1DC0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821100e0
	if (ctx.cr6.eq) goto loc_821100E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821100E0;
	sub_82183E40(ctx, base);
loc_821100E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821100EC"))) PPC_WEAK_FUNC(sub_821100EC);
PPC_FUNC_IMPL(__imp__sub_821100EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821100F0"))) PPC_WEAK_FUNC(sub_821100F0);
PPC_FUNC_IMPL(__imp__sub_821100F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821100F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110160
	if (ctx.cr6.eq) goto loc_82110160;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,304
	ctx.r11.s64 = ctx.r10.s64 * 304;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8211013c
	if (ctx.cr0.lt) goto loc_8211013C;
loc_82110128:
	// addi r30,r30,-304
	ctx.r30.s64 = ctx.r30.s64 + -304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1d48
	ctx.lr = 0x82110134;
	sub_821B1D48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82110128
	if (!ctx.cr0.lt) goto loc_82110128;
loc_8211013C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110154
	if (ctx.cr6.eq) goto loc_82110154;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82110154;
	sub_82183E40(ctx, base);
loc_82110154:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82110160:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1d48
	ctx.lr = 0x82110168;
	sub_821B1D48(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110180
	if (ctx.cr6.eq) goto loc_82110180;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82110180;
	sub_82183E40(ctx, base);
loc_82110180:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8211018C"))) PPC_WEAK_FUNC(sub_8211018C);
PPC_FUNC_IMPL(__imp__sub_8211018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82110190"))) PPC_WEAK_FUNC(sub_82110190);
PPC_FUNC_IMPL(__imp__sub_82110190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82110198;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110208
	if (ctx.cr6.eq) goto loc_82110208;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x821101e4
	if (ctx.cr0.lt) goto loc_821101E4;
loc_821101D0:
	// addi r30,r30,-384
	ctx.r30.s64 = ctx.r30.s64 + -384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1dd0
	ctx.lr = 0x821101DC;
	sub_821B1DD0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821101d0
	if (!ctx.cr0.lt) goto loc_821101D0;
loc_821101E4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821101fc
	if (ctx.cr6.eq) goto loc_821101FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x821101FC;
	sub_82183E40(ctx, base);
loc_821101FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82110208:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1dd0
	ctx.lr = 0x82110210;
	sub_821B1DD0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110228
	if (ctx.cr6.eq) goto loc_82110228;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82110228;
	sub_82183E40(ctx, base);
loc_82110228:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82110234"))) PPC_WEAK_FUNC(sub_82110234);
PPC_FUNC_IMPL(__imp__sub_82110234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82110238"))) PPC_WEAK_FUNC(sub_82110238);
PPC_FUNC_IMPL(__imp__sub_82110238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82110240;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821102a8
	if (ctx.cr6.eq) goto loc_821102A8;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,336
	ctx.r11.s64 = ctx.r10.s64 * 336;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82110284
	if (ctx.cr0.lt) goto loc_82110284;
loc_82110270:
	// addi r30,r30,-336
	ctx.r30.s64 = ctx.r30.s64 + -336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1de0
	ctx.lr = 0x8211027C;
	sub_821B1DE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82110270
	if (!ctx.cr0.lt) goto loc_82110270;
loc_82110284:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211029c
	if (ctx.cr6.eq) goto loc_8211029C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8211029C;
	sub_82183E40(ctx, base);
loc_8211029C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821102A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1de0
	ctx.lr = 0x821102B0;
	sub_821B1DE0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821102c8
	if (ctx.cr6.eq) goto loc_821102C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821102C8;
	sub_82183E40(ctx, base);
loc_821102C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821102D4"))) PPC_WEAK_FUNC(sub_821102D4);
PPC_FUNC_IMPL(__imp__sub_821102D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821102D8"))) PPC_WEAK_FUNC(sub_821102D8);
PPC_FUNC_IMPL(__imp__sub_821102D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821102E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110348
	if (ctx.cr6.eq) goto loc_82110348;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,336
	ctx.r11.s64 = ctx.r10.s64 * 336;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82110324
	if (ctx.cr0.lt) goto loc_82110324;
loc_82110310:
	// addi r30,r30,-336
	ctx.r30.s64 = ctx.r30.s64 + -336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1e00
	ctx.lr = 0x8211031C;
	sub_821B1E00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82110310
	if (!ctx.cr0.lt) goto loc_82110310;
loc_82110324:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211033c
	if (ctx.cr6.eq) goto loc_8211033C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8211033C;
	sub_82183E40(ctx, base);
loc_8211033C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82110348:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1e00
	ctx.lr = 0x82110350;
	sub_821B1E00(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110368
	if (ctx.cr6.eq) goto loc_82110368;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82110368;
	sub_82183E40(ctx, base);
loc_82110368:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82110374"))) PPC_WEAK_FUNC(sub_82110374);
PPC_FUNC_IMPL(__imp__sub_82110374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82110378"))) PPC_WEAK_FUNC(sub_82110378);
PPC_FUNC_IMPL(__imp__sub_82110378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82110398:
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stfs f1,84(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lwz r8,84(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82110398
	if (ctx.cr6.lt) goto loc_82110398;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821103BC"))) PPC_WEAK_FUNC(sub_821103BC);
PPC_FUNC_IMPL(__imp__sub_821103BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821103C0"))) PPC_WEAK_FUNC(sub_821103C0);
PPC_FUNC_IMPL(__imp__sub_821103C0) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82110400
	if (ctx.cr6.eq) goto loc_82110400;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ldx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x821d25f8
	ctx.lr = 0x821103FC;
	sub_821D25F8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82110400:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82110414"))) PPC_WEAK_FUNC(sub_82110414);
PPC_FUNC_IMPL(__imp__sub_82110414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82110418"))) PPC_WEAK_FUNC(sub_82110418);
PPC_FUNC_IMPL(__imp__sub_82110418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82110430"))) PPC_WEAK_FUNC(sub_82110430);
PPC_FUNC_IMPL(__imp__sub_82110430) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a540
	ctx.lr = 0x82110464;
	sub_8218A540(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a588
	ctx.lr = 0x8211046C;
	sub_8218A588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x821a1790
	ctx.lr = 0x8211047C;
	sub_821A1790(ctx, base);
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

__attribute__((alias("__imp__sub_82110498"))) PPC_WEAK_FUNC(sub_82110498);
PPC_FUNC_IMPL(__imp__sub_82110498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821104A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821104ec
	if (ctx.cr6.eq) goto loc_821104EC;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r30,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r30.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x821104e0
	if (ctx.cr0.lt) goto loc_821104E0;
loc_821104CC:
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d44a8
	ctx.lr = 0x821104D8;
	sub_821D44A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x821104cc
	if (!ctx.cr0.lt) goto loc_821104CC;
loc_821104E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x821104EC;
	sub_82183E40(ctx, base);
loc_821104EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110508
	if (ctx.cr6.eq) goto loc_82110508;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82110508;
	sub_82183E40(ctx, base);
loc_82110508:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211052c
	if (ctx.cr6.eq) goto loc_8211052C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211052C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211052C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110570
	if (ctx.cr6.eq) goto loc_82110570;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82110568
	if (ctx.cr6.eq) goto loc_82110568;
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
	ctx.lr = 0x82110564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82110570
	goto loc_82110570;
loc_82110568:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82110570;
	sub_82183E40(ctx, base);
loc_82110570:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821105b4
	if (ctx.cr6.eq) goto loc_821105B4;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821105ac
	if (ctx.cr6.eq) goto loc_821105AC;
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
	ctx.lr = 0x821105A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821105b4
	goto loc_821105B4;
loc_821105AC:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821105B4;
	sub_82183E40(ctx, base);
loc_821105B4:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821105f8
	if (ctx.cr6.eq) goto loc_821105F8;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821105f0
	if (ctx.cr6.eq) goto loc_821105F0;
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
	ctx.lr = 0x821105EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821105f8
	goto loc_821105F8;
loc_821105F0:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821105F8;
	sub_82183E40(ctx, base);
loc_821105F8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211063c
	if (ctx.cr6.eq) goto loc_8211063C;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82110634
	if (ctx.cr6.eq) goto loc_82110634;
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
	ctx.lr = 0x82110630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8211063c
	goto loc_8211063C;
loc_82110634:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8211063C;
	sub_82183E40(ctx, base);
loc_8211063C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110680
	if (ctx.cr6.eq) goto loc_82110680;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82110678
	if (ctx.cr6.eq) goto loc_82110678;
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
	ctx.lr = 0x82110674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82110680
	goto loc_82110680;
loc_82110678:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82110680;
	sub_82183E40(ctx, base);
loc_82110680:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821106c4
	if (ctx.cr6.eq) goto loc_821106C4;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821106bc
	if (ctx.cr6.eq) goto loc_821106BC;
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
	ctx.lr = 0x821106B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821106c4
	goto loc_821106C4;
loc_821106BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821106C4;
	sub_82183E40(ctx, base);
loc_821106C4:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821106dc
	if (ctx.cr6.eq) goto loc_821106DC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821106DC;
	sub_82183E40(ctx, base);
loc_821106DC:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110724
	if (ctx.cr6.eq) goto loc_82110724;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// mulli r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 * 112;
	// addic. r30,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r30.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x82110718
	if (ctx.cr0.lt) goto loc_82110718;
loc_82110704:
	// addi r29,r29,-112
	ctx.r29.s64 = ctx.r29.s64 + -112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d90b0
	ctx.lr = 0x82110710;
	sub_821D90B0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82110704
	if (!ctx.cr0.lt) goto loc_82110704;
loc_82110718:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82110724;
	sub_82183E40(ctx, base);
loc_82110724:
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82110730"))) PPC_WEAK_FUNC(sub_82110730);
PPC_FUNC_IMPL(__imp__sub_82110730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82110738;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821107a0
	if (ctx.cr6.eq) goto loc_821107A0;
	// lwz r10,-16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// addi r29,r3,-16
	ctx.r29.s64 = ctx.r3.s64 + -16;
	// mulli r11,r10,368
	ctx.r11.s64 = ctx.r10.s64 * 368;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x8211077c
	if (ctx.cr0.lt) goto loc_8211077C;
loc_82110768:
	// addi r30,r30,-368
	ctx.r30.s64 = ctx.r30.s64 + -368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d1708
	ctx.lr = 0x82110774;
	sub_821D1708(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82110768
	if (!ctx.cr0.lt) goto loc_82110768;
loc_8211077C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110794
	if (ctx.cr6.eq) goto loc_82110794;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82110794;
	sub_82183E40(ctx, base);
loc_82110794:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821107A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d1708
	ctx.lr = 0x821107A8;
	sub_821D1708(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821107c0
	if (ctx.cr6.eq) goto loc_821107C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821107C0;
	sub_82183E40(ctx, base);
loc_821107C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821107CC"))) PPC_WEAK_FUNC(sub_821107CC);
PPC_FUNC_IMPL(__imp__sub_821107CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821107D0"))) PPC_WEAK_FUNC(sub_821107D0);
PPC_FUNC_IMPL(__imp__sub_821107D0) {
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
	// addi r10,r11,27056
	ctx.r10.s64 = ctx.r11.s64 + 27056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82110498
	ctx.lr = 0x821107FC;
	sub_82110498(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211081c
	if (ctx.cr6.eq) goto loc_8211081C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211081C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211081C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x8218b208
	ctx.lr = 0x8211082C;
	sub_8218B208(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82110848
	if (ctx.cr6.eq) goto loc_82110848;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82110844;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82110848:
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

__attribute__((alias("__imp__sub_82110860"))) PPC_WEAK_FUNC(sub_82110860);
PPC_FUNC_IMPL(__imp__sub_82110860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82110868;
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
	// bl 0x8218b1e8
	ctx.lr = 0x8211087C;
	sub_8218B1E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r11,27056
	ctx.r10.s64 = ctx.r11.s64 + 27056;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,172
	ctx.r10.s64 = ctx.r31.s64 + 172;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r6.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_821108B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r4,r5,0,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// bdnz 0x821108b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821108B8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r11.u32);
	// stw r11,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82110978;
	sub_822AA648(ctx, base);
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// li r29,20
	ctx.r29.s64 = 20;
loc_82110980:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,-44
	ctx.r3.s64 = ctx.r30.s64 + -44;
	// bl 0x822aa648
	ctx.lr = 0x8211098C;
	sub_822AA648(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x822aa648
	ctx.lr = 0x82110998;
	sub_822AA648(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// stw r28,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne 0x82110980
	if (!ctx.cr0.eq) goto loc_82110980;
	// addi r3,r31,1212
	ctx.r3.s64 = ctx.r31.s64 + 1212;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x821109C8;
	sub_822AA648(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1228, ctx.r11.u8);
	// stb r11,1229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1229, ctx.r11.u8);
	// stb r11,1230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1230, ctx.r11.u8);
	// stb r11,1231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1231, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821109E8"))) PPC_WEAK_FUNC(sub_821109E8);
PPC_FUNC_IMPL(__imp__sub_821109E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x821109F0;
	sub_82248750(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82183078
	ctx.lr = 0x82110A10;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x821837d0
	ctx.lr = 0x82110A20;
	sub_821837D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82110a30
	if (ctx.cr6.eq) goto loc_82110A30;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82110a44
	goto loc_82110A44;
loc_82110A30:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110a50
	if (ctx.cr6.eq) goto loc_82110A50;
	// mulli r10,r27,112
	ctx.r10.s64 = ctx.r27.s64 * 112;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82110A44:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82110a60
	if (!ctx.cr6.eq) goto loc_82110A60;
loc_82110A50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82110A58;
	sub_821837D0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82110A60:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82110a94
	if (!ctx.cr6.gt) goto loc_82110A94;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82110A78:
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r23,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82110a78
	if (ctx.cr6.lt) goto loc_82110A78;
loc_82110A94:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110acc
	if (ctx.cr6.eq) goto loc_82110ACC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82110acc
	if (!ctx.cr6.gt) goto loc_82110ACC;
loc_82110AB0:
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x821d25f8
	ctx.lr = 0x82110ABC;
	sub_821D25F8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82110ab0
	if (ctx.cr6.lt) goto loc_82110AB0;
loc_82110ACC:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110b04
	if (ctx.cr6.eq) goto loc_82110B04;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82110b04
	if (!ctx.cr6.gt) goto loc_82110B04;
loc_82110AE8:
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x821d27b8
	ctx.lr = 0x82110AF4;
	sub_821D27B8(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82110ae8
	if (ctx.cr6.lt) goto loc_82110AE8;
loc_82110B04:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110b40
	if (ctx.cr6.eq) goto loc_82110B40;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82110B14:
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x821b1fd8
	ctx.lr = 0x82110B20;
	sub_821B1FD8(ctx, base);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x821b1df0
	ctx.lr = 0x82110B2C;
	sub_821B1DF0(ctx, base);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x821b1df8
	ctx.lr = 0x82110B38;
	sub_821B1DF8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82110b14
	if (!ctx.cr0.eq) goto loc_82110B14;
loc_82110B40:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110b88
	if (ctx.cr6.eq) goto loc_82110B88;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82110B50:
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x821b1fd8
	ctx.lr = 0x82110B5C;
	sub_821B1FD8(ctx, base);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x821b1df0
	ctx.lr = 0x82110B68;
	sub_821B1DF0(ctx, base);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x821b1df8
	ctx.lr = 0x82110B74;
	sub_821B1DF8(ctx, base);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x821b1e20
	ctx.lr = 0x82110B80;
	sub_821B1E20(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82110b50
	if (!ctx.cr0.eq) goto loc_82110B50;
loc_82110B88:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r22,r27,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r22,r11
	ctx.r3.u64 = ctx.r22.u64 + ctx.r11.u64;
	// bl 0x821d29f8
	ctx.lr = 0x82110B98;
	sub_821D29F8(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x821d3768
	ctx.lr = 0x82110BA8;
	sub_821D3768(ctx, base);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// ble cr6,0x82111194
	if (!ctx.cr6.gt) goto loc_82111194;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
	// mr r15,r23
	ctx.r15.u64 = ctx.r23.u64;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
loc_82110BD4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r22,r11
	ctx.r3.u64 = ctx.r22.u64 + ctx.r11.u64;
	// bl 0x821d2ac0
	ctx.lr = 0x82110BE4;
	sub_821D2AC0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r22,r11
	ctx.r3.u64 = ctx.r22.u64 + ctx.r11.u64;
	// bl 0x821d4510
	ctx.lr = 0x82110BF8;
	sub_821D4510(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82110c30
	if (!ctx.cr6.eq) goto loc_82110C30;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82110c20
	if (ctx.cr6.eq) goto loc_82110C20;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r26,r11,r15
	ctx.r26.u64 = ctx.r11.u64 + ctx.r15.u64;
	// addi r15,r15,368
	ctx.r15.s64 = ctx.r15.s64 + 368;
	// b 0x8211116c
	goto loc_8211116C;
loc_82110C20:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// add r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r16,r16,304
	ctx.r16.s64 = ctx.r16.s64 + 304;
	// b 0x8211116c
	goto loc_8211116C;
loc_82110C30:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r29,r31,212
	ctx.r29.s64 = ctx.r31.s64 + 212;
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_82110C54:
	// lbz r11,-40(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -40);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110ca0
	if (ctx.cr6.eq) goto loc_82110CA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a448
	ctx.lr = 0x82110C6C;
	sub_8218A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82110ca0
	if (!ctx.cr6.eq) goto loc_82110CA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82110c8c
	if (ctx.cr6.eq) goto loc_82110C8C;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82110ca0
	if (!ctx.cr6.eq) goto loc_82110CA0;
loc_82110C8C:
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82110cb4
	if (ctx.cr6.lt) goto loc_82110CB4;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82110cb4
	if (ctx.cr6.eq) goto loc_82110CB4;
loc_82110CA0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x82110c54
	if (ctx.cr6.lt) goto loc_82110C54;
	// b 0x82110d38
	goto loc_82110D38;
loc_82110CB4:
	// mulli r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 * 52;
	// lwz r11,-7468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,204(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r4,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82110d18
	if (!ctx.cr6.lt) goto loc_82110D18;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82110d18
	if (!ctx.cr6.eq) goto loc_82110D18;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82110d1c
	goto loc_82110D1C;
loc_82110D18:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82110D1C:
	// stw r11,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82110d34
	if (ctx.cr6.eq) goto loc_82110D34;
	// ld r11,204(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 204);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// b 0x82110d38
	goto loc_82110D38;
loc_82110D34:
	// addi r28,r9,188
	ctx.r28.s64 = ctx.r9.s64 + 188;
loc_82110D38:
	// std r23,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r23.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r23,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r23.u64);
	// bl 0x8218a540
	ctx.lr = 0x82110D4C;
	sub_8218A540(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8218a588
	ctx.lr = 0x82110D54;
	sub_8218A588(ctx, base);
	// lbz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 152);
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110ff4
	if (ctx.cr6.eq) goto loc_82110FF4;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82110ff4
	if (ctx.cr6.eq) goto loc_82110FF4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82110D74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x82110d98
	if (ctx.cr6.eq) goto loc_82110D98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82110d74
	if (ctx.cr6.eq) goto loc_82110D74;
loc_82110D98:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82110ff4
	if (!ctx.cr6.eq) goto loc_82110FF4;
	// lwz r11,-7468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82110dfc
	if (!ctx.cr6.lt) goto loc_82110DFC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82110dfc
	if (!ctx.cr6.eq) goto loc_82110DFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82110e00
	goto loc_82110E00;
loc_82110DFC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82110E00:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82111148
	if (ctx.cr6.eq) goto loc_82111148;
	// lwz r11,-7468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82110e6c
	if (!ctx.cr6.lt) goto loc_82110E6C;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82110e6c
	if (!ctx.cr6.eq) goto loc_82110E6C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82110e70
	goto loc_82110E70;
loc_82110E6C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82110E70:
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82111148
	if (ctx.cr6.eq) goto loc_82111148;
	// lwz r11,-7468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82110edc
	if (!ctx.cr6.lt) goto loc_82110EDC;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82110edc
	if (!ctx.cr6.eq) goto loc_82110EDC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82110ee0
	goto loc_82110EE0;
loc_82110EDC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82110EE0:
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82111148
	if (ctx.cr6.eq) goto loc_82111148;
	// lwz r11,-7468(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82110f4c
	if (!ctx.cr6.lt) goto loc_82110F4C;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82110f4c
	if (!ctx.cr6.eq) goto loc_82110F4C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82110f50
	goto loc_82110F50;
loc_82110F4C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82110F50:
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// beq cr6,0x82110fb4
	if (ctx.cr6.eq) goto loc_82110FB4;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// add r30,r17,r11
	ctx.r30.u64 = ctx.r17.u64 + ctx.r11.u64;
	// addi r17,r17,336
	ctx.r17.s64 = ctx.r17.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1fd8
	ctx.lr = 0x82110F78;
	sub_821B1FD8(ctx, base);
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// bl 0x821b1df0
	ctx.lr = 0x82110F88;
	sub_821B1DF0(ctx, base);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// bl 0x821b1df8
	ctx.lr = 0x82110F98;
	sub_821B1DF8(ctx, base);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,24(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// bl 0x821b1e20
	ctx.lr = 0x82110FA8;
	sub_821B1E20(ctx, base);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r6,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r6.u32);
	// b 0x82111144
	goto loc_82111144;
loc_82110FB4:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// add r30,r18,r11
	ctx.r30.u64 = ctx.r18.u64 + ctx.r11.u64;
	// addi r18,r18,336
	ctx.r18.s64 = ctx.r18.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b1fd8
	ctx.lr = 0x82110FC8;
	sub_821B1FD8(ctx, base);
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// bl 0x821b1df0
	ctx.lr = 0x82110FD8;
	sub_821B1DF0(ctx, base);
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// bl 0x821b1df8
	ctx.lr = 0x82110FE8;
	sub_821B1DF8(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r7,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r7.u32);
	// b 0x82111144
	goto loc_82111144;
loc_82110FF4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,-7468(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82111068
	if (!ctx.cr6.lt) goto loc_82111068;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82111068
	if (!ctx.cr6.eq) goto loc_82111068;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8211106c
	goto loc_8211106C;
loc_82111068:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8211106C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111080
	if (ctx.cr6.eq) goto loc_82111080;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82111098
	goto loc_82111098;
loc_82111080:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a1790
	ctx.lr = 0x82111090;
	sub_821A1790(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r8,-7468(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7468);
loc_82111098:
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x821110f4
	if (!ctx.cr6.lt) goto loc_821110F4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// bne cr6,0x821110f4
	if (!ctx.cr6.eq) goto loc_821110F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821110f8
	goto loc_821110F8;
loc_821110F4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_821110F8:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111148
	if (ctx.cr6.eq) goto loc_82111148;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82111128
	if (ctx.cr6.eq) goto loc_82111128;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r30,r19,r11
	ctx.r30.u64 = ctx.r19.u64 + ctx.r11.u64;
	// addi r19,r19,384
	ctx.r19.s64 = ctx.r19.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d27b8
	ctx.lr = 0x82111124;
	sub_821D27B8(ctx, base);
	// b 0x8211113c
	goto loc_8211113C;
loc_82111128:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r30,r20,r11
	ctx.r30.u64 = ctx.r20.u64 + ctx.r11.u64;
	// addi r20,r20,336
	ctx.r20.s64 = ctx.r20.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d25f8
	ctx.lr = 0x8211113C;
	sub_821D25F8(ctx, base);
loc_8211113C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r11.u32);
loc_82111144:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82111148:
	// lbz r11,1212(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1212);
	// addi r4,r31,1212
	ctx.r4.s64 = ctx.r31.s64 + 1212;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211116c
	if (ctx.cr6.eq) goto loc_8211116C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8218a448
	ctx.lr = 0x82111160;
	sub_8218A448(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211116c
	if (!ctx.cr6.eq) goto loc_8211116C;
	// stw r24,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r24.u32);
loc_8211116C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r26,r21,r11
	PPC_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r26.u32);
	// bl 0x821d2ce8
	ctx.lr = 0x82111184;
	sub_821D2CE8(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r24,r14
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r14.s32, ctx.xer);
	// blt cr6,0x82110bd4
	if (ctx.cr6.lt) goto loc_82110BD4;
loc_82111194:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x821837d0
	ctx.lr = 0x8211119C;
	sub_821837D0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821111A4"))) PPC_WEAK_FUNC(sub_821111A4);
PPC_FUNC_IMPL(__imp__sub_821111A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821111A8"))) PPC_WEAK_FUNC(sub_821111A8);
PPC_FUNC_IMPL(__imp__sub_821111A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821111B0;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,1232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1232, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x821111e4
	if (!ctx.cr6.lt) goto loc_821111E4;
	// lwz r30,88(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x82111220
	goto loc_82111220;
loc_821111E4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821111f8
	if (ctx.cr6.lt) goto loc_821111F8;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x82111220
	goto loc_82111220;
loc_821111F8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82111220
	if (ctx.cr6.eq) goto loc_82111220;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x821109e8
	ctx.lr = 0x82111220;
	sub_821109E8(ctx, base);
loc_82111220:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82111230
	if (ctx.cr6.eq) goto loc_82111230;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82111244
	goto loc_82111244;
loc_82111230:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821113fc
	if (ctx.cr6.eq) goto loc_821113FC;
	// mulli r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 * 112;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82111244:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821113fc
	if (ctx.cr6.eq) goto loc_821113FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82111264
	if (ctx.cr6.eq) goto loc_82111264;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82111288
	goto loc_82111288;
loc_82111264:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82111294
	if (!ctx.cr6.eq) goto loc_82111294;
	// lwz r11,1244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82111294
	if (!ctx.cr6.eq) goto loc_82111294;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r11.u32);
loc_82111288:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821109e8
	ctx.lr = 0x82111294;
	sub_821109E8(ctx, base);
loc_82111294:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d9130
	ctx.lr = 0x8211129C;
	sub_821D9130(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821112b0
	if (ctx.cr6.eq) goto loc_821112B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
loc_821112B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2ee0
	ctx.lr = 0x821112B8;
	sub_821D2EE0(ctx, base);
	// lwz r4,1232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x821113f4
	if (!ctx.cr6.gt) goto loc_821113F4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x821113f4
	if (!ctx.cr6.gt) goto loc_821113F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2d00
	ctx.lr = 0x821112D8;
	sub_821D2D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821113f4
	if (ctx.cr6.eq) goto loc_821113F4;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r6,1229(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1229);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lbz r4,1231(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1231);
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lbz r4,1228(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1228);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lfs f0,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// lbz r10,1230(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1230);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// fcfid f6,f3
	ctx.f6.f64 = double(ctx.f3.s64);
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f3,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fctiwz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// fmuls f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f10,f2
	ctx.f10.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r12,48
	ctx.r12.s64 = 48;
	// stfiwx f5,r3,r12
	PPC_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f5.u32);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
loc_821113F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d2c68
	ctx.lr = 0x821113FC;
	sub_821D2C68(ctx, base);
loc_821113FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82111404"))) PPC_WEAK_FUNC(sub_82111404);
PPC_FUNC_IMPL(__imp__sub_82111404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111408"))) PPC_WEAK_FUNC(sub_82111408);
PPC_FUNC_IMPL(__imp__sub_82111408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82111410;
	sub_82248768(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r27,r6,16
	ctx.r27.u64 = ctx.r6.u32 & 0xFFFF;
	// bl 0x8218a810
	ctx.lr = 0x82111430;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82111540
	if (ctx.cr6.eq) goto loc_82111540;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82111448;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111540
	if (ctx.cr6.eq) goto loc_82111540;
	// bl 0x82182e90
	ctx.lr = 0x82111454;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8211145C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82111468;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8211146C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82111478;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82111480;
	sub_821830F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a810
	ctx.lr = 0x8211148C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821114a8
	if (ctx.cr6.eq) goto loc_821114A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ae98
	ctx.lr = 0x821114A0;
	sub_8218AE98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821114ac
	goto loc_821114AC;
loc_821114A8:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_821114AC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821114c0
	if (ctx.cr6.lt) goto loc_821114C0;
	// bne cr6,0x821114c8
	if (!ctx.cr6.eq) goto loc_821114C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821114c4
	goto loc_821114C4;
loc_821114C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821114C4:
	// bl 0x821830f8
	ctx.lr = 0x821114C8;
	sub_821830F8(ctx, base);
loc_821114C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821114D0;
	sub_821837D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1448
	ctx.lr = 0x821114DC;
	sub_821A1448(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x821114E4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821114f4
	if (ctx.cr6.eq) goto loc_821114F4;
	// bl 0x821a1580
	ctx.lr = 0x821114F0;
	sub_821A1580(ctx, base);
	// b 0x821114f8
	goto loc_821114F8;
loc_821114F4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_821114F8:
	// stw r3,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1eb0
	ctx.lr = 0x8211150C;
	sub_821A1EB0(ctx, base);
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82080000
	ctx.lr = 0x82111514;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111524
	if (ctx.cr6.eq) goto loc_82111524;
	// bl 0x821b29d0
	ctx.lr = 0x82111520;
	sub_821B29D0(ctx, base);
	// b 0x82111528
	goto loc_82111528;
loc_82111524:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82111528:
	// stw r3,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82111538;
	sub_82183E40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a11e8
	ctx.lr = 0x82111540;
	sub_821A11E8(ctx, base);
loc_82111540:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a810
	ctx.lr = 0x8211154C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82111b2c
	if (ctx.cr6.eq) goto loc_82111B2C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82111560;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111b2c
	if (ctx.cr6.eq) goto loc_82111B2C;
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111b2c
	if (ctx.cr6.eq) goto loc_82111B2C;
	// lwz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111b2c
	if (ctx.cr6.eq) goto loc_82111B2C;
	// bl 0x82182e90
	ctx.lr = 0x82111584;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8211158C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82111598;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8211159C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x821115A8;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821115B0;
	sub_821830F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820822c0
	ctx.lr = 0x821115BC;
	sub_820822C0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x821115d4
	if (ctx.cr6.lt) goto loc_821115D4;
	// bne cr6,0x821115dc
	if (!ctx.cr6.eq) goto loc_821115DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821115d8
	goto loc_821115D8;
loc_821115D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821115D8:
	// bl 0x821830f8
	ctx.lr = 0x821115DC;
	sub_821830F8(ctx, base);
loc_821115DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821115E4;
	sub_821837D0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1448
	ctx.lr = 0x821115F0;
	sub_821A1448(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1118
	ctx.lr = 0x821115F8;
	sub_821A1118(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r3.u32);
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82111628
	if (ctx.cr6.gt) goto loc_82111628;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8211162c
	if (!ctx.cr6.gt) goto loc_8211162C;
loc_82111628:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8211162C:
	// bl 0x82080d68
	ctx.lr = 0x82111630;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111668
	if (ctx.cr6.eq) goto loc_82111668;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82111660
	if (ctx.cr0.lt) goto loc_82111660;
loc_8211164C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d29d8
	ctx.lr = 0x82111654;
	sub_821D29D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x8211164c
	if (!ctx.cr0.lt) goto loc_8211164C;
loc_82111660:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8211166c
	goto loc_8211166C;
loc_82111668:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8211166C:
	// lwz r31,84(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// stw r11,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r11.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82111684
	if (!ctx.cr6.gt) goto loc_82111684;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82111684:
	// bl 0x82080d68
	ctx.lr = 0x82111688;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821116b8
	if (ctx.cr6.eq) goto loc_821116B8;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821116b0
	if (ctx.cr0.lt) goto loc_821116B0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821116A4:
	// std r20,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r20.u64);
	// stdu r20,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r20.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821116a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821116A4;
loc_821116B0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x821116bc
	goto loc_821116BC;
loc_821116B8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_821116BC:
	// lwz r10,1236(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1236);
	// li r23,-17
	ctx.r23.s64 = -17;
	// stw r11,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82111740
	if (!ctx.cr6.eq) goto loc_82111740;
	// lis r11,585
	ctx.r11.s64 = 38338560;
	// lwz r31,84(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// ori r10,r11,9362
	ctx.r10.u64 = ctx.r11.u64 | 9362;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821116f4
	if (ctx.cr6.gt) goto loc_821116F4;
	// mulli r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 * 112;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x821116f8
	if (!ctx.cr6.gt) goto loc_821116F8;
loc_821116F4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821116F8:
	// bl 0x82080d68
	ctx.lr = 0x821116FC;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111738
	if (ctx.cr6.eq) goto loc_82111738;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x8211173c
	if (ctx.cr0.lt) goto loc_8211173C;
loc_82111718:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d4c78
	ctx.lr = 0x82111728;
	sub_821D4C78(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bge 0x82111718
	if (!ctx.cr0.lt) goto loc_82111718;
	// b 0x8211173c
	goto loc_8211173C;
loc_82111738:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_8211173C:
	// stw r29,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r29.u32);
loc_82111740:
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// stw r20,120(r25)
	PPC_STORE_U32(ctx.r25.u32 + 120, ctx.r20.u32);
	// stw r20,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r20.u32);
	// ble cr6,0x82111870
	if (!ctx.cr6.gt) goto loc_82111870;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82111764:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1170
	ctx.lr = 0x82111770;
	sub_821A1170(ctx, base);
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8218a540
	ctx.lr = 0x82111780;
	sub_8218A540(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a11a8
	ctx.lr = 0x8211178C;
	sub_821A11A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a1130
	ctx.lr = 0x8211179C;
	sub_821A1130(ctx, base);
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821d9248
	ctx.lr = 0x821117B4;
	sub_821D9248(ctx, base);
	// lwz r11,1236(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1236);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821117d4
	if (!ctx.cr6.eq) goto loc_821117D4;
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// lwz r10,92(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r24
	ctx.r3.u64 = ctx.r10.u64 + ctx.r24.u64;
	// bl 0x821d90b8
	ctx.lr = 0x821117D4;
	sub_821D90B8(ctx, base);
loc_821117D4:
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821d29f8
	ctx.lr = 0x821117E0;
	sub_821D29F8(ctx, base);
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821117f4
	if (!ctx.cr6.gt) goto loc_821117F4;
	// stw r3,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r3.u32);
loc_821117F4:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82111838
	if (!ctx.cr6.gt) goto loc_82111838;
loc_82111808:
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821d4510
	ctx.lr = 0x82111818;
	sub_821D4510(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82111828
	if (ctx.cr6.eq) goto loc_82111828;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8211182c
	goto loc_8211182C;
loc_82111828:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8211182C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82111808
	if (ctx.cr6.lt) goto loc_82111808;
loc_82111838:
	// lwz r11,120(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82111848
	if (!ctx.cr6.gt) goto loc_82111848;
	// stw r28,120(r25)
	PPC_STORE_U32(ctx.r25.u32 + 120, ctx.r28.u32);
loc_82111848:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82111858
	if (!ctx.cr6.gt) goto loc_82111858;
	// stw r27,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r27.u32);
loc_82111858:
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,112
	ctx.r24.s64 = ctx.r24.s64 + 112;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82111764
	if (ctx.cr6.lt) goto loc_82111764;
loc_82111870:
	// lwz r31,120(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82111948
	if (!ctx.cr6.gt) goto loc_82111948;
	// lis r11,195
	ctx.r11.s64 = 12779520;
	// ori r10,r11,3120
	ctx.r10.u64 = ctx.r11.u64 | 3120;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8211189c
	if (ctx.cr6.gt) goto loc_8211189C;
	// mulli r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 * 336;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x821118a0
	if (!ctx.cr6.gt) goto loc_821118A0;
loc_8211189C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821118A0:
	// bl 0x82080d68
	ctx.lr = 0x821118A4;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821118d8
	if (ctx.cr6.eq) goto loc_821118D8;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x821118dc
	if (ctx.cr0.lt) goto loc_821118DC;
loc_821118C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b29d0
	ctx.lr = 0x821118C8;
	sub_821B29D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bge 0x821118c0
	if (!ctx.cr0.lt) goto loc_821118C0;
	// b 0x821118dc
	goto loc_821118DC;
loc_821118D8:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_821118DC:
	// lis r11,215
	ctx.r11.s64 = 14090240;
	// lwz r31,120(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// stw r29,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r29.u32);
	// ori r10,r11,37941
	ctx.r10.u64 = ctx.r11.u64 | 37941;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82111904
	if (ctx.cr6.gt) goto loc_82111904;
	// mulli r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 * 304;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x82111908
	if (!ctx.cr6.gt) goto loc_82111908;
loc_82111904:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82111908:
	// bl 0x82080d68
	ctx.lr = 0x8211190C;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111940
	if (ctx.cr6.eq) goto loc_82111940;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82111944
	if (ctx.cr0.lt) goto loc_82111944;
loc_82111928:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2118
	ctx.lr = 0x82111930;
	sub_821B2118(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,304
	ctx.r30.s64 = ctx.r30.s64 + 304;
	// bge 0x82111928
	if (!ctx.cr0.lt) goto loc_82111928;
	// b 0x82111944
	goto loc_82111944;
loc_82111940:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82111944:
	// stw r29,116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 116, ctx.r29.u32);
loc_82111948:
	// lwz r31,132(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82111a28
	if (!ctx.cr6.gt) goto loc_82111A28;
	// lis r11,170
	ctx.r11.s64 = 11141120;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8211197c
	if (ctx.cr6.gt) goto loc_8211197C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x82111980
	if (!ctx.cr6.gt) goto loc_82111980;
loc_8211197C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82111980:
	// bl 0x82080d68
	ctx.lr = 0x82111984;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821119b8
	if (ctx.cr6.eq) goto loc_821119B8;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x821119bc
	if (ctx.cr0.lt) goto loc_821119BC;
loc_821119A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2b50
	ctx.lr = 0x821119A8;
	sub_821B2B50(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,384
	ctx.r30.s64 = ctx.r30.s64 + 384;
	// bge 0x821119a0
	if (!ctx.cr0.lt) goto loc_821119A0;
	// b 0x821119bc
	goto loc_821119BC;
loc_821119B8:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_821119BC:
	// lis r11,178
	ctx.r11.s64 = 11665408;
	// lwz r31,132(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// stw r29,124(r25)
	PPC_STORE_U32(ctx.r25.u32 + 124, ctx.r29.u32);
	// ori r10,r11,5698
	ctx.r10.u64 = ctx.r11.u64 | 5698;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821119e4
	if (ctx.cr6.gt) goto loc_821119E4;
	// mulli r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 * 368;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x821119e8
	if (!ctx.cr6.gt) goto loc_821119E8;
loc_821119E4:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_821119E8:
	// bl 0x82080d68
	ctx.lr = 0x821119EC;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111a20
	if (ctx.cr6.eq) goto loc_82111A20;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x82111a24
	if (ctx.cr0.lt) goto loc_82111A24;
loc_82111A08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2270
	ctx.lr = 0x82111A10;
	sub_821B2270(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,368
	ctx.r30.s64 = ctx.r30.s64 + 368;
	// bge 0x82111a08
	if (!ctx.cr0.lt) goto loc_82111A08;
	// b 0x82111a24
	goto loc_82111A24;
loc_82111A20:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82111A24:
	// stw r29,128(r25)
	PPC_STORE_U32(ctx.r25.u32 + 128, ctx.r29.u32);
loc_82111A28:
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82111a54
	if (!ctx.cr6.gt) goto loc_82111A54;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82111a4c
	if (!ctx.cr6.gt) goto loc_82111A4C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82111A4C:
	// bl 0x82080d68
	ctx.lr = 0x82111A50;
	sub_82080D68(ctx, base);
	// stw r3,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r3.u32);
loc_82111A54:
	// stw r20,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r20.u32);
	// stw r20,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r20.u32);
	// bl 0x82183850
	ctx.lr = 0x82111A60;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82111a78
	if (ctx.cr6.eq) goto loc_82111A78;
	// li r3,1360
	ctx.r3.s64 = 1360;
	// bl 0x82183448
	ctx.lr = 0x82111A74;
	sub_82183448(ctx, base);
	// b 0x82111a80
	goto loc_82111A80;
loc_82111A78:
	// li r3,85
	ctx.r3.s64 = 85;
	// bl 0x821845a0
	ctx.lr = 0x82111A80;
	sub_821845A0(ctx, base);
loc_82111A80:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111ab4
	if (ctx.cr6.eq) goto loc_82111AB4;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82111A9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2bf8
	ctx.lr = 0x82111AA4;
	sub_821B2BF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bge 0x82111a9c
	if (!ctx.cr0.lt) goto loc_82111A9C;
	// b 0x82111ab8
	goto loc_82111AB8;
loc_82111AB4:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82111AB8:
	// stw r29,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x82111AC0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82111ad8
	if (ctx.cr6.eq) goto loc_82111AD8;
	// li r3,1360
	ctx.r3.s64 = 1360;
	// bl 0x82183448
	ctx.lr = 0x82111AD4;
	sub_82183448(ctx, base);
	// b 0x82111ae0
	goto loc_82111AE0;
loc_82111AD8:
	// li r3,85
	ctx.r3.s64 = 85;
	// bl 0x821845a0
	ctx.lr = 0x82111AE0;
	sub_821845A0(ctx, base);
loc_82111AE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111b10
	if (ctx.cr6.eq) goto loc_82111B10;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82111AF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b2cd0
	ctx.lr = 0x82111B00;
	sub_821B2CD0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,336
	ctx.r30.s64 = ctx.r30.s64 + 336;
	// bge 0x82111af8
	if (!ctx.cr0.lt) goto loc_82111AF8;
	// b 0x82111b14
	goto loc_82111B14;
loc_82111B10:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82111B14:
	// stw r29,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82183e40
	ctx.lr = 0x82111B24;
	sub_82183E40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a11e8
	ctx.lr = 0x82111B2C;
	sub_821A11E8(ctx, base);
loc_82111B2C:
	// lwz r11,1240(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82111b80
	if (ctx.cr6.eq) goto loc_82111B80;
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82111b94
	if (!ctx.cr6.gt) goto loc_82111B94;
loc_82111B48:
	// stw r31,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821109e8
	ctx.lr = 0x82111B60;
	sub_821109E8(ctx, base);
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82111b48
	if (ctx.cr6.lt) goto loc_82111B48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82111B80:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,88(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821109e8
	ctx.lr = 0x82111B94;
	sub_821109E8(ctx, base);
loc_82111B94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82111BA4"))) PPC_WEAK_FUNC(sub_82111BA4);
PPC_FUNC_IMPL(__imp__sub_82111BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111BA8"))) PPC_WEAK_FUNC(sub_82111BA8);
PPC_FUNC_IMPL(__imp__sub_82111BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82111BB0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82111BC4;
	sub_8218AA18(ctx, base);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82183078
	ctx.lr = 0x82111BCC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82111BD8;
	sub_821837D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82111408
	ctx.lr = 0x82111BEC;
	sub_82111408(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82111BF4;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82111BFC;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82111C08"))) PPC_WEAK_FUNC(sub_82111C08);
PPC_FUNC_IMPL(__imp__sub_82111C08) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x821111a8
	sub_821111A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82111C18"))) PPC_WEAK_FUNC(sub_82111C18);
PPC_FUNC_IMPL(__imp__sub_82111C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82111C20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// addi r10,r11,27076
	ctx.r10.s64 = ctx.r11.s64 + 27076;
	// li r30,9
	ctx.r30.s64 = 9;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82111C3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111c60
	if (ctx.cr6.eq) goto loc_82111C60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82111C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82111C60:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82111c3c
	if (!ctx.cr0.eq) goto loc_82111C3C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82111C74"))) PPC_WEAK_FUNC(sub_82111C74);
PPC_FUNC_IMPL(__imp__sub_82111C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111C78"))) PPC_WEAK_FUNC(sub_82111C78);
PPC_FUNC_IMPL(__imp__sub_82111C78) {
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
	// bl 0x82111c18
	ctx.lr = 0x82111C98;
	sub_82111C18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111cb4
	if (ctx.cr6.eq) goto loc_82111CB4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82111CB0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82111CB4:
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

__attribute__((alias("__imp__sub_82111CCC"))) PPC_WEAK_FUNC(sub_82111CCC);
PPC_FUNC_IMPL(__imp__sub_82111CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111CD0"))) PPC_WEAK_FUNC(sub_82111CD0);
PPC_FUNC_IMPL(__imp__sub_82111CD0) {
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
	ctx.lr = 0x82111CE8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82111d00
	if (ctx.cr6.eq) goto loc_82111D00;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82183448
	ctx.lr = 0x82111CFC;
	sub_82183448(ctx, base);
	// b 0x82111d08
	goto loc_82111D08;
loc_82111D00:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x821845a0
	ctx.lr = 0x82111D08;
	sub_821845A0(ctx, base);
loc_82111D08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111d2c
	if (ctx.cr6.eq) goto loc_82111D2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b2a50
	ctx.lr = 0x82111D18;
	sub_821B2A50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82111D2C:
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

__attribute__((alias("__imp__sub_82111D44"))) PPC_WEAK_FUNC(sub_82111D44);
PPC_FUNC_IMPL(__imp__sub_82111D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82111D48"))) PPC_WEAK_FUNC(sub_82111D48);
PPC_FUNC_IMPL(__imp__sub_82111D48) {
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
	ctx.lr = 0x82111D58;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82111d70
	if (ctx.cr6.eq) goto loc_82111D70;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82183448
	ctx.lr = 0x82111D6C;
	sub_82183448(ctx, base);
	// b 0x82111d78
	goto loc_82111D78;
loc_82111D70:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821845a0
	ctx.lr = 0x82111D78;
	sub_821845A0(ctx, base);
loc_82111D78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111d94
	if (ctx.cr6.eq) goto loc_82111D94;
	// bl 0x821b2118
	ctx.lr = 0x82111D84;
	sub_821B2118(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82111D94:
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

__attribute__((alias("__imp__sub_82111DA8"))) PPC_WEAK_FUNC(sub_82111DA8);
PPC_FUNC_IMPL(__imp__sub_82111DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82111DB0;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8224991c
	ctx.lr = 0x82111DB8;
	sub_8224991C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
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
	// lfs f26,27088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27088);
	ctx.f26.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f29,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f29.f64 = double(temp.f32);
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f31,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f31.f64 = double(temp.f32);
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f28,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8328);
	ctx.f27.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f25,2140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2140);
	ctx.f25.f64 = double(temp.f32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// li r27,60
	ctx.r27.s64 = 60;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
loc_82111E3C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f3,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82111e74
	if (!ctx.cr6.eq) goto loc_82111E74;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// b 0x82111e84
	goto loc_82111E84;
loc_82111E74:
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// lfs f2,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_82111E84:
	// bl 0x821d1a98
	ctx.lr = 0x82111E88;
	sub_821D1A98(ctx, base);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211217c
	if (ctx.cr6.eq) goto loc_8211217C;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f9,f8
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f7,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f0,f10,f27,f12
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f27.f64 - ctx.f12.f64)));
	// fnmsubs f13,f7,f27,f11
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f27.f64 - ctx.f11.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82111ecc
	if (!ctx.cr6.lt) goto loc_82111ECC;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_82111ECC:
	// fcmpu cr6,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bge cr6,0x82111ed8
	if (!ctx.cr6.lt) goto loc_82111ED8;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
loc_82111ED8:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82111efc
	if (!ctx.cr6.eq) goto loc_82111EFC;
	// fmadds f1,f12,f31,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f2,f11,f31,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f2.f64));
	// b 0x82111f30
	goto loc_82111F30;
loc_82111EFC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82111f0c
	if (!ctx.cr6.eq) goto loc_82111F0C;
	// fmadds f2,f11,f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f2.f64));
	// b 0x82111f2c
	goto loc_82111F2C;
loc_82111F0C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82111f20
	if (!ctx.cr6.eq) goto loc_82111F20;
	// fmadds f1,f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fnmsubs f2,f11,f31,f2
	ctx.f2.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f2.f64)));
	// b 0x82111f30
	goto loc_82111F30;
loc_82111F20:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82111f30
	if (!ctx.cr6.eq) goto loc_82111F30;
	// fnmsubs f2,f11,f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f2.f64)));
loc_82111F2C:
	// fnmsubs f1,f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f1.f64)));
loc_82111F30:
	// fmr f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f29.f64;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// bgt cr6,0x821120c4
	if (ctx.cr6.gt) goto loc_821120C4;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82111f94
	// bdzf 4*cr6+eq,0x82111fbc
	// bdzf 4*cr6+eq,0x82111fd4
	// bdzf 4*cr6+eq,0x82111ffc
	// bdzf 4*cr6+eq,0x82112020
	// bdzf 4*cr6+eq,0x82112048
	// bdzf 4*cr6+eq,0x82112074
	// bne cr6,0x8211209c
	if (!ctx.cr6.eq) goto loc_8211209C;
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fnmsubs f1,f8,f31,f1
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// fnmsubs f2,f7,f31,f2
	ctx.f2.f64 = double(float(-(ctx.f7.f64 * ctx.f31.f64 - ctx.f2.f64)));
	// b 0x821120c4
	goto loc_821120C4;
loc_82111F94:
	// addi r11,r30,46
	ctx.r11.s64 = ctx.r30.s64 + 46;
	// addi r10,r30,37
	ctx.r10.s64 = ctx.r30.s64 + 37;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfsx f9,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fnmsubs f2,f10,f31,f2
	ctx.f2.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f2.f64)));
	// b 0x821120c4
	goto loc_821120C4;
loc_82111FBC:
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fnmsubs f2,f7,f31,f2
	ctx.f2.f64 = double(float(-(ctx.f7.f64 * ctx.f31.f64 - ctx.f2.f64)));
	// b 0x821120b0
	goto loc_821120B0;
loc_82111FD4:
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfsx f9,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fnmsubs f1,f10,f31,f1
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// b 0x821120c4
	goto loc_821120C4;
loc_82111FFC:
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// b 0x821120c4
	goto loc_821120C4;
loc_82112020:
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfsx f9,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmadds f1,f10,f31,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f1.f64));
	// b 0x821120c4
	goto loc_821120C4;
loc_82112048:
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fnmsubs f1,f8,f31,f1
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// fmadds f2,f7,f31,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f2.f64));
	// b 0x821120c4
	goto loc_821120C4;
loc_82112074:
	// addi r11,r30,46
	ctx.r11.s64 = ctx.r30.s64 + 46;
	// addi r10,r30,37
	ctx.r10.s64 = ctx.r30.s64 + 37;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfsx f9,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmadds f2,f10,f31,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f2.f64));
	// b 0x821120c4
	goto loc_821120C4;
loc_8211209C:
	// addi r10,r30,46
	ctx.r10.s64 = ctx.r30.s64 + 46;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmadds f2,f7,f31,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f2.f64));
loc_821120B0:
	// addi r11,r30,37
	ctx.r11.s64 = ctx.r30.s64 + 37;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmadds f1,f8,f31,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f1.f64));
loc_821120C4:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stfs f12,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f29,40(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821120E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// fmuls f30,f12,f26
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82112138
	if (!ctx.cr6.eq) goto loc_82112138;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bctrl 
	ctx.lr = 0x82112124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82112150
	goto loc_82112150;
loc_82112138:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bctrl 
	ctx.lr = 0x82112140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82112150:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r8,r29,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.f10.u32);
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211217C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211217C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// blt cr6,0x82111e3c
	if (ctx.cr6.lt) goto loc_82111E3C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249968
	ctx.lr = 0x82112194;
	sub_82249968(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82112198"))) PPC_WEAK_FUNC(sub_82112198);
PPC_FUNC_IMPL(__imp__sub_82112198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x821121A0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,27076
	ctx.r10.s64 = ctx.r11.s64 + 27076;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8218b408
	ctx.lr = 0x821121CC;
	sub_8218B408(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// bl 0x8218b408
	ctx.lr = 0x821121F8;
	sub_8218B408(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// lfs f0,2148(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r7,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r7.u32);
loc_82112258:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82112258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82112258;
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r26,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r26.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// ble cr6,0x82112348
	if (!ctx.cr6.gt) goto loc_82112348;
	// mulli r11,r29,108
	ctx.r11.s64 = ctx.r29.s64 * 108;
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r27,9
	ctx.r27.s64 = 9;
	// addi r28,r11,72
	ctx.r28.s64 = ctx.r11.s64 + 72;
loc_8211229C:
	// lfs f0,-72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// lfs f13,-36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,104(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// beq cr6,0x821122d0
	if (ctx.cr6.eq) goto loc_821122D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821122D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821122D0:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82112310
	if (ctx.cr6.eq) goto loc_82112310;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82112308
	if (ctx.cr6.eq) goto loc_82112308;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ldx r4,r9,r25
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r25.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82112304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82112334
	goto loc_82112334;
loc_82112308:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x82112338
	goto loc_82112338;
loc_82112310:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,208(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
loc_82112334:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82112338:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8211229c
	if (!ctx.cr0.eq) goto loc_8211229C;
loc_82112348:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82112354"))) PPC_WEAK_FUNC(sub_82112354);
PPC_FUNC_IMPL(__imp__sub_82112354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112358"))) PPC_WEAK_FUNC(sub_82112358);
PPC_FUNC_IMPL(__imp__sub_82112358) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,1056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1056, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,1060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1060, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82112370"))) PPC_WEAK_FUNC(sub_82112370);
PPC_FUNC_IMPL(__imp__sub_82112370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82112378;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r4,1072
	ctx.r10.s64 = ctx.r4.s64 * 1072;
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,1060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1060, ctx.r10.u32);
	// stw r5,1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1056, ctx.r5.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82112450
	if (!ctx.cr6.eq) goto loc_82112450;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821123cc
	if (ctx.cr6.eq) goto loc_821123CC;
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8218b2d0
	ctx.lr = 0x821123C4;
	sub_8218B2D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821123CC:
	// bl 0x82183078
	ctx.lr = 0x821123D0;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821123DC;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x821123E4;
	sub_820824B8(ctx, base);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188850
	ctx.lr = 0x821123F0;
	sub_82188850(ctx, base);
	// addi r11,r3,2047
	ctx.r11.s64 = ctx.r3.s64 + 2047;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r3,r11,0,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82184710
	ctx.lr = 0x82112404;
	sub_82184710(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8218b2d0
	ctx.lr = 0x82112418;
	sub_8218B2D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82112440
	if (ctx.cr6.lt) goto loc_82112440;
	// bne cr6,0x82112448
	if (!ctx.cr6.eq) goto loc_82112448;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82112430;
	sub_821830F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82112438;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82112440:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82112448;
	sub_821830F8(ctx, base);
loc_82112448:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82112450;
	sub_821837D0(ctx, base);
loc_82112450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82112458"))) PPC_WEAK_FUNC(sub_82112458);
PPC_FUNC_IMPL(__imp__sub_82112458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82112460;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// srawi r8,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// bne cr6,0x82112524
	if (!ctx.cr6.eq) goto loc_82112524;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821125ac
	if (ctx.cr6.lt) goto loc_821125AC;
	// lwz r27,20(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x82183078
	ctx.lr = 0x821124A4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821124B0;
	sub_821837D0(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x820de428
	ctx.lr = 0x821124C0;
	sub_820DE428(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8211251c
	if (!ctx.cr6.lt) goto loc_8211251C;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821124E4:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r8,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stdx r8,r7,r11
	PPC_STORE_U64(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x821124e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821124E4;
loc_8211251C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x821125a8
	goto loc_821125A8;
loc_82112524:
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821125ac
	if (ctx.cr6.lt) goto loc_821125AC;
	// lwz r28,20(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82183078
	ctx.lr = 0x82112534;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82112540;
	sub_821837D0(ctx, base);
	// addi r28,r31,10
	ctx.r28.s64 = ctx.r31.s64 + 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820de428
	ctx.lr = 0x82112550;
	sub_820DE428(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821125a4
	if (!ctx.cr6.lt) goto loc_821125A4;
	// subf r9,r31,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r31.s64;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8211256C:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r6,r8,0,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stdx r8,r7,r11
	PPC_STORE_U64(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8211256c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211256C;
loc_821125A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821125A8:
	// bl 0x821837d0
	ctx.lr = 0x821125AC;
	sub_821837D0(ctx, base);
loc_821125AC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// rlwinm r4,r5,0,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// or r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 | ctx.r31.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r7,r9,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stdx r6,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u64);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82112618"))) PPC_WEAK_FUNC(sub_82112618);
PPC_FUNC_IMPL(__imp__sub_82112618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-7464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7464);
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
	// bge cr6,0x8211267c
	if (!ctx.cr6.lt) goto loc_8211267C;
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
	// bne cr6,0x8211267c
	if (!ctx.cr6.eq) goto loc_8211267C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_8211267C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82112688"))) PPC_WEAK_FUNC(sub_82112688);
PPC_FUNC_IMPL(__imp__sub_82112688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82112690;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,27100
	ctx.r10.s64 = ctx.r11.s64 + 27100;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x821938c8
	ctx.lr = 0x821126D0;
	sub_821938C8(ctx, base);
	// stw r29,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r29.u32);
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821126F0"))) PPC_WEAK_FUNC(sub_821126F0);
PPC_FUNC_IMPL(__imp__sub_821126F0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,-7464(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7464);
	// bl 0x82112458
	ctx.lr = 0x82112740;
	sub_82112458(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rlwinm r9,r3,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
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

__attribute__((alias("__imp__sub_82112794"))) PPC_WEAK_FUNC(sub_82112794);
PPC_FUNC_IMPL(__imp__sub_82112794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112798"))) PPC_WEAK_FUNC(sub_82112798);
PPC_FUNC_IMPL(__imp__sub_82112798) {
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
	// bl 0x82112618
	ctx.lr = 0x821127B0;
	sub_82112618(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,-7464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7464);
	// bl 0x821a75f0
	ctx.lr = 0x821127C8;
	sub_821A75F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112800
	if (ctx.cr6.eq) goto loc_82112800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821127E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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
loc_82112800:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8211281C"))) PPC_WEAK_FUNC(sub_8211281C);
PPC_FUNC_IMPL(__imp__sub_8211281C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112820"))) PPC_WEAK_FUNC(sub_82112820);
PPC_FUNC_IMPL(__imp__sub_82112820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82112828;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82193ab0
	ctx.lr = 0x82112838;
	sub_82193AB0(ctx, base);
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112858
	if (ctx.cr6.eq) goto loc_82112858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112858:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r29,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r29.u32);
	// bl 0x82112798
	ctx.lr = 0x82112868;
	sub_82112798(ctx, base);
	// lwz r30,1052(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82112888
	if (ctx.cr6.eq) goto loc_82112888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x8211287C;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82112888;
	sub_82183E40(ctx, base);
loc_82112888:
	// stw r29,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82112894"))) PPC_WEAK_FUNC(sub_82112894);
PPC_FUNC_IMPL(__imp__sub_82112894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112898"))) PPC_WEAK_FUNC(sub_82112898);
PPC_FUNC_IMPL(__imp__sub_82112898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821128A0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,27104
	ctx.r10.s64 = ctx.r11.s64 + 27104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// bl 0x82183078
	ctx.lr = 0x821128D4;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821128E0;
	sub_821837D0(ctx, base);
	// lis r7,61
	ctx.r7.s64 = 3997696;
	// ori r6,r7,8803
	ctx.r6.u64 = ctx.r7.u64 | 8803;
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82112908
	if (ctx.cr6.gt) goto loc_82112908;
	// mulli r11,r31,1072
	ctx.r11.s64 = ctx.r31.s64 * 1072;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8211290c
	if (!ctx.cr6.gt) goto loc_8211290C;
loc_82112908:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8211290C:
	// bl 0x82183850
	ctx.lr = 0x82112910;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82112928
	if (ctx.cr6.eq) goto loc_82112928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82112924;
	sub_82183448(ctx, base);
	// b 0x82112934
	goto loc_82112934;
loc_82112928:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82112934;
	sub_821845A0(ctx, base);
loc_82112934:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq cr6,0x821129ac
	if (ctx.cr6.eq) goto loc_821129AC;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r29,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r29.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// blt 0x821129a4
	if (ctx.cr0.lt) goto loc_821129A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r11,27100
	ctx.r27.s64 = ctx.r11.s64 + 27100;
loc_8211295C:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x821938c8
	ctx.lr = 0x82112984;
	sub_821938C8(ctx, base);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// stw r30,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// addi r31,r31,1072
	ctx.r31.s64 = ctx.r31.s64 + 1072;
	// bge 0x8211295c
	if (!ctx.cr0.lt) goto loc_8211295C;
loc_821129A4:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x821129b0
	goto loc_821129B0;
loc_821129AC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_821129B0:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x821129e4
	if (!ctx.cr6.gt) goto loc_821129E4;
loc_821129C4:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r30,r30,1072
	ctx.r30.s64 = ctx.r30.s64 + 1072;
	// stw r25,1068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1068, ctx.r25.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821129c4
	if (ctx.cr6.lt) goto loc_821129C4;
loc_821129E4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x821129EC;
	sub_821837D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821129F8"))) PPC_WEAK_FUNC(sub_821129F8);
PPC_FUNC_IMPL(__imp__sub_821129F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,27100
	ctx.r10.s64 = ctx.r11.s64 + 27100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82112820
	ctx.lr = 0x82112A1C;
	sub_82112820(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82193ab0
	ctx.lr = 0x82112A24;
	sub_82193AB0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82112A38"))) PPC_WEAK_FUNC(sub_82112A38);
PPC_FUNC_IMPL(__imp__sub_82112A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82112A40;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82112d14
	if (ctx.cr6.eq) goto loc_82112D14;
	// bl 0x82112820
	ctx.lr = 0x82112A60;
	sub_82112820(ctx, base);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r8,1,16,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFE;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r27,r7,16
	ctx.r27.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r11,26852(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26852);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82112abc
	if (ctx.cr6.eq) goto loc_82112ABC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82112ae8
	if (!ctx.cr6.eq) goto loc_82112AE8;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8208fba0
	ctx.lr = 0x82112AA8;
	sub_8208FBA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112ae8
	if (ctx.cr6.eq) goto loc_82112AE8;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// b 0x82112ae0
	goto loc_82112AE0;
loc_82112ABC:
	// addi r11,r10,100
	ctx.r11.s64 = ctx.r10.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8208fba0
	ctx.lr = 0x82112AD0;
	sub_8208FBA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112ae8
	if (ctx.cr6.eq) goto loc_82112AE8;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
loc_82112AE0:
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82112AE8:
	// lwz r30,1056(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1056);
	// bl 0x82183078
	ctx.lr = 0x82112AF0;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82112AFC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82112B00;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82112B0C;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82112B14;
	sub_821830F8(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x82112B1C;
	sub_82080000(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112b38
	if (ctx.cr6.eq) goto loc_82112B38;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8218aff8
	ctx.lr = 0x82112B34;
	sub_8218AFF8(ctx, base);
	// b 0x82112b3c
	goto loc_82112B3C;
loc_82112B38:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82112B3C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r3,1052(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1052, ctx.r3.u32);
	// blt cr6,0x82112b54
	if (ctx.cr6.lt) goto loc_82112B54;
	// bne cr6,0x82112b5c
	if (!ctx.cr6.eq) goto loc_82112B5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82112b58
	goto loc_82112B58;
loc_82112B54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82112B58:
	// bl 0x821830f8
	ctx.lr = 0x82112B5C;
	sub_821830F8(ctx, base);
loc_82112B5C:
	// lwz r3,1052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1052);
	// bl 0x820827d8
	ctx.lr = 0x82112B64;
	sub_820827D8(ctx, base);
	// stw r3,1064(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1064, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82112B70;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112b84
	if (ctx.cr6.eq) goto loc_82112B84;
	// bl 0x821a1580
	ctx.lr = 0x82112B7C;
	sub_821A1580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82112b88
	goto loc_82112B88;
loc_82112B84:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82112B88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821126f0
	ctx.lr = 0x82112B90;
	sub_821126F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// bl 0x82112618
	ctx.lr = 0x82112BB0;
	sub_82112618(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82112be8
	if (ctx.cr6.eq) goto loc_82112BE8;
	// lwz r11,1068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82112bd4
	if (ctx.cr6.eq) goto loc_82112BD4;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82112BD4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,1052(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1052);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x821a2038
	ctx.lr = 0x82112BE8;
	sub_821A2038(ctx, base);
loc_82112BE8:
	// bl 0x82183850
	ctx.lr = 0x82112BEC;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82112BF8;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82112C00;
	sub_821830F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x82112C0C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82112c28
	if (ctx.cr6.eq) goto loc_82112C28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218ae98
	ctx.lr = 0x82112C20;
	sub_8218AE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82112c2c
	goto loc_82112C2C;
loc_82112C28:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82112C2C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x82112C38;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82112c54
	if (ctx.cr6.eq) goto loc_82112C54;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82112C4C;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82112c58
	goto loc_82112C58;
loc_82112C54:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82112C58:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82112c6c
	if (ctx.cr6.lt) goto loc_82112C6C;
	// bne cr6,0x82112c74
	if (!ctx.cr6.eq) goto loc_82112C74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82112c70
	goto loc_82112C70;
loc_82112C6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82112C70:
	// bl 0x821830f8
	ctx.lr = 0x82112C74;
	sub_821830F8(ctx, base);
loc_82112C74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82194b70
	ctx.lr = 0x82112C80;
	sub_82194B70(ctx, base);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821945c0
	ctx.lr = 0x82112C98;
	sub_821945C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82112CA4;
	sub_82183E40(ctx, base);
	// lwz r11,1048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82112cd4
	if (!ctx.cr6.eq) goto loc_82112CD4;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82080000
	ctx.lr = 0x82112CB8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112ccc
	if (ctx.cr6.eq) goto loc_82112CCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821dbc88
	ctx.lr = 0x82112CC8;
	sub_821DBC88(ctx, base);
	// b 0x82112cd0
	goto loc_82112CD0;
loc_82112CCC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82112CD0:
	// stw r3,1048(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1048, ctx.r3.u32);
loc_82112CD4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// lwz r3,1048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1048);
	// bl 0x821d9300
	ctx.lr = 0x82112CE4;
	sub_821D9300(ctx, base);
	// lwz r31,1052(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1052);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82112d04
	if (ctx.cr6.eq) goto loc_82112D04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82112CF8;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82112D04;
	sub_82183E40(ctx, base);
loc_82112D04:
	// stw r24,1052(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1052, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r24,1060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1060, ctx.r24.u32);
	// bl 0x821837d0
	ctx.lr = 0x82112D14;
	sub_821837D0(ctx, base);
loc_82112D14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82112D1C"))) PPC_WEAK_FUNC(sub_82112D1C);
PPC_FUNC_IMPL(__imp__sub_82112D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82112D20"))) PPC_WEAK_FUNC(sub_82112D20);
PPC_FUNC_IMPL(__imp__sub_82112D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82112D28;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82112f08
	if (ctx.cr6.eq) goto loc_82112F08;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r24,r3,-4
	ctx.r24.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,1072
	ctx.r11.s64 = ctx.r10.s64 * 1072;
	// addic. r26,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r26.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x82112ee4
	if (ctx.cr0.lt) goto loc_82112EE4;
	// addi r31,r11,1048
	ctx.r31.s64 = ctx.r11.s64 + 1048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// addi r25,r11,27100
	ctx.r25.s64 = ctx.r11.s64 + 27100;
loc_82112D6C:
	// addi r31,r31,-1072
	ctx.r31.s64 = ctx.r31.s64 + -1072;
	// addi r27,r31,-1036
	ctx.r27.s64 = ctx.r31.s64 + -1036;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,-1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1048, ctx.r25.u32);
	// bl 0x82193ab0
	ctx.lr = 0x82112D80;
	sub_82193AB0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112da0
	if (ctx.cr6.eq) goto loc_82112DA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112DA0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,-7464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7464);
	// lwz r9,-1044(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1044);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
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
	// bge cr6,0x82112e00
	if (!ctx.cr6.lt) goto loc_82112E00;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82112e00
	if (!ctx.cr6.eq) goto loc_82112E00;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82112e04
	goto loc_82112E04;
loc_82112E00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82112E04:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,-1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1040, ctx.r11.u32);
	// lwz r10,-7464(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -7464);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82112eac
	if (!ctx.cr6.lt) goto loc_82112EAC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82112eac
	if (!ctx.cr6.eq) goto loc_82112EAC;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r7,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82112eac
	if (ctx.cr6.eq) goto loc_82112EAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112EAC:
	// stw r29,-1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1040, ctx.r29.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82112ed0
	if (ctx.cr6.eq) goto loc_82112ED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82112EC4;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82112ED0;
	sub_82183E40(ctx, base);
loc_82112ED0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82193ab0
	ctx.lr = 0x82112EDC;
	sub_82193AB0(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x82112d6c
	if (!ctx.cr0.lt) goto loc_82112D6C;
loc_82112EE4:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82112efc
	if (ctx.cr6.eq) goto loc_82112EFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82183e40
	ctx.lr = 0x82112EFC;
	sub_82183E40(ctx, base);
loc_82112EFC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82112F08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,27100
	ctx.r10.s64 = ctx.r11.s64 + 27100;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82112820
	ctx.lr = 0x82112F1C;
	sub_82112820(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82193ab0
	ctx.lr = 0x82112F24;
	sub_82193AB0(ctx, base);
	// clrlwi r9,r23,31
	ctx.r9.u64 = ctx.r23.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82112f3c
	if (ctx.cr6.eq) goto loc_82112F3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82112F3C;
	sub_82183E40(ctx, base);
loc_82112F3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82112F48"))) PPC_WEAK_FUNC(sub_82112F48);
PPC_FUNC_IMPL(__imp__sub_82112F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82112F50;
	sub_82248750(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82113460
	if (!ctx.cr6.gt) goto loc_82113460;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// lis r19,-32179
	ctx.r19.s64 = -2108882944;
	// li r14,67
	ctx.r14.s64 = 67;
	// li r15,72
	ctx.r15.s64 = 72;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
loc_82112F88:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,1060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82113448
	if (ctx.cr6.eq) goto loc_82113448;
	// addi r21,r28,12
	ctx.r21.s64 = ctx.r28.s64 + 12;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82193ab0
	ctx.lr = 0x82112FA8;
	sub_82193AB0(ctx, base);
	// lwz r3,1048(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112fc8
	if (ctx.cr6.eq) goto loc_82112FC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112FC8:
	// stw r24,1048(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1048, ctx.r24.u32);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// lwz r11,-7464(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7464);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
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
	// bge cr6,0x8211302c
	if (!ctx.cr6.lt) goto loc_8211302C;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8211302c
	if (!ctx.cr6.eq) goto loc_8211302C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82113030
	goto loc_82113030;
loc_8211302C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82113030:
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r3,-7464(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7464);
	// bl 0x821a75f0
	ctx.lr = 0x82113044;
	sub_821A75F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113060
	if (ctx.cr6.eq) goto loc_82113060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82113060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82113060:
	// stw r24,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r24.u32);
	// lwz r31,1052(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82113084
	if (ctx.cr6.eq) goto loc_82113084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82113078;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82113084;
	sub_82183E40(ctx, base);
loc_82113084:
	// stw r24,1052(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1052, ctx.r24.u32);
	// clrlwi r31,r20,16
	ctx.r31.u64 = ctx.r20.u32 & 0xFFFF;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r11,26852(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 26852);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821130ec
	if (ctx.cr6.eq) goto loc_821130EC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8211312c
	if (!ctx.cr6.eq) goto loc_8211312C;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x821130C4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8211312c
	if (ctx.cr6.eq) goto loc_8211312C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218ab00
	ctx.lr = 0x821130D8;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211312c
	if (ctx.cr6.eq) goto loc_8211312C;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// b 0x82113124
	goto loc_82113124;
loc_821130EC:
	// addi r11,r10,100
	ctx.r11.s64 = ctx.r10.s64 + 100;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x82113100;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8211312c
	if (ctx.cr6.eq) goto loc_8211312C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82113114;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211312c
	if (ctx.cr6.eq) goto loc_8211312C;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
loc_82113124:
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8211312C:
	// lwz r30,1056(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1056);
	// bl 0x82183078
	ctx.lr = 0x82113134;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82113140;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82113144;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82113150;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82113158;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8211315C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82113174
	if (ctx.cr6.eq) goto loc_82113174;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x82113170;
	sub_82183448(ctx, base);
	// b 0x8211317c
	goto loc_8211317C;
loc_82113174:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8211317C;
	sub_821845A0(ctx, base);
loc_8211317C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113194
	if (ctx.cr6.eq) goto loc_82113194;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8218aff8
	ctx.lr = 0x82113190;
	sub_8218AFF8(ctx, base);
	// b 0x82113198
	goto loc_82113198;
loc_82113194:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82113198:
	// stw r3,1052(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1052, ctx.r3.u32);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821131b0
	if (ctx.cr6.lt) goto loc_821131B0;
	// bne cr6,0x821131b8
	if (!ctx.cr6.eq) goto loc_821131B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821131b4
	goto loc_821131B4;
loc_821131B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821131B4:
	// bl 0x821830f8
	ctx.lr = 0x821131B8;
	sub_821830F8(ctx, base);
loc_821131B8:
	// lwz r10,1052(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	// li r11,65
	ctx.r11.s64 = 65;
	// li r9,80
	ctx.r9.s64 = 80;
	// stb r15,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r15.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r14,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r14.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82113210
	if (!ctx.cr6.eq) goto loc_82113210;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82113214
	goto loc_82113214;
loc_82113210:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82113214:
	// stw r11,1064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1064, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x8211321C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82113234
	if (ctx.cr6.eq) goto loc_82113234;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x82113230;
	sub_82183448(ctx, base);
	// b 0x8211323c
	goto loc_8211323C;
loc_82113234:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8211323C;
	sub_821845A0(ctx, base);
loc_8211323C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113250
	if (ctx.cr6.eq) goto loc_82113250;
	// bl 0x821a1580
	ctx.lr = 0x82113248;
	sub_821A1580(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82113254
	goto loc_82113254;
loc_82113250:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82113254:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821126f0
	ctx.lr = 0x8211325C;
	sub_821126F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,-7464(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -7464);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821132c8
	if (!ctx.cr6.lt) goto loc_821132C8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821132c8
	if (!ctx.cr6.eq) goto loc_821132C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821132cc
	goto loc_821132CC;
loc_821132C8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821132CC:
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82113304
	if (ctx.cr6.eq) goto loc_82113304;
	// lwz r11,1068(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821132f0
	if (ctx.cr6.eq) goto loc_821132F0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_821132F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,1052(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x821a2038
	ctx.lr = 0x82113304;
	sub_821A2038(ctx, base);
loc_82113304:
	// bl 0x82183850
	ctx.lr = 0x82113308;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82113314;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8211331C;
	sub_821830F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218a810
	ctx.lr = 0x82113328;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82113344
	if (ctx.cr6.eq) goto loc_82113344;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218ae98
	ctx.lr = 0x8211333C;
	sub_8218AE98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82113348
	goto loc_82113348;
loc_82113344:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82113348:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218a810
	ctx.lr = 0x82113354;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82113370
	if (ctx.cr6.eq) goto loc_82113370;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82113368;
	sub_8218AC78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82113374
	goto loc_82113374;
loc_82113370:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82113374:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82113388
	if (ctx.cr6.lt) goto loc_82113388;
	// bne cr6,0x82113390
	if (!ctx.cr6.eq) goto loc_82113390;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211338c
	goto loc_8211338C;
loc_82113388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8211338C:
	// bl 0x821830f8
	ctx.lr = 0x82113390;
	sub_821830F8(ctx, base);
loc_82113390:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82194b70
	ctx.lr = 0x8211339C;
	sub_82194B70(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821945c0
	ctx.lr = 0x821133B0;
	sub_821945C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x821133BC;
	sub_82183E40(ctx, base);
	// lwz r11,1048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82113408
	if (!ctx.cr6.eq) goto loc_82113408;
	// bl 0x82183850
	ctx.lr = 0x821133CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821133e4
	if (ctx.cr6.eq) goto loc_821133E4;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x82183448
	ctx.lr = 0x821133E0;
	sub_82183448(ctx, base);
	// b 0x821133ec
	goto loc_821133EC;
loc_821133E4:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821845a0
	ctx.lr = 0x821133EC;
	sub_821845A0(ctx, base);
loc_821133EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113400
	if (ctx.cr6.eq) goto loc_82113400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821dbc88
	ctx.lr = 0x821133FC;
	sub_821DBC88(ctx, base);
	// b 0x82113404
	goto loc_82113404;
loc_82113400:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82113404:
	// stw r3,1048(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1048, ctx.r3.u32);
loc_82113408:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,1048(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1048);
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// bl 0x821d9300
	ctx.lr = 0x82113418;
	sub_821D9300(ctx, base);
	// lwz r31,1052(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82113438
	if (ctx.cr6.eq) goto loc_82113438;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x8211342C;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82113438;
	sub_82183E40(ctx, base);
loc_82113438:
	// stw r24,1052(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1052, ctx.r24.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r24,1060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1060, ctx.r24.u32);
	// bl 0x821837d0
	ctx.lr = 0x82113448;
	sub_821837D0(ctx, base);
loc_82113448:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r18,r18,1072
	ctx.r18.s64 = ctx.r18.s64 + 1072;
	// addi r20,r20,10
	ctx.r20.s64 = ctx.r20.s64 + 10;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82112f88
	if (ctx.cr6.lt) goto loc_82112F88;
loc_82113460:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82113468"))) PPC_WEAK_FUNC(sub_82113468);
PPC_FUNC_IMPL(__imp__sub_82113468) {
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82112898
	ctx.lr = 0x8211348C;
	sub_82112898(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8218b1e8
	ctx.lr = 0x82113494;
	sub_8218B1E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,27140
	ctx.r8.s64 = ctx.r10.s64 + 27140;
	// addi r7,r9,27120
	ctx.r7.s64 = ctx.r9.s64 + 27120;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bne cr6,0x821134d8
	if (!ctx.cr6.eq) goto loc_821134D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,27108
	ctx.r5.s64 = ctx.r11.s64 + 27108;
	// bl 0x8218a5f0
	ctx.lr = 0x821134D4;
	sub_8218A5F0(ctx, base);
	// b 0x821134e8
	goto loc_821134E8;
loc_821134D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,3708
	ctx.r5.s64 = ctx.r11.s64 + 3708;
	// bl 0x8218a5f0
	ctx.lr = 0x821134E8;
	sub_8218A5F0(ctx, base);
loc_821134E8:
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

__attribute__((alias("__imp__sub_82113504"))) PPC_WEAK_FUNC(sub_82113504);
PPC_FUNC_IMPL(__imp__sub_82113504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113508"))) PPC_WEAK_FUNC(sub_82113508);
PPC_FUNC_IMPL(__imp__sub_82113508) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x82113750
	sub_82113750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82113510"))) PPC_WEAK_FUNC(sub_82113510);
PPC_FUNC_IMPL(__imp__sub_82113510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82113518;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,27140
	ctx.r9.s64 = ctx.r11.s64 + 27140;
	// addi r8,r10,27120
	ctx.r8.s64 = ctx.r10.s64 + 27120;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113550
	if (ctx.cr6.eq) goto loc_82113550;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82113550;
	sub_82183E40(ctx, base);
loc_82113550:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// bl 0x8218b208
	ctx.lr = 0x82113560;
	sub_8218B208(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,27104
	ctx.r10.s64 = ctx.r11.s64 + 27104;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82113580
	if (ctx.cr6.eq) goto loc_82113580;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82112d20
	ctx.lr = 0x82113580;
	sub_82112D20(ctx, base);
loc_82113580:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211358C"))) PPC_WEAK_FUNC(sub_8211358C);
PPC_FUNC_IMPL(__imp__sub_8211358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113590"))) PPC_WEAK_FUNC(sub_82113590);
PPC_FUNC_IMPL(__imp__sub_82113590) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x821135B0;
	sub_8218AA18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x82112f48
	ctx.lr = 0x821135BC;
	sub_82112F48(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x821135d8
	if (ctx.cr6.eq) goto loc_821135D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x821135D8;
	sub_82183E40(ctx, base);
loc_821135D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x821135E8;
	sub_8218A7F0(ctx, base);
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

__attribute__((alias("__imp__sub_82113600"))) PPC_WEAK_FUNC(sub_82113600);
PPC_FUNC_IMPL(__imp__sub_82113600) {
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
	// bl 0x82113468
	ctx.lr = 0x82113618;
	sub_82113468(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,27164
	ctx.r9.s64 = ctx.r11.s64 + 27164;
	// addi r8,r10,27144
	ctx.r8.s64 = ctx.r10.s64 + 27144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82113648"))) PPC_WEAK_FUNC(sub_82113648);
PPC_FUNC_IMPL(__imp__sub_82113648) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x821137a8
	sub_821137A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82113650"))) PPC_WEAK_FUNC(sub_82113650);
PPC_FUNC_IMPL(__imp__sub_82113650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82113658;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,84(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82113670;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211367C;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82113690;
	sub_8218AA18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x82112f48
	ctx.lr = 0x8211369C;
	sub_82112F48(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821136b0
	if (ctx.cr6.eq) goto loc_821136B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x821136B0;
	sub_82183E40(ctx, base);
loc_821136B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x821136C0;
	sub_8218A7F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x821136C8;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821136D4"))) PPC_WEAK_FUNC(sub_821136D4);
PPC_FUNC_IMPL(__imp__sub_821136D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821136D8"))) PPC_WEAK_FUNC(sub_821136D8);
PPC_FUNC_IMPL(__imp__sub_821136D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,27104
	ctx.r10.s64 = ctx.r11.s64 + 27104;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82113714
	if (ctx.cr6.eq) goto loc_82113714;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82112d20
	ctx.lr = 0x82113714;
	sub_82112D20(ctx, base);
loc_82113714:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82113738
	if (ctx.cr6.eq) goto loc_82113738;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82113734;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82113738:
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

__attribute__((alias("__imp__sub_82113750"))) PPC_WEAK_FUNC(sub_82113750);
PPC_FUNC_IMPL(__imp__sub_82113750) {
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
	// bl 0x82113510
	ctx.lr = 0x82113770;
	sub_82113510(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211378c
	if (ctx.cr6.eq) goto loc_8211378C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82113788;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8211378C:
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

__attribute__((alias("__imp__sub_821137A4"))) PPC_WEAK_FUNC(sub_821137A4);
PPC_FUNC_IMPL(__imp__sub_821137A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821137A8"))) PPC_WEAK_FUNC(sub_821137A8);
PPC_FUNC_IMPL(__imp__sub_821137A8) {
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
	// addi r9,r11,27164
	ctx.r9.s64 = ctx.r11.s64 + 27164;
	// addi r8,r10,27144
	ctx.r8.s64 = ctx.r10.s64 + 27144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82113510
	ctx.lr = 0x821137E0;
	sub_82113510(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821137fc
	if (ctx.cr6.eq) goto loc_821137FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821137F8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821137FC:
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

__attribute__((alias("__imp__sub_82113814"))) PPC_WEAK_FUNC(sub_82113814);
PPC_FUNC_IMPL(__imp__sub_82113814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113818"))) PPC_WEAK_FUNC(sub_82113818);
PPC_FUNC_IMPL(__imp__sub_82113818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82113820;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82113868
	if (ctx.cr6.eq) goto loc_82113868;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82113838:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113858
	if (ctx.cr6.eq) goto loc_82113858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82113858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82113858:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82113838
	if (!ctx.cr6.eq) goto loc_82113838;
loc_82113868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82113870"))) PPC_WEAK_FUNC(sub_82113870);
PPC_FUNC_IMPL(__imp__sub_82113870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82113878;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821138a8
	if (ctx.cr6.eq) goto loc_821138A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821138A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821138A8:
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821138B4"))) PPC_WEAK_FUNC(sub_821138B4);
PPC_FUNC_IMPL(__imp__sub_821138B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821138B8"))) PPC_WEAK_FUNC(sub_821138B8);
PPC_FUNC_IMPL(__imp__sub_821138B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821138CC"))) PPC_WEAK_FUNC(sub_821138CC);
PPC_FUNC_IMPL(__imp__sub_821138CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821138D0"))) PPC_WEAK_FUNC(sub_821138D0);
PPC_FUNC_IMPL(__imp__sub_821138D0) {
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
	// bl 0x82113818
	ctx.lr = 0x821138E8;
	sub_82113818(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211390c
	if (ctx.cr6.eq) goto loc_8211390C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821138FC;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8211390C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82113920"))) PPC_WEAK_FUNC(sub_82113920);
PPC_FUNC_IMPL(__imp__sub_82113920) {
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
	// bl 0x82113818
	ctx.lr = 0x82113940;
	sub_82113818(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0560
	ctx.lr = 0x8211394C;
	sub_820A0560(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82113970
	if (ctx.cr6.eq) goto loc_82113970;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82113960:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82113960
	if (!ctx.cr6.eq) goto loc_82113960;
loc_82113970:
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

__attribute__((alias("__imp__sub_82113988"))) PPC_WEAK_FUNC(sub_82113988);
PPC_FUNC_IMPL(__imp__sub_82113988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821139b4
	if (ctx.cr6.eq) goto loc_821139B4;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
loc_8211399C:
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821139bc
	if (ctx.cr6.eq) goto loc_821139BC;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8211399c
	if (!ctx.cr6.eq) goto loc_8211399C;
loc_821139B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821139BC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821139C4"))) PPC_WEAK_FUNC(sub_821139C4);
PPC_FUNC_IMPL(__imp__sub_821139C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821139C8"))) PPC_WEAK_FUNC(sub_821139C8);
PPC_FUNC_IMPL(__imp__sub_821139C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821139f4
	if (ctx.cr6.eq) goto loc_821139F4;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
loc_821139DC:
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821139fc
	if (ctx.cr6.eq) goto loc_821139FC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821139dc
	if (!ctx.cr6.eq) goto loc_821139DC;
loc_821139F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821139FC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82113A04"))) PPC_WEAK_FUNC(sub_82113A04);
PPC_FUNC_IMPL(__imp__sub_82113A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113A08"))) PPC_WEAK_FUNC(sub_82113A08);
PPC_FUNC_IMPL(__imp__sub_82113A08) {
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
	// li r11,20
	ctx.r11.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82113aa0
	if (!ctx.cr6.lt) goto loc_82113AA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113a60
	if (ctx.cr6.eq) goto loc_82113A60;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82113A50;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82113A60:
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82113a80
	if (ctx.cr6.gt) goto loc_82113A80;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82113a84
	goto loc_82113A84;
loc_82113A80:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82113A84:
	// bl 0x82080d68
	ctx.lr = 0x82113A88;
	sub_82080D68(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82113AA0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82113AD0"))) PPC_WEAK_FUNC(sub_82113AD0);
PPC_FUNC_IMPL(__imp__sub_82113AD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82113b50
	if (!ctx.cr6.lt) goto loc_82113B50;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113b24
	if (ctx.cr6.eq) goto loc_82113B24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82113B14;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82113B24:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82113b3c
	if (!ctx.cr6.gt) goto loc_82113B3C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82113B3C:
	// bl 0x82080d68
	ctx.lr = 0x82113B40;
	sub_82080D68(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82113B50:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82113B78"))) PPC_WEAK_FUNC(sub_82113B78);
PPC_FUNC_IMPL(__imp__sub_82113B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,27192
	ctx.r9.s64 = ctx.r11.s64 + 27192;
	// addi r8,r10,-14444
	ctx.r8.s64 = ctx.r10.s64 + -14444;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// stw r6,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82113BD4"))) PPC_WEAK_FUNC(sub_82113BD4);
PPC_FUNC_IMPL(__imp__sub_82113BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113BD8"))) PPC_WEAK_FUNC(sub_82113BD8);
PPC_FUNC_IMPL(__imp__sub_82113BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82113BE0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,40(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r25,r3,32
	ctx.r25.s64 = ctx.r3.s64 + 32;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82113cb0
	if (ctx.cr6.eq) goto loc_82113CB0;
loc_82113C00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82113c40
	if (ctx.cr6.eq) goto loc_82113C40;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82113c38
	if (ctx.cr6.eq) goto loc_82113C38;
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
	ctx.lr = 0x82113C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82113c40
	goto loc_82113C40;
loc_82113C38:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82113C40;
	sub_82183E40(ctx, base);
loc_82113C40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113c58
	if (ctx.cr6.eq) goto loc_82113C58;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82113C58;
	sub_82183E40(ctx, base);
loc_82113C58:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82113ca0
	if (ctx.cr6.eq) goto loc_82113CA0;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82113c88
	if (ctx.cr6.eq) goto loc_82113C88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82113C7C;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82113C88;
	sub_82183E40(ctx, base);
loc_82113C88:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a1ea0
	ctx.lr = 0x82113C94;
	sub_821A1EA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82113CA0;
	sub_82183E40(ctx, base);
loc_82113CA0:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82113c00
	if (!ctx.cr6.eq) goto loc_82113C00;
loc_82113CB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82113a08
	ctx.lr = 0x82113CBC;
	sub_82113A08(ctx, base);
	// lwz r31,44(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r29,52(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82113cfc
	if (ctx.cr6.eq) goto loc_82113CFC;
loc_82113CCC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82113cec
	if (ctx.cr6.eq) goto loc_82113CEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82113CE0;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82113CEC;
	sub_82183E40(ctx, base);
loc_82113CEC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82113ccc
	if (!ctx.cr6.eq) goto loc_82113CCC;
loc_82113CFC:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// stw r11,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82113D0C"))) PPC_WEAK_FUNC(sub_82113D0C);
PPC_FUNC_IMPL(__imp__sub_82113D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113D10"))) PPC_WEAK_FUNC(sub_82113D10);
PPC_FUNC_IMPL(__imp__sub_82113D10) {
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
	// addi r10,r11,27192
	ctx.r10.s64 = ctx.r11.s64 + 27192;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82113bd8
	ctx.lr = 0x82113D38;
	sub_82113BD8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113d5c
	if (ctx.cr6.eq) goto loc_82113D5C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82113D50;
	sub_82183E40(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82113D5C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113d7c
	if (ctx.cr6.eq) goto loc_82113D7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82113D70;
	sub_82183E40(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82113D7C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r11,-14444
	ctx.r10.s64 = ctx.r11.s64 + -14444;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82113DA0"))) PPC_WEAK_FUNC(sub_82113DA0);
PPC_FUNC_IMPL(__imp__sub_82113DA0) {
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
	// bl 0x82113d10
	ctx.lr = 0x82113DC0;
	sub_82113D10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82113ddc
	if (ctx.cr6.eq) goto loc_82113DDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82113DD8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82113DDC:
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

__attribute__((alias("__imp__sub_82113DF4"))) PPC_WEAK_FUNC(sub_82113DF4);
PPC_FUNC_IMPL(__imp__sub_82113DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113DF8"))) PPC_WEAK_FUNC(sub_82113DF8);
PPC_FUNC_IMPL(__imp__sub_82113DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82113E00;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,68(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82113E10;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82113E1C;
	sub_821837D0(ctx, base);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r26,40(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82113eec
	if (ctx.cr6.eq) goto loc_82113EEC;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82113E3C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82082840
	ctx.lr = 0x82113E48;
	sub_82082840(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r30,r31,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82113e64
	if (!ctx.cr6.gt) goto loc_82113E64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82113E64:
	// bl 0x82183850
	ctx.lr = 0x82113E68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82113e80
	if (ctx.cr6.eq) goto loc_82113E80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82113E7C;
	sub_82183448(ctx, base);
	// b 0x82113e8c
	goto loc_82113E8C;
loc_82113E80:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82113E8C;
	sub_821845A0(ctx, base);
loc_82113E8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113ed0
	if (ctx.cr6.eq) goto loc_82113ED0;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82113ec8
	if (ctx.cr0.lt) goto loc_82113EC8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82113EA8:
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
	// stwu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82113ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82113EA8;
loc_82113EC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82113ed4
	goto loc_82113ED4;
loc_82113ED0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82113ED4:
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82114178
	ctx.lr = 0x82113EE0;
	sub_82114178(ctx, base);
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82113e3c
	if (!ctx.cr6.eq) goto loc_82113E3C;
loc_82113EEC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82113EF4;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82113EFC"))) PPC_WEAK_FUNC(sub_82113EFC);
PPC_FUNC_IMPL(__imp__sub_82113EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82113F00"))) PPC_WEAK_FUNC(sub_82113F00);
PPC_FUNC_IMPL(__imp__sub_82113F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82113F08;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82113F1C;
	sub_82183078(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82113F28;
	sub_821837D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82113bd8
	ctx.lr = 0x82113F30;
	sub_82113BD8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82113F3C:
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x82113F48;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82113f54
	if (ctx.cr6.eq) goto loc_82113F54;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82113F54:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// blt cr6,0x82113f3c
	if (ctx.cr6.lt) goto loc_82113F3C;
	// addi r26,r22,32
	ctx.r26.s64 = ctx.r22.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82113a08
	ctx.lr = 0x82113F70;
	sub_82113A08(ctx, base);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82113F78:
	// clrlwi r27,r24,16
	ctx.r27.u64 = ctx.r24.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8218a810
	ctx.lr = 0x82113F88;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82114088
	if (ctx.cr6.eq) goto loc_82114088;
	// lwz r30,72(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82113fa4
	if (!ctx.cr6.eq) goto loc_82113FA4;
	// bl 0x82182e90
	ctx.lr = 0x82113FA0;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82113FA4:
	// bl 0x82183078
	ctx.lr = 0x82113FA8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82113FB4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82113FB8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82113FC4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82113FCC;
	sub_821830F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x82113FD8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82113ff4
	if (ctx.cr6.eq) goto loc_82113FF4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218af88
	ctx.lr = 0x82113FEC;
	sub_8218AF88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82113ff8
	goto loc_82113FF8;
loc_82113FF4:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82113FF8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8211400c
	if (ctx.cr6.lt) goto loc_8211400C;
	// bne cr6,0x82114014
	if (!ctx.cr6.eq) goto loc_82114014;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82114010
	goto loc_82114010;
loc_8211400C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82114010:
	// bl 0x821830f8
	ctx.lr = 0x82114014;
	sub_821830F8(ctx, base);
loc_82114014:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211401C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82114020;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82114038
	if (ctx.cr6.eq) goto loc_82114038;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x82114034;
	sub_82183448(ctx, base);
	// b 0x82114040
	goto loc_82114040;
loc_82114038:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x82114040;
	sub_821845A0(ctx, base);
loc_82114040:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211405c
	if (ctx.cr6.eq) goto loc_8211405C;
	// bl 0x821a1580
	ctx.lr = 0x82114050;
	sub_821A1580(ctx, base);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82114060
	goto loc_82114060;
loc_8211405C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82114060:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r23,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r23.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// sth r27,12(r9)
	PPC_STORE_U16(ctx.r9.u32 + 12, ctx.r27.u16);
loc_82114088:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,100
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 100, ctx.xer);
	// blt cr6,0x82113f78
	if (ctx.cr6.lt) goto loc_82113F78;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r31,10000
	ctx.r31.s64 = 10000;
loc_8211409C:
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x821140A8;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821140b4
	if (ctx.cr6.eq) goto loc_821140B4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821140B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10100, ctx.xer);
	// blt cr6,0x8211409c
	if (ctx.cr6.lt) goto loc_8211409C;
	// addi r29,r22,44
	ctx.r29.s64 = ctx.r22.s64 + 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82113ad0
	ctx.lr = 0x821140D0;
	sub_82113AD0(ctx, base);
	// li r28,10000
	ctx.r28.s64 = 10000;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_821140D8:
	// clrlwi r30,r28,16
	ctx.r30.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x821140E8;
	sub_8218A810(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82114130
	if (ctx.cr6.eq) goto loc_82114130;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218a810
	ctx.lr = 0x821140FC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82114114
	if (ctx.cr6.eq) goto loc_82114114;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218af88
	ctx.lr = 0x82114110;
	sub_8218AF88(ctx, base);
	// b 0x82114118
	goto loc_82114118;
loc_82114114:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82114118:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// sth r30,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r30.u16);
loc_82114130:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,10100
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10100, ctx.xer);
	// blt cr6,0x821140d8
	if (ctx.cr6.lt) goto loc_821140D8;
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82114160
	if (ctx.cr6.eq) goto loc_82114160;
	// bl 0x82113df8
	ctx.lr = 0x82114150;
	sub_82113DF8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x82114158;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82114160:
	// bl 0x82113df8
	ctx.lr = 0x82114164;
	sub_82113DF8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211416C;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82114174"))) PPC_WEAK_FUNC(sub_82114174);
PPC_FUNC_IMPL(__imp__sub_82114174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114178"))) PPC_WEAK_FUNC(sub_82114178);
PPC_FUNC_IMPL(__imp__sub_82114178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82114180;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114248
	if (ctx.cr6.eq) goto loc_82114248;
	// bl 0x82082840
	ctx.lr = 0x8211419C;
	sub_82082840(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// bl 0x821a2038
	ctx.lr = 0x821141B8;
	sub_821A2038(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82114220
	if (ctx.cr6.eq) goto loc_82114220;
	// li r27,0
	ctx.r27.s64 = 0;
loc_821141C8:
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a810
	ctx.lr = 0x821141D8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82114210
	if (ctx.cr6.eq) goto loc_82114210;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218ab00
	ctx.lr = 0x821141EC;
	sub_8218AB00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114210
	if (ctx.cr6.eq) goto loc_82114210;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_82114210:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x821141c8
	if (ctx.cr6.lt) goto loc_821141C8;
loc_82114220:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82114240
	if (ctx.cr6.eq) goto loc_82114240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a7f0
	ctx.lr = 0x82114234;
	sub_8218A7F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82114240;
	sub_82183E40(ctx, base);
loc_82114240:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82114248:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82114250"))) PPC_WEAK_FUNC(sub_82114250);
PPC_FUNC_IMPL(__imp__sub_82114250) {
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
	// lwz r3,-2044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2044);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114284
	if (ctx.cr6.eq) goto loc_82114284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114284:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2044, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821142A0"))) PPC_WEAK_FUNC(sub_821142A0);
PPC_FUNC_IMPL(__imp__sub_821142A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-2044(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821142AC"))) PPC_WEAK_FUNC(sub_821142AC);
PPC_FUNC_IMPL(__imp__sub_821142AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821142B0"))) PPC_WEAK_FUNC(sub_821142B0);
PPC_FUNC_IMPL(__imp__sub_821142B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821142D8"))) PPC_WEAK_FUNC(sub_821142D8);
PPC_FUNC_IMPL(__imp__sub_821142D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821142f0
	if (!ctx.cr6.eq) goto loc_821142F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821142F0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114310"))) PPC_WEAK_FUNC(sub_82114310);
PPC_FUNC_IMPL(__imp__sub_82114310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114328
	if (!ctx.cr6.eq) goto loc_82114328;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82114328:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114338"))) PPC_WEAK_FUNC(sub_82114338);
PPC_FUNC_IMPL(__imp__sub_82114338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bge cr6,0x82114394
	if (!ctx.cr6.lt) goto loc_82114394;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// beq cr6,0x82114388
	if (ctx.cr6.eq) goto loc_82114388;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lfs f0,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_82114388:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82114394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211439C"))) PPC_WEAK_FUNC(sub_8211439C);
PPC_FUNC_IMPL(__imp__sub_8211439C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821143A0"))) PPC_WEAK_FUNC(sub_821143A0);
PPC_FUNC_IMPL(__imp__sub_821143A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82114408
	if (!ctx.cr6.lt) goto loc_82114408;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821143f8
	if (!ctx.cr6.gt) goto loc_821143F8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bgt cr6,0x821143f8
	if (ctx.cr6.gt) goto loc_821143F8;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_821143F8:
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82114408:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114410"))) PPC_WEAK_FUNC(sub_82114410);
PPC_FUNC_IMPL(__imp__sub_82114410) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82114428
	if (!ctx.cr6.lt) goto loc_82114428;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82114428:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114430"))) PPC_WEAK_FUNC(sub_82114430);
PPC_FUNC_IMPL(__imp__sub_82114430) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82114458
	if (!ctx.cr6.lt) goto loc_82114458;
	// cmplwi cr6,r5,100
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 100, ctx.xer);
	// bgt cr6,0x82114458
	if (ctx.cr6.gt) goto loc_82114458;
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
loc_82114458:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114460"))) PPC_WEAK_FUNC(sub_82114460);
PPC_FUNC_IMPL(__imp__sub_82114460) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82114488
	if (!ctx.cr6.lt) goto loc_82114488;
	// cmplwi cr6,r5,100
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 100, ctx.xer);
	// bgt cr6,0x82114488
	if (ctx.cr6.gt) goto loc_82114488;
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
loc_82114488:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114490"))) PPC_WEAK_FUNC(sub_82114490);
PPC_FUNC_IMPL(__imp__sub_82114490) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,10000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10000, ctx.xer);
	// blt cr6,0x821144a0
	if (ctx.cr6.lt) goto loc_821144A0;
	// cmpwi cr6,r4,19999
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19999, ctx.xer);
	// ble cr6,0x8211455c
	if (!ctx.cr6.gt) goto loc_8211455C;
loc_821144A0:
	// cmpwi cr6,r4,20000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20000, ctx.xer);
	// blt cr6,0x821144b0
	if (ctx.cr6.lt) goto loc_821144B0;
	// cmpwi cr6,r4,29999
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 29999, ctx.xer);
	// ble cr6,0x8211455c
	if (!ctx.cr6.gt) goto loc_8211455C;
loc_821144B0:
	// cmpwi cr6,r4,30000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30000, ctx.xer);
	// blt cr6,0x821144c8
	if (ctx.cr6.lt) goto loc_821144C8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,39999
	ctx.r10.u64 = ctx.r11.u64 | 39999;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8211455c
	if (!ctx.cr6.gt) goto loc_8211455C;
loc_821144C8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,40000
	ctx.r10.u64 = ctx.r11.u64 | 40000;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821144f0
	if (ctx.cr6.lt) goto loc_821144F0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,49999
	ctx.r10.u64 = ctx.r11.u64 | 49999;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821144f0
	if (ctx.cr6.gt) goto loc_821144F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821144F0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,50000
	ctx.r10.u64 = ctx.r11.u64 | 50000;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82114510
	if (ctx.cr6.lt) goto loc_82114510;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,59999
	ctx.r10.u64 = ctx.r11.u64 | 59999;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8211455c
	if (!ctx.cr6.gt) goto loc_8211455C;
loc_82114510:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,60000
	ctx.r10.u64 = ctx.r11.u64 | 60000;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82114538
	if (ctx.cr6.lt) goto loc_82114538;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,4463
	ctx.r10.u64 = ctx.r11.u64 | 4463;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82114538
	if (ctx.cr6.gt) goto loc_82114538;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82114538:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,4464
	ctx.r10.u64 = ctx.r11.u64 | 4464;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8211455c
	if (ctx.cr6.lt) goto loc_8211455C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r11,14463
	ctx.r10.u64 = ctx.r11.u64 | 14463;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8211455C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114564"))) PPC_WEAK_FUNC(sub_82114564);
PPC_FUNC_IMPL(__imp__sub_82114564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114568"))) PPC_WEAK_FUNC(sub_82114568);
PPC_FUNC_IMPL(__imp__sub_82114568) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,10000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10000, ctx.xer);
	// blt cr6,0x82114578
	if (ctx.cr6.lt) goto loc_82114578;
	// cmpwi cr6,r4,19999
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19999, ctx.xer);
	// ble cr6,0x8211464c
	if (!ctx.cr6.gt) goto loc_8211464C;
loc_82114578:
	// cmpwi cr6,r4,20000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20000, ctx.xer);
	// blt cr6,0x82114590
	if (ctx.cr6.lt) goto loc_82114590;
	// cmpwi cr6,r4,29999
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 29999, ctx.xer);
	// bgt cr6,0x82114590
	if (ctx.cr6.gt) goto loc_82114590;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82114590:
	// cmpwi cr6,r4,30000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30000, ctx.xer);
	// blt cr6,0x821145b0
	if (ctx.cr6.lt) goto loc_821145B0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,39999
	ctx.r10.u64 = ctx.r11.u64 | 39999;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821145b0
	if (ctx.cr6.gt) goto loc_821145B0;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821145B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,40000
	ctx.r10.u64 = ctx.r11.u64 | 40000;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821145d8
	if (ctx.cr6.lt) goto loc_821145D8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,49999
	ctx.r10.u64 = ctx.r11.u64 | 49999;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821145d8
	if (ctx.cr6.gt) goto loc_821145D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821145D8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,50000
	ctx.r10.u64 = ctx.r11.u64 | 50000;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82114600
	if (ctx.cr6.lt) goto loc_82114600;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,59999
	ctx.r10.u64 = ctx.r11.u64 | 59999;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82114600
	if (ctx.cr6.gt) goto loc_82114600;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82114600:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,60000
	ctx.r10.u64 = ctx.r11.u64 | 60000;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82114628
	if (ctx.cr6.lt) goto loc_82114628;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,4463
	ctx.r10.u64 = ctx.r11.u64 | 4463;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82114628
	if (ctx.cr6.gt) goto loc_82114628;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82114628:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,4464
	ctx.r10.u64 = ctx.r11.u64 | 4464;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8211464c
	if (ctx.cr6.lt) goto loc_8211464C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,6
	ctx.r3.s64 = 6;
	// ori r10,r11,14463
	ctx.r10.u64 = ctx.r11.u64 | 14463;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8211464C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114654"))) PPC_WEAK_FUNC(sub_82114654);
PPC_FUNC_IMPL(__imp__sub_82114654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114658"))) PPC_WEAK_FUNC(sub_82114658);
PPC_FUNC_IMPL(__imp__sub_82114658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114684
	if (ctx.cr6.eq) goto loc_82114684;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82114684:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114690"))) PPC_WEAK_FUNC(sub_82114690);
PPC_FUNC_IMPL(__imp__sub_82114690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821146bc
	if (ctx.cr6.eq) goto loc_821146BC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821146BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821146C4"))) PPC_WEAK_FUNC(sub_821146C4);
PPC_FUNC_IMPL(__imp__sub_821146C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821146C8"))) PPC_WEAK_FUNC(sub_821146C8);
PPC_FUNC_IMPL(__imp__sub_821146C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821146F8"))) PPC_WEAK_FUNC(sub_821146F8);
PPC_FUNC_IMPL(__imp__sub_821146F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821146FC"))) PPC_WEAK_FUNC(sub_821146FC);
PPC_FUNC_IMPL(__imp__sub_821146FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114700"))) PPC_WEAK_FUNC(sub_82114700);
PPC_FUNC_IMPL(__imp__sub_82114700) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82114738"))) PPC_WEAK_FUNC(sub_82114738);
PPC_FUNC_IMPL(__imp__sub_82114738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211473C"))) PPC_WEAK_FUNC(sub_8211473C);
PPC_FUNC_IMPL(__imp__sub_8211473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114740"))) PPC_WEAK_FUNC(sub_82114740);
PPC_FUNC_IMPL(__imp__sub_82114740) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82114778"))) PPC_WEAK_FUNC(sub_82114778);
PPC_FUNC_IMPL(__imp__sub_82114778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8211477C"))) PPC_WEAK_FUNC(sub_8211477C);
PPC_FUNC_IMPL(__imp__sub_8211477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114780"))) PPC_WEAK_FUNC(sub_82114780);
PPC_FUNC_IMPL(__imp__sub_82114780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821147B0"))) PPC_WEAK_FUNC(sub_821147B0);
PPC_FUNC_IMPL(__imp__sub_821147B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821147B4"))) PPC_WEAK_FUNC(sub_821147B4);
PPC_FUNC_IMPL(__imp__sub_821147B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821147B8"))) PPC_WEAK_FUNC(sub_821147B8);
PPC_FUNC_IMPL(__imp__sub_821147B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821147C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-2044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114824
	if (!ctx.cr6.eq) goto loc_82114824;
	// bl 0x82183078
	ctx.lr = 0x821147DC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x821147E8;
	sub_821837D0(ctx, base);
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82080000
	ctx.lr = 0x821147F0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114814
	if (ctx.cr6.eq) goto loc_82114814;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82117508
	ctx.lr = 0x82114800;
	sub_82117508(ctx, base);
	// stw r3,-2044(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2044, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211480C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82114814:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-2044(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2044, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82114824;
	sub_821837D0(ctx, base);
loc_82114824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211482C"))) PPC_WEAK_FUNC(sub_8211482C);
PPC_FUNC_IMPL(__imp__sub_8211482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114830"))) PPC_WEAK_FUNC(sub_82114830);
PPC_FUNC_IMPL(__imp__sub_82114830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82114838;
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r29,r8,65535
	ctx.r29.u64 = ctx.r8.u64 | 65535;
	// lfs f30,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82114a48
	if (ctx.cr6.eq) goto loc_82114A48;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211498c
	if (ctx.cr6.eq) goto loc_8211498C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821148A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211498c
	if (ctx.cr6.eq) goto loc_8211498C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82117638
	ctx.lr = 0x821148BC;
	sub_82117638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821148DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82114928
	if (ctx.cr6.eq) goto loc_82114928;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821148f8
	if (ctx.cr6.eq) goto loc_821148F8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8211496c
	if (!ctx.cr6.eq) goto loc_8211496C;
loc_821148F8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211496c
	if (ctx.cr6.eq) goto loc_8211496C;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x8211496c
	if (ctx.cr6.eq) goto loc_8211496C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211496c
	if (ctx.cr6.eq) goto loc_8211496C;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82114958
	goto loc_82114958;
loc_82114928:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82114938
	if (ctx.cr6.eq) goto loc_82114938;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8211496c
	if (!ctx.cr6.eq) goto loc_8211496C;
loc_82114938:
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x8211496c
	if (ctx.cr6.eq) goto loc_8211496C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211496c
	if (ctx.cr6.eq) goto loc_8211496C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82114958:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211496C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211496C:
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821176e8
	ctx.lr = 0x82114978;
	sub_821176E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82114a50
	goto loc_82114A50;
loc_8211498C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821149c4
	if (ctx.cr6.eq) goto loc_821149C4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821149c4
	if (!ctx.cr6.eq) goto loc_821149C4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114aa0
	if (ctx.cr6.eq) goto loc_82114AA0;
	// b 0x82114a88
	goto loc_82114A88;
loc_821149C4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821149ec
	if (ctx.cr6.eq) goto loc_821149EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821149E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821149f0
	goto loc_821149F0;
loc_821149EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821149F0:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82114a40
	if (!ctx.cr6.eq) goto loc_82114A40;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114a40
	if (ctx.cr6.eq) goto loc_82114A40;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82117638
	ctx.lr = 0x82114A24;
	sub_82117638(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114a40
	if (ctx.cr6.eq) goto loc_82114A40;
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f30,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f30,24(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r27,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r27.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82114A40:
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// b 0x82114aa4
	goto loc_82114AA4;
loc_82114A48:
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
loc_82114A50:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82114aa4
	if (ctx.cr6.eq) goto loc_82114AA4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114aa0
	if (ctx.cr6.eq) goto loc_82114AA0;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82114A88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114AA0:
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_82114AA4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,-4944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4944);
	// lwz r11,-4980(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,10376(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// beq cr6,0x82114b0c
	if (ctx.cr6.eq) goto loc_82114B0C;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82114b94
	if (ctx.cr6.eq) goto loc_82114B94;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// beq cr6,0x82114b50
	if (ctx.cr6.eq) goto loc_82114B50;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x82114b94
	goto loc_82114B94;
loc_82114B0C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82114b94
	if (ctx.cr6.eq) goto loc_82114B94;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,-7560
	ctx.r9.s64 = ctx.r10.s64 + -7560;
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// beq cr6,0x82114b50
	if (ctx.cr6.eq) goto loc_82114B50;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// lfs f0,8056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x82114b94
	goto loc_82114B94;
loc_82114B50:
	// fdivs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lfs f0,8056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x82114b94
	if (ctx.cr6.eq) goto loc_82114B94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114B94:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// beq cr6,0x82114c08
	if (ctx.cr6.eq) goto loc_82114C08;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82114c30
	if (!ctx.cr6.eq) goto loc_82114C30;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82114bc8
	if (!ctx.cr6.gt) goto loc_82114BC8;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x82114c30
	goto loc_82114C30;
loc_82114BC8:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82114c30
	if (!ctx.cr6.eq) goto loc_82114C30;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114c30
	if (ctx.cr6.eq) goto loc_82114C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82114c30
	goto loc_82114C30;
loc_82114C08:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82114c30
	if (!ctx.cr6.eq) goto loc_82114C30;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82114c2c
	if (!ctx.cr6.lt) goto loc_82114C2C;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x82114c30
	goto loc_82114C30;
loc_82114C2C:
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_82114C30:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114c40
	if (ctx.cr6.eq) goto loc_82114C40;
	// bl 0x821171c0
	ctx.lr = 0x82114C40;
	sub_821171C0(ctx, base);
loc_82114C40:
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

__attribute__((alias("__imp__sub_82114C50"))) PPC_WEAK_FUNC(sub_82114C50);
PPC_FUNC_IMPL(__imp__sub_82114C50) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82114cd0
	if (ctx.cr6.eq) goto loc_82114CD0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114cd0
	if (ctx.cr6.eq) goto loc_82114CD0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114cd0
	if (ctx.cr6.eq) goto loc_82114CD0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82114cd0
	if (ctx.cr6.eq) goto loc_82114CD0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82114CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82114CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114CD0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82114CE4"))) PPC_WEAK_FUNC(sub_82114CE4);
PPC_FUNC_IMPL(__imp__sub_82114CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114CE8"))) PPC_WEAK_FUNC(sub_82114CE8);
PPC_FUNC_IMPL(__imp__sub_82114CE8) {
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
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114d18
	if (!ctx.cr6.eq) goto loc_82114D18;
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
loc_82114D18:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114d28
	if (ctx.cr6.eq) goto loc_82114D28;
	// bl 0x82117190
	ctx.lr = 0x82114D28;
	sub_82117190(ctx, base);
loc_82114D28:
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

__attribute__((alias("__imp__sub_82114D3C"))) PPC_WEAK_FUNC(sub_82114D3C);
PPC_FUNC_IMPL(__imp__sub_82114D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114D40"))) PPC_WEAK_FUNC(sub_82114D40);
PPC_FUNC_IMPL(__imp__sub_82114D40) {
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
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114d70
	if (!ctx.cr6.eq) goto loc_82114D70;
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
loc_82114D70:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114d80
	if (ctx.cr6.eq) goto loc_82114D80;
	// bl 0x821159e8
	ctx.lr = 0x82114D80;
	sub_821159E8(ctx, base);
loc_82114D80:
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

__attribute__((alias("__imp__sub_82114D94"))) PPC_WEAK_FUNC(sub_82114D94);
PPC_FUNC_IMPL(__imp__sub_82114D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114D98"))) PPC_WEAK_FUNC(sub_82114D98);
PPC_FUNC_IMPL(__imp__sub_82114D98) {
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
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114dc8
	if (!ctx.cr6.eq) goto loc_82114DC8;
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
loc_82114DC8:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114dd8
	if (ctx.cr6.eq) goto loc_82114DD8;
	// bl 0x82115578
	ctx.lr = 0x82114DD8;
	sub_82115578(ctx, base);
loc_82114DD8:
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

__attribute__((alias("__imp__sub_82114DEC"))) PPC_WEAK_FUNC(sub_82114DEC);
PPC_FUNC_IMPL(__imp__sub_82114DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114DF0"))) PPC_WEAK_FUNC(sub_82114DF0);
PPC_FUNC_IMPL(__imp__sub_82114DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_82114E28"))) PPC_WEAK_FUNC(sub_82114E28);
PPC_FUNC_IMPL(__imp__sub_82114E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114E2C"))) PPC_WEAK_FUNC(sub_82114E2C);
PPC_FUNC_IMPL(__imp__sub_82114E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114E30"))) PPC_WEAK_FUNC(sub_82114E30);
PPC_FUNC_IMPL(__imp__sub_82114E30) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114e84
	if (ctx.cr6.eq) goto loc_82114E84;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114e84
	if (ctx.cr6.eq) goto loc_82114E84;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114E84:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114E9C"))) PPC_WEAK_FUNC(sub_82114E9C);
PPC_FUNC_IMPL(__imp__sub_82114E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82114EA0"))) PPC_WEAK_FUNC(sub_82114EA0);
PPC_FUNC_IMPL(__imp__sub_82114EA0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114ed8
	if (!ctx.cr6.eq) goto loc_82114ED8;
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
	// blr 
	return;
loc_82114ED8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114f0c
	if (ctx.cr6.eq) goto loc_82114F0C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114F0C:
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

__attribute__((alias("__imp__sub_82114F20"))) PPC_WEAK_FUNC(sub_82114F20);
PPC_FUNC_IMPL(__imp__sub_82114F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,-2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

__attribute__((alias("__imp__sub_82114F5C"))) PPC_WEAK_FUNC(sub_82114F5C);
PPC_FUNC_IMPL(__imp__sub_82114F5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82114F60"))) PPC_WEAK_FUNC(sub_82114F60);
PPC_FUNC_IMPL(__imp__sub_82114F60) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-2044(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82114ffc
	if (ctx.cr6.eq) goto loc_82114FFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114ffc
	if (ctx.cr6.eq) goto loc_82114FFC;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82117a98
	ctx.lr = 0x82114FA4;
	sub_82117A98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,30000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30000, ctx.xer);
	// blt cr6,0x82114fd8
	if (ctx.cr6.lt) goto loc_82114FD8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,39999
	ctx.r10.u64 = ctx.r11.u64 | 39999;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82114fd8
	if (ctx.cr6.gt) goto loc_82114FD8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114ffc
	if (ctx.cr6.eq) goto loc_82114FFC;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x82115678
	ctx.lr = 0x82114FD4;
	sub_82115678(ctx, base);
	// b 0x82114ffc
	goto loc_82114FFC;
loc_82114FD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114ffc
	if (ctx.cr6.eq) goto loc_82114FFC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114FFC:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82115018"))) PPC_WEAK_FUNC(sub_82115018);
PPC_FUNC_IMPL(__imp__sub_82115018) {
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
	// lwz r31,-2044(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82115090
	if (ctx.cr6.eq) goto loc_82115090;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x82115090
	if (ctx.cr6.eq) goto loc_82115090;
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82117a98
	ctx.lr = 0x82115068;
	sub_82117A98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115090
	if (ctx.cr6.eq) goto loc_82115090;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115090:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821150A8"))) PPC_WEAK_FUNC(sub_821150A8);
PPC_FUNC_IMPL(__imp__sub_821150A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821150B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821151fc
	if (ctx.cr6.eq) goto loc_821151FC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821151fc
	if (ctx.cr6.eq) goto loc_821151FC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r31,-2044(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2044);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821151fc
	if (ctx.cr6.eq) goto loc_821151FC;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821151fc
	if (ctx.cr6.eq) goto loc_821151FC;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// bgt cr6,0x8211518c
	if (ctx.cr6.gt) goto loc_8211518C;
	// beq cr6,0x82115164
	if (ctx.cr6.eq) goto loc_82115164;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82115134
	if (ctx.cr6.eq) goto loc_82115134;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bne cr6,0x82115194
	if (!ctx.cr6.eq) goto loc_82115194;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8208e008
	ctx.lr = 0x8211510C;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211512c
	if (!ctx.cr6.eq) goto loc_8211512C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e030
	ctx.lr = 0x8211511C;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211512c
	if (!ctx.cr6.eq) goto loc_8211512C;
	// lhz r4,1688(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1688);
	// b 0x821151c8
	goto loc_821151C8;
loc_8211512C:
	// li r4,701
	ctx.r4.s64 = 701;
	// b 0x821151c8
	goto loc_821151C8;
loc_82115134:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e008
	ctx.lr = 0x8211513C;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211515c
	if (!ctx.cr6.eq) goto loc_8211515C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e030
	ctx.lr = 0x8211514C;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211515c
	if (!ctx.cr6.eq) goto loc_8211515C;
	// lhz r4,1686(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1686);
	// b 0x821151c8
	goto loc_821151C8;
loc_8211515C:
	// li r4,700
	ctx.r4.s64 = 700;
	// b 0x821151c8
	goto loc_821151C8;
loc_82115164:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e008
	ctx.lr = 0x8211516C;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821151c4
	if (!ctx.cr6.eq) goto loc_821151C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e030
	ctx.lr = 0x8211517C;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821151c4
	if (!ctx.cr6.eq) goto loc_821151C4;
	// lhz r4,1690(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1690);
	// b 0x821151c8
	goto loc_821151C8;
loc_8211518C:
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// beq cr6,0x8211519c
	if (ctx.cr6.eq) goto loc_8211519C;
loc_82115194:
	// li r4,600
	ctx.r4.s64 = 600;
	// b 0x821151c8
	goto loc_821151C8;
loc_8211519C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e008
	ctx.lr = 0x821151A4;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821151c4
	if (!ctx.cr6.eq) goto loc_821151C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8208e030
	ctx.lr = 0x821151B4;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821151c4
	if (!ctx.cr6.eq) goto loc_821151C4;
	// lhz r4,1692(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1692);
	// b 0x821151c8
	goto loc_821151C8;
loc_821151C4:
	// li r4,702
	ctx.r4.s64 = 702;
loc_821151C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117a98
	ctx.lr = 0x821151D4;
	sub_82117A98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821151fc
	if (ctx.cr6.eq) goto loc_821151FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821151FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821151FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82115208"))) PPC_WEAK_FUNC(sub_82115208);
PPC_FUNC_IMPL(__imp__sub_82115208) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115244
	if (ctx.cr6.eq) goto loc_82115244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115244:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82115288
	if (!ctx.cr6.eq) goto loc_82115288;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// beq cr6,0x82115280
	if (ctx.cr6.eq) goto loc_82115280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115280:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// b 0x82115290
	goto loc_82115290;
loc_82115288:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82115290:
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

__attribute__((alias("__imp__sub_821152A8"))) PPC_WEAK_FUNC(sub_821152A8);
PPC_FUNC_IMPL(__imp__sub_821152A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821152B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821855f0
	ctx.lr = 0x821152C0;
	sub_821855F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r9,27200
	ctx.r7.s64 = ctx.r9.s64 + 27200;
	// lfs f0,10376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r8,65535
	ctx.r6.u64 = ctx.r8.u64 | 65535;
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
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
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x82183078
	ctx.lr = 0x82115330;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211533C;
	sub_821837D0(ctx, base);
	// bl 0x82117898
	ctx.lr = 0x82115340;
	sub_82117898(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82118130
	ctx.lr = 0x82115348;
	sub_82118130(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82117fd0
	ctx.lr = 0x82115350;
	sub_82117FD0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82115358;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82115370
	if (ctx.cr6.eq) goto loc_82115370;
	// li r3,2284
	ctx.r3.s64 = 2284;
	// bl 0x82183448
	ctx.lr = 0x8211536C;
	sub_82183448(ctx, base);
	// b 0x82115378
	goto loc_82115378;
loc_82115370:
	// li r3,143
	ctx.r3.s64 = 143;
	// bl 0x821845a0
	ctx.lr = 0x82115378;
	sub_821845A0(ctx, base);
loc_82115378:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211538c
	if (ctx.cr6.eq) goto loc_8211538C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821170f0
	ctx.lr = 0x82115388;
	sub_821170F0(ctx, base);
	// b 0x82115390
	goto loc_82115390;
loc_8211538C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82115390:
	// lis r9,-32186
	ctx.r9.s64 = -2109341696;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r11,10000
	ctx.r11.s64 = 10000;
	// addi r10,r10,19952
	ctx.r10.s64 = ctx.r10.s64 + 19952;
	// addi r7,r9,2272
	ctx.r7.s64 = ctx.r9.s64 + 2272;
	// stw r11,2272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2272, ctx.r11.u32);
	// stw r10,-4808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4808, ctx.r10.u32);
	// li r9,10001
	ctx.r9.s64 = 10001;
	// li r11,10003
	ctx.r11.s64 = 10003;
	// li r8,10002
	ctx.r8.s64 = 10002;
	// li r10,10005
	ctx.r10.s64 = 10005;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// li r9,10006
	ctx.r9.s64 = 10006;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// li r11,10015
	ctx.r11.s64 = 10015;
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// li r8,10016
	ctx.r8.s64 = 10016;
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// li r10,10004
	ctx.r10.s64 = 10004;
	// stw r9,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r9.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r11,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r8,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x82115404;
	sub_822AA648(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82115414:
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82115414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82115414;
	// li r11,63
	ctx.r11.s64 = 63;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82117ef8
	ctx.lr = 0x82115440;
	sub_82117EF8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211544C;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82115458"))) PPC_WEAK_FUNC(sub_82115458);
PPC_FUNC_IMPL(__imp__sub_82115458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82115460;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82115494
	if (ctx.cr6.eq) goto loc_82115494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115494:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821154bc
	if (ctx.cr6.eq) goto loc_821154BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821154BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821154BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821154e0
	if (ctx.cr6.eq) goto loc_821154E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821154E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821154E0:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82115504
	if (ctx.cr6.eq) goto loc_82115504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216dc78
	ctx.lr = 0x821154F8;
	sub_8216DC78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82115504;
	sub_82183E40(ctx, base);
loc_82115504:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82117bf8
	ctx.lr = 0x8211550C;
	sub_82117BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x82115514;
	sub_82185670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8211551C"))) PPC_WEAK_FUNC(sub_8211551C);
PPC_FUNC_IMPL(__imp__sub_8211551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115520"))) PPC_WEAK_FUNC(sub_82115520);
PPC_FUNC_IMPL(__imp__sub_82115520) {
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
	// bl 0x82115458
	ctx.lr = 0x82115540;
	sub_82115458(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211555c
	if (ctx.cr6.eq) goto loc_8211555C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82115558;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8211555C:
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

__attribute__((alias("__imp__sub_82115574"))) PPC_WEAK_FUNC(sub_82115574);
PPC_FUNC_IMPL(__imp__sub_82115574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82115578"))) PPC_WEAK_FUNC(sub_82115578);
PPC_FUNC_IMPL(__imp__sub_82115578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82115580;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// bl 0x821142a0
	ctx.lr = 0x82115598;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821155a8
	if (ctx.cr6.eq) goto loc_821155A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82115208
	ctx.lr = 0x821155A8;
	sub_82115208(ctx, base);
loc_821155A8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r29,80
	ctx.r30.s64 = ctx.r29.s64 + 80;
	// li r28,9
	ctx.r28.s64 = 9;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
loc_821155B8:
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r30,-68
	ctx.r3.s64 = ctx.r30.s64 + -68;
	// bl 0x822aa648
	ctx.lr = 0x821155C4;
	sub_822AA648(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// addi r30,r30,244
	ctx.r30.s64 = ctx.r30.s64 + 244;
	// bne 0x821155b8
	if (!ctx.cr0.eq) goto loc_821155B8;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r29,2244
	ctx.r11.s64 = ctx.r29.s64 + 2244;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211560C:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8211560c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211560C;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,2208
	ctx.r3.s64 = ctx.r29.s64 + 2208;
	// bl 0x822aa648
	ctx.lr = 0x82115620;
	sub_822AA648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,2216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2216, ctx.r27.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r27,2220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2220, ctx.r27.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,2232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2232, ctx.r9.u32);
	// stw r27,2236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2236, ctx.r27.u32);
	// stw r27,2240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2240, ctx.r27.u32);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115670
	if (ctx.cr6.eq) goto loc_82115670;
	// lwz r11,1688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115670
	if (ctx.cr6.eq) goto loc_82115670;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,2228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2228, ctx.r10.u32);
	// stw r10,2224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2224, ctx.r10.u32);
loc_82115670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82115678"))) PPC_WEAK_FUNC(sub_82115678);
PPC_FUNC_IMPL(__imp__sub_82115678) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821142a0
	ctx.lr = 0x82115690;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821156a0
	if (ctx.cr6.eq) goto loc_821156A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82114658
	ctx.lr = 0x821156A0;
	sub_82114658(ctx, base);
loc_821156A0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821156B4"))) PPC_WEAK_FUNC(sub_821156B4);
PPC_FUNC_IMPL(__imp__sub_821156B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821156B8"))) PPC_WEAK_FUNC(sub_821156B8);
PPC_FUNC_IMPL(__imp__sub_821156B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821156C0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821142a0
	ctx.lr = 0x821156CC;
	sub_821142A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821156e0
	if (!ctx.cr6.eq) goto loc_821156E0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_821156E0:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r25,r11,-5052
	ctx.r25.s64 = ctx.r11.s64 + -5052;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r24,9
	ctx.r24.s64 = 9;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_821156FC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821159c0
	if (ctx.cr6.eq) goto loc_821159C0;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821159c0
	if (ctx.cr6.eq) goto loc_821159C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211572c
	if (ctx.cr6.eq) goto loc_8211572C;
	// li r4,30083
	ctx.r4.s64 = 30083;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x8211572C;
	sub_82114658(ctx, base);
loc_8211572C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115744
	if (ctx.cr6.eq) goto loc_82115744;
	// li r4,30084
	ctx.r4.s64 = 30084;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x82115744;
	sub_82114658(ctx, base);
loc_82115744:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211575c
	if (ctx.cr6.eq) goto loc_8211575C;
	// li r4,30085
	ctx.r4.s64 = 30085;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x8211575C;
	sub_82114658(ctx, base);
loc_8211575C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115774
	if (ctx.cr6.eq) goto loc_82115774;
	// li r4,30086
	ctx.r4.s64 = 30086;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x82115774;
	sub_82114658(ctx, base);
loc_82115774:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211578c
	if (ctx.cr6.eq) goto loc_8211578C;
	// li r4,30087
	ctx.r4.s64 = 30087;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x8211578C;
	sub_82114658(ctx, base);
loc_8211578C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821157a4
	if (ctx.cr6.eq) goto loc_821157A4;
	// li r4,30090
	ctx.r4.s64 = 30090;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x821157A4;
	sub_82114658(ctx, base);
loc_821157A4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821157dc
	if (ctx.cr6.eq) goto loc_821157DC;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x821157cc
	if (ctx.cr6.eq) goto loc_821157CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x821157C8;
	sub_821146C8(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_821157CC:
	// li r4,30091
	ctx.r4.s64 = 30091;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x821157D8;
	sub_82114658(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_821157DC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115814
	if (ctx.cr6.eq) goto loc_82115814;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115804
	if (ctx.cr6.eq) goto loc_82115804;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115800;
	sub_821146C8(ctx, base);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_82115804:
	// li r4,30092
	ctx.r4.s64 = 30092;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x82115810;
	sub_82114658(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_82115814:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211584c
	if (ctx.cr6.eq) goto loc_8211584C;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x8211583c
	if (ctx.cr6.eq) goto loc_8211583C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115838;
	sub_821146C8(ctx, base);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_8211583C:
	// li r4,30093
	ctx.r4.s64 = 30093;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x82115848;
	sub_82114658(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_8211584C:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821158c8
	if (ctx.cr6.eq) goto loc_821158C8;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115874
	if (ctx.cr6.eq) goto loc_82115874;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115870;
	sub_821146C8(ctx, base);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_82115874:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821158c8
	if (ctx.cr6.eq) goto loc_821158C8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,403
	ctx.r4.s64 = 403;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117a98
	ctx.lr = 0x82115890;
	sub_82117A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x8211589C;
	sub_82114658(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821158c8
	if (!ctx.cr6.eq) goto loc_821158C8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,401
	ctx.r4.s64 = 401;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117a98
	ctx.lr = 0x821158B8;
	sub_82117A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x821158C4;
	sub_82114658(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_821158C8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821158f4
	if (ctx.cr6.eq) goto loc_821158F4;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,300
	ctx.r4.s64 = 300;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82117a98
	ctx.lr = 0x821158E8;
	sub_82117A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x821158F4;
	sub_82114658(ctx, base);
loc_821158F4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115920
	if (ctx.cr6.eq) goto loc_82115920;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,301
	ctx.r4.s64 = 301;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82117a98
	ctx.lr = 0x82115914;
	sub_82117A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82114658
	ctx.lr = 0x82115920;
	sub_82114658(ctx, base);
loc_82115920:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115948
	if (!ctx.cr6.eq) goto loc_82115948;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115948
	if (ctx.cr6.eq) goto loc_82115948;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115944;
	sub_821146C8(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
loc_82115948:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115970
	if (!ctx.cr6.eq) goto loc_82115970;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115970
	if (ctx.cr6.eq) goto loc_82115970;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x8211596C;
	sub_821146C8(ctx, base);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_82115970:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115998
	if (!ctx.cr6.eq) goto loc_82115998;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115998
	if (ctx.cr6.eq) goto loc_82115998;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115994;
	sub_821146C8(ctx, base);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_82115998:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821159c0
	if (!ctx.cr6.eq) goto loc_821159C0;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x821159c0
	if (ctx.cr6.eq) goto loc_821159C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821146c8
	ctx.lr = 0x821159BC;
	sub_821146C8(ctx, base);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_821159C0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x821156fc
	if (!ctx.cr0.eq) goto loc_821156FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821159DC"))) PPC_WEAK_FUNC(sub_821159DC);
PPC_FUNC_IMPL(__imp__sub_821159DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821159E0"))) PPC_WEAK_FUNC(sub_821159E0);
PPC_FUNC_IMPL(__imp__sub_821159E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821159E8"))) PPC_WEAK_FUNC(sub_821159E8);
PPC_FUNC_IMPL(__imp__sub_821159E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821159F0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821142a0
	ctx.lr = 0x821159FC;
	sub_821142A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r26,80
	ctx.r31.s64 = ctx.r26.s64 + 80;
	// li r29,9
	ctx.r29.s64 = 9;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_82115A10:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82115b20
	if (ctx.cr6.eq) goto loc_82115B20;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115a30
	if (ctx.cr6.eq) goto loc_82115A30;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115A30;
	sub_821146C8(ctx, base);
loc_82115A30:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115a48
	if (ctx.cr6.eq) goto loc_82115A48;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115A48;
	sub_821146C8(ctx, base);
loc_82115A48:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115a60
	if (ctx.cr6.eq) goto loc_82115A60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115A60;
	sub_821146C8(ctx, base);
loc_82115A60:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115a78
	if (ctx.cr6.eq) goto loc_82115A78;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115A78;
	sub_821146C8(ctx, base);
loc_82115A78:
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115a90
	if (ctx.cr6.eq) goto loc_82115A90;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115A90;
	sub_821146C8(ctx, base);
loc_82115A90:
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115aa8
	if (ctx.cr6.eq) goto loc_82115AA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115AA8;
	sub_821146C8(ctx, base);
loc_82115AA8:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115ac0
	if (ctx.cr6.eq) goto loc_82115AC0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115AC0;
	sub_821146C8(ctx, base);
loc_82115AC0:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115ad8
	if (ctx.cr6.eq) goto loc_82115AD8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115AD8;
	sub_821146C8(ctx, base);
loc_82115AD8:
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115af0
	if (ctx.cr6.eq) goto loc_82115AF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115AF0;
	sub_821146C8(ctx, base);
loc_82115AF0:
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115b08
	if (ctx.cr6.eq) goto loc_82115B08;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115B08;
	sub_821146C8(ctx, base);
loc_82115B08:
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115b20
	if (ctx.cr6.eq) goto loc_82115B20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115B20;
	sub_821146C8(ctx, base);
loc_82115B20:
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// bl 0x822aa648
	ctx.lr = 0x82115B2C;
	sub_822AA648(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// bne 0x82115a10
	if (!ctx.cr0.eq) goto loc_82115A10;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r26,2208
	ctx.r3.s64 = ctx.r26.s64 + 2208;
	// bl 0x822aa648
	ctx.lr = 0x82115B70;
	sub_822AA648(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,2216(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2216, ctx.r29.u32);
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// stw r29,2220(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2220, ctx.r29.u32);
	// stw r9,2232(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2232, ctx.r9.u32);
	// stw r29,2236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2236, ctx.r29.u32);
	// stw r29,2240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2240, ctx.r29.u32);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115c04
	if (ctx.cr6.eq) goto loc_82115C04;
	// lwz r28,1688(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82115c04
	if (ctx.cr6.eq) goto loc_82115C04;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82115bf4
	if (ctx.cr6.eq) goto loc_82115BF4;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82115bf4
	if (!ctx.cr6.gt) goto loc_82115BF4;
	// addi r31,r26,2240
	ctx.r31.s64 = ctx.r26.s64 + 2240;
loc_82115BC8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82115be0
	if (ctx.cr6.eq) goto loc_82115BE0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821146c8
	ctx.lr = 0x82115BE0;
	sub_821146C8(ctx, base);
loc_82115BE0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82115bc8
	if (ctx.cr6.lt) goto loc_82115BC8;
loc_82115BF4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,2228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2228, ctx.r10.u32);
	// stw r10,2224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2224, ctx.r10.u32);
loc_82115C04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82115C10"))) PPC_WEAK_FUNC(sub_82115C10);
PPC_FUNC_IMPL(__imp__sub_82115C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82115C18;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115c38
	if (!ctx.cr6.eq) goto loc_82115C38;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82115C38:
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r21,-32182
	ctx.r21.s64 = -2109079552;
	// addi r24,r11,-5052
	ctx.r24.s64 = ctx.r11.s64 + -5052;
loc_82115C58:
	// mulli r11,r25,244
	ctx.r11.s64 = ctx.r25.s64 * 244;
	// lwzx r29,r10,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82115c84
	if (!ctx.cr6.eq) goto loc_82115C84;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116064
	if (ctx.cr6.eq) goto loc_82116064;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// b 0x82116064
	goto loc_82116064;
loc_82115C84:
	// lwz r11,1240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bne cr6,0x82115ca4
	if (!ctx.cr6.eq) goto loc_82115CA4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116064
	if (ctx.cr6.eq) goto loc_82116064;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// b 0x82116064
	goto loc_82116064;
loc_82115CA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115cb0
	if (!ctx.cr6.eq) goto loc_82115CB0;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
loc_82115CB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,18252
	ctx.r4.s64 = 1196163072;
	// addi r3,r29,1248
	ctx.r3.s64 = ctx.r29.s64 + 1248;
	// ori r4,r4,19795
	ctx.r4.u64 = ctx.r4.u64 | 19795;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r8,344(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 344);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r6,348(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 348);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r7,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe r10,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r26,1908(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1908);
	// bl 0x821882d0
	ctx.lr = 0x82115D24;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115d80
	if (ctx.cr6.eq) goto loc_82115D80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115d80
	if (ctx.cr6.eq) goto loc_82115D80;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82115d48
	if (ctx.cr6.eq) goto loc_82115D48;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82115D48:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82115d68
	if (!ctx.cr6.eq) goto loc_82115D68;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82115d80
	if (ctx.cr6.eq) goto loc_82115D80;
loc_82115D68:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82115d7c
	if (ctx.cr6.lt) goto loc_82115D7C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x82115d7c
	if (ctx.cr6.gt) goto loc_82115D7C;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
loc_82115D7C:
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_82115D80:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115d90
	if (ctx.cr6.eq) goto loc_82115D90;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_82115D90:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115da0
	if (ctx.cr6.eq) goto loc_82115DA0;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
loc_82115DA0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115db0
	if (ctx.cr6.eq) goto loc_82115DB0;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_82115DB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115dc0
	if (ctx.cr6.eq) goto loc_82115DC0;
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
loc_82115DC0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115dd0
	if (ctx.cr6.eq) goto loc_82115DD0;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_82115DD0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115de0
	if (ctx.cr6.eq) goto loc_82115DE0;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_82115DE0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115df0
	if (ctx.cr6.eq) goto loc_82115DF0;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82115DF0:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115e00
	if (ctx.cr6.eq) goto loc_82115E00;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
loc_82115E00:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115e10
	if (ctx.cr6.eq) goto loc_82115E10;
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
loc_82115E10:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115e20
	if (ctx.cr6.eq) goto loc_82115E20;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
loc_82115E20:
	// bl 0x8215bec8
	ctx.lr = 0x82115E24;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115e84
	if (!ctx.cr6.eq) goto loc_82115E84;
	// bl 0x820aed80
	ctx.lr = 0x82115E34;
	sub_820AED80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82115e84
	if (!ctx.cr6.eq) goto loc_82115E84;
	// lwz r11,-4980(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115e84
	if (!ctx.cr6.eq) goto loc_82115E84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e098
	ctx.lr = 0x82115E50;
	sub_8208E098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82115e84
	if (ctx.cr6.eq) goto loc_82115E84;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115e70
	if (!ctx.cr6.eq) goto loc_82115E70;
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r27,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r27.u32);
loc_82115E70:
	// lwz r11,1344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115e8c
	if (ctx.cr6.eq) goto loc_82115E8C;
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// b 0x82115e8c
	goto loc_82115E8C;
loc_82115E84:
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
loc_82115E8C:
	// lwz r30,1312(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1312);
	// bl 0x8215bec8
	ctx.lr = 0x82115E94;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115ee0
	if (!ctx.cr6.eq) goto loc_82115EE0;
	// bl 0x820aed80
	ctx.lr = 0x82115EA4;
	sub_820AED80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82115ee0
	if (!ctx.cr6.eq) goto loc_82115EE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e6c0
	ctx.lr = 0x82115EB4;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82115ee0
	if (ctx.cr6.eq) goto loc_82115EE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82115ee0
	if (ctx.cr6.eq) goto loc_82115EE0;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115ed8
	if (!ctx.cr6.eq) goto loc_82115ED8;
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
loc_82115ED8:
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// b 0x82115f08
	goto loc_82115F08;
loc_82115EE0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115f08
	if (ctx.cr6.eq) goto loc_82115F08;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82115f08
	if (!ctx.cr6.eq) goto loc_82115F08;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115f08
	if (!ctx.cr6.eq) goto loc_82115F08;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
loc_82115F08:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115f70
	if (ctx.cr6.eq) goto loc_82115F70;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115f2c
	if (!ctx.cr6.eq) goto loc_82115F2C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115f70
	if (ctx.cr6.eq) goto loc_82115F70;
loc_82115F2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e008
	ctx.lr = 0x82115F34;
	sub_8208E008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82115f68
	if (!ctx.cr6.eq) goto loc_82115F68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e030
	ctx.lr = 0x82115F44;
	sub_8208E030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82115f68
	if (!ctx.cr6.eq) goto loc_82115F68;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82115f68
	if (!ctx.cr6.eq) goto loc_82115F68;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// b 0x82115f6c
	goto loc_82115F6C;
loc_82115F68:
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
loc_82115F6C:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
loc_82115F70:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211602c
	if (ctx.cr6.eq) goto loc_8211602C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2155
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2155, ctx.xer);
	// bgt cr6,0x82115fbc
	if (ctx.cr6.gt) goto loc_82115FBC;
	// beq cr6,0x82115fdc
	if (ctx.cr6.eq) goto loc_82115FDC;
	// cmplwi cr6,r11,2080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2080, ctx.xer);
	// beq cr6,0x82115fb0
	if (ctx.cr6.eq) goto loc_82115FB0;
	// cmplwi cr6,r11,2081
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2081, ctx.xer);
	// beq cr6,0x82115fa8
	if (ctx.cr6.eq) goto loc_82115FA8;
	// cmplwi cr6,r11,2154
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2154, ctx.xer);
	// beq cr6,0x82115fd0
	if (ctx.cr6.eq) goto loc_82115FD0;
	// b 0x82116004
	goto loc_82116004;
loc_82115FA8:
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// b 0x82116004
	goto loc_82116004;
loc_82115FB0:
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// b 0x82116004
	goto loc_82116004;
loc_82115FBC:
	// cmplwi cr6,r11,2157
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2157, ctx.xer);
	// bgt cr6,0x82115fe8
	if (ctx.cr6.gt) goto loc_82115FE8;
	// beq cr6,0x82115fdc
	if (ctx.cr6.eq) goto loc_82115FDC;
	// cmplwi cr6,r11,2156
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2156, ctx.xer);
	// bne cr6,0x82116004
	if (!ctx.cr6.eq) goto loc_82116004;
loc_82115FD0:
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// b 0x82116004
	goto loc_82116004;
loc_82115FDC:
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// b 0x82116004
	goto loc_82116004;
loc_82115FE8:
	// cmplwi cr6,r11,9200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9200, ctx.xer);
	// blt cr6,0x82116004
	if (ctx.cr6.lt) goto loc_82116004;
	// cmplwi cr6,r11,9201
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9201, ctx.xer);
	// bgt cr6,0x82116004
	if (ctx.cr6.gt) goto loc_82116004;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
loc_82116004:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,2080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2080, ctx.xer);
	// beq cr6,0x82116028
	if (ctx.cr6.eq) goto loc_82116028;
	// cmplwi cr6,r11,9199
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9199, ctx.xer);
	// ble cr6,0x8211602c
	if (!ctx.cr6.gt) goto loc_8211602C;
	// cmplwi cr6,r11,9201
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9201, ctx.xer);
	// bgt cr6,0x8211602c
	if (ctx.cr6.gt) goto loc_8211602C;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// b 0x8211602c
	goto loc_8211602C;
loc_82116028:
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_8211602C:
	// lwz r11,1504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211603c
	if (ctx.cr6.eq) goto loc_8211603C;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_8211603C:
	// lwz r11,576(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116060
	if (ctx.cr6.eq) goto loc_82116060;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,2081
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2081, ctx.xer);
	// bne cr6,0x82116060
	if (!ctx.cr6.eq) goto loc_82116060;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82116060
	if (ctx.cr6.eq) goto loc_82116060;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
loc_82116060:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82116064:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 9, ctx.xer);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82115c58
	if (ctx.cr6.lt) goto loc_82115C58;
	// lwz r11,2208(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116084
	if (ctx.cr6.eq) goto loc_82116084;
	// stw r28,2208(r23)
	PPC_STORE_U32(ctx.r23.u32 + 2208, ctx.r28.u32);
loc_82116084:
	// lwz r11,2212(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2212);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82116098
	if (ctx.cr6.eq) goto loc_82116098;
	// stw r22,2212(r23)
	PPC_STORE_U32(ctx.r23.u32 + 2212, ctx.r22.u32);
	// stw r27,2208(r23)
	PPC_STORE_U32(ctx.r23.u32 + 2208, ctx.r27.u32);
loc_82116098:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_821160A4"))) PPC_WEAK_FUNC(sub_821160A4);
PPC_FUNC_IMPL(__imp__sub_821160A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821160A8"))) PPC_WEAK_FUNC(sub_821160A8);
PPC_FUNC_IMPL(__imp__sub_821160A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x821160B0;
	sub_82248750(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821142a0
	ctx.lr = 0x821160C8;
	sub_821142A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116a84
	if (ctx.cr6.eq) goto loc_82116A84;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116a84
	if (!ctx.cr6.eq) goto loc_82116A84;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116a84
	if (ctx.cr6.eq) goto loc_82116A84;
	// lwz r26,1688(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82116a84
	if (ctx.cr6.eq) goto loc_82116A84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,2228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116790
	if (ctx.cr6.eq) goto loc_82116790;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,2216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2216);
	// lwz r11,-8608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8608);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211622c
	if (!ctx.cr6.eq) goto loc_8211622C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82116614
	if (!ctx.cr6.eq) goto loc_82116614;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r29,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r29.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r8,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82116168:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821161a4
	if (ctx.cr6.eq) goto loc_821161A4;
	// lwz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821161a4
	if (ctx.cr6.eq) goto loc_821161A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821161a4
	if (ctx.cr6.eq) goto loc_821161A4;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmplwi cr6,r10,9000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9000, ctx.xer);
	// blt cr6,0x821161a4
	if (ctx.cr6.lt) goto loc_821161A4;
	// cmplwi cr6,r10,9100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9100, ctx.xer);
	// bge cr6,0x821161a4
	if (!ctx.cr6.lt) goto loc_821161A4;
	// stw r24,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r24.u32);
loc_821161A4:
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821161e0
	if (ctx.cr6.eq) goto loc_821161E0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821161e0
	if (ctx.cr6.eq) goto loc_821161E0;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821161e0
	if (ctx.cr6.eq) goto loc_821161E0;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r10,9000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9000, ctx.xer);
	// blt cr6,0x821161e0
	if (ctx.cr6.lt) goto loc_821161E0;
	// cmplwi cr6,r10,9100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9100, ctx.xer);
	// bge cr6,0x821161e0
	if (!ctx.cr6.lt) goto loc_821161E0;
	// stw r24,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r24.u32);
loc_821161E0:
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211621c
	if (ctx.cr6.eq) goto loc_8211621C;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211621c
	if (ctx.cr6.eq) goto loc_8211621C;
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211621c
	if (ctx.cr6.eq) goto loc_8211621C;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// cmplwi cr6,r10,9000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9000, ctx.xer);
	// blt cr6,0x8211621c
	if (ctx.cr6.lt) goto loc_8211621C;
	// cmplwi cr6,r10,9100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9100, ctx.xer);
	// bge cr6,0x8211621c
	if (!ctx.cr6.lt) goto loc_8211621C;
	// stw r24,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r24.u32);
loc_8211621C:
	// addi r11,r11,732
	ctx.r11.s64 = ctx.r11.s64 + 732;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bdnz 0x82116168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82116168;
	// b 0x82116614
	goto loc_82116614;
loc_8211622C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r25,r31,200
	ctx.r25.s64 = ctx.r31.s64 + 200;
	// addi r23,r11,-5052
	ctx.r23.s64 = ctx.r11.s64 + -5052;
	// li r22,9
	ctx.r22.s64 = 9;
	// li r14,-1
	ctx.r14.s64 = -1;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r15,2
	ctx.r15.s64 = 2;
	// li r16,4
	ctx.r16.s64 = 4;
	// li r17,6
	ctx.r17.s64 = 6;
	// li r18,12
	ctx.r18.s64 = 12;
	// li r19,13
	ctx.r19.s64 = 13;
	// li r20,14
	ctx.r20.s64 = 14;
	// li r21,15
	ctx.r21.s64 = 15;
loc_82116260:
	// lwz r11,-156(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -156);
	// addi r28,r25,-188
	ctx.r28.s64 = ctx.r25.s64 + -188;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116600
	if (ctx.cr6.eq) goto loc_82116600;
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82116600
	if (ctx.cr6.eq) goto loc_82116600;
	// lbz r11,573(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 573);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821162e8
	if (!ctx.cr6.eq) goto loc_821162E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x82116290;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821162e8
	if (!ctx.cr6.eq) goto loc_821162E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x821162A0;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821162e8
	if (!ctx.cr6.eq) goto loc_821162E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e5b8
	ctx.lr = 0x821162B0;
	sub_8208E5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821162e8
	if (!ctx.cr6.eq) goto loc_821162E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e700
	ctx.lr = 0x821162C0;
	sub_8208E700(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821162e8
	if (!ctx.cr6.eq) goto loc_821162E8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208ddc0
	ctx.lr = 0x821162D0;
	sub_8208DDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821162ec
	if (ctx.cr6.eq) goto loc_821162EC;
	// lwz r3,1732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x821162E0;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821162ec
	if (ctx.cr6.eq) goto loc_821162EC;
loc_821162E8:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
loc_821162EC:
	// lwz r11,1372(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1372);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8211630c
	if (!ctx.cr6.eq) goto loc_8211630C;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
loc_8211630C:
	// lwz r11,-164(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116534
	if (ctx.cr6.eq) goto loc_82116534;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e178
	ctx.lr = 0x82116320;
	sub_8208E178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211632c
	if (ctx.cr6.eq) goto loc_8211632C;
	// stw r24,-16(r25)
	PPC_STORE_U32(ctx.r25.u32 + -16, ctx.r24.u32);
loc_8211632C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x82116334;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116350
	if (ctx.cr6.eq) goto loc_82116350;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
loc_82116350:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dd28
	ctx.lr = 0x82116358;
	sub_8208DD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116394
	if (ctx.cr6.eq) goto loc_82116394;
	// lwz r3,1732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x82116368;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116380
	if (ctx.cr6.eq) goto loc_82116380;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x82116388
	goto loc_82116388;
loc_82116380:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82116388:
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
loc_82116394:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dd48
	ctx.lr = 0x8211639C;
	sub_8208DD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821163d8
	if (ctx.cr6.eq) goto loc_821163D8;
	// lwz r3,1732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x821163AC;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821163c4
	if (ctx.cr6.eq) goto loc_821163C4;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x821163cc
	goto loc_821163CC;
loc_821163C4:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_821163CC:
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
loc_821163D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dd68
	ctx.lr = 0x821163E0;
	sub_8208DD68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211641c
	if (ctx.cr6.eq) goto loc_8211641C;
	// lwz r3,1732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x821163F0;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116408
	if (ctx.cr6.eq) goto loc_82116408;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x82116410
	goto loc_82116410;
loc_82116408:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_82116410:
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
loc_8211641C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dd88
	ctx.lr = 0x82116424;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821164bc
	if (ctx.cr6.eq) goto loc_821164BC;
	// lwz r3,1732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x82116434;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116720
	if (ctx.cr6.eq) goto loc_82116720;
	// stw r24,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r24.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r7.u32);
	// ble cr6,0x82116718
	if (!ctx.cr6.gt) goto loc_82116718;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821164a4
	if (!ctx.cr6.gt) goto loc_821164A4;
	// addi r30,r31,2244
	ctx.r30.s64 = ctx.r31.s64 + 2244;
loc_8211647C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116490
	if (ctx.cr6.eq) goto loc_82116490;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82114700
	ctx.lr = 0x82116490;
	sub_82114700(ctx, base);
loc_82116490:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8211647c
	if (ctx.cr6.lt) goto loc_8211647C;
loc_821164A4:
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x821164b8
	if (ctx.cr6.eq) goto loc_821164B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82114700
	ctx.lr = 0x821164B8;
	sub_82114700(ctx, base);
loc_821164B8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821164BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e5b8
	ctx.lr = 0x821164C4;
	sub_8208E5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821164e4
	if (ctx.cr6.eq) goto loc_821164E4;
	// stw r24,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r24.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
loc_821164E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x821164EC;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211651c
	if (ctx.cr6.eq) goto loc_8211651C;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
	// lwz r3,1732(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x82116510;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211651c
	if (ctx.cr6.eq) goto loc_8211651C;
	// stw r24,188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 188, ctx.r24.u32);
loc_8211651C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8208e1d8
	ctx.lr = 0x82116524;
	sub_8208E1D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116534
	if (ctx.cr6.eq) goto loc_82116534;
	// stw r24,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r24.u32);
	// stw r29,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r29.u32);
loc_82116534:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821165e0
	if (ctx.cr6.eq) goto loc_821165E0;
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821165e0
	if (ctx.cr6.eq) goto loc_821165E0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// lwz r10,228(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x821165e0
	if (!ctx.cr6.gt) goto loc_821165E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// bl 0x8208e1d8
	ctx.lr = 0x82116590;
	sub_8208E1D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211659c
	if (!ctx.cr6.eq) goto loc_8211659C;
	// stw r29,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r29.u32);
loc_8211659C:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r5.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// stw r11,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821165e0
	if (!ctx.cr6.eq) goto loc_821165E0;
	// stw r24,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r24.u32);
loc_821165E0:
	// lwz r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116600
	if (!ctx.cr6.eq) goto loc_82116600;
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116600
	if (ctx.cr6.eq) goto loc_82116600;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82114740
	ctx.lr = 0x82116600;
	sub_82114740(ctx, base);
loc_82116600:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,244
	ctx.r25.s64 = ctx.r25.s64 + 244;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// bne 0x82116260
	if (!ctx.cr0.eq) goto loc_82116260;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82116614:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// bne cr6,0x82116678
	if (!ctx.cr6.eq) goto loc_82116678;
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// beq cr6,0x82116648
	if (ctx.cr6.eq) goto loc_82116648;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x82116650
	if (!ctx.cr6.eq) goto loc_82116650;
loc_82116648:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
loc_82116650:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,2220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82116678
	if (ctx.cr6.lt) goto loc_82116678;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,2228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// stw r29,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r29.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r11.u32);
loc_82116678:
	// lwz r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821166a8
	if (ctx.cr6.lt) goto loc_821166A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r11.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// beq cr6,0x821166a0
	if (ctx.cr6.eq) goto loc_821166A0;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x821166a8
	if (!ctx.cr6.eq) goto loc_821166A8;
loc_821166A0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r11.u32);
loc_821166A8:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r10,2228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821166c0
	if (!ctx.cr6.lt) goto loc_821166C0;
	// stw r11,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r11.u32);
loc_821166C0:
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821166e4
	if (!ctx.cr6.gt) goto loc_821166E4;
	// stw r11,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r11.u32);
loc_821166E4:
	// lwz r11,2236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// lwz r9,2228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,2224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r11,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r11.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82116750
	if (!ctx.cr6.gt) goto loc_82116750;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r29,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r29.u32);
	// blt cr6,0x8211673c
	if (ctx.cr6.lt) goto loc_8211673C;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// b 0x8211674c
	goto loc_8211674C;
loc_82116718:
	// stw r14,2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2232, ctx.r14.u32);
	// b 0x821164bc
	goto loc_821164BC;
loc_82116720:
	// stw r24,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r24.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2228, ctx.r9.u32);
	// b 0x821164bc
	goto loc_821164BC;
loc_8211673C:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x8211674c
	if (!ctx.cr6.gt) goto loc_8211674C;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8211674C:
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
loc_82116750:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r10,2224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82116768
	if (!ctx.cr6.lt) goto loc_82116768;
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
loc_82116768:
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8211678c
	if (!ctx.cr6.gt) goto loc_8211678C;
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
loc_8211678C:
	// lwz r30,2224(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
loc_82116790:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r4,r10,40097
	ctx.r4.u64 = ctx.r10.u64 | 40097;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r3,r9,40098
	ctx.r3.u64 = ctx.r9.u64 | 40098;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// ori r10,r8,40099
	ctx.r10.u64 = ctx.r8.u64 | 40099;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// ori r9,r7,40100
	ctx.r9.u64 = ctx.r7.u64 | 40100;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// ori r8,r6,40101
	ctx.r8.u64 = ctx.r6.u64 | 40101;
	// ori r11,r11,40117
	ctx.r11.u64 = ctx.r11.u64 | 40117;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// std r29,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r29.u64);
	// ori r8,r7,40102
	ctx.r8.u64 = ctx.r7.u64 | 40102;
	// std r29,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r29.u64);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// ori r7,r6,40103
	ctx.r7.u64 = ctx.r6.u64 | 40103;
	// ori r6,r4,40104
	ctx.r6.u64 = ctx.r4.u64 | 40104;
	// ori r5,r3,40105
	ctx.r5.u64 = ctx.r3.u64 | 40105;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// ori r4,r10,40106
	ctx.r4.u64 = ctx.r10.u64 | 40106;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// std r29,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r29.u64);
	// bl 0x820cff58
	ctx.lr = 0x82116834;
	sub_820CFF58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// bne cr6,0x82116844
	if (!ctx.cr6.eq) goto loc_82116844;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82116844:
	// lwz r11,2232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82116a44
	if (!ctx.cr6.lt) goto loc_82116A44;
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82116878
	if (!ctx.cr6.gt) goto loc_82116878;
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// lis r10,-16512
	ctx.r10.s64 = -1082130432;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82116878
	if (ctx.cr6.eq) goto loc_82116878;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82116870:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82116870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82116870;
loc_82116878:
	// lwz r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82116964
	if (ctx.cr6.lt) goto loc_82116964;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x82116970
	if (!ctx.cr6.gt) goto loc_82116970;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_821168B0:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82116954
	if (!ctx.cr6.lt) goto loc_82116954;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82116954
	if (ctx.cr6.gt) goto loc_82116954;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82116944
	if (ctx.cr6.gt) goto loc_82116944;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82116954
	if (!ctx.cr6.lt) goto loc_82116954;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r3,r5,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r5.s64;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,-4(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// b 0x82116954
	goto loc_82116954;
loc_82116944:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82116954
	if (ctx.cr6.gt) goto loc_82116954;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82116954:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821168b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821168B0;
	// b 0x82116970
	goto loc_82116970;
loc_82116964:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
loc_82116970:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82116a84
	if (!ctx.cr6.gt) goto loc_82116A84;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r27,r11,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// lfs f30,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r31,2244
	ctx.r31.s64 = ctx.r31.s64 + 2244;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
	// lfs f29,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f29.f64 = double(temp.f32);
loc_821169A8:
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82116a00
	if (!ctx.cr6.gt) goto loc_82116A00;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82114690
	ctx.lr = 0x821169C0;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821169d8
	if (!ctx.cr6.eq) goto loc_821169D8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r27,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// bl 0x82114658
	ctx.lr = 0x821169D4;
	sub_82114658(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821169D8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116a18
	if (ctx.cr6.eq) goto loc_82116A18;
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82114780
	ctx.lr = 0x821169FC;
	sub_82114780(ctx, base);
	// b 0x82116a18
	goto loc_82116A18;
loc_82116A00:
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116a18
	if (ctx.cr6.eq) goto loc_82116A18;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821146c8
	ctx.lr = 0x82116A14;
	sub_821146C8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82116A18:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821169a8
	if (ctx.cr6.lt) goto loc_821169A8;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82116A44:
	// bne cr6,0x82116a84
	if (!ctx.cr6.eq) goto loc_82116A84;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82116a84
	if (!ctx.cr6.gt) goto loc_82116A84;
	// addi r31,r31,2244
	ctx.r31.s64 = ctx.r31.s64 + 2244;
loc_82116A5C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116a70
	if (ctx.cr6.eq) goto loc_82116A70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114740
	ctx.lr = 0x82116A70;
	sub_82114740(ctx, base);
loc_82116A70:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82116a5c
	if (ctx.cr6.lt) goto loc_82116A5C;
loc_82116A84:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82116A98"))) PPC_WEAK_FUNC(sub_82116A98);
PPC_FUNC_IMPL(__imp__sub_82116A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82116AA0;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821170e8
	if (ctx.cr6.eq) goto loc_821170E8;
	// bl 0x821142a0
	ctx.lr = 0x82116AB8;
	sub_821142A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821170e8
	if (ctx.cr6.eq) goto loc_821170E8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821170e8
	if (!ctx.cr6.eq) goto loc_821170E8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821170e8
	if (ctx.cr6.eq) goto loc_821170E8;
	// lwz r26,1688(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821170e8
	if (ctx.cr6.eq) goto loc_821170E8;
	// lwz r11,2232(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 2232);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// subfe r20,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r20.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// ori r23,r10,40123
	ctx.r23.u64 = ctx.r10.u64 | 40123;
	// ori r21,r9,40124
	ctx.r21.u64 = ctx.r9.u64 | 40124;
	// ori r27,r8,65535
	ctx.r27.u64 = ctx.r8.u64 | 65535;
	// addi r22,r11,-5052
	ctx.r22.s64 = ctx.r11.s64 + -5052;
loc_82116B28:
	// mulli r11,r24,244
	ctx.r11.s64 = ctx.r24.s64 * 244;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821170dc
	if (ctx.cr6.eq) goto loc_821170DC;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r22
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821170dc
	if (ctx.cr6.eq) goto loc_821170DC;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116bb0
	if (ctx.cr6.eq) goto loc_82116BB0;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r25,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116bb0
	if (!ctx.cr6.eq) goto loc_82116BB0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82116bb0
	if (!ctx.cr6.eq) goto loc_82116BB0;
	// bl 0x822488d0
	ctx.lr = 0x82116B7C;
	sub_822488D0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82116b98
	if (!ctx.cr0.eq) goto loc_82116B98;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82116B98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114658
	ctx.lr = 0x82116BA0;
	sub_82114658(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
loc_82116BB0:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116c10
	if (ctx.cr6.eq) goto loc_82116C10;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r25,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116c10
	if (!ctx.cr6.eq) goto loc_82116C10;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82116c10
	if (!ctx.cr6.eq) goto loc_82116C10;
	// bl 0x822488d0
	ctx.lr = 0x82116BDC;
	sub_822488D0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82116bf8
	if (!ctx.cr0.eq) goto loc_82116BF8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82116BF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114658
	ctx.lr = 0x82116C00;
	sub_82114658(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
loc_82116C10:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116c58
	if (ctx.cr6.eq) goto loc_82116C58;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r25,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116c58
	if (!ctx.cr6.eq) goto loc_82116C58;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82116c58
	if (!ctx.cr6.eq) goto loc_82116C58;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,40129
	ctx.r4.u64 = ctx.r4.u64 | 40129;
	// bl 0x82114658
	ctx.lr = 0x82116C48;
	sub_82114658(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
loc_82116C58:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116ca0
	if (ctx.cr6.eq) goto loc_82116CA0;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r25,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116ca0
	if (!ctx.cr6.eq) goto loc_82116CA0;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82116ca0
	if (!ctx.cr6.eq) goto loc_82116CA0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,40128
	ctx.r4.u64 = ctx.r4.u64 | 40128;
	// bl 0x82114658
	ctx.lr = 0x82116C90;
	sub_82114658(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
loc_82116CA0:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116d00
	if (ctx.cr6.eq) goto loc_82116D00;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r25,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116d00
	if (!ctx.cr6.eq) goto loc_82116D00;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82116d00
	if (!ctx.cr6.eq) goto loc_82116D00;
	// bl 0x822488d0
	ctx.lr = 0x82116CCC;
	sub_822488D0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82116ce8
	if (!ctx.cr0.eq) goto loc_82116CE8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82116CE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114658
	ctx.lr = 0x82116CF0;
	sub_82114658(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
loc_82116D00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,9000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9000, ctx.xer);
	// blt cr6,0x82116d18
	if (ctx.cr6.lt) goto loc_82116D18;
	// cmplwi cr6,r11,9100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9100, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82116d1c
	if (ctx.cr6.lt) goto loc_82116D1C;
loc_82116D18:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82116D1C:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208e178
	ctx.lr = 0x82116D28;
	sub_8208E178(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dd28
	ctx.lr = 0x82116D34;
	sub_8208DD28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116d94
	if (!ctx.cr6.eq) goto loc_82116D94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dd48
	ctx.lr = 0x82116D44;
	sub_8208DD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116d94
	if (!ctx.cr6.eq) goto loc_82116D94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dd68
	ctx.lr = 0x82116D54;
	sub_8208DD68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116d94
	if (!ctx.cr6.eq) goto loc_82116D94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dd88
	ctx.lr = 0x82116D64;
	sub_8208DD88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116d94
	if (!ctx.cr6.eq) goto loc_82116D94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x82116D74;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116d8c
	if (ctx.cr6.eq) goto loc_82116D8C;
	// lwz r3,1732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// bl 0x8208dbb0
	ctx.lr = 0x82116D84;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116d94
	if (!ctx.cr6.eq) goto loc_82116D94;
loc_82116D8C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82116d98
	goto loc_82116D98;
loc_82116D94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82116D98:
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dd88
	ctx.lr = 0x82116DA4;
	sub_8208DD88(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116dc8
	if (!ctx.cr6.eq) goto loc_82116DC8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116dc8
	if (ctx.cr6.eq) goto loc_82116DC8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82116DC8:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116de8
	if (!ctx.cr6.eq) goto loc_82116DE8;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116de8
	if (ctx.cr6.eq) goto loc_82116DE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_82116DE8:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116e08
	if (!ctx.cr6.eq) goto loc_82116E08;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116e08
	if (ctx.cr6.eq) goto loc_82116E08;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_82116E08:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116e28
	if (!ctx.cr6.eq) goto loc_82116E28;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116e28
	if (ctx.cr6.eq) goto loc_82116E28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_82116E28:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116e44
	if (!ctx.cr6.eq) goto loc_82116E44;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116e44
	if (ctx.cr6.eq) goto loc_82116E44;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82116E44:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82116e58
	if (!ctx.cr6.eq) goto loc_82116E58;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82116e90
	if (ctx.cr6.gt) goto loc_82116E90;
loc_82116E58:
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116e88
	if (ctx.cr6.eq) goto loc_82116E88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114690
	ctx.lr = 0x82116E6C;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116e88
	if (ctx.cr6.eq) goto loc_82116E88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821146c8
	ctx.lr = 0x82116E84;
	sub_821146C8(ctx, base);
	// stw r27,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r27.u32);
loc_82116E88:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82116e9c
	if (!ctx.cr6.eq) goto loc_82116E9C;
loc_82116E90:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82116ed4
	if (ctx.cr6.gt) goto loc_82116ED4;
loc_82116E9C:
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116ecc
	if (ctx.cr6.eq) goto loc_82116ECC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114690
	ctx.lr = 0x82116EB0;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116ecc
	if (ctx.cr6.eq) goto loc_82116ECC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821146c8
	ctx.lr = 0x82116EC8;
	sub_821146C8(ctx, base);
	// stw r27,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r27.u32);
loc_82116ECC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82116ee0
	if (!ctx.cr6.eq) goto loc_82116EE0;
loc_82116ED4:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82116f18
	if (ctx.cr6.gt) goto loc_82116F18;
loc_82116EE0:
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116f10
	if (ctx.cr6.eq) goto loc_82116F10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114690
	ctx.lr = 0x82116EF4;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116f10
	if (ctx.cr6.eq) goto loc_82116F10;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821146c8
	ctx.lr = 0x82116F0C;
	sub_821146C8(ctx, base);
	// stw r27,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r27.u32);
loc_82116F10:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82116f24
	if (!ctx.cr6.eq) goto loc_82116F24;
loc_82116F18:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82116f5c
	if (ctx.cr6.gt) goto loc_82116F5C;
loc_82116F24:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116f54
	if (ctx.cr6.eq) goto loc_82116F54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114690
	ctx.lr = 0x82116F38;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116f54
	if (ctx.cr6.eq) goto loc_82116F54;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821146c8
	ctx.lr = 0x82116F50;
	sub_821146C8(ctx, base);
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
loc_82116F54:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82116f68
	if (!ctx.cr6.eq) goto loc_82116F68;
loc_82116F5C:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82116f98
	if (ctx.cr6.gt) goto loc_82116F98;
loc_82116F68:
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82116f98
	if (ctx.cr6.eq) goto loc_82116F98;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114690
	ctx.lr = 0x82116F7C;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116f98
	if (ctx.cr6.eq) goto loc_82116F98;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821146c8
	ctx.lr = 0x82116F94;
	sub_821146C8(ctx, base);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
loc_82116F98:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82117050
	if (ctx.cr6.eq) goto loc_82117050;
	// stw r25,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r25.u32);
	// bl 0x822488d0
	ctx.lr = 0x82116FAC;
	sub_822488D0(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82116fcc
	if (ctx.cr0.eq) goto loc_82116FCC;
	// ori r4,r4,40117
	ctx.r4.u64 = ctx.r4.u64 | 40117;
	// b 0x82116fd0
	goto loc_82116FD0;
loc_82116FCC:
	// ori r4,r4,40122
	ctx.r4.u64 = ctx.r4.u64 | 40122;
loc_82116FD0:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82116ff4
	if (!ctx.cr6.eq) goto loc_82116FF4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116ff0
	if (ctx.cr6.eq) goto loc_82116FF0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,40118
	ctx.r4.u64 = ctx.r4.u64 | 40118;
	// b 0x82116ff4
	goto loc_82116FF4;
loc_82116FF0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82116FF4:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
loc_82116FFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211701c
	if (ctx.cr6.eq) goto loc_8211701C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82116ffc
	if (ctx.cr6.lt) goto loc_82116FFC;
	// b 0x82117050
	goto loc_82117050;
loc_8211701C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114658
	ctx.lr = 0x82117024;
	sub_82114658(ctx, base);
	// addi r11,r30,54
	ctx.r11.s64 = ctx.r30.s64 + 54;
	// addi r10,r30,59
	ctx.r10.s64 = ctx.r30.s64 + 59;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r6,12(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r4,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
loc_82117050:
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82117058:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211708c
	if (!ctx.cr6.eq) goto loc_8211708C;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117078
	if (ctx.cr6.eq) goto loc_82117078;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_82117078:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211708c
	if (ctx.cr6.eq) goto loc_8211708C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_8211708C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x821170a0
	if (!ctx.cr6.eq) goto loc_821170A0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821170d0
	if (!ctx.cr6.eq) goto loc_821170D0;
loc_821170A0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x821170d0
	if (ctx.cr6.eq) goto loc_821170D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114690
	ctx.lr = 0x821170B4;
	sub_82114690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821170d0
	if (ctx.cr6.eq) goto loc_821170D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821146c8
	ctx.lr = 0x821170CC;
	sub_821146C8(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_821170D0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82117058
	if (!ctx.cr0.eq) goto loc_82117058;
loc_821170DC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 9, ctx.xer);
	// blt cr6,0x82116b28
	if (ctx.cr6.lt) goto loc_82116B28;
loc_821170E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821170F0"))) PPC_WEAK_FUNC(sub_821170F0);
PPC_FUNC_IMPL(__imp__sub_821170F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821170F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,9
	ctx.r29.s64 = 9;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
loc_82117120:
	// li r4,244
	ctx.r4.s64 = 244;
	// addi r3,r30,-68
	ctx.r3.s64 = ctx.r30.s64 + -68;
	// bl 0x822aa648
	ctx.lr = 0x8211712C;
	sub_822AA648(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r31.u32);
	// addi r30,r30,244
	ctx.r30.s64 = ctx.r30.s64 + 244;
	// bne 0x82117120
	if (!ctx.cr0.eq) goto loc_82117120;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r28,2244
	ctx.r11.s64 = ctx.r28.s64 + 2244;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82117174:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82117174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82117174;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821159e8
	ctx.lr = 0x82117184;
	sub_821159E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82117190"))) PPC_WEAK_FUNC(sub_82117190);
PPC_FUNC_IMPL(__imp__sub_82117190) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x821159e8
	ctx.lr = 0x821171A8;
	sub_821159E8(ctx, base);
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

__attribute__((alias("__imp__sub_821171BC"))) PPC_WEAK_FUNC(sub_821171BC);
PPC_FUNC_IMPL(__imp__sub_821171BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821171C0"))) PPC_WEAK_FUNC(sub_821171C0);
PPC_FUNC_IMPL(__imp__sub_821171C0) {
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
	// bne cr6,0x821171f8
	if (!ctx.cr6.eq) goto loc_821171F8;
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
loc_821171F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82115c10
	ctx.lr = 0x82117200;
	sub_82115C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821160a8
	ctx.lr = 0x82117208;
	sub_821160A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82116a98
	ctx.lr = 0x82117210;
	sub_82116A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821156b8
	ctx.lr = 0x82117218;
	sub_821156B8(ctx, base);
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

__attribute__((alias("__imp__sub_82117230"))) PPC_WEAK_FUNC(sub_82117230);
PPC_FUNC_IMPL(__imp__sub_82117230) {
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
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,27248
	ctx.r9.s64 = ctx.r11.s64 + 27248;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x821172c8
	if (ctx.cr6.eq) goto loc_821172C8;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117288
	if (ctx.cr6.eq) goto loc_82117288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82117288:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821172a8
	if (ctx.cr6.eq) goto loc_821172A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821172A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_821172A8:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821172c8
	if (ctx.cr6.eq) goto loc_821172C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821172C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
loc_821172C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82115458
	ctx.lr = 0x821172D0;
	sub_82115458(ctx, base);
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

__attribute__((alias("__imp__sub_821172E8"))) PPC_WEAK_FUNC(sub_821172E8);
PPC_FUNC_IMPL(__imp__sub_821172E8) {
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
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d9900
	ctx.lr = 0x8211730C;
	sub_822D9900(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82329ce8
	ctx.lr = 0x82117344;
	sub_82329CE8(ctx, base);
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

__attribute__((alias("__imp__sub_8211735C"))) PPC_WEAK_FUNC(sub_8211735C);
PPC_FUNC_IMPL(__imp__sub_8211735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117360"))) PPC_WEAK_FUNC(sub_82117360);
PPC_FUNC_IMPL(__imp__sub_82117360) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821173b8
	if (ctx.cr6.eq) goto loc_821173B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821173b8
	if (ctx.cr6.lt) goto loc_821173B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821173B8:
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

__attribute__((alias("__imp__sub_821173D0"))) PPC_WEAK_FUNC(sub_821173D0);
PPC_FUNC_IMPL(__imp__sub_821173D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_821173FC"))) PPC_WEAK_FUNC(sub_821173FC);
PPC_FUNC_IMPL(__imp__sub_821173FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82117400"))) PPC_WEAK_FUNC(sub_82117400);
PPC_FUNC_IMPL(__imp__sub_82117400) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82117420
	if (ctx.cr6.eq) goto loc_82117420;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117420
	if (ctx.cr6.eq) goto loc_82117420;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82117420:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82117428"))) PPC_WEAK_FUNC(sub_82117428);
PPC_FUNC_IMPL(__imp__sub_82117428) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82117448
	if (ctx.cr6.eq) goto loc_82117448;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117448
	if (ctx.cr6.eq) goto loc_82117448;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82117448:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82117450"))) PPC_WEAK_FUNC(sub_82117450);
PPC_FUNC_IMPL(__imp__sub_82117450) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82117470
	if (ctx.cr6.eq) goto loc_82117470;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117470
	if (ctx.cr6.eq) goto loc_82117470;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82117470:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82117478"))) PPC_WEAK_FUNC(sub_82117478);
PPC_FUNC_IMPL(__imp__sub_82117478) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821174B0"))) PPC_WEAK_FUNC(sub_821174B0);
PPC_FUNC_IMPL(__imp__sub_821174B0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82352088
	ctx.lr = 0x821174CC;
	sub_82352088(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821174f0
	if (!ctx.cr6.eq) goto loc_821174F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
loc_821174F0:
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

__attribute__((alias("__imp__sub_82117504"))) PPC_WEAK_FUNC(sub_82117504);
PPC_FUNC_IMPL(__imp__sub_82117504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117508"))) PPC_WEAK_FUNC(sub_82117508);
PPC_FUNC_IMPL(__imp__sub_82117508) {
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
	// bl 0x821152a8
	ctx.lr = 0x82117520;
	sub_821152A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27248
	ctx.r9.s64 = ctx.r10.s64 + 27248;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bl 0x821172e8
	ctx.lr = 0x82117548;
	sub_821172E8(ctx, base);
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

__attribute__((alias("__imp__sub_82117560"))) PPC_WEAK_FUNC(sub_82117560);
PPC_FUNC_IMPL(__imp__sub_82117560) {
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
	// bl 0x82117230
	ctx.lr = 0x82117580;
	sub_82117230(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211759c
	if (ctx.cr6.eq) goto loc_8211759C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82117598;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8211759C:
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

__attribute__((alias("__imp__sub_821175B4"))) PPC_WEAK_FUNC(sub_821175B4);
PPC_FUNC_IMPL(__imp__sub_821175B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821175B8"))) PPC_WEAK_FUNC(sub_821175B8);
PPC_FUNC_IMPL(__imp__sub_821175B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821175d0
	if (!ctx.cr6.lt) goto loc_821175D0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821175D0:
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821175E0"))) PPC_WEAK_FUNC(sub_821175E0);
PPC_FUNC_IMPL(__imp__sub_821175E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,28080
	ctx.r10.s64 = ctx.r11.s64 + 28080;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183e40
	ctx.lr = 0x8211760C;
	sub_82183E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82183e40
	ctx.lr = 0x82117618;
	sub_82183E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183e40
	ctx.lr = 0x82117624;
	sub_82183E40(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82117638"))) PPC_WEAK_FUNC(sub_82117638);
PPC_FUNC_IMPL(__imp__sub_82117638) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,100
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 100, ctx.xer);
	// blt cr6,0x82117648
	if (ctx.cr6.lt) goto loc_82117648;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82117648:
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82117658"))) PPC_WEAK_FUNC(sub_82117658);
PPC_FUNC_IMPL(__imp__sub_82117658) {
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
	// bl 0x820f3a78
	ctx.lr = 0x82117670;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821176cc
	if (ctx.cr6.eq) goto loc_821176CC;
	// cmpwi cr6,r31,10000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10000, ctx.xer);
	// blt cr6,0x821176c0
	if (ctx.cr6.lt) goto loc_821176C0;
	// lis r11,26843
	ctx.r11.s64 = 1759182848;
	// ori r10,r11,35757
	ctx.r10.u64 = ctx.r11.u64 | 35757;
	// mulhw r9,r31,r10
	ctx.r9.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 12;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,10000
	ctx.r7.s64 = ctx.r8.s64 * 10000;
	// subf r6,r7,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r7.s64;
	// cmplwi cr6,r6,222
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 222, ctx.xer);
	// bge cr6,0x821176cc
	if (!ctx.cr6.lt) goto loc_821176CC;
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
loc_821176C0:
	// cmplwi cr6,r31,222
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 222, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x821176d0
	if (ctx.cr6.lt) goto loc_821176D0;
loc_821176CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821176D0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821176E4"))) PPC_WEAK_FUNC(sub_821176E4);
PPC_FUNC_IMPL(__imp__sub_821176E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821176E8"))) PPC_WEAK_FUNC(sub_821176E8);
PPC_FUNC_IMPL(__imp__sub_821176E8) {
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
	// bl 0x820f3a78
	ctx.lr = 0x82117700;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117730
	if (ctx.cr6.eq) goto loc_82117730;
	// lis r11,26843
	ctx.r11.s64 = 1759182848;
	// ori r10,r11,35757
	ctx.r10.u64 = ctx.r11.u64 | 35757;
	// mulhw r9,r31,r10
	ctx.r9.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 12;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,10000
	ctx.r7.s64 = ctx.r8.s64 * 10000;
	// subf r3,r7,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r7.s64;
	// cmplwi cr6,r3,222
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 222, ctx.xer);
	// blt cr6,0x82117734
	if (ctx.cr6.lt) goto loc_82117734;
loc_82117730:
	// li r3,222
	ctx.r3.s64 = 222;
loc_82117734:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82117748"))) PPC_WEAK_FUNC(sub_82117748);
PPC_FUNC_IMPL(__imp__sub_82117748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82117750;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,28080
	ctx.r10.s64 = ctx.r11.s64 + 28080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r29,99
	ctx.r29.s64 = 99;
	// lfs f30,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f30.f64 = double(temp.f32);
	// li r25,1000
	ctx.r25.s64 = 1000;
	// li r27,100
	ctx.r27.s64 = 100;
	// ori r28,r9,65535
	ctx.r28.u64 = ctx.r9.u64 | 65535;
loc_821177A4:
	// stfs f30,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x822aa648
	ctx.lr = 0x821177EC;
	sub_822AA648(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bge 0x821177a4
	if (!ctx.cr0.lt) goto loc_821177A4;
	// stw r30,8816(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8816, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,8820(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8820, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82117814"))) PPC_WEAK_FUNC(sub_82117814);
PPC_FUNC_IMPL(__imp__sub_82117814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117818"))) PPC_WEAK_FUNC(sub_82117818);
PPC_FUNC_IMPL(__imp__sub_82117818) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,28080
	ctx.r10.s64 = ctx.r11.s64 + 28080;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82183e40
	ctx.lr = 0x8211784C;
	sub_82183E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82183e40
	ctx.lr = 0x82117858;
	sub_82183E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183e40
	ctx.lr = 0x82117864;
	sub_82183E40(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82117880
	if (ctx.cr6.eq) goto loc_82117880;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8211787C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82117880:
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

__attribute__((alias("__imp__sub_82117898"))) PPC_WEAK_FUNC(sub_82117898);
PPC_FUNC_IMPL(__imp__sub_82117898) {
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
	ctx.lr = 0x821178A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821178c0
	if (ctx.cr6.eq) goto loc_821178C0;
	// li r3,8840
	ctx.r3.s64 = 8840;
	// bl 0x82183448
	ctx.lr = 0x821178BC;
	sub_82183448(ctx, base);
	// b 0x821178c8
	goto loc_821178C8;
loc_821178C0:
	// li r3,553
	ctx.r3.s64 = 553;
	// bl 0x821845a0
	ctx.lr = 0x821178C8;
	sub_821845A0(ctx, base);
loc_821178C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821178e4
	if (ctx.cr6.eq) goto loc_821178E4;
	// bl 0x82118190
	ctx.lr = 0x821178D4;
	sub_82118190(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821178E4:
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

__attribute__((alias("__imp__sub_821178F8"))) PPC_WEAK_FUNC(sub_821178F8);
PPC_FUNC_IMPL(__imp__sub_821178F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82117900;
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
	// bl 0x82183078
	ctx.lr = 0x82117914;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82117920;
	sub_821837D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184710
	ctx.lr = 0x82117930;
	sub_82184710(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211793C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82117944"))) PPC_WEAK_FUNC(sub_82117944);
PPC_FUNC_IMPL(__imp__sub_82117944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117948"))) PPC_WEAK_FUNC(sub_82117948);
PPC_FUNC_IMPL(__imp__sub_82117948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82117950;
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
	// bl 0x82183078
	ctx.lr = 0x82117964;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82117970;
	sub_821837D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184710
	ctx.lr = 0x82117980;
	sub_82184710(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8211798C;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82117994"))) PPC_WEAK_FUNC(sub_82117994);
PPC_FUNC_IMPL(__imp__sub_82117994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117998"))) PPC_WEAK_FUNC(sub_82117998);
PPC_FUNC_IMPL(__imp__sub_82117998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821179A0;
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
	// bl 0x82183078
	ctx.lr = 0x821179B4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821179C0;
	sub_821837D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184710
	ctx.lr = 0x821179D0;
	sub_82184710(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821179DC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821179E4"))) PPC_WEAK_FUNC(sub_821179E4);
PPC_FUNC_IMPL(__imp__sub_821179E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821179E8"))) PPC_WEAK_FUNC(sub_821179E8);
PPC_FUNC_IMPL(__imp__sub_821179E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821179F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,8820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8820, ctx.r5.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x820f3a78
	ctx.lr = 0x82117A0C;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117a50
	if (ctx.cr6.eq) goto loc_82117A50;
	// bl 0x82183078
	ctx.lr = 0x82117A18;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82117A24;
	sub_821837D0(ctx, base);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,8820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8820);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82117a40
	if (!ctx.cr6.gt) goto loc_82117A40;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82117A40:
	// bl 0x82080d68
	ctx.lr = 0x82117A44;
	sub_82080D68(ctx, base);
	// stw r3,8816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8816, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82117A50;
	sub_821837D0(ctx, base);
loc_82117A50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82117a8c
	if (ctx.cr6.eq) goto loc_82117A8C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82117A5C:
	// lwz r11,8816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8816);
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82117A6C;
	sub_822AA648(ctx, base);
	// lwz r11,8816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8816);
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8218a128
	ctx.lr = 0x82117A80;
	sub_8218A128(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x82117a5c
	if (!ctx.cr0.eq) goto loc_82117A5C;
loc_82117A8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82117A94"))) PPC_WEAK_FUNC(sub_82117A94);
PPC_FUNC_IMPL(__imp__sub_82117A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117A98"))) PPC_WEAK_FUNC(sub_82117A98);
PPC_FUNC_IMPL(__imp__sub_82117A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82117AA0;
	sub_8224878C(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820f3a78
	ctx.lr = 0x82117AB0;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117be8
	if (ctx.cr6.eq) goto loc_82117BE8;
	// cmplwi cr6,r31,1800
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1800, ctx.xer);
	// bne cr6,0x82117ad0
	if (!ctx.cr6.eq) goto loc_82117AD0;
	// bl 0x820cff08
	ctx.lr = 0x82117AC4;
	sub_820CFF08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117be8
	if (ctx.cr6.eq) goto loc_82117BE8;
loc_82117AD0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,30136
	ctx.r7.s64 = ctx.r11.s64 + 30136;
	// addi r4,r10,27280
	ctx.r4.s64 = ctx.r10.s64 + 27280;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,49
	ctx.r5.s64 = 49;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82249d68
	ctx.lr = 0x82117AF4;
	sub_82249D68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117be8
	if (ctx.cr6.eq) goto loc_82117BE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82117bdc
	if (ctx.cr6.eq) goto loc_82117BDC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117bdc
	if (ctx.cr6.eq) goto loc_82117BDC;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,-8540(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r31,r9,1696
	ctx.r31.s64 = ctx.r9.s64 + 1696;
loc_82117B34:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82117b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82117B34;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,1284(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c8348
	ctx.lr = 0x82117B4C;
	sub_820C8348(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820c7290
	ctx.lr = 0x82117B54;
	sub_820C7290(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c8d48
	ctx.lr = 0x82117B64;
	sub_820C8D48(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x82117B68;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82117b84
	if (!ctx.cr6.eq) goto loc_82117B84;
	// lwz r11,1588(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82117b88
	if (!ctx.cr6.eq) goto loc_82117B88;
loc_82117B84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82117B88:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82117bac
	if (!ctx.cr6.lt) goto loc_82117BAC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82117BAC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,28092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82117bcc
	if (!ctx.cr6.lt) goto loc_82117BCC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82117BCC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82117BDC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82117BE8:
	// li r3,222
	ctx.r3.s64 = 222;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82117BF4"))) PPC_WEAK_FUNC(sub_82117BF4);
PPC_FUNC_IMPL(__imp__sub_82117BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117BF8"))) PPC_WEAK_FUNC(sub_82117BF8);
PPC_FUNC_IMPL(__imp__sub_82117BF8) {
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
	// lwz r3,-2040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117c2c
	if (ctx.cr6.eq) goto loc_82117C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82117C2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2040, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82117C48"))) PPC_WEAK_FUNC(sub_82117C48);
PPC_FUNC_IMPL(__imp__sub_82117C48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82117cc0
	sub_82117CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82117C50"))) PPC_WEAK_FUNC(sub_82117C50);
PPC_FUNC_IMPL(__imp__sub_82117C50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82117C6C;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x821855f0
	ctx.lr = 0x82117C74;
	sub_821855F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,28112
	ctx.r8.s64 = ctx.r10.s64 + 28112;
	// addi r7,r9,28096
	ctx.r7.s64 = ctx.r9.s64 + 28096;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r4,560
	ctx.r4.s64 = 560;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82117CA8;
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

__attribute__((alias("__imp__sub_82117CC0"))) PPC_WEAK_FUNC(sub_82117CC0);
PPC_FUNC_IMPL(__imp__sub_82117CC0) {
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
	// addi r9,r11,28112
	ctx.r9.s64 = ctx.r11.s64 + 28112;
	// addi r8,r10,28096
	ctx.r8.s64 = ctx.r10.s64 + 28096;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82185670
	ctx.lr = 0x82117CFC;
	sub_82185670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82117D04;
	sub_821857F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82117d20
	if (ctx.cr6.eq) goto loc_82117D20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82117D1C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82117D20:
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

__attribute__((alias("__imp__sub_82117D38"))) PPC_WEAK_FUNC(sub_82117D38);
PPC_FUNC_IMPL(__imp__sub_82117D38) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218e938
	ctx.lr = 0x82117D58;
	sub_8218E938(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117dd4
	if (ctx.cr6.eq) goto loc_82117DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117dd4
	if (ctx.cr6.eq) goto loc_82117DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117dd4
	if (ctx.cr6.eq) goto loc_82117DD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117dd4
	if (ctx.cr6.eq) goto loc_82117DD4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
loc_82117DD4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82117ee0
	if (ctx.cr6.eq) goto loc_82117EE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117e24
	if (ctx.cr6.eq) goto loc_82117E24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117e24
	if (ctx.cr6.eq) goto loc_82117E24;
	// li r4,560
	ctx.r4.s64 = 560;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x822aa648
	ctx.lr = 0x82117E24;
	sub_822AA648(ctx, base);
loc_82117E24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117ee0
	if (ctx.cr6.eq) goto loc_82117EE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117e68
	if (ctx.cr6.eq) goto loc_82117E68;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82117E68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117e90
	if (ctx.cr6.eq) goto loc_82117E90;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82117E90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117eb8
	if (ctx.cr6.eq) goto loc_82117EB8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82117EB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117ee0
	if (ctx.cr6.eq) goto loc_82117EE0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82117EE0:
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

__attribute__((alias("__imp__sub_82117EF8"))) PPC_WEAK_FUNC(sub_82117EF8);
PPC_FUNC_IMPL(__imp__sub_82117EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82117F00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-2040(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -2040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82117f64
	if (!ctx.cr6.eq) goto loc_82117F64;
	// bl 0x82183078
	ctx.lr = 0x82117F20;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82117F2C;
	sub_821837D0(ctx, base);
	// li r3,592
	ctx.r3.s64 = 592;
	// bl 0x82080000
	ctx.lr = 0x82117F34;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117f50
	if (ctx.cr6.eq) goto loc_82117F50;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82117c50
	ctx.lr = 0x82117F48;
	sub_82117C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82117f54
	goto loc_82117F54;
loc_82117F50:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82117F54:
	// stw r31,-2040(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2040, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82117F60;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82117F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82117F6C"))) PPC_WEAK_FUNC(sub_82117F6C);
PPC_FUNC_IMPL(__imp__sub_82117F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117F70"))) PPC_WEAK_FUNC(sub_82117F70);
PPC_FUNC_IMPL(__imp__sub_82117F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,28120
	ctx.r10.s64 = ctx.r11.s64 + 28120;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82117F80"))) PPC_WEAK_FUNC(sub_82117F80);
PPC_FUNC_IMPL(__imp__sub_82117F80) {
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
	// addi r9,r11,28120
	ctx.r9.s64 = ctx.r11.s64 + 28120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82117fb8
	if (ctx.cr6.eq) goto loc_82117FB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82117FB4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82117FB8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82117FCC"))) PPC_WEAK_FUNC(sub_82117FCC);
PPC_FUNC_IMPL(__imp__sub_82117FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82117FD0"))) PPC_WEAK_FUNC(sub_82117FD0);
PPC_FUNC_IMPL(__imp__sub_82117FD0) {
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
	ctx.lr = 0x82117FE0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82117ff8
	if (ctx.cr6.eq) goto loc_82117FF8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x82117FF4;
	sub_82183448(ctx, base);
	// b 0x82118000
	goto loc_82118000;
loc_82117FF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82118000;
	sub_821845A0(ctx, base);
loc_82118000:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211801c
	if (ctx.cr6.eq) goto loc_8211801C;
	// bl 0x821183e0
	ctx.lr = 0x8211800C;
	sub_821183E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8211801C:
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

__attribute__((alias("__imp__sub_82118030"))) PPC_WEAK_FUNC(sub_82118030);
PPC_FUNC_IMPL(__imp__sub_82118030) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x82118048;
	sub_8218B1E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28164
	ctx.r9.s64 = ctx.r10.s64 + 28164;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82118078"))) PPC_WEAK_FUNC(sub_82118078);
PPC_FUNC_IMPL(__imp__sub_82118078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,28164
	ctx.r10.s64 = ctx.r11.s64 + 28164;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8218b208
	sub_8218B208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82118088"))) PPC_WEAK_FUNC(sub_82118088);
PPC_FUNC_IMPL(__imp__sub_82118088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82118090;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820f3a78
	ctx.lr = 0x821180A8;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821180c8
	if (ctx.cr6.eq) goto loc_821180C8;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x821180C8;
	sub_8218B2D0(ctx, base);
loc_821180C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821180D0"))) PPC_WEAK_FUNC(sub_821180D0);
PPC_FUNC_IMPL(__imp__sub_821180D0) {
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
	// addi r10,r11,28164
	ctx.r10.s64 = ctx.r11.s64 + 28164;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x821180FC;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82118118
	if (ctx.cr6.eq) goto loc_82118118;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82118114;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82118118:
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

__attribute__((alias("__imp__sub_82118130"))) PPC_WEAK_FUNC(sub_82118130);
PPC_FUNC_IMPL(__imp__sub_82118130) {
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
	ctx.lr = 0x82118140;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82118158
	if (ctx.cr6.eq) goto loc_82118158;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x82118154;
	sub_82183448(ctx, base);
	// b 0x82118160
	goto loc_82118160;
loc_82118158:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82118160;
	sub_821845A0(ctx, base);
loc_82118160:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211817c
	if (ctx.cr6.eq) goto loc_8211817C;
	// bl 0x82119188
	ctx.lr = 0x8211816C;
	sub_82119188(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8211817C:
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

__attribute__((alias("__imp__sub_82118190"))) PPC_WEAK_FUNC(sub_82118190);
PPC_FUNC_IMPL(__imp__sub_82118190) {
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
	// bl 0x82117748
	ctx.lr = 0x821181A8;
	sub_82117748(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28188
	ctx.r9.s64 = ctx.r10.s64 + 28188;
	// stw r11,8824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8824, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r11.u32);
	// stw r11,8832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8832, ctx.r11.u32);
	// stw r11,8836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8836, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_821181E0"))) PPC_WEAK_FUNC(sub_821181E0);
PPC_FUNC_IMPL(__imp__sub_821181E0) {
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
	// lwz r3,8836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8836);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,28188
	ctx.r10.s64 = ctx.r11.s64 + 28188;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82118228
	if (ctx.cr6.eq) goto loc_82118228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8836, ctx.r30.u32);
loc_82118228:
	// lwz r3,8824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118248
	if (ctx.cr6.eq) goto loc_82118248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8824, ctx.r30.u32);
loc_82118248:
	// lwz r3,8828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8828);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118268
	if (ctx.cr6.eq) goto loc_82118268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r30.u32);
loc_82118268:
	// lwz r3,8832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118288
	if (ctx.cr6.eq) goto loc_82118288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8832, ctx.r30.u32);
loc_82118288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821175e0
	ctx.lr = 0x82118290;
	sub_821175E0(ctx, base);
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

__attribute__((alias("__imp__sub_821182A8"))) PPC_WEAK_FUNC(sub_821182A8);
PPC_FUNC_IMPL(__imp__sub_821182A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821182C8:
	// mulli r9,r10,88
	ctx.r9.s64 = ctx.r10.s64 * 88;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211830c
	if (ctx.cr6.eq) goto loc_8211830C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 100, ctx.xer);
	// blt cr6,0x821182c8
	if (ctx.cr6.lt) goto loc_821182C8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821182F4:
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
loc_8211830C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// ori r5,r7,65535
	ctx.r5.u64 = ctx.r7.u64 | 65535;
	// lfs f13,10376(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// addi r3,r10,60
	ctx.r3.s64 = ctx.r10.s64 + 60;
	// bl 0x822aa648
	ctx.lr = 0x82118378;
	sub_822AA648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// b 0x821182f4
	goto loc_821182F4;
}

__attribute__((alias("__imp__sub_82118388"))) PPC_WEAK_FUNC(sub_82118388);
PPC_FUNC_IMPL(__imp__sub_82118388) {
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
	// bl 0x821181e0
	ctx.lr = 0x821183A8;
	sub_821181E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821183c4
	if (ctx.cr6.eq) goto loc_821183C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821183C0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821183C4:
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

__attribute__((alias("__imp__sub_821183DC"))) PPC_WEAK_FUNC(sub_821183DC);
PPC_FUNC_IMPL(__imp__sub_821183DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821183E0"))) PPC_WEAK_FUNC(sub_821183E0);
PPC_FUNC_IMPL(__imp__sub_821183E0) {
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
	// bl 0x82117f70
	ctx.lr = 0x821183F8;
	sub_82117F70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,28200
	ctx.r10.s64 = ctx.r11.s64 + 28200;
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

__attribute__((alias("__imp__sub_8211841C"))) PPC_WEAK_FUNC(sub_8211841C);
PPC_FUNC_IMPL(__imp__sub_8211841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

