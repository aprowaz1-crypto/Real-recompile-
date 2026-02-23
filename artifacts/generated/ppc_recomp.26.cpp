#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8215A8C8"))) PPC_WEAK_FUNC(sub_8215A8C8);
PPC_FUNC_IMPL(__imp__sub_8215A8C8) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a8f8
	if (ctx.cr6.eq) goto loc_8215A8F8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c3410
	ctx.lr = 0x8215A8F0;
	sub_823C3410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8215A8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A90C"))) PPC_WEAK_FUNC(sub_8215A90C);
PPC_FUNC_IMPL(__imp__sub_8215A90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A910"))) PPC_WEAK_FUNC(sub_8215A910);
PPC_FUNC_IMPL(__imp__sub_8215A910) {
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215a948
	if (ctx.cr6.eq) goto loc_8215A948;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a948
	if (ctx.cr6.eq) goto loc_8215A948;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c3468
	ctx.lr = 0x8215A940;
	sub_823C3468(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8215A948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A95C"))) PPC_WEAK_FUNC(sub_8215A95C);
PPC_FUNC_IMPL(__imp__sub_8215A95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A960"))) PPC_WEAK_FUNC(sub_8215A960);
PPC_FUNC_IMPL(__imp__sub_8215A960) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823c2ff0
	ctx.lr = 0x8215A998;
	sub_823C2FF0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82109e00
	ctx.lr = 0x8215A9B8;
	sub_82109E00(ctx, base);
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

__attribute__((alias("__imp__sub_8215A9D4"))) PPC_WEAK_FUNC(sub_8215A9D4);
PPC_FUNC_IMPL(__imp__sub_8215A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A9D8"))) PPC_WEAK_FUNC(sub_8215A9D8);
PPC_FUNC_IMPL(__imp__sub_8215A9D8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x8215AA08;
	sub_823C3048(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215aa1c
	if (ctx.cr0.eq) goto loc_8215AA1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215AA1C;
	sub_82183E40(ctx, base);
loc_8215AA1C:
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

__attribute__((alias("__imp__sub_8215AA38"))) PPC_WEAK_FUNC(sub_8215AA38);
PPC_FUNC_IMPL(__imp__sub_8215AA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,11076(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11076, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8210a9b0
	sub_8210A9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215AA84"))) PPC_WEAK_FUNC(sub_8215AA84);
PPC_FUNC_IMPL(__imp__sub_8215AA84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AA88"))) PPC_WEAK_FUNC(sub_8215AA88);
PPC_FUNC_IMPL(__imp__sub_8215AA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AA98"))) PPC_WEAK_FUNC(sub_8215AA98);
PPC_FUNC_IMPL(__imp__sub_8215AA98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24004
	ctx.r10.s64 = ctx.r10.s64 + -24004;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AAD8"))) PPC_WEAK_FUNC(sub_8215AAD8);
PPC_FUNC_IMPL(__imp__sub_8215AAD8) {
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
	// bl 0x8215bd08
	ctx.lr = 0x8215AAF4;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215ab2c
	if (ctx.cr6.eq) goto loc_8215AB2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// bl 0x82256350
	ctx.lr = 0x8215AB10;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ab2c
	if (!ctx.cr0.eq) goto loc_8215AB2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8215ab30
	goto loc_8215AB30;
loc_8215AB2C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8215AB30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AB40;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ab88
	if (!ctx.cr0.eq) goto loc_8215AB88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x8215ab90
	if (!ctx.cr0.eq) goto loc_8215AB90;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AB6C;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ab8c
	if (!ctx.cr0.eq) goto loc_8215AB8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8215ab90
	goto loc_8215AB90;
loc_8215AB88:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8215AB8C:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8215AB90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,247
	ctx.r4.s64 = 247;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215ABA0;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215abe8
	if (!ctx.cr0.eq) goto loc_8215ABE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne 0x8215abf0
	if (!ctx.cr0.eq) goto loc_8215ABF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,246
	ctx.r4.s64 = 246;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215ABCC;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215abec
	if (!ctx.cr0.eq) goto loc_8215ABEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8215abf0
	goto loc_8215ABF0;
loc_8215ABE8:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_8215ABEC:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_8215ABF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,249
	ctx.r4.s64 = 249;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC00;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ac48
	if (!ctx.cr0.eq) goto loc_8215AC48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne 0x8215ac50
	if (!ctx.cr0.eq) goto loc_8215AC50;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,248
	ctx.r4.s64 = 248;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC2C;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ac4c
	if (!ctx.cr0.eq) goto loc_8215AC4C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8215ac50
	goto loc_8215AC50;
loc_8215AC48:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_8215AC4C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8215AC50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,245
	ctx.r4.s64 = 245;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC60;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215ac7c
	if (!ctx.cr0.eq) goto loc_8215AC7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8215ac80
	goto loc_8215AC80;
loc_8215AC7C:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_8215AC80:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,235
	ctx.r4.s64 = 235;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215AC90;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215acd8
	if (!ctx.cr0.eq) goto loc_8215ACD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bne 0x8215ace0
	if (!ctx.cr0.eq) goto loc_8215ACE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,234
	ctx.r4.s64 = 234;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82256350
	ctx.lr = 0x8215ACBC;
	sub_82256350(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215acdc
	if (!ctx.cr0.eq) goto loc_8215ACDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x8215ace0
	goto loc_8215ACE0;
loc_8215ACD8:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8215ACDC:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8215ACE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215AD00"))) PPC_WEAK_FUNC(sub_8215AD00);
PPC_FUNC_IMPL(__imp__sub_8215AD00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AD20"))) PPC_WEAK_FUNC(sub_8215AD20);
PPC_FUNC_IMPL(__imp__sub_8215AD20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215AD40"))) PPC_WEAK_FUNC(sub_8215AD40);
PPC_FUNC_IMPL(__imp__sub_8215AD40) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8215bc10
	ctx.lr = 0x8215AD64;
	sub_8215BC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,6
	ctx.r11.s64 = 6;
	// bne 0x8215ad74
	if (!ctx.cr0.eq) goto loc_8215AD74;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215AD74:
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

__attribute__((alias("__imp__sub_8215AD8C"))) PPC_WEAK_FUNC(sub_8215AD8C);
PPC_FUNC_IMPL(__imp__sub_8215AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215AD90"))) PPC_WEAK_FUNC(sub_8215AD90);
PPC_FUNC_IMPL(__imp__sub_8215AD90) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8215bc10
	ctx.lr = 0x8215ADB4;
	sub_8215BC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne 0x8215adc4
	if (!ctx.cr0.eq) goto loc_8215ADC4;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215ADC4:
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

__attribute__((alias("__imp__sub_8215ADDC"))) PPC_WEAK_FUNC(sub_8215ADDC);
PPC_FUNC_IMPL(__imp__sub_8215ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215ADE0"))) PPC_WEAK_FUNC(sub_8215ADE0);
PPC_FUNC_IMPL(__imp__sub_8215ADE0) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8215bc10
	ctx.lr = 0x8215AE04;
	sub_8215BC10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne 0x8215ae14
	if (!ctx.cr0.eq) goto loc_8215AE14;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215AE14:
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

__attribute__((alias("__imp__sub_8215AE2C"))) PPC_WEAK_FUNC(sub_8215AE2C);
PPC_FUNC_IMPL(__imp__sub_8215AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215AE30"))) PPC_WEAK_FUNC(sub_8215AE30);
PPC_FUNC_IMPL(__imp__sub_8215AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215AE38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-24024
	ctx.r11.s64 = ctx.r11.s64 + -24024;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bb10
	ctx.lr = 0x8215AE64;
	sub_8215BB10(ctx, base);
	// stw r29,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b910
	ctx.lr = 0x8215AE70;
	sub_8215B910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215AE7C"))) PPC_WEAK_FUNC(sub_8215AE7C);
PPC_FUNC_IMPL(__imp__sub_8215AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215AE80"))) PPC_WEAK_FUNC(sub_8215AE80);
PPC_FUNC_IMPL(__imp__sub_8215AE80) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,-24024
	ctx.r11.s64 = ctx.r11.s64 + -24024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215b888
	ctx.lr = 0x8215AEB0;
	sub_8215B888(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215aec4
	if (ctx.cr0.eq) goto loc_8215AEC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215AEC4;
	sub_82183E40(ctx, base);
loc_8215AEC4:
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

__attribute__((alias("__imp__sub_8215AEE0"))) PPC_WEAK_FUNC(sub_8215AEE0);
PPC_FUNC_IMPL(__imp__sub_8215AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8215AEE8;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// addi r24,r11,1824
	ctx.r24.s64 = ctx.r11.s64 + 1824;
	// lwz r27,704(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// bl 0x82227aa0
	ctx.lr = 0x8215AF04;
	sub_82227AA0(ctx, base);
	// lwz r25,32(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8215afdc
	if (ctx.cr6.eq) goto loc_8215AFDC;
loc_8215AF14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822291e8
	ctx.lr = 0x8215AF20;
	sub_822291E8(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8215afd0
	if (ctx.cr6.eq) goto loc_8215AFD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215b500
	ctx.lr = 0x8215AF38;
	sub_8215B500(ctx, base);
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215b520
	ctx.lr = 0x8215AF68;
	sub_8215B520(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b6e0
	ctx.lr = 0x8215AF74;
	sub_8215B6E0(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8215afb8
	if (ctx.cr6.eq) goto loc_8215AFB8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x8215afa8
	if (ctx.cr6.eq) goto loc_8215AFA8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x8215afc4
	if (!ctx.cr6.eq) goto loc_8215AFC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b590
	ctx.lr = 0x8215AF98;
	sub_8215B590(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b670
	ctx.lr = 0x8215AFA4;
	sub_8215B670(ctx, base);
	// b 0x8215afc4
	goto loc_8215AFC4;
loc_8215AFA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b600
	ctx.lr = 0x8215AFB4;
	sub_8215B600(ctx, base);
	// b 0x8215afc4
	goto loc_8215AFC4;
loc_8215AFB8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b590
	ctx.lr = 0x8215AFC4;
	sub_8215B590(ctx, base);
loc_8215AFC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215b7e8
	ctx.lr = 0x8215AFD0;
	sub_8215B7E8(ctx, base);
loc_8215AFD0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8215af14
	if (ctx.cr6.lt) goto loc_8215AF14;
loc_8215AFDC:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8215aff0
	if (!ctx.cr6.lt) goto loc_8215AFF0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x8215bcb8
	ctx.lr = 0x8215AFF0;
	sub_8215BCB8(ctx, base);
loc_8215AFF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8215AFF8"))) PPC_WEAK_FUNC(sub_8215AFF8);
PPC_FUNC_IMPL(__imp__sub_8215AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8215B000;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82227aa0
	ctx.lr = 0x8215B00C;
	sub_82227AA0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r25,r27,-1
	ctx.r25.s64 = ctx.r27.s64 + -1;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// addi r28,r11,1824
	ctx.r28.s64 = ctx.r11.s64 + 1824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229078
	ctx.lr = 0x8215B028;
	sub_82229078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229080
	ctx.lr = 0x8215B034;
	sub_82229080(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8215b0c4
	if (ctx.cr6.eq) goto loc_8215B0C4;
	// addi r23,r30,16
	ctx.r23.s64 = ctx.r30.s64 + 16;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
loc_8215B04C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822291e8
	ctx.lr = 0x8215B05C;
	sub_822291E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-744(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -744);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822225f8
	ctx.lr = 0x8215B070;
	sub_822225F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8215b094
	if (ctx.cr6.eq) goto loc_8215B094;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8215b0a4
	if (!ctx.cr6.eq) goto loc_8215B0A4;
	// subf r11,r31,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r31.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8215b0a4
	goto loc_8215B0A4;
loc_8215B094:
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// beq cr6,0x8215b0a4
	if (ctx.cr6.eq) goto loc_8215B0A4;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
loc_8215B0A4:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8215b9d0
	ctx.lr = 0x8215B0B8;
	sub_8215B9D0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8215b04c
	if (ctx.cr6.lt) goto loc_8215B04C;
loc_8215B0C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8215B0CC"))) PPC_WEAK_FUNC(sub_8215B0CC);
PPC_FUNC_IMPL(__imp__sub_8215B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B0D0"))) PPC_WEAK_FUNC(sub_8215B0D0);
PPC_FUNC_IMPL(__imp__sub_8215B0D0) {
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
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x8215B0F0;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// bne 0x8215b100
	if (!ctx.cr0.eq) goto loc_8215B100;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8215B100:
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

__attribute__((alias("__imp__sub_8215B118"))) PPC_WEAK_FUNC(sub_8215B118);
PPC_FUNC_IMPL(__imp__sub_8215B118) {
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
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x8215B138;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215b148
	if (ctx.cr0.eq) goto loc_8215B148;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8215b154
	goto loc_8215B154;
loc_8215B148:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821561c8
	ctx.lr = 0x8215B150;
	sub_821561C8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8215B154:
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

__attribute__((alias("__imp__sub_8215B16C"))) PPC_WEAK_FUNC(sub_8215B16C);
PPC_FUNC_IMPL(__imp__sub_8215B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B170"))) PPC_WEAK_FUNC(sub_8215B170);
PPC_FUNC_IMPL(__imp__sub_8215B170) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B19C;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b1b0
	if (ctx.cr6.eq) goto loc_8215B1B0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b1f8
	if (!ctx.cr6.eq) goto loc_8215B1F8;
	// b 0x8215b1f0
	goto loc_8215B1F0;
loc_8215B1B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1BC;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b1e4
	if (ctx.cr6.eq) goto loc_8215B1E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1D0;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b1e4
	if (ctx.cr6.eq) goto loc_8215B1E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1E4;
	sub_822228B8(ctx, base);
loc_8215B1E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B1F0;
	sub_822228B8(ctx, base);
loc_8215B1F0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B1F8:
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

__attribute__((alias("__imp__sub_8215B210"))) PPC_WEAK_FUNC(sub_8215B210);
PPC_FUNC_IMPL(__imp__sub_8215B210) {
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
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x8215B230;
	sub_82220D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215b240
	if (ctx.cr0.eq) goto loc_8215B240;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8215b288
	goto loc_8215B288;
loc_8215B240:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215aff8
	ctx.lr = 0x8215B248;
	sub_8215AFF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8215b27c
	if (ctx.cr6.lt) goto loc_8215B27C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8215b27c
	if (ctx.cr6.gt) goto loc_8215B27C;
	// bl 0x82227aa0
	ctx.lr = 0x8215B260;
	sub_82227AA0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215b274
	if (!ctx.cr6.eq) goto loc_8215B274;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8215b288
	goto loc_8215B288;
loc_8215B274:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8215b288
	goto loc_8215B288;
loc_8215B27C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215aee0
	ctx.lr = 0x8215B284;
	sub_8215AEE0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
loc_8215B288:
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

__attribute__((alias("__imp__sub_8215B2A0"))) PPC_WEAK_FUNC(sub_8215B2A0);
PPC_FUNC_IMPL(__imp__sub_8215B2A0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B2CC;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b2e4
	if (ctx.cr6.eq) goto loc_8215B2E4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b32c
	if (!ctx.cr6.eq) goto loc_8215B32C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8215b328
	goto loc_8215B328;
loc_8215B2E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B2F0;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b318
	if (ctx.cr6.eq) goto loc_8215B318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B304;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b318
	if (ctx.cr6.eq) goto loc_8215B318;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B318;
	sub_822228B8(ctx, base);
loc_8215B318:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B324;
	sub_822228B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215B328:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B32C:
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

__attribute__((alias("__imp__sub_8215B344"))) PPC_WEAK_FUNC(sub_8215B344);
PPC_FUNC_IMPL(__imp__sub_8215B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B348"))) PPC_WEAK_FUNC(sub_8215B348);
PPC_FUNC_IMPL(__imp__sub_8215B348) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B374;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b38c
	if (ctx.cr6.eq) goto loc_8215B38C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b3d4
	if (!ctx.cr6.eq) goto loc_8215B3D4;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8215b3d0
	goto loc_8215B3D0;
loc_8215B38C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B398;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b3c0
	if (ctx.cr6.eq) goto loc_8215B3C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B3AC;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b3c0
	if (ctx.cr6.eq) goto loc_8215B3C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B3C0;
	sub_822228B8(ctx, base);
loc_8215B3C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B3CC;
	sub_822228B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215B3D0:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B3D4:
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

__attribute__((alias("__imp__sub_8215B3EC"))) PPC_WEAK_FUNC(sub_8215B3EC);
PPC_FUNC_IMPL(__imp__sub_8215B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B3F0"))) PPC_WEAK_FUNC(sub_8215B3F0);
PPC_FUNC_IMPL(__imp__sub_8215B3F0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x8215B41C;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b434
	if (ctx.cr6.eq) goto loc_8215B434;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8215b47c
	if (!ctx.cr6.eq) goto loc_8215B47C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8215b478
	goto loc_8215B478;
loc_8215B434:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B440;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8215b468
	if (ctx.cr6.eq) goto loc_8215B468;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B454;
	sub_822228B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215b468
	if (ctx.cr6.eq) goto loc_8215B468;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B468;
	sub_822228B8(ctx, base);
loc_8215B468:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822228b8
	ctx.lr = 0x8215B474;
	sub_822228B8(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
loc_8215B478:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8215B47C:
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

__attribute__((alias("__imp__sub_8215B494"))) PPC_WEAK_FUNC(sub_8215B494);
PPC_FUNC_IMPL(__imp__sub_8215B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B498"))) PPC_WEAK_FUNC(sub_8215B498);
PPC_FUNC_IMPL(__imp__sub_8215B498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-24016
	ctx.r12.s64 = ctx.r12.s64 + -24016;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// nop 
	// addi r12,r12,-19248
	ctx.r12.s64 = ctx.r12.s64 + -19248;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8215B4D0"))) PPC_WEAK_FUNC(sub_8215B4D0);
PPC_FUNC_IMPL(__imp__sub_8215B4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b0d0
	sub_8215B0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4D4"))) PPC_WEAK_FUNC(sub_8215B4D4);
PPC_FUNC_IMPL(__imp__sub_8215B4D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b118
	sub_8215B118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4D8"))) PPC_WEAK_FUNC(sub_8215B4D8);
PPC_FUNC_IMPL(__imp__sub_8215B4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b170
	sub_8215B170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4DC"))) PPC_WEAK_FUNC(sub_8215B4DC);
PPC_FUNC_IMPL(__imp__sub_8215B4DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b210
	sub_8215B210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4E0"))) PPC_WEAK_FUNC(sub_8215B4E0);
PPC_FUNC_IMPL(__imp__sub_8215B4E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215ad40
	sub_8215AD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4E4"))) PPC_WEAK_FUNC(sub_8215B4E4);
PPC_FUNC_IMPL(__imp__sub_8215B4E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b2a0
	sub_8215B2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4E8"))) PPC_WEAK_FUNC(sub_8215B4E8);
PPC_FUNC_IMPL(__imp__sub_8215B4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215ad90
	sub_8215AD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4EC"))) PPC_WEAK_FUNC(sub_8215B4EC);
PPC_FUNC_IMPL(__imp__sub_8215B4EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b348
	sub_8215B348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4F0"))) PPC_WEAK_FUNC(sub_8215B4F0);
PPC_FUNC_IMPL(__imp__sub_8215B4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215ade0
	sub_8215ADE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4F4"))) PPC_WEAK_FUNC(sub_8215B4F4);
PPC_FUNC_IMPL(__imp__sub_8215B4F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8215b3f0
	sub_8215B3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215B4F8"))) PPC_WEAK_FUNC(sub_8215B4F8);
PPC_FUNC_IMPL(__imp__sub_8215B4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B4FC"))) PPC_WEAK_FUNC(sub_8215B4FC);
PPC_FUNC_IMPL(__imp__sub_8215B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B500"))) PPC_WEAK_FUNC(sub_8215B500);
PPC_FUNC_IMPL(__imp__sub_8215B500) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B520"))) PPC_WEAK_FUNC(sub_8215B520);
PPC_FUNC_IMPL(__imp__sub_8215B520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B528;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82155f00
	ctx.lr = 0x8215B54C;
	sub_82155F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82155f00
	ctx.lr = 0x8215B558;
	sub_82155F00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b588
	if (!ctx.cr6.eq) goto loc_8215B588;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82155f00
	ctx.lr = 0x8215B57C;
	sub_82155F00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82155f00
	ctx.lr = 0x8215B588;
	sub_82155F00(ctx, base);
loc_8215B588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215B590"))) PPC_WEAK_FUNC(sub_8215B590);
PPC_FUNC_IMPL(__imp__sub_8215B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B598;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5BC;
	sub_82155FC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5C8;
	sub_82155FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b5f8
	if (!ctx.cr6.eq) goto loc_8215B5F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5EC;
	sub_82155FC8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82155fc8
	ctx.lr = 0x8215B5F8;
	sub_82155FC8(ctx, base);
loc_8215B5F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215B600"))) PPC_WEAK_FUNC(sub_8215B600);
PPC_FUNC_IMPL(__imp__sub_8215B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B608;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82156020
	ctx.lr = 0x8215B62C;
	sub_82156020(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82156020
	ctx.lr = 0x8215B638;
	sub_82156020(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b668
	if (!ctx.cr6.eq) goto loc_8215B668;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82156020
	ctx.lr = 0x8215B65C;
	sub_82156020(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82156020
	ctx.lr = 0x8215B668;
	sub_82156020(ctx, base);
loc_8215B668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215B670"))) PPC_WEAK_FUNC(sub_8215B670);
PPC_FUNC_IMPL(__imp__sub_8215B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B678;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82156078
	ctx.lr = 0x8215B69C;
	sub_82156078(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// bl 0x82156078
	ctx.lr = 0x8215B6A8;
	sub_82156078(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215b6d8
	if (!ctx.cr6.eq) goto loc_8215B6D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82156078
	ctx.lr = 0x8215B6CC;
	sub_82156078(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82156078
	ctx.lr = 0x8215B6D8;
	sub_82156078(ctx, base);
loc_8215B6D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215B6E0"))) PPC_WEAK_FUNC(sub_8215B6E0);
PPC_FUNC_IMPL(__imp__sub_8215B6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215B6E8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8215b708
	if (!ctx.cr6.lt) goto loc_8215B708;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8215b714
	goto loc_8215B714;
loc_8215B708:
	// cmpwi cr6,r30,1260
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1260, ctx.xer);
	// ble cr6,0x8215b714
	if (!ctx.cr6.gt) goto loc_8215B714;
	// li r30,1260
	ctx.r30.s64 = 1260;
loc_8215B714:
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r25,r28,8
	ctx.r25.s64 = ctx.r28.s64 + 8;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82229288
	ctx.lr = 0x8215B734;
	sub_82229288(ctx, base);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// ori r31,r11,38527
	ctx.r31.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8215b74c
	if (ctx.cr6.lt) goto loc_8215B74C;
	// subf r29,r3,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_8215B74C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8215b75c
	if (!ctx.cr6.lt) goto loc_8215B75C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8215b768
	goto loc_8215B768;
loc_8215B75C:
	// cmpwi cr6,r29,1260
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1260, ctx.xer);
	// ble cr6,0x8215b768
	if (!ctx.cr6.gt) goto loc_8215B768;
	// li r29,1260
	ctx.r29.s64 = 1260;
loc_8215B768:
	// mulli r11,r26,72
	ctx.r11.s64 = ctx.r26.s64 * 72;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,296
	ctx.r3.s64 = ctx.r27.s64 + 296;
	// bl 0x82155f58
	ctx.lr = 0x8215B77C;
	sub_82155F58(ctx, base);
	// addi r28,r28,152
	ctx.r28.s64 = ctx.r28.s64 + 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x8215B790;
	sub_82229288(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8215b7a0
	if (ctx.cr6.lt) goto loc_8215B7A0;
	// subf r29,r3,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_8215B7A0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8215b7b0
	if (!ctx.cr6.lt) goto loc_8215B7B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8215b7bc
	goto loc_8215B7BC;
loc_8215B7B0:
	// cmpwi cr6,r29,1260
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1260, ctx.xer);
	// ble cr6,0x8215b7bc
	if (!ctx.cr6.gt) goto loc_8215B7BC;
	// li r29,1260
	ctx.r29.s64 = 1260;
loc_8215B7BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,440
	ctx.r3.s64 = ctx.r27.s64 + 440;
	// bl 0x82155f58
	ctx.lr = 0x8215B7C8;
	sub_82155F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82155f58
	ctx.lr = 0x8215B7D4;
	sub_82155F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82155f58
	ctx.lr = 0x8215B7E0;
	sub_82155F58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8215B7E8"))) PPC_WEAK_FUNC(sub_8215B7E8);
PPC_FUNC_IMPL(__imp__sub_8215B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215B7F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82156448
	ctx.lr = 0x8215B810;
	sub_82156448(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82156448
	ctx.lr = 0x8215B818;
	sub_82156448(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x82156448
	ctx.lr = 0x8215B82C;
	sub_82156448(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x82156448
	ctx.lr = 0x8215B834;
	sub_82156448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215B83C"))) PPC_WEAK_FUNC(sub_8215B83C);
PPC_FUNC_IMPL(__imp__sub_8215B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B840"))) PPC_WEAK_FUNC(sub_8215B840);
PPC_FUNC_IMPL(__imp__sub_8215B840) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8215b870
	if (ctx.cr0.eq) goto loc_8215B870;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215B870;
	sub_82183E40(ctx, base);
loc_8215B870:
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

__attribute__((alias("__imp__sub_8215B888"))) PPC_WEAK_FUNC(sub_8215B888);
PPC_FUNC_IMPL(__imp__sub_8215B888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-24000
	ctx.r9.s64 = ctx.r10.s64 + -24000;
	// addi r10,r3,632
	ctx.r10.s64 = ctx.r3.s64 + 632;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
loc_8215B8A8:
	// stwu r11,-24(r10)
	ea = -24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8A8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 + 144;
	// addi r9,r11,440
	ctx.r9.s64 = ctx.r11.s64 + 440;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r10,-14444
	ctx.r8.s64 = ctx.r10.s64 + -14444;
loc_8215B8C8:
	// stwu r8,-72(r9)
	ea = -72 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8215b8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8C8;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,296
	ctx.r10.s64 = ctx.r11.s64 + 296;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8215B8DC:
	// stwu r8,-72(r10)
	ea = -72 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8DC;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8215B8F0:
	// stwu r8,-72(r10)
	ea = -72 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215b8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B8F0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215B904:
	// stwu r8,-72(r11)
	ea = -72 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215b904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215B910"))) PPC_WEAK_FUNC(sub_8215B910);
PPC_FUNC_IMPL(__imp__sub_8215B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8215B918;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215b9c0
	if (ctx.cr6.eq) goto loc_8215B9C0;
	// bl 0x82227aa0
	ctx.lr = 0x8215B934;
	sub_82227AA0(ctx, base);
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8215b9c0
	if (ctx.cr6.eq) goto loc_8215B9C0;
	// addi r29,r30,584
	ctx.r29.s64 = ctx.r30.s64 + 584;
	// addi r30,r30,296
	ctx.r30.s64 = ctx.r30.s64 + 296;
loc_8215B94C:
	// addi r28,r30,-144
	ctx.r28.s64 = ctx.r30.s64 + -144;
	// bl 0x82227aa0
	ctx.lr = 0x8215B954;
	sub_82227AA0(ctx, base);
	// addi r5,r28,-144
	ctx.r5.s64 = ctx.r28.s64 + -144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228888
	ctx.lr = 0x8215B960;
	sub_82228888(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8215B964;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82228928
	ctx.lr = 0x8215B970;
	sub_82228928(ctx, base);
	// bl 0x82227aa0
	ctx.lr = 0x8215B974;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82228888
	ctx.lr = 0x8215B980;
	sub_82228888(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228ae0
	ctx.lr = 0x8215B988;
	sub_82228AE0(ctx, base);
	// addi r28,r30,144
	ctx.r28.s64 = ctx.r30.s64 + 144;
	// bl 0x82227aa0
	ctx.lr = 0x8215B990;
	sub_82227AA0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228928
	ctx.lr = 0x8215B99C;
	sub_82228928(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82228ae0
	ctx.lr = 0x8215B9A4;
	sub_82228AE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229238
	ctx.lr = 0x8215B9AC;
	sub_82229238(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8215b94c
	if (ctx.cr6.lt) goto loc_8215B94C;
loc_8215B9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8215B9CC"))) PPC_WEAK_FUNC(sub_8215B9CC);
PPC_FUNC_IMPL(__imp__sub_8215B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215B9D0"))) PPC_WEAK_FUNC(sub_8215B9D0);
PPC_FUNC_IMPL(__imp__sub_8215B9D0) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8215ba2c
	if (!ctx.cr6.lt) goto loc_8215BA2C;
	// addi r9,r4,25
	ctx.r9.s64 = ctx.r4.s64 + 25;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// stdx r5,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r31,r11,584
	ctx.r31.s64 = ctx.r11.s64 + 584;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x8215BA1C;
	sub_82229278(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x8215BA2C;
	sub_82229278(ctx, base);
loc_8215BA2C:
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

__attribute__((alias("__imp__sub_8215BA44"))) PPC_WEAK_FUNC(sub_8215BA44);
PPC_FUNC_IMPL(__imp__sub_8215BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BA48"))) PPC_WEAK_FUNC(sub_8215BA48);
PPC_FUNC_IMPL(__imp__sub_8215BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215BA50;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x8215BA6C;
	sub_822AA648(ctx, base);
	// mulli r11,r29,72
	ctx.r11.s64 = ctx.r29.s64 * 72;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82155ee8
	ctx.lr = 0x8215BA7C;
	sub_82155EE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8215ba90
	if (ctx.cr6.lt) goto loc_8215BA90;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8215BA90:
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// blt cr6,0x8215baac
	if (ctx.cr6.lt) goto loc_8215BAAC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8215BAAC:
	// cmpwi cr6,r3,50
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 50, ctx.xer);
	// blt cr6,0x8215bac8
	if (ctx.cr6.lt) goto loc_8215BAC8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8215BAC8:
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x8215bae4
	if (ctx.cr6.lt) goto loc_8215BAE4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8215BAE4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x8215bd08
	ctx.lr = 0x8215BAF0;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820e53f8
	ctx.lr = 0x8215BB08;
	sub_820E53F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215BB10"))) PPC_WEAK_FUNC(sub_8215BB10);
PPC_FUNC_IMPL(__imp__sub_8215BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215BB18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24000
	ctx.r11.s64 = ctx.r11.s64 + -24000;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8215BB34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB3C;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb34
	if (!ctx.cr0.lt) goto loc_8215BB34;
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BB50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB58;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb50
	if (!ctx.cr0.lt) goto loc_8215BB50;
	// addi r29,r31,296
	ctx.r29.s64 = ctx.r31.s64 + 296;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BB6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB74;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb6c
	if (!ctx.cr0.lt) goto loc_8215BB6C;
	// addi r29,r31,440
	ctx.r29.s64 = ctx.r31.s64 + 440;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BB88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82228b00
	ctx.lr = 0x8215BB90;
	sub_82228B00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bge 0x8215bb88
	if (!ctx.cr0.lt) goto loc_8215BB88;
	// addi r29,r31,584
	ctx.r29.s64 = ctx.r31.s64 + 584;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215BBA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229298
	ctx.lr = 0x8215BBAC;
	sub_82229298(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bge 0x8215bba4
	if (!ctx.cr0.lt) goto loc_8215BBA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215b910
	ctx.lr = 0x8215BBC0;
	sub_8215B910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215BBCC"))) PPC_WEAK_FUNC(sub_8215BBCC);
PPC_FUNC_IMPL(__imp__sub_8215BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BBD0"))) PPC_WEAK_FUNC(sub_8215BBD0);
PPC_FUNC_IMPL(__imp__sub_8215BBD0) {
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
	// bl 0x8215b888
	ctx.lr = 0x8215BBE8;
	sub_8215B888(ctx, base);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215bbf8
	if (ctx.cr0.eq) goto loc_8215BBF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215BBF8;
	sub_82183E40(ctx, base);
loc_8215BBF8:
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

__attribute__((alias("__imp__sub_8215BC10"))) PPC_WEAK_FUNC(sub_8215BC10);
PPC_FUNC_IMPL(__imp__sub_8215BC10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8215bc78
	if (!ctx.cr6.eq) goto loc_8215BC78;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8215bc68
	if (ctx.cr6.eq) goto loc_8215BC68;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8215bc58
	if (ctx.cr6.eq) goto loc_8215BC58;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r10,-744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 + 584;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82225278
	sub_82225278(ctx, base);
	return;
loc_8215BC58:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,440
	ctx.r4.s64 = ctx.r11.s64 + 440;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
loc_8215BC68:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
loc_8215BC78:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8215bc9c
	if (ctx.cr6.lt) goto loc_8215BC9C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mulli r10,r5,72
	ctx.r10.s64 = ctx.r5.s64 * 72;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,152
	ctx.r4.s64 = ctx.r11.s64 + 152;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
loc_8215BC9C:
	// mulli r10,r5,72
	ctx.r10.s64 = ctx.r5.s64 * 72;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82156178
	sub_82156178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BCB4"))) PPC_WEAK_FUNC(sub_8215BCB4);
PPC_FUNC_IMPL(__imp__sub_8215BCB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BCB8"))) PPC_WEAK_FUNC(sub_8215BCB8);
PPC_FUNC_IMPL(__imp__sub_8215BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215BCC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x8215bd00
	if (!ctx.cr6.lt) goto loc_8215BD00;
	// mulli r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 * 72;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x82156320
	ctx.lr = 0x8215BCE8;
	sub_82156320(ctx, base);
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82156320
	ctx.lr = 0x8215BCF4;
	sub_82156320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215ba48
	ctx.lr = 0x8215BD00;
	sub_8215BA48(ctx, base);
loc_8215BD00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215BD08"))) PPC_WEAK_FUNC(sub_8215BD08);
PPC_FUNC_IMPL(__imp__sub_8215BD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD14"))) PPC_WEAK_FUNC(sub_8215BD14);
PPC_FUNC_IMPL(__imp__sub_8215BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BD18"))) PPC_WEAK_FUNC(sub_8215BD18);
PPC_FUNC_IMPL(__imp__sub_8215BD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD28"))) PPC_WEAK_FUNC(sub_8215BD28);
PPC_FUNC_IMPL(__imp__sub_8215BD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// b 0x82162448
	sub_82162448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BD3C"))) PPC_WEAK_FUNC(sub_8215BD3C);
PPC_FUNC_IMPL(__imp__sub_8215BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BD40"))) PPC_WEAK_FUNC(sub_8215BD40);
PPC_FUNC_IMPL(__imp__sub_8215BD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,27424
	ctx.r3.s64 = ctx.r11.s64 + 27424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD50"))) PPC_WEAK_FUNC(sub_8215BD50);
PPC_FUNC_IMPL(__imp__sub_8215BD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,29800
	ctx.r3.s64 = ctx.r11.s64 + 29800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD60"))) PPC_WEAK_FUNC(sub_8215BD60);
PPC_FUNC_IMPL(__imp__sub_8215BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BD70"))) PPC_WEAK_FUNC(sub_8215BD70);
PPC_FUNC_IMPL(__imp__sub_8215BD70) {
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
	// bl 0x82183078
	ctx.lr = 0x8215BD88;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215BD94;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215BD98;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215bdb0
	if (ctx.cr6.eq) goto loc_8215BDB0;
	// li r3,29864
	ctx.r3.s64 = 29864;
	// bl 0x82183448
	ctx.lr = 0x8215BDAC;
	sub_82183448(ctx, base);
	// b 0x8215bdb8
	goto loc_8215BDB8;
loc_8215BDB0:
	// li r3,1867
	ctx.r3.s64 = 1867;
	// bl 0x821845a0
	ctx.lr = 0x8215BDB8;
	sub_821845A0(ctx, base);
loc_8215BDB8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215bdf4
	if (ctx.cr6.eq) goto loc_8215BDF4;
	// bl 0x8216cee0
	ctx.lr = 0x8215BDC8;
	sub_8216CEE0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x82162498
	ctx.lr = 0x8215BDD0;
	sub_82162498(ctx, base);
	// addi r3,r31,27424
	ctx.r3.s64 = ctx.r31.s64 + 27424;
	// bl 0x82171648
	ctx.lr = 0x8215BDD8;
	sub_82171648(ctx, base);
	// addi r3,r31,29800
	ctx.r3.s64 = ctx.r31.s64 + 29800;
	// bl 0x8221bae8
	ctx.lr = 0x8215BDE0;
	sub_8221BAE8(ctx, base);
	// addi r3,r31,29808
	ctx.r3.s64 = ctx.r31.s64 + 29808;
	// bl 0x8215cce0
	ctx.lr = 0x8215BDE8;
	sub_8215CCE0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r31,-1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1384, ctx.r31.u32);
	// b 0x8215be00
	goto loc_8215BE00;
loc_8215BDF4:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1384, ctx.r11.u32);
loc_8215BE00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215BE08;
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

__attribute__((alias("__imp__sub_8215BE20"))) PPC_WEAK_FUNC(sub_8215BE20);
PPC_FUNC_IMPL(__imp__sub_8215BE20) {
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
	// lwz r31,-1384(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1384);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215be78
	if (ctx.cr6.eq) goto loc_8215BE78;
	// addi r3,r31,29808
	ctx.r3.s64 = ctx.r31.s64 + 29808;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE4C;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,29800
	ctx.r3.s64 = ctx.r31.s64 + 29800;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE54;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,27424
	ctx.r3.s64 = ctx.r31.s64 + 27424;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE5C;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x821623d8
	ctx.lr = 0x8215BE64;
	sub_821623D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8215BE6C;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215BE78;
	sub_82183E40(ctx, base);
loc_8215BE78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1384(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1384, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215BE98"))) PPC_WEAK_FUNC(sub_8215BE98);
PPC_FUNC_IMPL(__imp__sub_8215BE98) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,468
	ctx.r4.s64 = 468;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r10,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215BEC4"))) PPC_WEAK_FUNC(sub_8215BEC4);
PPC_FUNC_IMPL(__imp__sub_8215BEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BEC8"))) PPC_WEAK_FUNC(sub_8215BEC8);
PPC_FUNC_IMPL(__imp__sub_8215BEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BED4"))) PPC_WEAK_FUNC(sub_8215BED4);
PPC_FUNC_IMPL(__imp__sub_8215BED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BED8"))) PPC_WEAK_FUNC(sub_8215BED8);
PPC_FUNC_IMPL(__imp__sub_8215BED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r11,-1376
	ctx.r10.s64 = ctx.r11.s64 + -1376;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215BEE8"))) PPC_WEAK_FUNC(sub_8215BEE8);
PPC_FUNC_IMPL(__imp__sub_8215BEE8) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215bfa8
	if (ctx.cr6.eq) goto loc_8215BFA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82184800
	ctx.lr = 0x8215BF28;
	sub_82184800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,3708
	ctx.r4.s64 = ctx.r10.s64 + 3708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82248910
	ctx.lr = 0x8215BF3C;
	sub_82248910(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215bfa8
	if (ctx.cr6.eq) goto loc_8215BFA8;
loc_8215BF44:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215bf9c
	if (ctx.cr6.eq) goto loc_8215BF9C;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8215BF5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8215bfc4
	if (!ctx.cr6.eq) goto loc_8215BFC4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215bf8c
	if (ctx.cr6.eq) goto loc_8215BF8C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x8215bf5c
	if (ctx.cr6.lt) goto loc_8215BF5C;
loc_8215BF8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8215BF90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215bfac
	if (!ctx.cr6.eq) goto loc_8215BFAC;
loc_8215BF9C:
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8215bf44
	if (!ctx.cr6.eq) goto loc_8215BF44;
loc_8215BFA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215BFAC:
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
loc_8215BFC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8215bf90
	goto loc_8215BF90;
}

__attribute__((alias("__imp__sub_8215BFCC"))) PPC_WEAK_FUNC(sub_8215BFCC);
PPC_FUNC_IMPL(__imp__sub_8215BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215BFD0"))) PPC_WEAK_FUNC(sub_8215BFD0);
PPC_FUNC_IMPL(__imp__sub_8215BFD0) {
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
	// bl 0x8215bee8
	ctx.lr = 0x8215BFE0;
	sub_8215BEE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215bff8
	if (!ctx.cr6.eq) goto loc_8215BFF8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215BFF8:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C00C"))) PPC_WEAK_FUNC(sub_8215C00C);
PPC_FUNC_IMPL(__imp__sub_8215C00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C010"))) PPC_WEAK_FUNC(sub_8215C010);
PPC_FUNC_IMPL(__imp__sub_8215C010) {
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
	// lwz r3,-684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c03c
	if (ctx.cr6.eq) goto loc_8215C03C;
	// bl 0x8224a858
	ctx.lr = 0x8215C034;
	sub_8224A858(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -684, ctx.r11.u32);
loc_8215C03C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C050"))) PPC_WEAK_FUNC(sub_8215C050);
PPC_FUNC_IMPL(__imp__sub_8215C050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,17
	ctx.r3.s64 = ctx.r3.s64 + 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C058"))) PPC_WEAK_FUNC(sub_8215C058);
PPC_FUNC_IMPL(__imp__sub_8215C058) {
	PPC_FUNC_PROLOGUE();
	// li r3,42
	ctx.r3.s64 = 42;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C060"))) PPC_WEAK_FUNC(sub_8215C060);
PPC_FUNC_IMPL(__imp__sub_8215C060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,29
	ctx.r3.s64 = ctx.r3.s64 + 29;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C068"))) PPC_WEAK_FUNC(sub_8215C068);
PPC_FUNC_IMPL(__imp__sub_8215C068) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C070"))) PPC_WEAK_FUNC(sub_8215C070);
PPC_FUNC_IMPL(__imp__sub_8215C070) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C078"))) PPC_WEAK_FUNC(sub_8215C078);
PPC_FUNC_IMPL(__imp__sub_8215C078) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C080"))) PPC_WEAK_FUNC(sub_8215C080);
PPC_FUNC_IMPL(__imp__sub_8215C080) {
	PPC_FUNC_PROLOGUE();
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C088"))) PPC_WEAK_FUNC(sub_8215C088);
PPC_FUNC_IMPL(__imp__sub_8215C088) {
	PPC_FUNC_PROLOGUE();
	// b 0x82182e90
	sub_82182E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215C08C"))) PPC_WEAK_FUNC(sub_8215C08C);
PPC_FUNC_IMPL(__imp__sub_8215C08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C090"))) PPC_WEAK_FUNC(sub_8215C090);
PPC_FUNC_IMPL(__imp__sub_8215C090) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C098"))) PPC_WEAK_FUNC(sub_8215C098);
PPC_FUNC_IMPL(__imp__sub_8215C098) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0A0"))) PPC_WEAK_FUNC(sub_8215C0A0);
PPC_FUNC_IMPL(__imp__sub_8215C0A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0A8"))) PPC_WEAK_FUNC(sub_8215C0A8);
PPC_FUNC_IMPL(__imp__sub_8215C0A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0B0"))) PPC_WEAK_FUNC(sub_8215C0B0);
PPC_FUNC_IMPL(__imp__sub_8215C0B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0B8"))) PPC_WEAK_FUNC(sub_8215C0B8);
PPC_FUNC_IMPL(__imp__sub_8215C0B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0C0"))) PPC_WEAK_FUNC(sub_8215C0C0);
PPC_FUNC_IMPL(__imp__sub_8215C0C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0C8"))) PPC_WEAK_FUNC(sub_8215C0C8);
PPC_FUNC_IMPL(__imp__sub_8215C0C8) {
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
	// bl 0x82171868
	ctx.lr = 0x8215C0D8;
	sub_82171868(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8209eda0
	ctx.lr = 0x8215C0E0;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C0F0"))) PPC_WEAK_FUNC(sub_8215C0F0);
PPC_FUNC_IMPL(__imp__sub_8215C0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215C0F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822aa648
	ctx.lr = 0x8215C110;
	sub_822AA648(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// ble cr6,0x8215c13c
	if (!ctx.cr6.gt) goto loc_8215C13C;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_8215C128:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// bdnz 0x8215c128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215C128;
loc_8215C13C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215C144"))) PPC_WEAK_FUNC(sub_8215C144);
PPC_FUNC_IMPL(__imp__sub_8215C144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C148"))) PPC_WEAK_FUNC(sub_8215C148);
PPC_FUNC_IMPL(__imp__sub_8215C148) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8209eda0
	ctx.lr = 0x8215C15C;
	sub_8209EDA0(ctx, base);
	// bl 0x82171678
	ctx.lr = 0x8215C160;
	sub_82171678(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23836
	ctx.r4.s64 = ctx.r11.s64 + -23836;
	// bl 0x82183d88
	ctx.lr = 0x8215C170;
	sub_82183D88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,-23844
	ctx.r4.s64 = ctx.r10.s64 + -23844;
	// bl 0x82183d88
	ctx.lr = 0x8215C180;
	sub_82183D88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r9,-23852
	ctx.r4.s64 = ctx.r9.s64 + -23852;
	// bl 0x82183d88
	ctx.lr = 0x8215C190;
	sub_82183D88(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r8,-23860
	ctx.r4.s64 = ctx.r8.s64 + -23860;
	// bl 0x82183d88
	ctx.lr = 0x8215C1A0;
	sub_82183D88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r7,-23868
	ctx.r4.s64 = ctx.r7.s64 + -23868;
	// bl 0x82183d88
	ctx.lr = 0x8215C1B0;
	sub_82183D88(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r4,r6,-23876
	ctx.r4.s64 = ctx.r6.s64 + -23876;
	// bl 0x82183d88
	ctx.lr = 0x8215C1C0;
	sub_82183D88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r5,-23884
	ctx.r4.s64 = ctx.r5.s64 + -23884;
	// bl 0x82183d88
	ctx.lr = 0x8215C1D0;
	sub_82183D88(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r4,-23892
	ctx.r4.s64 = ctx.r4.s64 + -23892;
	// bl 0x82183d88
	ctx.lr = 0x8215C1E0;
	sub_82183D88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r4,r11,-23908
	ctx.r4.s64 = ctx.r11.s64 + -23908;
	// bl 0x82183d88
	ctx.lr = 0x8215C1F0;
	sub_82183D88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r10,-23916
	ctx.r4.s64 = ctx.r10.s64 + -23916;
	// bl 0x82183d88
	ctx.lr = 0x8215C200;
	sub_82183D88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r9,-23924
	ctx.r4.s64 = ctx.r9.s64 + -23924;
	// bl 0x82183d88
	ctx.lr = 0x8215C210;
	sub_82183D88(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r8,-23932
	ctx.r4.s64 = ctx.r8.s64 + -23932;
	// bl 0x82183d88
	ctx.lr = 0x8215C220;
	sub_82183D88(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r4,r7,-23940
	ctx.r4.s64 = ctx.r7.s64 + -23940;
	// bl 0x82183d88
	ctx.lr = 0x8215C230;
	sub_82183D88(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r4,r6,-23948
	ctx.r4.s64 = ctx.r6.s64 + -23948;
	// bl 0x82183d88
	ctx.lr = 0x8215C240;
	sub_82183D88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r4,r5,-23956
	ctx.r4.s64 = ctx.r5.s64 + -23956;
	// bl 0x82183d88
	ctx.lr = 0x8215C250;
	sub_82183D88(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r4,r4,-23964
	ctx.r4.s64 = ctx.r4.s64 + -23964;
	// bl 0x82183d88
	ctx.lr = 0x8215C260;
	sub_82183D88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,42
	ctx.r3.s64 = 42;
	// addi r4,r11,-23972
	ctx.r4.s64 = ctx.r11.s64 + -23972;
	// bl 0x82183d88
	ctx.lr = 0x8215C270;
	sub_82183D88(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r10,-23980
	ctx.r4.s64 = ctx.r10.s64 + -23980;
	// bl 0x82183d88
	ctx.lr = 0x8215C280;
	sub_82183D88(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r9,-23988
	ctx.r4.s64 = ctx.r9.s64 + -23988;
	// bl 0x82183d88
	ctx.lr = 0x8215C290;
	sub_82183D88(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r8,-23996
	ctx.r4.s64 = ctx.r8.s64 + -23996;
	// li r3,47
	ctx.r3.s64 = 47;
	// bl 0x82183d88
	ctx.lr = 0x8215C2A0;
	sub_82183D88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C2B0"))) PPC_WEAK_FUNC(sub_8215C2B0);
PPC_FUNC_IMPL(__imp__sub_8215C2B0) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c2e8
	if (ctx.cr6.eq) goto loc_8215C2E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C2E8:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// addi r9,r10,-10944
	ctx.r9.s64 = ctx.r10.s64 + -10944;
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215c320
	if (ctx.cr6.eq) goto loc_8215C320;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
loc_8215C320:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-680
	ctx.r8.s64 = ctx.r10.s64 + -680;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8215C348"))) PPC_WEAK_FUNC(sub_8215C348);
PPC_FUNC_IMPL(__imp__sub_8215C348) {
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
	ctx.lr = 0x8215C358;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c370
	if (ctx.cr6.eq) goto loc_8215C370;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215C36C;
	sub_82183448(ctx, base);
	// b 0x8215c378
	goto loc_8215C378;
loc_8215C370:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215C378;
	sub_821845A0(ctx, base);
loc_8215C378:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c39c
	if (ctx.cr6.eq) goto loc_8215C39C;
	// bl 0x82174fd8
	ctx.lr = 0x8215C384;
	sub_82174FD8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215C39C:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15480, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C3B8"))) PPC_WEAK_FUNC(sub_8215C3B8);
PPC_FUNC_IMPL(__imp__sub_8215C3B8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-23808
	ctx.r5.s64 = ctx.r11.s64 + -23808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218cb30
	ctx.lr = 0x8215C3DC;
	sub_8218CB30(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r8,r10,-23832
	ctx.r8.s64 = ctx.r10.s64 + -23832;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// lwz r11,-612(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215c410
	if (!ctx.cr6.eq) goto loc_8215C410;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,-680
	ctx.r3.s64 = ctx.r11.s64 + -680;
	// bl 0x822aa648
	ctx.lr = 0x8215C410;
	sub_822AA648(ctx, base);
loc_8215C410:
	// bl 0x8215c348
	ctx.lr = 0x8215C414;
	sub_8215C348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215c2b0
	ctx.lr = 0x8215C41C;
	sub_8215C2B0(ctx, base);
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

__attribute__((alias("__imp__sub_8215C434"))) PPC_WEAK_FUNC(sub_8215C434);
PPC_FUNC_IMPL(__imp__sub_8215C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C438"))) PPC_WEAK_FUNC(sub_8215C438);
PPC_FUNC_IMPL(__imp__sub_8215C438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215C440;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c46c
	if (ctx.cr6.eq) goto loc_8215C46C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215c544
	if (ctx.cr6.eq) goto loc_8215C544;
loc_8215C46C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// addi r26,r10,-680
	ctx.r26.s64 = ctx.r10.s64 + -680;
	// addi r28,r11,-10944
	ctx.r28.s64 = ctx.r11.s64 + -10944;
loc_8215C488:
	// bl 0x82182e90
	ctx.lr = 0x8215C48C;
	sub_82182E90(ctx, base);
	// bl 0x821837d0
	ctx.lr = 0x8215C490;
	sub_821837D0(ctx, base);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x8215c4c8
	if (ctx.cr6.eq) goto loc_8215C4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215c4c8
	if (!ctx.cr6.eq) goto loc_8215C4C8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8215c4cc
	goto loc_8215C4CC;
loc_8215C4C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8215C4CC:
	// stw r11,-612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -612, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c4ec
	if (ctx.cr6.eq) goto loc_8215C4EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215C4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8215c544
	if (ctx.cr6.eq) goto loc_8215C544;
loc_8215C4EC:
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c50c
	if (ctx.cr6.eq) goto loc_8215C50C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C50C:
	// stw r27,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r27.u32);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215c534
	if (ctx.cr6.eq) goto loc_8215C534;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// lwz r11,-612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -612);
loc_8215C534:
	// stbx r25,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r25.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c488
	if (ctx.cr6.eq) goto loc_8215C488;
loc_8215C544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8215C54C"))) PPC_WEAK_FUNC(sub_8215C54C);
PPC_FUNC_IMPL(__imp__sub_8215C54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C550"))) PPC_WEAK_FUNC(sub_8215C550);
PPC_FUNC_IMPL(__imp__sub_8215C550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215C558;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-23832
	ctx.r10.s64 = ctx.r11.s64 + -23832;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8215c58c
	if (ctx.cr6.eq) goto loc_8215C58C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215C58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215C58C:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r29,15480(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15480);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8215c5b8
	if (ctx.cr6.eq) goto loc_8215C5B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82144a70
	ctx.lr = 0x8215C5AC;
	sub_82144A70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215C5B8;
	sub_82183E40(ctx, base);
loc_8215C5B8:
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15480, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,-616(r9)
	PPC_STORE_U32(ctx.r9.u32 + -616, ctx.r10.u32);
	// bl 0x8218cc18
	ctx.lr = 0x8215C5D4;
	sub_8218CC18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215C5DC"))) PPC_WEAK_FUNC(sub_8215C5DC);
PPC_FUNC_IMPL(__imp__sub_8215C5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C5E0"))) PPC_WEAK_FUNC(sub_8215C5E0);
PPC_FUNC_IMPL(__imp__sub_8215C5E0) {
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
	// bl 0x8215c550
	ctx.lr = 0x8215C600;
	sub_8215C550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c61c
	if (ctx.cr6.eq) goto loc_8215C61C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215C618;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215C61C:
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

__attribute__((alias("__imp__sub_8215C634"))) PPC_WEAK_FUNC(sub_8215C634);
PPC_FUNC_IMPL(__imp__sub_8215C634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C638"))) PPC_WEAK_FUNC(sub_8215C638);
PPC_FUNC_IMPL(__imp__sub_8215C638) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C64C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C650;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c668
	if (ctx.cr6.eq) goto loc_8215C668;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215C664;
	sub_82183448(ctx, base);
	// b 0x8215c670
	goto loc_8215C670;
loc_8215C668:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215C670;
	sub_821845A0(ctx, base);
loc_8215C670:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c688
	if (ctx.cr6.eq) goto loc_8215C688;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-31176
	ctx.r5.s64 = ctx.r11.s64 + -31176;
	// bl 0x82085930
	ctx.lr = 0x8215C688;
	sub_82085930(ctx, base);
loc_8215C688:
	// bl 0x8215bd60
	ctx.lr = 0x8215C68C;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215c6ac
	if (!ctx.cr6.eq) goto loc_8215C6AC;
	// bl 0x82181040
	ctx.lr = 0x8215C69C;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c6ac
	if (ctx.cr6.eq) goto loc_8215C6AC;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82181370
	ctx.lr = 0x8215C6AC;
	sub_82181370(ctx, base);
loc_8215C6AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C6BC"))) PPC_WEAK_FUNC(sub_8215C6BC);
PPC_FUNC_IMPL(__imp__sub_8215C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C6C0"))) PPC_WEAK_FUNC(sub_8215C6C0);
PPC_FUNC_IMPL(__imp__sub_8215C6C0) {
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
	// bl 0x82183078
	ctx.lr = 0x8215C6D4;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C6E0;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C6E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c6fc
	if (ctx.cr6.eq) goto loc_8215C6FC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215C6F8;
	sub_82183448(ctx, base);
	// b 0x8215c704
	goto loc_8215C704;
loc_8215C6FC:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215C704;
	sub_821845A0(ctx, base);
loc_8215C704:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c71c
	if (ctx.cr6.eq) goto loc_8215C71C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,22480
	ctx.r5.s64 = ctx.r11.s64 + 22480;
	// bl 0x82085930
	ctx.lr = 0x8215C71C;
	sub_82085930(ctx, base);
loc_8215C71C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215C724;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C738"))) PPC_WEAK_FUNC(sub_8215C738);
PPC_FUNC_IMPL(__imp__sub_8215C738) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C750;
	sub_821837D0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215C754;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C760;
	sub_821837D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x8215C76C;
	sub_82221280(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C770;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c78c
	if (ctx.cr6.eq) goto loc_8215C78C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82183448
	ctx.lr = 0x8215C788;
	sub_82183448(ctx, base);
	// b 0x8215c794
	goto loc_8215C794;
loc_8215C78C:
	// li r3,2061
	ctx.r3.s64 = 2061;
	// bl 0x821845a0
	ctx.lr = 0x8215C794;
	sub_821845A0(ctx, base);
loc_8215C794:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c7a8
	if (ctx.cr6.eq) goto loc_8215C7A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821fe658
	ctx.lr = 0x8215C7A8;
	sub_821FE658(ctx, base);
loc_8215C7A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215C7B0;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C7C4"))) PPC_WEAK_FUNC(sub_8215C7C4);
PPC_FUNC_IMPL(__imp__sub_8215C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C7C8"))) PPC_WEAK_FUNC(sub_8215C7C8);
PPC_FUNC_IMPL(__imp__sub_8215C7C8) {
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
	ctx.lr = 0x8215C7D8;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c800
	if (ctx.cr6.eq) goto loc_8215C800;
	// bl 0x8215bec8
	ctx.lr = 0x8215C7E8;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C7F4;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C7F8;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C800;
	sub_821837D0(ctx, base);
loc_8215C800:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C810"))) PPC_WEAK_FUNC(sub_8215C810);
PPC_FUNC_IMPL(__imp__sub_8215C810) {
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
	ctx.lr = 0x8215C820;
	sub_8215BEC8(ctx, base);
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// bl 0x8215bec8
	ctx.lr = 0x8215C828;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c850
	if (ctx.cr6.eq) goto loc_8215C850;
	// bl 0x8215bec8
	ctx.lr = 0x8215C838;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C844;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C848;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C850;
	sub_821837D0(ctx, base);
loc_8215C850:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215C85C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c870
	if (ctx.cr6.eq) goto loc_8215C870;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215C870;
	sub_821FE658(ctx, base);
loc_8215C870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C880"))) PPC_WEAK_FUNC(sub_8215C880);
PPC_FUNC_IMPL(__imp__sub_8215C880) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C894;
	sub_821837D0(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8215C898;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c8c0
	if (ctx.cr6.eq) goto loc_8215C8C0;
	// bl 0x8215bec8
	ctx.lr = 0x8215C8A8;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C8B4;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C8B8;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C8C0;
	sub_821837D0(ctx, base);
loc_8215C8C0:
	// bl 0x82183850
	ctx.lr = 0x8215C8C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c8e0
	if (ctx.cr6.eq) goto loc_8215C8E0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82183448
	ctx.lr = 0x8215C8DC;
	sub_82183448(ctx, base);
	// b 0x8215c8e8
	goto loc_8215C8E8;
loc_8215C8E0:
	// li r3,2061
	ctx.r3.s64 = 2061;
	// bl 0x821845a0
	ctx.lr = 0x8215C8E8;
	sub_821845A0(ctx, base);
loc_8215C8E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c8fc
	if (ctx.cr6.eq) goto loc_8215C8FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215C8FC;
	sub_821FE658(ctx, base);
loc_8215C8FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C90C"))) PPC_WEAK_FUNC(sub_8215C90C);
PPC_FUNC_IMPL(__imp__sub_8215C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215C910"))) PPC_WEAK_FUNC(sub_8215C910);
PPC_FUNC_IMPL(__imp__sub_8215C910) {
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
	// lwz r3,-468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c934
	if (ctx.cr6.eq) goto loc_8215C934;
	// bl 0x8215f4e8
	ctx.lr = 0x8215C934;
	sub_8215F4E8(ctx, base);
loc_8215C934:
	// bl 0x8215bec8
	ctx.lr = 0x8215C938;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215c960
	if (ctx.cr6.eq) goto loc_8215C960;
	// bl 0x8215bec8
	ctx.lr = 0x8215C948;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215C954;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215C958;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C960;
	sub_821837D0(ctx, base);
loc_8215C960:
	// bl 0x8208f948
	ctx.lr = 0x8215C964;
	sub_8208F948(ctx, base);
	// bl 0x82181040
	ctx.lr = 0x8215C968;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c978
	if (ctx.cr6.eq) goto loc_8215C978;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215C978;
	sub_82181370(ctx, base);
loc_8215C978:
	// bl 0x82183078
	ctx.lr = 0x8215C97C;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C988;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215C98C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215c9a4
	if (ctx.cr6.eq) goto loc_8215C9A4;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215C9A0;
	sub_82183448(ctx, base);
	// b 0x8215c9ac
	goto loc_8215C9AC;
loc_8215C9A4:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215C9AC;
	sub_821845A0(ctx, base);
loc_8215C9AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215c9c4
	if (ctx.cr6.eq) goto loc_8215C9C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r5,r11,22712
	ctx.r5.s64 = ctx.r11.s64 + 22712;
	// bl 0x82085930
	ctx.lr = 0x8215C9C4;
	sub_82085930(ctx, base);
loc_8215C9C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215C9CC;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215C9E0"))) PPC_WEAK_FUNC(sub_8215C9E0);
PPC_FUNC_IMPL(__imp__sub_8215C9E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215C9F4;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8215C9F8;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215ca24
	if (ctx.cr6.eq) goto loc_8215CA24;
	// bl 0x82163ee8
	ctx.lr = 0x8215CA08;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c910
	ctx.lr = 0x8215CA14;
	sub_8215C910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215CA24:
	// bl 0x8215bec8
	ctx.lr = 0x8215CA28;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8215cad8
	if (ctx.cr6.gt) goto loc_8215CAD8;
	// lis r12,-32234
	ctx.r12.s64 = -2112487424;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13748
	ctx.r12.s64 = ctx.r12.s64 + -13748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-13692(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13692);
	// lwz r16,-13692(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13692);
	// lwz r16,-13692(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13692);
	// lwz r16,-13692(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13692);
	// lwz r16,-13608(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13608);
	// lwz r16,-13608(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13608);
	// lwz r16,-13608(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13608);
	// lwz r16,-13608(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13608);
	// lwz r16,-13612(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13612);
	// lwz r16,-13608(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13608);
	// lwz r16,-13640(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13640);
	// lwz r16,-13608(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13608);
	// lwz r16,-13684(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13684);
	// lwz r16,-13684(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + -13684);
	// bl 0x8215c810
	ctx.lr = 0x8215CA88;
	sub_8215C810(ctx, base);
	// b 0x8215cad8
	goto loc_8215CAD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c7c8
	ctx.lr = 0x8215CA94;
	sub_8215C7C8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215CAA0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cad8
	if (ctx.cr6.eq) goto loc_8215CAD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215CAB4;
	sub_821FE658(ctx, base);
	// b 0x8215cad8
	goto loc_8215CAD8;
	// bl 0x82175710
	ctx.lr = 0x8215CABC;
	sub_82175710(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82080000
	ctx.lr = 0x8215CAC4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cad8
	if (ctx.cr6.eq) goto loc_8215CAD8;
	// bl 0x82175748
	ctx.lr = 0x8215CAD0;
	sub_82175748(ctx, base);
	// b 0x8215cad8
	goto loc_8215CAD8;
	// bl 0x82085690
	ctx.lr = 0x8215CAD8;
	sub_82085690(ctx, base);
loc_8215CAD8:
	// bl 0x8215bec8
	ctx.lr = 0x8215CADC;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215cb0c
	if (ctx.cr6.eq) goto loc_8215CB0C;
	// bl 0x8208f8e8
	ctx.lr = 0x8215CAEC;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215caf8
	if (!ctx.cr6.eq) goto loc_8215CAF8;
	// bl 0x8208f948
	ctx.lr = 0x8215CAF8;
	sub_8208F948(ctx, base);
loc_8215CAF8:
	// bl 0x82181040
	ctx.lr = 0x8215CAFC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cb0c
	if (ctx.cr6.eq) goto loc_8215CB0C;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215CB0C;
	sub_82181370(ctx, base);
loc_8215CB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CB1C"))) PPC_WEAK_FUNC(sub_8215CB1C);
PPC_FUNC_IMPL(__imp__sub_8215CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CB20"))) PPC_WEAK_FUNC(sub_8215CB20);
PPC_FUNC_IMPL(__imp__sub_8215CB20) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CB34;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8215CB38;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215cb64
	if (ctx.cr6.eq) goto loc_8215CB64;
	// bl 0x82163ee8
	ctx.lr = 0x8215CB48;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c910
	ctx.lr = 0x8215CB54;
	sub_8215C910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215CB64:
	// bl 0x8215bec8
	ctx.lr = 0x8215CB68;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215cb90
	if (ctx.cr6.eq) goto loc_8215CB90;
	// bl 0x8215bec8
	ctx.lr = 0x8215CB78;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215CB84;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215CB88;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CB90;
	sub_821837D0(ctx, base);
loc_8215CB90:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215CB9C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cbb0
	if (ctx.cr6.eq) goto loc_8215CBB0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821fe658
	ctx.lr = 0x8215CBB0;
	sub_821FE658(ctx, base);
loc_8215CBB0:
	// bl 0x8215bec8
	ctx.lr = 0x8215CBB4;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215cbe4
	if (ctx.cr6.eq) goto loc_8215CBE4;
	// bl 0x8208f8e8
	ctx.lr = 0x8215CBC4;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215cbd0
	if (!ctx.cr6.eq) goto loc_8215CBD0;
	// bl 0x8208f948
	ctx.lr = 0x8215CBD0;
	sub_8208F948(ctx, base);
loc_8215CBD0:
	// bl 0x82181040
	ctx.lr = 0x8215CBD4;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cbe4
	if (ctx.cr6.eq) goto loc_8215CBE4;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215CBE4;
	sub_82181370(ctx, base);
loc_8215CBE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CBF4"))) PPC_WEAK_FUNC(sub_8215CBF4);
PPC_FUNC_IMPL(__imp__sub_8215CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CBF8"))) PPC_WEAK_FUNC(sub_8215CBF8);
PPC_FUNC_IMPL(__imp__sub_8215CBF8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CC0C;
	sub_821837D0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x8215CC10;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215cc3c
	if (ctx.cr6.eq) goto loc_8215CC3C;
	// bl 0x82163ee8
	ctx.lr = 0x8215CC20;
	sub_82163EE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8215c910
	ctx.lr = 0x8215CC2C;
	sub_8215C910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215CC3C:
	// bl 0x8215bec8
	ctx.lr = 0x8215CC40;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215cc68
	if (ctx.cr6.eq) goto loc_8215CC68;
	// bl 0x8215bec8
	ctx.lr = 0x8215CC50;
	sub_8215BEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r11.u32);
	// bl 0x82189ab8
	ctx.lr = 0x8215CC5C;
	sub_82189AB8(ctx, base);
	// bl 0x8215c0c8
	ctx.lr = 0x8215CC60;
	sub_8215C0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215CC68;
	sub_821837D0(ctx, base);
loc_8215CC68:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215CC70;
	sub_8215BD28(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82230dd8
	ctx.lr = 0x8215CC78;
	sub_82230DD8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32976
	ctx.r3.u64 = ctx.r3.u64 | 32976;
	// bl 0x82080000
	ctx.lr = 0x8215CC84;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cc98
	if (ctx.cr6.eq) goto loc_8215CC98;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821fe658
	ctx.lr = 0x8215CC98;
	sub_821FE658(ctx, base);
loc_8215CC98:
	// bl 0x8215bec8
	ctx.lr = 0x8215CC9C;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8215cccc
	if (ctx.cr6.eq) goto loc_8215CCCC;
	// bl 0x8208f8e8
	ctx.lr = 0x8215CCAC;
	sub_8208F8E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215ccb8
	if (!ctx.cr6.eq) goto loc_8215CCB8;
	// bl 0x8208f948
	ctx.lr = 0x8215CCB8;
	sub_8208F948(ctx, base);
loc_8215CCB8:
	// bl 0x82181040
	ctx.lr = 0x8215CCBC;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cccc
	if (ctx.cr6.eq) goto loc_8215CCCC;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82181370
	ctx.lr = 0x8215CCCC;
	sub_82181370(ctx, base);
loc_8215CCCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CCDC"))) PPC_WEAK_FUNC(sub_8215CCDC);
PPC_FUNC_IMPL(__imp__sub_8215CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CCE0"))) PPC_WEAK_FUNC(sub_8215CCE0);
PPC_FUNC_IMPL(__imp__sub_8215CCE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CD20"))) PPC_WEAK_FUNC(sub_8215CD20);
PPC_FUNC_IMPL(__imp__sub_8215CD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82222f50
	sub_82222F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215CD24"))) PPC_WEAK_FUNC(sub_8215CD24);
PPC_FUNC_IMPL(__imp__sub_8215CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CD28"))) PPC_WEAK_FUNC(sub_8215CD28);
PPC_FUNC_IMPL(__imp__sub_8215CD28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82222f70
	sub_82222F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215CD30"))) PPC_WEAK_FUNC(sub_8215CD30);
PPC_FUNC_IMPL(__imp__sub_8215CD30) {
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
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x8215CD6C;
	sub_822AA648(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8215CD94"))) PPC_WEAK_FUNC(sub_8215CD94);
PPC_FUNC_IMPL(__imp__sub_8215CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CD98"))) PPC_WEAK_FUNC(sub_8215CD98);
PPC_FUNC_IMPL(__imp__sub_8215CD98) {
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
	// bl 0x82163650
	ctx.lr = 0x8215CDA8;
	sub_82163650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215cdc8
	if (ctx.cr6.eq) goto loc_8215CDC8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8215cdcc
	if (!ctx.cr6.eq) goto loc_8215CDCC;
loc_8215CDC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215CDCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CDDC"))) PPC_WEAK_FUNC(sub_8215CDDC);
PPC_FUNC_IMPL(__imp__sub_8215CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CDE0"))) PPC_WEAK_FUNC(sub_8215CDE0);
PPC_FUNC_IMPL(__imp__sub_8215CDE0) {
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
	// bl 0x821855f0
	ctx.lr = 0x8215CDF8;
	sub_821855F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-23784
	ctx.r8.s64 = ctx.r10.s64 + -23784;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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
	// lwz r11,-600(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -600);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215ce44
	if (ctx.cr6.eq) goto loc_8215CE44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215ce44
	if (ctx.cr6.eq) goto loc_8215CE44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8215ce50
	if (!ctx.cr6.eq) goto loc_8215CE50;
loc_8215CE44:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -480, ctx.r11.u32);
loc_8215CE50:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822565c8
	ctx.lr = 0x8215CE58;
	sub_822565C8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8215CE74"))) PPC_WEAK_FUNC(sub_8215CE74);
PPC_FUNC_IMPL(__imp__sub_8215CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CE78"))) PPC_WEAK_FUNC(sub_8215CE78);
PPC_FUNC_IMPL(__imp__sub_8215CE78) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CE90"))) PPC_WEAK_FUNC(sub_8215CE90);
PPC_FUNC_IMPL(__imp__sub_8215CE90) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CEA8"))) PPC_WEAK_FUNC(sub_8215CEA8);
PPC_FUNC_IMPL(__imp__sub_8215CEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215CEB4"))) PPC_WEAK_FUNC(sub_8215CEB4);
PPC_FUNC_IMPL(__imp__sub_8215CEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CEB8"))) PPC_WEAK_FUNC(sub_8215CEB8);
PPC_FUNC_IMPL(__imp__sub_8215CEB8) {
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
	// addi r31,r11,-600
	ctx.r31.s64 = ctx.r11.s64 + -600;
	// lwz r11,-600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -600);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215cf20
	if (!ctx.cr6.eq) goto loc_8215CF20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82256340
	ctx.lr = 0x8215CEE4;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215cf20
	if (!ctx.cr6.eq) goto loc_8215CF20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,-480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -480, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8215CF20:
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

__attribute__((alias("__imp__sub_8215CF38"))) PPC_WEAK_FUNC(sub_8215CF38);
PPC_FUNC_IMPL(__imp__sub_8215CF38) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-23784
	ctx.r10.s64 = ctx.r11.s64 + -23784;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82088268
	ctx.lr = 0x8215CF68;
	sub_82088268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x8215CF70;
	sub_82185670(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215cf8c
	if (ctx.cr6.eq) goto loc_8215CF8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215CF88;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215CF8C:
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

__attribute__((alias("__imp__sub_8215CFA4"))) PPC_WEAK_FUNC(sub_8215CFA4);
PPC_FUNC_IMPL(__imp__sub_8215CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215CFA8"))) PPC_WEAK_FUNC(sub_8215CFA8);
PPC_FUNC_IMPL(__imp__sub_8215CFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-600
	ctx.r31.s64 = ctx.r10.s64 + -600;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// bl 0x822aa648
	ctx.lr = 0x8215CFF4;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// bl 0x8241e0cc
	ctx.lr = 0x8215D014;
	__imp__XamLoaderGetLaunchDataSize(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215d03c
	if (!ctx.cr6.eq) goto loc_8215D03C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241e0bc
	ctx.lr = 0x8215D028;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821847a8
	ctx.lr = 0x8215D038;
	sub_821847A8(ctx, base);
	// bl 0x8215ceb8
	ctx.lr = 0x8215D03C;
	sub_8215CEB8(ctx, base);
loc_8215D03C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D050"))) PPC_WEAK_FUNC(sub_8215D050);
PPC_FUNC_IMPL(__imp__sub_8215D050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215D058;
	sub_8224877C(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8241e0ac
	ctx.lr = 0x8215D080;
	__imp__XNotifyGetNext(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d0b4
	if (ctx.cr6.eq) goto loc_8215D0B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8215d0b4
	if (!ctx.cr6.eq) goto loc_8215D0B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d0b0
	if (!ctx.cr6.eq) goto loc_8215D0B0;
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// b 0x8215d0b4
	goto loc_8215D0B4;
loc_8215D0B0:
	// stw r25,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
loc_8215D0B4:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16660);
	// bl 0x82156a10
	ctx.lr = 0x8215D0C0;
	sub_82156A10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x8215D0C8;
	sub_8215BD60(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215d0e8
	if (!ctx.cr6.eq) goto loc_8215D0E8;
	// bl 0x82170e98
	ctx.lr = 0x8215D0D8;
	sub_82170E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215d0e8
	if (!ctx.cr6.eq) goto loc_8215D0E8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8215d388
	if (ctx.cr6.eq) goto loc_8215D388;
loc_8215D0E8:
	// bl 0x8215bd60
	ctx.lr = 0x8215D0EC;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d104
	if (ctx.cr6.eq) goto loc_8215D104;
	// bl 0x822253a8
	ctx.lr = 0x8215D0FC;
	sub_822253A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215d388
	if (!ctx.cr6.eq) goto loc_8215D388;
loc_8215D104:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d388
	if (!ctx.cr6.eq) goto loc_8215D388;
	// bl 0x82170e98
	ctx.lr = 0x8215D114;
	sub_82170E98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d134
	if (ctx.cr6.eq) goto loc_8215D134;
	// bl 0x8215bd60
	ctx.lr = 0x8215D120;
	sub_8215BD60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d134
	if (!ctx.cr6.eq) goto loc_8215D134;
	// stw r25,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r25.u32);
	// b 0x8215d138
	goto loc_8215D138;
loc_8215D134:
	// stw r30,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
loc_8215D138:
	// bl 0x82163650
	ctx.lr = 0x8215D13C;
	sub_82163650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d154
	if (ctx.cr6.eq) goto loc_8215D154;
	// bl 0x8215cd98
	ctx.lr = 0x8215D148;
	sub_8215CD98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x8215d158
	if (!ctx.cr6.eq) goto loc_8215D158;
loc_8215D154:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215D158:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d384
	if (ctx.cr6.eq) goto loc_8215D384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820dd230
	ctx.lr = 0x8215D16C;
	sub_820DD230(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821addc0
	ctx.lr = 0x8215D178;
	sub_821ADDC0(ctx, base);
	// lwz r11,-7488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821add20
	ctx.lr = 0x8215D188;
	sub_821ADD20(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,15464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15464);
	// bl 0x8216db98
	ctx.lr = 0x8215D19C;
	sub_8216DB98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8215D1A8;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8215D1B4;
	sub_821AD498(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821b2118
	ctx.lr = 0x8215D1BC;
	sub_821B2118(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r8.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f0,-23748(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23748);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,-23752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23752);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stfs f0,704(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// stfs f13,708(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// lfs f30,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-32376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32376);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f2,-28048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28048);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821d1718
	ctx.lr = 0x8215D210;
	sub_821D1718(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821b5ef8
	ctx.lr = 0x8215D218;
	sub_821B5EF8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b29d0
	ctx.lr = 0x8215D220;
	sub_821B29D0(ctx, base);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r4,-23764
	ctx.r4.s64 = ctx.r4.s64 + -23764;
	// bl 0x8218a540
	ctx.lr = 0x8215D238;
	sub_8218A540(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8218a588
	ctx.lr = 0x8215D240;
	sub_8218A588(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,-424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -424);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821a1790
	ctx.lr = 0x8215D258;
	sub_821A1790(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x821d25f8
	ctx.lr = 0x8215D264;
	sub_821D25F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f31,-23768(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23768);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,11196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// bne cr6,0x8215d2fc
	if (!ctx.cr6.eq) goto loc_8215D2FC;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d2fc
	if (!ctx.cr6.eq) goto loc_8215D2FC;
	// bl 0x82222f50
	ctx.lr = 0x8215D294;
	sub_82222F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d2b8
	if (ctx.cr6.eq) goto loc_8215D2B8;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d2408
	ctx.lr = 0x8215D2B4;
	sub_821D2408(ctx, base);
	// b 0x8215d324
	goto loc_8215D324;
loc_8215D2B8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5690
	ctx.lr = 0x8215D2C4;
	sub_820E5690(ctx, base);
	// bl 0x82256340
	ctx.lr = 0x8215D2C8;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r6,256
	ctx.r6.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x8215d2ec
	if (!ctx.cr6.eq) goto loc_8215D2EC;
	// li r7,50
	ctx.r7.s64 = 50;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x821d2408
	ctx.lr = 0x8215D2E8;
	sub_821D2408(ctx, base);
	// b 0x8215d324
	goto loc_8215D324;
loc_8215D2EC:
	// li r7,24
	ctx.r7.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821d2408
	ctx.lr = 0x8215D2F8;
	sub_821D2408(ctx, base);
	// b 0x8215d324
	goto loc_8215D324;
loc_8215D2FC:
	// li r7,128
	ctx.r7.s64 = 128;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,78
	ctx.r5.s64 = 78;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d2408
	ctx.lr = 0x8215D314;
	sub_821D2408(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// lfs f0,8620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
loc_8215D324:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f2,14780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14780);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821d1718
	ctx.lr = 0x8215D33C;
	sub_821D1718(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b6008
	ctx.lr = 0x8215D344;
	sub_821B6008(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad600
	ctx.lr = 0x8215D350;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-7488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7488);
	// bl 0x821ad498
	ctx.lr = 0x8215D35C;
	sub_821AD498(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821b1dc0
	ctx.lr = 0x8215D364;
	sub_821B1DC0(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x821b1d48
	ctx.lr = 0x8215D36C;
	sub_821B1D48(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-1736(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d384
	if (ctx.cr6.eq) goto loc_8215D384;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d16c0
	ctx.lr = 0x8215D384;
	sub_821D16C0(ctx, base);
loc_8215D384:
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
loc_8215D388:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8215D39C"))) PPC_WEAK_FUNC(sub_8215D39C);
PPC_FUNC_IMPL(__imp__sub_8215D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D3A0"))) PPC_WEAK_FUNC(sub_8215D3A0);
PPC_FUNC_IMPL(__imp__sub_8215D3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8215D3A8;
	sub_82248778(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d638
	if (ctx.cr6.eq) goto loc_8215D638;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d638
	if (!ctx.cr6.eq) goto loc_8215D638;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blt cr6,0x8215d638
	if (ctx.cr6.lt) goto loc_8215D638;
	// bl 0x820851b8
	ctx.lr = 0x8215D3E0;
	sub_820851B8(ctx, base);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// li r5,269
	ctx.r5.s64 = 269;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821847a8
	ctx.lr = 0x8215D3F0;
	sub_821847A8(ctx, base);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d40c
	if (ctx.cr6.eq) goto loc_8215D40C;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215d52c
	if (!ctx.cr6.eq) goto loc_8215D52C;
loc_8215D40C:
	// lis r27,-32178
	ctx.r27.s64 = -2108817408;
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x8215D418;
	sub_821A2548(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8241e0ec
	ctx.lr = 0x8215D424;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,-19048(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r29,300(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r28,304(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r9,r28,r29
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addis r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 262144;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8215D464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82085ad0
	ctx.lr = 0x8215D46C;
	sub_82085AD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d490
	if (ctx.cr6.eq) goto loc_8215D490;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82086818
	ctx.lr = 0x8215D484;
	sub_82086818(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8215d4a0
	if (!ctx.cr6.lt) goto loc_8215D4A0;
loc_8215D490:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// blt cr6,0x8215d464
	if (ctx.cr6.lt) goto loc_8215D464;
	// b 0x8215d52c
	goto loc_8215D52C;
loc_8215D4A0:
	// bl 0x82183078
	ctx.lr = 0x8215D4A4;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215D4B0;
	sub_821837D0(ctx, base);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226b2c0
	ctx.lr = 0x8215D4D8;
	sub_8226B2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226d358
	ctx.lr = 0x8215D510;
	sub_8226D358(ctx, base);
	// lwz r3,-19048(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19048);
	// bl 0x821a2548
	ctx.lr = 0x8215D518;
	sub_821A2548(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x8215D524;
	sub_8226D3A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215D52C;
	sub_821837D0(ctx, base);
loc_8215D52C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82352190
	ctx.lr = 0x8215D534;
	sub_82352190(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16660);
	// bl 0x82156a10
	ctx.lr = 0x8215D540;
	sub_82156A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8215cd30
	ctx.lr = 0x8215D54C;
	sub_8215CD30(ctx, base);
	// bl 0x82222f50
	ctx.lr = 0x8215D550;
	sub_82222F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215d5b0
	if (ctx.cr6.eq) goto loc_8215D5B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x822230d0
	ctx.lr = 0x8215D564;
	sub_822230D0(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82222fd0
	ctx.lr = 0x8215D570;
	sub_82222FD0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x8215D574;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8215d600
	if (!ctx.cr6.eq) goto loc_8215D600;
	// bl 0x8215bd08
	ctx.lr = 0x8215D588;
	sub_8215BD08(ctx, base);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d600
	if (ctx.cr6.eq) goto loc_8215D600;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r3,-796(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -796);
	// bl 0x8231e120
	ctx.lr = 0x8215D5A8;
	sub_8231E120(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// b 0x8215d600
	goto loc_8215D600;
loc_8215D5B0:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d5c8
	if (ctx.cr6.eq) goto loc_8215D5C8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// b 0x8215d600
	goto loc_8215D600;
loc_8215D5C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8215d5dc
	if (ctx.cr6.eq) goto loc_8215D5DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// b 0x8215d600
	goto loc_8215D600;
loc_8215D5DC:
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5690
	ctx.lr = 0x8215D5F0;
	sub_820E5690(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
loc_8215D600:
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241e0dc
	ctx.lr = 0x8215D60C;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8215d62c
	if (ctx.cr6.lt) goto loc_8215D62C;
	// bne cr6,0x8215d638
	if (!ctx.cr6.eq) goto loc_8215D638;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,5084
	ctx.r3.s64 = ctx.r11.s64 + 5084;
	// bl 0x82088660
	ctx.lr = 0x8215D62C;
	sub_82088660(ctx, base);
loc_8215D62C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,433
	ctx.r3.s64 = ctx.r1.s64 + 433;
	// bl 0x82088660
	ctx.lr = 0x8215D638;
	sub_82088660(ctx, base);
loc_8215D638:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8215D644"))) PPC_WEAK_FUNC(sub_8215D644);
PPC_FUNC_IMPL(__imp__sub_8215D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D648"))) PPC_WEAK_FUNC(sub_8215D648);
PPC_FUNC_IMPL(__imp__sub_8215D648) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
loc_8215D650:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8215d674
	if (ctx.cr6.eq) goto loc_8215D674;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8215d650
	if (ctx.cr6.lt) goto loc_8215D650;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215D674:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D67C"))) PPC_WEAK_FUNC(sub_8215D67C);
PPC_FUNC_IMPL(__imp__sub_8215D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D680"))) PPC_WEAK_FUNC(sub_8215D680);
PPC_FUNC_IMPL(__imp__sub_8215D680) {
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
	// bl 0x821b1f48
	ctx.lr = 0x8215D690;
	sub_821B1F48(ctx, base);
	// bl 0x821b6e28
	ctx.lr = 0x8215D694;
	sub_821B6E28(ctx, base);
	// bl 0x821dc9f8
	ctx.lr = 0x8215D698;
	sub_821DC9F8(ctx, base);
	// bl 0x8211aba0
	ctx.lr = 0x8215D69C;
	sub_8211ABA0(ctx, base);
	// bl 0x82095650
	ctx.lr = 0x8215D6A0;
	sub_82095650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D6B0"))) PPC_WEAK_FUNC(sub_8215D6B0);
PPC_FUNC_IMPL(__imp__sub_8215D6B0) {
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
	ctx.lr = 0x8215D6C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d6e0
	if (ctx.cr6.eq) goto loc_8215D6E0;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x82183448
	ctx.lr = 0x8215D6DC;
	sub_82183448(ctx, base);
	// b 0x8215d6e8
	goto loc_8215D6E8;
loc_8215D6E0:
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x821845a0
	ctx.lr = 0x8215D6E8;
	sub_821845A0(ctx, base);
loc_8215D6E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d714
	if (ctx.cr6.eq) goto loc_8215D714;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821afe40
	ctx.lr = 0x8215D6F8;
	sub_821AFE40(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-7460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8215D714:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D734"))) PPC_WEAK_FUNC(sub_8215D734);
PPC_FUNC_IMPL(__imp__sub_8215D734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D738"))) PPC_WEAK_FUNC(sub_8215D738);
PPC_FUNC_IMPL(__imp__sub_8215D738) {
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
	ctx.lr = 0x8215D748;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8215d760
	if (ctx.cr6.eq) goto loc_8215D760;
	// bl 0x82183448
	ctx.lr = 0x8215D75C;
	sub_82183448(ctx, base);
	// b 0x8215d764
	goto loc_8215D764;
loc_8215D760:
	// bl 0x821845a0
	ctx.lr = 0x8215D764;
	sub_821845A0(ctx, base);
loc_8215D764:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d788
	if (ctx.cr6.eq) goto loc_8215D788;
	// bl 0x821dcf28
	ctx.lr = 0x8215D770;
	sub_821DCF28(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-1212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D788:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D7A4"))) PPC_WEAK_FUNC(sub_8215D7A4);
PPC_FUNC_IMPL(__imp__sub_8215D7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D7A8"))) PPC_WEAK_FUNC(sub_8215D7A8);
PPC_FUNC_IMPL(__imp__sub_8215D7A8) {
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
	ctx.lr = 0x8215D7B8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d7d0
	if (ctx.cr6.eq) goto loc_8215D7D0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x8215D7CC;
	sub_82183448(ctx, base);
	// b 0x8215d7d8
	goto loc_8215D7D8;
loc_8215D7D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215D7D8;
	sub_821845A0(ctx, base);
loc_8215D7D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d7fc
	if (ctx.cr6.eq) goto loc_8215D7FC;
	// bl 0x822c5dd8
	ctx.lr = 0x8215D7E4;
	sub_822C5DD8(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,27156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D7FC:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27156, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D818"))) PPC_WEAK_FUNC(sub_8215D818);
PPC_FUNC_IMPL(__imp__sub_8215D818) {
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
	ctx.lr = 0x8215D828;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d840
	if (ctx.cr6.eq) goto loc_8215D840;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82183448
	ctx.lr = 0x8215D83C;
	sub_82183448(ctx, base);
	// b 0x8215d848
	goto loc_8215D848;
loc_8215D840:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215D848;
	sub_821845A0(ctx, base);
loc_8215D848:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d86c
	if (ctx.cr6.eq) goto loc_8215D86C;
	// bl 0x82084300
	ctx.lr = 0x8215D854;
	sub_82084300(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r3,27160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D86C:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D888"))) PPC_WEAK_FUNC(sub_8215D888);
PPC_FUNC_IMPL(__imp__sub_8215D888) {
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
	ctx.lr = 0x8215D898;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d8b0
	if (ctx.cr6.eq) goto loc_8215D8B0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215D8AC;
	sub_82183448(ctx, base);
	// b 0x8215d8b8
	goto loc_8215D8B8;
loc_8215D8B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215D8B8;
	sub_821845A0(ctx, base);
loc_8215D8B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d8dc
	if (ctx.cr6.eq) goto loc_8215D8DC;
	// bl 0x823c6bb8
	ctx.lr = 0x8215D8C4;
	sub_823C6BB8(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r3,-4768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D8DC:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D8F8"))) PPC_WEAK_FUNC(sub_8215D8F8);
PPC_FUNC_IMPL(__imp__sub_8215D8F8) {
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
	ctx.lr = 0x8215D908;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8215d920
	if (ctx.cr6.eq) goto loc_8215D920;
	// bl 0x82183448
	ctx.lr = 0x8215D91C;
	sub_82183448(ctx, base);
	// b 0x8215d924
	goto loc_8215D924;
loc_8215D920:
	// bl 0x821845a0
	ctx.lr = 0x8215D924;
	sub_821845A0(ctx, base);
loc_8215D924:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d948
	if (ctx.cr6.eq) goto loc_8215D948;
	// bl 0x8209eda0
	ctx.lr = 0x8215D930;
	sub_8209EDA0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2048, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D948:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D964"))) PPC_WEAK_FUNC(sub_8215D964);
PPC_FUNC_IMPL(__imp__sub_8215D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215D968"))) PPC_WEAK_FUNC(sub_8215D968);
PPC_FUNC_IMPL(__imp__sub_8215D968) {
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
	ctx.lr = 0x8215D978;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215d990
	if (ctx.cr6.eq) goto loc_8215D990;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215D98C;
	sub_82183448(ctx, base);
	// b 0x8215d998
	goto loc_8215D998;
loc_8215D990:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215D998;
	sub_821845A0(ctx, base);
loc_8215D998:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d9bc
	if (ctx.cr6.eq) goto loc_8215D9BC;
	// bl 0x8216db60
	ctx.lr = 0x8215D9A4;
	sub_8216DB60(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215D9BC:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215D9D8"))) PPC_WEAK_FUNC(sub_8215D9D8);
PPC_FUNC_IMPL(__imp__sub_8215D9D8) {
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
	ctx.lr = 0x8215D9E8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215da00
	if (ctx.cr6.eq) goto loc_8215DA00;
	// li r3,1168
	ctx.r3.s64 = 1168;
	// bl 0x82183448
	ctx.lr = 0x8215D9FC;
	sub_82183448(ctx, base);
	// b 0x8215da08
	goto loc_8215DA08;
loc_8215DA00:
	// li r3,73
	ctx.r3.s64 = 73;
	// bl 0x821845a0
	ctx.lr = 0x8215DA08;
	sub_821845A0(ctx, base);
loc_8215DA08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215da2c
	if (ctx.cr6.eq) goto loc_8215DA2C;
	// bl 0x82163a90
	ctx.lr = 0x8215DA14;
	sub_82163A90(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DA2C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -420, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DA48"))) PPC_WEAK_FUNC(sub_8215DA48);
PPC_FUNC_IMPL(__imp__sub_8215DA48) {
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
	ctx.lr = 0x8215DA58;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215da70
	if (ctx.cr6.eq) goto loc_8215DA70;
	// li r3,356
	ctx.r3.s64 = 356;
	// bl 0x82183448
	ctx.lr = 0x8215DA6C;
	sub_82183448(ctx, base);
	// b 0x8215da78
	goto loc_8215DA78;
loc_8215DA70:
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x821845a0
	ctx.lr = 0x8215DA78;
	sub_821845A0(ctx, base);
loc_8215DA78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215da9c
	if (ctx.cr6.eq) goto loc_8215DA9C;
	// bl 0x82161e90
	ctx.lr = 0x8215DA84;
	sub_82161E90(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DA9C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DAB8"))) PPC_WEAK_FUNC(sub_8215DAB8);
PPC_FUNC_IMPL(__imp__sub_8215DAB8) {
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
	ctx.lr = 0x8215DAC8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dae0
	if (ctx.cr6.eq) goto loc_8215DAE0;
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x82183448
	ctx.lr = 0x8215DADC;
	sub_82183448(ctx, base);
	// b 0x8215dae8
	goto loc_8215DAE8;
loc_8215DAE0:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x821845a0
	ctx.lr = 0x8215DAE8;
	sub_821845A0(ctx, base);
loc_8215DAE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215db0c
	if (ctx.cr6.eq) goto loc_8215DB0C;
	// bl 0x8215f630
	ctx.lr = 0x8215DAF4;
	sub_8215F630(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DB0C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DB28"))) PPC_WEAK_FUNC(sub_8215DB28);
PPC_FUNC_IMPL(__imp__sub_8215DB28) {
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
	ctx.lr = 0x8215DB38;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8215db50
	if (ctx.cr6.eq) goto loc_8215DB50;
	// bl 0x82183448
	ctx.lr = 0x8215DB4C;
	sub_82183448(ctx, base);
	// b 0x8215db54
	goto loc_8215DB54;
loc_8215DB50:
	// bl 0x821845a0
	ctx.lr = 0x8215DB54;
	sub_821845A0(ctx, base);
loc_8215DB54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215db78
	if (ctx.cr6.eq) goto loc_8215DB78;
	// bl 0x82094c40
	ctx.lr = 0x8215DB60;
	sub_82094C40(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r3,-18236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18236, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DB78:
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18236, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DB94"))) PPC_WEAK_FUNC(sub_8215DB94);
PPC_FUNC_IMPL(__imp__sub_8215DB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215DB98"))) PPC_WEAK_FUNC(sub_8215DB98);
PPC_FUNC_IMPL(__imp__sub_8215DB98) {
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
	ctx.lr = 0x8215DBA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dbc0
	if (ctx.cr6.eq) goto loc_8215DBC0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8215DBBC;
	sub_82183448(ctx, base);
	// b 0x8215dbc8
	goto loc_8215DBC8;
loc_8215DBC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DBC8;
	sub_821845A0(ctx, base);
loc_8215DBC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dbec
	if (ctx.cr6.eq) goto loc_8215DBEC;
	// bl 0x820b2d78
	ctx.lr = 0x8215DBD4;
	sub_820B2D78(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-8552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DBEC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8552, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DC08"))) PPC_WEAK_FUNC(sub_8215DC08);
PPC_FUNC_IMPL(__imp__sub_8215DC08) {
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
	ctx.lr = 0x8215DC18;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dc30
	if (ctx.cr6.eq) goto loc_8215DC30;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215DC2C;
	sub_82183448(ctx, base);
	// b 0x8215dc38
	goto loc_8215DC38;
loc_8215DC30:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DC38;
	sub_821845A0(ctx, base);
loc_8215DC38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dc5c
	if (ctx.cr6.eq) goto loc_8215DC5C;
	// bl 0x82174fd8
	ctx.lr = 0x8215DC44;
	sub_82174FD8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-9772(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DC5C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DC78"))) PPC_WEAK_FUNC(sub_8215DC78);
PPC_FUNC_IMPL(__imp__sub_8215DC78) {
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
	ctx.lr = 0x8215DC88;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dca0
	if (ctx.cr6.eq) goto loc_8215DCA0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215DC9C;
	sub_82183448(ctx, base);
	// b 0x8215dca8
	goto loc_8215DCA8;
loc_8215DCA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DCA8;
	sub_821845A0(ctx, base);
loc_8215DCA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dccc
	if (ctx.cr6.eq) goto loc_8215DCCC;
	// bl 0x82174fd8
	ctx.lr = 0x8215DCB4;
	sub_82174FD8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-9768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -9768, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DCCC:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DCE8"))) PPC_WEAK_FUNC(sub_8215DCE8);
PPC_FUNC_IMPL(__imp__sub_8215DCE8) {
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
	ctx.lr = 0x8215DCF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dd10
	if (ctx.cr6.eq) goto loc_8215DD10;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215DD0C;
	sub_82183448(ctx, base);
	// b 0x8215dd18
	goto loc_8215DD18;
loc_8215DD10:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215DD18;
	sub_821845A0(ctx, base);
loc_8215DD18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dd3c
	if (ctx.cr6.eq) goto loc_8215DD3C;
	// bl 0x8215cde0
	ctx.lr = 0x8215DD24;
	sub_8215CDE0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DD3C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -484, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DD58"))) PPC_WEAK_FUNC(sub_8215DD58);
PPC_FUNC_IMPL(__imp__sub_8215DD58) {
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
	ctx.lr = 0x8215DD68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dd80
	if (ctx.cr6.eq) goto loc_8215DD80;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82183448
	ctx.lr = 0x8215DD7C;
	sub_82183448(ctx, base);
	// b 0x8215dd88
	goto loc_8215DD88;
loc_8215DD80:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DD88;
	sub_821845A0(ctx, base);
loc_8215DD88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ddac
	if (ctx.cr6.eq) goto loc_8215DDAC;
	// bl 0x8216dc88
	ctx.lr = 0x8215DD94;
	sub_8216DC88(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DDAC:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15468, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DDC8"))) PPC_WEAK_FUNC(sub_8215DDC8);
PPC_FUNC_IMPL(__imp__sub_8215DDC8) {
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
	ctx.lr = 0x8215DDD8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215ddf0
	if (ctx.cr6.eq) goto loc_8215DDF0;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82183448
	ctx.lr = 0x8215DDEC;
	sub_82183448(ctx, base);
	// b 0x8215ddf8
	goto loc_8215DDF8;
loc_8215DDF0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8215DDF8;
	sub_821845A0(ctx, base);
loc_8215DDF8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215de1c
	if (ctx.cr6.eq) goto loc_8215DE1C;
	// bl 0x82166190
	ctx.lr = 0x8215DE04;
	sub_82166190(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,14516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DE1C:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DE38"))) PPC_WEAK_FUNC(sub_8215DE38);
PPC_FUNC_IMPL(__imp__sub_8215DE38) {
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
	ctx.lr = 0x8215DE48;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215de60
	if (ctx.cr6.eq) goto loc_8215DE60;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82183448
	ctx.lr = 0x8215DE5C;
	sub_82183448(ctx, base);
	// b 0x8215de68
	goto loc_8215DE68;
loc_8215DE60:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215DE68;
	sub_821845A0(ctx, base);
loc_8215DE68:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215de8c
	if (ctx.cr6.eq) goto loc_8215DE8C;
	// bl 0x821632c8
	ctx.lr = 0x8215DE74;
	sub_821632C8(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,-432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DE8C:
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -432, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DEA8"))) PPC_WEAK_FUNC(sub_8215DEA8);
PPC_FUNC_IMPL(__imp__sub_8215DEA8) {
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
	ctx.lr = 0x8215DEB8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215ded0
	if (ctx.cr6.eq) goto loc_8215DED0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215DECC;
	sub_82183448(ctx, base);
	// b 0x8215ded8
	goto loc_8215DED8;
loc_8215DED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215DED8;
	sub_821845A0(ctx, base);
loc_8215DED8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215defc
	if (ctx.cr6.eq) goto loc_8215DEFC;
	// bl 0x822307b8
	ctx.lr = 0x8215DEE4;
	sub_822307B8(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,1088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DEFC:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1088, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DF18"))) PPC_WEAK_FUNC(sub_8215DF18);
PPC_FUNC_IMPL(__imp__sub_8215DF18) {
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
	ctx.lr = 0x8215DF28;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215df44
	if (ctx.cr6.eq) goto loc_8215DF44;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,33232
	ctx.r3.u64 = ctx.r3.u64 | 33232;
	// bl 0x82183448
	ctx.lr = 0x8215DF40;
	sub_82183448(ctx, base);
	// b 0x8215df4c
	goto loc_8215DF4C;
loc_8215DF44:
	// li r3,2077
	ctx.r3.s64 = 2077;
	// bl 0x821845a0
	ctx.lr = 0x8215DF4C;
	sub_821845A0(ctx, base);
loc_8215DF4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215df70
	if (ctx.cr6.eq) goto loc_8215DF70;
	// bl 0x82232990
	ctx.lr = 0x8215DF58;
	sub_82232990(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,1092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DF70:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1092, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215DF8C"))) PPC_WEAK_FUNC(sub_8215DF8C);
PPC_FUNC_IMPL(__imp__sub_8215DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215DF90"))) PPC_WEAK_FUNC(sub_8215DF90);
PPC_FUNC_IMPL(__imp__sub_8215DF90) {
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
	ctx.lr = 0x8215DFA0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215dfb8
	if (ctx.cr6.eq) goto loc_8215DFB8;
	// li r3,348
	ctx.r3.s64 = 348;
	// bl 0x82183448
	ctx.lr = 0x8215DFB4;
	sub_82183448(ctx, base);
	// b 0x8215dfc0
	goto loc_8215DFC0;
loc_8215DFB8:
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x821845a0
	ctx.lr = 0x8215DFC0;
	sub_821845A0(ctx, base);
loc_8215DFC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215dfe4
	if (ctx.cr6.eq) goto loc_8215DFE4;
	// bl 0x82170ed8
	ctx.lr = 0x8215DFCC;
	sub_82170ED8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215DFE4:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15472, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E000"))) PPC_WEAK_FUNC(sub_8215E000);
PPC_FUNC_IMPL(__imp__sub_8215E000) {
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
	ctx.lr = 0x8215E010;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e028
	if (ctx.cr6.eq) goto loc_8215E028;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82183448
	ctx.lr = 0x8215E024;
	sub_82183448(ctx, base);
	// b 0x8215e030
	goto loc_8215E030;
loc_8215E028:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215E030;
	sub_821845A0(ctx, base);
loc_8215E030:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e054
	if (ctx.cr6.eq) goto loc_8215E054;
	// bl 0x82175c60
	ctx.lr = 0x8215E03C;
	sub_82175C60(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,16660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16660, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215E054:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16660, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E070"))) PPC_WEAK_FUNC(sub_8215E070);
PPC_FUNC_IMPL(__imp__sub_8215E070) {
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
	ctx.lr = 0x8215E080;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e098
	if (ctx.cr6.eq) goto loc_8215E098;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8215E094;
	sub_82183448(ctx, base);
	// b 0x8215e0a0
	goto loc_8215E0A0;
loc_8215E098:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8215E0A0;
	sub_821845A0(ctx, base);
loc_8215E0A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e0c4
	if (ctx.cr6.eq) goto loc_8215E0C4;
	// bl 0x82094960
	ctx.lr = 0x8215E0AC;
	sub_82094960(ctx, base);
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// stw r3,-18240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18240, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215E0C4:
	// lis r10,-32185
	ctx.r10.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18240, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E0E0"))) PPC_WEAK_FUNC(sub_8215E0E0);
PPC_FUNC_IMPL(__imp__sub_8215E0E0) {
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
	ctx.lr = 0x8215E0F0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e108
	if (ctx.cr6.eq) goto loc_8215E108;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82183448
	ctx.lr = 0x8215E104;
	sub_82183448(ctx, base);
	// b 0x8215e110
	goto loc_8215E110;
loc_8215E108:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x8215E110;
	sub_821845A0(ctx, base);
loc_8215E110:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e134
	if (ctx.cr6.eq) goto loc_8215E134;
	// bl 0x8216d0d0
	ctx.lr = 0x8215E11C;
	sub_8216D0D0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r3,15460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8215E134:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215E150"))) PPC_WEAK_FUNC(sub_8215E150);
PPC_FUNC_IMPL(__imp__sub_8215E150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215E158;
	sub_8224878C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82256d10
	ctx.lr = 0x8215E164;
	sub_82256D10(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r7,106(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lhz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r3,110(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// or r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 | ctx.r3.u64;
	// bl 0x82088650
	ctx.lr = 0x8215E190;
	sub_82088650(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// bl 0x8218fef8
	ctx.lr = 0x8215E1A0;
	sub_8218FEF8(ctx, base);
	// lhz r6,110(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// stb r3,24332(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24332, ctx.r3.u8);
	// bl 0x8218fb20
	ctx.lr = 0x8215E1B4;
	sub_8218FB20(ctx, base);
	// lhz r3,110(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// bl 0x822488a0
	ctx.lr = 0x8215E1BC;
	sub_822488A0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,512
	ctx.r10.s64 = 512;
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// li r9,128
	ctx.r9.s64 = 128;
	// std r29,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r29.u64);
	// ori r8,r11,49152
	ctx.r8.u64 = ctx.r11.u64 | 49152;
	// std r29,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r29.u64);
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bl 0x82183850
	ctx.lr = 0x8215E200;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8215e218
	if (ctx.cr6.eq) goto loc_8215E218;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82183448
	ctx.lr = 0x8215E214;
	sub_82183448(ctx, base);
	// b 0x8215e228
	goto loc_8215E228;
loc_8215E218:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// rlwinm r3,r10,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8215E228;
	sub_821845A0(ctx, base);
loc_8215E228:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821897e0
	ctx.lr = 0x8215E264;
	sub_821897E0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82186a28
	ctx.lr = 0x8215E26C;
	sub_82186A28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82184808
	ctx.lr = 0x8215E274;
	sub_82184808(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,93
	ctx.r4.s64 = 93;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82186670
	ctx.lr = 0x8215E28C;
	sub_82186670(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E290;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e2a8
	if (ctx.cr6.eq) goto loc_8215E2A8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215E2A4;
	sub_82183448(ctx, base);
	// b 0x8215e2b0
	goto loc_8215E2B0;
loc_8215E2A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215E2B0;
	sub_821845A0(ctx, base);
loc_8215E2B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e2c0
	if (ctx.cr6.eq) goto loc_8215E2C0;
	// bl 0x82175f68
	ctx.lr = 0x8215E2BC;
	sub_82175F68(ctx, base);
	// b 0x8215e2c4
	goto loc_8215E2C4;
loc_8215E2C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8215E2C4:
	// bl 0x8218c908
	ctx.lr = 0x8215E2C8;
	sub_8218C908(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215E2CC;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E2D8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E2DC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e2f4
	if (ctx.cr6.eq) goto loc_8215E2F4;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x8215E2F0;
	sub_82183448(ctx, base);
	// b 0x8215e2fc
	goto loc_8215E2FC;
loc_8215E2F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8215E2FC;
	sub_821845A0(ctx, base);
loc_8215E2FC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e31c
	if (ctx.cr6.eq) goto loc_8215E31C;
	// bl 0x82183078
	ctx.lr = 0x8215E30C;
	sub_82183078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x8218e628
	ctx.lr = 0x8215E31C;
	sub_8218E628(ctx, base);
loc_8215E31C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E324;
	sub_821837D0(ctx, base);
	// bl 0x82187130
	ctx.lr = 0x8215E328;
	sub_82187130(ctx, base);
	// bl 0x8209eda0
	ctx.lr = 0x8215E32C;
	sub_8209EDA0(ctx, base);
	// bl 0x823c2f28
	ctx.lr = 0x8215E330;
	sub_823C2F28(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E334;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e34c
	if (ctx.cr6.eq) goto loc_8215E34C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215E348;
	sub_82183448(ctx, base);
	// b 0x8215e354
	goto loc_8215E354;
loc_8215E34C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215E354;
	sub_821845A0(ctx, base);
loc_8215E354:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e360
	if (ctx.cr6.eq) goto loc_8215E360;
	// bl 0x82193018
	ctx.lr = 0x8215E360;
	sub_82193018(ctx, base);
loc_8215E360:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8215E364:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821930b0
	ctx.lr = 0x8215E370;
	sub_821930B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8215e364
	if (ctx.cr6.lt) goto loc_8215E364;
	// bl 0x82183850
	ctx.lr = 0x8215E380;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e398
	if (ctx.cr6.eq) goto loc_8215E398;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E394;
	sub_82183448(ctx, base);
	// b 0x8215e3a0
	goto loc_8215E3A0;
loc_8215E398:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E3A0;
	sub_821845A0(ctx, base);
loc_8215E3A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e3b8
	if (ctx.cr6.eq) goto loc_8215E3B8;
	// bl 0x821d18b0
	ctx.lr = 0x8215E3AC;
	sub_821D18B0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-1736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1736, ctx.r3.u32);
	// b 0x8215e3c4
	goto loc_8215E3C4;
loc_8215E3B8:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-1736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1736, ctx.r29.u32);
loc_8215E3C4:
	// bl 0x820f32d8
	ctx.lr = 0x8215E3C8;
	sub_820F32D8(ctx, base);
	// bl 0x820851b8
	ctx.lr = 0x8215E3CC;
	sub_820851B8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215E3E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215e3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215E3E0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215E408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82183850
	ctx.lr = 0x8215E40C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e424
	if (ctx.cr6.eq) goto loc_8215E424;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82183448
	ctx.lr = 0x8215E420;
	sub_82183448(ctx, base);
	// b 0x8215e42c
	goto loc_8215E42C;
loc_8215E424:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x8215E42C;
	sub_821845A0(ctx, base);
loc_8215E42C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e440
	if (ctx.cr6.eq) goto loc_8215E440;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821927c8
	ctx.lr = 0x8215E440;
	sub_821927C8(ctx, base);
loc_8215E440:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-20040
	ctx.r5.s64 = ctx.r11.s64 + -20040;
	// addi r4,r10,-21176
	ctx.r4.s64 = ctx.r10.s64 + -21176;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218dca8
	ctx.lr = 0x8215E45C;
	sub_8218DCA8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215E464"))) PPC_WEAK_FUNC(sub_8215E464);
PPC_FUNC_IMPL(__imp__sub_8215E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215E468"))) PPC_WEAK_FUNC(sub_8215E468);
PPC_FUNC_IMPL(__imp__sub_8215E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215E470;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,-13808
	ctx.r3.s64 = ctx.r11.s64 + -13808;
	// bl 0x8218f5c0
	ctx.lr = 0x8215E480;
	sub_8218F5C0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241e0ec
	ctx.lr = 0x8215E488;
	__imp__XGetVideoMode(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822aa648
	ctx.lr = 0x8215E494;
	sub_822AA648(ctx, base);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r10,70
	ctx.r10.s64 = 70;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bne cr6,0x8215e4bc
	if (!ctx.cr6.eq) goto loc_8215E4BC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215e4bc
	if (!ctx.cr6.eq) goto loc_8215E4BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8215e4c4
	goto loc_8215E4C4;
loc_8215E4BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8215E4C4:
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x8215e4fc
	if (ctx.cr6.eq) goto loc_8215E4FC;
	// cmplwi cr6,r10,1080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1080, ctx.xer);
	// blt cr6,0x8215e4fc
	if (ctx.cr6.lt) goto loc_8215E4FC;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8215e52c
	goto loc_8215E52C;
loc_8215E4FC:
	// cmplwi cr6,r10,720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 720, ctx.xer);
	// blt cr6,0x8215e50c
	if (ctx.cr6.lt) goto loc_8215E50C;
	// li r11,64
	ctx.r11.s64 = 64;
	// b 0x8215e52c
	goto loc_8215E52C;
loc_8215E50C:
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x8215e530
	if (!ctx.cr6.eq) goto loc_8215E530;
	// cmplwi cr6,r10,576
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 576, ctx.xer);
	// bne cr6,0x8215e530
	if (!ctx.cr6.eq) goto loc_8215E530;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8215e530
	if (ctx.cr6.eq) goto loc_8215E530;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8215E52C:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8215E530:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// beq cr6,0x8215e548
	if (ctx.cr6.eq) goto loc_8215E548;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8215e558
	if (!ctx.cr6.eq) goto loc_8215E558;
loc_8215E548:
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
loc_8215E558:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821acd70
	ctx.lr = 0x8215E560;
	sub_821ACD70(ctx, base);
	// bl 0x8215d738
	ctx.lr = 0x8215E564;
	sub_8215D738(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E568;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e580
	if (ctx.cr6.eq) goto loc_8215E580;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E57C;
	sub_82183448(ctx, base);
	// b 0x8215e588
	goto loc_8215E588;
loc_8215E580:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E588;
	sub_821845A0(ctx, base);
loc_8215E588:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e5a0
	if (ctx.cr6.eq) goto loc_8215E5A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1400
	ctx.r5.s64 = 1400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821aeec0
	ctx.lr = 0x8215E5A0;
	sub_821AEEC0(ctx, base);
loc_8215E5A0:
	// bl 0x82183850
	ctx.lr = 0x8215E5A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e5bc
	if (ctx.cr6.eq) goto loc_8215E5BC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E5B8;
	sub_82183448(ctx, base);
	// b 0x8215e5c4
	goto loc_8215E5C4;
loc_8215E5BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E5C4;
	sub_821845A0(ctx, base);
loc_8215E5C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e5dc
	if (ctx.cr6.eq) goto loc_8215E5DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821aef08
	ctx.lr = 0x8215E5DC;
	sub_821AEF08(ctx, base);
loc_8215E5DC:
	// bl 0x82183850
	ctx.lr = 0x8215E5E0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e5f8
	if (ctx.cr6.eq) goto loc_8215E5F8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82183448
	ctx.lr = 0x8215E5F4;
	sub_82183448(ctx, base);
	// b 0x8215e600
	goto loc_8215E600;
loc_8215E5F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8215E600;
	sub_821845A0(ctx, base);
loc_8215E600:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e618
	if (ctx.cr6.eq) goto loc_8215E618;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a7a10
	ctx.lr = 0x8215E618;
	sub_821A7A10(ctx, base);
loc_8215E618:
	// bl 0x82154c88
	ctx.lr = 0x8215E61C;
	sub_82154C88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821831f8
	ctx.lr = 0x8215E624;
	sub_821831F8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r29,r11,0,0,11
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// bl 0x82183850
	ctx.lr = 0x8215E630;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e648
	if (ctx.cr6.eq) goto loc_8215E648;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82183448
	ctx.lr = 0x8215E644;
	sub_82183448(ctx, base);
	// b 0x8215e650
	goto loc_8215E650;
loc_8215E648:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x8215E650;
	sub_821845A0(ctx, base);
loc_8215E650:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,4128
	ctx.r30.s64 = ctx.r11.s64 + 4128;
	// beq cr6,0x8215e6b0
	if (ctx.cr6.eq) goto loc_8215E6B0;
	// bl 0x82088650
	ctx.lr = 0x8215E668;
	sub_82088650(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82154c88
	ctx.lr = 0x8215E670;
	sub_82154C88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r9,r30,100
	ctx.r9.s64 = ctx.r30.s64 + 100;
	// addi r10,r11,-10624
	ctx.r10.s64 = ctx.r11.s64 + -10624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwinm r8,r29,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// bl 0x821aa528
	ctx.lr = 0x8215E6A8;
	sub_821AA528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8215e6b4
	goto loc_8215E6B4;
loc_8215E6B0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8215E6B4:
	// bl 0x821a3640
	ctx.lr = 0x8215E6B8;
	sub_821A3640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa918
	ctx.lr = 0x8215E6C0;
	sub_821AA918(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E6C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e6dc
	if (ctx.cr6.eq) goto loc_8215E6DC;
	// li r3,1196
	ctx.r3.s64 = 1196;
	// bl 0x82183448
	ctx.lr = 0x8215E6D8;
	sub_82183448(ctx, base);
	// b 0x8215e6e4
	goto loc_8215E6E4;
loc_8215E6DC:
	// li r3,75
	ctx.r3.s64 = 75;
	// bl 0x821845a0
	ctx.lr = 0x8215E6E4;
	sub_821845A0(ctx, base);
loc_8215E6E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e6fc
	if (ctx.cr6.eq) goto loc_8215E6FC;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// bl 0x821ac538
	ctx.lr = 0x8215E6FC;
	sub_821AC538(ctx, base);
loc_8215E6FC:
	// bl 0x82183850
	ctx.lr = 0x8215E700;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e718
	if (ctx.cr6.eq) goto loc_8215E718;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82183448
	ctx.lr = 0x8215E714;
	sub_82183448(ctx, base);
	// b 0x8215e720
	goto loc_8215E720;
loc_8215E718:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821845a0
	ctx.lr = 0x8215E720;
	sub_821845A0(ctx, base);
loc_8215E720:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e734
	if (ctx.cr6.eq) goto loc_8215E734;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// bl 0x821a0c48
	ctx.lr = 0x8215E734;
	sub_821A0C48(ctx, base);
loc_8215E734:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8215d6b0
	ctx.lr = 0x8215E73C;
	sub_8215D6B0(ctx, base);
	// bl 0x8215c090
	ctx.lr = 0x8215E740;
	sub_8215C090(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8215E748;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E754;
	sub_821837D0(ctx, base);
	// bl 0x8215c090
	ctx.lr = 0x8215E758;
	sub_8215C090(ctx, base);
	// bl 0x821147b8
	ctx.lr = 0x8215E75C;
	sub_821147B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E764;
	sub_821837D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8215E76C"))) PPC_WEAK_FUNC(sub_8215E76C);
PPC_FUNC_IMPL(__imp__sub_8215E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215E770"))) PPC_WEAK_FUNC(sub_8215E770);
PPC_FUNC_IMPL(__imp__sub_8215E770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215E778;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x8215bd18
	ctx.lr = 0x8215E788;
	sub_8215BD18(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,51200
	ctx.r29.u64 = ctx.r11.u64 | 51200;
loc_8215E790:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bd28
	ctx.lr = 0x8215E798;
	sub_8215BD28(ctx, base);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8215bd18
	ctx.lr = 0x8215E7A4;
	sub_8215BD18(ctx, base);
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 33, ctx.xer);
	// blt cr6,0x8215e790
	if (ctx.cr6.lt) goto loc_8215E790;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7B4;
	sub_8215BD28(ctx, base);
	// li r11,10002
	ctx.r11.s64 = 10002;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7C4;
	sub_8215BD28(ctx, base);
	// li r10,10102
	ctx.r10.s64 = 10102;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7D4;
	sub_8215BD28(ctx, base);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7E0;
	sub_8215BD28(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7F0;
	sub_8215BD28(ctx, base);
	// stb r31,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215bd28
	ctx.lr = 0x8215E7FC;
	sub_8215BD28(ctx, base);
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r30.u8);
	// bl 0x8215bec8
	ctx.lr = 0x8215E804;
	sub_8215BEC8(ctx, base);
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// bl 0x8215bec8
	ctx.lr = 0x8215E80C;
	sub_8215BEC8(ctx, base);
	// addi r3,r3,580
	ctx.r3.s64 = ctx.r3.s64 + 580;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822331c8
	ctx.lr = 0x8215E818;
	sub_822331C8(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x8215E81C;
	sub_8215BEC8(ctx, base);
	// stb r30,624(r3)
	PPC_STORE_U8(ctx.r3.u32 + 624, ctx.r30.u8);
	// li r29,2
	ctx.r29.s64 = 2;
loc_8215E824:
	// bl 0x8215bec8
	ctx.lr = 0x8215E828;
	sub_8215BEC8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// stb r29,611(r11)
	PPC_STORE_U8(ctx.r11.u32 + 611, ctx.r29.u8);
	// blt cr6,0x8215e824
	if (ctx.cr6.lt) goto loc_8215E824;
	// bl 0x8215bec8
	ctx.lr = 0x8215E840;
	sub_8215BEC8(ctx, base);
	// stb r30,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, ctx.r30.u8);
	// bl 0x82175710
	ctx.lr = 0x8215E848;
	sub_82175710(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215E850"))) PPC_WEAK_FUNC(sub_8215E850);
PPC_FUNC_IMPL(__imp__sub_8215E850) {
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
	// bl 0x82183078
	ctx.lr = 0x8215E868;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E874;
	sub_821837D0(ctx, base);
	// bl 0x8215d7a8
	ctx.lr = 0x8215E878;
	sub_8215D7A8(ctx, base);
	// bl 0x8215d818
	ctx.lr = 0x8215E87C;
	sub_8215D818(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8215E880;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215e898
	if (ctx.cr6.eq) goto loc_8215E898;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x8215E894;
	sub_82183448(ctx, base);
	// b 0x8215e8a0
	goto loc_8215E8A0;
loc_8215E898:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x8215E8A0;
	sub_821845A0(ctx, base);
loc_8215E8A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215e8ac
	if (ctx.cr6.eq) goto loc_8215E8AC;
	// bl 0x82176a00
	ctx.lr = 0x8215E8AC;
	sub_82176A00(ctx, base);
loc_8215E8AC:
	// bl 0x8215d9d8
	ctx.lr = 0x8215E8B0;
	sub_8215D9D8(ctx, base);
	// bl 0x8215ddc8
	ctx.lr = 0x8215E8B4;
	sub_8215DDC8(ctx, base);
	// bl 0x8215db28
	ctx.lr = 0x8215E8B8;
	sub_8215DB28(ctx, base);
	// bl 0x8215db98
	ctx.lr = 0x8215E8BC;
	sub_8215DB98(ctx, base);
	// bl 0x8215e0e0
	ctx.lr = 0x8215E8C0;
	sub_8215E0E0(ctx, base);
	// bl 0x8215e070
	ctx.lr = 0x8215E8C4;
	sub_8215E070(ctx, base);
	// bl 0x820ecd30
	ctx.lr = 0x8215E8C8;
	sub_820ECD30(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-4984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4984, ctx.r11.u32);
	// bl 0x8215dc08
	ctx.lr = 0x8215E8D8;
	sub_8215DC08(ctx, base);
	// bl 0x8215dc78
	ctx.lr = 0x8215E8DC;
	sub_8215DC78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821767c0
	ctx.lr = 0x8215E8E4;
	sub_821767C0(ctx, base);
	// bl 0x8215e770
	ctx.lr = 0x8215E8E8;
	sub_8215E770(ctx, base);
	// bl 0x82081ce8
	ctx.lr = 0x8215E8EC;
	sub_82081CE8(ctx, base);
	// bl 0x82080f80
	ctx.lr = 0x8215E8F0;
	sub_82080F80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6d50
	ctx.lr = 0x8215E8F8;
	sub_823C6D50(ctx, base);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r4,8192
	ctx.r4.s64 = 8192;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x8215d888
	ctx.lr = 0x8215E92C;
	sub_8215D888(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,-4768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4768);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8215E944:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8215e944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215E944;
	// bl 0x8215da48
	ctx.lr = 0x8215E954;
	sub_8215DA48(ctx, base);
	// bl 0x8215de38
	ctx.lr = 0x8215E958;
	sub_8215DE38(ctx, base);
	// bl 0x82083c50
	ctx.lr = 0x8215E95C;
	sub_82083C50(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e5098
	ctx.lr = 0x8215E970;
	sub_820E5098(ctx, base);
	// bl 0x82220d98
	ctx.lr = 0x8215E974;
	sub_82220D98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
	// addi r4,r10,-10688
	ctx.r4.s64 = ctx.r10.s64 + -10688;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x821e8b58
	ctx.lr = 0x8215E98C;
	sub_821E8B58(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r3,-796(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -796);
	// bl 0x8218de28
	ctx.lr = 0x8215E998;
	sub_8218DE28(ctx, base);
	// bl 0x8215d8f8
	ctx.lr = 0x8215E99C;
	sub_8215D8F8(ctx, base);
	// bl 0x8215d968
	ctx.lr = 0x8215E9A0;
	sub_8215D968(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215E9A4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E9B0;
	sub_821837D0(ctx, base);
	// bl 0x8215dea8
	ctx.lr = 0x8215E9B4;
	sub_8215DEA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E9BC;
	sub_821837D0(ctx, base);
	// bl 0x8215df90
	ctx.lr = 0x8215E9C0;
	sub_8215DF90(ctx, base);
	// bl 0x82176608
	ctx.lr = 0x8215E9C4;
	sub_82176608(ctx, base);
	// bl 0x8215e000
	ctx.lr = 0x8215E9C8;
	sub_8215E000(ctx, base);
	// bl 0x8215dce8
	ctx.lr = 0x8215E9CC;
	sub_8215DCE8(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x8215E9D0;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215E9DC;
	sub_821837D0(ctx, base);
	// bl 0x8215dab8
	ctx.lr = 0x8215E9E0;
	sub_8215DAB8(ctx, base);
	// bl 0x8215dd58
	ctx.lr = 0x8215E9E4;
	sub_8215DD58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215E9EC;
	sub_821837D0(ctx, base);
	// bl 0x8215df18
	ctx.lr = 0x8215E9F0;
	sub_8215DF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x8215E9F8;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215EA00;
	sub_821837D0(ctx, base);
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

__attribute__((alias("__imp__sub_8215EA18"))) PPC_WEAK_FUNC(sub_8215EA18);
PPC_FUNC_IMPL(__imp__sub_8215EA18) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r30,-1736(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1736);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ea50
	if (ctx.cr6.eq) goto loc_8215EA50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d1658
	ctx.lr = 0x8215EA44;
	sub_821D1658(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EA50;
	sub_82183E40(ctx, base);
loc_8215EA50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1736, ctx.r11.u32);
	// bl 0x820833b8
	ctx.lr = 0x8215EA5C;
	sub_820833B8(ctx, base);
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// lwz r3,21780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ea80
	if (ctx.cr6.eq) goto loc_8215EA80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EA80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21780, ctx.r11.u32);
	// bl 0x82186998
	ctx.lr = 0x8215EA8C;
	sub_82186998(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r31,21792(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21792);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215eab0
	if (ctx.cr6.eq) goto loc_8215EAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218e4b0
	ctx.lr = 0x8215EAA4;
	sub_8218E4B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EAB0;
	sub_82183E40(ctx, base);
loc_8215EAB0:
	// bl 0x82189a00
	ctx.lr = 0x8215EAB4;
	sub_82189A00(ctx, base);
	// bl 0x82190020
	ctx.lr = 0x8215EAB8;
	sub_82190020(ctx, base);
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

__attribute__((alias("__imp__sub_8215EAD0"))) PPC_WEAK_FUNC(sub_8215EAD0);
PPC_FUNC_IMPL(__imp__sub_8215EAD0) {
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
	// lwz r31,-7472(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -7472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215eb08
	if (ctx.cr6.eq) goto loc_8215EB08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aed78
	ctx.lr = 0x8215EAFC;
	sub_821AED78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EB08;
	sub_82183E40(ctx, base);
loc_8215EB08:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7472(r30)
	PPC_STORE_U32(ctx.r30.u32 + -7472, ctx.r11.u32);
	// lwz r30,-7476(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7476);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215eb34
	if (ctx.cr6.eq) goto loc_8215EB34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aed08
	ctx.lr = 0x8215EB28;
	sub_821AED08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EB34;
	sub_82183E40(ctx, base);
loc_8215EB34:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7476, ctx.r11.u32);
	// lwz r31,-19016(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19016);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215eb60
	if (ctx.cr6.eq) goto loc_8215EB60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a6f38
	ctx.lr = 0x8215EB54;
	sub_821A6F38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EB60;
	sub_82183E40(ctx, base);
loc_8215EB60:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19016(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19016, ctx.r11.u32);
	// lwz r3,-7460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215eb8c
	if (ctx.cr6.eq) goto loc_8215EB8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EB8C:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-7460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7460, ctx.r11.u32);
	// lwz r31,-1212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1212);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ebb8
	if (ctx.cr6.eq) goto loc_8215EBB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dcfd8
	ctx.lr = 0x8215EBAC;
	sub_821DCFD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EBB8;
	sub_82183E40(ctx, base);
loc_8215EBB8:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1212(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1212, ctx.r11.u32);
	// lwz r3,-8200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ebe4
	if (ctx.cr6.eq) goto loc_8215EBE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EBE4:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8200, ctx.r11.u32);
	// lwz r3,-19232(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ec10
	if (ctx.cr6.eq) goto loc_8215EC10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EC10:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19232(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19232, ctx.r11.u32);
	// lwz r3,-8196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ec3c
	if (ctx.cr6.eq) goto loc_8215EC3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EC3C:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8196, ctx.r11.u32);
	// lwz r31,-1216(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1216);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ec68
	if (ctx.cr6.eq) goto loc_8215EC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dced0
	ctx.lr = 0x8215EC5C;
	sub_821DCED0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EC68;
	sub_82183E40(ctx, base);
loc_8215EC68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1216(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1216, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215EC88"))) PPC_WEAK_FUNC(sub_8215EC88);
PPC_FUNC_IMPL(__imp__sub_8215EC88) {
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
	// lwz r31,1092(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ecc0
	if (ctx.cr6.eq) goto loc_8215ECC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231e18
	ctx.lr = 0x8215ECB4;
	sub_82231E18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ECC0;
	sub_82183E40(ctx, base);
loc_8215ECC0:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r11.u32);
	// lwz r3,-468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ecec
	if (ctx.cr6.eq) goto loc_8215ECEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215ECEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215ECEC:
	// lis r30,-32186
	ctx.r30.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -468, ctx.r11.u32);
	// lwz r31,27156(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27156);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ed18
	if (ctx.cr6.eq) goto loc_8215ED18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dfe80
	ctx.lr = 0x8215ED0C;
	sub_820DFE80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ED18;
	sub_82183E40(ctx, base);
loc_8215ED18:
	// lis r31,-32186
	ctx.r31.s64 = -2109341696;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27156, ctx.r11.u32);
	// lwz r30,27160(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ed44
	if (ctx.cr6.eq) goto loc_8215ED44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82084a28
	ctx.lr = 0x8215ED38;
	sub_82084A28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ED44;
	sub_82183E40(ctx, base);
loc_8215ED44:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27160, ctx.r11.u32);
	// lwz r3,-484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ed70
	if (ctx.cr6.eq) goto loc_8215ED70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215ED70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215ED70:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-484(r30)
	PPC_STORE_U32(ctx.r30.u32 + -484, ctx.r11.u32);
	// lwz r30,-2048(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2048);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ed9c
	if (ctx.cr6.eq) goto loc_8215ED9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8215ED90;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215ED9C;
	sub_82183E40(ctx, base);
loc_8215ED9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2048, ctx.r11.u32);
	// bl 0x82083a98
	ctx.lr = 0x8215EDA8;
	sub_82083A98(ctx, base);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lwz r30,-432(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -432);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215edcc
	if (ctx.cr6.eq) goto loc_8215EDCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821632e8
	ctx.lr = 0x8215EDC0;
	sub_821632E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EDCC;
	sub_82183E40(ctx, base);
loc_8215EDCC:
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -432, ctx.r11.u32);
	// lwz r3,-444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215edf8
	if (ctx.cr6.eq) goto loc_8215EDF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EDF8:
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-444(r30)
	PPC_STORE_U32(ctx.r30.u32 + -444, ctx.r11.u32);
	// lwz r30,-4768(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4768);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ee24
	if (ctx.cr6.eq) goto loc_8215EE24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c6cb0
	ctx.lr = 0x8215EE18;
	sub_823C6CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EE24;
	sub_82183E40(ctx, base);
loc_8215EE24:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4768, ctx.r11.u32);
	// lwz r31,-3296(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3296);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ee50
	if (ctx.cr6.eq) goto loc_8215EE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1c30
	ctx.lr = 0x8215EE44;
	sub_821B1C30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EE50;
	sub_82183E40(ctx, base);
loc_8215EE50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-3296(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3296, ctx.r11.u32);
	// bl 0x820818a0
	ctx.lr = 0x8215EE5C;
	sub_820818A0(ctx, base);
	// bl 0x82081298
	ctx.lr = 0x8215EE60;
	sub_82081298(ctx, base);
	// bl 0x82080ff8
	ctx.lr = 0x8215EE64;
	sub_82080FF8(ctx, base);
	// lis r31,-32185
	ctx.r31.s64 = -2109276160;
	// lwz r3,-18240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215ee88
	if (ctx.cr6.eq) goto loc_8215EE88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EE88:
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18240, ctx.r11.u32);
	// lwz r3,15460(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215eeb4
	if (ctx.cr6.eq) goto loc_8215EEB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EEB4:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15460, ctx.r11.u32);
	// lwz r30,-8552(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8552);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215eee0
	if (ctx.cr6.eq) goto loc_8215EEE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2f10
	ctx.lr = 0x8215EED4;
	sub_820B2F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EEE0;
	sub_82183E40(ctx, base);
loc_8215EEE0:
	// lis r30,-32185
	ctx.r30.s64 = -2109276160;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8552, ctx.r11.u32);
	// lwz r31,-18236(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -18236);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ef0c
	if (ctx.cr6.eq) goto loc_8215EF0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094ee0
	ctx.lr = 0x8215EF00;
	sub_82094EE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF0C;
	sub_82183E40(ctx, base);
loc_8215EF0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-18236(r30)
	PPC_STORE_U32(ctx.r30.u32 + -18236, ctx.r11.u32);
	// bl 0x8216c2a0
	ctx.lr = 0x8215EF18;
	sub_8216C2A0(ctx, base);
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lwz r31,14516(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14516);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215ef3c
	if (ctx.cr6.eq) goto loc_8215EF3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166140
	ctx.lr = 0x8215EF30;
	sub_82166140(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF3C;
	sub_82183E40(ctx, base);
loc_8215EF3C:
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14516, ctx.r11.u32);
	// lwz r30,-420(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -420);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ef68
	if (ctx.cr6.eq) goto loc_8215EF68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82163bf0
	ctx.lr = 0x8215EF5C;
	sub_82163BF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF68;
	sub_82183E40(ctx, base);
loc_8215EF68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -420, ctx.r11.u32);
	// bl 0x82114250
	ctx.lr = 0x8215EF74;
	sub_82114250(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r30,1124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215ef98
	if (ctx.cr6.eq) goto loc_8215EF98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822367f8
	ctx.lr = 0x8215EF8C;
	sub_822367F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EF98;
	sub_82183E40(ctx, base);
loc_8215EF98:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// lwz r3,-752(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215efc4
	if (ctx.cr6.eq) goto loc_8215EFC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215EFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215EFC4:
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-752(r30)
	PPC_STORE_U32(ctx.r30.u32 + -752, ctx.r11.u32);
	// lwz r30,15464(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15464);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215eff0
	if (ctx.cr6.eq) goto loc_8215EFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8215EFE4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215EFF0;
	sub_82183E40(ctx, base);
loc_8215EFF0:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15464, ctx.r11.u32);
	// lwz r31,1088(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215f01c
	if (ctx.cr6.eq) goto loc_8215F01C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230770
	ctx.lr = 0x8215F010;
	sub_82230770(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215F01C;
	sub_82183E40(ctx, base);
loc_8215F01C:
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r11.u32);
	// lwz r3,15472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f048
	if (ctx.cr6.eq) goto loc_8215F048;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F048:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15472, ctx.r11.u32);
	// bl 0x821764f0
	ctx.lr = 0x8215F054;
	sub_821764F0(ctx, base);
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lwz r3,16660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f078
	if (ctx.cr6.eq) goto loc_8215F078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F078:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16660, ctx.r11.u32);
	// lwz r3,-796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f0a4
	if (ctx.cr6.eq) goto loc_8215F0A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F0A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-796(r30)
	PPC_STORE_U32(ctx.r30.u32 + -796, ctx.r11.u32);
	// bl 0x82220e10
	ctx.lr = 0x8215F0B4;
	sub_82220E10(ctx, base);
	// bl 0x820e5048
	ctx.lr = 0x8215F0B8;
	sub_820E5048(ctx, base);
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

__attribute__((alias("__imp__sub_8215F0D0"))) PPC_WEAK_FUNC(sub_8215F0D0);
PPC_FUNC_IMPL(__imp__sub_8215F0D0) {
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
	// bl 0x82183078
	ctx.lr = 0x8215F0E4;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821837d0
	ctx.lr = 0x8215F0F0;
	sub_821837D0(ctx, base);
	// bl 0x8215e150
	ctx.lr = 0x8215F0F4;
	sub_8215E150(ctx, base);
	// bl 0x8215e468
	ctx.lr = 0x8215F0F8;
	sub_8215E468(ctx, base);
	// bl 0x8215e850
	ctx.lr = 0x8215F0FC;
	sub_8215E850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215F104;
	sub_821837D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F118"))) PPC_WEAK_FUNC(sub_8215F118);
PPC_FUNC_IMPL(__imp__sub_8215F118) {
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
	// bl 0x8215ea18
	ctx.lr = 0x8215F128;
	sub_8215EA18(ctx, base);
	// bl 0x8215ead0
	ctx.lr = 0x8215F12C;
	sub_8215EAD0(ctx, base);
	// bl 0x8215ec88
	ctx.lr = 0x8215F130;
	sub_8215EC88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F140"))) PPC_WEAK_FUNC(sub_8215F140);
PPC_FUNC_IMPL(__imp__sub_8215F140) {
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
	// lwsync 
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -472, ctx.r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f180
	if (ctx.cr6.eq) goto loc_8215F180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x8215F180;
	sub_82183E40(ctx, base);
loc_8215F180:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8215F19C"))) PPC_WEAK_FUNC(sub_8215F19C);
PPC_FUNC_IMPL(__imp__sub_8215F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F1A0"))) PPC_WEAK_FUNC(sub_8215F1A0);
PPC_FUNC_IMPL(__imp__sub_8215F1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215F1A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8215F1B4;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8215F1BC;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215F1C8;
	sub_821837D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,511
	ctx.r5.s64 = 511;
	// addi r3,r11,-23744
	ctx.r3.s64 = ctx.r11.s64 + -23744;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8218f128
	ctx.lr = 0x8215F1DC;
	sub_8218F128(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8218f468
	ctx.lr = 0x8215F1E8;
	sub_8218F468(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// addi r10,r3,2047
	ctx.r10.s64 = ctx.r3.s64 + 2047;
	// rlwinm r30,r10,0,0,20
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF800;
	// bl 0x82183850
	ctx.lr = 0x8215F1F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8215f210
	if (ctx.cr6.eq) goto loc_8215F210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x8215F20C;
	sub_82183448(ctx, base);
	// b 0x8215f21c
	goto loc_8215F21C;
loc_8215F210:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8215F21C;
	sub_821845A0(ctx, base);
loc_8215F21C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r11,r30,2047
	ctx.r11.s64 = ctx.r30.s64 + 2047;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r11,21,11,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f248
	ctx.lr = 0x8215F234;
	sub_8218F248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f310
	ctx.lr = 0x8215F23C;
	sub_8218F310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215F244;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8215F24C"))) PPC_WEAK_FUNC(sub_8215F24C);
PPC_FUNC_IMPL(__imp__sub_8215F24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F250"))) PPC_WEAK_FUNC(sub_8215F250);
PPC_FUNC_IMPL(__imp__sub_8215F250) {
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
	// bl 0x82088650
	ctx.lr = 0x8215F26C;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x8215F274;
	sub_82182F58(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215f298
	if (!ctx.cr6.eq) goto loc_8215F298;
loc_8215F284:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82088648
	ctx.lr = 0x8215F28C;
	sub_82088648(ctx, base);
	// lwz r11,-19048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f284
	if (ctx.cr6.eq) goto loc_8215F284;
loc_8215F298:
	// bl 0x82176c08
	ctx.lr = 0x8215F29C;
	sub_82176C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f2a8
	if (!ctx.cr6.eq) goto loc_8215F2A8;
	// bl 0x82176bf0
	ctx.lr = 0x8215F2A8;
	sub_82176BF0(ctx, base);
loc_8215F2A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215f1a0
	ctx.lr = 0x8215F2B0;
	sub_8215F1A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82088730
	ctx.lr = 0x8215F2C0;
	sub_82088730(ctx, base);
}

__attribute__((alias("__imp__sub_8215F2C0"))) PPC_WEAK_FUNC(sub_8215F2C0);
PPC_FUNC_IMPL(__imp__sub_8215F2C0) {
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
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r5,r10,-3504
	ctx.r5.s64 = ctx.r10.s64 + -3504;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820885f0
	ctx.lr = 0x8215F30C;
	sub_820885F0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwsync 
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-472(r9)
	PPC_STORE_U32(ctx.r9.u32 + -472, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F334"))) PPC_WEAK_FUNC(sub_8215F334);
PPC_FUNC_IMPL(__imp__sub_8215F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F338"))) PPC_WEAK_FUNC(sub_8215F338);
PPC_FUNC_IMPL(__imp__sub_8215F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-23724
	ctx.r10.s64 = ctx.r11.s64 + -23724;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8218b208
	sub_8218B208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F348"))) PPC_WEAK_FUNC(sub_8215F348);
PPC_FUNC_IMPL(__imp__sub_8215F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F370"))) PPC_WEAK_FUNC(sub_8215F370);
PPC_FUNC_IMPL(__imp__sub_8215F370) {
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
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x8215F394;
	sub_8218B2D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8218a128
	ctx.lr = 0x8215F3A4;
	sub_8218A128(ctx, base);
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

__attribute__((alias("__imp__sub_8215F3BC"))) PPC_WEAK_FUNC(sub_8215F3BC);
PPC_FUNC_IMPL(__imp__sub_8215F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F3C0"))) PPC_WEAK_FUNC(sub_8215F3C0);
PPC_FUNC_IMPL(__imp__sub_8215F3C0) {
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
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// stw r5,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f40c
	if (ctx.cr6.eq) goto loc_8215F40C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F3F8;
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
	ctx.lr = 0x8215F40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215F40C:
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

__attribute__((alias("__imp__sub_8215F424"))) PPC_WEAK_FUNC(sub_8215F424);
PPC_FUNC_IMPL(__imp__sub_8215F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F428"))) PPC_WEAK_FUNC(sub_8215F428);
PPC_FUNC_IMPL(__imp__sub_8215F428) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f468
	if (ctx.cr6.eq) goto loc_8215F468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215F454;
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
loc_8215F468:
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

__attribute__((alias("__imp__sub_8215F47C"))) PPC_WEAK_FUNC(sub_8215F47C);
PPC_FUNC_IMPL(__imp__sub_8215F47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F480"))) PPC_WEAK_FUNC(sub_8215F480);
PPC_FUNC_IMPL(__imp__sub_8215F480) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F48C"))) PPC_WEAK_FUNC(sub_8215F48C);
PPC_FUNC_IMPL(__imp__sub_8215F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F490"))) PPC_WEAK_FUNC(sub_8215F490);
PPC_FUNC_IMPL(__imp__sub_8215F490) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// addi r10,r4,54
	ctx.r10.s64 = ctx.r4.s64 + 54;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F4B0"))) PPC_WEAK_FUNC(sub_8215F4B0);
PPC_FUNC_IMPL(__imp__sub_8215F4B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215f4e0
	if (ctx.cr6.eq) goto loc_8215F4E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215f4e0
	if (ctx.cr6.eq) goto loc_8215F4E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215f4e0
	if (ctx.cr6.eq) goto loc_8215F4E0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8215F4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F4E8"))) PPC_WEAK_FUNC(sub_8215F4E8);
PPC_FUNC_IMPL(__imp__sub_8215F4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r3,-18236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82094d78
	sub_82094D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215F4FC"))) PPC_WEAK_FUNC(sub_8215F4FC);
PPC_FUNC_IMPL(__imp__sub_8215F4FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F500"))) PPC_WEAK_FUNC(sub_8215F500);
PPC_FUNC_IMPL(__imp__sub_8215F500) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215f520
	if (ctx.cr6.lt) goto loc_8215F520;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bge cr6,0x8215f520
	if (!ctx.cr6.lt) goto loc_8215F520;
	// addi r11,r4,42
	ctx.r11.s64 = ctx.r4.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8215F520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F528"))) PPC_WEAK_FUNC(sub_8215F528);
PPC_FUNC_IMPL(__imp__sub_8215F528) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215f548
	if (ctx.cr6.lt) goto loc_8215F548;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bge cr6,0x8215f548
	if (!ctx.cr6.lt) goto loc_8215F548;
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8215F548:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F550"))) PPC_WEAK_FUNC(sub_8215F550);
PPC_FUNC_IMPL(__imp__sub_8215F550) {
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
	ctx.lr = 0x8215F568;
	sub_8218B1E8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23724
	ctx.r9.s64 = ctx.r10.s64 + -23724;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F5AC"))) PPC_WEAK_FUNC(sub_8215F5AC);
PPC_FUNC_IMPL(__imp__sub_8215F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F5B0"))) PPC_WEAK_FUNC(sub_8215F5B0);
PPC_FUNC_IMPL(__imp__sub_8215F5B0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23724
	ctx.r10.s64 = ctx.r11.s64 + -23724;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x8215F5DC;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215f5f8
	if (ctx.cr6.eq) goto loc_8215F5F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215F5F4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215F5F8:
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

__attribute__((alias("__imp__sub_8215F610"))) PPC_WEAK_FUNC(sub_8215F610);
PPC_FUNC_IMPL(__imp__sub_8215F610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,69
	ctx.r8.s64 = ctx.r11.s64 + 69;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -468);
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215F630"))) PPC_WEAK_FUNC(sub_8215F630);
PPC_FUNC_IMPL(__imp__sub_8215F630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215F638;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821855f0
	ctx.lr = 0x8215F644;
	sub_821855F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-23696
	ctx.r9.s64 = ctx.r11.s64 + -23696;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r11,r29,212
	ctx.r11.s64 = ctx.r29.s64 + 212;
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
	// stw r8,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r8.u32);
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// stw r30,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r30.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// stw r30,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r30.u32);
	// stw r30,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r30.u32);
	// stw r30,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r30.u32);
loc_8215F698:
	// stw r30,-140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -140, ctx.r30.u32);
	// stw r30,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r30.u32);
	// stw r30,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215f698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215F698;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r26,r29,284
	ctx.r26.s64 = ctx.r29.s64 + 284;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r25,r11,-23680
	ctx.r25.s64 = ctx.r11.s64 + -23680;
loc_8215F6C0:
	// stw r30,-20(r26)
	PPC_STORE_U32(ctx.r26.u32 + -20, ctx.r30.u32);
	// stw r30,-8(r26)
	PPC_STORE_U32(ctx.r26.u32 + -8, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x8215F6CC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8215f6e4
	if (ctx.cr6.eq) goto loc_8215F6E4;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82183448
	ctx.lr = 0x8215F6E0;
	sub_82183448(ctx, base);
	// b 0x8215f6ec
	goto loc_8215F6EC;
loc_8215F6E4:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x8215F6EC;
	sub_821845A0(ctx, base);
loc_8215F6EC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215f724
	if (ctx.cr6.eq) goto loc_8215F724;
	// bl 0x8218b1e8
	ctx.lr = 0x8215F6FC;
	sub_8218B1E8(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// b 0x8215f728
	goto loc_8215F728;
loc_8215F724:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215F728:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x8215f6c0
	if (ctx.cr6.lt) goto loc_8215F6C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8215F744;
	sub_822AA648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8215F750"))) PPC_WEAK_FUNC(sub_8215F750);
PPC_FUNC_IMPL(__imp__sub_8215F750) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-23696
	ctx.r10.s64 = ctx.r11.s64 + -23696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82185670
	ctx.lr = 0x8215F77C;
	sub_82185670(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215f798
	if (ctx.cr6.eq) goto loc_8215F798;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8215F794;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8215F798:
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

__attribute__((alias("__imp__sub_8215F7B0"))) PPC_WEAK_FUNC(sub_8215F7B0);
PPC_FUNC_IMPL(__imp__sub_8215F7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215F7B8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215f7d8
	if (!ctx.cr6.eq) goto loc_8215F7D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8215F7D8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x8215F7F4;
	sub_822AA648(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8215f824
	if (!ctx.cr6.gt) goto loc_8215F824;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8215F810:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x8215f810
	if (ctx.cr6.lt) goto loc_8215F810;
loc_8215F824:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x8215F834;
	sub_821847A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215F840"))) PPC_WEAK_FUNC(sub_8215F840);
PPC_FUNC_IMPL(__imp__sub_8215F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215F848;
	sub_8224878C(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8215f8a8
	if (!ctx.cr6.eq) goto loc_8215F8A8;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// subfe r30,r31,r11
	temp.u8 = (~ctx.r31.u32 + ctx.r11.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r31.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8215f8ac
	goto loc_8215F8AC;
loc_8215F8A8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8215F8AC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-600
	ctx.r11.s64 = ctx.r11.s64 + -600;
	// lwz r31,112(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8215f8cc
	if (ctx.cr6.eq) goto loc_8215F8CC;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r31.u32);
	// b 0x8215f8d4
	goto loc_8215F8D4;
loc_8215F8CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8215f960
	if (ctx.cr6.eq) goto loc_8215F960;
loc_8215F8D4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f944
	if (ctx.cr6.eq) goto loc_8215F944;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f928
	if (ctx.cr6.eq) goto loc_8215F928;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8215f944
	if (ctx.cr6.eq) goto loc_8215F944;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
loc_8215F928:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
loc_8215F944:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r29.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
loc_8215F960:
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215F964"))) PPC_WEAK_FUNC(sub_8215F964);
PPC_FUNC_IMPL(__imp__sub_8215F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215F968"))) PPC_WEAK_FUNC(sub_8215F968);
PPC_FUNC_IMPL(__imp__sub_8215F968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8215f9bc
	if (!ctx.cr6.eq) goto loc_8215F9BC;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8215F9BC:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r11,-8976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fa40
	if (ctx.cr6.eq) goto loc_8215FA40;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215fa24
	if (ctx.cr6.eq) goto loc_8215FA24;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8215fa40
	if (ctx.cr6.eq) goto loc_8215FA40;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
loc_8215FA24:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
loc_8215FA40:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215FA60"))) PPC_WEAK_FUNC(sub_8215FA60);
PPC_FUNC_IMPL(__imp__sub_8215FA60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FA88;
	sub_82163A60(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r31,18
	ctx.r9.s64 = ctx.r31.s64 + 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-8968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8215faac
	if (ctx.cr6.eq) goto loc_8215FAAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215facc
	goto loc_8215FACC;
loc_8215FAAC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x8215fac8
	if (ctx.cr6.eq) goto loc_8215FAC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209ee40
	ctx.lr = 0x8215FAC4;
	sub_8209EE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8215FAC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8215FACC:
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

__attribute__((alias("__imp__sub_8215FAE4"))) PPC_WEAK_FUNC(sub_8215FAE4);
PPC_FUNC_IMPL(__imp__sub_8215FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FAE8"))) PPC_WEAK_FUNC(sub_8215FAE8);
PPC_FUNC_IMPL(__imp__sub_8215FAE8) {
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
	// addi r11,r4,54
	ctx.r11.s64 = ctx.r4.s64 + 54;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8215fb50
	if (!ctx.cr6.eq) goto loc_8215FB50;
	// addi r11,r4,30
	ctx.r11.s64 = ctx.r4.s64 + 30;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,-8968(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8968);
	// bl 0x8209ec80
	ctx.lr = 0x8215FB30;
	sub_8209EC80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fb48
	if (ctx.cr6.eq) goto loc_8215FB48;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x8215fb54
	goto loc_8215FB54;
loc_8215FB48:
	// li r11,5
	ctx.r11.s64 = 5;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8215FB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215FB54:
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

__attribute__((alias("__imp__sub_8215FB6C"))) PPC_WEAK_FUNC(sub_8215FB6C);
PPC_FUNC_IMPL(__imp__sub_8215FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FB70"))) PPC_WEAK_FUNC(sub_8215FB70);
PPC_FUNC_IMPL(__imp__sub_8215FB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215FB78;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8215FB98;
	sub_82163A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x8215fc3c
	if (ctx.cr6.eq) goto loc_8215FC3C;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// addi r10,r31,23
	ctx.r10.s64 = ctx.r31.s64 + 23;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-8960(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8960);
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215fbe8
	if (ctx.cr6.eq) goto loc_8215FBE8;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215fbdc
	if (!ctx.cr6.eq) goto loc_8215FBDC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8215fc3c
	if (ctx.cr6.eq) goto loc_8215FC3C;
loc_8215FBDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a0c38
	ctx.lr = 0x8215FBE4;
	sub_820A0C38(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8215FBE8:
	// lbz r4,7(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bne cr6,0x8215fbf8
	if (!ctx.cr6.eq) goto loc_8215FBF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8215FBF8:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x8215FC04;
	sub_8209ED88(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8215fc2c
	if (ctx.cr6.eq) goto loc_8215FC2C;
	// addi r11,r31,42
	ctx.r11.s64 = ctx.r31.s64 + 42;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8215FC2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-8960(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8960);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a1eb0
	ctx.lr = 0x8215FC3C;
	sub_820A1EB0(ctx, base);
loc_8215FC3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8215FC44"))) PPC_WEAK_FUNC(sub_8215FC44);
PPC_FUNC_IMPL(__imp__sub_8215FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FC48"))) PPC_WEAK_FUNC(sub_8215FC48);
PPC_FUNC_IMPL(__imp__sub_8215FC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215FC50;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r4,18
	ctx.r9.s64 = ctx.r4.s64 + 18;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,-8968(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,-8960(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8960);
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// bge cr6,0x8215fca4
	if (!ctx.cr6.lt) goto loc_8215FCA4;
	// addi r9,r4,51
	ctx.r9.s64 = ctx.r4.s64 + 51;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8215fce4
	if (!ctx.cr6.eq) goto loc_8215FCE4;
loc_8215FCA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215fce4
	if (ctx.cr6.eq) goto loc_8215FCE4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FCBC;
	sub_82163A60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209f430
	ctx.lr = 0x8215FCD4;
	sub_8209F430(ctx, base);
	// addi r10,r31,54
	ctx.r10.s64 = ctx.r31.s64 + 54;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r9.u32);
loc_8215FCE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215FCEC"))) PPC_WEAK_FUNC(sub_8215FCEC);
PPC_FUNC_IMPL(__imp__sub_8215FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215FCF0"))) PPC_WEAK_FUNC(sub_8215FCF0);
PPC_FUNC_IMPL(__imp__sub_8215FCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8215FCF8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,42
	ctx.r11.s64 = ctx.r4.s64 + 42;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r10,r26,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8215fd88
	if (ctx.cr6.eq) goto loc_8215FD88;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bge cr6,0x8215fd88
	if (!ctx.cr6.lt) goto loc_8215FD88;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r10,r4,51
	ctx.r10.s64 = ctx.r4.s64 + 51;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,-8960(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwz r28,-8968(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8968);
	// lwzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8215fd88
	if (!ctx.cr6.eq) goto loc_8215FD88;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a78
	ctx.lr = 0x8215FD50;
	sub_82163A78(ctx, base);
	// lbz r4,7(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bne cr6,0x8215fd64
	if (!ctx.cr6.eq) goto loc_8215FD64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8215FD64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8209ed88
	ctx.lr = 0x8215FD6C;
	sub_8209ED88(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a1eb0
	ctx.lr = 0x8215FD80;
	sub_820A1EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r26,r27
	PPC_STORE_U32(ctx.r26.u32 + ctx.r27.u32, ctx.r11.u32);
loc_8215FD88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8215FD90"))) PPC_WEAK_FUNC(sub_8215FD90);
PPC_FUNC_IMPL(__imp__sub_8215FD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8215FD98;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FDB4;
	sub_82163A60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x8215ff28
	if (ctx.cr6.eq) goto loc_8215FF28;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x8215FDD8;
	sub_8209ED88(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215fe94
	if (!ctx.cr6.eq) goto loc_8215FE94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820f6038
	ctx.lr = 0x8215FDF0;
	sub_820F6038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fdfc
	if (ctx.cr6.eq) goto loc_8215FDFC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8215FDFC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -752);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82214098
	ctx.lr = 0x8215FE10;
	sub_82214098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fe1c
	if (ctx.cr6.eq) goto loc_8215FE1C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8215FE1C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215fe44
	if (!ctx.cr6.eq) goto loc_8215FE44;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8215fe44
	if (!ctx.cr6.eq) goto loc_8215FE44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b5d00
	ctx.lr = 0x8215FE3C;
	sub_820B5D00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8215FE44:
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bge cr6,0x8215fe84
	if (!ctx.cr6.lt) goto loc_8215FE84;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r31,23
	ctx.r9.s64 = ctx.r31.s64 + 23;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-8960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8960);
	// lwzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fe74
	if (ctx.cr6.eq) goto loc_8215FE74;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215fe7c
	if (!ctx.cr6.eq) goto loc_8215FE7C;
loc_8215FE74:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8215fe84
	if (ctx.cr6.eq) goto loc_8215FE84;
loc_8215FE7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a0c38
	ctx.lr = 0x8215FE84;
	sub_820A0C38(ctx, base);
loc_8215FE84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209efa8
	ctx.lr = 0x8215FE90;
	sub_8209EFA8(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8215FE94:
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// bl 0x8215bd60
	ctx.lr = 0x8215FEA4;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// bl 0x82228e00
	ctx.lr = 0x8215FEB4;
	sub_82228E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82230d40
	ctx.lr = 0x8215FEC4;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215fee0
	if (ctx.cr6.eq) goto loc_8215FEE0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r3,-732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -732);
	// bl 0x82228dd8
	ctx.lr = 0x8215FEDC;
	sub_82228DD8(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
loc_8215FEE0:
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8215fef4
	if (ctx.cr6.eq) goto loc_8215FEF4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8215ff0c
	goto loc_8215FF0C;
loc_8215FEF4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209f430
	ctx.lr = 0x8215FF0C;
	sub_8209F430(ctx, base);
loc_8215FF0C:
	// addi r11,r31,18
	ctx.r11.s64 = ctx.r31.s64 + 18;
	// addi r10,r31,54
	ctx.r10.s64 = ctx.r31.s64 + 54;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r7,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r7.u32);
	// stwx r30,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r30.u32);
loc_8215FF28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8215FF30"))) PPC_WEAK_FUNC(sub_8215FF30);
PPC_FUNC_IMPL(__imp__sub_8215FF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215FF38;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,72
	ctx.r30.s64 = 72;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
loc_8215FF4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-420(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -420);
	// bl 0x82163a60
	ctx.lr = 0x8215FF58;
	sub_82163A60(ctx, base);
	// lwz r11,-8968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8968);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215ffa4
	if (!ctx.cr6.eq) goto loc_8215FFA4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,51200
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51200, ctx.xer);
	// beq cr6,0x8215ff88
	if (ctx.cr6.eq) goto loc_8215FF88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8209ee40
	ctx.lr = 0x8215FF80;
	sub_8209EE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215ffa4
	if (ctx.cr6.eq) goto loc_8215FFA4;
loc_8215FF88:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,120
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 120, ctx.xer);
	// blt cr6,0x8215ff4c
	if (ctx.cr6.lt) goto loc_8215FF4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8215FFA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8215FFB0"))) PPC_WEAK_FUNC(sub_8215FFB0);
PPC_FUNC_IMPL(__imp__sub_8215FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8215FFB8;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160028
	if (!ctx.cr6.eq) goto loc_82160028;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82160028
	if (ctx.cr6.eq) goto loc_82160028;
	// bl 0x8215f7b0
	ctx.lr = 0x8215FFE4;
	sub_8215F7B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82160000
	if (ctx.cr6.eq) goto loc_82160000;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82160028
	if (!ctx.cr6.eq) goto loc_82160028;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82160028
	goto loc_82160028;
loc_82160000:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r11,r11,-600
	ctx.r11.s64 = ctx.r11.s64 + -600;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82160024
	if (!ctx.cr6.eq) goto loc_82160024;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// b 0x82160028
	goto loc_82160028;
loc_82160024:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82160028:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82160194
	if (ctx.cr6.gt) goto loc_82160194;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82160108
	// bdzf 4*cr6+eq,0x82160190
	// bdzf 4*cr6+eq,0x82160120
	// bne cr6,0x8216014c
	if (!ctx.cr6.eq) goto loc_8216014C;
	// bl 0x8215c068
	ctx.lr = 0x82160054;
	sub_8215C068(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8216005C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82160068;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x82160070;
	sub_820824B8(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82080000
	ctx.lr = 0x82160088;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821600a8
	if (ctx.cr6.eq) goto loc_821600A8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820d4970
	ctx.lr = 0x821600A4;
	sub_820D4970(ctx, base);
	// b 0x821600ac
	goto loc_821600AC;
loc_821600A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821600AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821600BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821600f0
	if (ctx.cr6.lt) goto loc_821600F0;
	// bne cr6,0x821600f8
	if (!ctx.cr6.eq) goto loc_821600F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x821600E0;
	sub_821830F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821600E8;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821600F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x821600F8;
	sub_821830F8(ctx, base);
loc_821600F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82160100;
	sub_821837D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82160108:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82160194
	if (!ctx.cr6.eq) goto loc_82160194;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82160120:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8976(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216018c
	if (ctx.cr6.eq) goto loc_8216018C;
	// bl 0x8209eda0
	ctx.lr = 0x82160134;
	sub_8209EDA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8216014C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bgt 0x82160194
	if (ctx.cr0.gt) goto loc_82160194;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lwz r3,-8976(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82160180
	if (ctx.cr6.eq) goto loc_82160180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82160180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82160180:
	// stw r30,-8976(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8976, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8216018C:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82160190:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82160194:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8216019C"))) PPC_WEAK_FUNC(sub_8216019C);
PPC_FUNC_IMPL(__imp__sub_8216019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821601A0"))) PPC_WEAK_FUNC(sub_821601A0);
PPC_FUNC_IMPL(__imp__sub_821601A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x821601A8;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r25,r3,216
	ctx.r25.s64 = ctx.r3.s64 + 216;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// subfic r19,r3,-124
	ctx.xer.ca = ctx.r3.u32 <= 4294967172;
	ctx.r19.s64 = -124 - ctx.r3.s64;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
	// lis r21,-32178
	ctx.r21.s64 = -2108817408;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// lis r24,-32182
	ctx.r24.s64 = -2109079552;
loc_821601D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-420(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -420);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// bl 0x82163a60
	ctx.lr = 0x821601E0;
	sub_82163A60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x82160328
	if (ctx.cr6.eq) goto loc_82160328;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209ed88
	ctx.lr = 0x82160200;
	sub_8209ED88(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821602ac
	if (!ctx.cr6.eq) goto loc_821602AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f6038
	ctx.lr = 0x82160218;
	sub_820F6038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82160224
	if (ctx.cr6.eq) goto loc_82160224;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82160224:
	// lwz r11,-752(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -752);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82214098
	ctx.lr = 0x82160234;
	sub_82214098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82160240
	if (ctx.cr6.eq) goto loc_82160240;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82160240:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160264
	if (!ctx.cr6.eq) goto loc_82160264;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82160264
	if (!ctx.cr6.eq) goto loc_82160264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b5d00
	ctx.lr = 0x82160260;
	sub_820B5D00(ctx, base);
	// b 0x82160328
	goto loc_82160328;
loc_82160264:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bge cr6,0x8216029c
	if (!ctx.cr6.lt) goto loc_8216029C;
	// lwz r3,-8960(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8960);
	// add r11,r19,r25
	ctx.r11.u64 = ctx.r19.u64 + ctx.r25.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216028c
	if (ctx.cr6.eq) goto loc_8216028C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82160294
	if (!ctx.cr6.eq) goto loc_82160294;
loc_8216028C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8216029c
	if (ctx.cr6.eq) goto loc_8216029C;
loc_82160294:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820a0c38
	ctx.lr = 0x8216029C;
	sub_820A0C38(ctx, base);
loc_8216029C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// bl 0x8209efa8
	ctx.lr = 0x821602A8;
	sub_8209EFA8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_821602AC:
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// bl 0x8215bd60
	ctx.lr = 0x821602BC;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// bl 0x82228e00
	ctx.lr = 0x821602CC;
	sub_82228E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82230d40
	ctx.lr = 0x821602DC;
	sub_82230D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821602f4
	if (ctx.cr6.eq) goto loc_821602F4;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r3,-732(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -732);
	// bl 0x82228dd8
	ctx.lr = 0x821602F0;
	sub_82228DD8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_821602F4:
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82160308
	if (ctx.cr6.eq) goto loc_82160308;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82160320
	goto loc_82160320;
loc_82160308:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-8968(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -8968);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8209f430
	ctx.lr = 0x82160320;
	sub_8209F430(ctx, base);
loc_82160320:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r20,-144(r25)
	PPC_STORE_U32(ctx.r25.u32 + -144, ctx.r20.u32);
loc_82160328:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// blt cr6,0x821601d0
	if (ctx.cr6.lt) goto loc_821601D0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82160340"))) PPC_WEAK_FUNC(sub_82160340);
PPC_FUNC_IMPL(__imp__sub_82160340) {
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
loc_8216035C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215fb70
	ctx.lr = 0x82160370;
	sub_8215FB70(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x8216035c
	if (ctx.cr6.lt) goto loc_8216035C;
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

__attribute__((alias("__imp__sub_82160394"))) PPC_WEAK_FUNC(sub_82160394);
PPC_FUNC_IMPL(__imp__sub_82160394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160398"))) PPC_WEAK_FUNC(sub_82160398);
PPC_FUNC_IMPL(__imp__sub_82160398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821603A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lis r27,-32182
	ctx.r27.s64 = -2109079552;
loc_821603B8:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821603f4
	if (ctx.cr6.eq) goto loc_821603F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821603d8
	if (ctx.cr6.eq) goto loc_821603D8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82160400
	if (!ctx.cr6.eq) goto loc_82160400;
	// b 0x8216042c
	goto loc_8216042C;
loc_821603D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8968(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -8968);
	// bl 0x8209ed10
	ctx.lr = 0x821603E4;
	sub_8209ED10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216042c
	if (ctx.cr6.eq) goto loc_8216042C;
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
	// b 0x82160400
	goto loc_82160400;
loc_821603F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215fc48
	ctx.lr = 0x82160400;
	sub_8215FC48(ctx, base);
loc_82160400:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215fcf0
	ctx.lr = 0x8216040C;
	sub_8215FCF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8216042c
	if (ctx.cr6.eq) goto loc_8216042C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215fd90
	ctx.lr = 0x82160428;
	sub_8215FD90(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8216042C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x821603b8
	if (ctx.cr6.lt) goto loc_821603B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215ffb0
	ctx.lr = 0x82160444;
	sub_8215FFB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8216044C"))) PPC_WEAK_FUNC(sub_8216044C);
PPC_FUNC_IMPL(__imp__sub_8216044C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82160450"))) PPC_WEAK_FUNC(sub_82160450);
PPC_FUNC_IMPL(__imp__sub_82160450) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r11,-23652
	ctx.r8.s64 = ctx.r11.s64 + -23652;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8216048C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8216048c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216048C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821604AC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821604ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821604AC;
	// ld r8,144(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 144);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r7,r30,144
	ctx.r7.s64 = ctx.r30.s64 + 144;
	// addi r6,r31,160
	ctx.r6.s64 = ctx.r31.s64 + 160;
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// std r8,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r8.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ld r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 152);
	// addi r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 + 184;
	// std r5,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r5.u64);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lwz r4,160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// lwz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r7,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r7.u32);
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r6,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r6.u32);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r5,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
loc_82160528:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82160528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82160528;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r10,r30,256
	ctx.r10.s64 = ctx.r30.s64 + 256;
	// addi r8,r31,256
	ctx.r8.s64 = ctx.r31.s64 + 256;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r4,r30,288
	ctx.r4.s64 = ctx.r30.s64 + 288;
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// lwz r8,284(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r8,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r8.u32);
	// bl 0x82248a40
	ctx.lr = 0x8216058C;
	sub_82248A40(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// addi r4,r30,448
	ctx.r4.s64 = ctx.r30.s64 + 448;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x82248a40
	ctx.lr = 0x8216059C;
	sub_82248A40(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = ctx.r31.s64 + 608;
	// addi r4,r30,608
	ctx.r4.s64 = ctx.r30.s64 + 608;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x82248a40
	ctx.lr = 0x821605AC;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_821605C8"))) PPC_WEAK_FUNC(sub_821605C8);
PPC_FUNC_IMPL(__imp__sub_821605C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x821605e4
	if (ctx.cr6.lt) goto loc_821605E4;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_821605E4:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x821605f0
	if (!ctx.cr6.eq) goto loc_821605F0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_821605F0:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// li r8,80
	ctx.r8.s64 = 80;
	// addi r6,r10,15
	ctx.r6.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82160628
	if (ctx.cr6.eq) goto loc_82160628;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82160628
	if (ctx.cr6.eq) goto loc_82160628;
	// cmpwi cr6,r9,37
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 37, ctx.xer);
	// bne cr6,0x8216062c
	if (!ctx.cr6.eq) goto loc_8216062C;
loc_82160628:
	// li r7,8
	ctx.r7.s64 = 8;
loc_8216062C:
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// divwu r3,r10,r9
	ctx.r3.u32 = ctx.r10.u32 / ctx.r9.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82160640"))) PPC_WEAK_FUNC(sub_82160640);
PPC_FUNC_IMPL(__imp__sub_82160640) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x82160664;
	sub_821859A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-23648
	ctx.r9.s64 = ctx.r10.s64 + -23648;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

