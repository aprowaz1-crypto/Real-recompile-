#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8224E078"))) PPC_WEAK_FUNC(sub_8224E078);
PPC_FUNC_IMPL(__imp__sub_8224E078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82249590
	ctx.lr = 0x8224E090;
	sub_82249590(ctx, base);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224e0b8
	if (ctx.cr6.eq) goto loc_8224E0B8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8224E0B8:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,324
	ctx.r3.u64 = ctx.r3.u64 | 324;
	// bl 0x8241e3ac
	ctx.lr = 0x8224E0C4;
	__imp__KeBugCheck(ctx, base);
}

__attribute__((alias("__imp__sub_8224E0C4"))) PPC_WEAK_FUNC(sub_8224E0C4);
PPC_FUNC_IMPL(__imp__sub_8224E0C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E0D0"))) PPC_WEAK_FUNC(sub_8224E0D0);
PPC_FUNC_IMPL(__imp__sub_8224E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r11,r11,-8072
	ctx.r11.s64 = ctx.r11.s64 + -8072;
	// stw r11,5064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E0E4"))) PPC_WEAK_FUNC(sub_8224E0E4);
PPC_FUNC_IMPL(__imp__sub_8224E0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E0E8"))) PPC_WEAK_FUNC(sub_8224E0E8);
PPC_FUNC_IMPL(__imp__sub_8224E0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,5068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5068, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E0F4"))) PPC_WEAK_FUNC(sub_8224E0F4);
PPC_FUNC_IMPL(__imp__sub_8224E0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E0F8"))) PPC_WEAK_FUNC(sub_8224E0F8);
PPC_FUNC_IMPL(__imp__sub_8224E0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,5072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5072, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E104"))) PPC_WEAK_FUNC(sub_8224E104);
PPC_FUNC_IMPL(__imp__sub_8224E104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E108"))) PPC_WEAK_FUNC(sub_8224E108);
PPC_FUNC_IMPL(__imp__sub_8224E108) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,5072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5072);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224e138
	if (ctx.cr0.eq) goto loc_8224E138;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224E12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8224e13c
	if (!ctx.cr0.eq) goto loc_8224E13C;
loc_8224E138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224E13C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E14C"))) PPC_WEAK_FUNC(sub_8224E14C);
PPC_FUNC_IMPL(__imp__sub_8224E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E150"))) PPC_WEAK_FUNC(sub_8224E150);
PPC_FUNC_IMPL(__imp__sub_8224E150) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6176
	ctx.r9.s64 = ctx.r10.s64 + 6176;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8224E160:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8224e184
	if (ctx.cr6.eq) goto loc_8224E184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x8224e160
	if (ctx.cr6.lt) goto loc_8224E160;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8224E184:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E194"))) PPC_WEAK_FUNC(sub_8224E194);
PPC_FUNC_IMPL(__imp__sub_8224E194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E198"))) PPC_WEAK_FUNC(sub_8224E198);
PPC_FUNC_IMPL(__imp__sub_8224E198) {
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
	// bl 0x8224e150
	ctx.lr = 0x8224E1A8;
	sub_8224E150(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e1b4
	if (ctx.cr0.eq) goto loc_8224E1B4;
	// bl 0x82260378
	ctx.lr = 0x8224E1B4;
	sub_82260378(ctx, base);
loc_8224E1B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E1C4"))) PPC_WEAK_FUNC(sub_8224E1C4);
PPC_FUNC_IMPL(__imp__sub_8224E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E1C8"))) PPC_WEAK_FUNC(sub_8224E1C8);
PPC_FUNC_IMPL(__imp__sub_8224E1C8) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x8224e150
	ctx.lr = 0x8224E1DC;
	sub_8224E150(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e1e8
	if (ctx.cr0.eq) goto loc_8224E1E8;
	// bl 0x82260378
	ctx.lr = 0x8224E1E8;
	sub_82260378(ctx, base);
loc_8224E1E8:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x8224e150
	ctx.lr = 0x8224E1F0;
	sub_8224E150(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e1fc
	if (ctx.cr0.eq) goto loc_8224E1FC;
	// bl 0x82260378
	ctx.lr = 0x8224E1FC;
	sub_82260378(ctx, base);
loc_8224E1FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E20C"))) PPC_WEAK_FUNC(sub_8224E20C);
PPC_FUNC_IMPL(__imp__sub_8224E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E210"))) PPC_WEAK_FUNC(sub_8224E210);
PPC_FUNC_IMPL(__imp__sub_8224E210) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82249690
	sub_82249690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224E21C"))) PPC_WEAK_FUNC(sub_8224E21C);
PPC_FUNC_IMPL(__imp__sub_8224E21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E220"))) PPC_WEAK_FUNC(sub_8224E220);
PPC_FUNC_IMPL(__imp__sub_8224E220) {
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
	// bl 0x82251988
	ctx.lr = 0x8224E230;
	sub_82251988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e240
	if (ctx.cr0.eq) goto loc_8224E240;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x822519a0
	ctx.lr = 0x8224E240;
	sub_822519A0(ctx, base);
loc_8224E240:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,14632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14632);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e264
	if (ctx.cr0.eq) goto loc_8224E264;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8224d958
	ctx.lr = 0x8224E264;
	sub_8224D958(ctx, base);
loc_8224E264:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82249420
	ctx.lr = 0x8224E26C;
	sub_82249420(ctx, base);
}

__attribute__((alias("__imp__sub_8224E26C"))) PPC_WEAK_FUNC(sub_8224E26C);
PPC_FUNC_IMPL(__imp__sub_8224E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E270"))) PPC_WEAK_FUNC(sub_8224E270);
PPC_FUNC_IMPL(__imp__sub_8224E270) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r3,14632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14632);
	// andc r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,14632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E28C"))) PPC_WEAK_FUNC(sub_8224E28C);
PPC_FUNC_IMPL(__imp__sub_8224E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E290"))) PPC_WEAK_FUNC(sub_8224E290);
PPC_FUNC_IMPL(__imp__sub_8224E290) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// addi r10,r4,1022
	ctx.r10.s64 = ctx.r4.s64 + 1022;
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E2B8"))) PPC_WEAK_FUNC(sub_8224E2B8);
PPC_FUNC_IMPL(__imp__sub_8224E2B8) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	ctx.r11.s64 = ctx.r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E2D0"))) PPC_WEAK_FUNC(sub_8224E2D0);
PPC_FUNC_IMPL(__imp__sub_8224E2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224e2f8
	if (!ctx.cr6.eq) goto loc_8224E2F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8224e314
	if (!ctx.cr6.eq) goto loc_8224E314;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8224E2F8:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224e314
	if (!ctx.cr6.eq) goto loc_8224E314;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8224e314
	if (!ctx.cr6.eq) goto loc_8224E314;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8224E314:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x8224e32c
	if (!ctx.cr6.eq) goto loc_8224E32C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8224E32C:
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x8224e34c
	if (!ctx.cr6.eq) goto loc_8224E34C;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224e344
	if (!ctx.cr0.eq) goto loc_8224E344;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8224e34c
	if (ctx.cr6.eq) goto loc_8224E34C;
loc_8224E344:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8224E34C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E354"))) PPC_WEAK_FUNC(sub_8224E354);
PPC_FUNC_IMPL(__imp__sub_8224E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E358"))) PPC_WEAK_FUNC(sub_8224E358);
PPC_FUNC_IMPL(__imp__sub_8224E358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f0,29640(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8224e374
	if (!ctx.cr6.eq) goto loc_8224E374;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8224e444
	goto loc_8224E444;
loc_8224E374:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r9,r11,0,17,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224e41c
	if (!ctx.cr0.eq) goto loc_8224E41C;
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi. r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8224e398
	if (!ctx.cr0.eq) goto loc_8224E398;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224e41c
	if (ctx.cr6.eq) goto loc_8224E41C;
loc_8224E398:
	// li r9,-1021
	ctx.r9.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8224e3ac
	if (ctx.cr6.lt) goto loc_8224E3AC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8224E3AC:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8224e3e4
	if (!ctx.cr0.eq) goto loc_8224E3E4;
loc_8224E3B4:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
	// beq 0x8224e3cc
	if (ctx.cr0.eq) goto loc_8224E3CC;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
loc_8224E3CC:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8224e3b4
	if (ctx.cr0.eq) goto loc_8224E3B4;
	// stw r10,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r10.u32);
loc_8224E3E4:
	// andi. r11,r11,65519
	ctx.r11.u64 = ctx.r11.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// beq cr6,0x8224e3fc
	if (ctx.cr6.eq) goto loc_8224E3FC;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
loc_8224E3FC:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x8224e440
	goto loc_8224E440;
loc_8224E41C:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// rlwinm r10,r9,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r10,-1022
	ctx.r9.s64 = ctx.r10.s64 + -1022;
loc_8224E440:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_8224E444:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224E44C"))) PPC_WEAK_FUNC(sub_8224E44C);
PPC_FUNC_IMPL(__imp__sub_8224E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224E450"))) PPC_WEAK_FUNC(sub_8224E450);
PPC_FUNC_IMPL(__imp__sub_8224E450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8224E458;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8224e4e4
	if (!ctx.cr6.eq) goto loc_8224E4E4;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8224e4c0
	if (!ctx.cr6.eq) goto loc_8224E4C0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8224dcb8
	ctx.lr = 0x8224E490;
	sub_8224DCB8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224e4a4
	if (!ctx.cr0.eq) goto loc_8224E4A4;
loc_8224E49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224e4e8
	goto loc_8224E4E8;
loc_8224E4A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82248a40
	ctx.lr = 0x8224E4BC;
	sub_82248A40(ctx, base);
	// b 0x8224e4d8
	goto loc_8224E4D8;
loc_8224E4C0:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82251c88
	ctx.lr = 0x8224E4CC;
	sub_82251C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224e49c
	if (ctx.cr0.eq) goto loc_8224E49C;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8224E4D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8224E4E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8224E4E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8224E4F0"))) PPC_WEAK_FUNC(sub_8224E4F0);
PPC_FUNC_IMPL(__imp__sub_8224E4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8224E4F8;
	sub_82248750(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r4,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r4.u32);
	// li r11,350
	ctx.r11.s64 = 350;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x8224e548
	if (!ctx.cr6.eq) goto loc_8224E548;
loc_8224E530:
	// bl 0x8224da90
	ctx.lr = 0x8224E534;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8224E540;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8224f734
	goto loc_8224F734;
loc_8224E548:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8224e530
	if (ctx.cr6.eq) goto loc_8224E530;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224e5ec
	if (!ctx.cr0.eq) goto loc_8224E5EC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251590
	ctx.lr = 0x8224E564;
	sub_82251590(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r8,r10,15928
	ctx.r8.s64 = ctx.r10.s64 + 15928;
	// beq cr6,0x8224e5a0
	if (ctx.cr6.eq) goto loc_8224E5A0;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8224e5a0
	if (ctx.cr6.eq) goto loc_8224E5A0;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8224e5a4
	goto loc_8224E5A4;
loc_8224E5A0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8224E5A4:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224e530
	if (!ctx.cr0.eq) goto loc_8224E530;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8224e5dc
	if (ctx.cr6.eq) goto loc_8224E5DC;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x8224e5dc
	if (ctx.cr6.eq) goto loc_8224E5DC;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8224e5e0
	goto loc_8224E5E0;
loc_8224E5DC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8224E5E0:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224e530
	if (!ctx.cr0.eq) goto loc_8224E530;
loc_8224E5EC:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224f730
	if (ctx.cr0.eq) goto loc_8224F730;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r11,r11,15264
	ctx.r11.s64 = ctx.r11.s64 + 15264;
	// addi r10,r10,13936
	ctx.r10.s64 = ctx.r10.s64 + 13936;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8224E620:
	// bl 0x8224b190
	ctx.lr = 0x8224E624;
	sub_8224B190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224e69c
	if (ctx.cr0.eq) goto loc_8224E69C;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_8224E630:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224e658
	if (ctx.cr0.lt) goto loc_8224E658;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224e664
	goto loc_8224E664;
loc_8224E658:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224E660;
	sub_82251D20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8224E664:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8224e688
	if (ctx.cr6.eq) goto loc_8224E688;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8224b190
	ctx.lr = 0x8224E674;
	sub_8224B190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224e630
	if (!ctx.cr0.eq) goto loc_8224E630;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224E688;
	sub_82251ED0(ctx, base);
loc_8224E688:
	// lbzu r3,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// bl 0x8224b190
	ctx.lr = 0x8224E690;
	sub_8224B190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224e688
	if (!ctx.cr0.eq) goto loc_8224E688;
	// b 0x8224f6c0
	goto loc_8224F6C0;
loc_8224E69C:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8224f5f8
	if (!ctx.cr6.eq) goto loc_8224F5F8;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// beq cr6,0x8224f5dc
	if (ctx.cr6.eq) goto loc_8224F5DC;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_8224E6E8:
	// lbzu r31,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// bl 0x8224b150
	ctx.lr = 0x8224E6F8;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224e714
	if (ctx.cr0.eq) goto loc_8224E714;
	// mulli r11,r15,10
	ctx.r11.s64 = ctx.r15.s64 * 10;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r15,r11,-48
	ctx.r15.s64 = ctx.r11.s64 + -48;
	// b 0x8224e850
	goto loc_8224E850;
loc_8224E714:
	// cmpwi cr6,r31,78
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 78, ctx.xer);
	// bgt cr6,0x8224e7d4
	if (ctx.cr6.gt) goto loc_8224E7D4;
	// beq cr6,0x8224e850
	if (ctx.cr6.eq) goto loc_8224E850;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// beq cr6,0x8224e7c4
	if (ctx.cr6.eq) goto loc_8224E7C4;
	// cmpwi cr6,r31,70
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 70, ctx.xer);
	// beq cr6,0x8224e850
	if (ctx.cr6.eq) goto loc_8224E850;
	// cmpwi cr6,r31,73
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 73, ctx.xer);
	// beq cr6,0x8224e74c
	if (ctx.cr6.eq) goto loc_8224E74C;
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 76, ctx.xer);
	// bne cr6,0x8224e7ec
	if (!ctx.cr6.eq) goto loc_8224E7EC;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8224e84c
	goto loc_8224E84C;
loc_8224E74C:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,54
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 54, ctx.xer);
	// bne cr6,0x8224e780
	if (!ctx.cr6.eq) goto loc_8224E780;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,52
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 52, ctx.xer);
	// bne cr6,0x8224e780
	if (!ctx.cr6.eq) goto loc_8224E780;
loc_8224E76C:
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8224E774:
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// b 0x8224e854
	goto loc_8224E854;
loc_8224E780:
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x8224e798
	if (!ctx.cr6.eq) goto loc_8224E798;
	// lbz r9,2(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// addi r11,r19,2
	ctx.r11.s64 = ctx.r19.s64 + 2;
	// cmplwi cr6,r9,50
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50, ctx.xer);
	// beq cr6,0x8224e774
	if (ctx.cr6.eq) goto loc_8224E774;
loc_8224E798:
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x8224e854
	if (ctx.cr6.eq) goto loc_8224E854;
	// cmplwi cr6,r10,105
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 105, ctx.xer);
	// beq cr6,0x8224e854
	if (ctx.cr6.eq) goto loc_8224E854;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// beq cr6,0x8224e854
	if (ctx.cr6.eq) goto loc_8224E854;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x8224e854
	if (ctx.cr6.eq) goto loc_8224E854;
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// bne cr6,0x8224e7f0
	if (!ctx.cr6.eq) goto loc_8224E7F0;
	// b 0x8224e854
	goto loc_8224E854;
loc_8224E7C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// b 0x8224e850
	goto loc_8224E850;
loc_8224E7D4:
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// beq cr6,0x8224e838
	if (ctx.cr6.eq) goto loc_8224E838;
	// cmpwi cr6,r31,108
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 108, ctx.xer);
	// beq cr6,0x8224e800
	if (ctx.cr6.eq) goto loc_8224E800;
	// cmpwi cr6,r31,119
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 119, ctx.xer);
	// beq cr6,0x8224e824
	if (ctx.cr6.eq) goto loc_8224E824;
loc_8224E7EC:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8224E7F0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x8224e854
	goto loc_8224E854;
loc_8224E800:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r10,108
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 108, ctx.xer);
	// beq cr6,0x8224e76c
	if (ctx.cr6.eq) goto loc_8224E76C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r16,r11
	ctx.r16.s64 = ctx.r11.s8;
	// b 0x8224e828
	goto loc_8224E828;
loc_8224E824:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8224E828:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x8224e854
	goto loc_8224E854;
loc_8224E838:
	// extsb r10,r28
	ctx.r10.s64 = ctx.r28.s8;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_8224E84C:
	// extsb r16,r11
	ctx.r16.s64 = ctx.r11.s8;
loc_8224E850:
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8224E854:
	// extsb. r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224e6e8
	if (ctx.cr0.eq) goto loc_8224E6E8;
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne 0x8224e88c
	if (!ctx.cr0.eq) goto loc_8224E88C;
	// lwz r11,732(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// rlwinm r11,r10,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x8224e890
	goto loc_8224E890;
loc_8224E88C:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_8224E890:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bne 0x8224e8b8
	if (!ctx.cr0.eq) goto loc_8224E8B8;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// beq cr6,0x8224e8b4
	if (ctx.cr6.eq) goto loc_8224E8B4;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// bne cr6,0x8224e8b8
	if (!ctx.cr6.eq) goto loc_8224E8B8;
loc_8224E8B4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8224E8B8:
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	ctx.r19.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r19,110
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 110, ctx.xer);
	// beq cr6,0x8224e970
	if (ctx.cr6.eq) goto loc_8224E970;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// beq cr6,0x8224e930
	if (ctx.cr6.eq) goto loc_8224E930;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// beq cr6,0x8224e930
	if (ctx.cr6.eq) goto loc_8224E930;
loc_8224E8DC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224e904
	if (ctx.cr0.lt) goto loc_8224E904;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224e910
	goto loc_8224E910;
loc_8224E904:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224E90C;
	sub_82251D20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8224E910:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8224e928
	if (ctx.cr6.eq) goto loc_8224E928;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8224b190
	ctx.lr = 0x8224E920;
	sub_8224B190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224e8dc
	if (!ctx.cr0.eq) goto loc_8224E8DC;
loc_8224E928:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// b 0x8224e964
	goto loc_8224E964;
loc_8224E930:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224e958
	if (ctx.cr0.lt) goto loc_8224E958;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224e964
	goto loc_8224E964;
loc_8224E958:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224E960;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224E964:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224f6f4
	if (ctx.cr6.eq) goto loc_8224F6F4;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8224E970:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224e980
	if (ctx.cr6.eq) goto loc_8224E980;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8224f6e0
	if (ctx.cr6.eq) goto loc_8224F6E0;
loc_8224E980:
	// addi r11,r19,-99
	ctx.r11.s64 = ctx.r19.s64 + -99;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8224f590
	if (ctx.cr6.gt) goto loc_8224F590;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,6512
	ctx.r12.s64 = ctx.r12.s64 + 6512;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// addi r12,r12,-5708
	ctx.r12.s64 = ctx.r12.s64 + -5708;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8224e9c4
	if (!ctx.cr6.eq) goto loc_8224E9C4;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_8224E9C4:
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8224eb34
	if (!ctx.cr0.gt) goto loc_8224EB34;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8224eb34
	goto loc_8224EB34;
	// extsb. r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// ble 0x8224e9e4
	if (!ctx.cr0.gt) goto loc_8224E9E4;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
loc_8224E9E4:
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x8224ea00
	if (!ctx.cr6.eq) goto loc_8224EA00;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_8224EA00:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x8224eb10
	if (!ctx.cr6.eq) goto loc_8224EB10;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x8224eb10
	if (!ctx.cr6.eq) goto loc_8224EB10;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,93
	ctx.r27.s64 = 93;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// b 0x8224eb10
	goto loc_8224EB10;
loc_8224EA40:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x8224eaf0
	if (!ctx.cr6.eq) goto loc_8224EAF0;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8224eaf0
	if (ctx.cr0.eq) goto loc_8224EAF0;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// beq cr6,0x8224eaf0
	if (ctx.cr6.eq) goto loc_8224EAF0;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8224ea7c
	if (!ctx.cr6.lt) goto loc_8224EA7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8224ea84
	goto loc_8224EA84;
loc_8224EA7C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_8224EA84:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8224eac8
	if (!ctx.cr6.lt) goto loc_8224EAC8;
loc_8224EA94:
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// lbzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stbx r4,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u8);
	// blt cr6,0x8224ea94
	if (ctx.cr6.lt) goto loc_8224EA94;
loc_8224EAC8:
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8224eb10
	goto loc_8224EB10;
loc_8224EAF0:
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8224EB10:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x8224ea40
	if (!ctx.cr6.eq) goto loc_8224EA40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224f6f4
	if (ctx.cr6.eq) goto loc_8224F6F4;
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// bne cr6,0x8224eb34
	if (!ctx.cr6.eq) goto loc_8224EB34;
	// stw r7,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r7.u32);
loc_8224EB34:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq cr6,0x8224eb54
	if (ctx.cr6.eq) goto loc_8224EB54;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224EB54;
	sub_82251ED0(ctx, base);
loc_8224EB54:
	// lwz r29,124(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8224EB58:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224eb6c
	if (ctx.cr6.eq) goto loc_8224EB6C;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x8224ecc4
	if (ctx.cr6.eq) goto loc_8224ECC4;
loc_8224EB6C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224eb94
	if (ctx.cr0.lt) goto loc_8224EB94;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224eba0
	goto loc_8224EBA0;
loc_8224EB94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224EB9C;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224EBA0:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224ecac
	if (ctx.cr6.eq) goto loc_8224ECAC;
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// beq cr6,0x8224ec04
	if (ctx.cr6.eq) goto loc_8224EC04;
	// cmpwi cr6,r19,115
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 115, ctx.xer);
	// bne cr6,0x8224ebd0
	if (!ctx.cr6.eq) goto loc_8224EBD0;
	// cmpwi cr6,r22,9
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 9, ctx.xer);
	// blt cr6,0x8224ebc8
	if (ctx.cr6.lt) goto loc_8224EBC8;
	// cmpwi cr6,r22,13
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 13, ctx.xer);
	// ble cr6,0x8224ecac
	if (!ctx.cr6.gt) goto loc_8224ECAC;
loc_8224EBC8:
	// cmpwi cr6,r22,32
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 32, ctx.xer);
	// bne cr6,0x8224ec04
	if (!ctx.cr6.eq) goto loc_8224EC04;
loc_8224EBD0:
	// cmpwi cr6,r19,123
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 123, ctx.xer);
	// bne cr6,0x8224ecac
	if (!ctx.cr6.eq) goto loc_8224ECAC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// srawi r11,r22,3
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 3;
	// clrlwi r9,r22,29
	ctx.r9.u64 = ctx.r22.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = ctx.r25.s8;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ecac
	if (ctx.cr0.eq) goto loc_8224ECAC;
loc_8224EC04:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224eca4
	if (!ctx.cr6.eq) goto loc_8224ECA4;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224ec90
	if (ctx.cr0.eq) goto loc_8224EC90;
	// stb r22,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r22.u8);
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x82251890
	ctx.lr = 0x8224EC24;
	sub_82251890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224ec60
	if (ctx.cr0.eq) goto loc_8224EC60;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224ec54
	if (ctx.cr0.lt) goto loc_8224EC54;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224ec5c
	goto loc_8224EC5C;
loc_8224EC54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224EC5C;
	sub_82251D20(ctx, base);
loc_8224EC5C:
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_8224EC60:
	// li r10,63
	ctx.r10.s64 = 63;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82252078
	ctx.lr = 0x8224EC80;
	sub_82252078(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x8224ec9c
	goto loc_8224EC9C;
loc_8224EC90:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8224EC9C:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// b 0x8224eb58
	goto loc_8224EB58;
loc_8224ECA4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8224eb58
	goto loc_8224EB58;
loc_8224ECAC:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224ecc4
	if (ctx.cr6.eq) goto loc_8224ECC4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224ECC4;
	sub_82251ED0(ctx, base);
loc_8224ECC4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8224f6f4
	if (ctx.cr6.eq) goto loc_8224F6F4;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224f5bc
	if (!ctx.cr6.eq) goto loc_8224F5BC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,99
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 99, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8224f5bc
	if (ctx.cr6.eq) goto loc_8224F5BC;
	// extsb. r11,r24
	ctx.r11.s64 = ctx.r24.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x8224ed04
	if (ctx.cr0.eq) goto loc_8224ED04;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x8224f5bc
	goto loc_8224F5BC;
loc_8224ED04:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8224f5bc
	goto loc_8224F5BC;
	// li r19,100
	ctx.r19.s64 = 100;
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x8224ed24
	if (!ctx.cr6.eq) goto loc_8224ED24;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x8224ed2c
	goto loc_8224ED2C;
loc_8224ED24:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x8224ed78
	if (!ctx.cr6.eq) goto loc_8224ED78;
loc_8224ED2C:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8224ed44
	if (!ctx.cr0.eq) goto loc_8224ED44;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224ed44
	if (ctx.cr6.eq) goto loc_8224ED44;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8224ed78
	goto loc_8224ED78;
loc_8224ED44:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224ed6c
	if (ctx.cr0.lt) goto loc_8224ED6C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224ed78
	goto loc_8224ED78;
loc_8224ED6C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224ED74;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224ED78:
	// cmpwi cr6,r22,48
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 48, ctx.xer);
	// bne cr6,0x8224eedc
	if (!ctx.cr6.eq) goto loc_8224EEDC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224eda8
	if (ctx.cr0.lt) goto loc_8224EDA8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224edb4
	goto loc_8224EDB4;
loc_8224EDA8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224EDB0;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224EDB4:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x8224ee18
	if (ctx.cr6.eq) goto loc_8224EE18;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x8224ee18
	if (ctx.cr6.eq) goto loc_8224EE18;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x8224edf8
	if (ctx.cr6.eq) goto loc_8224EDF8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224edf0
	if (ctx.cr6.eq) goto loc_8224EDF0;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8224edf0
	if (!ctx.cr0.eq) goto loc_8224EDF0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_8224EDF0:
	// li r19,111
	ctx.r19.s64 = 111;
	// b 0x8224eedc
	goto loc_8224EEDC;
loc_8224EDF8:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224ee10
	if (ctx.cr6.eq) goto loc_8224EE10;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224EE10;
	sub_82251ED0(ctx, base);
loc_8224EE10:
	// li r22,48
	ctx.r22.s64 = 48;
	// b 0x8224eedc
	goto loc_8224EEDC;
loc_8224EE18:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224ee40
	if (ctx.cr0.lt) goto loc_8224EE40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224ee4c
	goto loc_8224EE4C;
loc_8224EE40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224EE48;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224EE4C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224ee6c
	if (ctx.cr6.eq) goto loc_8224EE6C;
	// addi r15,r15,-2
	ctx.r15.s64 = ctx.r15.s64 + -2;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bge cr6,0x8224ee6c
	if (!ctx.cr6.lt) goto loc_8224EE6C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_8224EE6C:
	// li r19,120
	ctx.r19.s64 = 120;
	// b 0x8224eedc
	goto loc_8224EEDC;
	// li r16,1
	ctx.r16.s64 = 1;
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x8224ee88
	if (!ctx.cr6.eq) goto loc_8224EE88;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x8224ee90
	goto loc_8224EE90;
loc_8224EE88:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x8224eedc
	if (!ctx.cr6.eq) goto loc_8224EEDC;
loc_8224EE90:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8224eea8
	if (!ctx.cr0.eq) goto loc_8224EEA8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224eea8
	if (ctx.cr6.eq) goto loc_8224EEA8;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8224eedc
	goto loc_8224EEDC;
loc_8224EEA8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224eed0
	if (ctx.cr0.lt) goto loc_8224EED0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224eedc
	goto loc_8224EEDC;
loc_8224EED0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224EED8;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224EEDC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8224f024
	if (ctx.cr6.eq) goto loc_8224F024;
	// bne 0x8224f00c
	if (!ctx.cr0.eq) goto loc_8224F00C;
loc_8224EEEC:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x8224ef38
	if (ctx.cr6.eq) goto loc_8224EF38;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 112, ctx.xer);
	// beq cr6,0x8224ef38
	if (ctx.cr6.eq) goto loc_8224EF38;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x8224b150
	ctx.lr = 0x8224EF04;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224ef74
	if (ctx.cr0.eq) goto loc_8224EF74;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 111, ctx.xer);
	// bne cr6,0x8224ef2c
	if (!ctx.cr6.eq) goto loc_8224EF2C;
	// cmpwi cr6,r22,56
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 56, ctx.xer);
	// bge cr6,0x8224ef74
	if (!ctx.cr6.lt) goto loc_8224EF74;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_8224EF24:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x8224ef7c
	goto loc_8224EF7C;
loc_8224EF2C:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// b 0x8224ef24
	goto loc_8224EF24;
loc_8224EF38:
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224b170
	ctx.lr = 0x8224EF44;
	sub_8224B170(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224ef74
	if (ctx.cr0.eq) goto loc_8224EF74;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r11,r11,4,59
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8224b150
	ctx.lr = 0x8224EF60;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224ef7c
	if (!ctx.cr0.eq) goto loc_8224EF7C;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	ctx.r22.s64 = ctx.r11.s64 + -7;
	// b 0x8224ef7c
	goto loc_8224EF7C;
loc_8224EF74:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_8224EF7C:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224efec
	if (!ctx.cr0.eq) goto loc_8224EFEC;
	// addi r11,r22,-48
	ctx.r11.s64 = ctx.r22.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// beq cr6,0x8224efb4
	if (ctx.cr6.eq) goto loc_8224EFB4;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8224efb4
	if (!ctx.cr0.eq) goto loc_8224EFB4;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8224f004
	goto loc_8224F004;
loc_8224EFB4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224efdc
	if (ctx.cr0.lt) goto loc_8224EFDC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f004
	goto loc_8224F004;
loc_8224EFDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224EFE4;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8224f004
	goto loc_8224F004;
loc_8224EFEC:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224f004
	if (ctx.cr6.eq) goto loc_8224F004;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224F004;
	sub_82251ED0(ctx, base);
loc_8224F004:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8224eeec
	if (ctx.cr0.eq) goto loc_8224EEEC;
loc_8224F00C:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f134
	if (ctx.cr0.eq) goto loc_8224F134;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// b 0x8224f134
	goto loc_8224F134;
loc_8224F024:
	// bne 0x8224f128
	if (!ctx.cr0.eq) goto loc_8224F128;
loc_8224F028:
	// cmpwi cr6,r19,120
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 120, ctx.xer);
	// beq cr6,0x8224f068
	if (ctx.cr6.eq) goto loc_8224F068;
	// cmpwi cr6,r19,112
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 112, ctx.xer);
	// beq cr6,0x8224f068
	if (ctx.cr6.eq) goto loc_8224F068;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x8224b150
	ctx.lr = 0x8224F040;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f09c
	if (ctx.cr0.eq) goto loc_8224F09C;
	// cmpwi cr6,r19,111
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 111, ctx.xer);
	// bne cr6,0x8224f060
	if (!ctx.cr6.eq) goto loc_8224F060;
	// cmpwi cr6,r22,56
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 56, ctx.xer);
	// bge cr6,0x8224f09c
	if (!ctx.cr6.lt) goto loc_8224F09C;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8224f0a4
	goto loc_8224F0A4;
