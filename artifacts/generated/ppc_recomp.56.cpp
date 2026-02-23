#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82256DA8"))) PPC_WEAK_FUNC(sub_82256DA8);
PPC_FUNC_IMPL(__imp__sub_82256DA8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8241decc
	ctx.lr = 0x82256DD4;
	__imp__ExGetXConfigSetting(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82256df8
	if (ctx.cr6.eq) goto loc_82256DF8;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// ble cr6,0x82256e24
	if (!ctx.cr6.gt) goto loc_82256E24;
loc_82256DF8:
	// bl 0x8241dccc
	ctx.lr = 0x82256DFC;
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82256e20
	if (!ctx.cr6.eq) goto loc_82256E20;
	// cmplwi cr6,r3,257
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 257, ctx.xer);
	// bne cr6,0x82256e18
	if (!ctx.cr6.eq) goto loc_82256E18;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82256e24
	goto loc_82256E24;
loc_82256E18:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82256e24
	goto loc_82256E24;
loc_82256E20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82256E24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82256E34"))) PPC_WEAK_FUNC(sub_82256E34);
PPC_FUNC_IMPL(__imp__sub_82256E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256E38"))) PPC_WEAK_FUNC(sub_82256E38);
PPC_FUNC_IMPL(__imp__sub_82256E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e2cc
	__imp__XamInputGetCapabilities(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256E3C"))) PPC_WEAK_FUNC(sub_82256E3C);
PPC_FUNC_IMPL(__imp__sub_82256E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256E40"))) PPC_WEAK_FUNC(sub_82256E40);
PPC_FUNC_IMPL(__imp__sub_82256E40) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8241e2dc
	__imp__XamInputGetState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256E4C"))) PPC_WEAK_FUNC(sub_82256E4C);
PPC_FUNC_IMPL(__imp__sub_82256E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256E50"))) PPC_WEAK_FUNC(sub_82256E50);
PPC_FUNC_IMPL(__imp__sub_82256E50) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,1716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82256ee4
	if (!ctx.cr6.eq) goto loc_82256EE4;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82256ee4
	if (!ctx.cr0.eq) goto loc_82256EE4;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,5611
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5611, ctx.xer);
	// bge cr6,0x82256ee4
	if (!ctx.cr6.lt) goto loc_82256EE4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241e2cc
	ctx.lr = 0x82256EAC;
	__imp__XamInputGetCapabilities(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256ee4
	if (!ctx.cr0.eq) goto loc_82256EE4;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82256ee4
	if (!ctx.cr6.eq) goto loc_82256EE4;
	// lhz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82256ee4
	if (ctx.cr0.eq) goto loc_82256EE4;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256ee4
	if (ctx.cr0.eq) goto loc_82256EE4;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
loc_82256EE4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e2ec
	ctx.lr = 0x82256F00;
	__imp__XamInputSetState(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82256F18"))) PPC_WEAK_FUNC(sub_82256F18);
PPC_FUNC_IMPL(__imp__sub_82256F18) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x82256f3c
	if (!ctx.cr6.eq) goto loc_82256F3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 1073741824;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82256F3C:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8241e2fc
	ctx.lr = 0x82256F44;
	__imp__XamInputGetKeystrokeEx(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82256F54"))) PPC_WEAK_FUNC(sub_82256F54);
PPC_FUNC_IMPL(__imp__sub_82256F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256F58"))) PPC_WEAK_FUNC(sub_82256F58);
PPC_FUNC_IMPL(__imp__sub_82256F58) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8241e30c
	__imp__XamEnumerate(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256F70"))) PPC_WEAK_FUNC(sub_82256F70);
PPC_FUNC_IMPL(__imp__sub_82256F70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82088268
	sub_82088268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82256F74"))) PPC_WEAK_FUNC(sub_82256F74);
PPC_FUNC_IMPL(__imp__sub_82256F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82256F78"))) PPC_WEAK_FUNC(sub_82256F78);
PPC_FUNC_IMPL(__imp__sub_82256F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82256F80;
	sub_82248788(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,588
	ctx.r5.s64 = 588;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82248f70
	ctx.lr = 0x82256FA8;
	sub_82248F70(ctx, base);
	// std r28,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r28.u64);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e32c
	ctx.lr = 0x82256FD8;
	__imp__XamBackgroundDownloadItemGetStatus(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225700c
	if (!ctx.cr6.eq) goto loc_8225700C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225700c
	if (!ctx.cr6.eq) goto loc_8225700C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257004
	if (ctx.cr6.eq) goto loc_82257004;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// b 0x82257030
	goto loc_82257030;
loc_82257004:
	// li r11,1168
	ctx.r11.s64 = 1168;
	// b 0x8225702c
	goto loc_8225702C;
loc_8225700C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e31c
	ctx.lr = 0x8225701C;
	__imp__XamBackgroundDownloadItemGetHistoryStatus(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,112
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 112, ctx.xer);
	// beq cr6,0x82257030
	if (ctx.cr6.eq) goto loc_82257030;
	// li r11,997
	ctx.r11.s64 = 997;
loc_8225702C:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82257030:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8225703C"))) PPC_WEAK_FUNC(sub_8225703C);
PPC_FUNC_IMPL(__imp__sub_8225703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257040"))) PPC_WEAK_FUNC(sub_82257040);
PPC_FUNC_IMPL(__imp__sub_82257040) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8241e34c
	__imp__XamShowMarketplaceDownloadItemsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257054"))) PPC_WEAK_FUNC(sub_82257054);
PPC_FUNC_IMPL(__imp__sub_82257054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257058"))) PPC_WEAK_FUNC(sub_82257058);
PPC_FUNC_IMPL(__imp__sub_82257058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82257060;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82257084
	if (ctx.cr6.eq) goto loc_82257084;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82257084:
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x822570a0
	if (!ctx.cr6.eq) goto loc_822570A0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82260898
	ctx.lr = 0x8225709C;
	sub_82260898(ctx, base);
	// b 0x82257110
	goto loc_82257110;
loc_822570A0:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x822570b8
	if (!ctx.cr6.eq) goto loc_822570B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224a830
	ctx.lr = 0x822570B0;
	sub_8224A830(ctx, base);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// b 0x822570bc
	goto loc_822570BC;
loc_822570B8:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_822570BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822570cc
	if (!ctx.cr6.eq) goto loc_822570CC;
loc_822570C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82257110
	goto loc_82257110;
loc_822570CC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82257104
	if (ctx.cr6.lt) goto loc_82257104;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82257104
	if (ctx.cr6.lt) goto loc_82257104;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dfdc
	ctx.lr = 0x822570F4;
	__imp__RtlUnicodeToMultiByteN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822570c4
	if (!ctx.cr0.lt) goto loc_822570C4;
	// bl 0x8241df3c
	ctx.lr = 0x82257100;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82257108
	goto loc_82257108;
loc_82257104:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82257108:
	// bl 0x82089e00
	ctx.lr = 0x8225710C;
	sub_82089E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82257110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82257118"))) PPC_WEAK_FUNC(sub_82257118);
PPC_FUNC_IMPL(__imp__sub_82257118) {
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
	// bl 0x8241e3ec
	ctx.lr = 0x82257128;
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82257138
	if (ctx.cr0.lt) goto loc_82257138;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82257140
	goto loc_82257140;
loc_82257138:
	// bl 0x82089fa8
	ctx.lr = 0x8225713C;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82257140:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82257150"))) PPC_WEAK_FUNC(sub_82257150);
PPC_FUNC_IMPL(__imp__sub_82257150) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e3fc
	__imp__DbgBreakPoint(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82257154"))) PPC_WEAK_FUNC(sub_82257154);
PPC_FUNC_IMPL(__imp__sub_82257154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257158"))) PPC_WEAK_FUNC(sub_82257158);
PPC_FUNC_IMPL(__imp__sub_82257158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82257160;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82257184;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// beq cr6,0x822571e8
	if (ctx.cr6.eq) goto loc_822571E8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_822571A0:
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822571d8
	if (ctx.cr6.eq) goto loc_822571D8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x822571d8
	if (!ctx.cr6.eq) goto loc_822571D8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r29.s64, ctx.xer);
	// ble cr6,0x822571d8
	if (!ctx.cr6.gt) goto loc_822571D8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_822571D8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822571a0
	if (ctx.cr6.lt) goto loc_822571A0;
loc_822571E8:
	// std r29,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r29.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r5.u32);
	// stw r5,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r5.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x822571FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82257204"))) PPC_WEAK_FUNC(sub_82257204);
PPC_FUNC_IMPL(__imp__sub_82257204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257208"))) PPC_WEAK_FUNC(sub_82257208);
PPC_FUNC_IMPL(__imp__sub_82257208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82257234
	if (!ctx.cr0.eq) goto loc_82257234;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257234
	if (ctx.cr0.eq) goto loc_82257234;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r11,32767
	ctx.r11.s64 = ctx.r11.s64 + 32767;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_82257234:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225723C"))) PPC_WEAK_FUNC(sub_8225723C);
PPC_FUNC_IMPL(__imp__sub_8225723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257240"))) PPC_WEAK_FUNC(sub_82257240);
PPC_FUNC_IMPL(__imp__sub_82257240) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8225728c
	if (ctx.cr6.lt) goto loc_8225728C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,10312
	ctx.r5.s64 = ctx.r11.s64 + 10312;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8241e40c
	ctx.lr = 0x8225727C;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225728c
	if (!ctx.cr0.eq) goto loc_8225728C;
loc_82257284:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82257308
	goto loc_82257308;
loc_8225728C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x822572bc
	if (ctx.cr6.lt) goto loc_822572BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,10304
	ctx.r5.s64 = ctx.r11.s64 + 10304;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8241e40c
	ctx.lr = 0x822572B4;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82257284
	if (ctx.cr0.eq) goto loc_82257284;
loc_822572BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257304
	if (ctx.cr0.eq) goto loc_82257304;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82257304
	if (ctx.cr6.lt) goto loc_82257304;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,10296
	ctx.r5.s64 = ctx.r11.s64 + 10296;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8241e40c
	ctx.lr = 0x822572F8;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82257308
	if (ctx.cr0.eq) goto loc_82257308;
loc_82257304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82257308:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8225731C"))) PPC_WEAK_FUNC(sub_8225731C);
PPC_FUNC_IMPL(__imp__sub_8225731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257320"))) PPC_WEAK_FUNC(sub_82257320);
PPC_FUNC_IMPL(__imp__sub_82257320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r11,29472
	ctx.r11.s64 = ctx.r11.s64 + 29472;
	// rlwimi r10,r11,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82257338"))) PPC_WEAK_FUNC(sub_82257338);
PPC_FUNC_IMPL(__imp__sub_82257338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82257340;
	sub_8224878C(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,10316
	ctx.r4.s64 = ctx.r11.s64 + 10316;
	// bl 0x8241de0c
	ctx.lr = 0x8225735C;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lis r4,16400
	ctx.r4.s64 = 1074790400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,6228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6228);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822573B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82257474
	if (ctx.cr0.lt) goto loc_82257474;
	// lwz r11,6228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6228);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822573DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82257474
	if (ctx.cr0.lt) goto loc_82257474;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225746c
	if (ctx.cr6.eq) goto loc_8225746C;
loc_822573EC:
	// li r29,4096
	ctx.r29.s64 = 4096;
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// bge cr6,0x822573fc
	if (!ctx.cr6.lt) goto loc_822573FC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822573FC:
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x82257420;
	__imp__NtWriteFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8225744c
	if (!ctx.cr6.eq) goto loc_8225744C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241dfbc
	ctx.lr = 0x82257440;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225746c
	if (ctx.cr0.lt) goto loc_8225746C;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8225744C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8225746c
	if (ctx.cr6.lt) goto loc_8225746C;
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// subf. r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// bne 0x822573ec
	if (!ctx.cr0.eq) goto loc_822573EC;
loc_8225746C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x82257474;
	__imp__NtClose(ctx, base);
loc_82257474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82257480"))) PPC_WEAK_FUNC(sub_82257480);
PPC_FUNC_IMPL(__imp__sub_82257480) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,10336
	ctx.r4.s64 = ctx.r11.s64 + 10336;
	// bl 0x8241de0c
	ctx.lr = 0x822574AC;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// beq cr6,0x822574e0
	if (ctx.cr6.eq) goto loc_822574E0;
	// ori r4,r4,278
	ctx.r4.u64 = ctx.r4.u64 | 278;
	// b 0x822574e4
	goto loc_822574E4;
loc_822574E0:
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
loc_822574E4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,6228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6228);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225751C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225752c
	if (ctx.cr0.lt) goto loc_8225752C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8225752C:
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

__attribute__((alias("__imp__sub_82257544"))) PPC_WEAK_FUNC(sub_82257544);
PPC_FUNC_IMPL(__imp__sub_82257544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257548"))) PPC_WEAK_FUNC(sub_82257548);
PPC_FUNC_IMPL(__imp__sub_82257548) {
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
	// rlwinm r11,r5,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8241df0c
	ctx.lr = 0x82257590;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x822575ac
	if (!ctx.cr6.eq) goto loc_822575AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241dfbc
	ctx.lr = 0x822575AC;
	__imp__NtWaitForSingleObjectEx(ctx, base);
loc_822575AC:
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

__attribute__((alias("__imp__sub_822575C4"))) PPC_WEAK_FUNC(sub_822575C4);
PPC_FUNC_IMPL(__imp__sub_822575C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822575C8"))) PPC_WEAK_FUNC(sub_822575C8);
PPC_FUNC_IMPL(__imp__sub_822575C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822575D0;
	sub_8224877C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r25,r11,6232
	ctx.r25.s64 = ctx.r11.s64 + 6232;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r9,-3
	ctx.r9.s64 = -3;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r11,-4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225763C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82257734
	if (ctx.cr6.eq) goto loc_82257734;
loc_82257650:
	// lwz r11,188(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82257740
	if (!ctx.cr6.eq) goto loc_82257740;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// ld r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8241df5c
	ctx.lr = 0x82257680;
	__imp__NtQueryInformationFile(ctx, base);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225770c
	if (ctx.cr6.eq) goto loc_8225770C;
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmpd cr6,r11,r9
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x822576a8
	if (!ctx.cr6.gt) goto loc_822576A8;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822576A8:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r7,20
	ctx.r7.s64 = 20;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241ddec
	ctx.lr = 0x822576CC;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822576f4
	if (ctx.cr0.lt) goto loc_822576F4;
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8241ddec
	ctx.lr = 0x822576F4;
	__imp__NtSetInformationFile(ctx, base);
loc_822576F4:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225770c
	if (ctx.cr6.eq) goto loc_8225770C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8225770c
	if (!ctx.cr6.eq) goto loc_8225770C;
	// li r3,261
	ctx.r3.s64 = 261;
loc_8225770C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,261
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 261, ctx.xer);
	// beq cr6,0x82257650
	if (ctx.cr6.eq) goto loc_82257650;
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82257734
	if (!ctx.cr6.eq) goto loc_82257734;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8241dddc
	ctx.lr = 0x8225772C;
	__imp__NtClose(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82257734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82257740:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8241dddc
	ctx.lr = 0x82257748;
	__imp__NtClose(ctx, base);
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,576
	ctx.r31.u64 = ctx.r31.u64 | 576;
	// b 0x82257734
	goto loc_82257734;
}

__attribute__((alias("__imp__sub_82257754"))) PPC_WEAK_FUNC(sub_82257754);
PPC_FUNC_IMPL(__imp__sub_82257754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257758"))) PPC_WEAK_FUNC(sub_82257758);
PPC_FUNC_IMPL(__imp__sub_82257758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82257760;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822577c4
	if (ctx.cr6.eq) goto loc_822577C4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822577ac
	if (!ctx.cr6.gt) goto loc_822577AC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82257788:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82086968
	ctx.lr = 0x82257798;
	sub_82086968(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82257788
	if (ctx.cr6.lt) goto loc_82257788;
loc_822577AC:
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82086968
	ctx.lr = 0x822577B8;
	sub_82086968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x822577C4;
	sub_82086968(ctx, base);
loc_822577C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822577CC"))) PPC_WEAK_FUNC(sub_822577CC);
PPC_FUNC_IMPL(__imp__sub_822577CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822577D0"))) PPC_WEAK_FUNC(sub_822577D0);
PPC_FUNC_IMPL(__imp__sub_822577D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82257828
	if (ctx.cr6.eq) goto loc_82257828;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82257828
	if (!ctx.cr6.gt) goto loc_82257828;
loc_822577F4:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82257810
	if (!ctx.cr6.gt) goto loc_82257810;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822577f4
	if (!ctx.cr6.eq) goto loc_822577F4;
	// blr 
	return;
loc_82257810:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_82257828:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82257840"))) PPC_WEAK_FUNC(sub_82257840);
PPC_FUNC_IMPL(__imp__sub_82257840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82257848;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// twllei r10,0
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82257894
	if (ctx.cr6.eq) goto loc_82257894;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8241dd2c
	ctx.lr = 0x82257894;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82257894:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257940
	if (!ctx.cr6.eq) goto loc_82257940;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822578b4
	if (ctx.cr6.eq) goto loc_822578B4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x822578B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822578B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// lwz r4,17916(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17916);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82086c98
	ctx.lr = 0x822578D0;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822578e0
	if (!ctx.cr0.eq) goto loc_822578E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822579b4
	goto loc_822579B4;
loc_822578E0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822578f4
	if (ctx.cr6.eq) goto loc_822578F4;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8241dd2c
	ctx.lr = 0x822578F4;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_822578F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257940
	if (ctx.cr0.eq) goto loc_82257940;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8225791C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bdnz 0x8225791c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225791C;
loc_82257940:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82248f70
	ctx.lr = 0x8225795C;
	sub_82248F70(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225798c
	if (ctx.cr6.eq) goto loc_8225798C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8225798C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822579a0
	if (ctx.cr6.eq) goto loc_822579A0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x822579A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822579A0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822579b4
	if (!ctx.cr6.eq) goto loc_822579B4;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
loc_822579B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822579BC"))) PPC_WEAK_FUNC(sub_822579BC);
PPC_FUNC_IMPL(__imp__sub_822579BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822579C0"))) PPC_WEAK_FUNC(sub_822579C0);
PPC_FUNC_IMPL(__imp__sub_822579C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822579C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// twllei r10,0
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82257a18
	if (ctx.cr6.eq) goto loc_82257A18;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8241dd2c
	ctx.lr = 0x82257A18;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82257A18:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257a94
	if (ctx.cr6.eq) goto loc_82257A94;
loc_82257A2C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82257a48
	if (ctx.cr6.eq) goto loc_82257A48;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257a2c
	if (!ctx.cr6.eq) goto loc_82257A2C;
loc_82257A48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257a94
	if (ctx.cr6.eq) goto loc_82257A94;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82257a64
	if (!ctx.cr6.eq) goto loc_82257A64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x82257a6c
	goto loc_82257A6C;
loc_82257A64:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82257A6C:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82257a94
	if (ctx.cr6.eq) goto loc_82257A94;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne 0x82257a94
	if (!ctx.cr0.eq) goto loc_82257A94;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82257A94:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257aa8
	if (ctx.cr6.eq) goto loc_82257AA8;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x82257AA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82257AA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82257AB0"))) PPC_WEAK_FUNC(sub_82257AB0);
PPC_FUNC_IMPL(__imp__sub_82257AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82257AB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// twllei r10,0
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq cr6,0x82257b04
	if (ctx.cr6.eq) goto loc_82257B04;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8241dd2c
	ctx.lr = 0x82257B04;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82257B04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82257b24
	goto loc_82257B24;
loc_82257B14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82257b4c
	if (ctx.cr6.eq) goto loc_82257B4C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82257B24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82257b14
	if (!ctx.cr6.eq) goto loc_82257B14;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257b40
	if (ctx.cr6.eq) goto loc_82257B40;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x82257B40;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82257B40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82257B44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82257B4C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257b64
	if (ctx.cr6.eq) goto loc_82257B64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82257B64:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257b78
	if (ctx.cr6.eq) goto loc_82257B78;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x82257B78;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82257B78:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82257b44
	if (!ctx.cr6.eq) goto loc_82257B44;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// b 0x82257b44
	goto loc_82257B44;
}

__attribute__((alias("__imp__sub_82257B90"))) PPC_WEAK_FUNC(sub_82257B90);
PPC_FUNC_IMPL(__imp__sub_82257B90) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257c1c
	if (ctx.cr6.eq) goto loc_82257C1C;
	// lwz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r30,r4,-12
	ctx.r30.s64 = ctx.r4.s64 + -12;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82257c00
	if (!ctx.cr6.eq) goto loc_82257C00;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257bdc
	if (ctx.cr6.eq) goto loc_82257BDC;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8241dd2c
	ctx.lr = 0x82257BDC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82257BDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x82257c1c
	if (ctx.cr6.eq) goto loc_82257C1C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x82257BFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82257c1c
	goto loc_82257C1C;
loc_82257C00:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82257c00
	if (!ctx.cr0.eq) goto loc_82257C00;
loc_82257C1C:
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

__attribute__((alias("__imp__sub_82257C34"))) PPC_WEAK_FUNC(sub_82257C34);
PPC_FUNC_IMPL(__imp__sub_82257C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257C38"))) PPC_WEAK_FUNC(sub_82257C38);
PPC_FUNC_IMPL(__imp__sub_82257C38) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257c68
	if (ctx.cr6.eq) goto loc_82257C68;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8241dd2c
	ctx.lr = 0x82257C68;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82257C68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257c88
	if (ctx.cr6.eq) goto loc_82257C88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82257c88
	if (ctx.cr6.eq) goto loc_82257C88;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x82257cd8
	goto loc_82257CD8;
loc_82257C88:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82257C90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82257cb0
	if (!ctx.cr6.eq) goto loc_82257CB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82257cd4
	if (!ctx.cr6.lt) goto loc_82257CD4;
loc_82257CB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82257cdc
	if (!ctx.cr6.eq) goto loc_82257CDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82257c90
	goto loc_82257C90;
loc_82257CD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82257CD8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82257CDC:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257cf0
	if (ctx.cr6.eq) goto loc_82257CF0;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8241dd3c
	ctx.lr = 0x82257CF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82257CF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257d3c
	if (ctx.cr6.eq) goto loc_82257D3C;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82257d14
	if (!ctx.cr6.eq) goto loc_82257D14;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x82257d40
	if (ctx.cr6.eq) goto loc_82257D40;
loc_82257D14:
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82257D1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82257d1c
	if (!ctx.cr0.eq) goto loc_82257D1C;
	// b 0x82257d40
	goto loc_82257D40;
loc_82257D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82257D40:
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

__attribute__((alias("__imp__sub_82257D58"))) PPC_WEAK_FUNC(sub_82257D58);
PPC_FUNC_IMPL(__imp__sub_82257D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82257D60;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82257D8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257ab0
	ctx.lr = 0x82257D98;
	sub_82257AB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82257db8
	if (ctx.cr0.eq) goto loc_82257DB8;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82257db0
	if (!ctx.cr6.eq) goto loc_82257DB0;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82257DB0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x82257DB8;
	sub_82257B90(ctx, base);
loc_82257DB8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82257DC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82257dd8
	if (!ctx.cr6.eq) goto loc_82257DD8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x82257dfc
	goto loc_82257DFC;
loc_82257DD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82257DFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82257E04"))) PPC_WEAK_FUNC(sub_82257E04);
PPC_FUNC_IMPL(__imp__sub_82257E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257E08"))) PPC_WEAK_FUNC(sub_82257E08);
PPC_FUNC_IMPL(__imp__sub_82257E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82257E10;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82257E3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257ab0
	ctx.lr = 0x82257E48;
	sub_82257AB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82257e68
	if (ctx.cr0.eq) goto loc_82257E68;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82257e60
	if (!ctx.cr6.eq) goto loc_82257E60;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82257E60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x82257E68;
	sub_82257B90(ctx, base);
loc_82257E68:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82257E74;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82257e88
	if (!ctx.cr6.eq) goto loc_82257E88;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x82257eac
	goto loc_82257EAC;
loc_82257E88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82257EAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82257EB4"))) PPC_WEAK_FUNC(sub_82257EB4);
PPC_FUNC_IMPL(__imp__sub_82257EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257EB8"))) PPC_WEAK_FUNC(sub_82257EB8);
PPC_FUNC_IMPL(__imp__sub_82257EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82257EC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82257EEC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257ab0
	ctx.lr = 0x82257EF8;
	sub_82257AB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82257f18
	if (ctx.cr0.eq) goto loc_82257F18;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82257f10
	if (!ctx.cr6.eq) goto loc_82257F10;
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82257F10:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x82257F18;
	sub_82257B90(ctx, base);
loc_82257F18:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82257F24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82257f38
	if (!ctx.cr6.eq) goto loc_82257F38;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x82257f5c
	goto loc_82257F5C;
loc_82257F38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257F5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82257F5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82257F64"))) PPC_WEAK_FUNC(sub_82257F64);
PPC_FUNC_IMPL(__imp__sub_82257F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257F68"))) PPC_WEAK_FUNC(sub_82257F68);
PPC_FUNC_IMPL(__imp__sub_82257F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257f9c
	if (ctx.cr6.eq) goto loc_82257F9C;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
loc_82257F7C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82257fa4
	if (ctx.cr6.eq) goto loc_82257FA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257f7c
	if (!ctx.cr6.eq) goto loc_82257F7C;
loc_82257F9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82257FA4:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82257FB4"))) PPC_WEAK_FUNC(sub_82257FB4);
PPC_FUNC_IMPL(__imp__sub_82257FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82257FB8"))) PPC_WEAK_FUNC(sub_82257FB8);
PPC_FUNC_IMPL(__imp__sub_82257FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82257FC0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82258000
	if (!ctx.cr6.eq) goto loc_82258000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82257FE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82257fe4
	if (!ctx.cr6.eq) goto loc_82257FE4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82258000:
	// add r27,r31,r4
	ctx.r27.u64 = ctx.r31.u64 + ctx.r4.u64;
	// b 0x82258098
	goto loc_82258098;
loc_82258008:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,42
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 42, ctx.xer);
	// bne cr6,0x82258058
	if (!ctx.cr6.eq) goto loc_82258058;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822580b0
	if (ctx.cr6.eq) goto loc_822580B0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x822580b8
	if (!ctx.cr6.eq) goto loc_822580B8;
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82257f68
	ctx.lr = 0x82258044;
	sub_82257F68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822580b8
	if (ctx.cr0.eq) goto loc_822580B8;
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x82258098
	goto loc_82258098;
loc_82258058:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822580b8
	if (ctx.cr6.eq) goto loc_822580B8;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// cmpwi cr6,r30,63
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 63, ctx.xer);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// beq cr6,0x82258098
	if (ctx.cr6.eq) goto loc_82258098;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x82258084;
	sub_8224B118(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224b118
	ctx.lr = 0x82258090;
	sub_8224B118(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822580b8
	if (!ctx.cr6.eq) goto loc_822580B8;
loc_82258098:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82258008
	if (ctx.cr6.lt) goto loc_82258008;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_822580A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822580B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822580a8
	goto loc_822580A8;
loc_822580B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822580a8
	goto loc_822580A8;
}

__attribute__((alias("__imp__sub_822580C0"))) PPC_WEAK_FUNC(sub_822580C0);
PPC_FUNC_IMPL(__imp__sub_822580C0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82257f68
	ctx.lr = 0x822580E8;
	sub_82257F68(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_822580F0:
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82257f68
	ctx.lr = 0x82258100;
	sub_82257F68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822580f0
	if (!ctx.cr0.eq) goto loc_822580F0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,46
	ctx.r5.s64 = 46;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// bl 0x82257f68
	ctx.lr = 0x82258134;
	sub_82257F68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225814c
	if (ctx.cr0.eq) goto loc_8225814C;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// b 0x82258154
	goto loc_82258154;
loc_8225814C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
loc_82258154:
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258168"))) PPC_WEAK_FUNC(sub_82258168);
PPC_FUNC_IMPL(__imp__sub_82258168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82258170;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82258200
	if (!ctx.cr6.lt) goto loc_82258200;
	// lis r26,-32187
	ctx.r26.s64 = -2109407232;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,17916(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x822581A0;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822581b0
	if (!ctx.cr0.eq) goto loc_822581B0;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82258204
	goto loc_82258204;
loc_822581B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x822581D0;
	sub_82248F70(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82087ab0
	ctx.lr = 0x822581E4;
	sub_82087AB0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822581f8
	if (ctx.cr6.eq) goto loc_822581F8;
	// lwz r4,17916(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x822581F8;
	sub_82086968(ctx, base);
loc_822581F8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_82258200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82258204:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8225820C"))) PPC_WEAK_FUNC(sub_8225820C);
PPC_FUNC_IMPL(__imp__sub_8225820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258210"))) PPC_WEAK_FUNC(sub_82258210);
PPC_FUNC_IMPL(__imp__sub_82258210) {
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
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x82258238;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225824C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82088758
	ctx.lr = 0x82258254;
	sub_82088758(ctx, base);
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

__attribute__((alias("__imp__sub_8225826C"))) PPC_WEAK_FUNC(sub_8225826C);
PPC_FUNC_IMPL(__imp__sub_8225826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258270"))) PPC_WEAK_FUNC(sub_82258270);
PPC_FUNC_IMPL(__imp__sub_82258270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r3,r4,-20
	ctx.r3.s64 = ctx.r4.s64 + -20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82258280"))) PPC_WEAK_FUNC(sub_82258280);
PPC_FUNC_IMPL(__imp__sub_82258280) {
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
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x822582A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x822582D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82088758
	ctx.lr = 0x822582DC;
	sub_82088758(ctx, base);
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

__attribute__((alias("__imp__sub_822582F4"))) PPC_WEAK_FUNC(sub_822582F4);
PPC_FUNC_IMPL(__imp__sub_822582F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822582F8"))) PPC_WEAK_FUNC(sub_822582F8);
PPC_FUNC_IMPL(__imp__sub_822582F8) {
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
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x82258320;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82258374
	if (ctx.cr6.eq) goto loc_82258374;
	// bl 0x82088600
	ctx.lr = 0x8225832C;
	sub_82088600(ctx, base);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// beq cr6,0x8225835c
	if (ctx.cr6.eq) goto loc_8225835C;
	// lis r9,54
	ctx.r9.s64 = 3538944;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r9,r9,61056
	ctx.r9.u64 = ctx.r9.u64 | 61056;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225835c
	if (ctx.cr6.lt) goto loc_8225835C;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x8225839c
	goto loc_8225839C;
loc_8225835C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// b 0x82258394
	goto loc_82258394;
loc_82258374:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82258394:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82088758
	ctx.lr = 0x8225839C;
	sub_82088758(ctx, base);
loc_8225839C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x822583A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_822583BC"))) PPC_WEAK_FUNC(sub_822583BC);
PPC_FUNC_IMPL(__imp__sub_822583BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822583C0"))) PPC_WEAK_FUNC(sub_822583C0);
PPC_FUNC_IMPL(__imp__sub_822583C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822583C8;
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
	// cmplwi cr6,r4,80
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 80, ctx.xer);
	// blt cr6,0x82258490
	if (ctx.cr6.lt) goto loc_82258490;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82258444
	if (ctx.cr6.eq) goto loc_82258444;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x822583F4;
	sub_82248F70(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// rlwinm r9,r10,0,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-64
	ctx.r7.s64 = ctx.r7.s64 + -64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sth r8,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r8.u16);
	// li r11,16
	ctx.r11.s64 = 16;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// li r5,64
	ctx.r5.s64 = 64;
	// sth r7,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r7.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r3,r10,-64
	ctx.r3.s64 = ctx.r10.s64 + -64;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// bl 0x82248f70
	ctx.lr = 0x82258440;
	sub_82248F70(ctx, base);
	// b 0x82258488
	goto loc_82258488;
loc_82258444:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82258490
	if (ctx.cr6.gt) goto loc_82258490;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82258490
	if (!ctx.cr6.eq) goto loc_82258490;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82258490
	if (ctx.cr6.gt) goto loc_82258490;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82258490
	if (!ctx.cr6.lt) goto loc_82258490;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82258490
	if (ctx.cr6.lt) goto loc_82258490;
loc_82258488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82258494
	goto loc_82258494;
loc_82258490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82258494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225849C"))) PPC_WEAK_FUNC(sub_8225849C);
PPC_FUNC_IMPL(__imp__sub_8225849C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822584A0"))) PPC_WEAK_FUNC(sub_822584A0);
PPC_FUNC_IMPL(__imp__sub_822584A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822584A8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lhz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq 0x82258574
	if (ctx.cr0.eq) goto loc_82258574;
loc_822584DC:
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r9,r9,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r9.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r28,r9,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r9.s64;
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sth r28,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r28.u16);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82258518
	if (!ctx.cr6.eq) goto loc_82258518;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x82258548
	goto loc_82258548;
loc_82258518:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258540
	if (ctx.cr6.eq) goto loc_82258540;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258544
	if (ctx.cr6.eq) goto loc_82258544;
	// subf r5,r10,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r27,r5,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r3,r27,r31
	ctx.r3.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bl 0x822497e0
	ctx.lr = 0x8225853C;
	sub_822497E0(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82258540:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82258544:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82258548:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822584dc
	if (ctx.cr6.lt) goto loc_822584DC;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82258574
	if (ctx.cr6.eq) goto loc_82258574;
	// subf r5,r10,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r11,r5,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822497e0
	ctx.lr = 0x82258574;
	sub_822497E0(ctx, base);
loc_82258574:
	// sth r28,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r28.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82258580"))) PPC_WEAK_FUNC(sub_82258580);
PPC_FUNC_IMPL(__imp__sub_82258580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82258588;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822584a0
	ctx.lr = 0x82258598;
	sub_822584A0(ctx, base);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822585c4
	if (!ctx.cr6.gt) goto loc_822585C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225866c
	goto loc_8225866C;
loc_822585C4:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r3,r30,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r30.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x822497e0
	ctx.lr = 0x822585E4;
	sub_822497E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// subf r7,r30,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r7,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r7.u16);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r30,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r30.s64;
	// bl 0x822497e0
	ctx.lr = 0x82258614;
	sub_822497E0(ctx, base);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82258668
	if (ctx.cr0.eq) goto loc_82258668;
loc_82258630:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82258630
	if (ctx.cr6.lt) goto loc_82258630;
loc_82258668:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225866C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82258674"))) PPC_WEAK_FUNC(sub_82258674);
PPC_FUNC_IMPL(__imp__sub_82258674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258678"))) PPC_WEAK_FUNC(sub_82258678);
PPC_FUNC_IMPL(__imp__sub_82258678) {
	PPC_FUNC_PROLOGUE();
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// b 0x822569f0
	sub_822569F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82258680"))) PPC_WEAK_FUNC(sub_82258680);
PPC_FUNC_IMPL(__imp__sub_82258680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822586a8
	if (ctx.cr0.eq) goto loc_822586A8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_822586A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822586B0"))) PPC_WEAK_FUNC(sub_822586B0);
PPC_FUNC_IMPL(__imp__sub_822586B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241de3c
	ctx.lr = 0x822586D4;
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822586e4
	if (!ctx.cr0.lt) goto loc_822586E4;
loc_822586DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822587f8
	goto loc_822587F8;
loc_822586E4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,17928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17928);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_822586F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822586f4
	if (!ctx.cr6.eq) goto loc_822586F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r11.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8241df1c
	ctx.lr = 0x82258760;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82258774
	if (!ctx.cr0.lt) goto loc_82258774;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x82258770;
	__imp__NtClose(ctx, base);
	// b 0x822586dc
	goto loc_822586DC;
loc_82258774:
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r8,r8,17408
	ctx.r8.u64 = ctx.r8.u64 | 17408;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8241e41c
	ctx.lr = 0x822587AC;
	__imp__NtDeviceIoControlFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x822587d0
	if (!ctx.cr6.eq) goto loc_822587D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241dfbc
	ctx.lr = 0x822587CC;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_822587D0:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x822587D8;
	__imp__NtClose(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8241dddc
	ctx.lr = 0x822587E0;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822586dc
	if (ctx.cr6.lt) goto loc_822586DC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_822587F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225880C"))) PPC_WEAK_FUNC(sub_8225880C);
PPC_FUNC_IMPL(__imp__sub_8225880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258810"))) PPC_WEAK_FUNC(sub_82258810);
PPC_FUNC_IMPL(__imp__sub_82258810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82258818;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r30,r8,6228
	ctx.r30.s64 = ctx.r8.s64 + 6228;
	// addi r23,r9,10364
	ctx.r23.s64 = ctx.r9.s64 + 10364;
	// addi r22,r10,4393
	ctx.r22.s64 = ctx.r10.s64 + 4393;
	// addi r26,r11,25216
	ctx.r26.s64 = ctx.r11.s64 + 25216;
loc_82258848:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// std r24,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r24.u64);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82258868;
	__imp__RtlEnterCriticalSection(ctx, base);
	// b 0x822588a8
	goto loc_822588A8;
loc_8225886C:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82258884
	if (ctx.cr6.eq) goto loc_82258884;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82258884:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x82258898;
	sub_82257B90(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x822588bc
	if (!ctx.cr6.eq) goto loc_822588BC;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x822588bc
	if (!ctx.cr6.eq) goto loc_822588BC;
loc_822588A8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82257c38
	ctx.lr = 0x822588B4;
	sub_82257C38(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8225886c
	if (!ctx.cr0.eq) goto loc_8225886C;
loc_822588BC:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x822588C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822589a4
	if (ctx.cr6.eq) goto loc_822589A4;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x822588ec
	if (ctx.cr6.eq) goto loc_822588EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822588EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822588EC:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82258984
	if (ctx.cr6.eq) goto loc_82258984;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8225894c
	if (ctx.cr6.eq) goto loc_8225894C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225894c
	if (ctx.cr6.eq) goto loc_8225894C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82258940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225894c
	if (ctx.cr0.lt) goto loc_8225894C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8225894C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82258984
	if (ctx.cr6.eq) goto loc_82258984;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82258984
	if (ctx.cr6.eq) goto loc_82258984;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82258984:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82258848
	if (ctx.cr6.eq) goto loc_82258848;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822589A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82258848
	goto loc_82258848;
loc_822589A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_822589AC"))) PPC_WEAK_FUNC(sub_822589AC);
PPC_FUNC_IMPL(__imp__sub_822589AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822589B0"))) PPC_WEAK_FUNC(sub_822589B0);
PPC_FUNC_IMPL(__imp__sub_822589B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822589B8;
	sub_8224878C(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// ble cr6,0x822589dc
	if (!ctx.cr6.gt) goto loc_822589DC;
loc_822589D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82258a5c
	goto loc_82258A5C;
loc_822589DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,10376
	ctx.r4.s64 = ctx.r11.s64 + 10376;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82087ab0
	ctx.lr = 0x822589F0;
	sub_82087AB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,102
	ctx.r3.s64 = ctx.r1.s64 + 102;
	// bl 0x82087ab0
	ctx.lr = 0x82258A00;
	sub_82087AB0(ctx, base);
	// addi r11,r1,102
	ctx.r11.s64 = ctx.r1.s64 + 102;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x8241de0c
	ctx.lr = 0x82258A18;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x8241e42c
	ctx.lr = 0x82258A30;
	__imp__XexLoadImageHeaders(ctx, base);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822589d4
	if (ctx.cr6.eq) goto loc_822589D4;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// bl 0x82087ab0
	ctx.lr = 0x82258A58;
	sub_82087AB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82258A5C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82258A64"))) PPC_WEAK_FUNC(sub_82258A64);
PPC_FUNC_IMPL(__imp__sub_82258A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258A68"))) PPC_WEAK_FUNC(sub_82258A68);
PPC_FUNC_IMPL(__imp__sub_82258A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,10284
	ctx.r3.s64 = ctx.r11.s64 + 10284;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822589b0
	ctx.lr = 0x82258A90;
	sub_822589B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82258aa0
	if (ctx.cr0.eq) goto loc_82258AA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82258b00
	goto loc_82258B00;
loc_82258AA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1784);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82258aec
	if (ctx.cr0.eq) goto loc_82258AEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82258ABC:
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lhzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lhz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 44);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82258abc
	if (ctx.cr6.lt) goto loc_82258ABC;
loc_82258AEC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822589b0
	ctx.lr = 0x82258AF8;
	sub_822589B0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82258B00:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82258B14"))) PPC_WEAK_FUNC(sub_82258B14);
PPC_FUNC_IMPL(__imp__sub_82258B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258B18"))) PPC_WEAK_FUNC(sub_82258B18);
PPC_FUNC_IMPL(__imp__sub_82258B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82258B20;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,12
	ctx.r25.s64 = ctx.r3.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82258B3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// rlwinm r6,r29,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r24,4(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82258168
	ctx.lr = 0x82258B58;
	sub_82258168(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82258bc4
	if (!ctx.cr0.eq) goto loc_82258BC4;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82258bc4
	if (ctx.cr6.lt) goto loc_82258BC4;
	// lis r23,-32187
	ctx.r23.s64 = -2109407232;
loc_82258B70:
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r4,17916(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x82258B7C;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82258bbc
	if (ctx.cr0.eq) goto loc_82258BBC;
	// stw r27,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r27.u32);
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82258b70
	if (!ctx.cr6.lt) goto loc_82258B70;
	// b 0x82258bc4
	goto loc_82258BC4;
loc_82258BBC:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r26,8
	ctx.r26.s64 = 8;
loc_82258BC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82258BCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82258BD8"))) PPC_WEAK_FUNC(sub_82258BD8);
PPC_FUNC_IMPL(__imp__sub_82258BD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,10356
	ctx.r4.s64 = ctx.r11.s64 + 10356;
	// bl 0x8241de0c
	ctx.lr = 0x82258C00;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ddfc
	ctx.lr = 0x82258C3C;
	__imp__NtOpenFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82258c78
	if (ctx.cr0.lt) goto loc_82258C78;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8241df6c
	ctx.lr = 0x82258C5C;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,6228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82258C78:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82258c9c
	if (ctx.cr6.lt) goto loc_82258C9C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r11,r9
	ctx.r11.s64 = ctx.r11.s64 * ctx.r9.s64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82258C9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82258CB8"))) PPC_WEAK_FUNC(sub_82258CB8);
PPC_FUNC_IMPL(__imp__sub_82258CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82258CC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,17916(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x82258CDC;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82258cec
	if (!ctx.cr0.eq) goto loc_82258CEC;
loc_82258CE4:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82258d44
	goto loc_82258D44;
loc_82258CEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,17916(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17916);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82086c98
	ctx.lr = 0x82258D08;
	sub_82086C98(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82258d20
	if (!ctx.cr0.eq) goto loc_82258D20;
	// bl 0x82257758
	ctx.lr = 0x82258D1C;
	sub_82257758(ctx, base);
	// b 0x82258ce4
	goto loc_82258CE4;
loc_82258D20:
	// bl 0x8241e07c
	ctx.lr = 0x82258D24;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82258D44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82258D4C"))) PPC_WEAK_FUNC(sub_82258D4C);
PPC_FUNC_IMPL(__imp__sub_82258D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82258D50"))) PPC_WEAK_FUNC(sub_82258D50);
PPC_FUNC_IMPL(__imp__sub_82258D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82258D58;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,6228
	ctx.r26.s64 = ctx.r11.s64 + 6228;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82258D80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82258D88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r25,-16384
	ctx.r25.s64 = -1073741824;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82258ee0
	if (ctx.cr6.eq) goto loc_82258EE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82257480
	ctx.lr = 0x82258DA4;
	sub_82257480(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82258ee0
	if (ctx.cr0.lt) goto loc_82258EE0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82258e6c
	if (!ctx.cr6.eq) goto loc_82258E6C;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r4,17916(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x82258DC8;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82258dd8
	if (!ctx.cr0.eq) goto loc_82258DD8;
	// li r24,8
	ctx.r24.s64 = 8;
	// b 0x82258ec0
	goto loc_82258EC0;
loc_82258DD8:
	// lis r11,-1314
	ctx.r11.s64 = -86114304;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r11,r11,47812
	ctx.r11.u64 = ctx.r11.u64 | 47812;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,1784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1784);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82258e34
	if (ctx.cr6.eq) goto loc_82258E34;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x8241dffc
	ctx.lr = 0x82258E14;
	__imp__RtlImageXexHeaderField(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,549
	ctx.r11.u64 = ctx.r11.u64 | 549;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82258e34
	if (ctx.cr0.lt) goto loc_82258E34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82258e38
	goto loc_82258E38;
loc_82258E34:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82258E38:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82257548
	ctx.lr = 0x82258E4C;
	sub_82257548(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,17916(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x82258E5C;
	sub_82086968(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82258ec0
	if (ctx.cr6.lt) goto loc_82258EC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82258E6C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82258ebc
	if (!ctx.cr6.gt) goto loc_82258EBC;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82258E80:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x82257548
	ctx.lr = 0x82258E98;
	sub_82257548(ctx, base);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82258ebc
	if (ctx.cr6.eq) goto loc_82258EBC;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82258e80
	if (ctx.cr6.lt) goto loc_82258E80;
loc_82258EBC:
	// stw r24,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r24.u32);
loc_82258EC0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82258ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82258EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82258EE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82258EF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// rlwinm r11,r29,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82258f0c
	if (!ctx.cr6.eq) goto loc_82258F0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241df3c
	ctx.lr = 0x82258F08;
	__imp__RtlNtStatusToDosError(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82258F0C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82258F18"))) PPC_WEAK_FUNC(sub_82258F18);
PPC_FUNC_IMPL(__imp__sub_82258F18) {
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
	// bl 0x8241dd2c
	ctx.lr = 0x82258F38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82267188
	ctx.lr = 0x82258F50;
	sub_82267188(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// stb r9,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r11,17920(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17920);
	// divdu r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 / ctx.r10.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822577d0
	ctx.lr = 0x82258F8C;
	sub_822577D0(ctx, base);
	// bl 0x8241dd3c
	ctx.lr = 0x82258F90;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82258FA8"))) PPC_WEAK_FUNC(sub_82258FA8);
PPC_FUNC_IMPL(__imp__sub_82258FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82258FB0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,6228
	ctx.r28.s64 = ctx.r11.s64 + 6228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x82258FD0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82258FD8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r9,-4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + -4);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82259034
	if (ctx.cr0.eq) goto loc_82259034;
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
loc_82259010:
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82259034
	if (ctx.cr6.eq) goto loc_82259034;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82259010
	if (ctx.cr6.lt) goto loc_82259010;
loc_82259034:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x82257480
	ctx.lr = 0x82259040;
	sub_82257480(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225907c
	if (ctx.cr0.lt) goto loc_8225907C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82257548
	ctx.lr = 0x8225905C;
	sub_82257548(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8225907C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82259084;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82259090;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82259098"))) PPC_WEAK_FUNC(sub_82259098);
PPC_FUNC_IMPL(__imp__sub_82259098) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822590d4
	if (ctx.cr6.eq) goto loc_822590D4;
	// bl 0x8241dd2c
	ctx.lr = 0x822590C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r11.u16);
	// bl 0x8241dd3c
	ctx.lr = 0x822590D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822590D4:
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

__attribute__((alias("__imp__sub_822590EC"))) PPC_WEAK_FUNC(sub_822590EC);
PPC_FUNC_IMPL(__imp__sub_822590EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822590F0"))) PPC_WEAK_FUNC(sub_822590F0);
PPC_FUNC_IMPL(__imp__sub_822590F0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82259130
	if (ctx.cr6.eq) goto loc_82259130;
	// bl 0x8241dd2c
	ctx.lr = 0x82259118;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r11.u16);
	// bl 0x8241dd3c
	ctx.lr = 0x82259130;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82259130:
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

__attribute__((alias("__imp__sub_82259148"))) PPC_WEAK_FUNC(sub_82259148);
PPC_FUNC_IMPL(__imp__sub_82259148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82259150;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82259164;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259234
	if (ctx.cr6.eq) goto loc_82259234;
	// li r22,0
	ctx.r22.s64 = 0;
loc_82259178:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r31,r22,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82259224
	if (ctx.cr0.eq) goto loc_82259224;
loc_82259190:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r29,r11,20
	ctx.r29.s64 = ctx.r11.s64 + 20;
	// addi r28,r9,-1
	ctx.r28.s64 = ctx.r9.s64 + -1;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// bl 0x8241dd3c
	ctx.lr = 0x822591E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x822591F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82259240
	if (!ctx.cr0.eq) goto loc_82259240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82259208;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82259224
	if (!ctx.cr6.lt) goto loc_82259224;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82259190
	if (ctx.cr6.lt) goto loc_82259190;
loc_82259224:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259178
	if (ctx.cr6.lt) goto loc_82259178;
loc_82259234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225923C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82259240:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82259248"))) PPC_WEAK_FUNC(sub_82259248);
PPC_FUNC_IMPL(__imp__sub_82259248) {
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
	// bl 0x8241dd2c
	ctx.lr = 0x82259268;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8225926C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8225929c
	if (!ctx.cr6.eq) goto loc_8225929C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8225928c
	if (!ctx.cr6.eq) goto loc_8225928C;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82259294
	goto loc_82259294;
loc_8225928C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82259294:
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x822592a4
	goto loc_822592A4;
loc_8225929C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822592A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822592dc
	if (!ctx.cr6.lt) goto loc_822592DC;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82259304
	if (ctx.cr6.lt) goto loc_82259304;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8225926c
	goto loc_8225926C;
loc_822592DC:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_822592E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822592E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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
loc_82259304:
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82259098
	ctx.lr = 0x8225933C;
	sub_82259098(ctx, base);
	// b 0x822592e0
	goto loc_822592E0;
}

__attribute__((alias("__imp__sub_82259340"))) PPC_WEAK_FUNC(sub_82259340);
PPC_FUNC_IMPL(__imp__sub_82259340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82259348;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82257ab0
	ctx.lr = 0x82259380;
	sub_82257AB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822593d0
	if (!ctx.cr0.eq) goto loc_822593D0;
	// li r10,3072
	ctx.r10.s64 = 3072;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// divwu r10,r30,r10
	ctx.r10.u32 = ctx.r30.u32 / ctx.r10.u32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822582f8
	ctx.lr = 0x8225939C;
	sub_822582F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822593A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822593CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225959c
	goto loc_8225959C;
loc_822593D0:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x822593DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822593f8
	if (!ctx.cr6.eq) goto loc_822593F8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822593f8
	if (!ctx.cr6.eq) goto loc_822593F8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822593f8
	if (!ctx.cr6.eq) goto loc_822593F8;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_822593F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r30,1023
	ctx.r10.s64 = ctx.r30.s64 + 1023;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// stb r9,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r9.u8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82259430
	if (ctx.cr6.lt) goto loc_82259430;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82259430:
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822594ac
	if (!ctx.cr6.eq) goto loc_822594AC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// li r7,3072
	ctx.r7.s64 = 3072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// divwu r11,r30,r7
	ctx.r11.u32 = ctx.r30.u32 / ctx.r7.u32;
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822582f8
	ctx.lr = 0x82259474;
	sub_822582F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82257b90
	ctx.lr = 0x82259484;
	sub_82257B90(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82259490;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x822594a4
	if (!ctx.cr6.eq) goto loc_822594A4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x8225959c
	goto loc_8225959C;
loc_822594A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x822593a0
	goto loc_822593A0;
loc_822594AC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// bl 0x822582f8
	ctx.lr = 0x822594D0;
	sub_822582F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x822594DC;
	sub_82257B90(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x822594E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,25216
	ctx.r27.s64 = ctx.r11.s64 + 25216;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259544
	if (ctx.cr6.eq) goto loc_82259544;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,4393
	ctx.r6.s64 = ctx.r10.s64 + 4393;
	// addi r3,r9,10364
	ctx.r3.s64 = ctx.r9.s64 + 10364;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	ctx.lr = 0x82259538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82259544
	if (ctx.cr0.lt) goto loc_82259544;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82259544:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82259598
	if (ctx.cr6.eq) goto loc_82259598;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82259598
	if (ctx.cr6.eq) goto loc_82259598;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82259598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8225959C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_822595A4"))) PPC_WEAK_FUNC(sub_822595A4);
PPC_FUNC_IMPL(__imp__sub_822595A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822595A8"))) PPC_WEAK_FUNC(sub_822595A8);
PPC_FUNC_IMPL(__imp__sub_822595A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x822595B0;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822595E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257ab0
	ctx.lr = 0x822595F4;
	sub_82257AB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82259650
	if (!ctx.cr0.eq) goto loc_82259650;
	// li r10,3072
	ctx.r10.s64 = 3072;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// divwu r10,r30,r10
	ctx.r10.u32 = ctx.r30.u32 / ctx.r10.u32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822582f8
	ctx.lr = 0x82259610;
	sub_822582F8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225961C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82259620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225964C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822597d0
	goto loc_822597D0;
loc_82259650:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8225966c
	if (!ctx.cr6.eq) goto loc_8225966C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8225966c
	if (!ctx.cr6.eq) goto loc_8225966C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8225966c
	if (!ctx.cr6.eq) goto loc_8225966C;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_8225966C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822596e0
	if (!ctx.cr6.eq) goto loc_822596E0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// li r7,3072
	ctx.r7.s64 = 3072;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// divwu r11,r30,r7
	ctx.r11.u32 = ctx.r30.u32 / ctx.r7.u32;
	// std r10,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r10.u64);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822582f8
	ctx.lr = 0x822596A8;
	sub_822582F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82257b90
	ctx.lr = 0x822596B8;
	sub_82257B90(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x822596C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x822596d8
	if (!ctx.cr6.eq) goto loc_822596D8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x822597d0
	goto loc_822597D0;
loc_822596D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82259620
	goto loc_82259620;
loc_822596E0:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// bl 0x822582f8
	ctx.lr = 0x82259704;
	sub_822582F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x82259710;
	sub_82257B90(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225971C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,25216
	ctx.r27.s64 = ctx.r11.s64 + 25216;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259778
	if (ctx.cr6.eq) goto loc_82259778;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,4393
	ctx.r6.s64 = ctx.r10.s64 + 4393;
	// addi r3,r9,10364
	ctx.r3.s64 = ctx.r9.s64 + 10364;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bctrl 
	ctx.lr = 0x8225976C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82259778
	if (ctx.cr0.lt) goto loc_82259778;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82259778:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822597A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822597cc
	if (ctx.cr6.eq) goto loc_822597CC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822597cc
	if (ctx.cr6.eq) goto loc_822597CC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822597CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822597CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822597D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_822597D8"))) PPC_WEAK_FUNC(sub_822597D8);
PPC_FUNC_IMPL(__imp__sub_822597D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822597E0;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r27,-1
	ctx.r27.s64 = -1;
	// bl 0x82257f68
	ctx.lr = 0x8225980C;
	sub_82257F68(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82259830
	if (ctx.cr6.eq) goto loc_82259830;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82259830
	if (!ctx.cr6.eq) goto loc_82259830;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82259830:
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// b 0x8225985c
	goto loc_8225985C;
loc_82259838:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x8225984C;
	sub_8224B118(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mulli r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 * 17;
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
loc_8225985C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82259838
	if (!ctx.cr6.eq) goto loc_82259838;
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822598b0
	if (!ctx.cr6.lt) goto loc_822598B0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x822598b4
	if (!ctx.cr6.eq) goto loc_822598B4;
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r30,r8,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r8.s64;
	// b 0x822598b4
	goto loc_822598B4;
loc_822598B0:
	// li r4,16
	ctx.r4.s64 = 16;
loc_822598B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822598e8
	if (ctx.cr6.gt) goto loc_822598E8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82259934
	if (ctx.cr6.eq) goto loc_82259934;
loc_822598E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82259908
	if (ctx.cr6.eq) goto loc_82259908;
	// bl 0x82258580
	ctx.lr = 0x822598F8;
	sub_82258580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225990c
	if (!ctx.cr0.eq) goto loc_8225990C;
loc_82259900:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822599f4
	goto loc_822599F4;
loc_82259908:
	// bl 0x822584a0
	ctx.lr = 0x8225990C;
	sub_822584A0(ctx, base);
loc_8225990C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82259900
	if (ctx.cr6.gt) goto loc_82259900;
loc_82259934:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// bne cr6,0x82259958
	if (!ctx.cr6.eq) goto loc_82259958;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
loc_82259958:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// bl 0x82087ab0
	ctx.lr = 0x822599A8;
	sub_82087AB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// sth r8,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// bl 0x82248f70
	ctx.lr = 0x822599E4;
	sub_82248F70(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_822599F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822599FC"))) PPC_WEAK_FUNC(sub_822599FC);
PPC_FUNC_IMPL(__imp__sub_822599FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259A00"))) PPC_WEAK_FUNC(sub_82259A00);
PPC_FUNC_IMPL(__imp__sub_82259A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82259A08;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x82257f68
	ctx.lr = 0x82259A38;
	sub_82257F68(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82259a5c
	if (ctx.cr6.eq) goto loc_82259A5C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82259a5c
	if (!ctx.cr6.eq) goto loc_82259A5C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82259A5C:
	// clrlwi r29,r31,24
	ctx.r29.u64 = ctx.r31.u32 & 0xFF;
	// b 0x82259a88
	goto loc_82259A88;
loc_82259A64:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8224b118
	ctx.lr = 0x82259A78;
	sub_8224B118(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mulli r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 * 17;
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
loc_82259A88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82259a64
	if (!ctx.cr6.eq) goto loc_82259A64;
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82259be8
	if (!ctx.cr6.lt) goto loc_82259BE8;
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
loc_82259AA4:
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82259bd8
	if (!ctx.cr6.eq) goto loc_82259BD8;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x82259b94
	if (ctx.cr6.eq) goto loc_82259B94;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bne cr6,0x82259b18
	if (!ctx.cr6.eq) goto loc_82259B18;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241e40c
	ctx.lr = 0x82259B10;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82259bf4
	if (ctx.cr0.eq) goto loc_82259BF4;
loc_82259B18:
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82257f68
	ctx.lr = 0x82259B28;
	sub_82257F68(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82257f68
	ctx.lr = 0x82259B34;
	sub_82257F68(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82259b58
	if (ctx.cr6.eq) goto loc_82259B58;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82259b58
	if (!ctx.cr6.eq) goto loc_82259B58;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82259B58:
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82259b7c
	if (ctx.cr6.eq) goto loc_82259B7C;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82259b7c
	if (!ctx.cr6.eq) goto loc_82259B7C;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82259B7C:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82259bd8
	if (!ctx.cr6.eq) goto loc_82259BD8;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8241e40c
	ctx.lr = 0x82259B8C;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x82259bd4
	goto loc_82259BD4;
loc_82259B94:
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82259bd8
	if (!ctx.cr6.eq) goto loc_82259BD8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq 0x82259bd0
	if (ctx.cr0.eq) goto loc_82259BD0;
	// add r9,r25,r26
	ctx.r9.u64 = ctx.r25.u64 + ctx.r26.u64;
loc_82259BB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82259bd0
	if (!ctx.cr0.eq) goto loc_82259BD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82259bb0
	if (!ctx.cr6.eq) goto loc_82259BB0;
loc_82259BD0:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82259BD4:
	// beq 0x82259bf4
	if (ctx.cr0.eq) goto loc_82259BF4;
loc_82259BD8:
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259aa4
	if (ctx.cr6.lt) goto loc_82259AA4;
loc_82259BE8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82259BEC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82259BF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82259bec
	goto loc_82259BEC;
}

__attribute__((alias("__imp__sub_82259BFC"))) PPC_WEAK_FUNC(sub_82259BFC);
PPC_FUNC_IMPL(__imp__sub_82259BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259C00"))) PPC_WEAK_FUNC(sub_82259C00);
PPC_FUNC_IMPL(__imp__sub_82259C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82259C08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82259c24
	if (ctx.cr0.eq) goto loc_82259C24;
loc_82259C1C:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82259d58
	goto loc_82259D58;
loc_82259C24:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82259c1c
	if (ctx.cr6.eq) goto loc_82259C1C;
	// rlwinm r29,r30,0,28,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// beq cr6,0x82259c1c
	if (ctx.cr6.eq) goto loc_82259C1C;
	// rlwinm r28,r30,0,24,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r28,192
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 192, ctx.xer);
	// beq cr6,0x82259c1c
	if (ctx.cr6.eq) goto loc_82259C1C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82259c1c
	if (ctx.cr6.eq) goto loc_82259C1C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259d54
	if (ctx.cr6.eq) goto loc_82259D54;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x82259C6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259c88
	if (ctx.cr6.eq) goto loc_82259C88;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_82259C88:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82259d14
	if (ctx.cr0.eq) goto loc_82259D14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82259d14
	if (!ctx.cr6.eq) goto loc_82259D14;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x8241dd2c
	ctx.lr = 0x82259CAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bl 0x82088758
	ctx.lr = 0x82259CD4;
	sub_82088758(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82259CDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x82259CE4;
	sub_82258210(ctx, base);
loc_82259CE4:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
loc_82259CE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82259cfc
	if (ctx.cr6.eq) goto loc_82259CFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
loc_82259CFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82259d4c
	if (ctx.cr6.eq) goto loc_82259D4C;
	// rlwinm. r10,r30,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82259d44
	if (ctx.cr0.eq) goto loc_82259D44;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x82259d48
	goto loc_82259D48;
loc_82259D14:
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82259ce4
	if (ctx.cr0.eq) goto loc_82259CE4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259d34
	if (ctx.cr6.eq) goto loc_82259D34;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_82259D34:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// b 0x82259ce8
	goto loc_82259CE8;
loc_82259D44:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82259D48:
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_82259D4C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82259D54;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82259D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82259D58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82259D60"))) PPC_WEAK_FUNC(sub_82259D60);
PPC_FUNC_IMPL(__imp__sub_82259D60) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82259d88
	if (!ctx.cr6.eq) goto loc_82259D88;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82259df8
	goto loc_82259DF8;
loc_82259D88:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259de4
	if (ctx.cr6.eq) goto loc_82259DE4;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x82259DA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x82087ab0
	ctx.lr = 0x82259DB4;
	sub_82087AB0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82248f70
	ctx.lr = 0x82259DC4;
	sub_82248F70(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-31104
	ctx.r4.s64 = ctx.r11.s64 + -31104;
	// bl 0x82259148
	ctx.lr = 0x82259DD8;
	sub_82259148(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x82259DE0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82259df4
	goto loc_82259DF4;
loc_82259DE4:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248f70
	ctx.lr = 0x82259DF4;
	sub_82248F70(ctx, base);
loc_82259DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82259DF8:
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

__attribute__((alias("__imp__sub_82259E10"))) PPC_WEAK_FUNC(sub_82259E10);
PPC_FUNC_IMPL(__imp__sub_82259E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82259E18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259e6c
	if (ctx.cr6.eq) goto loc_82259E6C;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x82259E40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259e5c
	if (ctx.cr6.eq) goto loc_82259E5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_82259E5C:
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82259E6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82259E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82259E74"))) PPC_WEAK_FUNC(sub_82259E74);
PPC_FUNC_IMPL(__imp__sub_82259E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82259E78"))) PPC_WEAK_FUNC(sub_82259E78);
PPC_FUNC_IMPL(__imp__sub_82259E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82259E80;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82259ef0
	if (ctx.cr6.eq) goto loc_82259EF0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82259f10
	if (ctx.cr6.eq) goto loc_82259F10;
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// bne cr6,0x82259ee0
	if (!ctx.cr6.eq) goto loc_82259EE0;
loc_82259EC0:
	// bl 0x82088758
	ctx.lr = 0x82259EC4;
	sub_82088758(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82088648
	ctx.lr = 0x82259ECC;
	sub_82088648(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82259ec0
	if (ctx.cr6.eq) goto loc_82259EC0;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82259EE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
loc_82259EF0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82259f10
	if (ctx.cr6.eq) goto loc_82259F10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_82259F10:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82259f28
	if (ctx.cr6.eq) goto loc_82259F28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82259F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x82258810
	ctx.lr = 0x82259F40;
	sub_82258810(ctx, base);
	// lis r29,-32187
	ctx.r29.s64 = -2109407232;
	// b 0x82259f60
	goto loc_82259F60;
loc_82259F48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82086968
	ctx.lr = 0x82259F60;
	sub_82086968(ctx, base);
loc_82259F60:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82259f48
	if (!ctx.cr6.eq) goto loc_82259F48;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82259fd8
	if (ctx.cr6.eq) goto loc_82259FD8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82259fb8
	if (!ctx.cr6.gt) goto loc_82259FB8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82259F94:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82086968
	ctx.lr = 0x82259FA4;
	sub_82086968(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82259f94
	if (ctx.cr6.lt) goto loc_82259F94;
loc_82259FB8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82259fcc
	if (ctx.cr6.eq) goto loc_82259FCC;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x82259FCC;
	sub_82086968(ctx, base);
loc_82259FCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x82259FD8;
	sub_82086968(ctx, base);
loc_82259FD8:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82259fec
	if (ctx.cr6.eq) goto loc_82259FEC;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x82259FEC;
	sub_82086968(ctx, base);
loc_82259FEC:
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225a000
	if (ctx.cr6.eq) goto loc_8225A000;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225A000;
	sub_82086968(ctx, base);
loc_8225A000:
	// lwz r30,288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225a070
	if (ctx.cr6.eq) goto loc_8225A070;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8225a04c
	if (!ctx.cr6.gt) goto loc_8225A04C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8225A024:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82086968
	ctx.lr = 0x8225A034;
	sub_82086968(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225a024
	if (ctx.cr6.lt) goto loc_8225A024;
	// lwz r30,288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
loc_8225A04C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225a064
	if (ctx.cr6.eq) goto loc_8225A064;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225A060;
	sub_82086968(ctx, base);
	// lwz r30,288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
loc_8225A064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225A070;
	sub_82086968(ctx, base);
loc_8225A070:
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225a0e0
	if (ctx.cr6.eq) goto loc_8225A0E0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8225a0bc
	if (!ctx.cr6.gt) goto loc_8225A0BC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8225A094:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82086968
	ctx.lr = 0x8225A0A4;
	sub_82086968(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225a094
	if (ctx.cr6.lt) goto loc_8225A094;
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
loc_8225A0BC:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225a0d4
	if (ctx.cr6.eq) goto loc_8225A0D4;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225A0D0;
	sub_82086968(ctx, base);
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
loc_8225A0D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225A0E0;
	sub_82086968(ctx, base);
loc_8225A0E0:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8225a0fc
	goto loc_8225A0FC;
loc_8225A0E8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x82086968
	ctx.lr = 0x8225A0FC;
	sub_82086968(ctx, base);
loc_8225A0FC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225a0e8
	if (!ctx.cr6.eq) goto loc_8225A0E8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82257758
	ctx.lr = 0x8225A110;
	sub_82257758(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225a12c
	if (ctx.cr6.eq) goto loc_8225A12C;
	// bl 0x8225efd0
	ctx.lr = 0x8225A120;
	sub_8225EFD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225A12C;
	sub_82086968(ctx, base);
loc_8225A12C:
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// addi r10,r11,-4704
	ctx.r10.s64 = ctx.r11.s64 + -4704;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 624);
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,7336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7336, ctx.r10.u32);
	// stw r11,624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 624, ctx.r11.u32);
	// bl 0x82248f70
	ctx.lr = 0x8225A15C;
	sub_82248F70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8225A164"))) PPC_WEAK_FUNC(sub_8225A164);
PPC_FUNC_IMPL(__imp__sub_8225A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A168"))) PPC_WEAK_FUNC(sub_8225A168);
PPC_FUNC_IMPL(__imp__sub_8225A168) {
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
	// bne cr6,0x8225a190
	if (!ctx.cr6.eq) goto loc_8225A190;
	// bl 0x82258810
	ctx.lr = 0x8225A180;
	sub_82258810(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,6232
	ctx.r10.s64 = ctx.r10.s64 + 6232;
	// stw r11,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r11.u32);
loc_8225A190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225A1A0"))) PPC_WEAK_FUNC(sub_8225A1A0);
PPC_FUNC_IMPL(__imp__sub_8225A1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8225A1A8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x8225a2b4
	if (!ctx.cr6.lt) goto loc_8225A2B4;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r31,256
	ctx.r9.s64 = ctx.r31.s64 + 256;
	// lis r29,-32187
	ctx.r29.s64 = -2109407232;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8225a230
	if (!ctx.cr6.eq) goto loc_8225A230;
	// li r3,4108
	ctx.r3.s64 = 4108;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225A1F4;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225a234
	if (ctx.cr0.eq) goto loc_8225A234;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x822583c0
	ctx.lr = 0x8225A210;
	sub_822583C0(ctx, base);
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// b 0x8225a234
	goto loc_8225A234;
loc_8225A230:
	// lwz r30,260(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
loc_8225A234:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822597d8
	ctx.lr = 0x8225A244;
	sub_822597D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225a2a8
	if (!ctx.cr0.eq) goto loc_8225A2A8;
	// li r3,4108
	ctx.r3.s64 = 4108;
	// lwz r4,17916(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225A258;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225a290
	if (ctx.cr0.eq) goto loc_8225A290;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x822583c0
	ctx.lr = 0x8225A274;
	sub_822583C0(ctx, base);
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
loc_8225A290:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822597d8
	ctx.lr = 0x8225A2A0;
	sub_822597D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225a2b4
	if (ctx.cr0.eq) goto loc_8225A2B4;
loc_8225A2A8:
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225A2B4;
	sub_82258210(ctx, base);
loc_8225A2B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8225A2BC"))) PPC_WEAK_FUNC(sub_8225A2BC);
PPC_FUNC_IMPL(__imp__sub_8225A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A2C0"))) PPC_WEAK_FUNC(sub_8225A2C0);
PPC_FUNC_IMPL(__imp__sub_8225A2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225A2C8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,6232
	ctx.r30.s64 = ctx.r11.s64 + 6232;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x8225A2FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225a474
	if (ctx.cr6.eq) goto loc_8225A474;
loc_8225A314:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a39c
	if (!ctx.cr0.eq) goto loc_8225A39C;
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a39c
	if (!ctx.cr0.eq) goto loc_8225A39C;
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a39c
	if (!ctx.cr0.eq) goto loc_8225A39C;
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a39c
	if (!ctx.cr0.eq) goto loc_8225A39C;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm. r9,r9,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a39c
	if (!ctx.cr0.eq) goto loc_8225A39C;
	// lbz r9,25(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8225a39c
	if (!ctx.cr6.eq) goto loc_8225A39C;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8225a36c
	if (ctx.cr6.eq) goto loc_8225A36C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8225a36c
	if (!ctx.cr6.eq) goto loc_8225A36C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8225A36C:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpd cr6,r9,r26
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r26.s64, ctx.xer);
	// ble cr6,0x8225a384
	if (!ctx.cr6.gt) goto loc_8225A384;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8225a39c
	goto loc_8225A39C;
loc_8225A384:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225a39c
	if (ctx.cr0.eq) goto loc_8225A39C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8225a398
	if (!ctx.cr6.eq) goto loc_8225A398;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8225A398:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8225A39C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225a314
	if (!ctx.cr6.eq) goto loc_8225A314;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8225a3d8
	if (!ctx.cr6.eq) goto loc_8225A3D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225a45c
	if (ctx.cr6.eq) goto loc_8225A45C;
loc_8225A3BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82259098
	ctx.lr = 0x8225A3C4;
	sub_82259098(ctx, base);
loc_8225A3C4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8225A3C8:
	// bl 0x8241dd3c
	ctx.lr = 0x8225A3CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8225A3D8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225a45c
	if (ctx.cr6.eq) goto loc_8225A45C;
loc_8225A3E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225a44c
	if (!ctx.cr0.eq) goto loc_8225A44C;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225a44c
	if (!ctx.cr0.eq) goto loc_8225A44C;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225a44c
	if (!ctx.cr0.eq) goto loc_8225A44C;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225a44c
	if (!ctx.cr0.eq) goto loc_8225A44C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225a44c
	if (!ctx.cr0.eq) goto loc_8225A44C;
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225a44c
	if (!ctx.cr6.eq) goto loc_8225A44C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// ble cr6,0x8225a43c
	if (!ctx.cr6.gt) goto loc_8225A43C;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8225a44c
	goto loc_8225A44C;
loc_8225A43C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225a3bc
	if (!ctx.cr6.lt) goto loc_8225A3BC;
loc_8225A44C:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225a3e4
	if (!ctx.cr6.eq) goto loc_8225A3E4;
loc_8225A45C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225a474
	if (ctx.cr6.eq) goto loc_8225A474;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82259098
	ctx.lr = 0x8225A46C;
	sub_82259098(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x8225a3c4
	goto loc_8225A3C4;
loc_8225A474:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225a3c8
	if (ctx.cr6.eq) goto loc_8225A3C8;
loc_8225A488:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm. r7,r11,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8225a530
	if (!ctx.cr0.eq) goto loc_8225A530;
	// rlwinm. r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8225a530
	if (!ctx.cr0.eq) goto loc_8225A530;
	// rlwinm. r7,r11,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8225a530
	if (!ctx.cr0.eq) goto loc_8225A530;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225a530
	if (!ctx.cr0.eq) goto loc_8225A530;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225a530
	if (!ctx.cr0.eq) goto loc_8225A530;
	// lbz r11,25(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// clrlwi r7,r25,24
	ctx.r7.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8225a530
	if (!ctx.cr6.eq) goto loc_8225A530;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpd cr6,r11,r26
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r26.s64, ctx.xer);
	// ble cr6,0x8225a4e0
	if (!ctx.cr6.gt) goto loc_8225A4E0;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8225a530
	goto loc_8225A530;
loc_8225A4E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225a508
	if (ctx.cr6.eq) goto loc_8225A508;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lbz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225a508
	if (ctx.cr6.lt) goto loc_8225A508;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8225a50c
	if (!ctx.cr6.lt) goto loc_8225A50C;
loc_8225A508:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8225A50C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8225a52c
	if (ctx.cr6.eq) goto loc_8225A52C;
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8225a530
	if (!ctx.cr6.gt) goto loc_8225A530;
loc_8225A52C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8225A530:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225a488
	if (!ctx.cr6.eq) goto loc_8225A488;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225a3c8
	if (ctx.cr6.eq) goto loc_8225A3C8;
	// lbz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225a55c
	if (!ctx.cr6.eq) goto loc_8225A55C;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_8225A55C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225a3c8
	if (ctx.cr6.eq) goto loc_8225A3C8;
	// b 0x8225a3bc
	goto loc_8225A3BC;
}

__attribute__((alias("__imp__sub_8225A568"))) PPC_WEAK_FUNC(sub_8225A568);
PPC_FUNC_IMPL(__imp__sub_8225A568) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8241dd2c
	ctx.lr = 0x8225A590;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225a5f0
	if (ctx.cr6.eq) goto loc_8225A5F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8225a5bc
	goto loc_8225A5BC;
loc_8225A5AC:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a5d0
	if (!ctx.cr0.eq) goto loc_8225A5D0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8225A5BC:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225a5ac
	if (!ctx.cr6.eq) goto loc_8225A5AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// b 0x8225a5f0
	goto loc_8225A5F0;
loc_8225A5D0:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82259098
	ctx.lr = 0x8225A5F0;
	sub_82259098(ctx, base);
loc_8225A5F0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8241dd3c
	ctx.lr = 0x8225A5F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8225A614"))) PPC_WEAK_FUNC(sub_8225A614);
PPC_FUNC_IMPL(__imp__sub_8225A614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A618"))) PPC_WEAK_FUNC(sub_8225A618);
PPC_FUNC_IMPL(__imp__sub_8225A618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8225A620;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82267188
	ctx.lr = 0x8225A644;
	sub_82267188(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// divdu r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 / ctx.r10.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r11,17920(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r7,r11,6232
	ctx.r7.s64 = ctx.r11.s64 + 6232;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x8225a684
	if (ctx.cr6.eq) goto loc_8225A684;
	// lwz r11,44(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// b 0x8225a748
	goto loc_8225A748;
loc_8225A684:
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// b 0x8225a748
	goto loc_8225A748;
loc_8225A68C:
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r10,r6,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225a728
	if (!ctx.cr0.eq) goto loc_8225A728;
	// rlwinm. r10,r6,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225a728
	if (ctx.cr0.eq) goto loc_8225A728;
	// clrlwi. r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225a728
	if (!ctx.cr0.eq) goto loc_8225A728;
	// rlwinm. r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225a728
	if (!ctx.cr0.eq) goto loc_8225A728;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225a728
	if (ctx.cr6.lt) goto loc_8225A728;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8225a700
	if (!ctx.cr6.eq) goto loc_8225A700;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x8225a734
	if (ctx.cr6.lt) goto loc_8225A734;
	// lwz r8,312(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 312);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// twllei r8,0
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lwz r9,308(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 308);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfc r10,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfze. r10,r3
	// beq 0x8225a734
	if (ctx.cr0.eq) goto loc_8225A734;
loc_8225A700:
	// ori r9,r6,1
	ctx.r9.u64 = ctx.r6.u64 | 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// cmpd cr6,r10,r29
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r29.s64, ctx.xer);
	// bge cr6,0x8225a754
	if (!ctx.cr6.lt) goto loc_8225A754;
	// b 0x8225a730
	goto loc_8225A730;
loc_8225A728:
	// rlwinm r10,r6,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8225A730:
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_8225A734:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8225a744
	if (ctx.cr6.eq) goto loc_8225A744;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8225a748
	goto loc_8225A748;
loc_8225A744:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8225A748:
	// addi r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 + 44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225a68c
	if (!ctx.cr6.eq) goto loc_8225A68C;
loc_8225A754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8225A760"))) PPC_WEAK_FUNC(sub_8225A760);
PPC_FUNC_IMPL(__imp__sub_8225A760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225A768;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82267188
	ctx.lr = 0x8225A788;
	sub_82267188(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r9,r11,38528
	ctx.r9.u64 = ctx.r11.u64 | 38528;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divdu r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 / ctx.r9.u64;
	// addi r11,r6,44
	ctx.r11.s64 = ctx.r6.s64 + 44;
	// ld r10,17920(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17920);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r5,r8,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r8.s64;
	// beq cr6,0x8225a8a4
	if (ctx.cr6.eq) goto loc_8225A8A4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8225A7CC:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a88c
	if (!ctx.cr0.eq) goto loc_8225A88C;
	// rlwinm. r8,r11,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbz r4,26(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// twllei r4,0
	// rlwinm r7,r9,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// divwu r11,r11,r4
	ctx.r11.u32 = ctx.r11.u32 / ctx.r4.u32;
	// beq 0x8225a858
	if (ctx.cr0.eq) goto loc_8225A858;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8225a810
	if (ctx.cr6.lt) goto loc_8225A810;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bge cr6,0x8225a814
	if (!ctx.cr6.lt) goto loc_8225A814;
loc_8225A810:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8225A814:
	// lbz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x8225a878
	if (ctx.cr6.lt) goto loc_8225A878;
	// lwz r8,312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// twllei r8,0
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfc r11,r11,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfze. r11,r25
	// beq 0x8225a878
	if (ctx.cr0.eq) goto loc_8225A878;
	// add r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 + ctx.r27.u64;
	// b 0x8225a878
	goto loc_8225A878;
loc_8225A858:
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8225a870
	if (ctx.cr6.lt) goto loc_8225A870;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bge cr6,0x8225a874
	if (!ctx.cr6.lt) goto loc_8225A874;
loc_8225A870:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8225A874:
	// add r26,r7,r26
	ctx.r26.u64 = ctx.r7.u64 + ctx.r26.u64;
loc_8225A878:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bge cr6,0x8225a88c
	if (!ctx.cr6.lt) goto loc_8225A88C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r11,26(r10)
	PPC_STORE_U8(ctx.r10.u32 + 26, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8225A88C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r6,44
	ctx.r11.s64 = ctx.r6.s64 + 44;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225a7cc
	if (!ctx.cr6.eq) goto loc_8225A7CC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8225a8ac
	if (!ctx.cr6.eq) goto loc_8225A8AC;
loc_8225A8A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8225a8b0
	goto loc_8225A8B0;
loc_8225A8AC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8225A8B0:
	// rlwinm r10,r30,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225a9cc
	if (ctx.cr6.lt) goto loc_8225A9CC;
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// rlwinm r9,r28,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFFFFFF;
	// twllei r11,0
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8225a9cc
	if (!ctx.cr6.gt) goto loc_8225A9CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// divwu r11,r27,r10
	ctx.r11.u32 = ctx.r27.u32 / ctx.r10.u32;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r3,r11,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8225a618
	ctx.lr = 0x8225A904;
	sub_8225A618(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8225a984
	if (ctx.cr6.eq) goto loc_8225A984;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8225A928:
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r8,r7,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8225a974
	if (!ctx.cr0.eq) goto loc_8225A974;
	// rlwinm. r8,r7,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8225a974
	if (!ctx.cr0.eq) goto loc_8225A974;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpd cr6,r8,r6
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, ctx.xer);
	// bgt cr6,0x8225a974
	if (ctx.cr6.gt) goto loc_8225A974;
	// rlwinm. r4,r7,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8225a974
	if (!ctx.cr0.eq) goto loc_8225A974;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8225a974
	if (ctx.cr6.lt) goto loc_8225A974;
	// ori r10,r7,2
	ctx.r10.u64 = ctx.r7.u64 | 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// cmpd cr6,r9,r6
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r6.s64, ctx.xer);
	// bge cr6,0x8225a984
	if (!ctx.cr6.lt) goto loc_8225A984;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8225A974:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8225a928
	if (!ctx.cr6.eq) goto loc_8225A928;
loc_8225A984:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225A98C;
	sub_82258210(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// b 0x8225a9c0
	goto loc_8225A9C0;
loc_8225A9A0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r8,r10,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8225a9bc
	if (!ctx.cr0.eq) goto loc_8225A9BC;
	// rlwimi r10,r10,31,1,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x7FFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF800000FF);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8225A9BC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8225A9C0:
	// addi r10,r9,44
	ctx.r10.s64 = ctx.r9.s64 + 44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225a9a0
	if (!ctx.cr6.eq) goto loc_8225A9A0;
loc_8225A9CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8225A9D4"))) PPC_WEAK_FUNC(sub_8225A9D4);
PPC_FUNC_IMPL(__imp__sub_8225A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A9D8"))) PPC_WEAK_FUNC(sub_8225A9D8);
PPC_FUNC_IMPL(__imp__sub_8225A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225A9E0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8225aa44
	if (!ctx.cr6.gt) goto loc_8225AA44;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8225AA08:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259a00
	ctx.lr = 0x8225AA28;
	sub_82259A00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225aa50
	if (!ctx.cr6.eq) goto loc_8225AA50;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225aa08
	if (ctx.cr6.lt) goto loc_8225AA08;
loc_8225AA44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225AA48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8225AA50:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// b 0x8225aa48
	goto loc_8225AA48;
}

__attribute__((alias("__imp__sub_8225AA80"))) PPC_WEAK_FUNC(sub_8225AA80);
PPC_FUNC_IMPL(__imp__sub_8225AA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8225AA88;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257ab0
	ctx.lr = 0x8225AAA4;
	sub_82257AB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8225aac4
	if (!ctx.cr0.eq) goto loc_8225AAC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225abf8
	goto loc_8225ABF8;
loc_8225AAC4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225AAD0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225aae4
	if (ctx.cr6.eq) goto loc_8225AAE4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82258f18
	ctx.lr = 0x8225AAE4;
	sub_82258F18(ctx, base);
loc_8225AAE4:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r28,r11,25216
	ctx.r28.s64 = ctx.r11.s64 + 25216;
	// beq cr6,0x8225ab4c
	if (ctx.cr6.eq) goto loc_8225AB4C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ab4c
	if (ctx.cr6.eq) goto loc_8225AB4C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,4393
	ctx.r6.s64 = ctx.r10.s64 + 4393;
	// addi r3,r9,10364
	ctx.r3.s64 = ctx.r9.s64 + 10364;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bctrl 
	ctx.lr = 0x8225AB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ab4c
	if (ctx.cr0.lt) goto loc_8225AB4C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8225AB4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225ab84
	if (ctx.cr6.eq) goto loc_8225AB84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225ab84
	if (ctx.cr6.eq) goto loc_8225AB84;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225AB84:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,12(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822590f0
	ctx.lr = 0x8225AB98;
	sub_822590F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x8225ABA4;
	sub_82257B90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822579c0
	ctx.lr = 0x8225ABB0;
	sub_822579C0(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225ABBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8225abd8
	if (ctx.cr6.eq) goto loc_8225ABD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225ABD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225ABD8:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8225abf4
	if (ctx.cr6.eq) goto loc_8225ABF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225ABF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225ABF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225ABF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8225AC00"))) PPC_WEAK_FUNC(sub_8225AC00);
PPC_FUNC_IMPL(__imp__sub_8225AC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8225AC08;
	sub_82248770(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82257240
	ctx.lr = 0x8225AC14;
	sub_82257240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ad64
	if (ctx.cr0.eq) goto loc_8225AD64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822580c0
	ctx.lr = 0x8225AC2C;
	sub_822580C0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r26,r11,6232
	ctx.r26.s64 = ctx.r11.s64 + 6232;
	// lwz r3,284(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 284);
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r23,r25
	ctx.r5.u64 = ctx.r23.u64 + ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8225a9d8
	ctx.lr = 0x8225AC54;
	sub_8225A9D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225ad64
	if (!ctx.cr0.eq) goto loc_8225AD64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225ac80
	if (ctx.cr6.eq) goto loc_8225AC80;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,284(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 284);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8225a9d8
	ctx.lr = 0x8225AC78;
	sub_8225A9D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225ad64
	if (!ctx.cr0.eq) goto loc_8225AD64;
loc_8225AC80:
	// lwz r11,288(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 288);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8225ad5c
	if (!ctx.cr6.gt) goto loc_8225AD5C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8225AC98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r31,r10,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lhz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x8225ad48
	if (ctx.cr0.eq) goto loc_8225AD48;
loc_8225ACB0:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822580c0
	ctx.lr = 0x8225ACEC;
	sub_822580C0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8225ad38
	if (!ctx.cr6.eq) goto loc_8225AD38;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e40c
	ctx.lr = 0x8225AD0C;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225ad38
	if (!ctx.cr0.eq) goto loc_8225AD38;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225ad64
	if (ctx.cr6.eq) goto loc_8225AD64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82257fb8
	ctx.lr = 0x8225AD30;
	sub_82257FB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225ad64
	if (!ctx.cr0.eq) goto loc_8225AD64;
loc_8225AD38:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8225acb0
	if (ctx.cr6.lt) goto loc_8225ACB0;
	// lwz r11,288(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 288);
loc_8225AD48:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225ac98
	if (ctx.cr6.lt) goto loc_8225AC98;
loc_8225AD5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225ad68
	goto loc_8225AD68;
loc_8225AD64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225AD68:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8225AD70"))) PPC_WEAK_FUNC(sub_8225AD70);
PPC_FUNC_IMPL(__imp__sub_8225AD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8225AD78;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,17916(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225AD94;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8225ada4
	if (!ctx.cr0.eq) goto loc_8225ADA4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8225aed4
	goto loc_8225AED4;
loc_8225ADA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257480
	ctx.lr = 0x8225ADB0;
	sub_82257480(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225aec8
	if (ctx.cr6.eq) goto loc_8225AEC8;
	// lis r11,-1314
	ctx.r11.s64 = -86114304;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r11,r11,47812
	ctx.r11.u64 = ctx.r11.u64 | 47812;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,1784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1784);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ae20
	if (ctx.cr6.eq) goto loc_8225AE20;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x8241dffc
	ctx.lr = 0x8225AE00;
	__imp__RtlImageXexHeaderField(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,549
	ctx.r11.u64 = ctx.r11.u64 | 549;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8225ae20
	if (ctx.cr0.lt) goto loc_8225AE20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8225ae24
	goto loc_8225AE24;
loc_8225AE20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225AE24:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257548
	ctx.lr = 0x8225AE38;
	sub_82257548(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225aea8
	if (ctx.cr0.lt) goto loc_8225AEA8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822583c0
	ctx.lr = 0x8225AE54;
	sub_822583C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257548
	ctx.lr = 0x8225AE64;
	sub_82257548(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225aea8
	if (ctx.cr0.lt) goto loc_8225AEA8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x8225AE7C;
	sub_82248F70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8225AE80:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257548
	ctx.lr = 0x8225AE94;
	sub_82257548(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225aea8
	if (ctx.cr0.lt) goto loc_8225AEA8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x8225ae80
	if (ctx.cr6.lt) goto loc_8225AE80;
loc_8225AEA8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,6228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8225AEC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,17916(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225AED4;
	sub_82086968(ctx, base);
loc_8225AED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8225AEE0"))) PPC_WEAK_FUNC(sub_8225AEE0);
PPC_FUNC_IMPL(__imp__sub_8225AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8225AEE8;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r11,6228
	ctx.r23.s64 = ctx.r11.s64 + 6228;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225AF14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225AF1C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82257480
	ctx.lr = 0x8225AF28;
	sub_82257480(ctx, base);
	// rlwinm r21,r3,2,30,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r24,-32187
	ctx.r24.s64 = -2109407232;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// beq cr6,0x8225b260
	if (ctx.cr6.eq) goto loc_8225B260;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225b06c
	if (!ctx.cr6.eq) goto loc_8225B06C;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225AF58;
	sub_82086C98(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8225b1ac
	if (ctx.cr0.eq) goto loc_8225B1AC;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225AF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8225afc4
	if (!ctx.cr6.eq) goto loc_8225AFC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241dfbc
	ctx.lr = 0x8225AFB8;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225afc4
	if (ctx.cr0.lt) goto loc_8225AFC4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8225AFC4:
	// rlwinm r11,r3,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8225b240
	if (ctx.cr6.eq) goto loc_8225B240;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8225b1b4
	if (!ctx.cr6.eq) goto loc_8225B1B4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8225b1b4
	if (!ctx.cr6.eq) goto loc_8225B1B4;
	// lis r11,-1314
	ctx.r11.s64 = -86114304;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// ori r11,r11,47812
	ctx.r11.u64 = ctx.r11.u64 | 47812;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225b1b4
	if (!ctx.cr6.eq) goto loc_8225B1B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1784);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b048
	if (ctx.cr6.eq) goto loc_8225B048;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x8241dffc
	ctx.lr = 0x8225B028;
	__imp__RtlImageXexHeaderField(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,549
	ctx.r11.u64 = ctx.r11.u64 | 549;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8225b048
	if (ctx.cr0.lt) goto loc_8225B048;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8225b04c
	goto loc_8225B04C;
loc_8225B048:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8225B04C:
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225b1b4
	if (!ctx.cr6.eq) goto loc_8225B1B4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225B064;
	sub_82086968(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r20,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r20.u32);
loc_8225B06C:
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// b 0x8225b198
	goto loc_8225B198;
loc_8225B074:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// rlwinm r6,r7,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8225b0e4
	if (!ctx.cr6.eq) goto loc_8225B0E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241dfbc
	ctx.lr = 0x8225B0D8;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225b0e4
	if (ctx.cr0.lt) goto loc_8225B0E4;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8225B0E4:
	// rlwinm r11,r3,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8225b1bc
	if (ctx.cr6.eq) goto loc_8225B1BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822583c0
	ctx.lr = 0x8225B10C;
	sub_822583C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8225b1b4
	if (ctx.cr0.eq) goto loc_8225B1B4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b16c
	if (!ctx.cr6.eq) goto loc_8225B16C;
	// lhz r29,2(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8225b16c
	if (!ctx.cr6.lt) goto loc_8225B16C;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225B13C;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225b1ac
	if (ctx.cr0.eq) goto loc_8225B1AC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82087ab0
	ctx.lr = 0x8225B158;
	sub_82087AB0(ctx, base);
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82086968
	ctx.lr = 0x8225B164;
	sub_82086968(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_8225B16C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8225b1bc
	if (!ctx.cr6.lt) goto loc_8225B1BC;
loc_8225B198:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225B1A4;
	sub_82086C98(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8225b074
	if (!ctx.cr0.eq) goto loc_8225B074;
loc_8225B1AC:
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x8225b240
	goto loc_8225B240;
loc_8225B1B4:
	// li r26,11
	ctx.r26.s64 = 11;
	// b 0x8225b240
	goto loc_8225B240;
loc_8225B1BC:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x8225b1e4
	goto loc_8225B1E4;
loc_8225B1D8:
	// bl 0x822577d0
	ctx.lr = 0x8225B1DC;
	sub_822577D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822590f0
	ctx.lr = 0x8225B1E4;
	sub_822590F0(ctx, base);
loc_8225B1E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259248
	ctx.lr = 0x8225B1F0;
	sub_82259248(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8225b1d8
	if (!ctx.cr0.eq) goto loc_8225B1D8;
	// bl 0x8241dd2c
	ctx.lr = 0x8225B200;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8225b220
	goto loc_8225B220;
loc_8225B20C:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stb r20,26(r4)
	PPC_STORE_U8(ctx.r4.u32 + 26, ctx.r20.u8);
	// andi. r11,r11,209
	ctx.r11.u64 = ctx.r11.u64 & 209;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// bl 0x822590f0
	ctx.lr = 0x8225B220;
	sub_822590F0(ctx, base);
loc_8225B220:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259248
	ctx.lr = 0x8225B22C;
	sub_82259248(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8225b20c
	if (!ctx.cr0.eq) goto loc_8225B20C;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B23C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
loc_8225B240:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8225B260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B268;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B274;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8225b288
	if (ctx.cr6.eq) goto loc_8225B288;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225B288;
	sub_82086968(ctx, base);
loc_8225B288:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8225b29c
	if (ctx.cr6.eq) goto loc_8225B29C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225B29C;
	sub_82086968(ctx, base);
loc_8225B29C:
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// bne cr6,0x8225b2b0
	if (!ctx.cr6.eq) goto loc_8225B2B0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8241df3c
	ctx.lr = 0x8225B2AC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8225B2B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8225B2BC"))) PPC_WEAK_FUNC(sub_8225B2BC);
PPC_FUNC_IMPL(__imp__sub_8225B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B2C0"))) PPC_WEAK_FUNC(sub_8225B2C0);
PPC_FUNC_IMPL(__imp__sub_8225B2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8225B2C8;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225B2E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8225b380
	if (!ctx.cr6.gt) goto loc_8225B380;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8225B2F8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r31,r25,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// b 0x8225b350
	goto loc_8225B350;
loc_8225B308:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 + 20;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225b388
	if (!ctx.cr0.eq) goto loc_8225B388;
	// lbz r11,25(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8225b388
	if (ctx.cr6.eq) goto loc_8225B388;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
loc_8225B350:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82259a00
	ctx.lr = 0x8225B364;
	sub_82259A00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225b308
	if (!ctx.cr6.eq) goto loc_8225B308;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225b2f8
	if (ctx.cr6.lt) goto loc_8225B2F8;
loc_8225B380:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8225b394
	goto loc_8225B394;
loc_8225B388:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82259098
	ctx.lr = 0x8225B394;
	sub_82259098(ctx, base);
loc_8225B394:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B39C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8225B3A8"))) PPC_WEAK_FUNC(sub_8225B3A8);
PPC_FUNC_IMPL(__imp__sub_8225B3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8225B3B0;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225B3C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r24,r11,6232
	ctx.r24.s64 = ctx.r11.s64 + 6232;
	// addi r27,r10,17916
	ctx.r27.s64 = ctx.r10.s64 + 17916;
loc_8225B3E0:
	// lwz r28,32(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225b41c
	if (ctx.cr6.eq) goto loc_8225B41C;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_8225B3F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x822597d8
	ctx.lr = 0x8225B40C;
	sub_822597D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8225b524
	if (!ctx.cr0.eq) goto loc_8225B524;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8225b3f0
	if (!ctx.cr6.eq) goto loc_8225B3F0;
loc_8225B41C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225b474
	if (ctx.cr6.lt) goto loc_8225B474;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8225b474
	if (!ctx.cr6.lt) goto loc_8225B474;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82086c98
	ctx.lr = 0x8225B444;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225b51c
	if (ctx.cr0.eq) goto loc_8225B51C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82087ab0
	ctx.lr = 0x8225B460;
	sub_82087AB0(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82086968
	ctx.lr = 0x8225B46C;
	sub_82086968(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_8225B474:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82086c98
	ctx.lr = 0x8225B480;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b51c
	if (ctx.cr0.eq) goto loc_8225B51C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822583c0
	ctx.lr = 0x8225B498;
	sub_822583C0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq 0x8225b4f0
	if (ctx.cr0.eq) goto loc_8225B4F0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8225B4C0:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r8.u16);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225b4c0
	if (ctx.cr6.lt) goto loc_8225B4C0;
loc_8225B4F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B4F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,152(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// bl 0x82258d50
	ctx.lr = 0x8225B508;
	sub_82258D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225B510;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x8225b3e0
	if (!ctx.cr6.gt) goto loc_8225B3E0;
loc_8225B51C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8225b56c
	goto loc_8225B56C;
loc_8225B524:
	// stb r21,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r21.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82267188
	ctx.lr = 0x8225B530;
	sub_82267188(ctx, base);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// ld r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 4);
	// stb r26,26(r30)
	PPC_STORE_U8(ctx.r30.u32 + 26, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divdu r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 / ctx.r10.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822577d0
	ctx.lr = 0x8225B564;
	sub_822577D0(ctx, base);
	// bl 0x82259098
	ctx.lr = 0x8225B568;
	sub_82259098(ctx, base);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
loc_8225B56C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B574;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_8225B580"))) PPC_WEAK_FUNC(sub_8225B580);
PPC_FUNC_IMPL(__imp__sub_8225B580) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,-4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + -4);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// twllei r7,0
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// divwu r7,r9,r7
	ctx.r7.u32 = ctx.r9.u32 / ctx.r7.u32;
	// beq 0x8225b5dc
	if (ctx.cr0.eq) goto loc_8225B5DC;
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
loc_8225B5B8:
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8225b5dc
	if (ctx.cr6.eq) goto loc_8225B5DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8225b5b8
	if (ctx.cr6.lt) goto loc_8225B5B8;
loc_8225B5DC:
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225B614"))) PPC_WEAK_FUNC(sub_8225B614);
PPC_FUNC_IMPL(__imp__sub_8225B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B618"))) PPC_WEAK_FUNC(sub_8225B618);
PPC_FUNC_IMPL(__imp__sub_8225B618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8225B620;
	sub_82248784(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b72c
	if (!ctx.cr6.eq) goto loc_8225B72C;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b72c
	if (!ctx.cr6.eq) goto loc_8225B72C;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b668
	if (!ctx.cr6.eq) goto loc_8225B668;
	// bl 0x82088600
	ctx.lr = 0x8225B65C;
	sub_82088600(ctx, base);
	// addi r11,r3,1000
	ctx.r11.s64 = ctx.r3.s64 + 1000;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x8225b72c
	goto loc_8225B72C;
loc_8225B668:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B670;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b684
	if (ctx.cr6.eq) goto loc_8225B684;
	// lwz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8225b688
	goto loc_8225B688;
loc_8225B684:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8225B688:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x8225b6dc
	if (ctx.cr6.eq) goto loc_8225B6DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8225b580
	ctx.lr = 0x8225B6A8;
	sub_8225B580(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824091c0
	ctx.lr = 0x8225B6BC;
	sub_824091C0(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r5,r29,40
	ctx.r5.s64 = ctx.r29.s64 + 40;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8225B6DC:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225B6E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// clrlwi r29,r30,1
	ctx.r29.u64 = ctx.r30.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r29,60000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 60000, ctx.xer);
	// ble cr6,0x8225b6f8
	if (!ctx.cr6.gt) goto loc_8225B6F8;
	// lis r29,0
	ctx.r29.s64 = 0;
	// ori r29,r29,60000
	ctx.r29.u64 = ctx.r29.u64 | 60000;
loc_8225B6F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225b704
	if (!ctx.cr6.eq) goto loc_8225B704;
	// li r30,1000
	ctx.r30.s64 = 1000;
loc_8225B704:
	// bl 0x82088600
	ctx.lr = 0x8225B708;
	sub_82088600(ctx, base);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// beq 0x8225b728
	if (ctx.cr0.eq) goto loc_8225B728;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x8225b72c
	goto loc_8225B72C;
loc_8225B728:
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_8225B72C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8225B738"))) PPC_WEAK_FUNC(sub_8225B738);
PPC_FUNC_IMPL(__imp__sub_8225B738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,6232
	ctx.r11.s64 = ctx.r11.s64 + 6232;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwsync 
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r11,272
	ctx.r7.s64 = ctx.r11.s64 + 272;
loc_8225B758:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8225b758
	if (!ctx.cr0.eq) goto loc_8225B758;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwsync 
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// b 0x82259e78
	sub_82259E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B788"))) PPC_WEAK_FUNC(sub_8225B788);
PPC_FUNC_IMPL(__imp__sub_8225B788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225B78C"))) PPC_WEAK_FUNC(sub_8225B78C);
PPC_FUNC_IMPL(__imp__sub_8225B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B790"))) PPC_WEAK_FUNC(sub_8225B790);
PPC_FUNC_IMPL(__imp__sub_8225B790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8225B798;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// addi r29,r10,10384
	ctx.r29.s64 = ctx.r10.s64 + 10384;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8225b2c0
	ctx.lr = 0x8225B7CC;
	sub_8225B2C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8225b814
	if (!ctx.cr0.eq) goto loc_8225B814;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225b3a8
	ctx.lr = 0x8225B7E8;
	sub_8225B3A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225b80c
	if (ctx.cr0.eq) goto loc_8225B80C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82258fa8
	ctx.lr = 0x8225B80C;
	sub_82258FA8(ctx, base);
loc_8225B80C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225b884
	if (ctx.cr6.eq) goto loc_8225B884;
loc_8225B814:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8225b3a8
	ctx.lr = 0x8225B838;
	sub_8225B3A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8225b860
	if (ctx.cr0.eq) goto loc_8225B860;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82258fa8
	ctx.lr = 0x8225B860;
	sub_82258FA8(ctx, base);
loc_8225B860:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82258fa8
	ctx.lr = 0x8225B86C;
	sub_82258FA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822590f0
	ctx.lr = 0x8225B878;
	sub_822590F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822590f0
	ctx.lr = 0x8225B884;
	sub_822590F0(ctx, base);
loc_8225B884:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8225B890"))) PPC_WEAK_FUNC(sub_8225B890);
PPC_FUNC_IMPL(__imp__sub_8225B890) {
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
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225b940
	if (!ctx.cr6.eq) goto loc_8225B940;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225B8BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82258a68
	ctx.lr = 0x8225B8C4;
	sub_82258A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225b928
	if (ctx.cr0.eq) goto loc_8225B928;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225b2c0
	ctx.lr = 0x8225B8E4;
	sub_8225B2C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8225b908
	if (ctx.cr0.eq) goto loc_8225B908;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stb r10,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r10.u8);
	// bl 0x822590f0
	ctx.lr = 0x8225B904;
	sub_822590F0(ctx, base);
	// b 0x8225b938
	goto loc_8225B938;
loc_8225B908:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B910;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225b790
	ctx.lr = 0x8225B918;
	sub_8225B790(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r3,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r3.u8);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// b 0x8225b940
	goto loc_8225B940;
loc_8225B928:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stb r10,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r10.u8);
loc_8225B938:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225B940;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225B940:
	// lbz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
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

__attribute__((alias("__imp__sub_8225B958"))) PPC_WEAK_FUNC(sub_8225B958);
PPC_FUNC_IMPL(__imp__sub_8225B958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225B960;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8225f010
	ctx.lr = 0x8225B970;
	sub_8225F010(ctx, base);
	// bl 0x8225e518
	ctx.lr = 0x8225B974;
	sub_8225E518(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r7,r11,17896
	ctx.r7.s64 = ctx.r11.s64 + 17896;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// ori r6,r6,45056
	ctx.r6.u64 = ctx.r6.u64 | 45056;
	// bl 0x8225f318
	ctx.lr = 0x8225B994;
	sub_8225F318(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,10392
	ctx.r4.s64 = ctx.r11.s64 + 10392;
	// bl 0x8241de0c
	ctx.lr = 0x8225B9A4;
	__imp__RtlInitAnsiString(ctx, base);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// li r8,16417
	ctx.r8.s64 = 16417;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,6228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6228);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6228);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ad70
	ctx.lr = 0x8225BA1C;
	sub_8225AD70(ctx, base);
	// bl 0x8225efd0
	ctx.lr = 0x8225BA20;
	sub_8225EFD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225BA2C"))) PPC_WEAK_FUNC(sub_8225BA2C);
PPC_FUNC_IMPL(__imp__sub_8225BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BA30"))) PPC_WEAK_FUNC(sub_8225BA30);
PPC_FUNC_IMPL(__imp__sub_8225BA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225BA38;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,6232
	ctx.r26.s64 = ctx.r11.s64 + 6232;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ba64
	if (ctx.cr6.eq) goto loc_8225BA64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225BA64;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8225BA64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b580
	ctx.lr = 0x8225BA70;
	sub_8225B580(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x8225ba9c
	goto loc_8225BA9C;
loc_8225BA80:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x8225baa8
	if (ctx.cr6.eq) goto loc_8225BAA8;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x8225baa8
	if (ctx.cr6.eq) goto loc_8225BAA8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8225BA9C:
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8225ba80
	if (ctx.cr6.gt) goto loc_8225BA80;
	// b 0x8225baac
	goto loc_8225BAAC;
loc_8225BAA8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8225BAAC:
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// ble cr6,0x8225bac0
	if (!ctx.cr6.gt) goto loc_8225BAC0;
	// li r30,20
	ctx.r30.s64 = 20;
loc_8225BAC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// beq cr6,0x8225bae4
	if (ctx.cr6.eq) goto loc_8225BAE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,10416
	ctx.r5.s64 = ctx.r11.s64 + 10416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224bb38
	ctx.lr = 0x8225BAE4;
	sub_8224BB38(ctx, base);
loc_8225BAE4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824093f0
	ctx.lr = 0x8225BAF8;
	sub_824093F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,10412
	ctx.r5.s64 = ctx.r11.s64 + 10412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82409308
	ctx.lr = 0x8225BB0C;
	sub_82409308(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r5,r11,10408
	ctx.r5.s64 = ctx.r11.s64 + 10408;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e43c
	ctx.lr = 0x8225BB24;
	__imp___snprintf(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82409308
	ctx.lr = 0x8225BB34;
	sub_82409308(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225bb44
	if (ctx.cr6.eq) goto loc_8225BB44;
	// bl 0x8241dd3c
	ctx.lr = 0x8225BB44;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225BB44:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8225BB4C"))) PPC_WEAK_FUNC(sub_8225BB4C);
PPC_FUNC_IMPL(__imp__sub_8225BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BB50"))) PPC_WEAK_FUNC(sub_8225BB50);
PPC_FUNC_IMPL(__imp__sub_8225BB50) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82257f68
	ctx.lr = 0x8225BB8C;
	sub_82257F68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8225b2c0
	ctx.lr = 0x8225BBA8;
	sub_8225B2C0(ctx, base);
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

__attribute__((alias("__imp__sub_8225BBBC"))) PPC_WEAK_FUNC(sub_8225BBBC);
PPC_FUNC_IMPL(__imp__sub_8225BBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BBC0"))) PPC_WEAK_FUNC(sub_8225BBC0);
PPC_FUNC_IMPL(__imp__sub_8225BBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8225BBC8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r26,r11,6228
	ctx.r26.s64 = ctx.r11.s64 + 6228;
loc_8225BBD4:
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225BBE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
loc_8225BBEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// addi r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 4;
	// bne cr6,0x8225bc14
	if (!ctx.cr6.eq) goto loc_8225BC14;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 + 124;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225bbec
	if (ctx.cr6.lt) goto loc_8225BBEC;
	// b 0x8225bde0
	goto loc_8225BDE0;
loc_8225BC14:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,116
	ctx.r10.s64 = ctx.r9.s64 + 116;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq 0x8225bde0
	if (ctx.cr0.eq) goto loc_8225BDE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b618
	ctx.lr = 0x8225BC44;
	sub_8225B618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225bdcc
	if (ctx.cr0.eq) goto loc_8225BDCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bc68
	if (ctx.cr6.eq) goto loc_8225BC68;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225BC64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225bbd4
	goto loc_8225BBD4;
loc_8225BC68:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225bcf8
	if (!ctx.cr6.eq) goto loc_8225BCF8;
	// lwz r29,16(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r28,r29,12
	ctx.r28.s64 = ctx.r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225BC84;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8225bccc
	if (ctx.cr6.eq) goto loc_8225BCCC;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225BC9C:
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225bcc0
	if (ctx.cr6.eq) goto loc_8225BCC0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8225bc9c
	if (ctx.cr6.lt) goto loc_8225BC9C;
	// b 0x8225bccc
	goto loc_8225BCCC;
loc_8225BCC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_8225BCCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225BCD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225bcf8
	if (!ctx.cr6.eq) goto loc_8225BCF8;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225BCE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8225bdb8
	goto loc_8225BDB8;
loc_8225BCF8:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x8225bd28
	if (!ctx.cr6.gt) goto loc_8225BD28;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8225BD28:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// bl 0x82088600
	ctx.lr = 0x8225BD38;
	sub_82088600(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225BD5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r8,r10,-32144
	ctx.r8.s64 = ctx.r10.s64 + -32144;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r29,2047
	ctx.r9.s64 = ctx.r29.s64 + 2047;
	// ori r5,r8,1
	ctx.r5.u64 = ctx.r8.u64 | 1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rlwinm r9,r9,0,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF800;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225bbd4
	if (!ctx.cr6.eq) goto loc_8225BBD4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8225BDB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225bbd4
	goto loc_8225BBD4;
loc_8225BDCC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8225BDE0:
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225BDEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8225BDF4"))) PPC_WEAK_FUNC(sub_8225BDF4);
PPC_FUNC_IMPL(__imp__sub_8225BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BDF8"))) PPC_WEAK_FUNC(sub_8225BDF8);
PPC_FUNC_IMPL(__imp__sub_8225BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8225BE00;
	sub_82248774(ctx, base);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// extsb. r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r23,r10,20
	ctx.r23.s64 = ctx.r10.s64 + 20;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8225be94
	if (ctx.cr0.eq) goto loc_8225BE94;
loc_8225BE44:
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x8225be5c
	if (!ctx.cr6.eq) goto loc_8225BE5C;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8225be68
	if (!ctx.cr6.eq) goto loc_8225BE68;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8225be68
	goto loc_8225BE68;
loc_8225BE5C:
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// bne cr6,0x8225be68
	if (!ctx.cr6.eq) goto loc_8225BE68;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8225BE68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225be44
	if (!ctx.cr0.eq) goto loc_8225BE44;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8225be88
	if (ctx.cr6.eq) goto loc_8225BE88;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// b 0x8225be98
	goto loc_8225BE98;
loc_8225BE88:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x8225be98
	if (!ctx.cr6.eq) goto loc_8225BE98;
loc_8225BE94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225BE98:
	// lis r25,-32187
	ctx.r25.s64 = -2109407232;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x8225bedc
	if (!ctx.cr6.gt) goto loc_8225BEDC;
	// addi r3,r11,257
	ctx.r3.s64 = ctx.r11.s64 + 257;
	// lwz r4,17916(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225BEB4;
	sub_82086C98(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225bedc
	if (!ctx.cr0.eq) goto loc_8225BEDC;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bed4
	if (ctx.cr6.eq) goto loc_8225BED4;
	// lwz r4,17916(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225BED4;
	sub_82086968(ctx, base);
loc_8225BED4:
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x8225c09c
	goto loc_8225C09C;
loc_8225BEDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82087ab0
	ctx.lr = 0x8225BEE8;
	sub_82087AB0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8225BEF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225bef0
	if (!ctx.cr6.eq) goto loc_8225BEF0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82257240
	ctx.lr = 0x8225BF1C;
	sub_82257240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225bf2c
	if (!ctx.cr0.eq) goto loc_8225BF2C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8225c09c
	goto loc_8225C09C;
loc_8225BF2C:
	// bl 0x8225b890
	ctx.lr = 0x8225BF30;
	sub_8225B890(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82267348
	ctx.lr = 0x8225BF40;
	sub_82267348(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225c080
	if (ctx.cr6.eq) goto loc_8225C080;
	// li r11,260
	ctx.r11.s64 = 260;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r30,r11,6232
	ctx.r30.s64 = ctx.r11.s64 + 6232;
loc_8225BF5C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,668
	ctx.r5.s64 = ctx.r1.s64 + 668;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,256
	ctx.r4.s64 = 256;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8224bb38
	ctx.lr = 0x8225BF74;
	sub_8224BB38(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8225BF84:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225bf84
	if (!ctx.cr6.eq) goto loc_8225BF84;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,624(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andi. r10,r10,22
	ctx.r10.u64 = ctx.r10.u64 & 22;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// bne 0x8225c048
	if (!ctx.cr0.eq) goto loc_8225C048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225ac00
	ctx.lr = 0x8225BFBC;
	sub_8225AC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c048
	if (ctx.cr0.eq) goto loc_8225C048;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225BFCC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8225bb50
	ctx.lr = 0x8225BFDC;
	sub_8225BB50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8225bffc
	if (!ctx.cr0.eq) goto loc_8225BFFC;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8225b3a8
	ctx.lr = 0x8225BFF8;
	sub_8225B3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8225BFFC:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225C004;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225c048
	if (ctx.cr6.eq) goto loc_8225C048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82258f18
	ctx.lr = 0x8225C018;
	sub_82258F18(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r23,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r23.u8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822590f0
	ctx.lr = 0x8225C044;
	sub_822590F0(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8225C048:
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822672f0
	ctx.lr = 0x8225C054;
	sub_822672F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225bf5c
	if (!ctx.cr0.eq) goto loc_8225BF5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82088268
	ctx.lr = 0x8225C064;
	sub_82088268(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8225c080
	if (ctx.cr6.eq) goto loc_8225C080;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82258d50
	ctx.lr = 0x8225C078;
	sub_82258D50(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225C080;
	sub_82258210(ctx, base);
loc_8225C080:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c098
	if (ctx.cr6.eq) goto loc_8225C098;
	// lwz r4,17916(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225C098;
	sub_82086968(ctx, base);
loc_8225C098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225C09C:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8225C0A4"))) PPC_WEAK_FUNC(sub_8225C0A4);
PPC_FUNC_IMPL(__imp__sub_8225C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C0A8"))) PPC_WEAK_FUNC(sub_8225C0A8);
PPC_FUNC_IMPL(__imp__sub_8225C0A8) {
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
	// rlwinm. r11,r3,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c1b4
	if (!ctx.cr0.eq) goto loc_8225C1B4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225c1b4
	if (ctx.cr6.eq) goto loc_8225C1B4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225c1b4
	if (ctx.cr6.eq) goto loc_8225C1B4;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8225C0E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225c0e4
	if (!ctx.cr6.eq) goto loc_8225C0E4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82257240
	ctx.lr = 0x8225C110;
	sub_82257240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c120
	if (!ctx.cr0.eq) goto loc_8225C120;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8225c1b8
	goto loc_8225C1B8;
loc_8225C120:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,6232
	ctx.r11.s64 = ctx.r11.s64 + 6232;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8225c13c
	if (!ctx.cr6.eq) goto loc_8225C13C;
loc_8225C134:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225c1b8
	goto loc_8225C1B8;
loc_8225C13C:
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225c158
	if (ctx.cr6.eq) goto loc_8225C158;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// stw r9,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r9.u32);
loc_8225C158:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8225c184
	if (ctx.cr6.eq) goto loc_8225C184;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225c184
	if (!ctx.cr6.eq) goto loc_8225C184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225bdf8
	ctx.lr = 0x8225C180;
	sub_8225BDF8(ctx, base);
	// b 0x8225c1b8
	goto loc_8225C1B8;
loc_8225C184:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8225C188:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225c188
	if (!ctx.cr6.eq) goto loc_8225C188;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8225a1a0
	ctx.lr = 0x8225C1B0;
	sub_8225A1A0(ctx, base);
	// b 0x8225c134
	goto loc_8225C134;
loc_8225C1B4:
	// li r3,87
	ctx.r3.s64 = 87;
loc_8225C1B8:
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

__attribute__((alias("__imp__sub_8225C1D0"))) PPC_WEAK_FUNC(sub_8225C1D0);
PPC_FUNC_IMPL(__imp__sub_8225C1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8225C1D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x8225c238
	if (!ctx.cr0.eq) goto loc_8225C238;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225c238
	if (ctx.cr6.eq) goto loc_8225C238;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225c238
	if (ctx.cr6.eq) goto loc_8225C238;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225c23c
	if (ctx.cr6.eq) goto loc_8225C23C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8225C210:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8225c0a8
	ctx.lr = 0x8225C21C;
	sub_8225C0A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225c23c
	if (!ctx.cr0.eq) goto loc_8225C23C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8225c210
	if (ctx.cr6.lt) goto loc_8225C210;
	// b 0x8225c23c
	goto loc_8225C23C;
loc_8225C238:
	// li r3,87
	ctx.r3.s64 = 87;
loc_8225C23C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8225C244"))) PPC_WEAK_FUNC(sub_8225C244);
PPC_FUNC_IMPL(__imp__sub_8225C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C248"))) PPC_WEAK_FUNC(sub_8225C248);
PPC_FUNC_IMPL(__imp__sub_8225C248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8225C250;
	sub_82248788(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225C264;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c2bc
	if (ctx.cr6.eq) goto loc_8225C2BC;
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
loc_8225C278:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225c2cc
	if (ctx.cr6.lt) goto loc_8225C2CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,17916(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17916);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82086968
	ctx.lr = 0x8225C2AC;
	sub_82086968(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225c278
	if (!ctx.cr6.eq) goto loc_8225C278;
loc_8225C2BC:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8225c334
	goto loc_8225C334;
loc_8225C2CC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r5,r7,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r30,r10,20
	ctx.r30.s64 = ctx.r10.s64 + 20;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r29,r9,-1
	ctx.r29.s64 = ctx.r9.s64 + -1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8225C334:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225C33C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225c34c
	if (!ctx.cr6.eq) goto loc_8225C34C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225c384
	goto loc_8225C384;
loc_8225C34C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// bgt cr6,0x8225c380
	if (ctx.cr6.gt) goto loc_8225C380;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82087ab0
	ctx.lr = 0x8225C368;
	sub_82087AB0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stbx r10,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8225bdf8
	ctx.lr = 0x8225C380;
	sub_8225BDF8(ctx, base);
loc_8225C380:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225C384:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8225C38C"))) PPC_WEAK_FUNC(sub_8225C38C);
PPC_FUNC_IMPL(__imp__sub_8225C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C390"))) PPC_WEAK_FUNC(sub_8225C390);
PPC_FUNC_IMPL(__imp__sub_8225C390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225C398;
	sub_8224877C(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c408
	if (ctx.cr6.eq) goto loc_8225C408;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x8225ba30
	ctx.lr = 0x8225C3CC;
	sub_8225BA30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x8225C3D8;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822575c8
	ctx.lr = 0x8225C3EC;
	sub_822575C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225c528
	if (ctx.cr0.lt) goto loc_8225C528;
loc_8225C3F4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x8225c528
	goto loc_8225C528;
loc_8225C408:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// addi r30,r11,6560
	ctx.r30.s64 = ctx.r11.s64 + 6560;
loc_8225C414:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82088248
	ctx.lr = 0x8225C41C;
	sub_82088248(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8225C420:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8225c420
	if (ctx.cr6.lt) goto loc_8225C420;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8225ba30
	ctx.lr = 0x8225C45C;
	sub_8225BA30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x8225C468;
	__imp__RtlInitAnsiString(ctx, base);
	// lwz r11,-332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -332);
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,-32752
	ctx.r4.s64 = -2146435072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225c4cc
	if (ctx.cr0.lt) goto loc_8225C4CC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x8225C4C8;
	__imp__NtClose(ctx, base);
	// b 0x8225c414
	goto loc_8225C414;
loc_8225C4CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -324);
	// bl 0x82258fa8
	ctx.lr = 0x8225C4D8;
	sub_82258FA8(ctx, base);
	// bl 0x8225efd0
	ctx.lr = 0x8225C4DC;
	sub_8225EFD0(ctx, base);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8225c4f4
	if (ctx.cr6.lt) goto loc_8225C4F4;
	// lwz r3,17888(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17888);
	// bl 0x82257338
	ctx.lr = 0x8225C4F4;
	sub_82257338(ctx, base);
loc_8225C4F4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822575c8
	ctx.lr = 0x8225C508;
	sub_822575C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225c3f4
	if (!ctx.cr0.lt) goto loc_8225C3F4;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8225c414
	if (ctx.cr6.eq) goto loc_8225C414;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8225C528:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8225C530"))) PPC_WEAK_FUNC(sub_8225C530);
PPC_FUNC_IMPL(__imp__sub_8225C530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c5b8
	if (ctx.cr0.eq) goto loc_8225C5B8;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225ba30
	ctx.lr = 0x8225C560;
	sub_8225BA30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82089ed8
	ctx.lr = 0x8225C568;
	sub_82089ED8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c58c
	if (!ctx.cr0.eq) goto loc_8225C58C;
	// bl 0x8208db08
	ctx.lr = 0x8225C574;
	sub_8208DB08(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r11,29472
	ctx.r11.s64 = ctx.r11.s64 + 29472;
	// rlwimi r10,r11,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// b 0x8225c5bc
	goto loc_8225C5BC;
loc_8225C58C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r10,r9,6232
	ctx.r10.s64 = ctx.r9.s64 + 6232;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82258fa8
	ctx.lr = 0x8225C5B4;
	sub_82258FA8(ctx, base);
	// bl 0x8225efd0
	ctx.lr = 0x8225C5B8;
	sub_8225EFD0(ctx, base);
loc_8225C5B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225C5BC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225C5D0"))) PPC_WEAK_FUNC(sub_8225C5D0);
PPC_FUNC_IMPL(__imp__sub_8225C5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// bne 0x8225c64c
	if (!ctx.cr0.eq) goto loc_8225C64C;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225ba30
	ctx.lr = 0x8225C60C;
	sub_8225BA30(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c64c
	if (ctx.cr0.eq) goto loc_8225C64C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822673d8
	ctx.lr = 0x8225C628;
	sub_822673D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c638
	if (!ctx.cr0.eq) goto loc_8225C638;
	// bl 0x8208db08
	ctx.lr = 0x8225C634;
	sub_8208DB08(ctx, base);
	// b 0x8225c650
	goto loc_8225C650;
loc_8225C638:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225c650
	if (!ctx.cr6.eq) goto loc_8225C650;
loc_8225C64C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225C650:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225C664"))) PPC_WEAK_FUNC(sub_8225C664);
PPC_FUNC_IMPL(__imp__sub_8225C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C668"))) PPC_WEAK_FUNC(sub_8225C668);
PPC_FUNC_IMPL(__imp__sub_8225C668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225c694
	if (ctx.cr0.eq) goto loc_8225C694;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225c718
	goto loc_8225C718;
loc_8225C694:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225c6a4
	if (ctx.cr0.eq) goto loc_8225C6A4;
loc_8225C69C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225c718
	goto loc_8225C718;
loc_8225C6A4:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c69c
	if (ctx.cr0.eq) goto loc_8225C69C;
	// li r6,260
	ctx.r6.s64 = 260;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225ba30
	ctx.lr = 0x8225C6BC;
	sub_8225BA30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8225C6C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225c6c4
	if (!ctx.cr6.eq) goto loc_8225C6C4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8225C6E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8225c6e4
	if (!ctx.cr6.eq) goto loc_8225C6E4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e40c
	ctx.lr = 0x8225C710;
	__imp__RtlCompareStringN(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8225C718:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225C72C"))) PPC_WEAK_FUNC(sub_8225C72C);
PPC_FUNC_IMPL(__imp__sub_8225C72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C730"))) PPC_WEAK_FUNC(sub_8225C730);
PPC_FUNC_IMPL(__imp__sub_8225C730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8225C738;
	sub_82248788(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,10440
	ctx.r3.s64 = ctx.r11.s64 + 10440;
	// bl 0x82267348
	ctx.lr = 0x8225C750;
	sub_82267348(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225c824
	if (ctx.cr6.eq) goto loc_8225C824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,10436
	ctx.r31.s64 = ctx.r11.s64 + 10436;
	// addi r30,r10,10432
	ctx.r30.s64 = ctx.r10.s64 + 10432;
loc_8225C76C:
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8225C774:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225c774
	if (!ctx.cr6.eq) goto loc_8225C774;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8241e40c
	ctx.lr = 0x8225C7A4;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c808
	if (ctx.cr0.eq) goto loc_8225C808;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8225C7B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8225c7b4
	if (!ctx.cr6.eq) goto loc_8225C7B4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8241e40c
	ctx.lr = 0x8225C7E4;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c808
	if (ctx.cr0.eq) goto loc_8225C808;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r11,-14744
	ctx.r4.s64 = ctx.r11.s64 + -14744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82259148
	ctx.lr = 0x8225C800;
	sub_82259148(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225c830
	if (ctx.cr0.eq) goto loc_8225C830;
loc_8225C808:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822672f0
	ctx.lr = 0x8225C814;
	sub_822672F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c76c
	if (!ctx.cr0.eq) goto loc_8225C76C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82088268
	ctx.lr = 0x8225C824;
	sub_82088268(ctx, base);
loc_8225C824:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225C828:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8225C830:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82088268
	ctx.lr = 0x8225C838;
	sub_82088268(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,10416
	ctx.r5.s64 = ctx.r11.s64 + 10416;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8224bb38
	ctx.lr = 0x8225C84C;
	sub_8224BB38(ctx, base);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82409308
	ctx.lr = 0x8225C85C;
	sub_82409308(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82089ed8
	ctx.lr = 0x8225C864;
	sub_82089ED8(ctx, base);
	// bl 0x8225efd0
	ctx.lr = 0x8225C868;
	sub_8225EFD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225c828
	goto loc_8225C828;
}

__attribute__((alias("__imp__sub_8225C870"))) PPC_WEAK_FUNC(sub_8225C870);
PPC_FUNC_IMPL(__imp__sub_8225C870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8225C878;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bge cr6,0x8225c89c
	if (!ctx.cr6.lt) goto loc_8225C89C;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8225C89C:
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq 0x8225c8fc
	if (ctx.cr0.eq) goto loc_8225C8FC;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225c8e8
	if (ctx.cr6.eq) goto loc_8225C8E8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r11,r11,6228
	ctx.r11.s64 = ctx.r11.s64 + 6228;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225C8D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225C8E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225C8E8:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,17916(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225C8F8;
	sub_82086968(ctx, base);
	// b 0x8225cb48
	goto loc_8225CB48;
loc_8225C8FC:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// xori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 ^ 1;
	// bl 0x8241dd3c
	ctx.lr = 0x8225C920;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225C944;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225ca08
	if (ctx.cr6.eq) goto loc_8225CA08;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c9d0
	if (ctx.cr0.eq) goto loc_8225C9D0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225C970;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241ddec
	ctx.lr = 0x8225C994;
	__imp__NtSetInformationFile(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8225c9bc
	if (ctx.cr0.lt) goto loc_8225C9BC;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241ddec
	ctx.lr = 0x8225C9B8;
	__imp__NtSetInformationFile(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8225C9BC:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225C9C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// xori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 ^ 1;
loc_8225C9D0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225ca08
	if (ctx.cr6.eq) goto loc_8225CA08;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// rlwimi r9,r10,6,25,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r9.u32);
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// beq 0x8225ca08
	if (ctx.cr0.eq) goto loc_8225CA08;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
loc_8225CA08:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CA14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CA38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8225ca7c
	if (!ctx.cr6.eq) goto loc_8225CA7C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CA4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r11.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225ca70
	if (!ctx.cr6.eq) goto loc_8225CA70;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8225c530
	ctx.lr = 0x8225CA70;
	sub_8225C530(ctx, base);
loc_8225CA70:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CA7C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8225CA7C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CA88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82258fa8
	ctx.lr = 0x8225CA94;
	sub_82258FA8(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CAA0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822590f0
	ctx.lr = 0x8225CAB0;
	sub_822590F0(ctx, base);
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225CAC0;
	sub_82086968(ctx, base);
	// lwz r29,32(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225caf0
	if (ctx.cr6.eq) goto loc_8225CAF0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CADC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225CAF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225CAF0:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225cb04
	if (ctx.cr6.eq) goto loc_8225CB04;
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225CB04;
	sub_82086968(ctx, base);
loc_8225CB04:
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82086968
	ctx.lr = 0x8225CB10;
	sub_82086968(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,17916(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225CB1C;
	sub_82086968(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CB28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x8225efd0
	ctx.lr = 0x8225CB2C;
	sub_8225EFD0(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CB38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82258210
	ctx.lr = 0x8225CB48;
	sub_82258210(ctx, base);
loc_8225CB48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8225CB50"))) PPC_WEAK_FUNC(sub_8225CB50);
PPC_FUNC_IMPL(__imp__sub_8225CB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x8225CB58;
	sub_82248754(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// lwz r21,436(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// andis. r10,r4,16385
	ctx.r10.u64 = ctx.r4.u64 & 1073807360;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// bne 0x8225cec8
	if (!ctx.cr0.eq) goto loc_8225CEC8;
	// rlwinm. r11,r21,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cec8
	if (!ctx.cr0.eq) goto loc_8225CEC8;
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cec8
	if (!ctx.cr0.eq) goto loc_8225CEC8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CBB4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225cbe0
	if (!ctx.cr6.eq) goto loc_8225CBE0;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8225ac00
	ctx.lr = 0x8225CBCC;
	sub_8225AC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ceb0
	if (ctx.cr0.eq) goto loc_8225CEB0;
	// lwz r16,208(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// b 0x8225ceb0
	goto loc_8225CEB0;
loc_8225CBE0:
	// bl 0x8225b890
	ctx.lr = 0x8225CBE4;
	sub_8225B890(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8225ac00
	ctx.lr = 0x8225CBF0;
	sub_8225AC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225ceb0
	if (ctx.cr0.eq) goto loc_8225CEB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// bl 0x8225bb50
	ctx.lr = 0x8225CC0C;
	sub_8225BB50(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8225ce90
	if (ctx.cr0.eq) goto loc_8225CE90;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// stw r10,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r10.u32);
	// beq 0x8225ce88
	if (ctx.cr0.eq) goto loc_8225CE88;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225ce88
	if (!ctx.cr0.eq) goto loc_8225CE88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8225CC50;
	sub_820882B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225ce9c
	if (ctx.cr6.eq) goto loc_8225CE9C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257840
	ctx.lr = 0x8225CC68;
	sub_82257840(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8225cc88
	if (!ctx.cr0.eq) goto loc_8225CC88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225ce9c
	goto loc_8225CE9C;
loc_8225CC88:
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CCA8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r26,r11,25216
	ctx.r26.s64 = ctx.r11.s64 + 25216;
	// lwz r11,25216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225cd04
	if (ctx.cr6.eq) goto loc_8225CD04;
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bne 0x8225ccd4
	if (!ctx.cr0.eq) goto loc_8225CCD4;
	// li r5,2
	ctx.r5.s64 = 2;
loc_8225CCD4:
	// rlwinm. r11,r21,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cce0
	if (!ctx.cr0.eq) goto loc_8225CCE0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
loc_8225CCE0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r3,r10,10364
	ctx.r3.s64 = ctx.r10.s64 + 10364;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 ^ 1;
loc_8225CD04:
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225ba30
	ctx.lr = 0x8225CD1C;
	sub_8225BA30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x8225CD28;
	__imp__RtlInitAnsiString(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,-3
	ctx.r10.s64 = -3;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lis r4,-32752
	ctx.r4.s64 = -2146435072;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CD78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8225cda4
	if (ctx.cr6.eq) goto loc_8225CDA4;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225cda4
	if (ctx.cr6.eq) goto loc_8225CDA4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225CDA4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CDB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x8225ce14
	if (!ctx.cr6.lt) goto loc_8225CE14;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8225cdf0
	if (ctx.cr6.eq) goto loc_8225CDF0;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CDD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CDF0;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8225CDF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CE04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822579c0
	ctx.lr = 0x8225CE10;
	sub_822579C0(ctx, base);
	// b 0x8225ce9c
	goto loc_8225CE9C;
loc_8225CE14:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwinm r8,r8,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225ce40
	if (ctx.cr6.lt) goto loc_8225CE40;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8225CE40:
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82258f18
	ctx.lr = 0x8225CE54;
	sub_82258F18(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x8225CE68;
	sub_82257B90(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_8225CE7C:
	// bl 0x8241dd3c
	ctx.lr = 0x8225CE80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225cf44
	goto loc_8225CF44;
loc_8225CE88:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225CE90;
	sub_82258210(ctx, base);
loc_8225CE90:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225cf4c
	if (!ctx.cr6.eq) goto loc_8225CF4C;
loc_8225CE9C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8225ceb0
	if (ctx.cr6.eq) goto loc_8225CEB0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822590f0
	ctx.lr = 0x8225CEB0;
	sub_822590F0(ctx, base);
loc_8225CEB0:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225CEC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225CEC8:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x822582f8
	ctx.lr = 0x8225CED0;
	sub_822582F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CF04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225cf40
	if (ctx.cr0.lt) goto loc_8225CF40;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x8225cf40
	if (ctx.cr6.eq) goto loc_8225CF40;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CF20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8225a1a0
	ctx.lr = 0x8225CF34;
	sub_8225A1A0(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CF40;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225CF40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8225CF44:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_8225CF4C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225CF58;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x822582f8
	ctx.lr = 0x8225CF60;
	sub_822582F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8225cfac
	if (!ctx.cr0.lt) goto loc_8225CFAC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822590f0
	ctx.lr = 0x8225CFA8;
	sub_822590F0(ctx, base);
	// b 0x8225cf40
	goto loc_8225CF40;
loc_8225CFAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8225d02c
	if (!ctx.cr6.eq) goto loc_8225D02C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225CFC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8225bb50
	ctx.lr = 0x8225CFD0;
	sub_8225BB50(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8225d000
	if (!ctx.cr0.eq) goto loc_8225D000;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225d000
	if (!ctx.cr6.eq) goto loc_8225D000;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8225b3a8
	ctx.lr = 0x8225CFFC;
	sub_8225B3A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8225D000:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225D00C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8225d02c
	if (!ctx.cr6.eq) goto loc_8225D02C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225cec8
	goto loc_8225CEC8;
loc_8225D02C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225d06c
	if (!ctx.cr6.eq) goto loc_8225D06C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225d06c
	if (ctx.cr0.lt) goto loc_8225D06C;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_8225D06C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225D078;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r8,r8,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8225d0a0
	if (ctx.cr6.lt) goto loc_8225D0A0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8225D0A0:
	// rlwimi r11,r9,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82258f18
	ctx.lr = 0x8225D0B4;
	sub_82258F18(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225d0e8
	if (ctx.cr6.eq) goto loc_8225D0E8;
	// bl 0x82088600
	ctx.lr = 0x8225D0C4;
	sub_82088600(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,60000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60000, ctx.xer);
	// blt cr6,0x8225d0e8
	if (ctx.cr6.lt) goto loc_8225D0E8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r16,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r16.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// b 0x8225d0ec
	goto loc_8225D0EC;
loc_8225D0E8:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
loc_8225D0EC:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stb r11,24(r27)
	PPC_STORE_U8(ctx.r27.u32 + 24, ctx.r11.u8);
	// bl 0x820882b8
	ctx.lr = 0x8225D11C;
	sub_820882B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225d150
	if (ctx.cr6.eq) goto loc_8225D150;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257840
	ctx.lr = 0x8225D134;
	sub_82257840(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8225d178
	if (!ctx.cr0.eq) goto loc_8225D178;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225D150:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_8225D158:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225D160;
	sub_82258210(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x8225ce7c
	goto loc_8225CE7C;
loc_8225D178:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r27,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r27.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82257b90
	ctx.lr = 0x8225D1A0;
	sub_82257B90(ctx, base);
	// b 0x8225d158
	goto loc_8225D158;
}

__attribute__((alias("__imp__sub_8225D1A4"))) PPC_WEAK_FUNC(sub_8225D1A4);
PPC_FUNC_IMPL(__imp__sub_8225D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225D1A8"))) PPC_WEAK_FUNC(sub_8225D1A8);
PPC_FUNC_IMPL(__imp__sub_8225D1A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,6232
	ctx.r30.s64 = ctx.r11.s64 + 6232;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225D1D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r10,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225d1ec
	if (!ctx.cr6.eq) goto loc_8225D1EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8225d240
	goto loc_8225D240;
loc_8225D1EC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 100);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,100(r30)
	PPC_STORE_U64(ctx.r30.u32 + 100, ctx.r11.u64);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82257158
	ctx.lr = 0x8225D21C;
	sub_82257158(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8225d248
	if (ctx.cr6.lt) goto loc_8225D248;
loc_8225D240:
	// bl 0x8225c870
	ctx.lr = 0x8225D244;
	sub_8225C870(ctx, base);
	// b 0x8225d260
	goto loc_8225D260;
loc_8225D248:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11296
	ctx.r11.s64 = ctx.r11.s64 + -11296;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82258280
	ctx.lr = 0x8225D260;
	sub_82258280(ctx, base);
loc_8225D260:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225D268;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8225D280"))) PPC_WEAK_FUNC(sub_8225D280);
PPC_FUNC_IMPL(__imp__sub_8225D280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225D288;
	sub_8224877C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32187
	ctx.r26.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,17916(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225D2A4;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r25,-16384
	ctx.r25.s64 = -1073741824;
	// bne 0x8225d2bc
	if (!ctx.cr0.eq) goto loc_8225D2BC;
	// lis r30,-32668
	ctx.r30.s64 = -2140930048;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
	// b 0x8225d3b0
	goto loc_8225D3B0;
loc_8225D2BC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r4,r10,10392
	ctx.r4.s64 = ctx.r10.s64 + 10392;
	// bl 0x8241de0c
	ctx.lr = 0x8225D2D8;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241df4c
	ctx.lr = 0x8225D2FC;
	__imp__NtQueryFullAttributesFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225d3a4
	if (ctx.cr0.lt) goto loc_8225D3A4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6232
	ctx.r11.s64 = ctx.r11.s64 + 6232;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,152(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// bl 0x82258cb8
	ctx.lr = 0x8225D328;
	sub_82258CB8(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225d364
	if (!ctx.cr0.eq) goto loc_8225D364;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8225aee0
	ctx.lr = 0x8225D340;
	sub_8225AEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225d364
	if (!ctx.cr0.eq) goto loc_8225D364;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-14896
	ctx.r4.s64 = ctx.r11.s64 + -14896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82259148
	ctx.lr = 0x8225D35C;
	sub_82259148(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d36c
	if (ctx.cr0.eq) goto loc_8225D36C;
loc_8225D364:
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,152
	ctx.r29.u64 = ctx.r29.u64 | 152;
loc_8225D36C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225d37c
	if (ctx.cr6.eq) goto loc_8225D37C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82257758
	ctx.lr = 0x8225D37C;
	sub_82257758(ctx, base);
loc_8225D37C:
	// rlwinm r11,r29,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xC0000000;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8225d3a4
	if (ctx.cr6.eq) goto loc_8225D3A4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225d3a4
	if (!ctx.cr6.eq) goto loc_8225D3A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8225d3b0
	goto loc_8225D3B0;
loc_8225D3A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8225D3B0:
	// rlwinm r11,r30,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8225d3d4
	if (!ctx.cr6.eq) goto loc_8225D3D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225d3d4
	if (ctx.cr6.eq) goto loc_8225D3D4;
	// bl 0x8225efd0
	ctx.lr = 0x8225D3C8;
	sub_8225EFD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,17916(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225D3D4;
	sub_82086968(ctx, base);
loc_8225D3D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8225D3E0"))) PPC_WEAK_FUNC(sub_8225D3E0);
PPC_FUNC_IMPL(__imp__sub_8225D3E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,6232
	ctx.r30.s64 = ctx.r11.s64 + 6232;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225D408;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225d420
	if (ctx.cr6.eq) goto loc_8225D420;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8225D420:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d440
	if (ctx.cr0.eq) goto loc_8225D440;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,288
	ctx.r11.u64 = ctx.r11.u64 | 288;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8225D440:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225d460
	if (!ctx.cr6.eq) goto loc_8225D460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c870
	ctx.lr = 0x8225D45C;
	sub_8225C870(ctx, base);
	// b 0x8225d504
	goto loc_8225D504;
loc_8225D460:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225d4b4
	if (ctx.cr6.eq) goto loc_8225D4B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r10,r10,-11296
	ctx.r10.s64 = ctx.r10.s64 + -11296;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// bl 0x82258280
	ctx.lr = 0x8225D4B4;
	sub_82258280(ctx, base);
loc_8225D4B4:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11864
	ctx.r11.s64 = ctx.r11.s64 + -11864;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8241dd2c
	ctx.lr = 0x8225D4D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// addi r10,r30,136
	ctx.r10.s64 = ctx.r30.s64 + 136;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r31.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225D4FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82088758
	ctx.lr = 0x8225D504;
	sub_82088758(ctx, base);
loc_8225D504:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225D50C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8225D524"))) PPC_WEAK_FUNC(sub_8225D524);
PPC_FUNC_IMPL(__imp__sub_8225D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225D528"))) PPC_WEAK_FUNC(sub_8225D528);
PPC_FUNC_IMPL(__imp__sub_8225D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8225D530;
	sub_82248768(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r23,r10,6228
	ctx.r23.s64 = ctx.r10.s64 + 6228;
	// lis r24,-32187
	ctx.r24.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,200(r23)
	PPC_STORE_U32(ctx.r23.u32 + 200, ctx.r11.u32);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// bl 0x82086c98
	ctx.lr = 0x8225D564;
	sub_82086C98(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x8225d768
	if (ctx.cr0.eq) goto loc_8225D768;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225D578;
	sub_82086C98(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8225d75c
	if (ctx.cr0.eq) goto loc_8225D75C;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// addi r25,r26,12
	ctx.r25.s64 = ctx.r26.s64 + 12;
	// addi r27,r26,8
	ctx.r27.s64 = ctx.r26.s64 + 8;
	// bl 0x8225b580
	ctx.lr = 0x8225D5A4;
	sub_8225B580(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,-3
	ctx.r10.s64 = -3;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r4,-32752
	ctx.r4.s64 = -2146435072;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r6,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r6.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8225D60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8225d624
	if (!ctx.cr6.eq) goto loc_8225D624;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// b 0x8225d6f0
	goto loc_8225D6F0;
loc_8225D624:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225d644
	if (!ctx.cr0.eq) goto loc_8225D644;
	// bl 0x8225b890
	ctx.lr = 0x8225D634;
	sub_8225B890(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225d6f0
	if (!ctx.cr6.eq) goto loc_8225D6F0;
loc_8225D644:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225d680
	if (!ctx.cr6.eq) goto loc_8225D680;
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8241df5c
	ctx.lr = 0x8225D668;
	__imp__NtQueryInformationFile(ctx, base);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225d6f0
	if (ctx.cr6.eq) goto loc_8225D6F0;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8225d688
	goto loc_8225D688;
loc_8225D680:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
loc_8225D688:
	// addi r6,r22,8
	ctx.r6.s64 = ctx.r22.s64 + 8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c390
	ctx.lr = 0x8225D69C;
	sub_8225C390(ctx, base);
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225d6f0
	if (ctx.cr6.eq) goto loc_8225D6F0;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225D6B4;
	sub_82086C98(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8225d6f0
	if (ctx.cr0.eq) goto loc_8225D6F0;
	// stw r22,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r22.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8225d77c
	if (!ctx.cr6.gt) goto loc_8225D77C;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086c98
	ctx.lr = 0x8225D6E8;
	sub_82086C98(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x8225d778
	if (!ctx.cr0.eq) goto loc_8225D778;
loc_8225D6F0:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225d70c
	if (ctx.cr6.eq) goto loc_8225D70C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225D70C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8225d728
	if (ctx.cr6.eq) goto loc_8225D728;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225D728:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225D734;
	sub_82086968(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225d748
	if (ctx.cr6.eq) goto loc_8225D748;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225D748;
	sub_82086968(ctx, base);
loc_8225D748:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8225d75c
	if (ctx.cr6.eq) goto loc_8225D75C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225D75C;
	sub_82086968(ctx, base);
loc_8225D75C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,17916(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 17916);
	// bl 0x82086968
	ctx.lr = 0x8225D768;
	sub_82086968(ctx, base);
loc_8225D768:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,200(r23)
	PPC_STORE_U32(ctx.r23.u32 + 200, ctx.r20.u32);
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x8225d7b0
	goto loc_8225D7B0;
loc_8225D778:
	// stw r22,64(r21)
	PPC_STORE_U32(ctx.r21.u32 + 64, ctx.r22.u32);
loc_8225D77C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r20,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r20.u32);
	// std r20,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r20.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-11296
	ctx.r11.s64 = ctx.r11.s64 + -11296;
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
	// stw r21,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r21.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82258280
	ctx.lr = 0x8225D7AC;
	sub_82258280(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225D7B0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8225D7B8"))) PPC_WEAK_FUNC(sub_8225D7B8);
PPC_FUNC_IMPL(__imp__sub_8225D7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225D7C0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225d82c
	if (ctx.cr6.eq) goto loc_8225D82C;
	// bl 0x8225a568
	ctx.lr = 0x8225D7DC;
	sub_8225A568(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225d82c
	if (ctx.cr0.eq) goto loc_8225D82C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225c530
	ctx.lr = 0x8225D7EC;
	sub_8225C530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225d808
	if (!ctx.cr0.eq) goto loc_8225D808;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,108(r31)
	PPC_STORE_U64(ctx.r31.u32 + 108, ctx.r11.u64);
	// b 0x8225d814
	goto loc_8225D814;
loc_8225D808:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_8225D810:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_8225D814:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822590f0
	ctx.lr = 0x8225D820;
	sub_822590F0(ctx, base);
loc_8225D820:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225D828;
	sub_82258210(ctx, base);
	// b 0x8225da04
	goto loc_8225DA04;
loc_8225D82C:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225d9a0
	if (!ctx.cr6.eq) goto loc_8225D9A0;
	// ld r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x8225d880
	if (ctx.cr6.eq) goto loc_8225D880;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225D854;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,29192
	ctx.r4.s64 = ctx.r11.s64 + 29192;
	// bl 0x82259148
	ctx.lr = 0x8225D868;
	sub_82259148(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225D870;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// ld r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x8225d88c
	goto loc_8225D88C;
loc_8225D880:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82258bd8
	ctx.lr = 0x8225D888;
	sub_82258BD8(ctx, base);
	// ld r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_8225D88C:
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bge cr6,0x8225d914
	if (!ctx.cr6.lt) goto loc_8225D914;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225d8b4
	if (ctx.cr6.eq) goto loc_8225D8B4;
	// bl 0x82088600
	ctx.lr = 0x8225D8A4;
	sub_82088600(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,10000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10000, ctx.xer);
	// blt cr6,0x8225da04
	if (ctx.cr6.lt) goto loc_8225DA04;
loc_8225D8B4:
	// bl 0x82088600
	ctx.lr = 0x8225D8B8;
	sub_82088600(ctx, base);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225a618
	ctx.lr = 0x8225D8DC;
	sub_8225A618(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r30.s64, ctx.xer);
	// bge cr6,0x8225d820
	if (!ctx.cr6.lt) goto loc_8225D820;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225a618
	ctx.lr = 0x8225D904;
	sub_8225A618(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// b 0x8225d820
	goto loc_8225D820;
loc_8225D914:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225D91C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8225b890
	ctx.lr = 0x8225D924;
	sub_8225B890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8225a2c0
	ctx.lr = 0x8225D934;
	sub_8225A2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225D940;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225d964
	if (ctx.cr6.eq) goto loc_8225D964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225d528
	ctx.lr = 0x8225D950;
	sub_8225D528(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225da04
	if (ctx.cr0.eq) goto loc_8225DA04;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x8225d810
	goto loc_8225D810;
loc_8225D964:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225da04
	if (ctx.cr6.eq) goto loc_8225DA04;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82267188
	ctx.lr = 0x8225D978;
	sub_82267188(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// divdu r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 / ctx.r10.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r11,17920(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8225da00
	goto loc_8225DA00;
loc_8225D9A0:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d9e4
	if (ctx.cr0.eq) goto loc_8225D9E4;
	// bl 0x82088600
	ctx.lr = 0x8225D9B0;
	sub_82088600(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// blt cr6,0x8225d9e4
	if (ctx.cr6.lt) goto loc_8225D9E4;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225D9C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x8225a760
	ctx.lr = 0x8225D9CC;
	sub_8225A760(ctx, base);
	// bl 0x82088600
	ctx.lr = 0x8225D9D0;
	sub_82088600(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225D9E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225da04
	goto loc_8225DA04;
loc_8225D9E4:
	// bl 0x82088600
	ctx.lr = 0x8225D9E8;
	sub_82088600(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r10,30000
	ctx.r10.s64 = 30000;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8225DA00:
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_8225DA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225DA0C"))) PPC_WEAK_FUNC(sub_8225DA0C);
PPC_FUNC_IMPL(__imp__sub_8225DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225DA10"))) PPC_WEAK_FUNC(sub_8225DA10);
PPC_FUNC_IMPL(__imp__sub_8225DA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8225DA18;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r26,r11,25216
	ctx.r26.s64 = ctx.r11.s64 + 25216;
	// addi r25,r10,10364
	ctx.r25.s64 = ctx.r10.s64 + 10364;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225da48
	if (ctx.cr6.eq) goto loc_8225DA48;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225DA48:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,54
	ctx.r10.s64 = 3538944;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r28,r10,61056
	ctx.r28.u64 = ctx.r10.u64 | 61056;
	// ori r27,r9,576
	ctx.r27.u64 = ctx.r9.u64 | 576;
	// addi r31,r11,6232
	ctx.r31.s64 = ctx.r11.s64 + 6232;
loc_8225DA60:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lis r30,-4096
	ctx.r30.s64 = -268435456;
	// bl 0x8241dd2c
	ctx.lr = 0x8225DA6C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225da9c
	if (ctx.cr6.eq) goto loc_8225DA9C;
	// bl 0x82088600
	ctx.lr = 0x8225DA7C;
	sub_82088600(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfc r10,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r30,30000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 30000, ctx.xer);
	// ble cr6,0x8225daac
	if (!ctx.cr6.gt) goto loc_8225DAAC;
loc_8225DA9C:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225daac
	if (ctx.cr6.eq) goto loc_8225DAAC;
	// li r30,30000
	ctx.r30.s64 = 30000;
loc_8225DAAC:
	// cmplwi cr6,r30,10000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10000, ctx.xer);
	// ble cr6,0x8225dac4
	if (!ctx.cr6.gt) goto loc_8225DAC4;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225dac4
	if (ctx.cr6.eq) goto loc_8225DAC4;
	// li r30,10000
	ctx.r30.s64 = 10000;
loc_8225DAC4:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225DACC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8208a000
	ctx.lr = 0x8225DADC;
	sub_8208A000(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225DAE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82088600
	ctx.lr = 0x8225DAE8;
	sub_82088600(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225db1c
	if (ctx.cr6.eq) goto loc_8225DB1C;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8225db1c
	if (!ctx.cr6.lt) goto loc_8225DB1C;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_8225DB1C:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225db44
	if (ctx.cr6.eq) goto loc_8225DB44;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subfc r9,r28,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r28.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// addze r8,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_8225DB44:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225db5c
	if (ctx.cr6.eq) goto loc_8225DB5C;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225dda4
	if (ctx.cr6.eq) goto loc_8225DDA4;
loc_8225DB5C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225DB80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225dba8
	if (!ctx.cr6.eq) goto loc_8225DBA8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8225c730
	ctx.lr = 0x8225DB94;
	sub_8225C730(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225dba8
	if (!ctx.cr0.eq) goto loc_8225DBA8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258210
	ctx.lr = 0x8225DBA8;
	sub_82258210(ctx, base);
loc_8225DBA8:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225dbc8
	if (ctx.cr6.eq) goto loc_8225DBC8;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225dbc8
	if (!ctx.cr6.eq) goto loc_8225DBC8;
	// bl 0x8225c248
	ctx.lr = 0x8225DBC8;
	sub_8225C248(ctx, base);
loc_8225DBC8:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// bge cr6,0x8225dbe0
	if (!ctx.cr6.lt) goto loc_8225DBE0;
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dc1c
	if (ctx.cr0.eq) goto loc_8225DC1C;
loc_8225DBE0:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225dc1c
	if (ctx.cr6.eq) goto loc_8225DC1C;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225dc1c
	if (!ctx.cr6.eq) goto loc_8225DC1C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225dc0c
	if (!ctx.cr6.eq) goto loc_8225DC0C;
	// bl 0x8225d7b8
	ctx.lr = 0x8225DC08;
	sub_8225D7B8(ctx, base);
	// b 0x8225dc1c
	goto loc_8225DC1C;
loc_8225DC0C:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_8225DC1C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x8225DC28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 + 136;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225dc3c
	if (ctx.cr6.eq) goto loc_8225DC3C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8225DC3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225DC54;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225dcd0
	if (ctx.cr6.eq) goto loc_8225DCD0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225dc1c
	if (!ctx.cr6.eq) goto loc_8225DC1C;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r30,20
	ctx.r29.s64 = ctx.r30.s64 + 20;
	// addi r8,r11,-32144
	ctx.r8.s64 = ctx.r11.s64 + -32144;
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// ori r5,r8,1
	ctx.r5.u64 = ctx.r8.u64 | 1;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,511
	ctx.r11.s64 = ctx.r11.s64 + 511;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// bl 0x8241df0c
	ctx.lr = 0x8225DCA8;
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225dc1c
	if (!ctx.cr6.eq) goto loc_8225DC1C;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225dc1c
	goto loc_8225DC1C;
loc_8225DCD0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225dce0
	if (!ctx.cr6.eq) goto loc_8225DCE0;
	// bl 0x8225bbc0
	ctx.lr = 0x8225DCE0;
	sub_8225BBC0(ctx, base);
loc_8225DCE0:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225dd8c
	if (ctx.cr6.eq) goto loc_8225DD8C;
	// b 0x8225dd1c
	goto loc_8225DD1C;
loc_8225DCF0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225DD0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225DD1C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225DD24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 + 136;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225dcf0
	if (!ctx.cr6.eq) goto loc_8225DCF0;
	// bl 0x8241dd3c
	ctx.lr = 0x8225DD3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8225dd6c
	goto loc_8225DD6C;
loc_8225DD40:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8225DD5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225DD6C:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd2c
	ctx.lr = 0x8225DD74;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r31,116
	ctx.r10.s64 = ctx.r31.s64 + 116;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225dd40
	if (!ctx.cr6.eq) goto loc_8225DD40;
	// bl 0x8241dd3c
	ctx.lr = 0x8225DD8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8225DD8C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225da60
	if (ctx.cr6.eq) goto loc_8225DA60;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82088758
	ctx.lr = 0x8225DDA0;
	sub_82088758(ctx, base);
	// b 0x8225da60
	goto loc_8225DA60;
loc_8225DDA4:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241dd3c
	ctx.lr = 0x8225DDAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ddd0
	if (ctx.cr6.eq) goto loc_8225DDD0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225DDD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8225DDDC"))) PPC_WEAK_FUNC(sub_8225DDDC);
PPC_FUNC_IMPL(__imp__sub_8225DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225DDE0"))) PPC_WEAK_FUNC(sub_8225DDE0);
PPC_FUNC_IMPL(__imp__sub_8225DDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225DDE8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,6228
	ctx.r31.s64 = ctx.r11.s64 + 6228;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// addi r9,r9,136
	ctx.r9.s64 = ctx.r9.s64 + 136;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r10,r4,144
	ctx.r10.s64 = ctx.r4.s64 + 144;
	// addi r11,r7,136
	ctx.r11.s64 = ctx.r7.s64 + 136;
	// addi r9,r8,144
	ctx.r9.s64 = ctx.r8.s64 + 144;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x8225DE58;
	sub_820882B8(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225de6c
	if (!ctx.cr0.eq) goto loc_8225DE6C;
loc_8225DE64:
	// bl 0x8208db08
	ctx.lr = 0x8225DE68;
	sub_8208DB08(ctx, base);
	// b 0x8225dedc
	goto loc_8225DEDC;
loc_8225DE6C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-9712
	ctx.r5.s64 = ctx.r10.s64 + -9712;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820885f0
	ctx.lr = 0x8225DE90;
	sub_820885F0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225debc
	if (!ctx.cr0.eq) goto loc_8225DEBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DEB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x8225de64
	goto loc_8225DE64;
loc_8225DEBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82088398
	ctx.lr = 0x8225DEC4;
	sub_82088398(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x820884b0
	ctx.lr = 0x8225DED0;
	sub_820884B0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82088358
	ctx.lr = 0x8225DED8;
	sub_82088358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225DEDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225DEE4"))) PPC_WEAK_FUNC(sub_8225DEE4);
PPC_FUNC_IMPL(__imp__sub_8225DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225DEE8"))) PPC_WEAK_FUNC(sub_8225DEE8);
PPC_FUNC_IMPL(__imp__sub_8225DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8225DEF0;
	sub_82248764(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,5152
	ctx.r31.s64 = ctx.r11.s64 + 5152;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,1260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225df2c
	if (ctx.cr6.eq) goto loc_8225DF2C;
	// li r3,1247
	ctx.r3.s64 = 1247;
	// b 0x8225e498
	goto loc_8225E498;
loc_8225DF2C:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8241dedc
	ctx.lr = 0x8225DF34;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225df44
	if (ctx.cr0.eq) goto loc_8225DF44;
loc_8225DF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225e498
	goto loc_8225E498;
loc_8225DF44:
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8241dedc
	ctx.lr = 0x8225DF4C;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225df5c
	if (ctx.cr0.eq) goto loc_8225DF5C;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8225e498
	goto loc_8225E498;
loc_8225DF5C:
	// bl 0x822586b0
	ctx.lr = 0x8225DF60;
	sub_822586B0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r22,0,2,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x3FFFFFFE;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm. r10,r10,0,29,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225df7c
	if (ctx.cr0.eq) goto loc_8225DF7C;
loc_8225DF74:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x8225e498
	goto loc_8225E498;
loc_8225DF7C:
	// rlwinm r11,r22,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8225df74
	if (ctx.cr6.eq) goto loc_8225DF74;
	// rlwinm r11,r22,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// beq cr6,0x8225df74
	if (ctx.cr6.eq) goto loc_8225DF74;
	// bl 0x82267190
	ctx.lr = 0x8225DF98;
	sub_82267190(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225dfa8
	if (!ctx.cr6.lt) goto loc_8225DFA8;
	// lis r29,4
	ctx.r29.s64 = 262144;
loc_8225DFA8:
	// lis r21,-32190
	ctx.r21.s64 = -2109603840;
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r23,-16384
	ctx.r23.s64 = -1073741824;
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r11,624(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 624);
	// addi r27,r10,17916
	ctx.r27.s64 = ctx.r10.s64 + 17916;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// bne cr6,0x8225e014
	if (!ctx.cr6.eq) goto loc_8225E014;
	// rlwinm r11,r22,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC0000000;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8225dfe4
	if (!ctx.cr6.eq) goto loc_8225DFE4;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8225DFE4:
	// bl 0x8225e518
	ctx.lr = 0x8225DFE8;
	sub_8225E518(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r7,r27,-20
	ctx.r7.s64 = ctx.r27.s64 + -20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// ori r6,r6,45056
	ctx.r6.u64 = ctx.r6.u64 | 45056;
	// bl 0x8225f318
	ctx.lr = 0x8225E004;
	sub_8225F318(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225df3c
	if (!ctx.cr0.eq) goto loc_8225DF3C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r19.u32);
loc_8225E014:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8225df3c
	if (!ctx.cr6.eq) goto loc_8225DF3C;
	// rlwinm. r9,r22,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r19,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r19.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r25,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// beq 0x8225e03c
	if (ctx.cr0.eq) goto loc_8225E03C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r11.u32);
loc_8225E03C:
	// cmpdi cr6,r26,-1
	ctx.cr6.compare<int64_t>(ctx.r26.s64, -1, ctx.xer);
	// beq cr6,0x8225e048
	if (ctx.cr6.eq) goto loc_8225E048;
	// std r26,1240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1240, ctx.r26.u64);
loc_8225E048:
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r29,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r29.u32);
	// li r11,250
	ctx.r11.s64 = 250;
	// stw r24,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r24.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r28,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r28.u32);
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r10,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r10.u32);
	// bl 0x82088600
	ctx.lr = 0x8225E070;
	sub_82088600(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r8,r31,1080
	ctx.r8.s64 = ctx.r31.s64 + 1080;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// addi r7,r31,1080
	ctx.r7.s64 = ctx.r31.s64 + 1080;
	// stw r10,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r10.u32);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// addi r11,r8,256
	ctx.r11.s64 = ctx.r8.s64 + 256;
	// ori r9,r9,43690
	ctx.r9.u64 = ctx.r9.u64 | 43690;
	// addi r10,r7,256
	ctx.r10.s64 = ctx.r7.s64 + 256;
	// stw r11,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r11.u32);
	// stw r9,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r9.u32);
	// addi r11,r31,1080
	ctx.r11.s64 = ctx.r31.s64 + 1080;
	// stw r10,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8241e07c
	ctx.lr = 0x8225E0B0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82086c98
	ctx.lr = 0x8225E0BC;
	sub_82086C98(ctx, base);
	// stw r3,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e27c
	if (ctx.cr0.eq) goto loc_8225E27C;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82088070
	ctx.lr = 0x8225E0D8;
	sub_82088070(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// stw r19,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r19.u32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r9,r7,1024
	ctx.r9.s64 = ctx.r7.s64 + 1024;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// b 0x8225e124
	goto loc_8225E124;
loc_8225E120:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_8225E124:
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r8,124
	ctx.r11.s64 = ctx.r8.s64 + 124;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bdnz 0x8225e120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225E120;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// bl 0x82086c98
	ctx.lr = 0x8225E15C;
	sub_82086C98(ctx, base);
	// stw r3,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e27c
	if (ctx.cr0.eq) goto loc_8225E27C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// li r30,1024
	ctx.r30.s64 = 1024;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// stw r25,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r25.u32);
	// stw r25,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r25.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// stw r28,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r28.u32);
	// bl 0x82086c98
	ctx.lr = 0x8225E19C;
	sub_82086C98(ctx, base);
	// stw r3,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e27c
	if (ctx.cr0.eq) goto loc_8225E27C;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// rlwinm r10,r22,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC0000000;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// bne cr6,0x8225e1d8
	if (!ctx.cr6.eq) goto loc_8225E1D8;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_8225E1D8:
	// addi r11,r31,1080
	ctx.r11.s64 = ctx.r31.s64 + 1080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8225d280
	ctx.lr = 0x8225E1E8;
	sub_8225D280(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225e1f8
	if (!ctx.cr0.lt) goto loc_8225E1F8;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x8225e300
	goto loc_8225E300;
loc_8225E1F8:
	// addi r11,r31,1080
	ctx.r11.s64 = ctx.r31.s64 + 1080;
	// lwz r4,1088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82258cb8
	ctx.lr = 0x8225E208;
	sub_82258CB8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8225e300
	if (!ctx.cr0.eq) goto loc_8225E300;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8225e238
	if (!ctx.cr6.eq) goto loc_8225E238;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// bl 0x8225aee0
	ctx.lr = 0x8225E228;
	sub_8225AEE0(ctx, base);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bne cr6,0x8225e238
	if (!ctx.cr6.eq) goto loc_8225E238;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// b 0x8225e244
	goto loc_8225E244;
loc_8225E238:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r11.u32);
loc_8225E244:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82086c98
	ctx.lr = 0x8225E250;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225e27c
	if (ctx.cr0.eq) goto loc_8225E27C;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8241e07c
	ctx.lr = 0x8225E260;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// stw r30,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r30.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82086c98
	ctx.lr = 0x8225E270;
	sub_82086C98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r4.u32);
	// bne 0x8225e284
	if (!ctx.cr0.eq) goto loc_8225E284;
loc_8225E27C:
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x8225e300
	goto loc_8225E300;
loc_8225E284:
	// lwz r5,1252(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// bl 0x82258b18
	ctx.lr = 0x8225E290;
	sub_82258B18(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8225e300
	if (!ctx.cr0.eq) goto loc_8225E300;
	// rlwinm. r10,r22,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// beq 0x8225e2a8
	if (ctx.cr0.eq) goto loc_8225E2A8;
	// b 0x8225e2b8
	goto loc_8225E2B8;
loc_8225E2A8:
	// rlwinm r10,r22,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x20;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8225E2B8:
	// stw r11,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8225e2ec
	if (ctx.cr6.eq) goto loc_8225E2EC;
	// lwz r4,1232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// bl 0x8225b958
	ctx.lr = 0x8225E2D0;
	sub_8225B958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225e2e4
	if (!ctx.cr0.lt) goto loc_8225E2E4;
	// bl 0x8241df3c
	ctx.lr = 0x8225E2DC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8225e300
	goto loc_8225E300;
loc_8225E2E4:
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// stw r19,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
loc_8225E2EC:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8225dde0
	ctx.lr = 0x8225E2F8;
	sub_8225DDE0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8225e308
	if (ctx.cr0.eq) goto loc_8225E308;
loc_8225E300:
	// bl 0x82259e78
	ctx.lr = 0x8225E304;
	sub_82259E78(ctx, base);
	// b 0x8225e494
	goto loc_8225E494;
loc_8225E308:
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// bl 0x8241dd2c
	ctx.lr = 0x8225E310;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// rlwinm. r11,r22,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e378
	if (ctx.cr0.eq) goto loc_8225E378;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// b 0x8225e360
	goto loc_8225E360;
loc_8225E328:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r8,r10,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8225e35c
	if (!ctx.cr0.eq) goto loc_8225E35C;
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bne cr6,0x8225e35c
	if (!ctx.cr6.eq) goto loc_8225E35C;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
loc_8225E35C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8225E360:
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225e328
	if (!ctx.cr6.eq) goto loc_8225E328;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r11.u32);
loc_8225E378:
	// rlwinm. r11,r22,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e3dc
	if (ctx.cr0.eq) goto loc_8225E3DC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// b 0x8225e3c4
	goto loc_8225E3C4;
loc_8225E38C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r8,r10,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8225e3c0
	if (!ctx.cr0.eq) goto loc_8225E3C0;
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// bne cr6,0x8225e3c0
	if (!ctx.cr6.eq) goto loc_8225E3C0;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
loc_8225E3C0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8225E3C4:
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225e38c
	if (!ctx.cr6.eq) goto loc_8225E38C;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r11.u32);
loc_8225E3DC:
	// bl 0x8241dd3c
	ctx.lr = 0x8225E3E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,1304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225e3fc
	if (!ctx.cr0.eq) goto loc_8225E3FC;
	// stw r19,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r19.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bl 0x82258210
	ctx.lr = 0x8225E3FC;
	sub_82258210(ctx, base);
loc_8225E3FC:
	// lwz r30,624(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 624);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x8225E410;
	sub_82248A40(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r9,r11,-27224
	ctx.r9.s64 = ctx.r11.s64 + -27224;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// addi r5,r11,-13488
	ctx.r5.s64 = ctx.r11.s64 + -13488;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// addi r4,r11,-24216
	ctx.r4.s64 = ctx.r11.s64 + -24216;
	// addi r8,r8,32088
	ctx.r8.s64 = ctx.r8.s64 + 32088;
	// addi r7,r7,32440
	ctx.r7.s64 = ctx.r7.s64 + 32440;
	// addi r6,r6,32264
	ctx.r6.s64 = ctx.r6.s64 + 32264;
	// lis r3,-32178
	ctx.r3.s64 = -2108817408;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r4,7336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7336, ctx.r4.u32);
	// stw r31,624(r21)
	PPC_STORE_U32(ctx.r21.u32 + 624, ctx.r31.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8225E494:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8225E498:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8225E4A0"))) PPC_WEAK_FUNC(sub_8225E4A0);
PPC_FUNC_IMPL(__imp__sub_8225E4A0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,1784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1784);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225e4dc
	if (!ctx.cr6.eq) goto loc_8225E4DC;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,309
	ctx.r3.u64 = ctx.r3.u64 | 309;
	// b 0x8225e504
	goto loc_8225E504;
loc_8225E4DC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x8241dffc
	ctx.lr = 0x8225E4EC;
	__imp__RtlImageXexHeaderField(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,549
	ctx.r11.u64 = ctx.r11.u64 | 549;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8225E504:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8225E518"))) PPC_WEAK_FUNC(sub_8225E518);
PPC_FUNC_IMPL(__imp__sub_8225E518) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8225e4a0
	ctx.lr = 0x8225E534;
	sub_8225E4A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225e550
	if (ctx.cr0.lt) goto loc_8225E550;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8225E550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8225E568"))) PPC_WEAK_FUNC(sub_8225E568);
PPC_FUNC_IMPL(__imp__sub_8225E568) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r3,556
	ctx.r3.s64 = ctx.r3.s64 + 556;
	// bl 0x8241e47c
	ctx.lr = 0x8225E5A8;
	__imp__XeCryptSha(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e46c
	ctx.lr = 0x8225E5B8;
	__imp__XeKeysConsoleSignatureVerification(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225e5d0
	if (ctx.cr0.eq) goto loc_8225E5D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225e5d4
	if (!ctx.cr6.eq) goto loc_8225E5D4;
loc_8225E5D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225E5D4:
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

__attribute__((alias("__imp__sub_8225E5E8"))) PPC_WEAK_FUNC(sub_8225E5E8);
PPC_FUNC_IMPL(__imp__sub_8225E5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225E5F0;
	sub_8224878C(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r3,r1,177
	ctx.r3.s64 = ctx.r1.s64 + 177;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x82248f70
	ctx.lr = 0x8225E61C;
	sub_82248F70(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10604
	ctx.r11.s64 = ctx.r11.s64 + 10604;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241df1c
	ctx.lr = 0x8225E660;
	__imp__NtCreateFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225e710
	if (ctx.cr0.lt) goto loc_8225E710;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r30,556
	ctx.r3.s64 = ctx.r30.s64 + 556;
	// bl 0x8241e47c
	ctx.lr = 0x8225E68C;
	__imp__XeCryptSha(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8241e48c
	ctx.lr = 0x8225E698;
	__imp__XeKeysConsolePrivateKeySign(ctx, base);
	// li r29,2048
	ctx.r29.s64 = 2048;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df9c
	ctx.lr = 0x8225E6C4;
	__imp__NtReadFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225e708
	if (ctx.cr0.lt) goto loc_8225E708;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,644
	ctx.r5.s64 = 644;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x8225E6DC;
	sub_82248A40(ctx, base);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x8225E704;
	__imp__NtWriteFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8225E708:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x8225E710;
	__imp__NtClose(ctx, base);
loc_8225E710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225E71C"))) PPC_WEAK_FUNC(sub_8225E71C);
PPC_FUNC_IMPL(__imp__sub_8225E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E720"))) PPC_WEAK_FUNC(sub_8225E720);
PPC_FUNC_IMPL(__imp__sub_8225E720) {
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
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,145
	ctx.r3.s64 = ctx.r1.s64 + 145;
	// bl 0x82248f70
	ctx.lr = 0x8225E750;
	sub_82248F70(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82248f70
	ctx.lr = 0x8225E760;
	sub_82248F70(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r5,644
	ctx.r5.s64 = 644;
	// addi r11,r11,6592
	ctx.r11.s64 = ctx.r11.s64 + 6592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82248f70
	ctx.lr = 0x8225E778;
	sub_82248F70(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10604
	ctx.r11.s64 = ctx.r11.s64 + 10604;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241df1c
	ctx.lr = 0x8225E7BC;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225e7f8
	if (ctx.cr0.lt) goto loc_8225E7F8;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x8225E7F0;
	__imp__NtWriteFile(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x8225E7F8;
	__imp__NtClose(ctx, base);
loc_8225E7F8:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
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

__attribute__((alias("__imp__sub_8225E810"))) PPC_WEAK_FUNC(sub_8225E810);
PPC_FUNC_IMPL(__imp__sub_8225E810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8225E818;
	sub_82248774(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r26,r11,10588
	ctx.r26.s64 = ctx.r11.s64 + 10588;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r26,-56
	ctx.r5.s64 = ctx.r26.s64 + -56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8241e43c
	ctx.lr = 0x8225E84C;
	__imp___snprintf(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x8225E858;
	__imp__RtlInitAnsiString(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x8225E868;
	sub_82248F70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r24,r31,24
	ctx.r24.s64 = ctx.r31.s64 + 24;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241df1c
	ctx.lr = 0x8225E8B0;
	__imp__NtCreateFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225ea18
	if (ctx.cr0.lt) goto loc_8225EA18;
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r25,5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 5, ctx.xer);
	// bge cr6,0x8225e8c8
	if (!ctx.cr6.lt) goto loc_8225E8C8;
	// li r25,5
	ctx.r25.s64 = 5;
loc_8225E8C8:
	// rlwinm r11,r25,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 12) & 0xFFFFF000;
	// lis r5,144
	ctx.r5.s64 = 9437184;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,12288
	ctx.r5.u64 = ctx.r5.u64 | 12288;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8241e01c
	ctx.lr = 0x8225E8EC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225ea18
	if (ctx.cr0.lt) goto loc_8225EA18;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8241df6c
	ctx.lr = 0x8225E90C;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225ea18
	if (ctx.cr0.lt) goto loc_8225EA18;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r4,64
	ctx.r4.s64 = 64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mulld r30,r11,r9
	ctx.r30.s64 = ctx.r11.s64 * ctx.r9.s64;
	// bl 0x8241e43c
	ctx.lr = 0x8225E940;
	__imp___snprintf(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241de0c
	ctx.lr = 0x8225E94C;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stb r25,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r25.u8);
	// addi r9,r30,-4096
	ctx.r9.s64 = ctx.r30.s64 + -4096;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x8225E988;
	sub_82248A40(ctx, base);
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8225e9d8
	if (!ctx.cr0.lt) goto loc_8225E9D8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248f70
	ctx.lr = 0x8225E9B8;
	sub_82248F70(ctx, base);
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225ea18
	if (ctx.cr0.lt) goto loc_8225EA18;
loc_8225E9D8:
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8225ea10
	if (ctx.cr0.eq) goto loc_8225EA10;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225EA10:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8225ea4c
	if (!ctx.cr6.lt) goto loc_8225EA4C;
loc_8225EA18:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ea28
	if (ctx.cr6.eq) goto loc_8225EA28;
	// bl 0x8241dddc
	ctx.lr = 0x8225EA28;
	__imp__NtClose(ctx, base);
loc_8225EA28:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225ea4c
	if (ctx.cr6.eq) goto loc_8225EA4C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8241e05c
	ctx.lr = 0x8225EA4C;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_8225EA4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8225EA58"))) PPC_WEAK_FUNC(sub_8225EA58);
PPC_FUNC_IMPL(__imp__sub_8225EA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8225EA60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8241e4bc
	ctx.lr = 0x8225EA74;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225eb24
	if (ctx.cr0.lt) goto loc_8225EB24;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225eb24
	if (ctx.cr0.lt) goto loc_8225EB24;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// li r5,36
	ctx.r5.s64 = 36;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x8225EB10;
	sub_82248A40(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8225e5e8
	ctx.lr = 0x8225EB18;
	sub_8225E5E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8241e4ac
	ctx.lr = 0x8225EB24;
	__imp__NtFlushBuffersFile(ctx, base);
loc_8225EB24:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8241e49c
	ctx.lr = 0x8225EB44;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8225EB4C"))) PPC_WEAK_FUNC(sub_8225EB4C);
PPC_FUNC_IMPL(__imp__sub_8225EB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EB50"))) PPC_WEAK_FUNC(sub_8225EB50);
PPC_FUNC_IMPL(__imp__sub_8225EB50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ddfc
	ctx.lr = 0x8225EBA0;
	__imp__NtOpenFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225ebf0
	if (ctx.cr0.lt) goto loc_8225EBF0;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8241df6c
	ctx.lr = 0x8225EBC0;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241dddc
	ctx.lr = 0x8225EBCC;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8225ebf0
	if (ctx.cr6.lt) goto loc_8225EBF0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8225ebf0
	if (ctx.cr6.eq) goto loc_8225EBF0;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,335
	ctx.r31.u64 = ctx.r31.u64 | 335;
loc_8225EBF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8225EC0C"))) PPC_WEAK_FUNC(sub_8225EC0C);
PPC_FUNC_IMPL(__imp__sub_8225EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EC10"))) PPC_WEAK_FUNC(sub_8225EC10);
PPC_FUNC_IMPL(__imp__sub_8225EC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8225EC18;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82248f70
	ctx.lr = 0x8225EC44;
	sub_82248F70(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r28,r11,10560
	ctx.r28.s64 = ctx.r11.s64 + 10560;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r5,r28,-28
	ctx.r5.s64 = ctx.r28.s64 + -28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e43c
	ctx.lr = 0x8225EC60;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241de0c
	ctx.lr = 0x8225EC6C;
	__imp__RtlInitAnsiString(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e43c
	ctx.lr = 0x8225EC80;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241de0c
	ctx.lr = 0x8225EC8C;
	__imp__RtlInitAnsiString(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8225ecc8
	if (ctx.cr6.eq) goto loc_8225ECC8;
	// mulli r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 * 36;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,556
	ctx.r3.s64 = ctx.r11.s64 + 556;
	// bl 0x82248f70
	ctx.lr = 0x8225ECAC;
	sub_82248F70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82267488
	ctx.lr = 0x8225ECB8;
	sub_82267488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225ecc8
	if (!ctx.cr0.lt) goto loc_8225ECC8;
loc_8225ECC0:
	// bl 0x8241df3c
	ctx.lr = 0x8225ECC4;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x8225ed20
	goto loc_8225ED20;
loc_8225ECC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8225eb50
	ctx.lr = 0x8225ECD4;
	sub_8225EB50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225ed1c
	if (!ctx.cr0.lt) goto loc_8225ED1C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82267488
	ctx.lr = 0x8225ECE8;
	sub_82267488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ecc0
	if (ctx.cr0.lt) goto loc_8225ECC0;
	// mulli r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 * 36;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,556
	ctx.r3.s64 = ctx.r11.s64 + 556;
	// bl 0x82248f70
	ctx.lr = 0x8225ED08;
	sub_82248F70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8225eb50
	ctx.lr = 0x8225ED14;
	sub_8225EB50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ecc0
	if (ctx.cr0.lt) goto loc_8225ECC0;
loc_8225ED1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225ED20:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8225ED28"))) PPC_WEAK_FUNC(sub_8225ED28);
PPC_FUNC_IMPL(__imp__sub_8225ED28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225ED30;
	sub_8224878C(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8241e43c
	ctx.lr = 0x8225ED54;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241de0c
	ctx.lr = 0x8225ED60;
	__imp__RtlInitAnsiString(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241e43c
	ctx.lr = 0x8225ED74;
	__imp___snprintf(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241de0c
	ctx.lr = 0x8225ED80;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e4dc
	ctx.lr = 0x8225ED8C;
	__imp__ObCreateSymbolicLink(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225EDA0"))) PPC_WEAK_FUNC(sub_8225EDA0);
PPC_FUNC_IMPL(__imp__sub_8225EDA0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r10,6584
	ctx.r31.s64 = ctx.r10.s64 + 6584;
	// addi r30,r11,10504
	ctx.r30.s64 = ctx.r11.s64 + 10504;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225ee00
	if (ctx.cr6.eq) goto loc_8225EE00;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e43c
	ctx.lr = 0x8225EDEC;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241de0c
	ctx.lr = 0x8225EDF8;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e4ec
	ctx.lr = 0x8225EE00;
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_8225EE00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225ee3c
	if (ctx.cr6.eq) goto loc_8225EE3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e43c
	ctx.lr = 0x8225EE28;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241de0c
	ctx.lr = 0x8225EE34;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e4ec
	ctx.lr = 0x8225EE3C;
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_8225EE3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225ee78
	if (ctx.cr6.eq) goto loc_8225EE78;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e43c
	ctx.lr = 0x8225EE64;
	__imp___snprintf(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241de0c
	ctx.lr = 0x8225EE70;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e4ec
	ctx.lr = 0x8225EE78;
	__imp__ObDeleteSymbolicLink(ctx, base);
loc_8225EE78:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_8225EE90"))) PPC_WEAK_FUNC(sub_8225EE90);
PPC_FUNC_IMPL(__imp__sub_8225EE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8225EE98;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r10,6584
	ctx.r29.s64 = ctx.r10.s64 + 6584;
	// addi r28,r11,10504
	ctx.r28.s64 = ctx.r11.s64 + 10504;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r29,-4
	ctx.r7.s64 = ctx.r29.s64 + -4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225ed28
	ctx.lr = 0x8225EECC;
	sub_8225ED28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225ef20
	if (ctx.cr0.lt) goto loc_8225EF20;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8225ef18
	if (ctx.cr6.eq) goto loc_8225EF18;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225ed28
	ctx.lr = 0x8225EEF4;
	sub_8225ED28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8225ef20
	if (ctx.cr0.lt) goto loc_8225EF20;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r29,4
	ctx.r7.s64 = ctx.r29.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225ed28
	ctx.lr = 0x8225EF14;
	sub_8225ED28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8225EF18:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8225ef24
	if (!ctx.cr6.lt) goto loc_8225EF24;
loc_8225EF20:
	// bl 0x8225eda0
	ctx.lr = 0x8225EF24;
	sub_8225EDA0(ctx, base);
loc_8225EF24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8225EF30"))) PPC_WEAK_FUNC(sub_8225EF30);
PPC_FUNC_IMPL(__imp__sub_8225EF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225EF38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,11
	ctx.r3.s64 = 11;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8241dedc
	ctx.lr = 0x8225EF48;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225efc0
	if (!ctx.cr0.eq) goto loc_8225EFC0;
	// bl 0x8241e4bc
	ctx.lr = 0x8225EF54;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r31,r11,17940
	ctx.r31.s64 = ctx.r11.s64 + 17940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225EF64;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r9,17968
	ctx.r3.s64 = ctx.r9.s64 + 17968;
	// stw r11,6592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6592, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r10,6592
	ctx.r30.s64 = ctx.r10.s64 + 6592;
	// bl 0x8241e51c
	ctx.lr = 0x8225EF88;
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,17984
	ctx.r29.s64 = ctx.r11.s64 + 17984;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8241e50c
	ctx.lr = 0x8225EFA8;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e4fc
	ctx.lr = 0x8225EFB0;
	__imp__KeResetEvent(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8241dd3c
	ctx.lr = 0x8225EFBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x8241e49c
	ctx.lr = 0x8225EFC0;
	__imp__KeLeaveCriticalRegion(ctx, base);
loc_8225EFC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225EFCC"))) PPC_WEAK_FUNC(sub_8225EFCC);
PPC_FUNC_IMPL(__imp__sub_8225EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EFD0"))) PPC_WEAK_FUNC(sub_8225EFD0);
PPC_FUNC_IMPL(__imp__sub_8225EFD0) {
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
	// lwz r11,6572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225eff4
	if (ctx.cr6.eq) goto loc_8225EFF4;
	// bl 0x8225ef30
	ctx.lr = 0x8225EFF0;
	sub_8225EF30(ctx, base);
	// b 0x8225effc
	goto loc_8225EFFC;
loc_8225EFF4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,622
	ctx.r3.u64 = ctx.r3.u64 | 622;
loc_8225EFFC:
	// bl 0x8241df3c
	ctx.lr = 0x8225F000;
	__imp__RtlNtStatusToDosError(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225F010"))) PPC_WEAK_FUNC(sub_8225F010);
PPC_FUNC_IMPL(__imp__sub_8225F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225F018;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r31,r11,6568
	ctx.r31.s64 = ctx.r11.s64 + 6568;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225f0c0
	if (ctx.cr6.eq) goto loc_8225F0C0;
	// bl 0x8241e4bc
	ctx.lr = 0x8225F034;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225f058
	if (ctx.cr6.eq) goto loc_8225F058;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,18000
	ctx.r3.s64 = ctx.r10.s64 + 18000;
	// bl 0x8241e52c
	ctx.lr = 0x8225F058;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_8225F058:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r30,r11,17940
	ctx.r30.s64 = ctx.r11.s64 + 17940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225F068;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r9,17968
	ctx.r3.s64 = ctx.r9.s64 + 17968;
	// stw r11,6592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6592, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241e51c
	ctx.lr = 0x8225F088;
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,17984
	ctx.r29.s64 = ctx.r11.s64 + 17984;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8241e50c
	ctx.lr = 0x8225F0A8;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e4fc
	ctx.lr = 0x8225F0B0;
	__imp__KeResetEvent(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8225F0B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x8241e49c
	ctx.lr = 0x8225F0BC;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// b 0x8225f0d0
	goto loc_8225F0D0;
loc_8225F0C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225f0d0
	if (ctx.cr6.eq) goto loc_8225F0D0;
	// bl 0x8225eda0
	ctx.lr = 0x8225F0D0;
	sub_8225EDA0(ctx, base);
loc_8225F0D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225F0E0"))) PPC_WEAK_FUNC(sub_8225F0E0);
PPC_FUNC_IMPL(__imp__sub_8225F0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8225F0E8;
	sub_82248778(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,664(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r28,r11,6568
	ctx.r28.s64 = ctx.r11.s64 + 6568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r25,r10,17984
	ctx.r25.s64 = ctx.r10.s64 + 17984;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f124
	if (ctx.cr6.eq) goto loc_8225F124;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225f2ec
	if (ctx.cr0.lt) goto loc_8225F2EC;
loc_8225F124:
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8225e810
	ctx.lr = 0x8225F13C;
	sub_8225E810(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225f2d4
	if (ctx.cr0.lt) goto loc_8225F2D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225f174
	if (ctx.cr6.eq) goto loc_8225F174;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8225e810
	ctx.lr = 0x8225F168;
	sub_8225E810(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225f26c
	if (ctx.cr0.lt) goto loc_8225F26C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8225F174:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,10588
	ctx.r4.s64 = ctx.r11.s64 + 10588;
	// bl 0x8225ee90
	ctx.lr = 0x8225F188;
	sub_8225EE90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8225f26c
	if (ctx.cr0.lt) goto loc_8225F26C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r10,18000
	ctx.r29.s64 = ctx.r10.s64 + 18000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e52c
	ctx.lr = 0x8225F1AC;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241e51c
	ctx.lr = 0x8225F1C8;
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r26,r11,17968
	ctx.r26.s64 = ctx.r11.s64 + 17968;
loc_8225F1D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8241e50c
	ctx.lr = 0x8225F1E8;
	__imp__KeWaitForSingleObject(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8225ea58
	ctx.lr = 0x8225F1FC;
	sub_8225EA58(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225f218
	if (ctx.cr6.eq) goto loc_8225F218;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8225ea58
	ctx.lr = 0x8225F218;
	sub_8225EA58(ctx, base);
loc_8225F218:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8225f234
	if (!ctx.cr6.eq) goto loc_8225F234;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241e51c
	ctx.lr = 0x8225F234;
	__imp__KeSetEvent(ctx, base);
loc_8225F234:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x8225f248
	if (ctx.cr6.eq) goto loc_8225F248;
	// bl 0x8241e35c
	ctx.lr = 0x8225F240;
	__imp__XamTaskShouldExit(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225f1d0
	if (ctx.cr0.eq) goto loc_8225F1D0;
loc_8225F248:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225f268
	if (ctx.cr6.eq) goto loc_8225F268;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241e52c
	ctx.lr = 0x8225F268;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_8225F268:
	// bl 0x8225eda0
	ctx.lr = 0x8225F26C;
	sub_8225EDA0(ctx, base);
loc_8225F26C:
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8241e4cc
	ctx.lr = 0x8225F274;
	__imp__IoDismountVolume(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8241de5c
	ctx.lr = 0x8225F27C;
	__imp__ObDereferenceObject(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8241e05c
	ctx.lr = 0x8225F294;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8241dddc
	ctx.lr = 0x8225F29C;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8225f2d4
	if (ctx.cr6.eq) goto loc_8225F2D4;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x8241e4cc
	ctx.lr = 0x8225F2AC;
	__imp__IoDismountVolume(ctx, base);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x8241de5c
	ctx.lr = 0x8225F2B4;
	__imp__ObDereferenceObject(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8241e05c
	ctx.lr = 0x8225F2CC;
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8241dddc
	ctx.lr = 0x8225F2D4;
	__imp__NtClose(ctx, base);
loc_8225F2D4:
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f2ec
	if (ctx.cr6.eq) goto loc_8225F2EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225F2EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241e51c
	ctx.lr = 0x8225F308;
	__imp__KeSetEvent(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8225F314"))) PPC_WEAK_FUNC(sub_8225F314);
PPC_FUNC_IMPL(__imp__sub_8225F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F318"))) PPC_WEAK_FUNC(sub_8225F318);
PPC_FUNC_IMPL(__imp__sub_8225F318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x8225F320;
	sub_82248760(ctx, base);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,1023
	ctx.r5.s64 = 1023;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x82248f70
	ctx.lr = 0x8225F350;
	sub_82248F70(ctx, base);
	// lis r18,-32178
	ctx.r18.s64 = -2108817408;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r11,6572(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6572);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bne cr6,0x8225f798
	if (!ctx.cr6.eq) goto loc_8225F798;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,61440
	ctx.r11.u64 = ctx.r11.u64 | 61440;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8225f798
	if (ctx.cr6.gt) goto loc_8225F798;
	// clrlwi. r11,r21,23
	ctx.r11.u64 = ctx.r21.u32 & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225f798
	if (!ctx.cr0.eq) goto loc_8225F798;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8241dedc
	ctx.lr = 0x8225F3A4;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225f3b4
	if (ctx.cr0.eq) goto loc_8225F3B4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_8225F3B4:
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10604
	ctx.r11.s64 = ctx.r11.s64 + 10604;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lis r4,-16368
	ctx.r4.s64 = -1072693248;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241df1c
	ctx.lr = 0x8225F3F8;
	__imp__NtCreateFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8225f408
	if (!ctx.cr0.lt) goto loc_8225F408;
loc_8225F400:
	// bl 0x8241df3c
	ctx.lr = 0x8225F404;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x8225f79c
	goto loc_8225F79C;
loc_8225F408:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df9c
	ctx.lr = 0x8225F434;
	__imp__NtReadFile(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8241dddc
	ctx.lr = 0x8225F440;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8225f450
	if (!ctx.cr6.lt) goto loc_8225F450;
loc_8225F448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8225f400
	goto loc_8225F400;
loc_8225F450:
	// lis r11,19055
	ctx.r11.s64 = 1248788480;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ori r31,r11,29544
	ctx.r31.u64 = ctx.r11.u64 | 29544;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8225f480
	if (!ctx.cr6.eq) goto loc_8225F480;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8225e568
	ctx.lr = 0x8225F46C;
	sub_8225E568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225f480
	if (ctx.cr0.eq) goto loc_8225F480;
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8225f498
	if (ctx.cr6.eq) goto loc_8225F498;
loc_8225F480:
	// addi r11,r1,796
	ctx.r11.s64 = ctx.r1.s64 + 796;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r19,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r19.u32);
	// ori r25,r25,15
	ctx.r25.u64 = ctx.r25.u64 | 15;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_8225F498:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8225f510
	if (ctx.cr6.eq) goto loc_8225F510;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,717
	ctx.r11.s64 = ctx.r1.s64 + 717;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r7,240
	ctx.r7.s64 = 240;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8225F4B4:
	// addi r8,r1,796
	ctx.r8.s64 = ctx.r1.s64 + 796;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8225f4f0
	if (!ctx.cr6.eq) goto loc_8225F4F0;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subfc r9,r7,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// bge cr6,0x8225f4e4
	if (!ctx.cr6.lt) goto loc_8225F4E4;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x8225f4e8
	goto loc_8225F4E8;
loc_8225F4E4:
	// subfze r9,r30
loc_8225F4E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8225f4f8
	if (!ctx.cr6.eq) goto loc_8225F4F8;
loc_8225F4F0:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stwx r19,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r19.u32);
loc_8225F4F8:
	// stwx r24,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r24.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8225f4b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225F4B4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x8225f594
	goto loc_8225F594;
loc_8225F510:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r11,r1,796
	ctx.r11.s64 = ctx.r1.s64 + 796;
loc_8225F518:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8225f534
	if (ctx.cr6.eq) goto loc_8225F534;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x8225f518
	if (ctx.cr6.lt) goto loc_8225F518;
loc_8225F534:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x8225f54c
	if (!ctx.cr6.eq) goto loc_8225F54C;
	// lwz r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8225f588
	goto loc_8225F588;
loc_8225F54C:
	// mulli r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 * 36;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r11,r1,716
	ctx.r11.s64 = ctx.r1.s64 + 716;
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,240
	ctx.r10.s64 = 240;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bge cr6,0x8225f57c
	if (!ctx.cr6.lt) goto loc_8225F57C;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x8225f580
	goto loc_8225F580;
loc_8225F57C:
	// subfze r11,r30
loc_8225F580:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225f594
	if (!ctx.cr6.eq) goto loc_8225F594;
loc_8225F588:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u32);
loc_8225F594:
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r29.u32);
	// addi r28,r1,796
	ctx.r28.s64 = ctx.r1.s64 + 796;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stwx r24,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r24.u32);
	// bl 0x8225e5e8
	ctx.lr = 0x8225F5AC;
	sub_8225E5E8(ctx, base);
	// clrlwi. r11,r25,28
	ctx.r11.u64 = ctx.r25.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f5f8
	if (ctx.cr0.eq) goto loc_8225F5F8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8225f5ec
	if (ctx.cr6.eq) goto loc_8225F5EC;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8225F5CC:
	// slw r10,r19,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225f5dc
	if (ctx.cr0.eq) goto loc_8225F5DC;
	// stw r19,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r19.u32);
loc_8225F5DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8225f5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225F5CC;
	// b 0x8225f5f8
	goto loc_8225F5F8;
loc_8225F5EC:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r19,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u32);
loc_8225F5F8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8225f644
	if (ctx.cr6.eq) goto loc_8225F644;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_8225F608:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8225f630
	if (!ctx.cr6.eq) goto loc_8225F630;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8225ec10
	ctx.lr = 0x8225F628;
	sub_8225EC10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225f79c
	if (!ctx.cr0.eq) goto loc_8225F79C;
loc_8225F630:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8225f608
	if (ctx.cr6.lt) goto loc_8225F608;
	// b 0x8225f668
	goto loc_8225F668;
loc_8225F644:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8225ec10
	ctx.lr = 0x8225F660;
	sub_8225EC10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225f79c
	if (!ctx.cr0.eq) goto loc_8225F79C;
loc_8225F668:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8241dedc
	ctx.lr = 0x8225F670;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8225f738
	if (!ctx.cr0.eq) goto loc_8225F738;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// bl 0x8241e4bc
	ctx.lr = 0x8225F684;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r30,r11,17940
	ctx.r30.s64 = ctx.r11.s64 + 17940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8225F694;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r31,r10,6592
	ctx.r31.s64 = ctx.r10.s64 + 6592;
	// rlwinm r10,r20,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 20) & 0xFFFFF;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r5,644
	ctx.r5.s64 = 644;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r22,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r22.u32);
	// bl 0x82248a40
	ctx.lr = 0x8225F6C8;
	sub_82248A40(ctx, base);
	// lis r11,520
	ctx.r11.s64 = 34078720;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r10,-3872
	ctx.r3.s64 = ctx.r10.s64 + -3872;
	// bl 0x8241e37c
	ctx.lr = 0x8225F6EC;
	__imp__XamTaskSchedule(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225f724
	if (ctx.cr0.lt) goto loc_8225F724;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8241e36c
	ctx.lr = 0x8225F6FC;
	__imp__XamTaskCloseHandle(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r11,17984
	ctx.r29.s64 = ctx.r11.s64 + 17984;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8241e50c
	ctx.lr = 0x8225F71C;
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e4fc
	ctx.lr = 0x8225F724;
	__imp__KeResetEvent(ctx, base);
loc_8225F724:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8241dd3c
	ctx.lr = 0x8225F730;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x8241e49c
	ctx.lr = 0x8225F734;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// b 0x8225f750
	goto loc_8225F750;
loc_8225F738:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,10560
	ctx.r4.s64 = ctx.r11.s64 + 10560;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8225ee90
	ctx.lr = 0x8225F74C;
	sub_8225EE90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8225F750:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8225f790
	if (ctx.cr6.lt) goto loc_8225F790;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8225F760:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8225f780
	if (!ctx.cr6.eq) goto loc_8225F780;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8225f760
	if (ctx.cr6.lt) goto loc_8225F760;
	// b 0x8225f784
	goto loc_8225F784;
loc_8225F780:
	// bl 0x8225ef30
	ctx.lr = 0x8225F784;
	sub_8225EF30(ctx, base);
loc_8225F784:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,6572(r18)
	PPC_STORE_U32(ctx.r18.u32 + 6572, ctx.r19.u32);
	// b 0x8225f448
	goto loc_8225F448;
loc_8225F790:
	// bl 0x8225eda0
	ctx.lr = 0x8225F794;
	sub_8225EDA0(ctx, base);
	// b 0x8225f448
	goto loc_8225F448;
loc_8225F798:
	// li r3,87
	ctx.r3.s64 = 87;
loc_8225F79C:
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_8225F7A4"))) PPC_WEAK_FUNC(sub_8225F7A4);
PPC_FUNC_IMPL(__imp__sub_8225F7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F7A8"))) PPC_WEAK_FUNC(sub_8225F7A8);
PPC_FUNC_IMPL(__imp__sub_8225F7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225F7B0;
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
	// bl 0x8225e518
	ctx.lr = 0x8225F7C4;
	sub_8225E518(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r7,r10,18036
	ctx.r7.s64 = ctx.r10.s64 + 18036;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// and r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ctx.r9.u64;
	// bl 0x8225f318
	ctx.lr = 0x8225F7E8;
	sub_8225F318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225F7F0"))) PPC_WEAK_FUNC(sub_8225F7F0);
PPC_FUNC_IMPL(__imp__sub_8225F7F0) {
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
	// lwz r11,6572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225f814
	if (!ctx.cr6.eq) goto loc_8225F814;
	// li r3,4304
	ctx.r3.s64 = 4304;
	// b 0x8225f81c
	goto loc_8225F81C;
loc_8225F814:
	// bl 0x8225f010
	ctx.lr = 0x8225F818;
	sub_8225F010(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225F81C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225F82C"))) PPC_WEAK_FUNC(sub_8225F82C);
PPC_FUNC_IMPL(__imp__sub_8225F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F830"))) PPC_WEAK_FUNC(sub_8225F830);
PPC_FUNC_IMPL(__imp__sub_8225F830) {
	PPC_FUNC_PROLOGUE();
	// b 0x8225f010
	sub_8225F010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F834"))) PPC_WEAK_FUNC(sub_8225F834);
PPC_FUNC_IMPL(__imp__sub_8225F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F838"))) PPC_WEAK_FUNC(sub_8225F838);
PPC_FUNC_IMPL(__imp__sub_8225F838) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e3dc
	ctx.lr = 0x8225F854;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e3cc
	ctx.lr = 0x8225F860;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,106(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
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

__attribute__((alias("__imp__sub_8225F8B4"))) PPC_WEAK_FUNC(sub_8225F8B4);
PPC_FUNC_IMPL(__imp__sub_8225F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F8B8"))) PPC_WEAK_FUNC(sub_8225F8B8);
PPC_FUNC_IMPL(__imp__sub_8225F8B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82267ae8
	ctx.lr = 0x8225F8DC;
	sub_82267AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225f8f0
	if (ctx.cr0.eq) goto loc_8225F8F0;
	// bl 0x82089e00
	ctx.lr = 0x8225F8E8;
	sub_82089E00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8225fa24
	goto loc_8225FA24;
loc_8225F8F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225f934
	if (!ctx.cr6.eq) goto loc_8225F934;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82248f70
	ctx.lr = 0x8225F910;
	sub_82248F70(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82248f70
	ctx.lr = 0x8225F924;
	sub_82248F70(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82248f70
	ctx.lr = 0x8225F934;
	sub_82248F70(ctx, base);
loc_8225F934:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241e3dc
	ctx.lr = 0x8225F93C;
	__imp__KeQuerySystemTime(ctx, base);
	// lhz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 70);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225fa20
	if (ctx.cr0.eq) goto loc_8225FA20;
	// lhz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 154);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225fa20
	if (ctx.cr0.eq) goto loc_8225FA20;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82267888
	ctx.lr = 0x8225F968;
	sub_82267888(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fa20
	if (ctx.cr0.eq) goto loc_8225FA20;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82267888
	ctx.lr = 0x8225F984;
	sub_82267888(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fa20
	if (ctx.cr0.eq) goto loc_8225FA20;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r11,38528
	ctx.r11.u64 = ctx.r11.u64 | 38528;
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// mulli r6,r6,60
	ctx.r6.s64 = ctx.r6.s64 * 60;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mulld r11,r10,r11
	ctx.r11.s64 = ctx.r10.s64 * ctx.r11.s64;
	// mulld r8,r8,r4
	ctx.r8.s64 = ctx.r8.s64 * ctx.r4.s64;
	// mulld r10,r6,r4
	ctx.r10.s64 = ctx.r6.s64 * ctx.r4.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// bge cr6,0x8225fa08
	if (!ctx.cr6.lt) goto loc_8225FA08;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x8225fa00
	if (ctx.cr6.lt) goto loc_8225FA00;
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8225fa1c
	if (ctx.cr6.lt) goto loc_8225FA1C;
loc_8225FA00:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8225fa20
	goto loc_8225FA20;
loc_8225FA08:
	// cmpd cr6,r9,r10
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8225fa1c
	if (ctx.cr6.lt) goto loc_8225FA1C;
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// blt cr6,0x8225fa20
	if (ctx.cr6.lt) goto loc_8225FA20;
loc_8225FA1C:
	// li r30,2
	ctx.r30.s64 = 2;
loc_8225FA20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8225FA24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8225FA3C"))) PPC_WEAK_FUNC(sub_8225FA3C);
PPC_FUNC_IMPL(__imp__sub_8225FA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FA40"))) PPC_WEAK_FUNC(sub_8225FA40);
PPC_FUNC_IMPL(__imp__sub_8225FA40) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8241de0c
	ctx.lr = 0x8225FA68;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82267d08
	ctx.lr = 0x8225FA70;
	sub_82267D08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225FA80"))) PPC_WEAK_FUNC(sub_8225FA80);
PPC_FUNC_IMPL(__imp__sub_8225FA80) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8225ffd0
	ctx.lr = 0x8225FA9C;
	sub_8225FFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225fad0
	if (ctx.cr0.eq) goto loc_8225FAD0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225fab4
	if (ctx.cr6.eq) goto loc_8225FAB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8225FAB4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8225fad4
	if (!ctx.cr6.eq) goto loc_8225FAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82089e00
	ctx.lr = 0x8225FAC8;
	sub_82089E00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8225fad4
	goto loc_8225FAD4;
loc_8225FAD0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8225FAD4:
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

__attribute__((alias("__imp__sub_8225FAE8"))) PPC_WEAK_FUNC(sub_8225FAE8);
PPC_FUNC_IMPL(__imp__sub_8225FAE8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r8,32024
	ctx.r5.s64 = ctx.r8.s64 + 32024;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FB44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225fb60
	if (!ctx.cr6.eq) goto loc_8225FB60;
	// bl 0x82089ed0
	ctx.lr = 0x8225FB58;
	sub_82089ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225fb64
	goto loc_8225FB64;
loc_8225FB60:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8225FB64:
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

__attribute__((alias("__imp__sub_8225FB78"))) PPC_WEAK_FUNC(sub_8225FB78);
PPC_FUNC_IMPL(__imp__sub_8225FB78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x8225fbe4
	if (!ctx.cr6.eq) goto loc_8225FBE4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8225fbc4
	if (ctx.cr6.eq) goto loc_8225FBC4;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225fbb8
	if (ctx.cr6.eq) goto loc_8225FBB8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8225FBB8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x820882b0
	ctx.lr = 0x8225FBC0;
	sub_820882B0(ctx, base);
	// b 0x8225fbc8
	goto loc_8225FBC8;
loc_8225FBC4:
	// li r3,258
	ctx.r3.s64 = 258;
loc_8225FBC8:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x8225fbdc
	if (!ctx.cr6.eq) goto loc_8225FBDC;
	// li r3,996
	ctx.r3.s64 = 996;
	// bl 0x82089e00
	ctx.lr = 0x8225FBD8;
	sub_82089E00(ctx, base);
	// b 0x8225fc04
	goto loc_8225FC04;
loc_8225FBDC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225fc04
	if (!ctx.cr6.eq) goto loc_8225FC04;
loc_8225FBE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8225fc00
	if (ctx.cr6.lt) goto loc_8225FC00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225fc08
	goto loc_8225FC08;
loc_8225FC00:
	// bl 0x82089fa8
	ctx.lr = 0x8225FC04;
	sub_82089FA8(ctx, base);
loc_8225FC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225FC08:
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

__attribute__((alias("__imp__sub_8225FC20"))) PPC_WEAK_FUNC(sub_8225FC20);
PPC_FUNC_IMPL(__imp__sub_8225FC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8225FC28;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225fc50
	if (ctx.cr6.eq) goto loc_8225FC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8225FC50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8225fcc8
	if (ctx.cr6.eq) goto loc_8225FCC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x8241df0c
	ctx.lr = 0x8225FC98;
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225fd34
	if (ctx.cr6.eq) goto loc_8225FD34;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x8225fd34
	if (ctx.cr6.eq) goto loc_8225FD34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225fcc0
	if (ctx.cr6.eq) goto loc_8225FCC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8225FCC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225fd3c
	goto loc_8225FD3C;
loc_8225FCC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x8225FCDC;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8225fd04
	if (!ctx.cr6.eq) goto loc_8225FD04;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dfbc
	ctx.lr = 0x8225FCF8;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225fd1c
	if (ctx.cr0.lt) goto loc_8225FD1C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8225FD04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8225fd1c
	if (ctx.cr6.lt) goto loc_8225FD1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8225fd3c
	goto loc_8225FD3C;
loc_8225FD1C:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225fd34
	if (!ctx.cr6.eq) goto loc_8225FD34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8225FD34:
	// bl 0x82089fa8
	ctx.lr = 0x8225FD38;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225FD3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8225FD44"))) PPC_WEAK_FUNC(sub_8225FD44);
PPC_FUNC_IMPL(__imp__sub_8225FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FD48"))) PPC_WEAK_FUNC(sub_8225FD48);
PPC_FUNC_IMPL(__imp__sub_8225FD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8225FD50;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r30,-32190
	ctx.r30.s64 = -2109603840;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8225fde0
	if (ctx.cr6.lt) goto loc_8225FDE0;
	// beq cr6,0x8225fdac
	if (ctx.cr6.eq) goto loc_8225FDAC;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x8225fdac
	if (!ctx.cr6.lt) goto loc_8225FDAC;
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225fe40
	if (ctx.cr0.lt) goto loc_8225FE40;
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_8225FDA4:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8225fde4
	goto loc_8225FDE4;
loc_8225FDAC:
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225fe40
	if (ctx.cr0.lt) goto loc_8225FE40;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8225fda4
	goto loc_8225FDA4;
loc_8225FDE0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225FDE4:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8225fdfc
	if (!ctx.cr6.lt) goto loc_8225FDFC;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x82089f90
	ctx.lr = 0x8225FDF8;
	sub_82089F90(ctx, base);
	// b 0x8225fe44
	goto loc_8225FE44;
loc_8225FDFC:
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FE20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225fe40
	if (ctx.cr0.lt) goto loc_8225FE40;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225fe38
	if (ctx.cr6.eq) goto loc_8225FE38;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_8225FE38:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225fe48
	goto loc_8225FE48;
loc_8225FE40:
	// bl 0x82089fa8
	ctx.lr = 0x8225FE44;
	sub_82089FA8(ctx, base);
loc_8225FE44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225FE48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8225FE50"))) PPC_WEAK_FUNC(sub_8225FE50);
PPC_FUNC_IMPL(__imp__sub_8225FE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8225FE58;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8225fe80
	if (ctx.cr6.eq) goto loc_8225FE80;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
loc_8225FE80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8225ff24
	if (ctx.cr6.eq) goto loc_8225FF24;
	// li r6,259
	ctx.r6.s64 = 259;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 & ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ff00
	if (ctx.cr0.lt) goto loc_8225FF00;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x8225ff00
	if (ctx.cr6.eq) goto loc_8225FF00;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225fef8
	if (ctx.cr6.eq) goto loc_8225FEF8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8225FEF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225ffc4
	goto loc_8225FFC4;
loc_8225FF00:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8225ffbc
	if (!ctx.cr6.eq) goto loc_8225FFBC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225ff1c
	if (ctx.cr6.eq) goto loc_8225FF1C;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8225FF1C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8225ffbc
	goto loc_8225FFBC;
loc_8225FF24:
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8225ff70
	if (!ctx.cr6.eq) goto loc_8225FF70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dfbc
	ctx.lr = 0x8225FF64;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ff88
	if (ctx.cr0.lt) goto loc_8225FF88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8225FF70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8225ff88
	if (ctx.cr6.lt) goto loc_8225FF88;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8225ffc4
	goto loc_8225FFC4;
loc_8225FF88:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8225ffa4
	if (!ctx.cr6.eq) goto loc_8225FFA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x8225ffc4
	goto loc_8225FFC4;
loc_8225FFA4:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225ffbc
	if (!ctx.cr6.eq) goto loc_8225FFBC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8225FFBC:
	// bl 0x82089fa8
	ctx.lr = 0x8225FFC0;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225FFC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8225FFCC"))) PPC_WEAK_FUNC(sub_8225FFCC);
PPC_FUNC_IMPL(__imp__sub_8225FFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FFD0"))) PPC_WEAK_FUNC(sub_8225FFD0);
PPC_FUNC_IMPL(__imp__sub_8225FFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8226001c
	if (!ctx.cr0.lt) goto loc_8226001C;
	// bl 0x82089fa8
	ctx.lr = 0x82260014;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260028
	goto loc_82260028;
loc_8226001C:
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_82260028:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226003C"))) PPC_WEAK_FUNC(sub_8226003C);
PPC_FUNC_IMPL(__imp__sub_8226003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260040"))) PPC_WEAK_FUNC(sub_82260040);
PPC_FUNC_IMPL(__imp__sub_82260040) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82260050:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8226006c
	if (ctx.cr0.eq) goto loc_8226006C;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82260050
	if (!ctx.cr0.eq) goto loc_82260050;
loc_8226006C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82260080
	if (ctx.cr6.eq) goto loc_82260080;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82260080:
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260088"))) PPC_WEAK_FUNC(sub_82260088);
PPC_FUNC_IMPL(__imp__sub_82260088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82260090;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822600b8
	if (ctx.cr6.eq) goto loc_822600B8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822600bc
	goto loc_822600BC;
loc_822600B8:
	// extsw r30,r4
	ctx.r30.s64 = ctx.r4.s32;
loc_822600BC:
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x82260148
	if (ctx.cr6.lt) goto loc_82260148;
	// beq cr6,0x82260114
	if (ctx.cr6.eq) goto loc_82260114;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x82260114
	if (!ctx.cr6.lt) goto loc_82260114;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822600F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82260108
	if (!ctx.cr0.lt) goto loc_82260108;
loc_82260100:
	// bl 0x82089fa8
	ctx.lr = 0x82260104;
	sub_82089FA8(ctx, base);
	// b 0x822601ec
	goto loc_822601EC;
loc_82260108:
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_8226010C:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8226014c
	goto loc_8226014C;
loc_82260114:
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82260100
	if (ctx.cr0.lt) goto loc_82260100;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8226010c
	goto loc_8226010C;
loc_82260148:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8226014C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82260164
	if (!ctx.cr6.lt) goto loc_82260164;
	// li r3,131
	ctx.r3.s64 = 131;
loc_8226015C:
	// bl 0x82089f90
	ctx.lr = 0x82260160;
	sub_82089F90(ctx, base);
	// b 0x822601ec
	goto loc_822601EC;
loc_82260164:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82260180
	if (!ctx.cr6.eq) goto loc_82260180;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260180
	if (ctx.cr0.eq) goto loc_82260180;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x8226015c
	goto loc_8226015C;
loc_82260180:
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822601A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822601d8
	if (ctx.cr0.lt) goto loc_822601D8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822601bc
	if (ctx.cr6.eq) goto loc_822601BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_822601BC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822601d0
	if (!ctx.cr6.eq) goto loc_822601D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82089e00
	ctx.lr = 0x822601D0;
	sub_82089E00(ctx, base);
loc_822601D0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x822601f0
	goto loc_822601F0;
loc_822601D8:
	// bl 0x82089fa8
	ctx.lr = 0x822601DC;
	sub_82089FA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822601ec
	if (ctx.cr6.eq) goto loc_822601EC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_822601EC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822601F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822601F8"))) PPC_WEAK_FUNC(sub_822601F8);
PPC_FUNC_IMPL(__imp__sub_822601F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241df5c
	ctx.lr = 0x82260220;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82260280
	if (ctx.cr0.lt) goto loc_82260280;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8241ddec
	ctx.lr = 0x82260248;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82260280
	if (ctx.cr0.lt) goto loc_82260280;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x8241ddec
	ctx.lr = 0x82260270;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82260280
	if (ctx.cr0.lt) goto loc_82260280;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82260288
	goto loc_82260288;
loc_82260280:
	// bl 0x82089fa8
	ctx.lr = 0x82260284;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260288:
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

__attribute__((alias("__imp__sub_8226029C"))) PPC_WEAK_FUNC(sub_8226029C);
PPC_FUNC_IMPL(__imp__sub_8226029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822602A0"))) PPC_WEAK_FUNC(sub_822602A0);
PPC_FUNC_IMPL(__imp__sub_822602A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x822602d8
	if (!ctx.cr6.lt) goto loc_822602D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822602D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822602E8"))) PPC_WEAK_FUNC(sub_822602E8);
PPC_FUNC_IMPL(__imp__sub_822602E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822602F0;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82260364
	if (ctx.cr0.lt) goto loc_82260364;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226033c
	if (ctx.cr6.eq) goto loc_8226033C;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8226033C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226034c
	if (ctx.cr6.eq) goto loc_8226034C;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_8226034C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226035c
	if (ctx.cr6.eq) goto loc_8226035C;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
loc_8226035C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226036c
	goto loc_8226036C;
loc_82260364:
	// bl 0x82089fa8
	ctx.lr = 0x82260368;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226036C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82260374"))) PPC_WEAK_FUNC(sub_82260374);
PPC_FUNC_IMPL(__imp__sub_82260374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260378"))) PPC_WEAK_FUNC(sub_82260378);
PPC_FUNC_IMPL(__imp__sub_82260378) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241e55c
	ctx.lr = 0x82260394;
	__imp__RtlInitUnicodeString(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e54c
	ctx.lr = 0x822603A4;
	__imp__RtlUnicodeStringToAnsiString(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822603b8
	if (!ctx.cr0.lt) goto loc_822603B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4393
	ctx.r11.s64 = ctx.r11.s64 + 4393;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822603B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8225fa40
	ctx.lr = 0x822603C0;
	sub_8225FA40(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822603d0
	if (ctx.cr6.lt) goto loc_822603D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e53c
	ctx.lr = 0x822603D0;
	__imp__RtlFreeAnsiString(ctx, base);
loc_822603D0:
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

__attribute__((alias("__imp__sub_822603E4"))) PPC_WEAK_FUNC(sub_822603E4);
PPC_FUNC_IMPL(__imp__sub_822603E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822603E8"))) PPC_WEAK_FUNC(sub_822603E8);
PPC_FUNC_IMPL(__imp__sub_822603E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r9,1000
	ctx.r9.s64 = ctx.r9.s64 + 1000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x8226044c
	if (ctx.cr6.eq) goto loc_8226044C;
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// ble cr6,0x8226042c
	if (!ctx.cr6.gt) goto loc_8226042C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8226042C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82260450
	if (ctx.cr6.eq) goto loc_82260450;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82248ec8
	ctx.lr = 0x82260448;
	sub_82248EC8(ctx, base);
	// b 0x82260450
	goto loc_82260450;
loc_8226044C:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82260450:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e09c
	ctx.lr = 0x82260458;
	__imp__RtlRaiseException(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260468"))) PPC_WEAK_FUNC(sub_82260468);
PPC_FUNC_IMPL(__imp__sub_82260468) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e4ac
	ctx.lr = 0x8226047C;
	__imp__NtFlushBuffersFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226048c
	if (ctx.cr0.lt) goto loc_8226048C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82260494
	goto loc_82260494;
loc_8226048C:
	// bl 0x82089fa8
	ctx.lr = 0x82260490;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260494:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822604A4"))) PPC_WEAK_FUNC(sub_822604A4);
PPC_FUNC_IMPL(__imp__sub_822604A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822604A8"))) PPC_WEAK_FUNC(sub_822604A8);
PPC_FUNC_IMPL(__imp__sub_822604A8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822604d4
	if (!ctx.cr6.eq) goto loc_822604D4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82260500
	goto loc_82260500;
loc_822604D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e38c
	ctx.lr = 0x822604DC;
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82260500
	if (ctx.cr0.lt) goto loc_82260500;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_82260500:
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

__attribute__((alias("__imp__sub_8226051C"))) PPC_WEAK_FUNC(sub_8226051C);
PPC_FUNC_IMPL(__imp__sub_8226051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260520"))) PPC_WEAK_FUNC(sub_82260520);
PPC_FUNC_IMPL(__imp__sub_82260520) {
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
	// bl 0x8241e56c
	ctx.lr = 0x82260530;
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82260544
	if (!ctx.cr0.lt) goto loc_82260544;
	// bl 0x82089ed0
	ctx.lr = 0x8226053C;
	sub_82089ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260548
	goto loc_82260548;
loc_82260544:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82260548:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260558"))) PPC_WEAK_FUNC(sub_82260558);
PPC_FUNC_IMPL(__imp__sub_82260558) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8241e57c
	ctx.lr = 0x82260574;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822605a4
	if (ctx.cr0.lt) goto loc_822605A4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8226059c
	if (!ctx.cr6.eq) goto loc_8226059C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r3,r3,611
	ctx.r3.u64 = ctx.r3.u64 | 611;
loc_8226059C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822605b0
	if (!ctx.cr6.lt) goto loc_822605B0;
loc_822605A4:
	// bl 0x82089ed0
	ctx.lr = 0x822605A8;
	sub_82089ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822605b4
	goto loc_822605B4;
loc_822605B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822605B4:
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

__attribute__((alias("__imp__sub_822605C8"))) PPC_WEAK_FUNC(sub_822605C8);
PPC_FUNC_IMPL(__imp__sub_822605C8) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8241e58c
	ctx.lr = 0x822605E4;
	__imp__XexLoadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822605f8
	if (!ctx.cr0.lt) goto loc_822605F8;
	// bl 0x82089ed0
	ctx.lr = 0x822605F0;
	sub_82089ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822605fc
	goto loc_822605FC;
loc_822605F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822605FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226060C"))) PPC_WEAK_FUNC(sub_8226060C);
PPC_FUNC_IMPL(__imp__sub_8226060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260610"))) PPC_WEAK_FUNC(sub_82260610);
PPC_FUNC_IMPL(__imp__sub_82260610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82260618;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82260654
	if (!ctx.cr6.eq) goto loc_82260654;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82260634:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82260634
	if (!ctx.cr6.eq) goto loc_82260634;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82260654:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822607f0
	if (!ctx.cr6.gt) goto loc_822607F0;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lis r29,-32187
	ctx.r29.s64 = -2109407232;
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// lis r26,-32187
	ctx.r26.s64 = -2109407232;
	// lis r25,-32187
	ctx.r25.s64 = -2109407232;
	// lis r21,-32187
	ctx.r21.s64 = -2109407232;
	// lis r20,-32187
	ctx.r20.s64 = -2109407232;
	// lis r22,-32187
	ctx.r22.s64 = -2109407232;
	// addi r23,r9,19264
	ctx.r23.s64 = ctx.r9.s64 + 19264;
	// addi r30,r11,19288
	ctx.r30.s64 = ctx.r11.s64 + 19288;
loc_82260694:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r7,r24,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r24.s64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x822607f0
	if (ctx.cr6.gt) goto loc_822607F0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82260738
	if (ctx.cr6.lt) goto loc_82260738;
	// beq cr6,0x82260724
	if (ctx.cr6.eq) goto loc_82260724;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82260710
	if (ctx.cr6.lt) goto loc_82260710;
	// beq cr6,0x822606fc
	if (ctx.cr6.eq) goto loc_822606FC;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x822606e8
	if (ctx.cr6.lt) goto loc_822606E8;
	// bne cr6,0x82260748
	if (!ctx.cr6.eq) goto loc_82260748;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
loc_822606E8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_822606FC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82260710:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82260724:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_82260738:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82260748:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,19236(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 19236);
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82260770
	if (ctx.cr6.gt) goto loc_82260770;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822607e8
	if (ctx.cr6.gt) goto loc_822607E8;
	// b 0x8226078c
	goto loc_8226078C;
loc_82260770:
	// lwz r9,19240(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 19240);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8226079c
	if (!ctx.cr6.gt) goto loc_8226079C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822607e8
	if (ctx.cr6.gt) goto loc_822607E8;
	// lwz r11,19232(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19232);
loc_8226078C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// b 0x822607e8
	goto loc_822607E8;
loc_8226079C:
	// lwz r9,19248(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19248);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822607c8
	if (ctx.cr6.gt) goto loc_822607C8;
	// lwz r9,19244(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19244);
	// lwz r8,19256(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19256);
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r9.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_822607C8:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822607e8
	if (ctx.cr6.gt) goto loc_822607E8;
	// lwz r9,19252(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19252);
	// lwz r8,19260(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19260);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sthu r11,2(r5)
loc_822607E8:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82260694
	if (ctx.cr6.lt) goto loc_82260694;
loc_822607F0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8226080c
	if (ctx.cr6.eq) goto loc_8226080C;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8226080c
	if (!ctx.cr6.lt) goto loc_8226080C;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x82089e00
	ctx.lr = 0x82260808;
	sub_82089E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226080C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82260814"))) PPC_WEAK_FUNC(sub_82260814);
PPC_FUNC_IMPL(__imp__sub_82260814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260818"))) PPC_WEAK_FUNC(sub_82260818);
PPC_FUNC_IMPL(__imp__sub_82260818) {
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
	// bl 0x8225f8b8
	ctx.lr = 0x82260834;
	sub_8225F8B8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82260868
	if (ctx.cr6.lt) goto loc_82260868;
	// beq cr6,0x82260858
	if (ctx.cr6.eq) goto loc_82260858;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82260850
	if (ctx.cr6.lt) goto loc_82260850;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8226086c
	goto loc_8226086C;
loc_82260850:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x8226085c
	goto loc_8226085C;
loc_82260858:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8226085C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8226086c
	goto loc_8226086C;
loc_82260868:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8226086C:
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// mulld r11,r11,r10
	ctx.r11.s64 = ctx.r11.s64 * ctx.r10.s64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82260898"))) PPC_WEAK_FUNC(sub_82260898);
PPC_FUNC_IMPL(__imp__sub_82260898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822608A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x822608c4
	if (!ctx.cr6.eq) goto loc_822608C4;
	// bl 0x8224a830
	ctx.lr = 0x822608C0;
	sub_8224A830(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
loc_822608C4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822609a0
	if (!ctx.cr6.gt) goto loc_822609A0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822608D4:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x82260904
	if (ctx.cr6.gt) goto loc_82260904;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82260998
	if (ctx.cr6.gt) goto loc_82260998;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82260998
	if (ctx.cr6.eq) goto loc_82260998;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82260994
	goto loc_82260994;
loc_82260904:
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// bgt cr6,0x8226092c
	if (ctx.cr6.gt) goto loc_8226092C;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82260974
	if (ctx.cr6.gt) goto loc_82260974;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82260974
	if (ctx.cr6.eq) goto loc_82260974;
	// li r8,192
	ctx.r8.s64 = 192;
	// rlwimi r8,r10,26,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x8226096c
	goto loc_8226096C;
loc_8226092C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x8226094c
	if (ctx.cr6.gt) goto loc_8226094C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226094c
	if (ctx.cr6.eq) goto loc_8226094C;
	// li r8,224
	ctx.r8.s64 = 224;
	// rlwimi r8,r10,20,28,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8226094C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82260974
	if (ctx.cr6.gt) goto loc_82260974;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82260974
	if (ctx.cr6.eq) goto loc_82260974;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// li r8,128
	ctx.r8.s64 = 128;
	// rlwimi r8,r10,26,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
loc_8226096C:
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82260974:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82260998
	if (ctx.cr6.gt) goto loc_82260998;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82260998
	if (ctx.cr6.eq) goto loc_82260998;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// rlwimi r11,r9,7,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82260994:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82260998:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bdnz 0x822608d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822608D4;
loc_822609A0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822609c0
	if (ctx.cr6.eq) goto loc_822609C0;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x822609c0
	if (!ctx.cr6.lt) goto loc_822609C0;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x82089e00
	ctx.lr = 0x822609B8;
	sub_82089E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822609c4
	goto loc_822609C4;
loc_822609C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822609C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822609CC"))) PPC_WEAK_FUNC(sub_822609CC);
PPC_FUNC_IMPL(__imp__sub_822609CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822609D0"))) PPC_WEAK_FUNC(sub_822609D0);
PPC_FUNC_IMPL(__imp__sub_822609D0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822609D8;
	sub_8224878C(ctx, base);
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x82260a04
	if (!ctx.cr6.eq) goto loc_82260A04;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82260a6c
	if (!ctx.cr6.eq) goto loc_82260A6C;
	// lbz r11,5(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// stb r11,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r11.u8);
	// b 0x82260a6c
	goto loc_82260A6C;
loc_82260A04:
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82260a60
	if (ctx.cr6.eq) goto loc_82260A60;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r29,5(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r7,r30,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// rotlwi r8,r29,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r29,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r29.u8);
	// stb r30,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r30.u8);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lbz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// stb r31,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r31.u8);
loc_82260A60:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82260a6c
	if (ctx.cr6.eq) goto loc_82260A6C;
	// stb r4,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r4.u8);
loc_82260A6C:
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82260A70"))) PPC_WEAK_FUNC(sub_82260A70);
PPC_FUNC_IMPL(__imp__sub_82260A70) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r8,201(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// blt cr6,0x82260ab8
	if (ctx.cr6.lt) goto loc_82260AB8;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x82260ab8
	if (ctx.cr6.gt) goto loc_82260AB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10612
	ctx.r11.s64 = ctx.r11.s64 + 10612;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82260AB8:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82260ae8
	goto loc_82260AE8;
loc_82260AC0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82260ad8
	if (!ctx.cr6.eq) goto loc_82260AD8;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82260b04
	if (ctx.cr6.eq) goto loc_82260B04;
loc_82260AD8:
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82260af8
	if (ctx.cr6.eq) goto loc_82260AF8;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_82260AE8:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm. r31,r10,0,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82260ac0
	if (!ctx.cr0.eq) goto loc_82260AC0;
loc_82260AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260AFC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82260B04:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x82260afc
	goto loc_82260AFC;
}

__attribute__((alias("__imp__sub_82260B14"))) PPC_WEAK_FUNC(sub_82260B14);
PPC_FUNC_IMPL(__imp__sub_82260B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260B18"))) PPC_WEAK_FUNC(sub_82260B18);
PPC_FUNC_IMPL(__imp__sub_82260B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82260B20;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,7(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,30
	ctx.r30.u64 = ctx.r11.u32 & 0x3;
	// beq 0x82260c2c
	if (ctx.cr0.eq) goto loc_82260C2C;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r3,r4,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8241e47c
	ctx.lr = 0x82260B68;
	__imp__XeCryptSha(ctx, base);
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82260b8c
	if (!ctx.cr6.eq) goto loc_82260B8C;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82248a40
	ctx.lr = 0x82260B88;
	sub_82248A40(ctx, base);
	// b 0x82260c20
	goto loc_82260C20;
loc_82260B8C:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260a70
	ctx.lr = 0x82260BA8;
	sub_82260A70(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r9,r9,10612
	ctx.r9.s64 = ctx.r9.s64 + 10612;
	// li r8,170
	ctx.r8.s64 = 170;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r9,r28,r11
	ctx.r9.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// divwu r11,r9,r8
	ctx.r11.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mulli r8,r11,170
	ctx.r8.s64 = ctx.r11.s64 * 170;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 * 24;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82260BF8;
	sub_82248A40(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82260C20:
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r11.u8);
loc_82260C2C:
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82260C40"))) PPC_WEAK_FUNC(sub_82260C40);
PPC_FUNC_IMPL(__imp__sub_82260C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82260C48;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82260a70
	ctx.lr = 0x82260C60;
	sub_82260A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260ce0
	if (ctx.cr0.eq) goto loc_82260CE0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,7(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260cc8
	if (ctx.cr0.eq) goto loc_82260CC8;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82260cc8
	if (ctx.cr6.eq) goto loc_82260CC8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260a70
	ctx.lr = 0x82260CA0;
	sub_82260A70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82260CC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822609d0
	ctx.lr = 0x82260CE0;
	sub_822609D0(ctx, base);
loc_82260CE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82260CE8"))) PPC_WEAK_FUNC(sub_82260CE8);
PPC_FUNC_IMPL(__imp__sub_82260CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82260CF0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82260a70
	ctx.lr = 0x82260D0C;
	sub_82260A70(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82260d48
	if (ctx.cr0.eq) goto loc_82260D48;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822609d0
	ctx.lr = 0x82260D30;
	sub_822609D0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82260D48:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82260D54"))) PPC_WEAK_FUNC(sub_82260D54);
PPC_FUNC_IMPL(__imp__sub_82260D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260D58"))) PPC_WEAK_FUNC(sub_82260D58);
PPC_FUNC_IMPL(__imp__sub_82260D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82260D60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,200(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r28,r30,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82248f70
	ctx.lr = 0x82260D84;
	sub_82248F70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82260db4
	if (ctx.cr6.eq) goto loc_82260DB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r31,-3
	ctx.r10.s64 = ctx.r31.s64 + -3;
loc_82260D98:
	// addi r9,r11,254
	ctx.r9.s64 = ctx.r11.s64 + 254;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// stbu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82260d98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82260D98;
loc_82260DB4:
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r9,r30,255
	ctx.r9.s64 = ctx.r30.s64 + 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// stb r11,-3(r10)
	PPC_STORE_U8(ctx.r10.u32 + -3, ctx.r11.u8);
	// stb r11,201(r29)
	PPC_STORE_U8(ctx.r29.u32 + 201, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82260DD4"))) PPC_WEAK_FUNC(sub_82260DD4);
PPC_FUNC_IMPL(__imp__sub_82260DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260DD8"))) PPC_WEAK_FUNC(sub_82260DD8);
PPC_FUNC_IMPL(__imp__sub_82260DD8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x82260E04;
	sub_82248F70(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,240
	ctx.r10.s64 = 240;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lbz r11,206(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 206);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwimi r10,r11,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwimi r10,r11,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stb r8,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r8.u8);
	// rlwinm r11,r11,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82260ea0
	if (!ctx.cr6.lt) goto loc_82260EA0;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_82260EA0:
	// lwz r7,156(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r9,r30,172
	ctx.r9.s64 = ctx.r30.s64 + 172;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82260ECC:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82260ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82260ECC;
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

__attribute__((alias("__imp__sub_82260EF0"))) PPC_WEAK_FUNC(sub_82260EF0);
PPC_FUNC_IMPL(__imp__sub_82260EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,75
	ctx.r10.s64 = 4915200;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,55941
	ctx.r10.u64 = ctx.r10.u64 | 55941;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82260f10
	if (ctx.cr6.lt) goto loc_82260F10;
	// lis r3,74
	ctx.r3.s64 = 4849664;
	// ori r3,r3,63336
	ctx.r3.u64 = ctx.r3.u64 | 63336;
	// blr 
	return;
loc_82260F10:
	// li r8,172
	ctx.r8.s64 = 172;
	// cmplwi cr6,r11,29242
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29242, ctx.xer);
	// blt cr6,0x82260f5c
	if (ctx.cr6.lt) goto loc_82260F5C;
	// cmplwi cr6,r11,29248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29248, ctx.xer);
	// li r9,29242
	ctx.r9.s64 = 29242;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// bgt cr6,0x82260f30
	if (ctx.cr6.gt) goto loc_82260F30;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82260F30:
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,29242
	ctx.r10.s64 = ctx.r10.s64 * 29242;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82260f48
	if (ctx.cr6.gt) goto loc_82260F48;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82260F48:
	// addi r10,r11,29241
	ctx.r10.s64 = ctx.r11.s64 + 29241;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x82260f74
	goto loc_82260F74;
loc_82260F5C:
	// cmplwi cr6,r11,172
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 172, ctx.xer);
	// blt cr6,0x82260f74
	if (ctx.cr6.lt) goto loc_82260F74;
	// cmplwi cr6,r11,176
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 176, ctx.xer);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// bgt cr6,0x82260f74
	if (ctx.cr6.gt) goto loc_82260F74;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82260F74:
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 * 172;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x82260f8c
	if (ctx.cr6.gt) goto loc_82260F8C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82260F8C:
	// addi r10,r11,171
	ctx.r10.s64 = ctx.r11.s64 + 171;
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260FA0"))) PPC_WEAK_FUNC(sub_82260FA0);
PPC_FUNC_IMPL(__imp__sub_82260FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82260FA8;
	sub_8224877C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,88
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 88, ctx.xer);
	// beq cr6,0x82260fc4
	if (ctx.cr6.eq) goto loc_82260FC4;
loc_82260FB8:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x822612f8
	goto loc_822612F8;
loc_82260FC4:
	// lbz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82260fb8
	if (ctx.cr6.lt) goto loc_82260FB8;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82260fb8
	if (!ctx.cr0.eq) goto loc_82260FB8;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241df6c
	ctx.lr = 0x82260FF8;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822612f8
	if (ctx.cr0.lt) goto loc_822612F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x82261018
	if (!ctx.cr6.gt) goto loc_82261018;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// b 0x822612f8
	goto loc_822612F8;
loc_82261018:
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241df5c
	ctx.lr = 0x82261030;
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822612f8
	if (ctx.cr0.lt) goto loc_822612F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241de3c
	ctx.lr = 0x8226104C;
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822612f8
	if (ctx.cr0.lt) goto loc_822612F8;
	// lbz r11,81(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 81);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lbz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rotlwi r26,r27,3
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r27.u32, 3);
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r7,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000;
	// addi r3,r9,18056
	ctx.r3.s64 = ctx.r9.s64 + 18056;
	// li r6,61
	ctx.r6.s64 = 61;
	// addi r7,r11,8192
	ctx.r7.s64 = ctx.r11.s64 + 8192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,216
	ctx.r4.s64 = ctx.r10.s64 + 216;
	// bl 0x8241e5bc
	ctx.lr = 0x82261094;
	__imp__IoCreateDevice(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822610ac
	if (!ctx.cr0.lt) goto loc_822610AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241dddc
	ctx.lr = 0x822610A4;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822612f8
	goto loc_822612F8;
loc_822610AC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822610cc
	if (!ctx.cr6.lt) goto loc_822610CC;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
loc_822610CC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// stb r11,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r11.u8);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lbz r9,30(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// cmplwi cr6,r11,28900
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28900, ctx.xer);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// ble cr6,0x82261130
	if (!ctx.cr6.gt) goto loc_82261130;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// b 0x82261144
	goto loc_82261144;
loc_82261130:
	// cmplwi cr6,r11,170
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 170, ctx.xer);
	// ble cr6,0x82261140
	if (!ctx.cr6.gt) goto loc_82261140;
	// stb r6,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r6.u8);
	// b 0x82261144
	goto loc_82261144;
loc_82261140:
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
loc_82261144:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226115c
	if (ctx.cr6.eq) goto loc_8226115C;
	// stb r10,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r10.u8);
	// li r11,171
	ctx.r11.s64 = 171;
	// li r10,29071
	ctx.r10.s64 = 29071;
	// b 0x82261168
	goto loc_82261168;
loc_8226115C:
	// li r11,172
	ctx.r11.s64 = 172;
	// stb r6,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r6.u8);
	// li r10,29242
	ctx.r10.s64 = 29242;
loc_82261168:
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r11,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r11.u8);
	// bne cr6,0x822611b4
	if (!ctx.cr6.eq) goto loc_822611B4;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82261194
	if (!ctx.cr6.gt) goto loc_82261194;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82261194:
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82260ef0
	ctx.lr = 0x822611A0;
	sub_82260EF0(ctx, base);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// lbz r10,82(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// stb r10,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r10.u8);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_822611B4:
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// addi r9,r31,120
	ctx.r9.s64 = ctx.r31.s64 + 120;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r8,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r8.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r3,-2
	ctx.r3.s64 = -2;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// sth r5,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r5.u16);
	// lbz r9,3(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// lbz r6,6(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 6);
	// lbz r8,5(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r10,7(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7);
	// rotlwi r5,r10,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// sth r3,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r3.u16);
	// rlwinm r6,r10,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lbz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226125c
	if (ctx.cr0.eq) goto loc_8226125C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,-4096
	ctx.r10.s64 = ctx.r10.s64 + -4096;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8226125C:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82261270:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82261270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82261270;
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r10,r11,29,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// beq cr6,0x822612a0
	if (ctx.cr6.eq) goto loc_822612A0;
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r11,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r11.u8);
loc_822612A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e07c
	ctx.lr = 0x822612A8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// addi r9,r31,216
	ctx.r9.s64 = ctx.r31.s64 + 216;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stb r27,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r27.u8);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82260d58
	ctx.lr = 0x822612D0;
	sub_82260D58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e5ac
	ctx.lr = 0x822612D8;
	__imp__ObReferenceObject(ctx, base);
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_822612F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82261300"))) PPC_WEAK_FUNC(sub_82261300);
PPC_FUNC_IMPL(__imp__sub_82261300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82261308;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8241e4bc
	ctx.lr = 0x82261318;
	__imp__KeEnterCriticalRegion(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82261320;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,203(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 203);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82261358
	if (!ctx.cr0.eq) goto loc_82261358;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,622
	ctx.r11.u64 = ctx.r11.u64 | 622;
	// stb r10,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r10.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x8241dddc
	ctx.lr = 0x82261348;
	__imp__NtClose(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x82261360
	goto loc_82261360;
loc_82261358:
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,622
	ctx.r30.u64 = ctx.r30.u64 | 622;
loc_82261360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82261368;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82261378
	if (ctx.cr6.lt) goto loc_82261378;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e5cc
	ctx.lr = 0x82261378;
	__imp__IoDeleteDevice(ctx, base);
loc_82261378:
	// bl 0x8241e49c
	ctx.lr = 0x8226137C;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82261388"))) PPC_WEAK_FUNC(sub_82261388);
PPC_FUNC_IMPL(__imp__sub_82261388) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,7260
	ctx.r11.s64 = ctx.r31.s64 + 7260;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bl 0x8241e51c
	ctx.lr = 0x822613B8;
	__imp__KeSetEvent(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,7260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7260);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8241e50c
	ctx.lr = 0x822613D0;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,7260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7260);
	// bl 0x8241de5c
	ctx.lr = 0x822613D8;
	__imp__ObDereferenceObject(ctx, base);
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

__attribute__((alias("__imp__sub_822613F0"))) PPC_WEAK_FUNC(sub_822613F0);
PPC_FUNC_IMPL(__imp__sub_822613F0) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,25414
	ctx.r4.s64 = 1665531904;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// ori r4,r4,29779
	ctx.r4.u64 = ctx.r4.u64 | 29779;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8241e5dc
	ctx.lr = 0x82261424;
	__imp__ExAllocatePoolTypeWithTag(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82261464
	if (ctx.cr0.eq) goto loc_82261464;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x8226143C;
	sub_82248F70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82261450
	if (ctx.cr6.eq) goto loc_82261450;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82261450:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82261464:
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

__attribute__((alias("__imp__sub_82261480"))) PPC_WEAK_FUNC(sub_82261480);
PPC_FUNC_IMPL(__imp__sub_82261480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82261488;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822613f0
	ctx.lr = 0x822614A4;
	sub_822613F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822615e0
	if (ctx.cr0.eq) goto loc_822615E0;
	// lbz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// clrlwi r5,r29,26
	ctx.r5.u64 = ctx.r29.u32 & 0x3F;
	// rlwinm r11,r11,26,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	// stb r5,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r5.u8);
	// sth r11,54(r30)
	PPC_STORE_U16(ctx.r30.u32 + 54, ctx.r11.u16);
	// bl 0x82248a40
	ctx.lr = 0x822614D0;
	sub_82248A40(ctx, base);
	// rlwinm. r11,r29,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822614e4
	if (ctx.cr0.eq) goto loc_822614E4;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r11.u8);
loc_822614E4:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// rlwinm. r6,r29,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r10,43(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,45(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// lbz r7,49(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,41(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r9,47(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// rlwinm r8,r4,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r4,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r4.u32);
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// stw r5,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r5.u32);
	// beq 0x82261590
	if (ctx.cr0.eq) goto loc_82261590;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82261590
	if (ctx.cr6.eq) goto loc_82261590;
	// stw r9,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r9.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// b 0x82261598
	goto loc_82261598;
loc_82261590:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82261598:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// bne cr6,0x822615c4
	if (!ctx.cr6.eq) goto loc_822615C4;
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// bne 0x822615c8
	if (!ctx.cr0.eq) goto loc_822615C8;
loc_822615C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822615C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822615E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822615EC"))) PPC_WEAK_FUNC(sub_822615EC);
PPC_FUNC_IMPL(__imp__sub_822615EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822615F0"))) PPC_WEAK_FUNC(sub_822615F0);
PPC_FUNC_IMPL(__imp__sub_822615F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822615F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822613f0
	ctx.lr = 0x82261608;
	sub_822613F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822616a0
	if (ctx.cr0.eq) goto loc_822616A0;
	// lbz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// lhz r11,54(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 54);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stb r5,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r5.u8);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
	// bl 0x82248a40
	ctx.lr = 0x82261630;
	sub_82248A40(ctx, base);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261648
	if (ctx.cr0.eq) goto loc_82261648;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82261648:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_822616A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822616AC"))) PPC_WEAK_FUNC(sub_822616AC);
PPC_FUNC_IMPL(__imp__sub_822616AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822616B0"))) PPC_WEAK_FUNC(sub_822616B0);
PPC_FUNC_IMPL(__imp__sub_822616B0) {
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
loc_822616C0:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bne 0x82261710
	if (!ctx.cr0.eq) goto loc_82261710;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822616ec
	if (ctx.cr6.eq) goto loc_822616EC;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822616EC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82261700
	if (ctx.cr6.eq) goto loc_82261700;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82261700:
	// bl 0x8241df2c
	ctx.lr = 0x82261704;
	__imp__ExFreePool(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822616c0
	if (!ctx.cr6.eq) goto loc_822616C0;
loc_82261710:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82261724"))) PPC_WEAK_FUNC(sub_82261724);
PPC_FUNC_IMPL(__imp__sub_82261724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261728"))) PPC_WEAK_FUNC(sub_82261728);
PPC_FUNC_IMPL(__imp__sub_82261728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82261730;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82261850
	if (!ctx.cr0.eq) goto loc_82261850;
	// addic r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfe r10,r10,r4
	temp.u8 = (~ctx.r10.u32 + ctx.r4.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82261850
	if (ctx.cr6.eq) goto loc_82261850;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261778
	if (ctx.cr6.eq) goto loc_82261778;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82261860
	goto loc_82261860;
loc_82261778:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x822615f0
	ctx.lr = 0x8226178C;
	sub_822615F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822617fc
	if (ctx.cr0.eq) goto loc_822617FC;
loc_82261794:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822617b8
	if (ctx.cr6.eq) goto loc_822617B8;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822617B8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82261804
	if (!ctx.cr0.eq) goto loc_82261804;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8226181c
	if (!ctx.cr6.eq) goto loc_8226181C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822615f0
	ctx.lr = 0x822617E4;
	sub_822615F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82261794
	if (!ctx.cr0.eq) goto loc_82261794;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822617fc
	if (ctx.cr6.eq) goto loc_822617FC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x822616b0
	ctx.lr = 0x822617FC;
	sub_822616B0(ctx, base);
loc_822617FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82261860
	goto loc_82261860;
loc_82261804:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bne cr6,0x82261814
	if (!ctx.cr6.eq) goto loc_82261814;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
loc_82261814:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x82261820
	goto loc_82261820;
loc_8226181C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82261820:
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82261860
	goto loc_82261860;
loc_82261850:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82261860:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82261868"))) PPC_WEAK_FUNC(sub_82261868);
PPC_FUNC_IMPL(__imp__sub_82261868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82261870;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82261884:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x822618b4
	goto loc_822618B4;
loc_8226188C:
	// addi r31,r11,-72
	ctx.r31.s64 = ctx.r11.s64 + -72;
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// lbz r6,-20(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20);
	// bl 0x8241e40c
	ctx.lr = 0x822618A8;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822618ec
	if (ctx.cr0.eq) goto loc_822618EC;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_822618B4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8226188c
	if (!ctx.cr6.eq) goto loc_8226188C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822618f4
	if (!ctx.cr6.eq) goto loc_822618F4;
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822618d8
	if (ctx.cr0.eq) goto loc_822618D8;
	// addi r30,r29,64
	ctx.r30.s64 = ctx.r29.s64 + 64;
	// b 0x822618e4
	goto loc_822618E4;
loc_822618D8:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822618f4
	if (ctx.cr6.eq) goto loc_822618F4;
loc_822618E4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82261884
	goto loc_82261884;
loc_822618EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822618f8
	goto loc_822618F8;
loc_822618F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822618F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82261900"))) PPC_WEAK_FUNC(sub_82261900);
PPC_FUNC_IMPL(__imp__sub_82261900) {
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82260ce8
	ctx.lr = 0x82261924;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82261960
	if (ctx.cr0.eq) goto loc_82261960;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82261964
	goto loc_82261964;
loc_82261960:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82261964:
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

__attribute__((alias("__imp__sub_82261978"))) PPC_WEAK_FUNC(sub_82261978);
PPC_FUNC_IMPL(__imp__sub_82261978) {
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
	// and. r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822619cc
	if (!ctx.cr0.eq) goto loc_822619CC;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822619cc
	if (!ctx.cr0.eq) goto loc_822619CC;
	// cmplwi cr6,r5,4096
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4096, ctx.xer);
	// blt cr6,0x822619cc
	if (ctx.cr6.lt) goto loc_822619CC;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r10,r6,4095
	ctx.r10.s64 = ctx.r6.s64 + 4095;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822619cc
	if (ctx.cr0.eq) goto loc_822619CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8241dd9c
	ctx.lr = 0x822619C0;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x822619d0
	if (ctx.cr0.eq) goto loc_822619D0;
loc_822619CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822619D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