loc_8224F060:
	// mulli r23,r23,10
	ctx.r23.s64 = ctx.r23.s64 * 10;
	// b 0x8224f0a4
	goto loc_8224F0A4;
loc_8224F068:
	// clrlwi r30,r22,24
	ctx.r30.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224b170
	ctx.lr = 0x8224F074;
	sub_8224B170(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f09c
	if (ctx.cr0.eq) goto loc_8224F09C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8224b150
	ctx.lr = 0x8224F088;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224f0a4
	if (!ctx.cr0.eq) goto loc_8224F0A4;
	// rlwinm r11,r22,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r22,r11,-7
	ctx.r22.s64 = ctx.r11.s64 + -7;
	// b 0x8224f0a4
	goto loc_8224F0A4;
loc_8224F09C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_8224F0A4:
	// extsb. r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224f108
	if (!ctx.cr0.eq) goto loc_8224F108;
	// add r11,r23,r22
	ctx.r11.u64 = ctx.r23.u64 + ctx.r22.u64;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r23,r11,-48
	ctx.r23.s64 = ctx.r11.s64 + -48;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8224f0d0
	if (ctx.cr6.eq) goto loc_8224F0D0;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x8224f0d0
	if (!ctx.cr0.eq) goto loc_8224F0D0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8224f120
	goto loc_8224F120;
loc_8224F0D0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f0f8
	if (ctx.cr0.lt) goto loc_8224F0F8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f120
	goto loc_8224F120;
loc_8224F0F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F100;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8224f120
	goto loc_8224F120;
loc_8224F108:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224f120
	if (ctx.cr6.eq) goto loc_8224F120;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224F120;
	sub_82251ED0(ctx, base);
loc_8224F120:
	// extsb. r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8224f028
	if (ctx.cr0.eq) goto loc_8224F028;
loc_8224F128:
	// extsb. r11,r20
	ctx.r11.s64 = ctx.r20.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f134
	if (ctx.cr0.eq) goto loc_8224F134;
	// neg r23,r23
	ctx.r23.s64 = -ctx.r23.s64;
loc_8224F134:
	// addi r11,r19,-70
	ctx.r11.s64 = ctx.r19.s64 + -70;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 & ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224f6f4
	if (ctx.cr6.eq) goto loc_8224F6F4;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224f5bc
	if (!ctx.cr6.eq) goto loc_8224F5BC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x8224f184
	goto loc_8224F184;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224f5bc
	if (!ctx.cr6.eq) goto loc_8224F5BC;
	// bl 0x8224b348
	ctx.lr = 0x8224F17C;
	sub_8224B348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f5bc
	if (ctx.cr0.eq) goto loc_8224F5BC;
loc_8224F184:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x8224f19c
	if (ctx.cr6.eq) goto loc_8224F19C;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// b 0x8224f5bc
	goto loc_8224F5BC;
loc_8224F19C:
	// extsb. r11,r16
	ctx.r11.s64 = ctx.r16.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x8224f1b0
	if (ctx.cr0.eq) goto loc_8224F1B0;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// b 0x8224f5bc
	goto loc_8224F5BC;
loc_8224F1B0:
	// sth r23,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r23.u16);
	// b 0x8224f5bc
	goto loc_8224F5BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x8224f1d8
	if (!ctx.cr6.eq) goto loc_8224F1D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8224f1e0
	goto loc_8224F1E0;
loc_8224F1D8:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x8224f218
	if (!ctx.cr6.eq) goto loc_8224F218;
loc_8224F1E0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f20c
	if (ctx.cr0.lt) goto loc_8224F20C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f218
	goto loc_8224F218;
loc_8224F20C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F214;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F218:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8224f298
	if (!ctx.cr6.eq) goto loc_8224F298;
	// li r15,-1
	ctx.r15.s64 = -1;
	// b 0x8224f298
	goto loc_8224F298;
loc_8224F228:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x8224f2ac
	if (ctx.cr6.eq) goto loc_8224F2AC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e450
	ctx.lr = 0x8224F25C;
	sub_8224E450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f6f4
	if (ctx.cr0.eq) goto loc_8224F6F4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f28c
	if (ctx.cr0.lt) goto loc_8224F28C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f298
	goto loc_8224F298;
loc_8224F28C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F294;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F298:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b150
	ctx.lr = 0x8224F2A4;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224f228
	if (!ctx.cr0.eq) goto loc_8224F228;
loc_8224F2AC:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r10,r31
	ctx.r10.s64 = ctx.r31.s8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8224f3c4
	if (!ctx.cr6.eq) goto loc_8224F3C4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x8224f3c4
	if (ctx.cr6.eq) goto loc_8224F3C4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f304
	if (ctx.cr0.lt) goto loc_8224F304;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f310
	goto loc_8224F310;
loc_8224F304:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F30C;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F310:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e450
	ctx.lr = 0x8224F334;
	sub_8224E450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f6f4
	if (ctx.cr0.eq) goto loc_8224F6F4;
	// b 0x8224f3b0
	goto loc_8224F3B0;
loc_8224F340:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x8224f3c4
	if (ctx.cr6.eq) goto loc_8224F3C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e450
	ctx.lr = 0x8224F374;
	sub_8224E450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f6f4
	if (ctx.cr0.eq) goto loc_8224F6F4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f3a4
	if (ctx.cr0.lt) goto loc_8224F3A4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f3b0
	goto loc_8224F3B0;
loc_8224F3A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F3AC;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F3B0:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b150
	ctx.lr = 0x8224F3BC;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224f340
	if (!ctx.cr0.eq) goto loc_8224F340;
loc_8224F3C4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8224f528
	if (ctx.cr6.eq) goto loc_8224F528;
	// cmpwi cr6,r22,101
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 101, ctx.xer);
	// beq cr6,0x8224f3dc
	if (ctx.cr6.eq) goto loc_8224F3DC;
	// cmpwi cr6,r22,69
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 69, ctx.xer);
	// bne cr6,0x8224f528
	if (!ctx.cr6.eq) goto loc_8224F528;
loc_8224F3DC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r29,r15,-1
	ctx.r29.s64 = ctx.r15.s64 + -1;
	// beq cr6,0x8224f528
	if (ctx.cr6.eq) goto loc_8224F528;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,101
	ctx.r10.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e450
	ctx.lr = 0x8224F410;
	sub_8224E450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f6f4
	if (ctx.cr0.eq) goto loc_8224F6F4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f440
	if (ctx.cr0.lt) goto loc_8224F440;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f44c
	goto loc_8224F44C;
loc_8224F440:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F448;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F44C:
	// cmpwi cr6,r22,45
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 45, ctx.xer);
	// bne cr6,0x8224f488
	if (!ctx.cr6.eq) goto loc_8224F488;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e450
	ctx.lr = 0x8224F47C;
	sub_8224E450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f6f4
	if (ctx.cr0.eq) goto loc_8224F6F4;
	// b 0x8224f490
	goto loc_8224F490;
loc_8224F488:
	// cmpwi cr6,r22,43
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 43, ctx.xer);
	// bne cr6,0x8224f514
	if (!ctx.cr6.eq) goto loc_8224F514;
loc_8224F490:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x8224f4e0
	if (!ctx.cr6.eq) goto loc_8224F4E0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8224f514
	goto loc_8224F514;
loc_8224F4A4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// beq cr6,0x8224f528
	if (ctx.cr6.eq) goto loc_8224F528;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e450
	ctx.lr = 0x8224F4D8;
	sub_8224E450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f6f4
	if (ctx.cr0.eq) goto loc_8224F6F4;
loc_8224F4E0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f508
	if (ctx.cr0.lt) goto loc_8224F508;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f514
	goto loc_8224F514;
loc_8224F508:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F510;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F514:
	// clrlwi r31,r22,24
	ctx.r31.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224b150
	ctx.lr = 0x8224F520;
	sub_8224B150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224f4a4
	if (!ctx.cr0.eq) goto loc_8224F4A4;
loc_8224F528:
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224f540
	if (ctx.cr6.eq) goto loc_8224F540;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224F540;
	sub_82251ED0(ctx, base);
loc_8224F540:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x8224f6f4
	if (ctx.cr6.eq) goto loc_8224F6F4;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224f5bc
	if (!ctx.cr6.eq) goto loc_8224F5BC;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// extsb r11,r16
	ctx.r11.s64 = ctx.r16.s8;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r10,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8224F58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8224f5bc
	goto loc_8224F5BC;
loc_8224F590:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x8224f6e0
	if (!ctx.cr6.eq) goto loc_8224F6E0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x8224f5bc
	if (!ctx.cr6.eq) goto loc_8224F5BC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_8224F5BC:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// rotlwi r19,r10,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8224f698
	goto loc_8224F698;
loc_8224F5DC:
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8224f5f8
	if (!ctx.cr6.eq) goto loc_8224F5F8;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x8224f5f8
	if (!ctx.cr6.eq) goto loc_8224F5F8;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_8224F5F8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f620
	if (ctx.cr0.lt) goto loc_8224F620;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f62c
	goto loc_8224F62C;
loc_8224F620:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F628;
	sub_82251D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8224F62C:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x8224f6e0
	if (!ctx.cr6.eq) goto loc_8224F6E0;
	// clrlwi r3,r22,24
	ctx.r3.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x82251890
	ctx.lr = 0x8224F648;
	sub_82251890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224f698
	if (ctx.cr0.eq) goto loc_8224F698;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r14,1
	ctx.r31.s64 = ctx.r14.s64 + 1;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// blt 0x8224f678
	if (ctx.cr0.lt) goto loc_8224F678;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8224f680
	goto loc_8224F680;
loc_8224F678:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82251d20
	ctx.lr = 0x8224F680;
	sub_82251D20(ctx, base);
loc_8224F680:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r19.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8224f6d0
	if (!ctx.cr6.eq) goto loc_8224F6D0;
	// addi r14,r31,-1
	ctx.r14.s64 = ctx.r31.s64 + -1;
loc_8224F698:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x8224f6c0
	if (!ctx.cr6.eq) goto loc_8224F6C0;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x8224f6f4
	if (!ctx.cr6.eq) goto loc_8224F6F4;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x8224f6f4
	if (!ctx.cr6.eq) goto loc_8224F6F4;
	// lwz r19,716(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8224F6C0:
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224e620
	if (!ctx.cr0.eq) goto loc_8224E620;
	// b 0x8224f6f4
	goto loc_8224F6F4;
loc_8224F6D0:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8224f6e0
	if (ctx.cr6.eq) goto loc_8224F6E0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224F6E0;
	sub_82251ED0(ctx, base);
loc_8224F6E0:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x8224f6f4
	if (ctx.cr6.eq) goto loc_8224F6F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82251ed0
	ctx.lr = 0x8224F6F4;
	sub_82251ED0(ctx, base);
loc_8224F6F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224f708
	if (!ctx.cr6.eq) goto loc_8224F708;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8224a858
	ctx.lr = 0x8224F708;
	sub_8224A858(ctx, base);
loc_8224F708:
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x8224f730
	if (!ctx.cr6.eq) goto loc_8224F730;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8224f734
	if (!ctx.cr6.eq) goto loc_8224F734;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224f734
	if (!ctx.cr0.eq) goto loc_8224F734;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8224f734
	goto loc_8224F734;
loc_8224F730:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8224F734:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224F73C"))) PPC_WEAK_FUNC(sub_8224F73C);
PPC_FUNC_IMPL(__imp__sub_8224F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224F740"))) PPC_WEAK_FUNC(sub_8224F740);
PPC_FUNC_IMPL(__imp__sub_8224F740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8224F748;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224f768
	if (ctx.cr6.eq) goto loc_8224F768;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_8224F768:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8224f784
	if (!ctx.cr6.eq) goto loc_8224F784;
loc_8224F770:
	// bl 0x8224da90
	ctx.lr = 0x8224F774;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8224F780;
	sub_8224D920(ctx, base);
	// b 0x8224fa0c
	goto loc_8224FA0C;
loc_8224F784:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8224f79c
	if (ctx.cr6.eq) goto loc_8224F79C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x8224f770
	if (ctx.cr6.lt) goto loc_8224F770;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x8224f770
	if (ctx.cr6.gt) goto loc_8224F770;
loc_8224F79C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lbz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r25,1
	ctx.r29.s64 = ctx.r25.s64 + 1;
	// addi r30,r11,15264
	ctx.r30.s64 = ctx.r11.s64 + 15264;
	// lwz r10,15264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15264);
loc_8224F7B4:
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8224f7d8
	if (!ctx.cr6.gt) goto loc_8224F7D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x8224fc20
	ctx.lr = 0x8224F7D0;
	sub_8224FC20(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8224f7e8
	goto loc_8224F7E8;
loc_8224F7D8:
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// rlwinm r9,r31,1,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_8224F7E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224f7fc
	if (ctx.cr6.eq) goto loc_8224F7FC;
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8224f7b4
	goto loc_8224F7B4;
loc_8224F7FC:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x8224f810
	if (!ctx.cr6.eq) goto loc_8224F810;
	// ori r24,r24,2
	ctx.r24.u64 = ctx.r24.u64 | 2;
	// b 0x8224f818
	goto loc_8224F818;
loc_8224F810:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x8224f820
	if (!ctx.cr6.eq) goto loc_8224F820;
loc_8224F818:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8224F820:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8224fa00
	if (ctx.cr6.lt) goto loc_8224FA00;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8224fa00
	if (ctx.cr6.eq) goto loc_8224FA00;
	// cmpwi cr6,r28,36
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 36, ctx.xer);
	// bgt cr6,0x8224fa00
	if (ctx.cr6.gt) goto loc_8224FA00;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8224f87c
	if (!ctx.cr6.eq) goto loc_8224F87C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8224f854
	if (ctx.cr6.eq) goto loc_8224F854;
	// li r28,10
	ctx.r28.s64 = 10;
	// b 0x8224f8b0
	goto loc_8224F8B0;
loc_8224F854:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x8224f874
	if (ctx.cr6.eq) goto loc_8224F874;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x8224f874
	if (ctx.cr6.eq) goto loc_8224F874;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x8224f8b0
	goto loc_8224F8B0;
loc_8224F874:
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x8224f884
	goto loc_8224F884;
loc_8224F87C:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bne cr6,0x8224f8b0
	if (!ctx.cr6.eq) goto loc_8224F8B0;
loc_8224F884:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8224f8b0
	if (!ctx.cr6.eq) goto loc_8224F8B0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x8224f8a8
	if (ctx.cr6.eq) goto loc_8224F8A8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x8224f8b0
	if (!ctx.cr6.eq) goto loc_8224F8B0;
loc_8224F8A8:
	// lbzu r31,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8224F8B0:
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r8,200(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// twllei r28,0
	// divwu r9,r27,r28
	ctx.r9.u32 = ctx.r27.u32 / ctx.r28.u32;
loc_8224F8C0:
	// rlwinm r11,r31,1,23,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1FE;
	// lhzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224f8dc
	if (ctx.cr0.eq) goto loc_8224F8DC;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x8224f904
	goto loc_8224F904;
loc_8224F8DC:
	// andi. r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f944
	if (ctx.cr0.eq) goto loc_8224F944;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x8224f900
	if (ctx.cr6.lt) goto loc_8224F900;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x8224f900
	if (ctx.cr6.gt) goto loc_8224F900;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8224F900:
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_8224F904:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8224f944
	if (!ctx.cr6.lt) goto loc_8224F944;
	// ori r24,r24,8
	ctx.r24.u64 = ctx.r24.u64 | 8;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224f964
	if (ctx.cr6.lt) goto loc_8224F964;
	// bne cr6,0x8224f938
	if (!ctx.cr6.eq) goto loc_8224F938;
	// divwu r7,r27,r28
	ctx.r7.u32 = ctx.r27.u32 / ctx.r28.u32;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twllei r28,0
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8224f964
	if (!ctx.cr6.gt) goto loc_8224F964;
loc_8224F938:
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8224f96c
	if (!ctx.cr6.eq) goto loc_8224F96C;
loc_8224F944:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// bne 0x8224f978
	if (!ctx.cr0.eq) goto loc_8224F978;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8224f95c
	if (ctx.cr6.eq) goto loc_8224F95C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8224F95C:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8224f9e0
	goto loc_8224F9E0;
loc_8224F964:
	// mullw r10,r26,r28
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8224F96C:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8224f8c0
	goto loc_8224F8C0;
loc_8224F978:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// bne 0x8224f9b4
	if (!ctx.cr0.eq) goto loc_8224F9B4;
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224f9e0
	if (!ctx.cr0.eq) goto loc_8224F9E0;
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f9a4
	if (ctx.cr0.eq) goto loc_8224F9A4;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8224f9b4
	if (ctx.cr6.gt) goto loc_8224F9B4;
loc_8224F9A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224f9e0
	if (!ctx.cr6.eq) goto loc_8224F9E0;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8224f9e0
	if (!ctx.cr6.gt) goto loc_8224F9E0;
loc_8224F9B4:
	// bl 0x8224da90
	ctx.lr = 0x8224F9B8;
	sub_8224DA90(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// clrlwi. r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8224f9d0
	if (ctx.cr0.eq) goto loc_8224F9D0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x8224f9e0
	goto loc_8224F9E0;
loc_8224F9D0:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// bne 0x8224f9e0
	if (!ctx.cr0.eq) goto loc_8224F9E0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8224F9E0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8224f9ec
	if (ctx.cr6.eq) goto loc_8224F9EC;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_8224F9EC:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224f9f8
	if (ctx.cr0.eq) goto loc_8224F9F8;
	// neg r26,r26
	ctx.r26.s64 = -ctx.r26.s64;
loc_8224F9F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8224fa10
	goto loc_8224FA10;
loc_8224FA00:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8224fa0c
	if (ctx.cr6.eq) goto loc_8224FA0C;
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
loc_8224FA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224FA10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8224FA18"))) PPC_WEAK_FUNC(sub_8224FA18);
PPC_FUNC_IMPL(__imp__sub_8224FA18) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8224f740
	sub_8224F740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224FA20"))) PPC_WEAK_FUNC(sub_8224FA20);
PPC_FUNC_IMPL(__imp__sub_8224FA20) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8224f740
	sub_8224F740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224FA28"))) PPC_WEAK_FUNC(sub_8224FA28);
PPC_FUNC_IMPL(__imp__sub_8224FA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f6,29648(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29648);
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// bne cr6,0x8224fa48
	if (!ctx.cr6.eq) goto loc_8224FA48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,29640(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// blr 
	return;
loc_8224FA48:
	// lhz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r10,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FF0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x8224fa7c
	if (!ctx.cr6.eq) goto loc_8224FA7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,6760(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6760);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8224FA6C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfd f0,14648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14648);
loc_8224FA74:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8224FA7C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,29640(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 29640);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8224faa0
	if (ctx.cr6.gt) goto loc_8224FAA0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8224fa6c
	if (!ctx.cr6.eq) goto loc_8224FA6C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfd f0,14640(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14640);
	// b 0x8224fa74
	goto loc_8224FA74;
loc_8224FAA0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f0,6752(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 6752);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8224fad8
	if (!ctx.cr6.lt) goto loc_8224FAD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,6744(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6744);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r11,28,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,-1075
	ctx.r10.s64 = ctx.r10.s64 + -1075;
	// b 0x8224fae0
	goto loc_8224FAE0;
loc_8224FAD8:
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// addi r10,r11,-1022
	ctx.r10.s64 = ctx.r11.s64 + -1022;
loc_8224FAE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// andi. r9,r9,32783
	ctx.r9.u64 = ctx.r9.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,6624
	ctx.r11.s64 = ctx.r11.s64 + 6624;
	// ori r9,r9,16352
	ctx.r9.u64 = ctx.r9.u64 | 16352;
	// sth r9,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r9.u16);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8224fb24
	if (!ctx.cr6.gt) goto loc_8224FB24;
	// lfd f0,28248(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28248);
	// fadd f12,f13,f6
	ctx.f12.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsub f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 - ctx.f0.f64;
	// b 0x8224fb38
	goto loc_8224FB38;
loc_8224FB24:
	// lfd f12,28248(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 28248);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fsub f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fadd f13,f0,f6
	ctx.f13.f64 = ctx.f0.f64 + ctx.f6.f64;
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
loc_8224FB38:
	// fdiv f5,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfd f12,40(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfd f9,64(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfd f7,8(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfd f13,6736(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 6736);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f11,6728(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 6728);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,6720(r7)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 6720);
	// lfd f8,6712(r6)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 6712);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f0
	ctx.f4.f64 = double(ctx.f0.s64);
	// fmul f3,f5,f5
	ctx.f3.f64 = ctx.f5.f64 * ctx.f5.f64;
	// lfd f0,6704(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 6704);
	// fmul f0,f4,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f0.f64;
	// fnmsub f13,f3,f13,f12
	ctx.f13.f64 = -(ctx.f3.f64 * ctx.f13.f64 - ctx.f12.f64);
	// fsub f12,f3,f11
	ctx.f12.f64 = ctx.f3.f64 - ctx.f11.f64;
	// fmsub f13,f13,f3,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f3.f64 - ctx.f10.f64;
	// fmadd f12,f12,f3,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f3.f64 + ctx.f9.f64;
	// fmul f13,f13,f3
	ctx.f13.f64 = ctx.f13.f64 * ctx.f3.f64;
	// fmsub f12,f12,f3,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f3.f64 - ctx.f8.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 + ctx.f6.f64;
	// fmsub f0,f13,f5,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f5.f64 - ctx.f0.f64;
	// fmadd f1,f4,f7,f0
	ctx.f1.f64 = ctx.f4.f64 * ctx.f7.f64 + ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224FBB4"))) PPC_WEAK_FUNC(sub_8224FBB4);
PPC_FUNC_IMPL(__imp__sub_8224FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FBB8"))) PPC_WEAK_FUNC(sub_8224FBB8);
PPC_FUNC_IMPL(__imp__sub_8224FBB8) {
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
	// bl 0x8224fa28
	ctx.lr = 0x8224FBC8;
	sub_8224FA28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,6648(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6648);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224FBE4"))) PPC_WEAK_FUNC(sub_8224FBE4);
PPC_FUNC_IMPL(__imp__sub_8224FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FBE8"))) PPC_WEAK_FUNC(sub_8224FBE8);
PPC_FUNC_IMPL(__imp__sub_8224FBE8) {
	PPC_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,29640(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 29640);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224FC1C"))) PPC_WEAK_FUNC(sub_8224FC1C);
PPC_FUNC_IMPL(__imp__sub_8224FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FC20"))) PPC_WEAK_FUNC(sub_8224FC20);
PPC_FUNC_IMPL(__imp__sub_8224FC20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x8224fc4c
	if (ctx.cr6.lt) goto loc_8224FC4C;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x8224fc4c
	if (ctx.cr6.gt) goto loc_8224FC4C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,15264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15264);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_8224FC4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224FC54"))) PPC_WEAK_FUNC(sub_8224FC54);
PPC_FUNC_IMPL(__imp__sub_8224FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FC58"))) PPC_WEAK_FUNC(sub_8224FC58);
PPC_FUNC_IMPL(__imp__sub_8224FC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8224FC60;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x8224fd10
	ctx.lr = 0x8224FC98;
	sub_8224FD10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224fcb4
	if (ctx.cr0.eq) goto loc_8224FCB4;
	// li r30,512
	ctx.r30.s64 = 512;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x8224fce8
	goto loc_8224FCE8;
loc_8224FCB4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82252cd8
	ctx.lr = 0x8224FCC0;
	sub_82252CD8(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224fcd0
	if (!ctx.cr0.eq) goto loc_8224FCD0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8224fcd4
	if (!ctx.cr6.eq) goto loc_8224FCD4;
loc_8224FCD0:
	// li r30,128
	ctx.r30.s64 = 128;
loc_8224FCD4:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224fce4
	if (!ctx.cr0.eq) goto loc_8224FCE4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8224fce8
	if (!ctx.cr6.eq) goto loc_8224FCE8;
loc_8224FCE4:
	// ori r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 256;
loc_8224FCE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// std r10,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8224FD0C"))) PPC_WEAK_FUNC(sub_8224FD0C);
PPC_FUNC_IMPL(__imp__sub_8224FD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8224FD10"))) PPC_WEAK_FUNC(sub_8224FD10);
PPC_FUNC_IMPL(__imp__sub_8224FD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8224FD18;
	sub_82248764(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8224fd78
	if (!ctx.cr6.eq) goto loc_8224FD78;
	// bl 0x8224da90
	ctx.lr = 0x8224FD64;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8224FD70;
	sub_8224D920(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82250668
	goto loc_82250668;
loc_8224FD78:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_8224FD7C:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x8224fda4
	if (ctx.cr6.eq) goto loc_8224FDA4;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x8224fda4
	if (ctx.cr6.eq) goto loc_8224FDA4;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// beq cr6,0x8224fda4
	if (ctx.cr6.eq) goto loc_8224FDA4;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// bne cr6,0x8224fdac
	if (!ctx.cr6.eq) goto loc_8224FDAC;
loc_8224FDA4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x8224fd7c
	goto loc_8224FD7C;
loc_8224FDAC:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r21,r8,32768
	ctx.r21.u64 = ctx.r8.u64 | 32768;
loc_8224FDB4:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82250148
	if (ctx.cr6.gt) goto loc_82250148;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,7728
	ctx.r12.s64 = ctx.r12.s64 + 7728;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// nop 
	// addi r12,r12,-532
	ctx.r12.s64 = ctx.r12.s64 + -532;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8224fe0c
	if (ctx.cr6.lt) goto loc_8224FE0C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8224fe0c
	if (ctx.cr6.gt) goto loc_8224FE0C;
loc_8224FE00:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8224FE04:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_8224FE0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8224fe30
	if (!ctx.cr6.eq) goto loc_8224FE30;
loc_8224FE28:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_8224FE30:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8224fe5c
	if (ctx.cr6.eq) goto loc_8224FE5C;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8224fe50
	if (ctx.cr6.eq) goto loc_8224FE50;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x822500f4
	if (!ctx.cr6.eq) goto loc_822500F4;
loc_8224FE48:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_8224FE50:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_8224FE5C:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// b 0x8224fdb4
	goto loc_8224FDB4;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8224fe80
	if (ctx.cr6.lt) goto loc_8224FE80;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8224fe00
	if (!ctx.cr6.gt) goto loc_8224FE00;
loc_8224FE80:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8224fea4
	if (!ctx.cr6.eq) goto loc_8224FEA4;
loc_8224FE9C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_8224FEA4:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8224fee4
	if (ctx.cr6.eq) goto loc_8224FEE4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8224fee4
	if (ctx.cr6.eq) goto loc_8224FEE4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8224fe48
	if (ctx.cr6.eq) goto loc_8224FE48;
loc_8224FEBC:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// ble cr6,0x822500f4
	if (!ctx.cr6.gt) goto loc_822500F4;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// ble cr6,0x8224fedc
	if (!ctx.cr6.gt) goto loc_8224FEDC;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x822500f4
	if (!ctx.cr6.gt) goto loc_822500F4;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bgt cr6,0x822500f4
	if (ctx.cr6.gt) goto loc_822500F4;
loc_8224FEDC:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_8224FEE4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8224fdb4
	goto loc_8224FDB4;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8224ff04
	if (ctx.cr6.lt) goto loc_8224FF04;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8224fe00
	if (!ctx.cr6.gt) goto loc_8224FE00;
loc_8224FF04:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8224fe28
	if (ctx.cr6.eq) goto loc_8224FE28;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8224fe48
	if (ctx.cr6.eq) goto loc_8224FE48;
loc_8224FF28:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_8224FF2C:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82250604
	if (ctx.cr6.eq) goto loc_82250604;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// ble cr6,0x8224ff64
	if (!ctx.cr6.gt) goto loc_8224FF64;
	// lbz r11,151(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8224ff58
	if (ctx.cr6.lt) goto loc_8224FF58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
loc_8224FF58:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8224FF64:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822505f0
	if (ctx.cr6.eq) goto loc_822505F0;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x822501d0
	goto loc_822501D0;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8224ffb4
	goto loc_8224FFB4;
loc_8224FF80:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8224ffbc
	if (ctx.cr6.gt) goto loc_8224FFBC;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x8224ffa4
	if (!ctx.cr6.lt) goto loc_8224FFA4;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x8224ffa8
	goto loc_8224FFA8;
loc_8224FFA4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8224FFA8:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8224FFB4:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8224ff80
	if (!ctx.cr6.lt) goto loc_8224FF80;
loc_8224FFBC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8224fe9c
	if (ctx.cr6.eq) goto loc_8224FE9C;
loc_8224FFD8:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x8224fee4
	if (ctx.cr6.eq) goto loc_8224FEE4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x8224fee4
	if (ctx.cr6.eq) goto loc_8224FEE4;
	// b 0x8224febc
	goto loc_8224FEBC;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82250018
	if (!ctx.cr6.eq) goto loc_82250018;
	// b 0x8225000c
	goto loc_8225000C;
loc_82250000:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8225000C:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82250000
	if (ctx.cr6.eq) goto loc_82250000;
loc_82250018:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// b 0x82250050
	goto loc_82250050;
loc_82250020:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8224ffd8
	if (ctx.cr6.gt) goto loc_8224FFD8;
	// cmplwi cr6,r6,25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 25, ctx.xer);
	// bge cr6,0x82250044
	if (!ctx.cr6.lt) goto loc_82250044;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82250044:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82250050:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82250020
	if (!ctx.cr6.lt) goto loc_82250020;
	// b 0x8224ffd8
	goto loc_8224FFD8;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8224ff28
	if (ctx.cr6.lt) goto loc_8224FF28;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8224ff28
	if (ctx.cr6.gt) goto loc_8224FF28;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8224fe04
	goto loc_8224FE04;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8225009c
	if (ctx.cr6.lt) goto loc_8225009C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8225009c
	if (ctx.cr6.gt) goto loc_8225009C;
loc_82250094:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8224fe04
	goto loc_8224FE04;
loc_8225009C:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822500bc
	if (ctx.cr6.eq) goto loc_822500BC;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82250134
	if (ctx.cr6.eq) goto loc_82250134;
loc_822500AC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8224ff28
	if (!ctx.cr6.eq) goto loc_8224FF28;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_822500BC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8224fdb4
	goto loc_8224FDB4;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x822500dc
	goto loc_822500DC;
loc_822500D0:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_822500DC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x822500d0
	if (ctx.cr6.eq) goto loc_822500D0;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x822500f4
	if (ctx.cr6.lt) goto loc_822500F4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82250094
	if (!ctx.cr6.gt) goto loc_82250094;
loc_822500F4:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x8224ff2c
	goto loc_8224FF2C;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x822500ac
	if (ctx.cr6.lt) goto loc_822500AC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82250094
	if (!ctx.cr6.gt) goto loc_82250094;
	// b 0x822500ac
	goto loc_822500AC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82250140
	if (ctx.cr6.eq) goto loc_82250140;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x822500bc
	if (ctx.cr6.eq) goto loc_822500BC;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x8224ff28
	if (!ctx.cr6.eq) goto loc_8224FF28;
loc_82250134:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r27,-1
	ctx.r27.s64 = -1;
	// b 0x8224fdb4
	goto loc_8224FDB4;
loc_82250140:
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82250148:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8224fdb4
	if (!ctx.cr6.eq) goto loc_8224FDB4;
	// b 0x8224ff2c
	goto loc_8224FF2C;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// b 0x8225018c
	goto loc_8225018C;
loc_82250164:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8225019c
	if (ctx.cr6.gt) goto loc_8225019C;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmpwi cr6,r10,5200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5200, ctx.xer);
	// bgt cr6,0x82250198
	if (ctx.cr6.gt) goto loc_82250198;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8225018C:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82250164
	if (!ctx.cr6.lt) goto loc_82250164;
	// b 0x8225019c
	goto loc_8225019C;
loc_82250198:
	// li r10,5201
	ctx.r10.s64 = 5201;
loc_8225019C:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x822501b8
	goto loc_822501B8;
loc_822501A4:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x822500f4
	if (ctx.cr6.gt) goto loc_822500F4;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_822501B8:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x822501a4
	if (!ctx.cr6.lt) goto loc_822501A4;
	// b 0x822500f4
	goto loc_822500F4;
loc_822501C4:
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822501D0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822501c4
	if (ctx.cr0.eq) goto loc_822501C4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82253b08
	ctx.lr = 0x822501E8;
	sub_82253B08(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x822501f4
	if (!ctx.cr6.lt) goto loc_822501F4;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_822501F4:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82250204
	if (!ctx.cr6.eq) goto loc_82250204;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82250204:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82250210
	if (!ctx.cr6.eq) goto loc_82250210;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_82250210:
	// cmpwi cr6,r11,5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5200, ctx.xer);
	// bgt cr6,0x8225061c
	if (ctx.cr6.gt) goto loc_8225061C;
	// cmpwi cr6,r11,-5200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5200, ctx.xer);
	// blt cr6,0x82250634
	if (ctx.cr6.lt) goto loc_82250634;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r10,r10,16920
	ctx.r10.s64 = ctx.r10.s64 + 16920;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r10,-96
	ctx.r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x822505dc
	if (ctx.cr6.eq) goto loc_822505DC;
	// bge cr6,0x8225024c
	if (!ctx.cr6.lt) goto loc_8225024C;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// neg r26,r11
	ctx.r26.s64 = -ctx.r11.s64;
	// addi r11,r10,17272
	ctx.r11.s64 = ctx.r10.s64 + 17272;
	// addi r25,r11,-96
	ctx.r25.s64 = ctx.r11.s64 + -96;
loc_8225024C:
	// subfic r11,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// lhz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// beq cr6,0x822505dc
	if (ctx.cr6.eq) goto loc_822505DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// li r24,-32768
	ctx.r24.s64 = -32768;
	// ori r23,r10,32768
	ctx.r23.u64 = ctx.r10.u64 | 32768;
loc_8225027C:
	// clrlwi. r11,r26,29
	ctx.r11.u64 = ctx.r26.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// srawi r26,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 3;
	// beq 0x822505d4
	if (ctx.cr0.eq) goto loc_822505D4;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x822502bc
	if (ctx.cr6.lt) goto loc_822502BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82248a40
	ctx.lr = 0x822502AC;
	sub_82248A40(ctx, base);
	// lwz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 118);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,118(r1)
	PPC_STORE_U32(ctx.r1.u32 + 118, ctx.r11.u32);
loc_822502BC:
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// rlwinm r28,r8,0,16,16
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x822505bc
	if (!ctx.cr6.lt) goto loc_822505BC;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x822505bc
	if (!ctx.cr6.lt) goto loc_822505BC;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x822505bc
	if (ctx.cr6.gt) goto loc_822505BC;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x82250320
	if (ctx.cr6.gt) goto loc_82250320;
loc_82250318:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// b 0x822505cc
	goto loc_822505CC;
loc_82250320:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225035c
	if (!ctx.cr6.eq) goto loc_8225035C;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x8225035c
	if (!ctx.cr0.eq) goto loc_8225035C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225035c
	if (!ctx.cr6.eq) goto loc_8225035C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225035c
	if (!ctx.cr6.eq) goto loc_8225035C;
	// sth r22,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r22.u16);
	// b 0x822505d4
	goto loc_822505D4;
loc_8225035C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82250394
	if (!ctx.cr6.eq) goto loc_82250394;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82250394
	if (!ctx.cr0.eq) goto loc_82250394;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82250394
	if (!ctx.cr6.eq) goto loc_82250394;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82250318
	if (ctx.cr6.eq) goto loc_82250318;
loc_82250394:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_822503A0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8225040c
	if (!ctx.cr6.gt) goto loc_8225040C;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_822503BC:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822503e4
	if (ctx.cr6.lt) goto loc_822503E4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822503e8
	if (!ctx.cr6.lt) goto loc_822503E8;
loc_822503E4:
	// li r7,1
	ctx.r7.s64 = 1;
loc_822503E8:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82250400
	if (ctx.cr6.eq) goto loc_82250400;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_82250400:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x822503bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822503BC;
loc_8225040C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x822503a0
	if (ctx.cr0.gt) goto loc_822503A0;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16382
	ctx.r11.s64 = ctx.r11.s64 + -16382;
loc_8225042C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8225047c
	if (!ctx.cr0.gt) goto loc_8225047C;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8225047c
	if (!ctx.cr0.eq) goto loc_8225047C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x8225042c
	goto loc_8225042C;
loc_8225047C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82250504
	if (ctx.cr6.gt) goto loc_82250504;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82250504
	if (!ctx.cr0.lt) goto loc_82250504;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822504A0:
	// lhz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822504b0
	if (ctx.cr0.eq) goto loc_822504B0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_822504B0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x822504a0
	if (ctx.cr0.lt) goto loc_822504A0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82250504
	if (ctx.cr6.eq) goto loc_82250504;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82250504:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x82250524
	if (ctx.cr6.gt) goto loc_82250524;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82250584
	if (!ctx.cr6.eq) goto loc_82250584;
loc_82250524:
	// lwz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 86);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8225057c
	if (!ctx.cr6.eq) goto loc_8225057C;
	// lwz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// stw r22,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82250570
	if (!ctx.cr6.eq) goto loc_82250570;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r22,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82250564
	if (!ctx.cr6.eq) goto loc_82250564;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r21,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82250584
	goto loc_82250584;
loc_82250564:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82250584
	goto loc_82250584;
loc_82250570:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r10.u32);
	// b 0x82250584
	goto loc_82250584;
loc_8225057C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,86(r1)
	PPC_STORE_U32(ctx.r1.u32 + 86, ctx.r10.u32);
loc_82250584:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x822505bc
	if (!ctx.cr6.lt) goto loc_822505BC;
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// stw r8,102(r1)
	PPC_STORE_U32(ctx.r1.u32 + 102, ctx.r8.u32);
	// stw r7,98(r1)
	PPC_STORE_U32(ctx.r1.u32 + 98, ctx.r7.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// b 0x822505d4
	goto loc_822505D4;
loc_822505BC:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// clrlwi. r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822505cc
	if (!ctx.cr0.eq) goto loc_822505CC;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
loc_822505CC:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_822505D4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8225027c
	if (!ctx.cr6.eq) goto loc_8225027C;
loc_822505DC:
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lwz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 102);
	// lwz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 98);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x82250648
	goto loc_82250648;
loc_822505F0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// b 0x82250648
	goto loc_82250648;
loc_82250604:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,4
	ctx.r22.s64 = 4;
	// b 0x82250648
	goto loc_82250648;
loc_8225061C:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r22,2
	ctx.r22.s64 = 2;
	// b 0x82250648
	goto loc_82250648;
loc_82250634:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82250648:
	// sth r11,10(r20)
	PPC_STORE_U16(ctx.r20.u32 + 10, ctx.r11.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r19,16
	ctx.r11.u64 = ctx.r19.u32 & 0xFFFF;
	// stw r8,6(r20)
	PPC_STORE_U32(ctx.r20.u32 + 6, ctx.r8.u32);
	// stw r9,2(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r11.u16);
loc_82250668:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82250670"))) PPC_WEAK_FUNC(sub_82250670);
PPC_FUNC_IMPL(__imp__sub_82250670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r3,r11,15272
	ctx.r3.s64 = ctx.r11.s64 + 15272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225067C"))) PPC_WEAK_FUNC(sub_8225067C);
PPC_FUNC_IMPL(__imp__sub_8225067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250680"))) PPC_WEAK_FUNC(sub_82250680);
PPC_FUNC_IMPL(__imp__sub_82250680) {
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
	// lwz r3,26852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26852);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822506ac
	if (!ctx.cr6.eq) goto loc_822506AC;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x822506b8
	goto loc_822506B8;
loc_822506AC:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x822506bc
	if (!ctx.cr6.lt) goto loc_822506BC;
	// li r3,20
	ctx.r3.s64 = 20;
loc_822506B8:
	// stw r3,26852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26852, ctx.r3.u32);
loc_822506BC:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8224dcb8
	ctx.lr = 0x822506C4;
	sub_8224DCB8(ctx, base);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,26848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26848, ctx.r3.u32);
	// bne 0x822506fc
	if (!ctx.cr0.eq) goto loc_822506FC;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,26852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26852, ctx.r11.u32);
	// bl 0x8224dcb8
	ctx.lr = 0x822506E8;
	sub_8224DCB8(ctx, base);
	// stw r3,26848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26848, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822506fc
	if (!ctx.cr0.eq) goto loc_822506FC;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x8225078c
	goto loc_8225078C;
loc_822506FC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,15272
	ctx.r8.s64 = ctx.r11.s64 + 15272;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8225071c
	goto loc_8225071C;
loc_82250718:
	// lwz r3,26848(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26848);
loc_8225071C:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82250718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82250718;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r8,r10,26592
	ctx.r8.s64 = ctx.r10.s64 + 26592;
loc_82250744:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r7,r7,72
	ctx.r7.s64 = ctx.r7.s64 * 72;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82250774
	if (ctx.cr6.eq) goto loc_82250774;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82250774
	if (ctx.cr6.eq) goto loc_82250774;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8225077c
	if (!ctx.cr6.eq) goto loc_8225077C;
loc_82250774:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8225077C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x82250744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82250744;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225078C:
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

__attribute__((alias("__imp__sub_822507A4"))) PPC_WEAK_FUNC(sub_822507A4);
PPC_FUNC_IMPL(__imp__sub_822507A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822507A8"))) PPC_WEAK_FUNC(sub_822507A8);
PPC_FUNC_IMPL(__imp__sub_822507A8) {
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
	// bl 0x82254180
	ctx.lr = 0x822507B8;
	sub_82254180(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r11,4632(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822507cc
	if (ctx.cr0.eq) goto loc_822507CC;
	// bl 0x82253da8
	ctx.lr = 0x822507CC;
	sub_82253DA8(ctx, base);
loc_822507CC:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,26848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26848);
	// bl 0x8224a858
	ctx.lr = 0x822507D8;
	sub_8224A858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822507E8"))) PPC_WEAK_FUNC(sub_822507E8);
PPC_FUNC_IMPL(__imp__sub_822507E8) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15272
	ctx.r11.s64 = ctx.r11.s64 + 15272;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250838
	if (ctx.cr6.lt) goto loc_82250838;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82250838
	if (ctx.cr6.gt) goto loc_82250838;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8224e010
	ctx.lr = 0x82250828;
	sub_8224E010(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82250840
	goto loc_82250840;
loc_82250838:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8241dd2c
	ctx.lr = 0x82250840;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82250840:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82250854"))) PPC_WEAK_FUNC(sub_82250854);
PPC_FUNC_IMPL(__imp__sub_82250854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250858"))) PPC_WEAK_FUNC(sub_82250858);
PPC_FUNC_IMPL(__imp__sub_82250858) {
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
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x8225088c
	if (!ctx.cr6.lt) goto loc_8225088C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8224e010
	ctx.lr = 0x8225087C;
	sub_8224E010(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82250894
	goto loc_82250894;
loc_8225088C:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8241dd2c
	ctx.lr = 0x82250894;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82250894:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_822508A8"))) PPC_WEAK_FUNC(sub_822508A8);
PPC_FUNC_IMPL(__imp__sub_822508A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,15272
	ctx.r11.s64 = ctx.r11.s64 + 15272;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822508e0
	if (ctx.cr6.lt) goto loc_822508E0;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822508e0
	if (ctx.cr6.gt) goto loc_822508E0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x8224dd90
	sub_8224DD90(ctx, base);
	return;
loc_822508E0:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8241dd3c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822508E8"))) PPC_WEAK_FUNC(sub_822508E8);
PPC_FUNC_IMPL(__imp__sub_822508E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82250904
	if (!ctx.cr6.lt) goto loc_82250904;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x8224dd90
	sub_8224DD90(ctx, base);
	return;
loc_82250904:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x8241dd3c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225090C"))) PPC_WEAK_FUNC(sub_8225090C);
PPC_FUNC_IMPL(__imp__sub_8225090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250910"))) PPC_WEAK_FUNC(sub_82250910);
PPC_FUNC_IMPL(__imp__sub_82250910) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// lfd f4,7744(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r12.u32 + 7744);
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// lfd f5,7752(r12)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r12.u32 + 7752);
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x82250950
	if (ctx.cr0.eq) goto loc_82250950;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	ctx.cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x82250950
	if (!ctx.cr0.lt) goto loc_82250950;
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x82250948
	if (ctx.cr0.lt) goto loc_82250948;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x82250950
	goto loc_82250950;
loc_82250948:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_82250950:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250954"))) PPC_WEAK_FUNC(sub_82250954);
PPC_FUNC_IMPL(__imp__sub_82250954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250958"))) PPC_WEAK_FUNC(sub_82250958);
PPC_FUNC_IMPL(__imp__sub_82250958) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,15264
	ctx.r10.s64 = ctx.r11.s64 + 15264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8224fd10
	ctx.lr = 0x82250998;
	sub_8224FD10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82252cd8
	ctx.lr = 0x822509A8;
	sub_82252CD8(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822509d0
	if (!ctx.cr0.eq) goto loc_822509D0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822509c0
	if (!ctx.cr6.eq) goto loc_822509C0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x822509e8
	goto loc_822509E8;
loc_822509C0:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822509e4
	if (!ctx.cr6.eq) goto loc_822509E4;
loc_822509C8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x822509e8
	goto loc_822509E8;
loc_822509D0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822509c8
	if (!ctx.cr0.eq) goto loc_822509C8;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x822509e8
	if (!ctx.cr0.eq) goto loc_822509E8;
loc_822509E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822509E8:
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

__attribute__((alias("__imp__sub_82250A00"))) PPC_WEAK_FUNC(sub_82250A00);
PPC_FUNC_IMPL(__imp__sub_82250A00) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,15264
	ctx.r10.s64 = ctx.r11.s64 + 15264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8224fd10
	ctx.lr = 0x82250A40;
	sub_8224FD10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822533f0
	ctx.lr = 0x82250A50;
	sub_822533F0(ctx, base);
	// clrlwi. r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82250a78
	if (!ctx.cr0.eq) goto loc_82250A78;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82250a68
	if (!ctx.cr6.eq) goto loc_82250A68;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82250a90
	goto loc_82250A90;
loc_82250A68:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82250a8c
	if (!ctx.cr6.eq) goto loc_82250A8C;
loc_82250A70:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82250a90
	goto loc_82250A90;
loc_82250A78:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82250a70
	if (!ctx.cr0.eq) goto loc_82250A70;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x82250a90
	if (!ctx.cr0.eq) goto loc_82250A90;
loc_82250A8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250A90:
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

__attribute__((alias("__imp__sub_82250AA8"))) PPC_WEAK_FUNC(sub_82250AA8);
PPC_FUNC_IMPL(__imp__sub_82250AA8) {
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
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82250adc
	if (!ctx.cr6.eq) goto loc_82250ADC;
	// bl 0x8224da90
	ctx.lr = 0x82250AC8;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82250AD4;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82250bf4
	goto loc_82250BF4;
loc_82250ADC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82250afc
	if (!ctx.cr6.eq) goto loc_82250AFC;
	// bl 0x8224da90
	ctx.lr = 0x82250AE8;
	sub_8224DA90(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82250AEC:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x8224d920
	ctx.lr = 0x82250AF4;
	sub_8224D920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82250bf4
	goto loc_82250BF4;
loc_82250AFC:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addme r11,r11
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82250b2c
	if (ctx.cr6.gt) goto loc_82250B2C;
	// bl 0x8224da90
	ctx.lr = 0x82250B24;
	sub_8224DA90(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82250aec
	goto loc_82250AEC;
loc_82250B2C:
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ble cr6,0x82250b70
	if (!ctx.cr6.gt) goto loc_82250B70;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_82250B4C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82250b60
	if (ctx.cr0.eq) goto loc_82250B60;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82250b64
	goto loc_82250B64;
loc_82250B60:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82250B64:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82250b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82250B4C;
loc_82250B70:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blt cr6,0x82250bac
	if (ctx.cr6.lt) goto loc_82250BAC;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x82250bac
	if (ctx.cr6.lt) goto loc_82250BAC;
	// b 0x82250b94
	goto loc_82250B94;
loc_82250B90:
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_82250B94:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// beq cr6,0x82250b90
	if (ctx.cr6.eq) goto loc_82250B90;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82250BAC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x82250bc8
	if (!ctx.cr6.eq) goto loc_82250BC8;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// b 0x82250bf0
	goto loc_82250BF0;
loc_82250BC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82250BCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82250bcc
	if (!ctx.cr6.eq) goto loc_82250BCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822497e0
	ctx.lr = 0x82250BF0;
	sub_822497E0(ctx, base);
loc_82250BF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82250BF4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82250C08"))) PPC_WEAK_FUNC(sub_82250C08);
PPC_FUNC_IMPL(__imp__sub_82250C08) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r8,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// beq 0x82250c44
	if (ctx.cr0.eq) goto loc_82250C44;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82250c3c
	if (ctx.cr6.eq) goto loc_82250C3C;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x82250c70
	goto loc_82250C70;
loc_82250C3C:
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82250c74
	goto loc_82250C74;
loc_82250C44:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82250c68
	if (!ctx.cr6.eq) goto loc_82250C68;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82250c68
	if (!ctx.cr6.eq) goto loc_82250C68;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r6,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r11,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// blr 
	return;
loc_82250C68:
	// addi r11,r11,15361
	ctx.r11.s64 = ctx.r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82250C70:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82250C74:
	// rlwinm r8,r9,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r9.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// bne 0x82250cd4
	if (!ctx.cr0.eq) goto loc_82250CD4;
loc_82250C98:
	// lwz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r10,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x82250c98
	if (ctx.cr0.eq) goto loc_82250C98;
loc_82250CD4:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250CE8"))) PPC_WEAK_FUNC(sub_82250CE8);
PPC_FUNC_IMPL(__imp__sub_82250CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82250CF0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82250c08
	ctx.lr = 0x82250D10;
	sub_82250C08(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// rldicr r4,r11,48,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82254188
	ctx.lr = 0x82250D2C;
	sub_82254188(ctx, base);
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lha r10,96(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 96));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224bb38
	ctx.lr = 0x82250D54;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82250d6c
	if (!ctx.cr0.eq) goto loc_82250D6C;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82250D6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x82250D84;
	sub_8224D9F8(ctx, base);
}

__attribute__((alias("__imp__sub_82250D84"))) PPC_WEAK_FUNC(sub_82250D84);
PPC_FUNC_IMPL(__imp__sub_82250D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82250D88"))) PPC_WEAK_FUNC(sub_82250D88);
PPC_FUNC_IMPL(__imp__sub_82250D88) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82249440
	sub_82249440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82250D90"))) PPC_WEAK_FUNC(sub_82250D90);
PPC_FUNC_IMPL(__imp__sub_82250D90) {
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
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82254eb0
	ctx.lr = 0x82250DB4;
	sub_82254EB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82250dd4
	if (!ctx.cr6.eq) goto loc_82250DD4;
	// bl 0x8224da90
	ctx.lr = 0x82250DC0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82250e40
	goto loc_82250E40;
loc_82250DD4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82260088
	ctx.lr = 0x82250DE4;
	sub_82260088(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82250e08
	if (!ctx.cr6.eq) goto loc_82250E08;
	// bl 0x8208db08
	ctx.lr = 0x82250DF4;
	sub_8208DB08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82250e08
	if (ctx.cr0.eq) goto loc_82250E08;
	// bl 0x8224db00
	ctx.lr = 0x82250E00;
	sub_8224DB00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82250e40
	goto loc_82250E40;
loc_82250E08:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82250E40:
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

__attribute__((alias("__imp__sub_82250E58"))) PPC_WEAK_FUNC(sub_82250E58);
PPC_FUNC_IMPL(__imp__sub_82250E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-3008(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3008);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82250E68;
	sub_82248778(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82250eb4
	if (!ctx.cr6.eq) goto loc_82250EB4;
	// bl 0x8224dac8
	ctx.lr = 0x82250E94;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82250EA0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82250f80
	goto loc_82250F80;
loc_82250EB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82250ecc
	if (ctx.cr6.lt) goto loc_82250ECC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250ef0
	if (ctx.cr6.lt) goto loc_82250EF0;
loc_82250ECC:
	// bl 0x8224dac8
	ctx.lr = 0x82250ED0;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82250EDC;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82250EE8;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82250f80
	goto loc_82250F80;
loc_82250EF0:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82250ecc
	if (ctx.cr0.eq) goto loc_82250ECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82250F24;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82250f54
	if (ctx.cr0.eq) goto loc_82250F54;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82250d90
	ctx.lr = 0x82250F4C;
	sub_82250D90(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x82250f70
	goto loc_82250F70;
loc_82250F54:
	// bl 0x8224da90
	ctx.lr = 0x82250F58;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82250F64;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
loc_82250F70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82250fa8
	ctx.lr = 0x82250F7C;
	sub_82250FA8(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_82250F80:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82250E60"))) PPC_WEAK_FUNC(sub_82250E60);
PPC_FUNC_IMPL(__imp__sub_82250E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82250E68;
	sub_82248778(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82250eb4
	if (!ctx.cr6.eq) goto loc_82250EB4;
	// bl 0x8224dac8
	ctx.lr = 0x82250E94;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82250EA0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82250f80
	goto loc_82250F80;
loc_82250EB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82250ecc
	if (ctx.cr6.lt) goto loc_82250ECC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250ef0
	if (ctx.cr6.lt) goto loc_82250EF0;
loc_82250ECC:
	// bl 0x8224dac8
	ctx.lr = 0x82250ED0;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82250EDC;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82250EE8;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82250f80
	goto loc_82250F80;
loc_82250EF0:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82250ecc
	if (ctx.cr0.eq) goto loc_82250ECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82250F24;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82250f54
	if (ctx.cr0.eq) goto loc_82250F54;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82250d90
	ctx.lr = 0x82250F4C;
	sub_82250D90(ctx, base);
	// std r3,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r3.u64);
	// b 0x82250f70
	goto loc_82250F70;
loc_82250F54:
	// bl 0x8224da90
	ctx.lr = 0x82250F58;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82250F64;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r24,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r24.u64);
loc_82250F70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82250fa8
	ctx.lr = 0x82250F7C;
	sub_82250FA8(ctx, base);
	// ld r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
loc_82250F80:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82250F88"))) PPC_WEAK_FUNC(sub_82250F88);
PPC_FUNC_IMPL(__imp__sub_82250F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x82250fc0
	goto loc_82250FC0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82250FC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x82250FC8;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250FA8"))) PPC_WEAK_FUNC(sub_82250FA8);
PPC_FUNC_IMPL(__imp__sub_82250FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x82250FC8;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82250FE0"))) PPC_WEAK_FUNC(sub_82250FE0);
PPC_FUNC_IMPL(__imp__sub_82250FE0) {
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
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8224dcb8
	ctx.lr = 0x82250FF8;
	sub_8224DCB8(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82251008
	if (!ctx.cr0.eq) goto loc_82251008;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822510a4
	goto loc_822510A4;
loc_82251008:
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,26592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26592, ctx.r10.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// stw r11,26568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26568, ctx.r11.u32);
	// bge cr6,0x82251074
	if (!ctx.cr6.lt) goto loc_82251074;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// li r8,10
	ctx.r8.s64 = 10;
loc_82251034:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stw r10,-5(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5, ctx.r10.u32);
	// stw r9,3(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3, ctx.r9.u32);
	// stb r9,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r9.u8);
	// stb r8,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r8.u8);
	// stb r8,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r8.u8);
	// stw r9,59(r11)
	PPC_STORE_U32(ctx.r11.u32 + 59, ctx.r9.u32);
	// stb r9,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r9.u8);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,26592(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26592);
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82251034
	if (ctx.cr6.lt) goto loc_82251034;
loc_82251074:
	// li r11,3
	ctx.r11.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x82251084
	goto loc_82251084;
loc_82251080:
	// lwz r10,26592(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 26592);
loc_82251084:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x82251080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82251080;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822510A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822510B4"))) PPC_WEAK_FUNC(sub_822510B4);
PPC_FUNC_IMPL(__imp__sub_822510B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822510B8"))) PPC_WEAK_FUNC(sub_822510B8);
PPC_FUNC_IMPL(__imp__sub_822510B8) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r30,r11,26592
	ctx.r30.s64 = ctx.r11.s64 + 26592;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822510D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251114
	if (ctx.cr6.eq) goto loc_82251114;
	// addi r11,r3,2304
	ctx.r11.s64 = ctx.r3.s64 + 2304;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82251108
	if (!ctx.cr6.lt) goto loc_82251108;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
loc_822510FC:
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822510fc
	if (ctx.cr6.lt) goto loc_822510FC;
loc_82251108:
	// bl 0x8224a858
	ctx.lr = 0x8225110C;
	sub_8224A858(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82251114:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822510d8
	if (ctx.cr6.lt) goto loc_822510D8;
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

__attribute__((alias("__imp__sub_8225113C"))) PPC_WEAK_FUNC(sub_8225113C);
PPC_FUNC_IMPL(__imp__sub_8225113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251140"))) PPC_WEAK_FUNC(sub_82251140);
PPC_FUNC_IMPL(__imp__sub_82251140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82251148;
	sub_8224876C(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5312(r1)
	ea = -5312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// bne cr6,0x82251174
	if (!ctx.cr6.eq) goto loc_82251174;
loc_8225116C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82251378
	goto loc_82251378;
loc_82251174:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8225119c
	if (!ctx.cr6.eq) goto loc_8225119C;
loc_8225117C:
	// bl 0x8224dac8
	ctx.lr = 0x82251180;
	sub_8224DAC8(ctx, base);
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// bl 0x8224da90
	ctx.lr = 0x82251188;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251194;
	sub_8224D920(ctx, base);
loc_82251194:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82251378
	goto loc_82251378;
loc_8225119C:
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r10,26592
	ctx.r27.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r28,r11,72
	ctx.r28.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822511dc
	if (ctx.cr6.eq) goto loc_822511DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822511e8
	if (!ctx.cr6.eq) goto loc_822511E8;
loc_822511DC:
	// not r11,r29
	ctx.r11.u64 = ~ctx.r29.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225117c
	if (ctx.cr0.eq) goto loc_8225117C;
loc_822511E8:
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82251200
	if (ctx.cr0.eq) goto loc_82251200;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82250d90
	ctx.lr = 0x82251200;
	sub_82250D90(ctx, base);
loc_82251200:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822512c0
	if (ctx.cr0.eq) goto loc_822512C0;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82251334
	if (ctx.cr6.eq) goto loc_82251334;
loc_82251224:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// subf r9,r24,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r24.s64;
loc_82251230:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82251274
	if (!ctx.cr6.lt) goto loc_82251274;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bne cr6,0x82251260
	if (!ctx.cr6.eq) goto loc_82251260;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82251260:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,5119
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5119, ctx.xer);
	// blt cr6,0x82251230
	if (ctx.cr6.lt) goto loc_82251230;
loc_82251274:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x8225fc20
	ctx.lr = 0x82251298;
	sub_8225FC20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822512ec
	if (ctx.cr0.eq) goto loc_822512EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x822512f4
	if (ctx.cr6.lt) goto loc_822512F4;
	// subf r11,r24,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r24.s64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82251224
	if (ctx.cr6.lt) goto loc_82251224;
	// b 0x822512f4
	goto loc_822512F4;
loc_822512C0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8225fc20
	ctx.lr = 0x822512D8;
	sub_8225FC20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822512ec
	if (ctx.cr0.eq) goto loc_822512EC;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// b 0x822512f4
	goto loc_822512F4;
loc_822512EC:
	// bl 0x8208db08
	ctx.lr = 0x822512F0;
	sub_8208DB08(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_822512F4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82251374
	if (!ctx.cr6.eq) goto loc_82251374;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82251334
	if (ctx.cr6.eq) goto loc_82251334;
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 5, ctx.xer);
	// bne cr6,0x82251328
	if (!ctx.cr6.eq) goto loc_82251328;
	// bl 0x8224da90
	ctx.lr = 0x82251310;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x8225131C;
	sub_8224DAC8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82251194
	goto loc_82251194;
loc_82251328:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8224db00
	ctx.lr = 0x82251330;
	sub_8224DB00(ctx, base);
	// b 0x82251194
	goto loc_82251194;
loc_82251334:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82251354
	if (ctx.cr0.eq) goto loc_82251354;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x8225116c
	if (ctx.cr6.eq) goto loc_8225116C;
loc_82251354:
	// bl 0x8224da90
	ctx.lr = 0x82251358;
	sub_8224DA90(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82251364;
	sub_8224DAC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// b 0x82251378
	goto loc_82251378;
loc_82251374:
	// subf r3,r22,r23
	ctx.r3.s64 = ctx.r23.s64 - ctx.r22.s64;
loc_82251378:
	// addi r1,r1,5312
	ctx.r1.s64 = ctx.r1.s64 + 5312;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82251380"))) PPC_WEAK_FUNC(sub_82251380);
PPC_FUNC_IMPL(__imp__sub_82251380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2984(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82251390;
	sub_8224877C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822513d4
	if (!ctx.cr6.eq) goto loc_822513D4;
	// bl 0x8224dac8
	ctx.lr = 0x822513B4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x822513C0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822514a4
	goto loc_822514A4;
loc_822513D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822513ec
	if (ctx.cr6.lt) goto loc_822513EC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251410
	if (ctx.cr6.lt) goto loc_82251410;
loc_822513EC:
	// bl 0x8224dac8
	ctx.lr = 0x822513F0;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x822513FC;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251408;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822514a4
	goto loc_822514A4;
loc_82251410:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822513ec
	if (ctx.cr0.eq) goto loc_822513EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82251444;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82251474
	if (ctx.cr0.eq) goto loc_82251474;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82251140
	ctx.lr = 0x8225146C;
	sub_82251140(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82251494
	goto loc_82251494;
loc_82251474:
	// bl 0x8224da90
	ctx.lr = 0x82251478;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82251484;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82251494:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x822514cc
	ctx.lr = 0x822514A0;
	sub_822514CC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_822514A4:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82251388"))) PPC_WEAK_FUNC(sub_82251388);
PPC_FUNC_IMPL(__imp__sub_82251388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82251390;
	sub_8224877C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822513d4
	if (!ctx.cr6.eq) goto loc_822513D4;
	// bl 0x8224dac8
	ctx.lr = 0x822513B4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x822513C0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822514a4
	goto loc_822514A4;
loc_822513D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822513ec
	if (ctx.cr6.lt) goto loc_822513EC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251410
	if (ctx.cr6.lt) goto loc_82251410;
loc_822513EC:
	// bl 0x8224dac8
	ctx.lr = 0x822513F0;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x822513FC;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251408;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822514a4
	goto loc_822514A4;
loc_82251410:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822513ec
	if (ctx.cr0.eq) goto loc_822513EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82251444;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82251474
	if (ctx.cr0.eq) goto loc_82251474;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82251140
	ctx.lr = 0x8225146C;
	sub_82251140(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82251494
	goto loc_82251494;
loc_82251474:
	// bl 0x8224da90
	ctx.lr = 0x82251478;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82251484;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82251494:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x822514cc
	ctx.lr = 0x822514A0;
	sub_822514CC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_822514A4:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822514AC"))) PPC_WEAK_FUNC(sub_822514AC);
PPC_FUNC_IMPL(__imp__sub_822514AC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x822514e4
	goto loc_822514E4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_822514E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x822514EC;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822514CC"))) PPC_WEAK_FUNC(sub_822514CC);
PPC_FUNC_IMPL(__imp__sub_822514CC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x822514EC;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82251504"))) PPC_WEAK_FUNC(sub_82251504);
PPC_FUNC_IMPL(__imp__sub_82251504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251508"))) PPC_WEAK_FUNC(sub_82251508);
PPC_FUNC_IMPL(__imp__sub_82251508) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r11,5076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5076, ctx.r11.u32);
	// bl 0x822516c8
	ctx.lr = 0x82251534;
	sub_822516C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq 0x82251554
	if (ctx.cr0.eq) goto loc_82251554;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x82251568
	goto loc_82251568;
loc_82251554:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_82251568:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82251590"))) PPC_WEAK_FUNC(sub_82251590);
PPC_FUNC_IMPL(__imp__sub_82251590) {
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
	// bne cr6,0x822515bc
	if (!ctx.cr6.eq) goto loc_822515BC;
	// bl 0x8224da90
	ctx.lr = 0x822515A8;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x822515B4;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822515c0
	goto loc_822515C0;
loc_822515BC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_822515C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822515D0"))) PPC_WEAK_FUNC(sub_822515D0);
PPC_FUNC_IMPL(__imp__sub_822515D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822515D8;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82248f70
	ctx.lr = 0x82251608;
	sub_82248F70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82251628
	if (!ctx.cr6.eq) goto loc_82251628;
loc_82251610:
	// bl 0x8224da90
	ctx.lr = 0x82251614;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251620;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822516ac
	goto loc_822516AC;
loc_82251628:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82251638
	if (ctx.cr6.eq) goto loc_82251638;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82251610
	if (ctx.cr6.eq) goto loc_82251610;
loc_82251638:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x82251650
	if (ctx.cr6.gt) goto loc_82251650;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82251650:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224cde0
	ctx.lr = 0x82251674;
	sub_8224CDE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822516a8
	if (ctx.cr6.eq) goto loc_822516A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x8225169c
	if (ctx.cr0.lt) goto loc_8225169C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x822516a8
	goto loc_822516A8;
loc_8225169C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224caa0
	ctx.lr = 0x822516A8;
	sub_8224CAA0(ctx, base);
loc_822516A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822516AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822516B4"))) PPC_WEAK_FUNC(sub_822516B4);
PPC_FUNC_IMPL(__imp__sub_822516B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822516B8"))) PPC_WEAK_FUNC(sub_822516B8);
PPC_FUNC_IMPL(__imp__sub_822516B8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822515d0
	sub_822515D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822516C4"))) PPC_WEAK_FUNC(sub_822516C4);
PPC_FUNC_IMPL(__imp__sub_822516C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822516C8"))) PPC_WEAK_FUNC(sub_822516C8);
PPC_FUNC_IMPL(__imp__sub_822516C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822516D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8225176c
	if (ctx.cr6.gt) goto loc_8225176C;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
loc_822516E8:
	// bl 0x8208da50
	ctx.lr = 0x822516EC;
	sub_8208DA50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82251708
	if (!ctx.cr0.eq) goto loc_82251708;
	// bl 0x8224e1c8
	ctx.lr = 0x822516F8;
	sub_8224E1C8(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x8224e198
	ctx.lr = 0x82251700;
	sub_8224E198(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x822491a0
	ctx.lr = 0x82251708;
	sub_822491A0(ctx, base);
loc_82251708:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x82251718
	if (!ctx.cr6.eq) goto loc_82251718;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82251718:
	// bl 0x8208da50
	ctx.lr = 0x8225171C;
	sub_8208DA50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8208c580
	ctx.lr = 0x82251728;
	sub_8208C580(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82251764
	if (!ctx.cr0.eq) goto loc_82251764;
	// lwz r11,5092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5092);
	// li r31,12
	ctx.r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82251754
	if (ctx.cr6.eq) goto loc_82251754;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e108
	ctx.lr = 0x82251748;
	sub_8224E108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822516e8
	if (!ctx.cr0.eq) goto loc_822516E8;
	// b 0x8225175c
	goto loc_8225175C;
loc_82251754:
	// bl 0x8224da90
	ctx.lr = 0x82251758;
	sub_8224DA90(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_8225175C:
	// bl 0x8224da90
	ctx.lr = 0x82251760;
	sub_8224DA90(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82251764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82251788
	goto loc_82251788;
loc_8225176C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e108
	ctx.lr = 0x82251774;
	sub_8224E108(ctx, base);
	// bl 0x8224da90
	ctx.lr = 0x82251778;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82251788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82251790"))) PPC_WEAK_FUNC(sub_82251790);
PPC_FUNC_IMPL(__imp__sub_82251790) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822517bc
	if (!ctx.cr6.eq) goto loc_822517BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822517bc
	if (ctx.cr6.eq) goto loc_822517BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251870
	if (ctx.cr6.eq) goto loc_82251870;
	// b 0x8225186c
	goto loc_8225186C;
loc_822517BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822517cc
	if (ctx.cr6.eq) goto loc_822517CC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822517CC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822517f4
	if (!ctx.cr6.gt) goto loc_822517F4;
	// bl 0x8224da90
	ctx.lr = 0x822517E0;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x822517EC;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82251874
	goto loc_82251874;
loc_822517F4:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82251834
	if (!ctx.cr6.gt) goto loc_82251834;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225181c
	if (ctx.cr6.eq) goto loc_8225181C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225181c
	if (ctx.cr6.eq) goto loc_8225181C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82248f70
	ctx.lr = 0x8225181C;
	sub_82248F70(ctx, base);
loc_8225181C:
	// bl 0x8224da90
	ctx.lr = 0x82251820;
	sub_8224DA90(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8225182C;
	sub_8224DA90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82251874
	goto loc_82251874;
loc_82251834:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251860
	if (ctx.cr6.eq) goto loc_82251860;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8225185c
	if (!ctx.cr6.eq) goto loc_8225185C;
	// bl 0x8224da90
	ctx.lr = 0x82251848;
	sub_8224DA90(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251854;
	sub_8224D920(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x82251874
	goto loc_82251874;
loc_8225185C:
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_82251860:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251870
	if (ctx.cr6.eq) goto loc_82251870;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8225186C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82251870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82251884"))) PPC_WEAK_FUNC(sub_82251884);
PPC_FUNC_IMPL(__imp__sub_82251884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251888"))) PPC_WEAK_FUNC(sub_82251888);
PPC_FUNC_IMPL(__imp__sub_82251888) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82251790
	sub_82251790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82251890"))) PPC_WEAK_FUNC(sub_82251890);
PPC_FUNC_IMPL(__imp__sub_82251890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// lwz r11,15264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15264);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822518AC"))) PPC_WEAK_FUNC(sub_822518AC);
PPC_FUNC_IMPL(__imp__sub_822518AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822518B0"))) PPC_WEAK_FUNC(sub_822518B0);
PPC_FUNC_IMPL(__imp__sub_822518B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822518C0"))) PPC_WEAK_FUNC(sub_822518C0);
PPC_FUNC_IMPL(__imp__sub_822518C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822518C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,-4096
	ctx.r30.s64 = -4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82251904
	if (ctx.cr6.eq) goto loc_82251904;
	// divwu r11,r30,r3
	ctx.r11.u32 = ctx.r30.u32 / ctx.r3.u32;
	// twllei r3,0
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82251904
	if (!ctx.cr6.lt) goto loc_82251904;
	// bl 0x8224da90
	ctx.lr = 0x822518F0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8225197c
	goto loc_8225197C;
loc_82251904:
	// mullw. r31,r3,r4
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82251910
	if (!ctx.cr0.eq) goto loc_82251910;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82251910:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
loc_82251914:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82251938
	if (ctx.cr6.gt) goto loc_82251938;
	// bl 0x8208da50
	ctx.lr = 0x82251924;
	sub_8208DA50(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8208c580
	ctx.lr = 0x82251930;
	sub_8208C580(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225197c
	if (!ctx.cr0.eq) goto loc_8225197C;
loc_82251938:
	// lwz r11,5092(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225196c
	if (ctx.cr6.eq) goto loc_8225196C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224e108
	ctx.lr = 0x8225194C;
	sub_8224E108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82251914
	if (!ctx.cr0.eq) goto loc_82251914;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82251964
	if (ctx.cr6.eq) goto loc_82251964;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82251964:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225197c
	goto loc_8225197C;
loc_8225196C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225197c
	if (ctx.cr6.eq) goto loc_8225197C;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8225197C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82251984"))) PPC_WEAK_FUNC(sub_82251984);
PPC_FUNC_IMPL(__imp__sub_82251984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251988"))) PPC_WEAK_FUNC(sub_82251988);
PPC_FUNC_IMPL(__imp__sub_82251988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,5104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82251994"))) PPC_WEAK_FUNC(sub_82251994);
PPC_FUNC_IMPL(__imp__sub_82251994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251998"))) PPC_WEAK_FUNC(sub_82251998);
PPC_FUNC_IMPL(__imp__sub_82251998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2960(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2960);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822519A8;
	sub_82248780(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bgt cr6,0x82251a7c
	if (ctx.cr6.gt) goto loc_82251A7C;
	// beq cr6,0x822519f8
	if (ctx.cr6.eq) goto loc_822519F8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82251a10
	if (ctx.cr6.eq) goto loc_82251A10;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822519f8
	if (ctx.cr6.eq) goto loc_822519F8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82251aa8
	if (ctx.cr6.eq) goto loc_82251AA8;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82251a94
	if (!ctx.cr6.eq) goto loc_82251A94;
loc_822519F8:
	// bl 0x822494b8
	ctx.lr = 0x822519FC;
	sub_822494B8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bne 0x82251a20
	if (!ctx.cr0.eq) goto loc_82251A20;
loc_82251A08:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82251c20
	goto loc_82251C20;
loc_82251A10:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r30,r11,5096
	ctx.r30.s64 = ctx.r11.s64 + 5096;
	// lwz r11,5096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5096);
	// b 0x82251ae0
	goto loc_82251AE0;
loc_82251A20:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,6508(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6508);
loc_82251A30:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82251a50
	if (ctx.cr6.eq) goto loc_82251A50;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82251a30
	if (ctx.cr6.lt) goto loc_82251A30;
loc_82251A50:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82251a6c
	if (!ctx.cr6.lt) goto loc_82251A6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82251a70
	if (ctx.cr6.eq) goto loc_82251A70;
loc_82251A6C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82251A70:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82251ae8
	goto loc_82251AE8;
loc_82251A7C:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x82251ad0
	if (ctx.cr6.eq) goto loc_82251AD0;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// beq cr6,0x82251abc
	if (ctx.cr6.eq) goto loc_82251ABC;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// beq cr6,0x82251aa8
	if (ctx.cr6.eq) goto loc_82251AA8;
loc_82251A94:
	// bl 0x8224da90
	ctx.lr = 0x82251A98;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251AA4;
	sub_8224D920(ctx, base);
	// b 0x82251a08
	goto loc_82251A08;
loc_82251AA8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82251ae0
	goto loc_82251AE0;
loc_82251ABC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82251ae0
	goto loc_82251AE0;
loc_82251AD0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82251AE0:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82251AE8:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82251c1c
	if (ctx.cr6.eq) goto loc_82251C1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82251b04
	if (!ctx.cr6.eq) goto loc_82251B04;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82249420
	ctx.lr = 0x82251B04;
	sub_82249420(ctx, base);
loc_82251B04:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82251b14
	if (ctx.cr6.eq) goto loc_82251B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224e010
	ctx.lr = 0x82251B14;
	sub_8224E010(ctx, base);
loc_82251B14:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x82251b34
	if (ctx.cr6.eq) goto loc_82251B34;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x82251b34
	if (ctx.cr6.eq) goto loc_82251B34;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82251b58
	if (!ctx.cr6.eq) goto loc_82251B58;
loc_82251B34:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r26.u32);
	// bne cr6,0x82251ba8
	if (!ctx.cr6.eq) goto loc_82251BA8;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
loc_82251B58:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82251ba8
	if (!ctx.cr6.eq) goto loc_82251BA8;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r10,6496(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6496);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_82251B74:
	// lwz r9,6500(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6500);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82251bac
	if (!ctx.cr6.lt) goto loc_82251BAC;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,6496(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6496);
	// b 0x82251b74
	goto loc_82251B74;
loc_82251BA8:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82251BAC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82251c48
	ctx.lr = 0x82251BB8;
	sub_82251C48(ctx, base);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x82251be0
	if (!ctx.cr6.eq) goto loc_82251BE0;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x82251BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82251bec
	goto loc_82251BEC;
loc_82251BE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82251BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82251BEC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82251c04
	if (ctx.cr6.eq) goto loc_82251C04;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x82251c04
	if (ctx.cr6.eq) goto loc_82251C04;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82251c1c
	if (!ctx.cr6.eq) goto loc_82251C1C;
loc_82251C04:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82251c1c
	if (!ctx.cr6.eq) goto loc_82251C1C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82251C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251C20:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822519A0"))) PPC_WEAK_FUNC(sub_822519A0);
PPC_FUNC_IMPL(__imp__sub_822519A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822519A8;
	sub_82248780(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bgt cr6,0x82251a7c
	if (ctx.cr6.gt) goto loc_82251A7C;
	// beq cr6,0x822519f8
	if (ctx.cr6.eq) goto loc_822519F8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82251a10
	if (ctx.cr6.eq) goto loc_82251A10;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822519f8
	if (ctx.cr6.eq) goto loc_822519F8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82251aa8
	if (ctx.cr6.eq) goto loc_82251AA8;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82251a94
	if (!ctx.cr6.eq) goto loc_82251A94;
loc_822519F8:
	// bl 0x822494b8
	ctx.lr = 0x822519FC;
	sub_822494B8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bne 0x82251a20
	if (!ctx.cr0.eq) goto loc_82251A20;
loc_82251A08:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82251c20
	goto loc_82251C20;
loc_82251A10:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r30,r11,5096
	ctx.r30.s64 = ctx.r11.s64 + 5096;
	// lwz r11,5096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5096);
	// b 0x82251ae0
	goto loc_82251AE0;
loc_82251A20:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,6508(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6508);
loc_82251A30:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82251a50
	if (ctx.cr6.eq) goto loc_82251A50;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82251a30
	if (ctx.cr6.lt) goto loc_82251A30;
loc_82251A50:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82251a6c
	if (!ctx.cr6.lt) goto loc_82251A6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82251a70
	if (ctx.cr6.eq) goto loc_82251A70;
loc_82251A6C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82251A70:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82251ae8
	goto loc_82251AE8;
loc_82251A7C:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x82251ad0
	if (ctx.cr6.eq) goto loc_82251AD0;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// beq cr6,0x82251abc
	if (ctx.cr6.eq) goto loc_82251ABC;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// beq cr6,0x82251aa8
	if (ctx.cr6.eq) goto loc_82251AA8;
loc_82251A94:
	// bl 0x8224da90
	ctx.lr = 0x82251A98;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251AA4;
	sub_8224D920(ctx, base);
	// b 0x82251a08
	goto loc_82251A08;
loc_82251AA8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82251ae0
	goto loc_82251AE0;
loc_82251ABC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82251ae0
	goto loc_82251AE0;
loc_82251AD0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,5096
	ctx.r11.s64 = ctx.r11.s64 + 5096;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82251AE0:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82251AE8:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82251c1c
	if (ctx.cr6.eq) goto loc_82251C1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82251b04
	if (!ctx.cr6.eq) goto loc_82251B04;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82249420
	ctx.lr = 0x82251B04;
	sub_82249420(ctx, base);
loc_82251B04:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82251b14
	if (ctx.cr6.eq) goto loc_82251B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224e010
	ctx.lr = 0x82251B14;
	sub_8224E010(ctx, base);
loc_82251B14:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x82251b34
	if (ctx.cr6.eq) goto loc_82251B34;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x82251b34
	if (ctx.cr6.eq) goto loc_82251B34;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82251b58
	if (!ctx.cr6.eq) goto loc_82251B58;
loc_82251B34:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r26.u32);
	// bne cr6,0x82251ba8
	if (!ctx.cr6.eq) goto loc_82251BA8;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
loc_82251B58:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82251ba8
	if (!ctx.cr6.eq) goto loc_82251BA8;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r10,6496(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6496);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_82251B74:
	// lwz r9,6500(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 6500);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82251bac
	if (!ctx.cr6.lt) goto loc_82251BAC;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,6496(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6496);
	// b 0x82251b74
	goto loc_82251B74;
loc_82251BA8:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82251BAC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82251c48
	ctx.lr = 0x82251BB8;
	sub_82251C48(ctx, base);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x82251be0
	if (!ctx.cr6.eq) goto loc_82251BE0;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x82251BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82251bec
	goto loc_82251BEC;
loc_82251BE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82251BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82251BEC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82251c04
	if (ctx.cr6.eq) goto loc_82251C04;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x82251c04
	if (ctx.cr6.eq) goto loc_82251C04;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82251c1c
	if (!ctx.cr6.eq) goto loc_82251C1C;
loc_82251C04:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82251c1c
	if (!ctx.cr6.eq) goto loc_82251C1C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82251C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82251C20:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82251C28"))) PPC_WEAK_FUNC(sub_82251C28);
PPC_FUNC_IMPL(__imp__sub_82251C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82251c60
	goto loc_82251C60;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82251C60:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82251c70
	if (ctx.cr6.eq) goto loc_82251C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224dd90
	ctx.lr = 0x82251C70;
	sub_8224DD90(ctx, base);
loc_82251C70:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82251C48"))) PPC_WEAK_FUNC(sub_82251C48);
PPC_FUNC_IMPL(__imp__sub_82251C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82251c70
	if (ctx.cr6.eq) goto loc_82251C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224dd90
	ctx.lr = 0x82251C70;
	sub_8224DD90(ctx, base);
loc_82251C70:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82251C88"))) PPC_WEAK_FUNC(sub_82251C88);
PPC_FUNC_IMPL(__imp__sub_82251C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82251C90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82251cd0
	if (ctx.cr6.eq) goto loc_82251CD0;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// twllei r4,0
	// divwu r11,r11,r4
	ctx.r11.u32 = ctx.r11.u32 / ctx.r4.u32;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82251cd0
	if (!ctx.cr6.lt) goto loc_82251CD0;
	// bl 0x8224da90
	ctx.lr = 0x82251CBC;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82251d18
	goto loc_82251D18;
loc_82251CD0:
	// mullw r30,r4,r5
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82251ce8
	if (ctx.cr6.eq) goto loc_82251CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224dc60
	ctx.lr = 0x82251CE4;
	sub_8224DC60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82251CE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224db70
	ctx.lr = 0x82251CF4;
	sub_8224DB70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82251d14
	if (ctx.cr0.eq) goto loc_82251D14;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82251d14
	if (!ctx.cr6.lt) goto loc_82251D14;
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x82251D14;
	sub_82248F70(ctx, base);
loc_82251D14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82251D18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82251D20"))) PPC_WEAK_FUNC(sub_82251D20);
PPC_FUNC_IMPL(__imp__sub_82251D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82251D28;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82251d4c
	if (!ctx.cr6.eq) goto loc_82251D4C;
	// bl 0x8224da90
	ctx.lr = 0x82251D3C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251D48;
	sub_8224D920(ctx, base);
	// b 0x82251ec0
	goto loc_82251EC0;
loc_82251D4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82251ec0
	if (ctx.cr0.eq) goto loc_82251EC0;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82251ec0
	if (!ctx.cr0.eq) goto loc_82251EC0;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82251d74
	if (ctx.cr0.eq) goto loc_82251D74;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82251ebc
	goto loc_82251EBC;
loc_82251D74:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82251d94
	if (!ctx.cr0.eq) goto loc_82251D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251508
	ctx.lr = 0x82251D90;
	sub_82251508(ctx, base);
	// b 0x82251d9c
	goto loc_82251D9C;
loc_82251D94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82251D9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82251590
	ctx.lr = 0x82251DAC;
	sub_82251590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82255940
	ctx.lr = 0x82251DB8;
	sub_82255940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82251e9c
	if (ctx.cr0.eq) goto loc_82251E9C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82251e9c
	if (ctx.cr6.eq) goto loc_82251E9C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82251e54
	if (!ctx.cr0.eq) goto loc_82251E54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251590
	ctx.lr = 0x82251DE4;
	sub_82251590(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82251e30
	if (ctx.cr6.eq) goto loc_82251E30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251590
	ctx.lr = 0x82251DF4;
	sub_82251590(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82251e30
	if (ctx.cr6.eq) goto loc_82251E30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251590
	ctx.lr = 0x82251E04;
	sub_82251590(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,26592
	ctx.r30.s64 = ctx.r10.s64 + 26592;
	// bl 0x82251590
	ctx.lr = 0x82251E1C;
	sub_82251590(ctx, base);
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82251e38
	goto loc_82251E38;
loc_82251E30:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,15928
	ctx.r11.s64 = ctx.r11.s64 + 15928;
loc_82251E38:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,130
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 130, ctx.xer);
	// bne cr6,0x82251e54
	if (!ctx.cr6.eq) goto loc_82251E54;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82251E54:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bne cr6,0x82251e7c
	if (!ctx.cr6.eq) goto loc_82251E7C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82251e7c
	if (ctx.cr0.eq) goto loc_82251E7C;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82251e7c
	if (!ctx.cr0.eq) goto loc_82251E7C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82251E7C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82251ec4
	goto loc_82251EC4;
loc_82251E9C:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82251EBC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82251EC0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82251EC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82251ECC"))) PPC_WEAK_FUNC(sub_82251ECC);
PPC_FUNC_IMPL(__imp__sub_82251ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82251ED0"))) PPC_WEAK_FUNC(sub_82251ED0);
PPC_FUNC_IMPL(__imp__sub_82251ED0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82251fb4
	if (!ctx.cr0.eq) goto loc_82251FB4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82251590
	ctx.lr = 0x82251F00;
	sub_82251590(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r8,r10,15928
	ctx.r8.s64 = ctx.r10.s64 + 15928;
	// beq cr6,0x82251f3c
	if (ctx.cr6.eq) goto loc_82251F3C;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82251f3c
	if (ctx.cr6.eq) goto loc_82251F3C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 * 72;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82251f40
	goto loc_82251F40;
loc_82251F3C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82251F40:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82251f88
	if (!ctx.cr0.eq) goto loc_82251F88;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82251f78
	if (ctx.cr6.eq) goto loc_82251F78;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82251f78
	if (ctx.cr6.eq) goto loc_82251F78;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82251f7c
	goto loc_82251F7C;
loc_82251F78:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82251F7C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82251fb4
	if (ctx.cr0.eq) goto loc_82251FB4;
loc_82251F88:
	// bl 0x8224da90
	ctx.lr = 0x82251F8C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82251F98;
	sub_8224D920(ctx, base);
loc_82251F98:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82251F9C:
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
loc_82251FB4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82251f98
	if (ctx.cr6.eq) goto loc_82251F98;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82251fd8
	if (!ctx.cr0.eq) goto loc_82251FD8;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82251f98
	if (ctx.cr0.eq) goto loc_82251F98;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82251f98
	if (!ctx.cr0.eq) goto loc_82251F98;
loc_82251FD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82251fec
	if (!ctx.cr6.eq) goto loc_82251FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251508
	ctx.lr = 0x82251FEC;
	sub_82251508(ctx, base);
loc_82251FEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82252010
	if (!ctx.cr6.eq) goto loc_82252010;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82251f98
	if (!ctx.cr6.eq) goto loc_82251F98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82252010:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82252048
	if (ctx.cr0.eq) goto loc_82252048;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r30
	ctx.r10.s64 = ctx.r30.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8225204c
	if (ctx.cr6.eq) goto loc_8225204C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82251f98
	goto loc_82251F98;
loc_82252048:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
loc_8225204C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r10,r9,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r9,0,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x82251f9c
	goto loc_82251F9C;
}

__attribute__((alias("__imp__sub_82252074"))) PPC_WEAK_FUNC(sub_82252074);
PPC_FUNC_IMPL(__imp__sub_82252074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252078"))) PPC_WEAK_FUNC(sub_82252078);
PPC_FUNC_IMPL(__imp__sub_82252078) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822520a4
	if (ctx.cr6.eq) goto loc_822520A4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822520a4
	if (ctx.cr6.eq) goto loc_822520A4;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822520ac
	if (!ctx.cr0.eq) goto loc_822520AC;
	// beq cr6,0x822520a4
	if (ctx.cr6.eq) goto loc_822520A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_822520A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822520AC:
	// beq cr6,0x822520b8
	if (ctx.cr6.eq) goto loc_822520B8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_822520B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822520C0"))) PPC_WEAK_FUNC(sub_822520C0);
PPC_FUNC_IMPL(__imp__sub_822520C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822520C8;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// ori r29,r11,65279
	ctx.r29.u64 = ctx.r11.u64 | 65279;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82252c00
	ctx.lr = 0x822520F4;
	sub_82252C00(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82252180
	if (!ctx.cr6.eq) goto loc_82252180;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8224e2d0
	ctx.lr = 0x82252110;
	sub_8224E2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8225214c
	if (!ctx.cr0.gt) goto loc_8225214C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82252274
	if (!ctx.cr6.gt) goto loc_82252274;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8225214c
	if (!ctx.cr6.eq) goto loc_8225214C;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r3,25
	ctx.r3.s64 = 25;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x82252a90
	ctx.lr = 0x82252148;
	sub_82252A90(ctx, base);
	// b 0x82252284
	goto loc_82252284;
loc_8225214C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// lfd f0,29648(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29648);
	// fadd f3,f31,f0
	ctx.f3.f64 = ctx.f31.f64 + ctx.f0.f64;
loc_8225216C:
	// li r4,25
	ctx.r4.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82252b10
	ctx.lr = 0x8225217C;
	sub_82252B10(ctx, base);
	// b 0x82252284
	goto loc_82252284;
loc_82252180:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f30,29640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x82252274
	if (ctx.cr6.eq) goto loc_82252274;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8224e358
	ctx.lr = 0x8225219C;
	sub_8224E358(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822521bc
	if (!ctx.cr6.lt) goto loc_822521BC;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82252230
	if (ctx.cr6.lt) goto loc_82252230;
	// b 0x822521d0
	goto loc_822521D0;
loc_822521BC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822521dc
	if (ctx.cr6.gt) goto loc_822521DC;
loc_822521D0:
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x82252208
	if (!ctx.cr6.gt) goto loc_82252208;
loc_822521DC:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,14640(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14640);
	// bl 0x8224fbe8
	ctx.lr = 0x822521EC;
	sub_8224FBE8(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_822521F8:
	// li r3,17
	ctx.r3.s64 = 17;
loc_822521FC:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
loc_82252200:
	// fcfid f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(ctx.f0.s64);
	// b 0x8225216c
	goto loc_8225216C;
loc_82252208:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82252228
	if (!ctx.cr6.gt) goto loc_82252228;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x8224e290
	ctx.lr = 0x82252218;
	sub_8224E290(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822521f8
	goto loc_822521F8;
loc_82252228:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x82252248
	if (!ctx.cr6.lt) goto loc_82252248;
loc_82252230:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmul f3,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64 * ctx.f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82252200
	goto loc_82252200;
loc_82252248:
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// bge cr6,0x8225226c
	if (!ctx.cr6.lt) goto loc_8225226C;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x8224e290
	ctx.lr = 0x82252258;
	sub_8224E290(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822521fc
	goto loc_822521FC;
loc_8225226C:
	// bl 0x8224e290
	ctx.lr = 0x82252270;
	sub_8224E290(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82252274:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82252c00
	ctx.lr = 0x82252280;
	sub_82252C00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82252284:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82252294"))) PPC_WEAK_FUNC(sub_82252294);
PPC_FUNC_IMPL(__imp__sub_82252294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252298"))) PPC_WEAK_FUNC(sub_82252298);
PPC_FUNC_IMPL(__imp__sub_82252298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822522A0;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwinm. r4,r5,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq 0x822522f8
	if (ctx.cr0.eq) goto loc_822522F8;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,143
	ctx.r27.u64 = ctx.r27.u64 | 143;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x822522fc
	goto loc_822522FC;
loc_822522F8:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822522FC:
	// rlwinm. r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225231c
	if (ctx.cr0.eq) goto loc_8225231C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,147
	ctx.r27.u64 = ctx.r27.u64 | 147;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8225231C:
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225233c
	if (ctx.cr0.eq) goto loc_8225233C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,145
	ctx.r27.u64 = ctx.r27.u64 | 145;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8225233C:
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225235c
	if (ctx.cr0.eq) goto loc_8225235C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,142
	ctx.r27.u64 = ctx.r27.u64 | 142;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8225235C:
	// rlwinm. r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225237c
	if (ctx.cr0.eq) goto loc_8225237C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
	// ori r27,r27,144
	ctx.r27.u64 = ctx.r27.u64 | 144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8225237C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,20,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,24,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,23,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,25,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,28,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bl 0x82252c30
	ctx.lr = 0x822523F8;
	sub_82252C30(ctx, base);
	// rlwinm. r11,r3,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252410
	if (ctx.cr0.eq) goto loc_82252410;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82252410:
	// rlwinm. r11,r3,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252428
	if (ctx.cr0.eq) goto loc_82252428;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82252428:
	// rlwinm. r11,r3,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252440
	if (ctx.cr0.eq) goto loc_82252440;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82252440:
	// rlwinm. r11,r3,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252458
	if (ctx.cr0.eq) goto loc_82252458;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82252458:
	// rlwinm. r11,r3,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252470
	if (ctx.cr0.eq) goto loc_82252470;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82252470:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822524c4
	if (ctx.cr6.lt) goto loc_822524C4;
	// beq cr6,0x822524b4
	if (ctx.cr6.eq) goto loc_822524B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822524a4
	if (ctx.cr6.lt) goto loc_822524A4;
	// bne cr6,0x822524d4
	if (!ctx.cr6.eq) goto loc_822524D4;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x822524d0
	goto loc_822524D0;
loc_822524A4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x822524d0
	goto loc_822524D0;
loc_822524B4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// b 0x822524d0
	goto loc_822524D0;
loc_822524C4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_822524D0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822524D4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r28,15,5,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 15) & 0x7FF8000) | (ctx.r10.u64 & 0xFFFFFFFFF8007FFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x82252558
	if (ctx.cr6.eq) goto loc_82252558;
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// b 0x82252598
	goto loc_82252598;
loc_82252558:
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stfd f0,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.f0.u64);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfd f0,0(r26)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// stfd f0,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.f0.u64);
loc_82252598:
	// bl 0x82255b68
	ctx.lr = 0x8225259C;
	sub_82255B68(ctx, base);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822603e8
	ctx.lr = 0x822525B0;
	sub_822603E8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822525cc
	if (ctx.cr0.eq) goto loc_822525CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822525CC:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822525e4
	if (ctx.cr0.eq) goto loc_822525E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822525E4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822525fc
	if (ctx.cr0.eq) goto loc_822525FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822525FC:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252614
	if (ctx.cr0.eq) goto loc_82252614;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82252614:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225262c
	if (ctx.cr0.eq) goto loc_8225262C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8225262C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82252670
	if (ctx.cr6.lt) goto loc_82252670;
	// beq cr6,0x82252664
	if (ctx.cr6.eq) goto loc_82252664;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82252658
	if (ctx.cr6.lt) goto loc_82252658;
	// bne cr6,0x8225267c
	if (!ctx.cr6.eq) goto loc_8225267C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r30,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x82252678
	goto loc_82252678;
loc_82252658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r30,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x82252678
	goto loc_82252678;
loc_82252664:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x82252678
	goto loc_82252678;
loc_82252670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_82252678:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8225267C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82252690
	if (ctx.cr6.eq) goto loc_82252690;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x82252698
	goto loc_82252698;
loc_82252690:
	// lfd f0,80(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// stfd f0,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.f0.u64);
loc_82252698:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822526A0"))) PPC_WEAK_FUNC(sub_822526A0);
PPC_FUNC_IMPL(__imp__sub_822526A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822526A8;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r28,r3,27
	ctx.r28.u64 = ctx.r3.u32 & 0x1F;
	// beq 0x822526e0
	if (ctx.cr0.eq) goto loc_822526E0;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822526e0
	if (ctx.cr0.eq) goto loc_822526E0;
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// bl 0x82252c64
	ctx.lr = 0x822526D8;
	sub_82252C64(ctx, base);
	// rlwinm r28,r28,0,29,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// b 0x822528c4
	goto loc_822528C4;
loc_822526E0:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252700
	if (ctx.cr0.eq) goto loc_82252700;
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252700
	if (ctx.cr0.eq) goto loc_82252700;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// bl 0x82252c64
	ctx.lr = 0x822526F8;
	sub_82252C64(ctx, base);
	// rlwinm r28,r28,0,30,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x822528c4
	goto loc_822528C4;
loc_82252700:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822527cc
	if (ctx.cr0.eq) goto loc_822527CC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822527cc
	if (ctx.cr0.eq) goto loc_822527CC;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// bl 0x82252c64
	ctx.lr = 0x82252718;
	sub_82252C64(ctx, base);
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82252794
	if (ctx.cr6.lt) goto loc_82252794;
	// beq cr6,0x82252774
	if (ctx.cr6.eq) goto loc_82252774;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82252754
	if (ctx.cr6.lt) goto loc_82252754;
	// bne cr6,0x822527c4
	if (!ctx.cr6.eq) goto loc_822527C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,29640(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822527b4
	if (!ctx.cr6.gt) goto loc_822527B4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfd f0,14656(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14656);
	// b 0x822527c0
	goto loc_822527C0;
loc_82252754:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,29640(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822527a8
	if (ctx.cr6.gt) goto loc_822527A8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfd f0,14656(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14656);
	// b 0x822527bc
	goto loc_822527BC;
loc_82252774:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,29640(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfd f0,14656(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14656);
	// bgt cr6,0x822527c0
	if (ctx.cr6.gt) goto loc_822527C0;
	// b 0x822527bc
	goto loc_822527BC;
loc_82252794:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f0,29640(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822527b4
	if (!ctx.cr6.gt) goto loc_822527B4;
loc_822527A8:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfd f0,14640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14640);
	// b 0x822527c0
	goto loc_822527C0;
loc_822527B4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfd f0,14640(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14640);
loc_822527BC:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822527C0:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
loc_822527C4:
	// rlwinm r28,r28,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x822528c4
	goto loc_822528C4;
loc_822527CC:
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822528c4
	if (ctx.cr0.eq) goto loc_822528C4;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822528c4
	if (ctx.cr0.eq) goto loc_822528C4;
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x822527ec
	if (ctx.cr0.eq) goto loc_822527EC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822527EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfd f31,29640(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 29640);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x822528ac
	if (ctx.cr6.eq) goto loc_822528AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224e358
	ctx.lr = 0x82252808;
	sub_8224E358(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// cmpwi cr6,r11,-1074
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1074, ctx.xer);
	// bge cr6,0x82252828
	if (!ctx.cr6.lt) goto loc_82252828;
	// fmul f0,f1,f31
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822528a4
	goto loc_822528A4;
loc_82252828:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x82252838
	if (ctx.cr6.lt) goto loc_82252838;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82252838:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1021
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1021, ctx.xer);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bge cr6,0x82252894
	if (!ctx.cr6.lt) goto loc_82252894;
	// subfic r11,r11,-1021
	ctx.xer.ca = ctx.r11.u32 <= 4294966275;
	ctx.r11.s64 = -1021 - ctx.r11.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82252860:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82252874
	if (ctx.cr0.eq) goto loc_82252874;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82252874
	if (!ctx.cr6.eq) goto loc_82252874;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82252874:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x82252884
	if (ctx.cr0.eq) goto loc_82252884;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_82252884:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x82252860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82252860;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82252894:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822528a4
	if (ctx.cr6.eq) goto loc_822528A4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822528A4:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
	// b 0x822528b0
	goto loc_822528B0;
loc_822528AC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_822528B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x822528c0
	if (ctx.cr6.eq) goto loc_822528C0;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// bl 0x82252c64
	ctx.lr = 0x822528C0;
	sub_82252C64(ctx, base);
loc_822528C0:
	// rlwinm r28,r28,0,31,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_822528C4:
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822528e0
	if (ctx.cr0.eq) goto loc_822528E0;
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822528e0
	if (ctx.cr0.eq) goto loc_822528E0;
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// bl 0x82252c64
	ctx.lr = 0x822528DC;
	sub_82252C64(ctx, base);
	// rlwinm r28,r28,0,28,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_822528E0:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822528F4"))) PPC_WEAK_FUNC(sub_822528F4);
PPC_FUNC_IMPL(__imp__sub_822528F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822528F8"))) PPC_WEAK_FUNC(sub_822528F8);
PPC_FUNC_IMPL(__imp__sub_822528F8) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82252924
	if (ctx.cr6.eq) goto loc_82252924;
	// ble cr6,0x82252930
	if (!ctx.cr6.gt) goto loc_82252930;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x82252930
	if (ctx.cr6.gt) goto loc_82252930;
	// bl 0x8224da90
	ctx.lr = 0x8225291C;
	sub_8224DA90(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x8225292c
	goto loc_8225292C;
loc_82252924:
	// bl 0x8224da90
	ctx.lr = 0x82252928;
	sub_8224DA90(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
loc_8225292C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82252930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252940"))) PPC_WEAK_FUNC(sub_82252940);
PPC_FUNC_IMPL(__imp__sub_82252940) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252950
	if (ctx.cr0.eq) goto loc_82252950;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82252950:
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252960
	if (ctx.cr0.eq) goto loc_82252960;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82252960:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252970
	if (ctx.cr0.eq) goto loc_82252970;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82252970:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252980
	if (ctx.cr0.eq) goto loc_82252980;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82252980:
	// rlwinm r3,r3,1,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252988"))) PPC_WEAK_FUNC(sub_82252988);
PPC_FUNC_IMPL(__imp__sub_82252988) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stfd f1,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfd f2,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// stfd f3,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f3.u64);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822529C4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82252a54
	if (ctx.cr6.eq) goto loc_82252A54;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822529c4
	if (ctx.cr6.lt) goto loc_822529C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822529E8:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x82252a64
	if (ctx.cr6.eq) goto loc_82252A64;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x82252c00
	ctx.lr = 0x82252A34;
	sub_82252C00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6048
	ctx.lr = 0x82252A3C;
	sub_822E6048(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82252a4c
	if (!ctx.cr0.eq) goto loc_82252A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822528f8
	ctx.lr = 0x82252A4C;
	sub_822528F8(ctx, base);
loc_82252A4C:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x82252a74
	goto loc_82252A74;
loc_82252A54:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x822529e8
	goto loc_822529E8;
loc_82252A64:
	// bl 0x82252c00
	ctx.lr = 0x82252A68;
	sub_82252C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822528f8
	ctx.lr = 0x82252A70;
	sub_822528F8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82252A74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82252A8C"))) PPC_WEAK_FUNC(sub_82252A8C);
PPC_FUNC_IMPL(__imp__sub_82252A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252A90"))) PPC_WEAK_FUNC(sub_82252A90);
PPC_FUNC_IMPL(__imp__sub_82252A90) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fadd f31,f1,f2
	ctx.f31.f64 = ctx.f1.f64 + ctx.f2.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,17880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82252ad4
	if (!ctx.cr6.eq) goto loc_82252AD4;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82252988
	ctx.lr = 0x82252AD0;
	sub_82252988(ctx, base);
	// b 0x82252af8
	goto loc_82252AF8;
loc_82252AD4:
	// bl 0x8224da90
	ctx.lr = 0x82252AD8;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82252c00
	ctx.lr = 0x82252AF4;
	sub_82252C00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82252AF8:
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

__attribute__((alias("__imp__sub_82252B10"))) PPC_WEAK_FUNC(sub_82252B10);
PPC_FUNC_IMPL(__imp__sub_82252B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82252B18;
	sub_8224878C(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.f3.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfd f1,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.f1.u64);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// bl 0x822526a0
	ctx.lr = 0x82252B50;
	sub_822526A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82252b90
	if (!ctx.cr0.eq) goto loc_82252B90;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfd f31,128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,5
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// oris r11,r11,34816
	ctx.r11.u64 = ctx.r11.u64 | 2281701376;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82252298
	ctx.lr = 0x82252B8C;
	sub_82252298(ctx, base);
	// lwz r30,300(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
loc_82252B90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82252940
	ctx.lr = 0x82252B98;
	sub_82252940(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,17880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17880);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82252bcc
	if (!ctx.cr6.eq) goto loc_82252BCC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82252bcc
	if (ctx.cr6.eq) goto loc_82252BCC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfd f3,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82252988
	ctx.lr = 0x82252BC8;
	sub_82252988(ctx, base);
	// b 0x82252be4
	goto loc_82252BE4;
loc_82252BCC:
	// bl 0x822528f8
	ctx.lr = 0x82252BD0;
	sub_822528F8(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x82252c00
	ctx.lr = 0x82252BE0;
	sub_82252C00(ctx, base);
	// lfd f1,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
loc_82252BE4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82252BF4"))) PPC_WEAK_FUNC(sub_82252BF4);
PPC_FUNC_IMPL(__imp__sub_82252BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252BF8"))) PPC_WEAK_FUNC(sub_82252BF8);
PPC_FUNC_IMPL(__imp__sub_82252BF8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252BFC"))) PPC_WEAK_FUNC(sub_82252BFC);
PPC_FUNC_IMPL(__imp__sub_82252BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252C00"))) PPC_WEAK_FUNC(sub_82252C00);
PPC_FUNC_IMPL(__imp__sub_82252C00) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// xori r5,r3,248
	ctx.r5.u64 = ctx.r3.u64 ^ 248;
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 & ctx.r4.u64;
	// andc r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 & ~ctx.r4.u64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfd f0,-8(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// xori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 ^ 248;
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252C30"))) PPC_WEAK_FUNC(sub_82252C30);
PPC_FUNC_IMPL(__imp__sub_82252C30) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252C40"))) PPC_WEAK_FUNC(sub_82252C40);
PPC_FUNC_IMPL(__imp__sub_82252C40) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// li r3,4
	ctx.r3.s64 = 4;
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// and r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 & ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252C64"))) PPC_WEAK_FUNC(sub_82252C64);
PPC_FUNC_IMPL(__imp__sub_82252C64) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252C84"))) PPC_WEAK_FUNC(sub_82252C84);
PPC_FUNC_IMPL(__imp__sub_82252C84) {
	PPC_FUNC_PROLOGUE();
	// stw r3,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252C94"))) PPC_WEAK_FUNC(sub_82252C94);
PPC_FUNC_IMPL(__imp__sub_82252C94) {
	PPC_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252CA4"))) PPC_WEAK_FUNC(sub_82252CA4);
PPC_FUNC_IMPL(__imp__sub_82252CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252CA8"))) PPC_WEAK_FUNC(sub_82252CA8);
PPC_FUNC_IMPL(__imp__sub_82252CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r10,26864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26864);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82252ccc
	if (!ctx.cr6.eq) goto loc_82252CCC;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,26864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26864, ctx.r9.u32);
	// stw r10,5128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5128, ctx.r10.u32);
loc_82252CCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82252CD4"))) PPC_WEAK_FUNC(sub_82252CD4);
PPC_FUNC_IMPL(__imp__sub_82252CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82252CD8"))) PPC_WEAK_FUNC(sub_82252CD8);
PPC_FUNC_IMPL(__imp__sub_82252CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82252CE0;
	sub_82248764(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,16868
	ctx.r20.s64 = ctx.r10.s64 + 16868;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x82252d68
	if (!ctx.cr6.eq) goto loc_82252D68;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82252D30:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82252d50
	if (!ctx.cr6.eq) goto loc_82252D50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82252d30
	if (ctx.cr6.lt) goto loc_82252D30;
	// b 0x8225339c
	goto loc_8225339C;
loc_82252D50:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x822533a0
	goto loc_822533A0;
loc_82252D68:
	// lwz r25,8(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82252eb4
	if (ctx.cr0.eq) goto loc_82252EB4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82252e20
	if (!ctx.cr0.eq) goto loc_82252E20;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82252eb4
	if (!ctx.cr6.lt) goto loc_82252EB4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82252E00:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82252e20
	if (!ctx.cr6.eq) goto loc_82252E20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82252e00
	if (ctx.cr6.lt) goto loc_82252E00;
	// b 0x82252eb4
	goto loc_82252EB4;
loc_82252E20:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82252e64
	if (ctx.cr6.lt) goto loc_82252E64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82252e68
	if (!ctx.cr6.lt) goto loc_82252E68;
loc_82252E64:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82252E68:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x82252eb4
	if (ctx.cr0.lt) goto loc_82252EB4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82252E80:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82252eb4
	if (ctx.cr6.eq) goto loc_82252EB4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82252ea4
	if (ctx.cr6.lt) goto loc_82252EA4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82252ea8
	if (!ctx.cr6.lt) goto loc_82252EA8;
loc_82252EA4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82252EA8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x82252e80
	if (!ctx.cr0.lt) goto loc_82252E80;
loc_82252EB4:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x82252efc
	if (!ctx.cr6.lt) goto loc_82252EFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82252efc
	if (ctx.cr6.eq) goto loc_82252EFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82252EF4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82252ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82252EF4;
loc_82252EFC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82252f08
	if (ctx.cr6.eq) goto loc_82252F08;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82252F08:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82252f34
	if (!ctx.cr6.lt) goto loc_82252F34;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x822533a0
	goto loc_822533A0;
loc_82252F34:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x8225321c
	if (ctx.cr6.gt) goto loc_8225321C;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_82252F9C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x82252f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82252F9C;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82252FDC:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82252ff0
	if (ctx.cr6.lt) goto loc_82252FF0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82252ff4
	goto loc_82252FF4;
loc_82252FF0:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82252FF4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82252fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82252FDC;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253124
	if (ctx.cr0.eq) goto loc_82253124;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225308c
	if (!ctx.cr0.eq) goto loc_8225308C;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82253124
	if (!ctx.cr6.lt) goto loc_82253124;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8225306C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225308c
	if (!ctx.cr6.eq) goto loc_8225308C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8225306c
	if (ctx.cr6.lt) goto loc_8225306C;
	// b 0x82253124
	goto loc_82253124;
loc_8225308C:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822530d0
	if (ctx.cr6.lt) goto loc_822530D0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822530d4
	if (!ctx.cr6.lt) goto loc_822530D4;
loc_822530D0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822530D4:
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x82253124
	if (ctx.cr0.lt) goto loc_82253124;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822530F0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82253124
	if (ctx.cr6.eq) goto loc_82253124;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82253114
	if (ctx.cr6.lt) goto loc_82253114;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82253118
	if (!ctx.cr6.lt) goto loc_82253118;
loc_82253114:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82253118:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x822530f0
	if (!ctx.cr0.lt) goto loc_822530F0;
loc_82253124:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x8225316c
	if (!ctx.cr6.lt) goto loc_8225316C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225316c
	if (ctx.cr6.eq) goto loc_8225316C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82253164:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82253164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253164;
loc_8225316C:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
loc_822531A8:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x822531a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822531A8;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822531E8:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822531fc
	if (ctx.cr6.lt) goto loc_822531FC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82253200
	goto loc_82253200;
loc_822531FC:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82253200:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822531e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822531E8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x822533a0
	goto loc_822533A0;
loc_8225321C:
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822532ec
	if (ctx.cr6.lt) goto loc_822532EC;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_82253278:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x82253278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253278;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822532B8:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822532cc
	if (ctx.cr6.lt) goto loc_822532CC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822532d0
	goto loc_822532D0;
loc_822532CC:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_822532D0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822532b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822532B8;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x822533a0
	goto loc_822533A0;
loc_822532EC:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_82253334:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x82253334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253334;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82253374:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82253388
	if (ctx.cr6.lt) goto loc_82253388;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8225338c
	goto loc_8225338C;
loc_82253388:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_8225338C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82253374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253374;
loc_8225339C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_822533A0:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r21.s64;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r19.s64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x822533dc
	if (!ctx.cr6.eq) goto loc_822533DC;
	// lwz r11,-148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x822533e4
	goto loc_822533E4;
loc_822533DC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822533e8
	if (!ctx.cr6.eq) goto loc_822533E8;
loc_822533E4:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_822533E8:
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_822533EC"))) PPC_WEAK_FUNC(sub_822533EC);
PPC_FUNC_IMPL(__imp__sub_822533EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822533F0"))) PPC_WEAK_FUNC(sub_822533F0);
PPC_FUNC_IMPL(__imp__sub_822533F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x822533F8;
	sub_82248764(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,16892
	ctx.r20.s64 = ctx.r10.s64 + 16892;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x82253480
	if (!ctx.cr6.eq) goto loc_82253480;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82253448:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82253468
	if (!ctx.cr6.eq) goto loc_82253468;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82253448
	if (ctx.cr6.lt) goto loc_82253448;
	// b 0x82253ab4
	goto loc_82253AB4;
loc_82253468:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x82253ab8
	goto loc_82253AB8;
loc_82253480:
	// lwz r25,8(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822535cc
	if (ctx.cr0.eq) goto loc_822535CC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82253538
	if (!ctx.cr0.eq) goto loc_82253538;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822535cc
	if (!ctx.cr6.lt) goto loc_822535CC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82253518:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82253538
	if (!ctx.cr6.eq) goto loc_82253538;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82253518
	if (ctx.cr6.lt) goto loc_82253518;
	// b 0x822535cc
	goto loc_822535CC;
loc_82253538:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225357c
	if (ctx.cr6.lt) goto loc_8225357C;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82253580
	if (!ctx.cr6.lt) goto loc_82253580;
loc_8225357C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82253580:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x822535cc
	if (ctx.cr0.lt) goto loc_822535CC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82253598:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822535cc
	if (ctx.cr6.eq) goto loc_822535CC;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822535bc
	if (ctx.cr6.lt) goto loc_822535BC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x822535c0
	if (!ctx.cr6.lt) goto loc_822535C0;
loc_822535BC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822535C0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x82253598
	if (!ctx.cr0.lt) goto loc_82253598;
loc_822535CC:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x82253614
	if (!ctx.cr6.lt) goto loc_82253614;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82253614
	if (ctx.cr6.eq) goto loc_82253614;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8225360C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8225360c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225360C;
loc_82253614:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82253620
	if (ctx.cr6.eq) goto loc_82253620;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82253620:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8225364c
	if (!ctx.cr6.lt) goto loc_8225364C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x82253ab8
	goto loc_82253AB8;
loc_8225364C:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x82253934
	if (ctx.cr6.gt) goto loc_82253934;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_822536B4:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x822536b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822536B4;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822536F4:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82253708
	if (ctx.cr6.lt) goto loc_82253708;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8225370c
	goto loc_8225370C;
loc_82253708:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_8225370C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822536f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822536F4;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r11.s64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225383c
	if (ctx.cr0.eq) goto loc_8225383C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822537a4
	if (!ctx.cr0.eq) goto loc_822537A4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8225383c
	if (!ctx.cr6.lt) goto loc_8225383C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82253784:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822537a4
	if (!ctx.cr6.eq) goto loc_822537A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82253784
	if (ctx.cr6.lt) goto loc_82253784;
	// b 0x8225383c
	goto loc_8225383C;
loc_822537A4:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822537e8
	if (ctx.cr6.lt) goto loc_822537E8;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822537ec
	if (!ctx.cr6.lt) goto loc_822537EC;
loc_822537E8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822537EC:
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x8225383c
	if (ctx.cr0.lt) goto loc_8225383C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82253808:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8225383c
	if (ctx.cr6.eq) goto loc_8225383C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225382c
	if (ctx.cr6.lt) goto loc_8225382C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82253830
	if (!ctx.cr6.lt) goto loc_82253830;
loc_8225382C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82253830:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x82253808
	if (!ctx.cr0.lt) goto loc_82253808;
loc_8225383C:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x82253884
	if (!ctx.cr6.lt) goto loc_82253884;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82253884
	if (ctx.cr6.eq) goto loc_82253884;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8225387C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8225387c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225387C;
loc_82253884:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
loc_822538C0:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x822538c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822538C0;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82253900:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82253914
	if (ctx.cr6.lt) goto loc_82253914;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82253918
	goto loc_82253918;
loc_82253914:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82253918:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82253900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253900;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82253ab8
	goto loc_82253AB8;
loc_82253934:
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82253a04
	if (ctx.cr6.lt) goto loc_82253A04;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_82253990:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x82253990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253990;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822539D0:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822539e4
	if (ctx.cr6.lt) goto loc_822539E4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822539e8
	goto loc_822539E8;
loc_822539E4:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_822539E8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822539d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822539D0;
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x82253ab8
	goto loc_82253AB8;
loc_82253A04:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r11.s64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_82253A4C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x82253a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253A4C;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82253A8C:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82253aa0
	if (ctx.cr6.lt) goto loc_82253AA0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82253aa4
	goto loc_82253AA4;
loc_82253AA0:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82253AA4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82253a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82253A8C;
loc_82253AB4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82253AB8:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r21.s64;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r19.s64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x82253af4
	if (!ctx.cr6.eq) goto loc_82253AF4;
	// lwz r11,-148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x82253afc
	goto loc_82253AFC;
loc_82253AF4:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82253b00
	if (!ctx.cr6.eq) goto loc_82253B00;
loc_82253AFC:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82253B00:
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82253B04"))) PPC_WEAK_FUNC(sub_82253B04);
PPC_FUNC_IMPL(__imp__sub_82253B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253B08"))) PPC_WEAK_FUNC(sub_82253B08);
PPC_FUNC_IMPL(__imp__sub_82253B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82253B10;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// li r27,16462
	ctx.r27.s64 = 16462;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82253cf8
	if (ctx.cr6.eq) goto loc_82253CF8;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_82253B3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82253B4C;
	sub_82248A40(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82253bc8
	if (ctx.cr6.lt) goto loc_82253BC8;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82253bcc
	if (!ctx.cr6.lt) goto loc_82253BCC;
loc_82253BC8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82253BCC:
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82253c08
	if (ctx.cr6.eq) goto loc_82253C08;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82253bf0
	if (ctx.cr6.lt) goto loc_82253BF0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82253bf4
	if (!ctx.cr6.lt) goto loc_82253BF4;
loc_82253BF0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82253BF4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82253c08
	if (ctx.cr6.eq) goto loc_82253C08;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82253C08:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82253c28
	if (ctx.cr6.lt) goto loc_82253C28;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82253c2c
	if (!ctx.cr6.lt) goto loc_82253C2C;
loc_82253C28:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82253C2C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82253c44
	if (ctx.cr6.eq) goto loc_82253C44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82253C44:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82253ca0
	if (ctx.cr6.lt) goto loc_82253CA0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82253ca4
	if (!ctx.cr6.lt) goto loc_82253CA4;
loc_82253CA0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82253CA4:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82253ce0
	if (ctx.cr6.eq) goto loc_82253CE0;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82253cc8
	if (ctx.cr6.lt) goto loc_82253CC8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82253ccc
	if (!ctx.cr6.lt) goto loc_82253CCC;
loc_82253CC8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82253CCC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82253ce0
	if (ctx.cr6.eq) goto loc_82253CE0;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82253CE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82253b3c
	if (!ctx.cr0.eq) goto loc_82253B3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82253d84
	if (!ctx.cr6.eq) goto loc_82253D84;
loc_82253CF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82253cf8
	if (ctx.cr6.eq) goto loc_82253CF8;
	// b 0x82253d84
	goto loc_82253D84;
loc_82253D40:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82253D84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253d40
	if (ctx.cr0.eq) goto loc_82253D40;
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82253D9C"))) PPC_WEAK_FUNC(sub_82253D9C);
PPC_FUNC_IMPL(__imp__sub_82253D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253DA0"))) PPC_WEAK_FUNC(sub_82253DA0);
PPC_FUNC_IMPL(__imp__sub_82253DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2936(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2936);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82253DB0;
	sub_82248780(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x8224e010
	ctx.lr = 0x82253DC8;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
loc_82253DD8:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,26852(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26852);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82253e50
	if (!ctx.cr6.lt) goto loc_82253E50;
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82253e44
	if (ctx.cr6.eq) goto loc_82253E44;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253e24
	if (ctx.cr0.eq) goto loc_82253E24;
	// bl 0x82255c40
	ctx.lr = 0x82253E14;
	sub_82255C40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82253e24
	if (ctx.cr6.eq) goto loc_82253E24;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82253E24:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x82253e44
	if (ctx.cr6.lt) goto loc_82253E44;
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8224a858
	ctx.lr = 0x82253E38;
	sub_8224A858(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82253E44:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82253dd8
	goto loc_82253DD8;
loc_82253E50:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82253e68
	ctx.lr = 0x82253E5C;
	sub_82253E68(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82253DA8"))) PPC_WEAK_FUNC(sub_82253DA8);
PPC_FUNC_IMPL(__imp__sub_82253DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82253DB0;
	sub_82248780(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x8224e010
	ctx.lr = 0x82253DC8;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
loc_82253DD8:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,26852(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26852);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82253e50
	if (!ctx.cr6.lt) goto loc_82253E50;
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82253e44
	if (ctx.cr6.eq) goto loc_82253E44;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253e24
	if (ctx.cr0.eq) goto loc_82253E24;
	// bl 0x82255c40
	ctx.lr = 0x82253E14;
	sub_82255C40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82253e24
	if (ctx.cr6.eq) goto loc_82253E24;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82253E24:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x82253e44
	if (ctx.cr6.lt) goto loc_82253E44;
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8224a858
	ctx.lr = 0x82253E38;
	sub_8224A858(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82253E44:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82253dd8
	goto loc_82253DD8;
loc_82253E50:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82253e68
	ctx.lr = 0x82253E5C;
	sub_82253E68(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82253E68"))) PPC_WEAK_FUNC(sub_82253E68);
PPC_FUNC_IMPL(__imp__sub_82253E68) {
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
	// bl 0x8224dd90
	ctx.lr = 0x82253E7C;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82253E8C"))) PPC_WEAK_FUNC(sub_82253E8C);
PPC_FUNC_IMPL(__imp__sub_82253E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253E90"))) PPC_WEAK_FUNC(sub_82253E90);
PPC_FUNC_IMPL(__imp__sub_82253E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82253E98;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82253f08
	if (!ctx.cr6.eq) goto loc_82253F08;
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253f08
	if (ctx.cr0.eq) goto loc_82253F08;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf. r30,r29,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82253f08
	if (!ctx.cr0.gt) goto loc_82253F08;
	// bl 0x82251590
	ctx.lr = 0x82253ED4;
	sub_82251590(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82251388
	ctx.lr = 0x82253EE0;
	sub_82251388(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82253efc
	if (!ctx.cr6.eq) goto loc_82253EFC;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82253f08
	if (ctx.cr0.eq) goto loc_82253F08;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x82253f04
	goto loc_82253F04;
loc_82253EFC:
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82253F04:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82253F08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82253F24"))) PPC_WEAK_FUNC(sub_82253F24);
PPC_FUNC_IMPL(__imp__sub_82253F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82253F28"))) PPC_WEAK_FUNC(sub_82253F28);
PPC_FUNC_IMPL(__imp__sub_82253F28) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82253f4c
	if (!ctx.cr6.eq) goto loc_82253F4C;
	// bl 0x82253fa8
	ctx.lr = 0x82253F48;
	sub_82253FA8(ctx, base);
	// b 0x82253f8c
	goto loc_82253F8C;
loc_82253F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82253e90
	ctx.lr = 0x82253F54;
	sub_82253E90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82253f64
	if (ctx.cr0.eq) goto loc_82253F64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82253f8c
	goto loc_82253F8C;
loc_82253F64:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253f88
	if (ctx.cr0.eq) goto loc_82253F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251590
	ctx.lr = 0x82253F78;
	sub_82251590(ctx, base);
	// bl 0x82255d48
	ctx.lr = 0x82253F7C;
	sub_82255D48(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82253f8c
	goto loc_82253F8C;
loc_82253F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82253F8C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82253FA0"))) PPC_WEAK_FUNC(sub_82253FA0);
PPC_FUNC_IMPL(__imp__sub_82253FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2912(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2912);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82253FB0;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x8224e010
	ctx.lr = 0x82253FD4;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r29,r11,26848
	ctx.r29.s64 = ctx.r11.s64 + 26848;
	// addi r10,r10,26852
	ctx.r10.s64 = ctx.r10.s64 + 26852;
loc_82253FE8:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822540a4
	if (!ctx.cr6.lt) goto loc_822540A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82254098
	if (ctx.cr6.eq) goto loc_82254098;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82254098
	if (ctx.cr0.eq) goto loc_82254098;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82250858
	ctx.lr = 0x82254028;
	sub_82250858(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225408c
	if (ctx.cr0.eq) goto loc_8225408C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82254068
	if (!ctx.cr6.eq) goto loc_82254068;
	// bl 0x82253f28
	ctx.lr = 0x82254050;
	sub_82253F28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225408c
	if (ctx.cr6.eq) goto loc_8225408C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8225408c
	goto loc_8225408C;
loc_82254068:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8225408c
	if (!ctx.cr6.eq) goto loc_8225408C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225408c
	if (ctx.cr0.eq) goto loc_8225408C;
	// bl 0x82253f28
	ctx.lr = 0x8225407C;
	sub_82253F28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225408c
	if (!ctx.cr6.eq) goto loc_8225408C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8225408C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x8225411c
	ctx.lr = 0x82254098;
	sub_8225411C(ctx, base);
loc_82254098:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82253fe8
	goto loc_82253FE8;
loc_822540A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x822540cc
	ctx.lr = 0x822540B0;
	sub_822540CC(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x822540c4
	if (ctx.cr6.eq) goto loc_822540C4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_822540C4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82253FA8"))) PPC_WEAK_FUNC(sub_82253FA8);
PPC_FUNC_IMPL(__imp__sub_82253FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82253FB0;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// bl 0x8224e010
	ctx.lr = 0x82253FD4;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r29,r11,26848
	ctx.r29.s64 = ctx.r11.s64 + 26848;
	// addi r10,r10,26852
	ctx.r10.s64 = ctx.r10.s64 + 26852;
loc_82253FE8:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822540a4
	if (!ctx.cr6.lt) goto loc_822540A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82254098
	if (ctx.cr6.eq) goto loc_82254098;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82254098
	if (ctx.cr0.eq) goto loc_82254098;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82250858
	ctx.lr = 0x82254028;
	sub_82250858(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225408c
	if (ctx.cr0.eq) goto loc_8225408C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82254068
	if (!ctx.cr6.eq) goto loc_82254068;
	// bl 0x82253f28
	ctx.lr = 0x82254050;
	sub_82253F28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225408c
	if (ctx.cr6.eq) goto loc_8225408C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8225408c
	goto loc_8225408C;
loc_82254068:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8225408c
	if (!ctx.cr6.eq) goto loc_8225408C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225408c
	if (ctx.cr0.eq) goto loc_8225408C;
	// bl 0x82253f28
	ctx.lr = 0x8225407C;
	sub_82253F28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225408c
	if (!ctx.cr6.eq) goto loc_8225408C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8225408C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x8225411c
	ctx.lr = 0x82254098;
	sub_8225411C(ctx, base);
loc_82254098:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82253fe8
	goto loc_82253FE8;
loc_822540A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x822540cc
	ctx.lr = 0x822540B0;
	sub_822540CC(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x822540c4
	if (ctx.cr6.eq) goto loc_822540C4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_822540C4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822540CC"))) PPC_WEAK_FUNC(sub_822540CC);
PPC_FUNC_IMPL(__imp__sub_822540CC) {
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
	// bl 0x8224dd90
	ctx.lr = 0x822540E0;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822540F0"))) PPC_WEAK_FUNC(sub_822540F0);
PPC_FUNC_IMPL(__imp__sub_822540F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r11,26848
	ctx.r29.s64 = ctx.r11.s64 + 26848;
	// b 0x82254138
	goto loc_82254138;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82254138:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822508e8
	ctx.lr = 0x8225414C;
	sub_822508E8(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,26848
	ctx.r29.s64 = ctx.r10.s64 + 26848;
	// addi r10,r11,26852
	ctx.r10.s64 = ctx.r11.s64 + 26852;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225411C"))) PPC_WEAK_FUNC(sub_8225411C);
PPC_FUNC_IMPL(__imp__sub_8225411C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822508e8
	ctx.lr = 0x8225414C;
	sub_822508E8(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,26848
	ctx.r29.s64 = ctx.r10.s64 + 26848;
	// addi r10,r11,26852
	ctx.r10.s64 = ctx.r11.s64 + 26852;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254180"))) PPC_WEAK_FUNC(sub_82254180);
PPC_FUNC_IMPL(__imp__sub_82254180) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82253fa8
	sub_82253FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82254188"))) PPC_WEAK_FUNC(sub_82254188);
PPC_FUNC_IMPL(__imp__sub_82254188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82254190;
	sub_82248750(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r3.u64);
	// li r11,204
	ctx.r11.s64 = 204;
	// lhz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 336);
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// rlwinm. r10,r9,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,63
	ctx.r7.s64 = 63;
	// stb r11,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// li r5,251
	ctx.r5.s64 = 251;
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r11,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r11.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r11,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r11.u8);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// li r11,45
	ctx.r11.s64 = 45;
	// std r4,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r4.u64);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stb r5,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne 0x8225420c
	if (!ctx.cr0.eq) goto loc_8225420C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8225420C:
	// stb r11,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,342(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 342);
	// lwz r10,338(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 338);
	// bne 0x82254264
	if (!ctx.cr0.eq) goto loc_82254264;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82254264
	if (!ctx.cr6.eq) goto loc_82254264;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82254264
	if (!ctx.cr6.eq) goto loc_82254264;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// sth r22,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x82254248
	if (ctx.cr6.eq) goto loc_82254248;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82254248:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r6,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r6.u8);
	// stb r22,5(r14)
	PPC_STORE_U8(ctx.r14.u32 + 5, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// stb r10,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
	// b 0x82254d44
	goto loc_82254D44;
loc_82254264:
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bne cr6,0x822543a4
	if (!ctx.cr6.eq) goto loc_822543A4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// sth r6,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r6.u16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82254284
	if (!ctx.cr6.eq) goto loc_82254284;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822542c0
	if (ctx.cr6.eq) goto loc_822542C0;
loc_82254284:
	// rlwinm. r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822542c0
	if (!ctx.cr0.eq) goto loc_822542C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10248
	ctx.r5.s64 = ctx.r11.s64 + 10248;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x8224bb38
	ctx.lr = 0x822542A0;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82254378
	if (ctx.cr0.eq) goto loc_82254378;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x822542C0;
	sub_8224D9F8(ctx, base);
loc_822542C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82254310
	if (ctx.cr6.eq) goto loc_82254310;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82254310
	if (!ctx.cr6.eq) goto loc_82254310;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8225435c
	if (!ctx.cr6.eq) goto loc_8225435C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10240
	ctx.r5.s64 = ctx.r11.s64 + 10240;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x8224bb38
	ctx.lr = 0x822542F0;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225433c
	if (ctx.cr0.eq) goto loc_8225433C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x82254310;
	sub_8224D9F8(ctx, base);
loc_82254310:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225435c
	if (!ctx.cr6.eq) goto loc_8225435C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8225435c
	if (!ctx.cr6.eq) goto loc_8225435C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10232
	ctx.r5.s64 = ctx.r11.s64 + 10232;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x8224bb38
	ctx.lr = 0x82254334;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82254344
	if (!ctx.cr0.eq) goto loc_82254344;
loc_8225433C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8225437c
	goto loc_8225437C;
loc_82254344:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8225435C;
	sub_8224D9F8(ctx, base);
loc_8225435C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r5,r11,10224
	ctx.r5.s64 = ctx.r11.s64 + 10224;
	// addi r3,r14,4
	ctx.r3.s64 = ctx.r14.s64 + 4;
	// bl 0x8224bb38
	ctx.lr = 0x82254370;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225438c
	if (!ctx.cr0.eq) goto loc_8225438C;
loc_82254378:
	// li r11,6
	ctx.r11.s64 = 6;
loc_8225437C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r11.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82254d40
	goto loc_82254D40;
loc_8225438C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x822543A4;
	sub_8224D9F8(ctx, base);
loc_822543A4:
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// stw r10,90(r1)
	PPC_STORE_U32(ctx.r1.u32 + 90, ctx.r10.u32);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r7,94(r1)
	PPC_STORE_U32(ctx.r1.u32 + 94, ctx.r7.u32);
	// mulli r11,r11,19728
	ctx.r11.s64 = ctx.r11.s64 * 19728;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// mulli r10,r10,77
	ctx.r10.s64 = ctx.r10.s64 * 77;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addis r11,r11,-4931
	ctx.r11.s64 = ctx.r11.s64 + -323158016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// sth r22,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r22.u16);
	// addi r11,r11,-4852
	ctx.r11.s64 = ctx.r11.s64 + -4852;
	// lis r7,0
	ctx.r7.s64 = 0;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// extsh r19,r11
	ctx.r19.s64 = ctx.r11.s16;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r11,r9,16920
	ctx.r11.s64 = ctx.r9.s64 + 16920;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// neg. r25,r19
	ctx.r25.s64 = -ctx.r19.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ori r20,r10,49154
	ctx.r20.u64 = ctx.r10.u64 | 49154;
	// ori r21,r7,65535
	ctx.r21.u64 = ctx.r7.u64 | 65535;
	// ori r17,r6,32768
	ctx.r17.u64 = ctx.r6.u64 | 32768;
	// ori r18,r5,32768
	ctx.r18.u64 = ctx.r5.u64 | 32768;
	// li r15,-32768
	ctx.r15.s64 = -32768;
	// ori r16,r4,32768
	ctx.r16.u64 = ctx.r4.u64 | 32768;
	// addi r23,r11,-96
	ctx.r23.s64 = ctx.r11.s64 + -96;
	// beq 0x822547b0
	if (ctx.cr0.eq) goto loc_822547B0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82254444
	if (!ctx.cr6.lt) goto loc_82254444;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// neg r25,r25
	ctx.r25.s64 = -ctx.r25.s64;
	// addi r11,r11,17272
	ctx.r11.s64 = ctx.r11.s64 + 17272;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r23,r11,-96
	ctx.r23.s64 = ctx.r11.s64 + -96;
loc_82254444:
	// beq cr6,0x822547b0
	if (ctx.cr6.eq) goto loc_822547B0;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82254450:
	// clrlwi. r11,r25,29
	ctx.r11.u64 = ctx.r25.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r23,r23,84
	ctx.r23.s64 = ctx.r23.s64 + 84;
	// srawi r25,r25,3
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 3;
	// beq 0x822547a0
	if (ctx.cr0.eq) goto loc_822547A0;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lhz r11,10(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82254490
	if (ctx.cr6.lt) goto loc_82254490;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82248a40
	ctx.lr = 0x82254480;
	sub_82248A40(ctx, base);
	// lwz r11,158(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 158);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,158(r1)
	PPC_STORE_U32(ctx.r1.u32 + 158, ctx.r11.u32);
loc_82254490:
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// clrlwi r11,r31,17
	ctx.r11.u64 = ctx.r31.u32 & 0x7FFF;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// xor r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r26,r8,0,16,16
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bge cr6,0x82254780
	if (!ctx.cr6.lt) goto loc_82254780;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x82254780
	if (!ctx.cr6.lt) goto loc_82254780;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,49149
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49149, ctx.xer);
	// bgt cr6,0x82254780
	if (ctx.cr6.gt) goto loc_82254780;
	// cmplwi cr6,r11,16319
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16319, ctx.xer);
	// bgt cr6,0x822544f0
	if (ctx.cr6.gt) goto loc_822544F0;
loc_822544E8:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x82254790
	goto loc_82254790;
loc_822544F0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82254524
	if (!ctx.cr6.eq) goto loc_82254524;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82254524
	if (!ctx.cr0.eq) goto loc_82254524;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82254524
	if (!ctx.cr6.eq) goto loc_82254524;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82254524
	if (!ctx.cr6.eq) goto loc_82254524;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// b 0x822547a0
	goto loc_822547A0;
loc_82254524:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225455c
	if (!ctx.cr6.eq) goto loc_8225455C;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x8225455c
	if (!ctx.cr0.eq) goto loc_8225455C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225455c
	if (!ctx.cr6.eq) goto loc_8225455C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822544e8
	if (ctx.cr6.eq) goto loc_822544E8;
loc_8225455C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// addi r8,r1,110
	ctx.r8.s64 = ctx.r1.s64 + 110;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82254568:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822545d4
	if (!ctx.cr6.gt) goto loc_822545D4;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82254584:
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822545ac
	if (ctx.cr6.lt) goto loc_822545AC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822545b0
	if (!ctx.cr6.lt) goto loc_822545B0;
loc_822545AC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_822545B0:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822545c8
	if (ctx.cr6.eq) goto loc_822545C8;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_822545C8:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x82254584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82254584;
loc_822545D4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bgt 0x82254568
	if (ctx.cr0.gt) goto loc_82254568;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_822545F0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82254640
	if (!ctx.cr0.gt) goto loc_82254640;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82254640
	if (!ctx.cr0.eq) goto loc_82254640;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// b 0x822545f0
	goto loc_822545F0;
loc_82254640:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822546c8
	if (ctx.cr6.gt) goto loc_822546C8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x822546c8
	if (!ctx.cr0.lt) goto loc_822546C8;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82254664:
	// lhz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82254674
	if (ctx.cr0.eq) goto loc_82254674;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82254674:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x82254664
	if (ctx.cr0.lt) goto loc_82254664;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x822546c8
	if (ctx.cr6.eq) goto loc_822546C8;
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_822546C8:
	// lhz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x822546e0
	if (ctx.cr6.gt) goto loc_822546E0;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82254740
	if (!ctx.cr6.eq) goto loc_82254740;
loc_822546E0:
	// lwz r10,110(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 110);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82254738
	if (!ctx.cr6.eq) goto loc_82254738;
	// lwz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 106);
	// stw r22,110(r1)
	PPC_STORE_U32(ctx.r1.u32 + 110, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8225472c
	if (!ctx.cr6.eq) goto loc_8225472C;
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// stw r22,106(r1)
	PPC_STORE_U32(ctx.r1.u32 + 106, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82254720
	if (!ctx.cr6.eq) goto loc_82254720;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82254740
	goto loc_82254740;
loc_82254720:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// b 0x82254740
	goto loc_82254740;
loc_8225472C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,106(r1)
	PPC_STORE_U32(ctx.r1.u32 + 106, ctx.r10.u32);
	// b 0x82254740
	goto loc_82254740;
loc_82254738:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,110(r1)
	PPC_STORE_U32(ctx.r1.u32 + 110, ctx.r10.u32);
loc_82254740:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x82254780
	if (!ctx.cr6.lt) goto loc_82254780;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// lhz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// stw r8,94(r1)
	PPC_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	PPC_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x822547a0
	goto loc_822547A0;
loc_82254780:
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82254790
	if (!ctx.cr0.eq) goto loc_82254790;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
loc_82254790:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_822547A0:
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82254450
	if (!ctx.cr6.eq) goto loc_82254450;
	// b 0x822547b8
	goto loc_822547B8;
loc_822547B0:
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_822547B8:
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,16383
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16383, ctx.xer);
	// blt cr6,0x82254ac8
	if (ctx.cr6.lt) goto loc_82254AC8;
	// lhz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// addi r7,r24,1
	ctx.r7.s64 = ctx.r24.s64 + 1;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r19,r7
	ctx.r19.s64 = ctx.r7.s16;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// rlwinm r29,r9,0,16,16
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	// clrlwi r31,r6,16
	ctx.r31.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x82254ab0
	if (!ctx.cr6.lt) goto loc_82254AB0;
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// bge cr6,0x82254ab0
	if (!ctx.cr6.lt) goto loc_82254AB0;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49149, ctx.xer);
	// bgt cr6,0x82254ab0
	if (ctx.cr6.gt) goto loc_82254AB0;
	// cmplwi cr6,r9,16319
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16319, ctx.xer);
	// bgt cr6,0x82254824
	if (ctx.cr6.gt) goto loc_82254824;
loc_8225481C:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// b 0x82254ac0
	goto loc_82254AC0;
loc_82254824:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82254858
	if (!ctx.cr6.eq) goto loc_82254858;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// bne 0x82254858
	if (!ctx.cr0.eq) goto loc_82254858;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82254858
	if (!ctx.cr6.eq) goto loc_82254858;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82254858
	if (!ctx.cr6.eq) goto loc_82254858;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// b 0x82254ac8
	goto loc_82254AC8;
loc_82254858:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82254890
	if (!ctx.cr6.eq) goto loc_82254890;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82254890
	if (!ctx.cr0.eq) goto loc_82254890;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82254890
	if (!ctx.cr6.eq) goto loc_82254890;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225481c
	if (ctx.cr6.eq) goto loc_8225481C;
loc_82254890:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r8,r1,126
	ctx.r8.s64 = ctx.r1.s64 + 126;
	// li r4,5
	ctx.r4.s64 = 5;
loc_8225489C:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82254908
	if (!ctx.cr6.gt) goto loc_82254908;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r5,r1,138
	ctx.r5.s64 = ctx.r1.s64 + 138;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_822548B8:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822548e0
	if (ctx.cr6.lt) goto loc_822548E0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822548e4
	if (!ctx.cr6.lt) goto loc_822548E4;
loc_822548E0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_822548E4:
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822548fc
	if (ctx.cr6.eq) goto loc_822548FC;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
loc_822548FC:
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bdnz 0x822548b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822548B8;
loc_82254908:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bgt 0x8225489c
	if (ctx.cr0.gt) goto loc_8225489C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_82254924:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82254974
	if (!ctx.cr0.gt) goto loc_82254974;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82254974
	if (!ctx.cr0.eq) goto loc_82254974;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x82254924
	goto loc_82254924;
loc_82254974:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x822549fc
	if (ctx.cr6.gt) goto loc_822549FC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x822549fc
	if (!ctx.cr0.lt) goto loc_822549FC;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82254998:
	// lhz r7,130(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822549a8
	if (ctx.cr0.eq) goto loc_822549A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822549A8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r7,r9,31,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r8,31,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsh. r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// blt 0x82254998
	if (ctx.cr0.lt) goto loc_82254998;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// beq cr6,0x822549fc
	if (ctx.cr6.eq) goto loc_822549FC;
	// lhz r10,130(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r10.u16);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_822549FC:
	// lhz r9,130(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// cmplwi cr6,r9,32768
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32768, ctx.xer);
	// bgt cr6,0x82254a14
	if (ctx.cr6.gt) goto loc_82254A14;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82254a74
	if (!ctx.cr6.eq) goto loc_82254A74;
loc_82254A14:
	// lwz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 126);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82254a6c
	if (!ctx.cr6.eq) goto loc_82254A6C;
	// lwz r10,122(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 122);
	// stw r22,126(r1)
	PPC_STORE_U32(ctx.r1.u32 + 126, ctx.r22.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82254a60
	if (!ctx.cr6.eq) goto loc_82254A60;
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// stw r22,122(r1)
	PPC_STORE_U32(ctx.r1.u32 + 122, ctx.r22.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82254a54
	if (!ctx.cr6.eq) goto loc_82254A54;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r18,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r18.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82254a74
	goto loc_82254A74;
loc_82254A54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// b 0x82254a74
	goto loc_82254A74;
loc_82254A60:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,122(r1)
	PPC_STORE_U32(ctx.r1.u32 + 122, ctx.r10.u32);
	// b 0x82254a74
	goto loc_82254A74;
loc_82254A6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,126(r1)
	PPC_STORE_U32(ctx.r1.u32 + 126, ctx.r10.u32);
loc_82254A74:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// bge cr6,0x82254ab0
	if (!ctx.cr6.lt) goto loc_82254AB0;
	// lhz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// stw r8,94(r1)
	PPC_STORE_U32(ctx.r1.u32 + 94, ctx.r8.u32);
	// stw r7,90(r1)
	PPC_STORE_U32(ctx.r1.u32 + 90, ctx.r7.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82254ac8
	goto loc_82254AC8;
loc_82254AB0:
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// clrlwi. r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82254ac0
	if (!ctx.cr0.eq) goto loc_82254AC0;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
loc_82254AC0:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82254AC8:
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// sth r19,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r19.u16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82254b20
	if (ctx.cr0.eq) goto loc_82254B20;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// extsh r11,r19
	ctx.r11.s64 = ctx.r19.s16;
	// add. r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82254b24
	if (ctx.cr0.gt) goto loc_82254B24;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x82254b00
	if (ctx.cr6.eq) goto loc_82254B00;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82254B00:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
loc_82254B08:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,2(r14)
	PPC_STORE_U8(ctx.r14.u32 + 2, ctx.r11.u8);
	// stb r22,5(r14)
	PPC_STORE_U8(ctx.r14.u32 + 5, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r9.u8);
	// b 0x82254d44
	goto loc_82254D44;
loc_82254B20:
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_82254B24:
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// ble cr6,0x82254b30
	if (!ctx.cr6.gt) goto loc_82254B30;
	// li r9,21
	ctx.r9.s64 = 21;
loc_82254B30:
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r22,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r22.u16);
	// addi r10,r10,-16382
	ctx.r10.s64 = ctx.r10.s64 + -16382;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82254B48:
	// rlwinm r11,r27,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r8,r28,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r7,r11
	ctx.r28.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r30,r6,r8
	ctx.r30.u64 = ctx.r6.u64 | ctx.r8.u64;
	// bdnz 0x82254b48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82254B48;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bge cr6,0x82254bb8
	if (!ctx.cr6.lt) goto loc_82254BB8;
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82254bb8
	if (!ctx.cr0.gt) goto loc_82254BB8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82254B8C:
	// rlwinm r11,r30,31,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x80000000;
	// rlwinm r10,r28,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x80000000;
	// rlwinm r8,r28,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r27,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// or r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r27,r7,r10
	ctx.r27.u64 = ctx.r7.u64 | ctx.r10.u64;
	// bdnz 0x82254b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82254B8C;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82254BB8:
	// addi r26,r14,4
	ctx.r26.s64 = ctx.r14.s64 + 4;
	// addic. r11,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r11.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// ble 0x82254ccc
	if (!ctx.cr0.gt) goto loc_82254CCC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82254bd4
	goto loc_82254BD4;
loc_82254BD0:
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82254BD4:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82248a40
	ctx.lr = 0x82254BE4;
	sub_82248A40(ctx, base);
	// rlwinm r5,r27,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r7,r28,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 | ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82254c34
	if (ctx.cr6.lt) goto loc_82254C34;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82254c60
	if (!ctx.cr6.lt) goto loc_82254C60;
loc_82254C34:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82254c4c
	if (ctx.cr6.lt) goto loc_82254C4C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82254c50
	if (!ctx.cr6.lt) goto loc_82254C50;
loc_82254C4C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82254C50:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82254c60
	if (ctx.cr6.eq) goto loc_82254C60;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82254C60:
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82254c78
	if (ctx.cr6.lt) goto loc_82254C78;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82254c7c
	if (!ctx.cr6.lt) goto loc_82254C7C;
loc_82254C78:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82254C7C:
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r22,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r22.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82254bd0
	if (!ctx.cr0.eq) goto loc_82254BD0;
loc_82254CCC:
	// lbzu r10,-1(r31)
	ea = -1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x82254d5c
	if (ctx.cr6.lt) goto loc_82254D5C;
	// b 0x82254cfc
	goto loc_82254CFC;
loc_82254CE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// bne cr6,0x82254d04
	if (!ctx.cr6.eq) goto loc_82254D04;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82254CFC:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82254ce4
	if (!ctx.cr6.lt) goto loc_82254CE4;
loc_82254D04:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82254d1c
	if (!ctx.cr6.lt) goto loc_82254D1C;
	// lhz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r10.u16);
loc_82254D1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82254D28:
	// subf r11,r14,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r14.s64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + ctx.r14.u64;
	// stb r10,3(r14)
	PPC_STORE_U8(ctx.r14.u32 + 3, ctx.r10.u8);
	// stb r22,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r22.u8);
loc_82254D40:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82254D44:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_82254D4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82254d64
	if (!ctx.cr6.eq) goto loc_82254D64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82254D5C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82254d4c
	if (!ctx.cr6.lt) goto loc_82254D4C;
loc_82254D64:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82254d28
	if (!ctx.cr6.lt) goto loc_82254D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r22,0(r14)
	PPC_STORE_U16(ctx.r14.u32 + 0, ctx.r22.u16);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// li r11,45
	ctx.r11.s64 = 45;
	// beq cr6,0x82254d84
	if (ctx.cr6.eq) goto loc_82254D84;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82254D84:
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// b 0x82254b08
	goto loc_82254B08;
}

__attribute__((alias("__imp__sub_82254D90"))) PPC_WEAK_FUNC(sub_82254D90);
PPC_FUNC_IMPL(__imp__sub_82254D90) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82254de8
	if (ctx.cr6.lt) goto loc_82254DE8;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82254de8
	if (!ctx.cr6.lt) goto loc_82254DE8;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82254de8
	if (!ctx.cr6.eq) goto loc_82254DE8;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82254e08
	goto loc_82254E08;
loc_82254DE8:
	// bl 0x8224da90
	ctx.lr = 0x82254DEC;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82254DF8;
	sub_8224DAC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82254E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254E18"))) PPC_WEAK_FUNC(sub_82254E18);
PPC_FUNC_IMPL(__imp__sub_82254E18) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82254e80
	if (ctx.cr6.lt) goto loc_82254E80;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82254e80
	if (!ctx.cr6.lt) goto loc_82254E80;
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82254e80
	if (ctx.cr0.eq) goto loc_82254E80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82254e80
	if (ctx.cr6.eq) goto loc_82254E80;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82254e9c
	goto loc_82254E9C;
loc_82254E80:
	// bl 0x8224da90
	ctx.lr = 0x82254E84;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82254E90;
	sub_8224DAC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82254E9C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254EB0"))) PPC_WEAK_FUNC(sub_82254EB0);
PPC_FUNC_IMPL(__imp__sub_82254EB0) {
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
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82254ee8
	if (!ctx.cr6.eq) goto loc_82254EE8;
	// bl 0x8224dac8
	ctx.lr = 0x82254EC8;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82254ED4;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82254f54
	goto loc_82254F54;
loc_82254EE8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82254f00
	if (ctx.cr6.lt) goto loc_82254F00;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82254f24
	if (ctx.cr6.lt) goto loc_82254F24;
loc_82254F00:
	// bl 0x8224dac8
	ctx.lr = 0x82254F04;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82254F10;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82254F1C;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82254f54
	goto loc_82254F54;
loc_82254F24:
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82254f00
	if (ctx.cr0.eq) goto loc_82254F00;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82254F54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82254F64"))) PPC_WEAK_FUNC(sub_82254F64);
PPC_FUNC_IMPL(__imp__sub_82254F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82254F68"))) PPC_WEAK_FUNC(sub_82254F68);
PPC_FUNC_IMPL(__imp__sub_82254F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2872(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2872);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82254F78;
	sub_8224878C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	ctx.r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 * 72;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82255004
	if (!ctx.cr6.eq) goto loc_82255004;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8224e010
	ctx.lr = 0x82254FC0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82254ff8
	if (!ctx.cr6.eq) goto loc_82254FF8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8224ddb0
	ctx.lr = 0x82254FDC;
	sub_8224DDB0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82254FF8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82255038
	ctx.lr = 0x82255004;
	sub_82255038(ctx, base);
loc_82255004:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225502c
	if (ctx.cr6.eq) goto loc_8225502C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8241dd2c
	ctx.lr = 0x8225502C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8225502C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82254F70"))) PPC_WEAK_FUNC(sub_82254F70);
PPC_FUNC_IMPL(__imp__sub_82254F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82254F78;
	sub_8224878C(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	ctx.r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 * 72;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82255004
	if (!ctx.cr6.eq) goto loc_82255004;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8224e010
	ctx.lr = 0x82254FC0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82254ff8
	if (!ctx.cr6.eq) goto loc_82254FF8;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8224ddb0
	ctx.lr = 0x82254FDC;
	sub_8224DDB0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82254FF8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82255038
	ctx.lr = 0x82255004;
	sub_82255038(ctx, base);
loc_82255004:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225502c
	if (ctx.cr6.eq) goto loc_8225502C;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8241dd2c
	ctx.lr = 0x8225502C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8225502C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82255038"))) PPC_WEAK_FUNC(sub_82255038);
PPC_FUNC_IMPL(__imp__sub_82255038) {
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
	// bl 0x8224dd90
	ctx.lr = 0x8225504C;
	sub_8224DD90(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225506C"))) PPC_WEAK_FUNC(sub_8225506C);
PPC_FUNC_IMPL(__imp__sub_8225506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255070"))) PPC_WEAK_FUNC(sub_82255070);
PPC_FUNC_IMPL(__imp__sub_82255070) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x8241dd3c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82255098"))) PPC_WEAK_FUNC(sub_82255098);
PPC_FUNC_IMPL(__imp__sub_82255098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2848(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2848);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822550A8;
	sub_82248778(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x8224ded0
	ctx.lr = 0x822550C8;
	sub_8224DED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822550d8
	if (!ctx.cr0.eq) goto loc_822550D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822552b0
	goto loc_822552B0;
loc_822550D8:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8224e010
	ctx.lr = 0x822550E0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,26592
	ctx.r29.s64 = ctx.r11.s64 + 26592;
loc_822550F4:
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// bge cr6,0x822552a0
	if (!ctx.cr6.lt) goto loc_822552A0;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r27,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82255210
	if (ctx.cr6.eq) goto loc_82255210;
loc_82255110:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822551f8
	if (!ctx.cr6.lt) goto loc_822551F8;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822551c4
	if (!ctx.cr0.eq) goto loc_822551C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225518c
	if (!ctx.cr6.eq) goto loc_8225518C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8224e010
	ctx.lr = 0x82255148;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82255180
	if (!ctx.cr6.eq) goto loc_82255180;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8224ddb0
	ctx.lr = 0x82255164;
	sub_8224DDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255174
	if (!ctx.cr0.eq) goto loc_82255174;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// b 0x82255180
	goto loc_82255180;
loc_82255174:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82255180:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x822552dc
	ctx.lr = 0x8225518C;
	sub_822552DC(ctx, base);
loc_8225518C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822551c4
	if (!ctx.cr6.eq) goto loc_822551C4;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822551A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822551bc
	if (ctx.cr0.eq) goto loc_822551BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822551B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822551c8
	goto loc_822551C8;
loc_822551BC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822551d0
	if (ctx.cr6.eq) goto loc_822551D0;
loc_822551C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_822551C8:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// b 0x82255110
	goto loc_82255110;
loc_822551D0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_822551F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822552a0
	if (!ctx.cr6.eq) goto loc_822552A0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x822550f4
	goto loc_822550F4;
loc_82255210:
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8224dcb8
	ctx.lr = 0x8225521C;
	sub_8224DCB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822552a0
	if (ctx.cr0.eq) goto loc_822552A0;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stwx r3,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,26568(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26568);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,26568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26568, ctx.r11.u32);
loc_8225523C:
	// lwzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225526c
	if (!ctx.cr6.lt) goto loc_8225526C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x8225523c
	goto loc_8225523C;
loc_8225526C:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mulli r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 * 72;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
	// bl 0x82254f70
	ctx.lr = 0x82255294;
	sub_82254F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822552a0
	if (!ctx.cr0.eq) goto loc_822552A0;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_822552A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x822552b8
	ctx.lr = 0x822552AC;
	sub_822552B8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_822552B0:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822550A0"))) PPC_WEAK_FUNC(sub_822550A0);
PPC_FUNC_IMPL(__imp__sub_822550A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822550A8;
	sub_82248778(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// bl 0x8224ded0
	ctx.lr = 0x822550C8;
	sub_8224DED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822550d8
	if (!ctx.cr0.eq) goto loc_822550D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822552b0
	goto loc_822552B0;
loc_822550D8:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8224e010
	ctx.lr = 0x822550E0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,26592
	ctx.r29.s64 = ctx.r11.s64 + 26592;
loc_822550F4:
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// bge cr6,0x822552a0
	if (!ctx.cr6.lt) goto loc_822552A0;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r27,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82255210
	if (ctx.cr6.eq) goto loc_82255210;
loc_82255110:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822551f8
	if (!ctx.cr6.lt) goto loc_822551F8;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822551c4
	if (!ctx.cr0.eq) goto loc_822551C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225518c
	if (!ctx.cr6.eq) goto loc_8225518C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8224e010
	ctx.lr = 0x82255148;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82255180
	if (!ctx.cr6.eq) goto loc_82255180;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8224ddb0
	ctx.lr = 0x82255164;
	sub_8224DDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255174
	if (!ctx.cr0.eq) goto loc_82255174;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// b 0x82255180
	goto loc_82255180;
loc_82255174:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82255180:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x822552dc
	ctx.lr = 0x8225518C;
	sub_822552DC(ctx, base);
loc_8225518C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822551c4
	if (!ctx.cr6.eq) goto loc_822551C4;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822551A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822551bc
	if (ctx.cr0.eq) goto loc_822551BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822551B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822551c8
	goto loc_822551C8;
loc_822551BC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822551d0
	if (ctx.cr6.eq) goto loc_822551D0;
loc_822551C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_822551C8:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// b 0x82255110
	goto loc_82255110;
loc_822551D0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_822551F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822552a0
	if (!ctx.cr6.eq) goto loc_822552A0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x822550f4
	goto loc_822550F4;
loc_82255210:
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8224dcb8
	ctx.lr = 0x8225521C;
	sub_8224DCB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822552a0
	if (ctx.cr0.eq) goto loc_822552A0;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stwx r3,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,26568(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26568);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,26568(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26568, ctx.r11.u32);
loc_8225523C:
	// lwzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225526c
	if (!ctx.cr6.lt) goto loc_8225526C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x8225523c
	goto loc_8225523C;
loc_8225526C:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mulli r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 * 72;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r26.u8);
	// bl 0x82254f70
	ctx.lr = 0x82255294;
	sub_82254F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822552a0
	if (!ctx.cr0.eq) goto loc_822552A0;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_822552A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x822552b8
	ctx.lr = 0x822552AC;
	sub_822552B8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_822552B0:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822552B8"))) PPC_WEAK_FUNC(sub_822552B8);
PPC_FUNC_IMPL(__imp__sub_822552B8) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8224dd90
	ctx.lr = 0x822552CC;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822552DC"))) PPC_WEAK_FUNC(sub_822552DC);
PPC_FUNC_IMPL(__imp__sub_822552DC) {
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
	// bl 0x8224dd90
	ctx.lr = 0x822552F0;
	sub_8224DD90(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r28,92(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r11,26592
	ctx.r29.s64 = ctx.r11.s64 + 26592;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225531C"))) PPC_WEAK_FUNC(sub_8225531C);
PPC_FUNC_IMPL(__imp__sub_8225531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255320"))) PPC_WEAK_FUNC(sub_82255320);
PPC_FUNC_IMPL(__imp__sub_82255320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82255328;
	sub_82248760(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r18,-2
	ctx.r18.s64 = -2;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8225536c
	if (!ctx.cr6.eq) goto loc_8225536C;
	// bl 0x8224dac8
	ctx.lr = 0x8225534C;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255358;
	sub_8224DA90(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_8225535C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82255930
	goto loc_82255930;
loc_8225536C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x82255384
	if (ctx.cr6.lt) goto loc_82255384;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822553a8
	if (ctx.cr6.lt) goto loc_822553A8;
loc_82255384:
	// bl 0x8224dac8
	ctx.lr = 0x82255388;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255394;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_82255398:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x822553A0;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255930
	goto loc_82255930;
loc_822553A8:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r21,27
	ctx.r11.u64 = ctx.r21.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82255384
	if (ctx.cr0.eq) goto loc_82255384;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82255400
	if (!ctx.cr6.gt) goto loc_82255400;
	// bl 0x8224dac8
	ctx.lr = 0x822553EC;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822553F4:
	// bl 0x8224da90
	ctx.lr = 0x822553F8;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82255398
	goto loc_82255398;
loc_82255400:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// beq cr6,0x8225592c
	if (ctx.cr6.eq) goto loc_8225592C;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225592c
	if (!ctx.cr0.eq) goto loc_8225592C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x8225542c
	if (!ctx.cr6.eq) goto loc_8225542C;
loc_82255420:
	// bl 0x8224dac8
	ctx.lr = 0x82255424;
	sub_8224DAC8(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x822553f4
	goto loc_822553F4;
loc_8225542C:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// srawi r11,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 25;
	// extsb r22,r11
	ctx.r22.s64 = ctx.r11.s8;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x82255464
	if (ctx.cr6.eq) goto loc_82255464;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x8225545c
	if (!ctx.cr6.eq) goto loc_8225545C;
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255420
	if (ctx.cr0.eq) goto loc_82255420;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_8225545C:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// b 0x822554c4
	goto loc_822554C4;
loc_82255464:
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255420
	if (ctx.cr0.eq) goto loc_82255420;
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x82255480
	if (!ctx.cr6.lt) goto loc_82255480;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82255480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822516c8
	ctx.lr = 0x82255488;
	sub_822516C8(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x822554a8
	if (!ctx.cr0.eq) goto loc_822554A8;
	// bl 0x8224da90
	ctx.lr = 0x82255494;
	sub_8224DA90(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x822554A0;
	sub_8224DAC8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8225535c
	goto loc_8225535C;
loc_822554A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82250d90
	ctx.lr = 0x822554B8;
	sub_82250D90(ctx, base);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// std r3,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
loc_822554C4:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r24,10
	ctx.r24.s64 = 10;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82255594
	if (ctx.cr0.eq) goto loc_82255594;
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r4,r23,1
	ctx.r4.s64 = ctx.r23.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r24,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,41(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stb r24,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x82255594
	if (!ctx.cr6.eq) goto loc_82255594;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,42(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82255594
	if (ctx.cr6.eq) goto loc_82255594;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// stb r24,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r24.u8);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82255594:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8225fe50
	ctx.lr = 0x822555AC;
	sub_8225FE50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822558f8
	if (ctx.cr0.eq) goto loc_822558F8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822558f8
	if (ctx.cr6.lt) goto loc_822558F8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x822558f8
	if (ctx.cr6.gt) goto loc_822558F8;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822558b4
	if (ctx.cr0.eq) goto loc_822558B4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82255600
	if (ctx.cr6.eq) goto loc_82255600;
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82255600
	if (!ctx.cr6.eq) goto loc_82255600;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x8225560c
	goto loc_8225560C;
loc_82255600:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_8225560C:
	// add r25,r23,r30
	ctx.r25.u64 = ctx.r23.u64 + ctx.r30.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82255774
	if (!ctx.cr6.lt) goto loc_82255774;
	// li r26,13
	ctx.r26.s64 = 13;
loc_82255628:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x82255748
	if (ctx.cr6.eq) goto loc_82255748;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8225564c
	if (ctx.cr6.eq) goto loc_8225564C;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82255738
	goto loc_82255738;
loc_8225564C:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82255680
	if (!ctx.cr6.lt) goto loc_82255680;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82255674
	if (!ctx.cr6.eq) goto loc_82255674;
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x82255738
	goto loc_82255738;
loc_82255674:
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82255738
	goto loc_82255738;
loc_82255680:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8225fe50
	ctx.lr = 0x822556A0;
	sub_8225FE50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822556b4
	if (!ctx.cr0.eq) goto loc_822556B4;
	// bl 0x8208db08
	ctx.lr = 0x822556AC;
	sub_8208DB08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82255734
	if (!ctx.cr0.eq) goto loc_82255734;
loc_822556B4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82255734
	if (ctx.cr6.eq) goto loc_82255734;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r11,r11,72
	ctx.r11.u64 = ctx.r11.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255704
	if (ctx.cr0.eq) goto loc_82255704;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x822556ec
	if (!ctx.cr6.eq) goto loc_822556EC;
loc_822556E4:
	// stb r24,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r24.u8);
	// b 0x82255738
	goto loc_82255738;
loc_822556EC:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// b 0x82255738
	goto loc_82255738;
loc_82255704:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82255718
	if (!ctx.cr6.eq) goto loc_82255718;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822556e4
	if (ctx.cr6.eq) goto loc_822556E4;
loc_82255718:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82250d90
	ctx.lr = 0x82255728;
	sub_82250D90(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8225573c
	if (ctx.cr6.eq) goto loc_8225573C;
loc_82255734:
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_82255738:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8225573C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82255628
	if (ctx.cr6.lt) goto loc_82255628;
	// b 0x82255774
	goto loc_82255774;
loc_82255748:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225576c
	if (!ctx.cr0.eq) goto loc_8225576C;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82255774
	goto loc_82255774;
loc_8225576C:
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82255774:
	// subf r30,r23,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r23.s64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x822558b4
	if (!ctx.cr6.eq) goto loc_822558B4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822558b4
	if (ctx.cr6.eq) goto loc_822558B4;
	// lbzu r7,-1(r31)
	ea = -1 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm. r11,r7,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bne 0x822557a0
	if (!ctx.cr0.eq) goto loc_822557A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8225587c
	goto loc_8225587C;
loc_822557A0:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17624
	ctx.r9.s64 = ctx.r11.s64 + 17624;
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// b 0x822557d4
	goto loc_822557D4;
loc_822557B4:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x822557dc
	if (ctx.cr6.gt) goto loc_822557DC;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x822557dc
	if (ctx.cr6.lt) goto loc_822557DC;
	// lbzu r7,-1(r31)
	ea = -1 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
loc_822557D4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822557b4
	if (ctx.cr0.eq) goto loc_822557B4;
loc_822557DC:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822557f4
	if (!ctx.cr0.eq) goto loc_822557F4;
	// bl 0x8224da90
	ctx.lr = 0x822557E8;
	sub_8224DA90(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
loc_822557EC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822558b0
	goto loc_822558B0;
loc_822557F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82255808
	if (!ctx.cr6.eq) goto loc_82255808;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// b 0x8225587c
	goto loc_8225587C;
loc_82255808:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// andi. r9,r9,72
	ctx.r9.u64 = ctx.r9.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82255868
	if (ctx.cr0.eq) goto loc_82255868;
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82255844
	if (ctx.cr6.lt) goto loc_82255844;
	// lwzx r9,r27,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stb r8,41(r9)
	PPC_STORE_U8(ctx.r9.u32 + 41, ctx.r8.u8);
loc_82255844:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82255860
	if (!ctx.cr6.eq) goto loc_82255860;
	// lwzx r9,r27,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stb r8,42(r9)
	PPC_STORE_U8(ctx.r9.u32 + 42, ctx.r8.u8);
loc_82255860:
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x8225587c
	goto loc_8225587C;
loc_82255868:
	// neg r11,r10
	ctx.r11.s64 = -ctx.r10.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82250d90
	ctx.lr = 0x8225587C;
	sub_82250D90(ctx, base);
loc_8225587C:
	// subf r31,r23,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r23.s64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r20,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x822558A0;
	sub_82256BE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822558d8
	if (!ctx.cr0.eq) goto loc_822558D8;
	// bl 0x8208db08
	ctx.lr = 0x822558AC;
	sub_8208DB08(ctx, base);
loc_822558AC:
	// bl 0x8224db00
	ctx.lr = 0x822558B0;
	sub_8224DB00(ctx, base);
loc_822558B0:
	// li r18,-1
	ctx.r18.s64 = -1;
loc_822558B4:
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x822558c4
	if (ctx.cr6.eq) goto loc_822558C4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8224a858
	ctx.lr = 0x822558C4;
	sub_8224A858(ctx, base);
loc_822558C4:
	// cmpwi cr6,r18,-2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -2, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82255930
	if (ctx.cr6.eq) goto loc_82255930;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// b 0x82255930
	goto loc_82255930;
loc_822558D8:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x822558b4
	goto loc_822558B4;
loc_822558F8:
	// bl 0x8208db08
	ctx.lr = 0x822558FC;
	sub_8208DB08(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x8225591c
	if (!ctx.cr6.eq) goto loc_8225591C;
	// bl 0x8224da90
	ctx.lr = 0x82255908;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82255914;
	sub_8224DAC8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822557ec
	goto loc_822557EC;
loc_8225591C:
	// cmplwi cr6,r3,109
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 109, ctx.xer);
	// bne cr6,0x822558ac
	if (!ctx.cr6.eq) goto loc_822558AC;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// b 0x822558b4
	goto loc_822558B4;
loc_8225592C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82255930:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_82255938"))) PPC_WEAK_FUNC(sub_82255938);
PPC_FUNC_IMPL(__imp__sub_82255938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2808(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2808);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82255948;
	sub_82248778(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8225598c
	if (!ctx.cr6.eq) goto loc_8225598C;
	// bl 0x8224dac8
	ctx.lr = 0x8225596C;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255978;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82255a88
	goto loc_82255A88;
loc_8225598C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822559a4
	if (ctx.cr6.lt) goto loc_822559A4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822559c8
	if (ctx.cr6.lt) goto loc_822559C8;
loc_822559A4:
	// bl 0x8224dac8
	ctx.lr = 0x822559A8;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x822559B4;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_822559B8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x822559C0;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255a88
	goto loc_82255A88;
loc_822559C8:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822559a4
	if (ctx.cr0.eq) goto loc_822559A4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfze. r11,r26
	// bne 0x82255a24
	if (!ctx.cr0.eq) goto loc_82255A24;
	// bl 0x8224dac8
	ctx.lr = 0x82255A10;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255A1C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x822559b8
	goto loc_822559B8;
loc_82255A24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82255A2C;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255a5c
	if (ctx.cr0.eq) goto loc_82255A5C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255320
	ctx.lr = 0x82255A54;
	sub_82255320(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82255a78
	goto loc_82255A78;
loc_82255A5C:
	// bl 0x8224da90
	ctx.lr = 0x82255A60;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82255A6C;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82255A78:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82255ab0
	ctx.lr = 0x82255A84;
	sub_82255AB0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82255A88:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82255940"))) PPC_WEAK_FUNC(sub_82255940);
PPC_FUNC_IMPL(__imp__sub_82255940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82255948;
	sub_82248778(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8225598c
	if (!ctx.cr6.eq) goto loc_8225598C;
	// bl 0x8224dac8
	ctx.lr = 0x8225596C;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255978;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82255a88
	goto loc_82255A88;
loc_8225598C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x822559a4
	if (ctx.cr6.lt) goto loc_822559A4;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822559c8
	if (ctx.cr6.lt) goto loc_822559C8;
loc_822559A4:
	// bl 0x8224dac8
	ctx.lr = 0x822559A8;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x822559B4;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_822559B8:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x822559C0;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255a88
	goto loc_82255A88;
loc_822559C8:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822559a4
	if (ctx.cr0.eq) goto loc_822559A4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r25,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r25.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// subfze. r11,r26
	// bne 0x82255a24
	if (!ctx.cr0.eq) goto loc_82255A24;
	// bl 0x8224dac8
	ctx.lr = 0x82255A10;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255A1C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x822559b8
	goto loc_822559B8;
loc_82255A24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82255A2C;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255a5c
	if (ctx.cr0.eq) goto loc_82255A5C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255320
	ctx.lr = 0x82255A54;
	sub_82255320(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82255a78
	goto loc_82255A78;
loc_82255A5C:
	// bl 0x8224da90
	ctx.lr = 0x82255A60;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x82255A6C;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82255A78:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82255ab0
	ctx.lr = 0x82255A84;
	sub_82255AB0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82255A88:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82255A90"))) PPC_WEAK_FUNC(sub_82255A90);
PPC_FUNC_IMPL(__imp__sub_82255A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x82255ac8
	goto loc_82255AC8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82255AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x82255AD0;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255AB0"))) PPC_WEAK_FUNC(sub_82255AB0);
PPC_FUNC_IMPL(__imp__sub_82255AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x82255AD0;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255AE8"))) PPC_WEAK_FUNC(sub_82255AE8);
PPC_FUNC_IMPL(__imp__sub_82255AE8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82255b20
	if (ctx.cr0.eq) goto loc_82255B20;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82255b04
	if (!ctx.cr6.eq) goto loc_82255B04;
	// li r11,768
	ctx.r11.s64 = 768;
	// b 0x82255b20
	goto loc_82255B20;
loc_82255B04:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82255b14
	if (!ctx.cr6.eq) goto loc_82255B14;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x82255b20
	goto loc_82255B20;
loc_82255B14:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82255b20
	if (!ctx.cr6.eq) goto loc_82255B20;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82255B20:
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82255b2c
	if (ctx.cr0.eq) goto loc_82255B2C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82255B2C:
	// rlwinm. r10,r3,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82255b38
	if (ctx.cr0.eq) goto loc_82255B38;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82255B38:
	// rlwinm. r10,r3,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82255b44
	if (ctx.cr0.eq) goto loc_82255B44;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82255B44:
	// rlwinm. r10,r3,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82255b50
	if (ctx.cr0.eq) goto loc_82255B50;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82255B50:
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82255b5c
	if (ctx.cr0.eq) goto loc_82255B5C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82255B5C:
	// oris r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 524288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255B64"))) PPC_WEAK_FUNC(sub_82255B64);
PPC_FUNC_IMPL(__imp__sub_82255B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255B68"))) PPC_WEAK_FUNC(sub_82255B68);
PPC_FUNC_IMPL(__imp__sub_82255B68) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x82252c00
	ctx.lr = 0x82255B84;
	sub_82252C00(ctx, base);
	// bl 0x82255ae8
	ctx.lr = 0x82255B88;
	sub_82255AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255B98"))) PPC_WEAK_FUNC(sub_82255B98);
PPC_FUNC_IMPL(__imp__sub_82255B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82255BA0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82255bcc
	if (!ctx.cr6.eq) goto loc_82255BCC;
	// bl 0x8224da90
	ctx.lr = 0x82255BB8;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82255BC4;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255c2c
	goto loc_82255C2C;
loc_82255BCC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255c24
	if (ctx.cr0.eq) goto loc_82255C24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82253e90
	ctx.lr = 0x82255BE8;
	sub_82253E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256100
	ctx.lr = 0x82255BF4;
	sub_82256100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251590
	ctx.lr = 0x82255BFC;
	sub_82251590(ctx, base);
	// bl 0x82255fa0
	ctx.lr = 0x82255C00;
	sub_82255FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82255c10
	if (!ctx.cr0.lt) goto loc_82255C10;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82255c24
	goto loc_82255C24;
loc_82255C10:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82255c24
	if (ctx.cr6.eq) goto loc_82255C24;
	// bl 0x8224a858
	ctx.lr = 0x82255C20;
	sub_8224A858(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82255C24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82255C2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82255C34"))) PPC_WEAK_FUNC(sub_82255C34);
PPC_FUNC_IMPL(__imp__sub_82255C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255C38"))) PPC_WEAK_FUNC(sub_82255C38);
PPC_FUNC_IMPL(__imp__sub_82255C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2784(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2784);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x82255c8c
	if (!ctx.cr0.eq) goto loc_82255C8C;
	// bl 0x8224da90
	ctx.lr = 0x82255C78;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82255C84;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255ca4
	goto loc_82255CA4;
loc_82255C8C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255cbc
	if (ctx.cr0.eq) goto loc_82255CBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82255CA0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82255CA4:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82255CBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x82255CC4;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255b98
	ctx.lr = 0x82255CD0;
	sub_82255B98(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82255d04
	ctx.lr = 0x82255CE0;
	sub_82255D04(ctx, base);
	// b 0x82255ca0
	goto loc_82255CA0;
}

__attribute__((alias("__imp__sub_82255C40"))) PPC_WEAK_FUNC(sub_82255C40);
PPC_FUNC_IMPL(__imp__sub_82255C40) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x82255c8c
	if (!ctx.cr0.eq) goto loc_82255C8C;
	// bl 0x8224da90
	ctx.lr = 0x82255C78;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82255C84;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255ca4
	goto loc_82255CA4;
loc_82255C8C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255cbc
	if (ctx.cr0.eq) goto loc_82255CBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82255CA0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82255CA4:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82255CBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822507e8
	ctx.lr = 0x82255CC4;
	sub_822507E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255b98
	ctx.lr = 0x82255CD0;
	sub_82255B98(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82255d04
	ctx.lr = 0x82255CE0;
	sub_82255D04(ctx, base);
	// b 0x82255ca0
	goto loc_82255CA0;
}

__attribute__((alias("__imp__sub_82255CE4"))) PPC_WEAK_FUNC(sub_82255CE4);
PPC_FUNC_IMPL(__imp__sub_82255CE4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82255d1c
	goto loc_82255D1C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82255D1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x82255D24;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255D04"))) PPC_WEAK_FUNC(sub_82255D04);
PPC_FUNC_IMPL(__imp__sub_82255D04) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822508a8
	ctx.lr = 0x82255D24;
	sub_822508A8(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255D3C"))) PPC_WEAK_FUNC(sub_82255D3C);
PPC_FUNC_IMPL(__imp__sub_82255D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255D40"))) PPC_WEAK_FUNC(sub_82255D40);
PPC_FUNC_IMPL(__imp__sub_82255D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2760(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2760);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82255D50;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82255d80
	if (!ctx.cr6.eq) goto loc_82255D80;
	// bl 0x8224da90
	ctx.lr = 0x82255D6C;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82255e58
	goto loc_82255E58;
loc_82255D80:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82255d98
	if (ctx.cr6.lt) goto loc_82255D98;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82255db0
	if (ctx.cr6.lt) goto loc_82255DB0;
loc_82255D98:
	// bl 0x8224da90
	ctx.lr = 0x82255D9C;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82255DA8;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255e58
	goto loc_82255E58;
loc_82255DB0:
	// srawi r11,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,26592
	ctx.r29.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// mulli r30,r11,72
	ctx.r30.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255d98
	if (ctx.cr0.eq) goto loc_82255D98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82254f70
	ctx.lr = 0x82255DE4;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255e34
	if (ctx.cr0.eq) goto loc_82255E34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82254eb0
	ctx.lr = 0x82255E04;
	sub_82254EB0(ctx, base);
	// bl 0x82260468
	ctx.lr = 0x82255E08;
	sub_82260468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255e1c
	if (!ctx.cr0.eq) goto loc_82255E1C;
	// bl 0x8208db08
	ctx.lr = 0x82255E14;
	sub_8208DB08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82255e20
	goto loc_82255E20;
loc_82255E1C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82255E20:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82255e48
	if (ctx.cr6.eq) goto loc_82255E48;
	// bl 0x8224dac8
	ctx.lr = 0x82255E30;
	sub_8224DAC8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82255E34:
	// bl 0x8224da90
	ctx.lr = 0x82255E38;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82255E48:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82255e80
	ctx.lr = 0x82255E54;
	sub_82255E80(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82255E58:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82255D48"))) PPC_WEAK_FUNC(sub_82255D48);
PPC_FUNC_IMPL(__imp__sub_82255D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82255D50;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82255d80
	if (!ctx.cr6.eq) goto loc_82255D80;
	// bl 0x8224da90
	ctx.lr = 0x82255D6C;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82255e58
	goto loc_82255E58;
loc_82255D80:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82255d98
	if (ctx.cr6.lt) goto loc_82255D98;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82255db0
	if (ctx.cr6.lt) goto loc_82255DB0;
loc_82255D98:
	// bl 0x8224da90
	ctx.lr = 0x82255D9C;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82255DA8;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255e58
	goto loc_82255E58;
loc_82255DB0:
	// srawi r11,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,26592
	ctx.r29.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// mulli r30,r11,72
	ctx.r30.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255d98
	if (ctx.cr0.eq) goto loc_82255D98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82254f70
	ctx.lr = 0x82255DE4;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255e34
	if (ctx.cr0.eq) goto loc_82255E34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82254eb0
	ctx.lr = 0x82255E04;
	sub_82254EB0(ctx, base);
	// bl 0x82260468
	ctx.lr = 0x82255E08;
	sub_82260468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255e1c
	if (!ctx.cr0.eq) goto loc_82255E1C;
	// bl 0x8208db08
	ctx.lr = 0x82255E14;
	sub_8208DB08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82255e20
	goto loc_82255E20;
loc_82255E1C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82255E20:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82255e48
	if (ctx.cr6.eq) goto loc_82255E48;
	// bl 0x8224dac8
	ctx.lr = 0x82255E30;
	sub_8224DAC8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82255E34:
	// bl 0x8224da90
	ctx.lr = 0x82255E38;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82255E48:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82255e80
	ctx.lr = 0x82255E54;
	sub_82255E80(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82255E58:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82255E60"))) PPC_WEAK_FUNC(sub_82255E60);
PPC_FUNC_IMPL(__imp__sub_82255E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x82255e98
	goto loc_82255E98;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82255E98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82255070
	ctx.lr = 0x82255EA0;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255E80"))) PPC_WEAK_FUNC(sub_82255E80);
PPC_FUNC_IMPL(__imp__sub_82255E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82255070
	ctx.lr = 0x82255EA0;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82255EB8"))) PPC_WEAK_FUNC(sub_82255EB8);
PPC_FUNC_IMPL(__imp__sub_82255EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82255EC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82254eb0
	ctx.lr = 0x82255ECC;
	sub_82254EB0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r29,r11,26592
	ctx.r29.s64 = ctx.r11.s64 + 26592;
	// beq cr6,0x82255f44
	if (ctx.cr6.eq) goto loc_82255F44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82255ef4
	if (!ctx.cr6.eq) goto loc_82255EF4;
	// lbz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 148);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82255f08
	if (!ctx.cr0.eq) goto loc_82255F08;
loc_82255EF4:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82255f24
	if (!ctx.cr6.eq) goto loc_82255F24;
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255f24
	if (ctx.cr0.eq) goto loc_82255F24;
loc_82255F08:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82254eb0
	ctx.lr = 0x82255F10;
	sub_82254EB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82254eb0
	ctx.lr = 0x82255F1C;
	sub_82254EB0(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82255f44
	if (ctx.cr6.eq) goto loc_82255F44;
loc_82255F24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82254eb0
	ctx.lr = 0x82255F2C;
	sub_82254EB0(ctx, base);
	// bl 0x82088268
	ctx.lr = 0x82255F30;
	sub_82088268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82255f44
	if (!ctx.cr0.eq) goto loc_82255F44;
	// bl 0x8208db08
	ctx.lr = 0x82255F3C;
	sub_8208DB08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82255f48
	goto loc_82255F48;
loc_82255F44:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82255F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82254e18
	ctx.lr = 0x82255F50;
	sub_82254E18(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x82255f88
	if (ctx.cr6.eq) goto loc_82255F88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224db00
	ctx.lr = 0x82255F80;
	sub_8224DB00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82255f8c
	goto loc_82255F8C;
loc_82255F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82255F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82255F94"))) PPC_WEAK_FUNC(sub_82255F94);
PPC_FUNC_IMPL(__imp__sub_82255F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82255F98"))) PPC_WEAK_FUNC(sub_82255F98);
PPC_FUNC_IMPL(__imp__sub_82255F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2736(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2736);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82255FA8;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82255fe4
	if (!ctx.cr6.eq) goto loc_82255FE4;
	// bl 0x8224dac8
	ctx.lr = 0x82255FC4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255FD0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822560a0
	goto loc_822560A0;
loc_82255FE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82255ffc
	if (ctx.cr6.lt) goto loc_82255FFC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82256020
	if (ctx.cr6.lt) goto loc_82256020;
loc_82255FFC:
	// bl 0x8224dac8
	ctx.lr = 0x82256000;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8225600C;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82256018;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822560a0
	goto loc_822560A0;
loc_82256020:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255ffc
	if (ctx.cr0.eq) goto loc_82255FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82256054;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225607c
	if (ctx.cr0.eq) goto loc_8225607C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255eb8
	ctx.lr = 0x82256074;
	sub_82255EB8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82256090
	goto loc_82256090;
loc_8225607C:
	// bl 0x8224da90
	ctx.lr = 0x82256080;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82256090:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x822560c8
	ctx.lr = 0x8225609C;
	sub_822560C8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_822560A0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82255FA0"))) PPC_WEAK_FUNC(sub_82255FA0);
PPC_FUNC_IMPL(__imp__sub_82255FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82255FA8;
	sub_82248784(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82255fe4
	if (!ctx.cr6.eq) goto loc_82255FE4;
	// bl 0x8224dac8
	ctx.lr = 0x82255FC4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x82255FD0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822560a0
	goto loc_822560A0;
loc_82255FE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82255ffc
	if (ctx.cr6.lt) goto loc_82255FFC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82256020
	if (ctx.cr6.lt) goto loc_82256020;
loc_82255FFC:
	// bl 0x8224dac8
	ctx.lr = 0x82256000;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8225600C;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x82256018;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822560a0
	goto loc_822560A0;
loc_82256020:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82255ffc
	if (ctx.cr0.eq) goto loc_82255FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x82256054;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225607c
	if (ctx.cr0.eq) goto loc_8225607C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255eb8
	ctx.lr = 0x82256074;
	sub_82255EB8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x82256090
	goto loc_82256090;
loc_8225607C:
	// bl 0x8224da90
	ctx.lr = 0x82256080;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82256090:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x822560c8
	ctx.lr = 0x8225609C;
	sub_822560C8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_822560A0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822560A8"))) PPC_WEAK_FUNC(sub_822560A8);
PPC_FUNC_IMPL(__imp__sub_822560A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x822560e0
	goto loc_822560E0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_822560E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x822560E8;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822560C8"))) PPC_WEAK_FUNC(sub_822560C8);
PPC_FUNC_IMPL(__imp__sub_822560C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x822560E8;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82256100"))) PPC_WEAK_FUNC(sub_82256100);
PPC_FUNC_IMPL(__imp__sub_82256100) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82256154
	if (ctx.cr0.eq) goto loc_82256154;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256154
	if (ctx.cr0.eq) goto loc_82256154;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8224a858
	ctx.lr = 0x82256134;
	sub_8224A858(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82256154:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82256168"))) PPC_WEAK_FUNC(sub_82256168);
PPC_FUNC_IMPL(__imp__sub_82256168) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8241e0fc
	ctx.lr = 0x8225619C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822561ac
	if (!ctx.cr0.lt) goto loc_822561AC;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x822561cc
	goto loc_822561CC;
loc_822561AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822561c8
	if (!ctx.cr6.eq) goto loc_822561C8;
	// bl 0x82089fe0
	ctx.lr = 0x822561B8;
	sub_82089FE0(ctx, base);
	// li r11,1627
	ctx.r11.s64 = 1627;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x822561cc
	goto loc_822561CC;
loc_822561C8:
	// li r3,997
	ctx.r3.s64 = 997;
loc_822561CC:
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

__attribute__((alias("__imp__sub_822561E0"))) PPC_WEAK_FUNC(sub_822561E0);
PPC_FUNC_IMPL(__imp__sub_822561E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x82256224;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82256234
	if (!ctx.cr0.lt) goto loc_82256234;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82256258
	goto loc_82256258;
loc_82256234:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82256254
	if (!ctx.cr6.eq) goto loc_82256254;
	// bl 0x82089fe0
	ctx.lr = 0x82256240;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82256258
	goto loc_82256258;
loc_82256254:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82256258:
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

__attribute__((alias("__imp__sub_8225626C"))) PPC_WEAK_FUNC(sub_8225626C);
PPC_FUNC_IMPL(__imp__sub_8225626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256270"))) PPC_WEAK_FUNC(sub_82256270);
PPC_FUNC_IMPL(__imp__sub_82256270) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822561e0
	sub_822561E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256278"))) PPC_WEAK_FUNC(sub_82256278);
PPC_FUNC_IMPL(__imp__sub_82256278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// rlwinm r11,r4,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bne cr6,0x822562cc
	if (!ctx.cr6.eq) goto loc_822562CC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8241dedc
	ctx.lr = 0x822562BC;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822562cc
	if (!ctx.cr0.eq) goto loc_822562CC;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8225631c
	goto loc_8225631C;
loc_822562CC:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x822562E8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822562f8
	if (!ctx.cr0.lt) goto loc_822562F8;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8225631c
	goto loc_8225631C;
loc_822562F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82256318
	if (!ctx.cr6.eq) goto loc_82256318;
	// bl 0x82089fe0
	ctx.lr = 0x82256304;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8225631c
	goto loc_8225631C;
loc_82256318:
	// li r3,997
	ctx.r3.s64 = 997;
loc_8225631C:
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

__attribute__((alias("__imp__sub_82256330"))) PPC_WEAK_FUNC(sub_82256330);
PPC_FUNC_IMPL(__imp__sub_82256330) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82256278
	sub_82256278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256338"))) PPC_WEAK_FUNC(sub_82256338);
PPC_FUNC_IMPL(__imp__sub_82256338) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e10c
	__imp__XamUserGetName(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225633C"))) PPC_WEAK_FUNC(sub_8225633C);
PPC_FUNC_IMPL(__imp__sub_8225633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256340"))) PPC_WEAK_FUNC(sub_82256340);
PPC_FUNC_IMPL(__imp__sub_82256340) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e11c
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256344"))) PPC_WEAK_FUNC(sub_82256344);
PPC_FUNC_IMPL(__imp__sub_82256344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256348"))) PPC_WEAK_FUNC(sub_82256348);
PPC_FUNC_IMPL(__imp__sub_82256348) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e12c
	__imp__XamUserAreUsersFriends(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225634C"))) PPC_WEAK_FUNC(sub_8225634C);
PPC_FUNC_IMPL(__imp__sub_8225634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256350"))) PPC_WEAK_FUNC(sub_82256350);
PPC_FUNC_IMPL(__imp__sub_82256350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82256358;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241e14c
	ctx.lr = 0x8225636C;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8201
	ctx.r11.s64 = 537460736;
	// ori r11,r11,27392
	ctx.r11.u64 = ctx.r11.u64 | 27392;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822563c8
	if (!ctx.cr6.lt) goto loc_822563C8;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bne cr6,0x822563b8
	if (!ctx.cr6.eq) goto loc_822563B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82256388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e11c
	ctx.lr = 0x82256390;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822563a8
	if (ctx.cr6.eq) goto loc_822563A8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82256388
	if (ctx.cr6.lt) goto loc_82256388;
	// b 0x822563c8
	goto loc_822563C8;
loc_822563A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822563d8
	goto loc_822563D8;
loc_822563B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e11c
	ctx.lr = 0x822563C0;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822563a8
	if (ctx.cr6.eq) goto loc_822563A8;
loc_822563C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e13c
	ctx.lr = 0x822563D8;
	__imp__XamUserCheckPrivilege(ctx, base);
loc_822563D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822563E0"))) PPC_WEAK_FUNC(sub_822563E0);
PPC_FUNC_IMPL(__imp__sub_822563E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822563E8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x8225642c
	if (ctx.cr6.eq) goto loc_8225642C;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82256418:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 * 28;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x82256418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82256418;
loc_8225642C:
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82256444
	if (!ctx.cr6.gt) goto loc_82256444;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x822564b0
	goto loc_822564B0;
loc_82256444:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8225647C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225648c
	if (!ctx.cr0.lt) goto loc_8225648C;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x822564b0
	goto loc_822564B0;
loc_8225648C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822564ac
	if (!ctx.cr6.eq) goto loc_822564AC;
	// bl 0x82089fe0
	ctx.lr = 0x82256498;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x822564b0
	goto loc_822564B0;
loc_822564AC:
	// li r3,997
	ctx.r3.s64 = 997;
loc_822564B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822564B8"))) PPC_WEAK_FUNC(sub_822564B8);
PPC_FUNC_IMPL(__imp__sub_822564B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822564C0;
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
	// bl 0x822604a8
	ctx.lr = 0x822564E4;
	sub_822604A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256510
	if (!ctx.cr0.eq) goto loc_82256510;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e15c
	ctx.lr = 0x82256510;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_82256510:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82256518"))) PPC_WEAK_FUNC(sub_82256518);
PPC_FUNC_IMPL(__imp__sub_82256518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82256520;
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
	// bl 0x822604a8
	ctx.lr = 0x82256544;
	sub_822604A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256570
	if (!ctx.cr0.eq) goto loc_82256570;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e15c
	ctx.lr = 0x82256570;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_82256570:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82256578"))) PPC_WEAK_FUNC(sub_82256578);
PPC_FUNC_IMPL(__imp__sub_82256578) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8241e16c
	ctx.lr = 0x82256590;
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822565a0
	if (ctx.cr0.lt) goto loc_822565A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822565b8
	goto loc_822565B8;
loc_822565A0:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822565b8
	if (ctx.cr6.eq) goto loc_822565B8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_822565B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822565C8"))) PPC_WEAK_FUNC(sub_822565C8);
PPC_FUNC_IMPL(__imp__sub_822565C8) {
	PPC_FUNC_PROLOGUE();
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8241e17c
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822565D0"))) PPC_WEAK_FUNC(sub_822565D0);
PPC_FUNC_IMPL(__imp__sub_822565D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e18c
	__imp__XamShowSigninUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822565D4"))) PPC_WEAK_FUNC(sub_822565D4);
PPC_FUNC_IMPL(__imp__sub_822565D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822565D8"))) PPC_WEAK_FUNC(sub_822565D8);
PPC_FUNC_IMPL(__imp__sub_822565D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e19c
	__imp__XamShowFriendsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822565DC"))) PPC_WEAK_FUNC(sub_822565DC);
PPC_FUNC_IMPL(__imp__sub_822565DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822565E0"))) PPC_WEAK_FUNC(sub_822565E0);
PPC_FUNC_IMPL(__imp__sub_822565E0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8241e1ac
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822565E8"))) PPC_WEAK_FUNC(sub_822565E8);
PPC_FUNC_IMPL(__imp__sub_822565E8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8241e1bc
	__imp__XamShowAchievementsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822565F0"))) PPC_WEAK_FUNC(sub_822565F0);
PPC_FUNC_IMPL(__imp__sub_822565F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e1cc
	__imp__XamShowPlayerReviewUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822565F4"))) PPC_WEAK_FUNC(sub_822565F4);
PPC_FUNC_IMPL(__imp__sub_822565F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822565F8"))) PPC_WEAK_FUNC(sub_822565F8);
PPC_FUNC_IMPL(__imp__sub_822565F8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x8241e1dc
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256608"))) PPC_WEAK_FUNC(sub_82256608);
PPC_FUNC_IMPL(__imp__sub_82256608) {
	PPC_FUNC_PROLOGUE();
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8241e1dc
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256620"))) PPC_WEAK_FUNC(sub_82256620);
PPC_FUNC_IMPL(__imp__sub_82256620) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e1ec
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256624"))) PPC_WEAK_FUNC(sub_82256624);
PPC_FUNC_IMPL(__imp__sub_82256624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256628"))) PPC_WEAK_FUNC(sub_82256628);
PPC_FUNC_IMPL(__imp__sub_82256628) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8241e1fc
	ctx.lr = 0x82256640;
	__imp__XamShowMessageBoxUI(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82256650"))) PPC_WEAK_FUNC(sub_82256650);
PPC_FUNC_IMPL(__imp__sub_82256650) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e20c
	__imp__XamShowGameInviteUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256654"))) PPC_WEAK_FUNC(sub_82256654);
PPC_FUNC_IMPL(__imp__sub_82256654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256658"))) PPC_WEAK_FUNC(sub_82256658);
PPC_FUNC_IMPL(__imp__sub_82256658) {
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
	// bl 0x8241e21c
	ctx.lr = 0x82256668;
	__imp__XamShowDirtyDiscErrorUI(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82088660
	ctx.lr = 0x82256674;
	sub_82088660(ctx, base);
}

__attribute__((alias("__imp__sub_82256674"))) PPC_WEAK_FUNC(sub_82256674);
PPC_FUNC_IMPL(__imp__sub_82256674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256678"))) PPC_WEAK_FUNC(sub_82256678);
PPC_FUNC_IMPL(__imp__sub_82256678) {
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
	// bl 0x8241e22c
	ctx.lr = 0x82256688;
	__imp__XamUserGetSigninInfo(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82256698
	if (ctx.cr0.lt) goto loc_82256698;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822566b0
	goto loc_822566B0;
loc_82256698:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822566b0
	if (ctx.cr6.eq) goto loc_822566B0;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_822566B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822566C0"))) PPC_WEAK_FUNC(sub_822566C0);
PPC_FUNC_IMPL(__imp__sub_822566C0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225672c
	if (ctx.cr6.eq) goto loc_8225672C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225672c
	if (ctx.cr6.eq) goto loc_8225672C;
	// andi. r11,r6,144
	ctx.r11.u64 = ctx.r6.u64 & 144;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 144, ctx.xer);
	// beq cr6,0x8225672c
	if (ctx.cr6.eq) goto loc_8225672C;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82256708
	if (!ctx.cr6.eq) goto loc_82256708;
	// rlwinm. r31,r6,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82256708
	if (!ctx.cr0.eq) goto loc_82256708;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_82256708:
	// rlwinm. r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225671c
	if (ctx.cr0.eq) goto loc_8225671C;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8225672c
	if (!ctx.cr6.eq) goto loc_8225672C;
loc_8225671C:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8241e23c
	ctx.lr = 0x82256728;
	__imp__XamContentCreateEx(ctx, base);
	// b 0x82256730
	goto loc_82256730;
loc_8225672C:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82256730:
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

__attribute__((alias("__imp__sub_82256744"))) PPC_WEAK_FUNC(sub_82256744);
PPC_FUNC_IMPL(__imp__sub_82256744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256748"))) PPC_WEAK_FUNC(sub_82256748);
PPC_FUNC_IMPL(__imp__sub_82256748) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e24c
	__imp__XamContentDelete(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225674C"))) PPC_WEAK_FUNC(sub_8225674C);
PPC_FUNC_IMPL(__imp__sub_8225674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256750"))) PPC_WEAK_FUNC(sub_82256750);
PPC_FUNC_IMPL(__imp__sub_82256750) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e25c
	__imp__XamContentClose(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256754"))) PPC_WEAK_FUNC(sub_82256754);
PPC_FUNC_IMPL(__imp__sub_82256754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256758"))) PPC_WEAK_FUNC(sub_82256758);
PPC_FUNC_IMPL(__imp__sub_82256758) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e26c
	__imp__XamContentGetLicenseMask(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225675C"))) PPC_WEAK_FUNC(sub_8225675C);
PPC_FUNC_IMPL(__imp__sub_8225675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256760"))) PPC_WEAK_FUNC(sub_82256760);
PPC_FUNC_IMPL(__imp__sub_82256760) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e27c
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256764"))) PPC_WEAK_FUNC(sub_82256764);
PPC_FUNC_IMPL(__imp__sub_82256764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256768"))) PPC_WEAK_FUNC(sub_82256768);
PPC_FUNC_IMPL(__imp__sub_82256768) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e28c
	__imp__XamContentGetDeviceState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225676C"))) PPC_WEAK_FUNC(sub_8225676C);
PPC_FUNC_IMPL(__imp__sub_8225676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256770"))) PPC_WEAK_FUNC(sub_82256770);
PPC_FUNC_IMPL(__imp__sub_82256770) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e29c
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256774"))) PPC_WEAK_FUNC(sub_82256774);
PPC_FUNC_IMPL(__imp__sub_82256774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256778"))) PPC_WEAK_FUNC(sub_82256778);
PPC_FUNC_IMPL(__imp__sub_82256778) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	ctx.r11.s64 = ctx.r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	ctx.r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822567b8
	if (!ctx.cr6.gt) goto loc_822567B8;
	// addi r10,r11,169
	ctx.r10.s64 = ctx.r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// b 0x822567bc
	goto loc_822567BC;
loc_822567B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822567BC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x822567d0
	if (!ctx.cr6.gt) goto loc_822567D0;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// b 0x822567d4
	goto loc_822567D4;
loc_822567D0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822567D4:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822567F4"))) PPC_WEAK_FUNC(sub_822567F4);
PPC_FUNC_IMPL(__imp__sub_822567F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822567F8"))) PPC_WEAK_FUNC(sub_822567F8);
PPC_FUNC_IMPL(__imp__sub_822567F8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822568ac
	if (ctx.cr6.eq) goto loc_822568AC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822568ac
	if (ctx.cr6.eq) goto loc_822568AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822568ac
	if (ctx.cr6.eq) goto loc_822568AC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,260
	ctx.r6.s64 = 260;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8241e2ac
	ctx.lr = 0x82256844;
	__imp__XamContentResolve(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822568b0
	if (!ctx.cr0.eq) goto loc_822568B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x82256870;
	__imp__RtlInitAnsiString(ctx, base);
	// li r8,96
	ctx.r8.s64 = 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lis r4,-32752
	ctx.r4.s64 = -2146435072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ddfc
	ctx.lr = 0x8225688C;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822568a0
	if (ctx.cr0.lt) goto loc_822568A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x822568b0
	goto loc_822568B0;
loc_822568A0:
	// bl 0x82089fa8
	ctx.lr = 0x822568A4;
	sub_82089FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822568b0
	goto loc_822568B0;
loc_822568AC:
	// li r31,87
	ctx.r31.s64 = 87;
loc_822568B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822568CC"))) PPC_WEAK_FUNC(sub_822568CC);
PPC_FUNC_IMPL(__imp__sub_822568CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822568D0"))) PPC_WEAK_FUNC(sub_822568D0);
PPC_FUNC_IMPL(__imp__sub_822568D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822568D8;
	sub_8224878C(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225699c
	if (ctx.cr6.eq) goto loc_8225699C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225699c
	if (ctx.cr6.eq) goto loc_8225699C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225699c
	if (ctx.cr6.eq) goto loc_8225699C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,260
	ctx.r6.s64 = 260;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8241e2ac
	ctx.lr = 0x82256918;
	__imp__XamContentResolve(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822569a0
	if (!ctx.cr0.eq) goto loc_822569A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8241de0c
	ctx.lr = 0x82256944;
	__imp__RtlInitAnsiString(ctx, base);
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// li r10,100
	ctx.r10.s64 = 100;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,16401
	ctx.r4.s64 = 1074855936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241df1c
	ctx.lr = 0x8225697C;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82256990
	if (ctx.cr0.lt) goto loc_82256990;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822569a0
	goto loc_822569A0;
loc_82256990:
	// bl 0x82089fa8
	ctx.lr = 0x82256994;
	sub_82089FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822569a0
	goto loc_822569A0;
loc_8225699C:
	// li r31,87
	ctx.r31.s64 = 87;
loc_822569A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822569AC"))) PPC_WEAK_FUNC(sub_822569AC);
PPC_FUNC_IMPL(__imp__sub_822569AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822569B0"))) PPC_WEAK_FUNC(sub_822569B0);
PPC_FUNC_IMPL(__imp__sub_822569B0) {
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
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x822566c0
	ctx.lr = 0x822569DC;
	sub_822566C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822569EC"))) PPC_WEAK_FUNC(sub_822569EC);
PPC_FUNC_IMPL(__imp__sub_822569EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822569F0"))) PPC_WEAK_FUNC(sub_822569F0);
PPC_FUNC_IMPL(__imp__sub_822569F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822569F8;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82256a70
	if (ctx.cr6.eq) goto loc_82256A70;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x82256a68
	if (ctx.cr6.eq) goto loc_82256A68;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x82256a60
	if (ctx.cr6.eq) goto loc_82256A60;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x82256a58
	if (ctx.cr6.eq) goto loc_82256A58;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bne cr6,0x82256a44
	if (!ctx.cr6.eq) goto loc_82256A44;
	// rlwinm. r11,r4,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// bne 0x82256a74
	if (!ctx.cr0.eq) goto loc_82256A74;
loc_82256A44:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82089fa8
	ctx.lr = 0x82256A50;
	sub_82089FA8(ctx, base);
loc_82256A50:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82256bdc
	goto loc_82256BDC;
loc_82256A58:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82256a74
	goto loc_82256A74;
loc_82256A60:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82256a74
	goto loc_82256A74;
loc_82256A68:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82256a74
	goto loc_82256A74;
loc_82256A70:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82256A74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x82256A80;
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82256aa0
	if (!ctx.cr6.gt) goto loc_82256AA0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82256aa4
	if (ctx.cr6.eq) goto loc_82256AA4;
loc_82256AA0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82256AA4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 28) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~ctx.r31.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq 0x82256b0c
	if (ctx.cr0.eq) goto loc_82256B0C;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 65536;
loc_82256B0C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82256b18
	if (!ctx.cr6.eq) goto loc_82256B18;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82256B18:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,-32190
	ctx.r6.s64 = -2109603840;
	// oris r4,r28,16
	ctx.r4.u64 = ctx.r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = ctx.r31.u64 & 32679;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r11,624(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 624);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82256ba4
	if (!ctx.cr0.lt) goto loc_82256BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82089fa8
	ctx.lr = 0x82256B64;
	sub_82089FA8(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82256b7c
	if (!ctx.cr6.eq) goto loc_82256B7C;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x82256b9c
	goto loc_82256B9C;
loc_82256B7C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,186
	ctx.r11.u64 = ctx.r11.u64 | 186;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82256a50
	if (!ctx.cr6.eq) goto loc_82256A50;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x82256b9c
	if (!ctx.cr6.eq) goto loc_82256B9C;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82256B9C:
	// bl 0x82089e00
	ctx.lr = 0x82256BA0;
	sub_82089E00(ctx, base);
	// b 0x82256a50
	goto loc_82256A50;
loc_82256BA4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x82256bb8
	if (!ctx.cr6.eq) goto loc_82256BB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82256bc8
	if (ctx.cr6.eq) goto loc_82256BC8;
loc_82256BB8:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x82256bd0
	if (!ctx.cr6.eq) goto loc_82256BD0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82256bd0
	if (!ctx.cr6.eq) goto loc_82256BD0;
loc_82256BC8:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82256bd4
	goto loc_82256BD4;
loc_82256BD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82256BD4:
	// bl 0x82089e00
	ctx.lr = 0x82256BD8;
	sub_82089E00(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82256BDC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82256BE4"))) PPC_WEAK_FUNC(sub_82256BE4);
PPC_FUNC_IMPL(__imp__sub_82256BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256BE8"))) PPC_WEAK_FUNC(sub_82256BE8);
PPC_FUNC_IMPL(__imp__sub_82256BE8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x82256c20
	if (!ctx.cr6.eq) goto loc_82256C20;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82260610
	ctx.lr = 0x82256C1C;
	sub_82260610(ctx, base);
	// b 0x82256ca8
	goto loc_82256CA8;
loc_82256C20:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82256c50
	if (!ctx.cr6.eq) goto loc_82256C50;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82256C2C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82256c2c
	if (!ctx.cr6.eq) goto loc_82256C2C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// b 0x82256c54
	goto loc_82256C54;
loc_82256C50:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82256C54:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82256c64
	if (!ctx.cr6.eq) goto loc_82256C64;
loc_82256C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82256ca8
	goto loc_82256CA8;
loc_82256C64:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82256c9c
	if (ctx.cr6.lt) goto loc_82256C9C;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82256c9c
	if (ctx.cr6.lt) goto loc_82256C9C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8241e3bc
	ctx.lr = 0x82256C8C;
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82256c5c
	if (!ctx.cr0.lt) goto loc_82256C5C;
	// bl 0x8241df3c
	ctx.lr = 0x82256C98;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82256ca0
	goto loc_82256CA0;
loc_82256C9C:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82256CA0:
	// bl 0x82089e00
	ctx.lr = 0x82256CA4;
	sub_82089E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82256CA8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82256CBC"))) PPC_WEAK_FUNC(sub_82256CBC);
PPC_FUNC_IMPL(__imp__sub_82256CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256CC0"))) PPC_WEAK_FUNC(sub_82256CC0);
PPC_FUNC_IMPL(__imp__sub_82256CC0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241e2bc
	ctx.lr = 0x82256CD4;
	__imp__XMsgCancelIORequest(ctx, base);
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

__attribute__((alias("__imp__sub_82256CE8"))) PPC_WEAK_FUNC(sub_82256CE8);
PPC_FUNC_IMPL(__imp__sub_82256CE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82256cfc
	if (!ctx.cr6.eq) goto loc_82256CFC;
	// b 0x8208db08
	sub_8208DB08(ctx, base);
	return;
loc_82256CFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82256D10"))) PPC_WEAK_FUNC(sub_82256D10);
PPC_FUNC_IMPL(__imp__sub_82256D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e3dc
	ctx.lr = 0x82256D2C;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82260818
	ctx.lr = 0x82256D34;
	sub_82260818(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8241e3cc
	ctx.lr = 0x82256D50;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r9,126(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lhz r5,122(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// lhz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82256DA4"))) PPC_WEAK_FUNC(sub_82256DA4);
PPC_FUNC_IMPL(__imp__sub_82256DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

